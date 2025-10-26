# DG-LAB for Unreal Engine - API 参考文档（中文）

> 版本：1.0  
> 平台支持：Windows (蓝牙), Android  
> 设备支持：DG-LAB 郊狼3.0 (47L121000)

---

## 目录

- [快速开始](#快速开始)
- [组件：DgLabBluetoothComponent](#组件dglabbluetoothcomponent)
  - [蓝牙扫描功能](#蓝牙扫描功能)
  - [蓝牙连接功能](#蓝牙连接功能)
  - [设备控制功能](#设备控制功能)
  - [蓝图事件](#蓝图事件)
  - [配置选项](#配置选项)
- [枚举类型](#枚举类型)
- [数据结构](#数据结构)
- [使用示例](#使用示例)

---

## 快速开始

### 基本使用流程

1. **添加组件**：将 `DgLabBluetoothComponent` 添加到任意 Actor
2. **绑定事件**：在蓝图中绑定 `OnDeviceFound` 和 `OnScanCompleteWithDevices` 事件
3. **开始扫描**：调用 `StartScan(10.0)` 扫描10秒
4. **连接设备**：在扫描完成事件中获取设备列表，调用 `ConnectToDeviceByInfo` 连接
5. **控制设备**：连接成功后使用 `StartOutput` 和 `SendWaveOutput` 控制输出

---

## 组件：DgLabBluetoothComponent

主要组件，提供完整的蓝牙扫描、连接和设备控制功能。

### 蓝牙扫描功能

#### StartScan
```
bool StartScan(float ScanDuration = 10.0)
```

**功能**：开始扫描周围的 DG-LAB 蓝牙设备

**参数**：
- `ScanDuration` (浮点数)：扫描持续时间（秒），0表示持续扫描直到手动停止

**返回值**：
- `bool`：是否成功开始扫描

**使用说明**：
- 扫描期间会触发 `OnDeviceFound` 事件（每发现一个设备触发一次）
- 扫描结束后触发 `OnScanCompleteWithDevices` 事件

---

#### StopScan
```
void StopScan()
```

**功能**：停止当前扫描

**使用说明**：
- 可用于提前终止扫描
- 停止后会触发扫描完成事件

---

#### IsScanning
```
bool IsScanning()
```

**功能**：检查是否正在扫描

**返回值**：
- `bool`：true = 正在扫描，false = 未扫描

---

#### ClearDiscoveredDevices
```
void ClearDiscoveredDevices()
```

**功能**：清空已发现的设备列表

**使用说明**：
- 用于在开始新扫描前清理旧数据

---

#### GetDiscoveredDevices
```
TArray<FDgLabDeviceInfo> GetDiscoveredDevices()
```

**功能**：获取已发现的设备列表

**返回值**：
- `TArray<FDgLabDeviceInfo>`：设备信息数组

---

#### GetDiscoveredDeviceCount
```
int32 GetDiscoveredDeviceCount()
```

**功能**：获取已发现的设备数量

**返回值**：
- `int32`：设备数量

---

### 蓝牙连接功能

#### ConnectToDevice
```
bool ConnectToDevice(const FString& DeviceAddress)
```

**功能**：连接到指定的设备

**参数**：
- `DeviceAddress` (字符串)：设备蓝牙地址（MAC格式：XX:XX:XX:XX:XX:XX）

**返回值**：
- `bool`：是否成功发起连接

**使用说明**：
- 连接是异步的，通过 `OnConnectionStateChanged` 事件获取连接结果
- 连接成功后状态变为 `Connected`

---

#### ConnectToDeviceByInfo
```
bool ConnectToDeviceByInfo(const FDgLabDeviceInfo& DeviceInfo)
```

**功能**：通过设备信息连接设备（推荐）

**参数**：
- `DeviceInfo` (设备信息结构)：从扫描结果中获取的设备信息

**返回值**：
- `bool`：是否成功发起连接

**使用说明**：
- 推荐使用此方法，因为包含完整的设备信息

---

#### Disconnect
```
void Disconnect()
```

**功能**：断开当前连接

**使用说明**：
- 会触发 `OnConnectionStateChanged` 事件，状态变为 `Disconnected`

---

#### IsConnected
```
bool IsConnected()
```

**功能**：检查是否已连接到设备

**返回值**：
- `bool`：true = 已连接，false = 未连接

---

#### GetConnectionState
```
EDgLabConnectionState GetConnectionState()
```

**功能**：获取当前连接状态

**返回值**：
- `EDgLabConnectionState`：当前连接状态（枚举）

---

#### GetConnectedDeviceInfo
```
FDgLabDeviceInfo GetConnectedDeviceInfo()
```

**功能**：获取当前连接的设备信息

**返回值**：
- `FDgLabDeviceInfo`：设备信息结构

---

### 设备控制功能

#### StartOutput
```
void StartOutput(
    EDgLabChannel Channel = Both,
    EDgLabWavePreset WavePreset = Constant,
    int32 Frequency = 100,
    int32 Intensity = 50
)
```

**功能**：设置波形输出参数（不会自动发送）

**参数**：
- `Channel` (枚举)：通道选择（ChannelA / ChannelB / Both）
- `WavePreset` (枚举)：波形预设类型
- `Frequency` (整数)：基础频率，范围 10-1000
- `Intensity` (整数)：基础强度，范围 0-100

**使用说明**：
- 调用后需要配合 `SendWaveOutput` 才会实际发送
- 建议使用 Timer 每 0.1 秒调用一次 `SendWaveOutput`

---

#### SendWaveOutput
```
void SendWaveOutput()
```

**功能**：发送当前波形输出（单次发送）

**使用说明**：
- 需要先调用 `StartOutput` 设置波形参数
- **重要**：需要定期调用（每 0.1 秒）才能持续输出
- 建议在蓝图中使用 "Set Timer by Event" 节点

**示例流程**：
1. 调用 `StartOutput` 设置波形
2. 使用 Timer 每 0.1 秒调用 `SendWaveOutput`
3. 调用 `StopOutput` 停止

---

#### StopOutput
```
void StopOutput()
```

**功能**：停止波形输出

**使用说明**：
- 会清空波形参数
- 需要再次调用 `SendWaveOutput` 发送停止指令

---

#### IncreaseStrength
```
void IncreaseStrength(EDgLabChannel Channel, int32 Value = 5)
```

**功能**：增大指定通道的强度

**参数**：
- `Channel` (枚举)：通道选择
- `Value` (整数)：增加的强度值，默认5

**使用说明**：
- 强度最大值为 200
- 会触发 `OnStrengthUpdated` 事件

---

#### DecreaseStrength
```
void DecreaseStrength(EDgLabChannel Channel, int32 Value = 5)
```

**功能**：减小指定通道的强度

**参数**：
- `Channel` (枚举)：通道选择
- `Value` (整数)：减小的强度值，默认5

**使用说明**：
- 强度最小值为 0
- 会触发 `OnStrengthUpdated` 事件

---

#### SetStrength
```
void SetStrength(EDgLabChannel Channel, int32 Value)
```

**功能**：设置指定通道的绝对强度

**参数**：
- `Channel` (枚举)：通道选择
- `Value` (整数)：强度值，范围 0-200

**使用说明**：
- 会触发 `OnStrengthUpdated` 事件

---

#### SendPulse
```
void SendPulse(EDgLabChannel Channel, int32 Intensity = 80, int32 Frequency = 100)
```

**功能**：发送单次脉冲（电击）

**参数**：
- `Channel` (枚举)：通道选择
- `Intensity` (整数)：脉冲强度，范围 0-100
- `Frequency` (整数)：脉冲频率，范围 10-1000

**使用说明**：
- 发送后会立即执行一次短暂的电击
- 不影响持续输出状态

---

#### SetWavePreset
```
void SetWavePreset(
    EDgLabChannel Channel,
    EDgLabWavePreset WavePreset,
    int32 Frequency = 100,
    int32 Intensity = 50
)
```

**功能**：设置波形预设

**参数**：
- `Channel` (枚举)：通道选择
- `WavePreset` (枚举)：波形预设类型
- `Frequency` (整数)：基础频率，范围 10-1000
- `Intensity` (整数)：基础强度，范围 0-100

**使用说明**：
- 等同于调用 `StartOutput`
- 需要配合 `SendWaveOutput` 使用

---

#### SetStrengthLimit
```
void SetStrengthLimit(int32 LimitA = 150, int32 LimitB = 150)
```

**功能**：设置通道强度软上限

**参数**：
- `LimitA` (整数)：A通道强度上限，范围 0-200
- `LimitB` (整数)：B通道强度上限，范围 0-200

**使用说明**：
- **客户端和设备端双重限制**：同时在UE客户端和DG-LAB设备端应用上限
- 防止强度过高造成不适
- 建议根据使用场景设置合理上限
- 如果当前强度超过新设置的上限，会自动调整到上限值
- 后续的 `IncreaseStrength`、`DecreaseStrength`、`SetStrength` 都会受此上限限制
- 参考：[DG-LAB开源协议 - BF指令](https://github.com/DG-LAB-OPENSOURCE/DG-LAB-OPENSOURCE)

---

#### ReadBattery
```
void ReadBattery()
```

**功能**：读取设备电量

**使用说明**：
- 读取结果通过 `OnBatteryUpdated` 事件返回

---

#### GetCurrentStrengthA
```
int32 GetCurrentStrengthA()
```

**功能**：获取当前A通道强度

**返回值**：
- `int32`：当前强度值（0-200）

---

#### GetCurrentStrengthB
```
int32 GetCurrentStrengthB()
```

**功能**：获取当前B通道强度

**返回值**：
- `int32`：当前强度值（0-200）

---

#### IsOutputting
```
bool IsOutputting()
```

**功能**：检查是否正在输出

**返回值**：
- `bool`：true = 正在输出，false = 未输出

---

### 蓝图事件

#### OnDeviceFound
```
Event OnDeviceFound(FDgLabDeviceInfo DeviceInfo)
```

**触发时机**：每发现一个新设备时触发

**参数**：
- `DeviceInfo`：发现的设备信息

**使用场景**：
- 实时显示扫描到的设备
- 构建设备列表UI

---

#### OnScanComplete
```
Event OnScanComplete()
```

**触发时机**：扫描完成时触发（不带参数）

**使用说明**：
- 简单的扫描完成通知
- 推荐使用 `OnScanCompleteWithDevices` 获取设备列表

---

#### OnScanCompleteWithDevices
```
Event OnScanCompleteWithDevices(TArray<FDgLabDeviceInfo> Devices)
```

**触发时机**：扫描完成时触发，返回所有发现的设备

**参数**：
- `Devices`：所有发现的设备数组

**使用场景**：
- **推荐使用**此事件
- 一次性获取所有扫描结果
- 方便构建设备选择界面

---

#### OnConnectionStateChanged
```
Event OnConnectionStateChanged(EDgLabConnectionState NewState)
```

**触发时机**：连接状态改变时触发

**参数**：
- `NewState`：新的连接状态

**状态说明**：
- `Disconnected`：已断开
- `Scanning`：扫描中
- `Connecting`：连接中
- `Connected`：已连接
- `Error`：错误

---

#### OnBluetoothError
```
Event OnBluetoothError(EDgLabBluetoothError ErrorType)
```

**触发时机**：发生蓝牙错误时触发

**参数**：
- `ErrorType`：错误类型

**常见错误**：
- `AdapterNotFound`：未找到蓝牙适配器
- `PermissionDenied`：权限被拒绝（Android需要运行时授权）
- `ConnectionFailed`：连接失败
- `ScanFailed`：扫描失败

---

#### OnStrengthUpdated
```
Event OnStrengthUpdated(int32 StrengthA, int32 StrengthB)
```

**触发时机**：强度更新时触发

**参数**：
- `StrengthA`：A通道强度（0-200）
- `StrengthB`：B通道强度（0-200）

---

#### OnBatteryUpdated
```
Event OnBatteryUpdated(int32 BatteryLevel)
```

**触发时机**：电量更新时触发

**参数**：
- `BatteryLevel`：电量百分比（0-100）

---

### 配置选项

#### bAutoInitialize
```
bool bAutoInitialize = true
```

**功能**：是否在 BeginPlay 时自动初始化蓝牙

**说明**：
- 默认启用
- 如果关闭，蓝牙功能将不可用

---

#### bFilterDgLabDevicesOnly
```
bool bFilterDgLabDevicesOnly = true
```

**功能**：是否只显示 DG-LAB 设备（过滤其他蓝牙设备）

**说明**：
- 推荐开启
- 关闭后会显示所有BLE设备

---

#### SignalStrengthThreshold
```
int32 SignalStrengthThreshold = -80
```

**功能**：扫描信号强度阈值（RSSI dBm）

**说明**：
- 范围：-100 到 0
- 数值越大信号越强
- 低于此值的设备会被过滤
- 默认 -80 dBm（中等距离）

---

## 枚举类型

### EDgLabConnectionState
**连接状态**

| 值 | 显示名称 | 说明 |
|---|---|---|
| `Disconnected` | 已断开 | 未连接状态 |
| `Scanning` | 扫描中 | 正在扫描设备 |
| `Connecting` | 连接中 | 正在连接设备 |
| `Connected` | 已连接 | 已成功连接 |
| `Error` | 错误 | 发生错误 |

---

### EDgLabDeviceType
**设备类型**

| 值 | 显示名称 | 说明 |
|---|---|---|
| `Unknown` | 未知设备 | 无法识别的设备 |
| `Coyote3_0` | 郊狼3.0 | DG-LAB 郊狼3.0设备（47L121000） |
| `Sensor` | 无线传感器 | DG-LAB 无线传感器（47L120100） |

---

### EDgLabBluetoothError
**蓝牙错误类型**

| 值 | 显示名称 | 说明 |
|---|---|---|
| `None` | 无错误 | 正常状态 |
| `AdapterNotFound` | 未找到蓝牙适配器 | 设备不支持蓝牙 |
| `AdapterDisabled` | 蓝牙适配器已禁用 | 蓝牙未开启 |
| `ScanFailed` | 扫描失败 | 扫描过程出错 |
| `ConnectionFailed` | 连接失败 | 无法连接设备 |
| `DeviceNotFound` | 设备未找到 | 指定设备不存在 |
| `ServiceNotFound` | 服务未找到 | BLE服务不可用 |
| `CharacteristicNotFound` | 特性未找到 | BLE特性不可用 |
| `PermissionDenied` | 权限被拒绝 | 缺少蓝牙权限（Android） |
| `PlatformNotSupported` | 平台不支持 | 当前平台不支持蓝牙 |
| `Unknown` | 未知错误 | 其他错误 |

---

### EDgLabChannel
**通道选择**

| 值 | 显示名称 | 说明 |
|---|---|---|
| `ChannelA` | 通道A | 仅A通道 |
| `ChannelB` | 通道B | 仅B通道 |
| `Both` | AB通道 | 同时控制AB通道 |

---

### EDgLabWavePreset
**波形预设**

| 值 | 显示名称 | 说明 |
|---|---|---|
| `Constant` | 恒定输出 | 固定频率和强度 |
| `Pulse` | 脉冲 | 单次脉冲 |
| `Wave` | 波浪 | 渐强渐弱 |
| `Breathing` | 呼吸 | 模拟呼吸节奏 |
| `Heartbeat` | 心跳 | 模拟心跳 |
| `Rhythm` | 节奏 | 有节奏的变化 |
| `Gentle` | 轻柔 | 低频轻柔 |
| `Medium` | 中等 | 中频适中 |
| `Strong` | 强劲 | 高频强劲 |
| `Random` | 随机 | 随机变化 |
| `Custom` | 自定义 | 用户自定义 |

---

## 数据结构

### FDgLabDeviceInfo
**设备信息结构**

| 字段 | 类型 | 说明 |
|---|---|---|
| `DeviceAddress` | String | 设备蓝牙地址（MAC格式） |
| `DeviceName` | String | 设备名称 |
| `DeviceType` | EDgLabDeviceType | 设备类型 |
| `SignalStrength` | int32 | 信号强度（RSSI dBm），数值越大信号越强 |
| `bIsPaired` | bool | 是否已配对 |
| `bIsConnectable` | bool | 是否可连接 |

---

## 使用示例

### 示例1：基本扫描和连接流程

**蓝图节点流程**：

1. **BeginPlay 事件**
   - 调用 `StartScan(10.0)`

2. **OnScanCompleteWithDevices 事件**
   - 获取 Devices 数组
   - 检查数组长度 > 0
   - 选择第一个设备：`Get (a copy) [Index 0]`
   - 调用 `ConnectToDeviceByInfo(DeviceInfo)`

3. **OnConnectionStateChanged 事件**
   - 判断 NewState == Connected
   - 如果是，显示"连接成功"

---

### 示例2：持续波形输出

**蓝图节点流程**：

1. **连接成功后**
   - 调用 `StartOutput(Both, Constant, 100, 50)`
   - 使用 "Set Timer by Event" 节点
   - Time: 0.1 秒
   - Looping: true
   - 绑定到自定义事件 "SendWave"

2. **SendWave 自定义事件**
   - 调用 `SendWaveOutput()`

3. **停止输出**
   - 清除 Timer
   - 调用 `StopOutput()`
   - 调用 `SendWaveOutput()`（发送停止指令）

---

### 示例3：强度控制

**蓝图节点流程**：

1. **按键E - 增大A通道强度**
   - 调用 `IncreaseStrength(ChannelA, 5)`

2. **按键Q - 减小A通道强度**
   - 调用 `DecreaseStrength(ChannelA, 5)`

3. **OnStrengthUpdated 事件**
   - 获取 StrengthA 和 StrengthB
   - 更新UI显示当前强度

---

### 示例4：发送脉冲

**蓝图节点流程**：

1. **按键F - 发送单次脉冲**
   - 调用 `SendPulse(Both, 80, 150)`
   - 参数说明：双通道，强度80，频率150Hz

---

## 平台特定说明

### Windows 平台
- 支持蓝牙 4.0+ (Bluetooth LE)
- 需要 Windows 10 或更高版本
- 自动请求蓝牙权限

### Android 平台
- 支持蓝牙 4.0+ (Bluetooth LE)
- 需要 Android 6.0 或更高版本
- **重要**：首次运行时会弹出权限请求，必须允许以下权限：
  - 蓝牙扫描（Bluetooth Scan）
  - 蓝牙连接（Bluetooth Connect）
  - 位置（Location）- Android 11及以下需要
- 如果权限被拒绝，会触发 `OnBluetoothError` 事件，错误类型为 `PermissionDenied`

---

## 注意事项

1. **定期发送指令**：使用 `SendWaveOutput` 时必须定期调用（推荐 0.1 秒），否则设备会停止输出

2. **安全上限**：强烈建议使用 `SetStrengthLimit` 设置合理的强度上限，防止误操作

3. **电量监控**：定期调用 `ReadBattery` 监控设备电量，低电量时提醒用户充电

4. **错误处理**：务必绑定 `OnBluetoothError` 事件，处理可能的错误情况

5. **连接状态**：在执行控制操作前，确保 `IsConnected()` 返回 true

6. **Android 权限**：Android 平台必须授予所有请求的权限，否则无法使用蓝牙功能

---

## 技术支持

如有问题或建议，请访问项目仓库提交 Issue。

**相关资源**：
- DG-LAB 官方网站：https://www.dungeon-lab.com/
- 协议文档：参考 DG-LAB V3 协议规范

---

## 版本历史

### v1.0.1 (2025-10-25)
- **修复**：SetStrengthLimit 现在正确生效
  - 客户端会保存上限值并在所有强度操作中检查
  - 设置上限后如果当前强度超过会自动调整
  - IncreaseStrength/DecreaseStrength/SetStrength 都会受上限限制
  - 超过上限时会在日志中显示警告

### v1.0 (2025-10-25)
- 首次发布
- 支持 Windows 和 Android 平台
- 支持郊狼3.0设备
- 完整的蓝牙扫描、连接和控制功能

