// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "DgLabV3Protocol.generated.h"

/**
 * DG-LAB通道枚举
 */
UENUM(BlueprintType)
enum class EDgLabChannel : uint8
{
	ChannelA UMETA(DisplayName = "通道A"),
	ChannelB UMETA(DisplayName = "通道B"),
	Both UMETA(DisplayName = "AB通道")
};

/**
 * 强度变化模式
 */
UENUM(BlueprintType)
enum class EDgLabStrengthMode : uint8
{
	NoChange UMETA(DisplayName = "不改变"),
	Increase UMETA(DisplayName = "相对增加"),
	Decrease UMETA(DisplayName = "相对减少"),
	Absolute UMETA(DisplayName = "绝对设置")
};

/**
 * 波形预设类型
 */
UENUM(BlueprintType)
enum class EDgLabWavePreset : uint8
{
	// 基础波形
	Constant UMETA(DisplayName = "恒定输出"),          // 固定频率和强度
	Pulse UMETA(DisplayName = "脉冲"),                // 单次脉冲
	Wave UMETA(DisplayName = "波浪"),                 // 渐强渐弱
	
	// 节奏波形
	Breathing UMETA(DisplayName = "呼吸"),            // 模拟呼吸节奏
	Heartbeat UMETA(DisplayName = "心跳"),            // 模拟心跳
	Rhythm UMETA(DisplayName = "节奏"),               // 有节奏的变化
	
	// 强度波形
	Gentle UMETA(DisplayName = "轻柔"),               // 低频轻柔
	Medium UMETA(DisplayName = "中等"),               // 中频适中
	Strong UMETA(DisplayName = "强劲"),               // 高频强劲
	
	// 特殊波形
	Random UMETA(DisplayName = "随机"),               // 随机变化
	Custom UMETA(DisplayName = "自定义")              // 用户自定义
};

/**
 * 波形数据结构（25ms数据）
 */
USTRUCT(BlueprintType)
struct DGLABFORUE_API FDgLabWaveData
{
	GENERATED_BODY()

	/** 波形频率 (10-240, 映射自10-1000) */
	UPROPERTY(BlueprintReadWrite, Category = "DgLab|Wave")
	uint8 Frequency = 10;

	/** 波形强度 (0-100) */
	UPROPERTY(BlueprintReadWrite, Category = "DgLab|Wave")
	uint8 Intensity = 0;

	FDgLabWaveData() : Frequency(10), Intensity(0) {}
	FDgLabWaveData(uint8 InFreq, uint8 InIntensity) : Frequency(InFreq), Intensity(InIntensity) {}
};

/**
 * 通道波形数据（包含4组25ms数据，共100ms）
 */
USTRUCT(BlueprintType)
struct DGLABFORUE_API FDgLabChannelWave
{
	GENERATED_BODY()

	/** 4组波形数据（每组25ms） */
	UPROPERTY(BlueprintReadWrite, Category = "DgLab|Wave")
	TArray<FDgLabWaveData> WaveData;

	FDgLabChannelWave()
	{
		// 初始化4组空数据
		WaveData.SetNum(4);
	}

	/** 设置所有数据为相同值 */
	void SetUniform(uint8 Frequency, uint8 Intensity)
	{
		for (int32 i = 0; i < 4; i++)
		{
			WaveData[i].Frequency = Frequency;
			WaveData[i].Intensity = Intensity;
		}
	}

	/** 设置为无效数据（停止输出） */
	void SetInvalid()
	{
		SetUniform(0, 101); // 强度>100为无效
	}

	/** 检查是否有效 */
	bool IsValid() const
	{
		for (const FDgLabWaveData& Data : WaveData)
		{
			if (Data.Frequency < 10 || Data.Frequency > 240 || Data.Intensity > 100)
			{
				return false;
			}
		}
		return true;
	}
};

/**
 * B1消息数据（强度反馈）
 */
