// Copyright Epic Games, Inc. All Rights Reserved.

#include "DgLabV3Protocol.h"

TArray<uint8> FDgLabV3Protocol::BuildB0Command(
	uint8 SequenceNumber,
	EDgLabStrengthMode ModeA,
	EDgLabStrengthMode ModeB,
	uint8 StrengthA,
	uint8 StrengthB,
	const FDgLabChannelWave& WaveA,
	const FDgLabChannelWave& WaveB)
{
	TArray<uint8> Command;
	Command.SetNum(20);

	// Byte 0: 指令头 0xB0
	Command[0] = 0xB0;

	// Byte 1: 序列号(高4位) + 强度解读方式(低4位)
	uint8 SequenceNibble = Clamp<uint8>(SequenceNumber, 0, 15) << 4;
	uint8 ModeNibble = EncodeStrengthMode(ModeA, ModeB);
	Command[1] = SequenceNibble | ModeNibble;

	// Byte 2-3: A通道和B通道强度设定值
	Command[2] = Clamp<uint8>(StrengthA, 0, 200);
	Command[3] = Clamp<uint8>(StrengthB, 0, 200);

	// Byte 4-7: A通道波形频率（4条）
	for (int32 i = 0; i < 4; i++)
	{
		Command[4 + i] = WaveA.WaveData.IsValidIndex(i) ? WaveA.WaveData[i].Frequency : 10;
	}

	// Byte 8-11: A通道波形强度（4条）
	for (int32 i = 0; i < 4; i++)
	{
		Command[8 + i] = WaveA.WaveData.IsValidIndex(i) ? WaveA.WaveData[i].Intensity : 0;
	}

	// Byte 12-15: B通道波形频率（4条）
	for (int32 i = 0; i < 4; i++)
	{
		Command[12 + i] = WaveB.WaveData.IsValidIndex(i) ? WaveB.WaveData[i].Frequency : 10;
	}

	// Byte 16-19: B通道波形强度（4条）
	for (int32 i = 0; i < 4; i++)
	{
		Command[16 + i] = WaveB.WaveData.IsValidIndex(i) ? WaveB.WaveData[i].Intensity : 0;
	}

	return Command;
}

TArray<uint8> FDgLabV3Protocol::BuildBFCommand(
	uint8 LimitA,
	uint8 LimitB,
	uint8 FreqBalanceA,
	uint8 FreqBalanceB,
	uint8 IntensityBalanceA,
	uint8 IntensityBalanceB)
{
	TArray<uint8> Command;
	Command.SetNum(7);

	// Byte 0: 指令头 0xBF
	Command[0] = 0xBF;

	// Byte 1-2: AB两通道强度软上限
	Command[1] = Clamp<uint8>(LimitA, 0, 200);
	Command[2] = Clamp<uint8>(LimitB, 0, 200);

	// Byte 3-4: AB两通道波形频率平衡参数
	Command[3] = FreqBalanceA;
	Command[4] = FreqBalanceB;

	// Byte 5-6: AB两通道波形强度平衡参数
	Command[5] = IntensityBalanceA;
	Command[6] = IntensityBalanceB;

	return Command;
}

bool FDgLabV3Protocol::ParseB1Message(const TArray<uint8>& Data, FDgLabB1Message& OutMessage)
{
	// B1消息格式: 0xB1 + 序列号(1byte) + A通道强度(1byte) + B通道强度(1byte)
	if (Data.Num() < 4 || Data[0] != 0xB1)
	{
		return false;
	}

	OutMessage.SequenceNumber = Data[1];
	OutMessage.StrengthA = Data[2];
	OutMessage.StrengthB = Data[3];

	return true;
}

uint8 FDgLabV3Protocol::MapFrequency(int32 InputFrequency)
{
	// 输入范围 10-1000，映射到协议频率 10-240
	InputFrequency = Clamp<int32>(InputFrequency, 10, 1000);

	if (InputFrequency >= 10 && InputFrequency <= 100)
	{
		// 直接映射
		return static_cast<uint8>(InputFrequency);
	}
	else if (InputFrequency >= 101 && InputFrequency <= 600)
	{
		// (输入值 - 100) / 5 + 100
		return static_cast<uint8>((InputFrequency - 100) / 5 + 100);
	}
	else // 601-1000
	{
		// (输入值 - 600) / 10 + 200
		return static_cast<uint8>((InputFrequency - 600) / 10 + 200);
	}
}

