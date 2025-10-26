# DG-LAB for Unreal Engine - API Reference (English)

> Version: 1.0  
> Platform Support: Windows (Bluetooth), Android  
> Device Support: DG-LAB Coyote 3.0 (47L121000)

---

## Table of Contents

- [Quick Start](#quick-start)
- [Component: DgLabBluetoothComponent](#component-dglabbluetoothcomponent)
  - [Bluetooth Scanning](#bluetooth-scanning)
  - [Bluetooth Connection](#bluetooth-connection)
  - [Device Control](#device-control)
  - [Blueprint Events](#blueprint-events)
  - [Configuration Options](#configuration-options)
- [Enumerations](#enumerations)
- [Data Structures](#data-structures)
- [Usage Examples](#usage-examples)

---

## Quick Start

### Basic Usage Flow

1. **Add Component**: Add `DgLabBluetoothComponent` to any Actor
2. **Bind Events**: Bind `OnDeviceFound` and `OnScanCompleteWithDevices` events in Blueprint
3. **Start Scanning**: Call `StartScan(10.0)` to scan for 10 seconds
4. **Connect Device**: Get device list from scan complete event, call `ConnectToDeviceByInfo` to connect
5. **Control Device**: After connection success, use `StartOutput` and `SendWaveOutput` to control output

---

## Component: DgLabBluetoothComponent

Main component providing complete Bluetooth scanning, connection, and device control functionality.

### Bluetooth Scanning

#### StartScan
```
bool StartScan(float ScanDuration = 10.0)
```

**Description**: Start scanning for nearby DG-LAB Bluetooth devices

**Parameters**:
- `ScanDuration` (float): Scan duration in seconds, 0 means continuous scanning until manually stopped

**Returns**:
- `bool`: Whether scan started successfully

**Notes**:
- Triggers `OnDeviceFound` event during scanning (once per discovered device)
- Triggers `OnScanCompleteWithDevices` event when scan completes

---

#### StopScan
```
void StopScan()
```

**Description**: Stop current scanning

**Notes**:
- Can be used to terminate scanning early
- Triggers scan complete event after stopping

---

#### IsScanning
```
bool IsScanning()
```

**Description**: Check if currently scanning

**Returns**:
- `bool`: true = scanning, false = not scanning

---

#### ClearDiscoveredDevices
```
void ClearDiscoveredDevices()
```

**Description**: Clear discovered devices list

**Notes**:
- Used to clean old data before starting new scan

---

#### GetDiscoveredDevices
```
TArray<FDgLabDeviceInfo> GetDiscoveredDevices()
```

**Description**: Get discovered devices list

**Returns**:
- `TArray<FDgLabDeviceInfo>`: Array of device information

---

#### GetDiscoveredDeviceCount
```
int32 GetDiscoveredDeviceCount()
```

**Description**: Get number of discovered devices

**Returns**:
- `int32`: Device count

---

### Bluetooth Connection

#### ConnectToDevice
```
bool ConnectToDevice(const FString& DeviceAddress)
```

**Description**: Connect to specified device

**Parameters**:
- `DeviceAddress` (string): Device Bluetooth address (MAC format: XX:XX:XX:XX:XX:XX)

**Returns**:
- `bool`: Whether connection initiated successfully

**Notes**:
- Connection is asynchronous, get result via `OnConnectionStateChanged` event
- State changes to `Connected` on success

---

#### ConnectToDeviceByInfo
```
bool ConnectToDeviceByInfo(const FDgLabDeviceInfo& DeviceInfo)
```

**Description**: Connect device using device info (Recommended)

**Parameters**:
- `DeviceInfo` (struct): Device information obtained from scan results

**Returns**:
- `bool`: Whether connection initiated successfully

**Notes**:
- Recommended method as it includes complete device information

---

#### Disconnect
```
void Disconnect()
```

**Description**: Disconnect current connection

**Notes**:
- Triggers `OnConnectionStateChanged` event with state `Disconnected`

---

#### IsConnected
```
bool IsConnected()
```

**Description**: Check if connected to device

**Returns**:
- `bool`: true = connected, false = not connected

---

#### GetConnectionState
```
EDgLabConnectionState GetConnectionState()
```

**Description**: Get current connection state

**Returns**:
- `EDgLabConnectionState`: Current connection state (enum)

---

#### GetConnectedDeviceInfo
```
FDgLabDeviceInfo GetConnectedDeviceInfo()
```

**Description**: Get connected device information

**Returns**:
- `FDgLabDeviceInfo`: Device information struct

---

### Device Control

#### StartOutput
```
void StartOutput(
    EDgLabChannel Channel = Both,
    EDgLabWavePreset WavePreset = Constant,
    int32 Frequency = 100,
    int32 Intensity = 50
)
```

**Description**: Set wave output parameters (does not send automatically)

**Parameters**:
- `Channel` (enum): Channel selection (ChannelA / ChannelB / Both)
- `WavePreset` (enum): Wave preset type
- `Frequency` (int): Base frequency, range 10-1000
- `Intensity` (int): Base intensity, range 0-100

**Notes**:
- Must call `SendWaveOutput` to actually send after calling this
- Recommended to call `SendWaveOutput` every 0.1 seconds using Timer

---

#### SendWaveOutput
```
void SendWaveOutput()
```

**Description**: Send current wave output (single send)

**Notes**:
- Must call `StartOutput` first to set wave parameters
- **Important**: Must call periodically (every 0.1s) for continuous output
- Recommended to use "Set Timer by Event" node in Blueprint

**Example Flow**:
1. Call `StartOutput` to set wave
2. Use Timer to call `SendWaveOutput` every 0.1 seconds
3. Call `StopOutput` to stop

---

#### StopOutput
```
void StopOutput()
```

**Description**: Stop wave output

**Notes**:
- Clears wave parameters
- Need to call `SendWaveOutput` again to send stop command

---

#### IncreaseStrength
```
void IncreaseStrength(EDgLabChannel Channel, int32 Value = 5)
```

**Description**: Increase strength of specified channel

**Parameters**:
- `Channel` (enum): Channel selection
- `Value` (int): Strength value to increase, default 5

**Notes**:
- Maximum strength is 200
- Triggers `OnStrengthUpdated` event

---

#### DecreaseStrength
```
void DecreaseStrength(EDgLabChannel Channel, int32 Value = 5)
```

**Description**: Decrease strength of specified channel

**Parameters**:
- `Channel` (enum): Channel selection
- `Value` (int): Strength value to decrease, default 5

**Notes**:
- Minimum strength is 0
- Triggers `OnStrengthUpdated` event

---

#### SetStrength
```
void SetStrength(EDgLabChannel Channel, int32 Value)
```

**Description**: Set absolute strength of specified channel

**Parameters**:
- `Channel` (enum): Channel selection
- `Value` (int): Strength value, range 0-200

**Notes**:
- Triggers `OnStrengthUpdated` event

---

#### SendPulse
```
void SendPulse(EDgLabChannel Channel, int32 Intensity = 80, int32 Frequency = 100)
```

**Description**: Send single pulse (shock)

**Parameters**:
- `Channel` (enum): Channel selection
- `Intensity` (int): Pulse intensity, range 0-100
- `Frequency` (int): Pulse frequency, range 10-1000

**Notes**:
- Executes brief shock immediately after sending
- Does not affect continuous output state

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

**Description**: Set wave preset

**Parameters**:
- `Channel` (enum): Channel selection
- `WavePreset` (enum): Wave preset type
- `Frequency` (int): Base frequency, range 10-1000
- `Intensity` (int): Base intensity, range 0-100

**Notes**:
- Equivalent to calling `StartOutput`
- Must use with `SendWaveOutput`

---

#### SetStrengthLimit
```
void SetStrengthLimit(int32 LimitA = 150, int32 LimitB = 150)
```

**Description**: Set channel strength soft limits

**Parameters**:
- `LimitA` (int): Channel A strength limit, range 0-200
- `LimitB` (int): Channel B strength limit, range 0-200

**Notes**:
- **Client and Device Dual Restriction**: Limits applied both in UE client and DG-LAB device
- Prevents excessive strength causing discomfort
- Recommended to set reasonable limits based on usage scenario
- If current strength exceeds new limit, automatically adjusts to limit value
- Subsequent `IncreaseStrength`, `DecreaseStrength`, `SetStrength` operations will respect this limit
- Reference: [DG-LAB Open Source Protocol - BF Command](https://github.com/DG-LAB-OPENSOURCE/DG-LAB-OPENSOURCE)

---

#### ReadBattery
```
void ReadBattery()
```

**Description**: Read device battery level

**Notes**:
- Result returned via `OnBatteryUpdated` event

---

#### GetCurrentStrengthA
```
int32 GetCurrentStrengthA()
```

**Description**: Get current Channel A strength

**Returns**:
- `int32`: Current strength value (0-200)

---

#### GetCurrentStrengthB
```
int32 GetCurrentStrengthB()
```

**Description**: Get current Channel B strength

**Returns**:
- `int32`: Current strength value (0-200)

---

#### IsOutputting
```
bool IsOutputting()
```

**Description**: Check if currently outputting

**Returns**:
- `bool`: true = outputting, false = not outputting

---

### Blueprint Events

#### OnDeviceFound
```
Event OnDeviceFound(FDgLabDeviceInfo DeviceInfo)
```

**Triggered**: When each new device is discovered

**Parameters**:
- `DeviceInfo`: Discovered device information

**Use Cases**:
- Display scanned devices in real-time
- Build device list UI

---

#### OnScanComplete
```
Event OnScanComplete()
```

**Triggered**: When scan completes (no parameters)

**Notes**:
- Simple scan completion notification
- Recommend using `OnScanCompleteWithDevices` to get device list

---

#### OnScanCompleteWithDevices
```
Event OnScanCompleteWithDevices(TArray<FDgLabDeviceInfo> Devices)
```

**Triggered**: When scan completes, returns all discovered devices

**Parameters**:
- `Devices`: Array of all discovered devices

**Use Cases**:
- **Recommended event to use**
- Get all scan results at once
- Easy to build device selection interface

---

#### OnConnectionStateChanged
```
Event OnConnectionStateChanged(EDgLabConnectionState NewState)
```

**Triggered**: When connection state changes

**Parameters**:
- `NewState`: New connection state

**States**:
- `Disconnected`: Disconnected
- `Scanning`: Scanning
- `Connecting`: Connecting
- `Connected`: Connected
- `Error`: Error

---

#### OnBluetoothError
```
Event OnBluetoothError(EDgLabBluetoothError ErrorType)
```

**Triggered**: When Bluetooth error occurs

**Parameters**:
- `ErrorType`: Error type

**Common Errors**:
- `AdapterNotFound`: Bluetooth adapter not found
- `PermissionDenied`: Permission denied (Android requires runtime authorization)
- `ConnectionFailed`: Connection failed
- `ScanFailed`: Scan failed

---

#### OnStrengthUpdated
```
Event OnStrengthUpdated(int32 StrengthA, int32 StrengthB)
```

**Triggered**: When strength updates

**Parameters**:
- `StrengthA`: Channel A strength (0-200)
- `StrengthB`: Channel B strength (0-200)

---

#### OnBatteryUpdated
```
Event OnBatteryUpdated(int32 BatteryLevel)
```

**Triggered**: When battery level updates

**Parameters**:
- `BatteryLevel`: Battery percentage (0-100)

---

### Configuration Options

#### bAutoInitialize
```
bool bAutoInitialize = true
```

**Description**: Whether to automatically initialize Bluetooth on BeginPlay

**Notes**:
- Enabled by default
- Bluetooth functionality will be unavailable if disabled

---

#### bFilterDgLabDevicesOnly
```
bool bFilterDgLabDevicesOnly = true
```

**Description**: Whether to show only DG-LAB devices (filter other Bluetooth devices)

**Notes**:
- Recommended to enable
- Will show all BLE devices if disabled

---

#### SignalStrengthThreshold
```
int32 SignalStrengthThreshold = -80
```

**Description**: Scan signal strength threshold (RSSI dBm)

**Notes**:
- Range: -100 to 0
- Higher values mean stronger signal
- Devices below this threshold will be filtered
- Default -80 dBm (medium distance)

---

## Enumerations

### EDgLabConnectionState
**Connection State**

| Value | Display Name | Description |
|---|---|---|
| `Disconnected` | Disconnected | Not connected state |
| `Scanning` | Scanning | Scanning for devices |
| `Connecting` | Connecting | Connecting to device |
| `Connected` | Connected | Successfully connected |
| `Error` | Error | Error occurred |

---

### EDgLabDeviceType
**Device Type**

| Value | Display Name | Description |
|---|---|---|
| `Unknown` | Unknown Device | Unrecognized device |
| `Coyote3_0` | Coyote 3.0 | DG-LAB Coyote 3.0 device (47L121000) |
| `Sensor` | Wireless Sensor | DG-LAB Wireless Sensor (47L120100) |

---

### EDgLabBluetoothError
**Bluetooth Error Type**

| Value | Display Name | Description |
|---|---|---|
| `None` | No Error | Normal state |
| `AdapterNotFound` | Adapter Not Found | Device doesn't support Bluetooth |
| `AdapterDisabled` | Adapter Disabled | Bluetooth not enabled |
| `ScanFailed` | Scan Failed | Error during scanning |
| `ConnectionFailed` | Connection Failed | Cannot connect to device |
| `DeviceNotFound` | Device Not Found | Specified device doesn't exist |
| `ServiceNotFound` | Service Not Found | BLE service unavailable |
| `CharacteristicNotFound` | Characteristic Not Found | BLE characteristic unavailable |
| `PermissionDenied` | Permission Denied | Missing Bluetooth permission (Android) |
| `PlatformNotSupported` | Platform Not Supported | Current platform doesn't support Bluetooth |
| `Unknown` | Unknown Error | Other errors |

---

### EDgLabChannel
**Channel Selection**

| Value | Display Name | Description |
|---|---|---|
| `ChannelA` | Channel A | Channel A only |
| `ChannelB` | Channel B | Channel B only |
| `Both` | Both Channels | Control both A and B channels |

---

### EDgLabWavePreset
**Wave Preset**

| Value | Display Name | Description |
|---|---|---|
| `Constant` | Constant Output | Fixed frequency and intensity |
| `Pulse` | Pulse | Single pulse |
| `Wave` | Wave | Gradual increase and decrease |
| `Breathing` | Breathing | Simulates breathing rhythm |
| `Heartbeat` | Heartbeat | Simulates heartbeat |
| `Rhythm` | Rhythm | Rhythmic variation |
| `Gentle` | Gentle | Low frequency gentle |
| `Medium` | Medium | Medium frequency moderate |
| `Strong` | Strong | High frequency strong |
| `Random` | Random | Random variation |
| `Custom` | Custom | User-defined |

---

## Data Structures

### FDgLabDeviceInfo
**Device Information Structure**

| Field | Type | Description |
|---|---|---|
| `DeviceAddress` | String | Device Bluetooth address (MAC format) |
| `DeviceName` | String | Device name |
| `DeviceType` | EDgLabDeviceType | Device type |
| `SignalStrength` | int32 | Signal strength (RSSI dBm), higher is stronger |
| `bIsPaired` | bool | Whether paired |
| `bIsConnectable` | bool | Whether connectable |

---

## Usage Examples

### Example 1: Basic Scan and Connect Flow

**Blueprint Node Flow**:

1. **BeginPlay Event**
   - Call `StartScan(10.0)`

2. **OnScanCompleteWithDevices Event**
   - Get Devices array
   - Check array length > 0
   - Select first device: `Get (a copy) [Index 0]`
   - Call `ConnectToDeviceByInfo(DeviceInfo)`

3. **OnConnectionStateChanged Event**
   - Check if NewState == Connected
   - If yes, show "Connected"

---

### Example 2: Continuous Wave Output

**Blueprint Node Flow**:

1. **After Connected**
   - Call `StartOutput(Both, Constant, 100, 50)`
   - Use "Set Timer by Event" node
   - Time: 0.1 seconds
   - Looping: true
   - Bind to custom event "SendWave"

2. **SendWave Custom Event**
   - Call `SendWaveOutput()`

3. **Stop Output**
   - Clear Timer
   - Call `StopOutput()`
   - Call `SendWaveOutput()` (send stop command)

---

### Example 3: Strength Control

**Blueprint Node Flow**:

1. **Key E - Increase Channel A Strength**
   - Call `IncreaseStrength(ChannelA, 5)`

2. **Key Q - Decrease Channel A Strength**
   - Call `DecreaseStrength(ChannelA, 5)`

3. **OnStrengthUpdated Event**
   - Get StrengthA and StrengthB
   - Update UI to display current strength

---

### Example 4: Send Pulse

**Blueprint Node Flow**:

1. **Key F - Send Single Pulse**
   - Call `SendPulse(Both, 80, 150)`
   - Parameters: Both channels, intensity 80, frequency 150Hz

---

## Platform-Specific Notes

### Windows Platform
- Supports Bluetooth 4.0+ (Bluetooth LE)
- Requires Windows 10 or higher
- Automatically requests Bluetooth permissions

### Android Platform
- Supports Bluetooth 4.0+ (Bluetooth LE)
- Requires Android 6.0 or higher
- **Important**: Permission dialog appears on first run, must allow:
  - Bluetooth Scan
  - Bluetooth Connect
  - Location (required for Android 11 and below)
- If permissions denied, triggers `OnBluetoothError` event with type `PermissionDenied`

---

## Important Notes

1. **Periodic Command Sending**: When using `SendWaveOutput`, must call periodically (recommended 0.1s), otherwise device will stop output

2. **Safety Limits**: Strongly recommend using `SetStrengthLimit` to set reasonable strength limits to prevent accidental misuse

3. **Battery Monitoring**: Regularly call `ReadBattery` to monitor device battery, remind user to charge when low

4. **Error Handling**: Must bind `OnBluetoothError` event to handle potential error conditions

5. **Connection State**: Before performing control operations, ensure `IsConnected()` returns true

6. **Android Permissions**: Android platform must grant all requested permissions, otherwise Bluetooth functionality will be unavailable

---

## Technical Support

For questions or suggestions, please visit the project repository to submit an Issue.

**Related Resources**:
- DG-LAB Official Website: https://www.dungeon-lab.com/
- Protocol Documentation: Refer to DG-LAB V3 Protocol Specification

---

## Version History

### v1.0.1 (2025-10-25)
- **Fixed**: SetStrengthLimit now works correctly
  - Client saves limit values and checks in all strength operations
  - Automatically adjusts current strength if it exceeds new limit
  - IncreaseStrength/DecreaseStrength/SetStrength all respect the limit
  - Displays warning in log when exceeding limit

### v1.0 (2025-10-25)
- Initial release
- Support for Windows and Android platforms
- Support for Coyote 3.0 device
- Complete Bluetooth scanning, connection, and control functionality