USTRUCT(BlueprintType)
struct DGLABFORUE_API FDgLabB1Message
{
	GENERATED_BODY()

	/** 序列号 */
	UPROPERTY(BlueprintReadOnly, Category = "DgLab|Protocol")
	uint8 SequenceNumber = 0;

	/** A通道当前强度 */
	UPROPERTY(BlueprintReadOnly, Category = "DgLab|Protocol")
	uint8 StrengthA = 0;

	/** B通道当前强度 */
	UPROPERTY(BlueprintReadOnly, Category = "DgLab|Protocol")
	uint8 StrengthB = 0;
};

/**
 * DG-LAB V3协议处理类
 * 负责编码和解码DG-LAB V3协议的蓝牙指令
 */
class DGLABFORUE_API FDgLabV3Protocol
{
public:
	/**
	 * 构建B0指令（通道强度和波形控制）
	 * @param SequenceNumber 序列号 (0-15)
	 * @param ModeA A通道强度解读方式
	 * @param ModeB B通道强度解读方式
	 * @param StrengthA A通道强度设定值 (0-200)
	 * @param StrengthB B通道强度设定值 (0-200)
	 * @param WaveA A通道波形数据
	 * @param WaveB B通道波形数据
	 * @return 20字节的B0指令数据
	 */
	static TArray<uint8> BuildB0Command(
		uint8 SequenceNumber,
		EDgLabStrengthMode ModeA,
		EDgLabStrengthMode ModeB,
		uint8 StrengthA,
		uint8 StrengthB,
		const FDgLabChannelWave& WaveA,
		const FDgLabChannelWave& WaveB
	);

	/**
	 * 构建BF指令（软上限和平衡参数设置）
	 * @param LimitA A通道强度软上限 (0-200)
	 * @param LimitB B通道强度软上限 (0-200)
	 * @param FreqBalanceA A通道频率平衡参数 (0-255)
	 * @param FreqBalanceB B通道频率平衡参数 (0-255)
	 * @param IntensityBalanceA A通道强度平衡参数 (0-255)
	 * @param IntensityBalanceB B通道强度平衡参数 (0-255)
	 * @return 7字节的BF指令数据
	 */
	static TArray<uint8> BuildBFCommand(
		uint8 LimitA,
		uint8 LimitB,
		uint8 FreqBalanceA = 128,
		uint8 FreqBalanceB = 128,
		uint8 IntensityBalanceA = 128,
		uint8 IntensityBalanceB = 128
	);

	/**
	 * 解析B1消息（强度反馈）
	 * @param Data 接收到的数据
	 * @param OutMessage 解析后的消息
	 * @return 是否解析成功
	 */
	static bool ParseB1Message(const TArray<uint8>& Data, FDgLabB1Message& OutMessage);

	/**
	 * 将频率值映射为协议频率 (10-1000 -> 10-240)
	 * @param InputFrequency 输入频率 (10-1000)
	 * @return 协议频率 (10-240)
	 */
	static uint8 MapFrequency(int32 InputFrequency);

	/**
	 * 生成预设波形
	 * @param Preset 波形预设类型
	 * @param BaseFrequency 基础频率 (10-1000)
	 * @param BaseIntensity 基础强度 (0-100)
	 * @return 通道波形数据
	 */
	static FDgLabChannelWave GeneratePresetWave(
		EDgLabWavePreset Preset,
		int32 BaseFrequency = 100,
		int32 BaseIntensity = 50
	);

	/**
	 * 创建空波形（停止输出）
	 */
	static FDgLabChannelWave CreateEmptyWave();

private:
	/** 将强度模式转换为协议格式 */
	static uint8 EncodeStrengthMode(EDgLabStrengthMode ModeA, EDgLabStrengthMode ModeB);

	/** 限制数值范围 */
	template<typename T>
	static T Clamp(T Value, T Min, T Max)
	{
		return Value < Min ? Min : (Value > Max ? Max : Value);
	}
};