FDgLabChannelWave FDgLabV3Protocol::GeneratePresetWave(
	EDgLabWavePreset Preset,
	int32 BaseFrequency,
	int32 BaseIntensity)
{
	FDgLabChannelWave Wave;
	uint8 MappedFreq = MapFrequency(BaseFrequency);
	uint8 ClampedIntensity = Clamp<uint8>(BaseIntensity, 0, 100);

	switch (Preset)
	{
	case EDgLabWavePreset::Constant:
		// 恒定输出 - 固定频率和强度
		Wave.SetUniform(MappedFreq, ClampedIntensity);
		break;

	case EDgLabWavePreset::Pulse:
		// 脉冲 - 第一个25ms有输出，后面3个为0
		Wave.WaveData[0] = FDgLabWaveData(MappedFreq, ClampedIntensity);
		Wave.WaveData[1] = FDgLabWaveData(MappedFreq, 0);
		Wave.WaveData[2] = FDgLabWaveData(MappedFreq, 0);
		Wave.WaveData[3] = FDgLabWaveData(MappedFreq, 0);
		break;

	case EDgLabWavePreset::Wave:
		// 波浪 - 渐强渐弱
		Wave.WaveData[0] = FDgLabWaveData(MappedFreq, ClampedIntensity / 4);
		Wave.WaveData[1] = FDgLabWaveData(MappedFreq, ClampedIntensity / 2);
		Wave.WaveData[2] = FDgLabWaveData(MappedFreq, ClampedIntensity);
		Wave.WaveData[3] = FDgLabWaveData(MappedFreq, ClampedIntensity / 2);
		break;

	case EDgLabWavePreset::Breathing:
		// 呼吸 - 慢速渐强渐弱
		Wave.WaveData[0] = FDgLabWaveData(MappedFreq, ClampedIntensity / 3);
		Wave.WaveData[1] = FDgLabWaveData(MappedFreq, ClampedIntensity * 2 / 3);
		Wave.WaveData[2] = FDgLabWaveData(MappedFreq, ClampedIntensity);
		Wave.WaveData[3] = FDgLabWaveData(MappedFreq, ClampedIntensity / 2);
		break;

	case EDgLabWavePreset::Heartbeat:
		// 心跳 - 两次快速脉冲
		Wave.WaveData[0] = FDgLabWaveData(MappedFreq, ClampedIntensity);
		Wave.WaveData[1] = FDgLabWaveData(MappedFreq, ClampedIntensity / 3);
		Wave.WaveData[2] = FDgLabWaveData(MappedFreq, ClampedIntensity);
		Wave.WaveData[3] = FDgLabWaveData(MappedFreq, 0);
		break;

	case EDgLabWavePreset::Rhythm:
		// 节奏 - 强弱交替
		Wave.WaveData[0] = FDgLabWaveData(MappedFreq, ClampedIntensity);
		Wave.WaveData[1] = FDgLabWaveData(MappedFreq, ClampedIntensity / 2);
		Wave.WaveData[2] = FDgLabWaveData(MappedFreq, ClampedIntensity);
		Wave.WaveData[3] = FDgLabWaveData(MappedFreq, ClampedIntensity / 2);
		break;

	case EDgLabWavePreset::Gentle:
		// 轻柔 - 低频低强度
		{
			uint8 GentleFreq = MapFrequency(50);
			Wave.SetUniform(GentleFreq, FMath::Min(ClampedIntensity, static_cast<uint8>(40)));
		}
		break;

	case EDgLabWavePreset::Medium:
		// 中等 - 中频中强度
		{
			uint8 MediumFreq = MapFrequency(100);
			Wave.SetUniform(MediumFreq, FMath::Min(ClampedIntensity, static_cast<uint8>(70)));
		}
		break;

	case EDgLabWavePreset::Strong:
		// 强劲 - 高频高强度
		{
			uint8 StrongFreq = MapFrequency(200);
			Wave.SetUniform(StrongFreq, ClampedIntensity);
		}
		break;

	case EDgLabWavePreset::Random:
		// 随机 - 每个25ms都不同
		for (int32 i = 0; i < 4; i++)
		{
			uint8 RandomIntensity = FMath::RandRange(0, ClampedIntensity);
			Wave.WaveData[i] = FDgLabWaveData(MappedFreq, RandomIntensity);
		}
		break;

	case EDgLabWavePreset::Custom:
	default:
		// 自定义 - 返回空波形
		Wave.SetUniform(MappedFreq, 0);
		break;
	}

	return Wave;
}

FDgLabChannelWave FDgLabV3Protocol::CreateEmptyWave()
{
	FDgLabChannelWave Wave;
	Wave.SetInvalid(); // 设置为无效数据，停止输出
	return Wave;
}

uint8 FDgLabV3Protocol::EncodeStrengthMode(EDgLabStrengthMode ModeA, EDgLabStrengthMode ModeB)
{
	// A通道在高2位，B通道在低2位
	uint8 ModeABits = 0;
	uint8 ModeBBits = 0;

	switch (ModeA)
	{
	case EDgLabStrengthMode::NoChange:   ModeABits = 0b00; break;
	case EDgLabStrengthMode::Increase:   ModeABits = 0b01; break;
	case EDgLabStrengthMode::Decrease:   ModeABits = 0b10; break;
	case EDgLabStrengthMode::Absolute:   ModeABits = 0b11; break;
	}

	switch (ModeB)
	{
	case EDgLabStrengthMode::NoChange:   ModeBBits = 0b00; break;
	case EDgLabStrengthMode::Increase:   ModeBBits = 0b01; break;
	case EDgLabStrengthMode::Decrease:   ModeBBits = 0b10; break;
	case EDgLabStrengthMode::Absolute:   ModeBBits = 0b11; break;
	}

	return (ModeABits << 2) | ModeBBits;
}

