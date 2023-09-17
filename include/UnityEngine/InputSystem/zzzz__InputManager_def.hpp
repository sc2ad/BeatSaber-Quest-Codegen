#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace {
namespace System {
template<typename T>
struct Nullable_1;
}
namespace UnityEngine::InputSystem::Utilities {
template<typename TDelegate>
struct CallbackArray_1;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputEventPtr;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::InputSystem::Utilities {
struct TypeTable;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputUpdateType;
}
namespace UnityEngine::InputSystem::Layouts {
class InputDeviceFindControlLayoutDelegate;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputEventStream;
}
namespace UnityEngine::InputSystem::LowLevel {
class InputDeviceCommandDelegate;
}
namespace UnityEngine::InputSystem::Utilities {
template<typename TValue>
struct ReadOnlyArray_1;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputStateBlock;
}
namespace System {
class Action;
}
namespace UnityEngine::InputSystem {
class InputSettings;
}
namespace UnityEngine::InputSystem::Utilities {
template<typename TValue>
struct InlinedArray_1;
}
namespace UnityEngine::InputSystem::LowLevel {
struct ____UnityEngine__InputSystem__LowLevel__InputStateBuffers__DoubleBuffers;
}
namespace UnityEngine::InputSystem::Layouts {
struct InputDeviceMatcher;
}
namespace System {
class Type;
}
namespace UnityEngine::InputSystem::LowLevel {
class IInputRuntime;
}
namespace UnityEngine::InputSystem {
struct ____UnityEngine__InputSystem__InputDevice__DeviceFlags;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputMetrics;
}
namespace UnityEngine::InputSystem::LowLevel {
class InputDeviceExecuteCommandDelegate;
}
namespace UnityEngine::InputSystem::Layouts {
class InputControlLayout;
}
namespace UnityEngine::InputSystem::Utilities {
struct InternedString;
}
namespace UnityEngine::InputSystem::Layouts {
struct InputDeviceDescription;
}
namespace UnityEngine::InputSystem {
class InputDevice;
}
namespace UnityEngine::InputSystem {
struct InputDeviceChange;
}
namespace UnityEngine::InputSystem {
template<typename TControl>
struct InputControlList_1;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputDeviceCommand;
}
namespace UnityEngine::InputSystem {
struct InputControlLayoutChange;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputEventBuffer;
}
namespace UnityEngine::InputSystem {
class InputControl;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System {
template<typename TResult>
class Func_1;
}
namespace UnityEngine::InputSystem::Layouts {
struct ____UnityEngine__InputSystem__Layouts__InputControlLayout__Collection;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputStateBuffers;
}
namespace UnityEngine::InputSystem::LowLevel {
class IInputStateChangeMonitor;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
struct ____System__Collections__Generic__Dictionary_2__Enumerator;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class IDisposable;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace UnityEngine::InputSystem::Utilities {
struct ____UnityEngine__InputSystem__Utilities__MemoryHelpers__BitRegion;
}
namespace UnityEngine::InputSystem {
struct DynamicBitfield;
}
// Forward declare root types
namespace UnityEngine::InputSystem {
template<typename TDevice>
class ____UnityEngine__InputSystem__InputManager____c__60_1;
}
namespace UnityEngine::InputSystem {
struct ____UnityEngine__InputSystem__InputManager__DeviceDisableScope;
}
namespace UnityEngine::InputSystem {
class InputManager;
}
namespace UnityEngine::InputSystem {
class ____UnityEngine__InputSystem__InputManager___ListControlLayouts_d__75;
}
namespace UnityEngine::InputSystem {
class ____UnityEngine__InputSystem__InputManager____c;
}
namespace UnityEngine::InputSystem {
template<::cordl_internals::il2cpp_reference_type TDevice>
class ____UnityEngine__InputSystem__InputManager____c__60_1<TDevice>;
}
namespace UnityEngine::InputSystem {
struct ____UnityEngine__InputSystem__InputManager__AvailableDevice;
}
namespace UnityEngine::InputSystem {
struct ____UnityEngine__InputSystem__InputManager__StateChangeMonitorListener;
}
namespace UnityEngine::InputSystem {
struct ____UnityEngine__InputSystem__InputManager__StateChangeMonitorTimeout;
}
namespace UnityEngine::InputSystem {
struct ____UnityEngine__InputSystem__InputManager__StateChangeMonitorsForDevice;
}
// Type: ::DeviceDisableScope
namespace UnityEngine::InputSystem {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6375))
// CS Name: UnityEngine.InputSystem.InputManager::DeviceDisableScope
struct CORDL_TYPE ____UnityEngine__InputSystem__InputManager__DeviceDisableScope : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ____UnityEngine__InputSystem__InputManager__DeviceDisableScope(int32_t value__) noexcept;


                    constexpr ____UnityEngine__InputSystem__InputManager__DeviceDisableScope(____UnityEngine__InputSystem__InputManager__DeviceDisableScope const&) = default;
                    constexpr ____UnityEngine__InputSystem__InputManager__DeviceDisableScope(____UnityEngine__InputSystem__InputManager__DeviceDisableScope&&) = default;
                    constexpr ____UnityEngine__InputSystem__InputManager__DeviceDisableScope& operator=(____UnityEngine__InputSystem__InputManager__DeviceDisableScope const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____UnityEngine__InputSystem__InputManager__DeviceDisableScope& operator=(____UnityEngine__InputSystem__InputManager__DeviceDisableScope&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__InputSystem__InputManager__DeviceDisableScope(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class ______UnityEngine__InputSystem__InputManager__DeviceDisableScope_Unwrapped : int32_t {
__Everywhere = 0,
__InFrontendOnly = 1,
__TemporaryWhilePlayerIsInBackground = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator ______UnityEngine__InputSystem__InputManager__DeviceDisableScope_Unwrapped () const noexcept {
return std::bit_cast<______UnityEngine__InputSystem__InputManager__DeviceDisableScope_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Everywhere offset 0
static ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputManager__DeviceDisableScope const Everywhere;

/// @brief Field InFrontendOnly offset 0
static ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputManager__DeviceDisableScope const InFrontendOnly;

/// @brief Field TemporaryWhilePlayerIsInBackground offset 0
static ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputManager__DeviceDisableScope const TemporaryWhilePlayerIsInBackground;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem
// Type: ::AvailableDevice
namespace UnityEngine::InputSystem {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6376))
// CS Name: UnityEngine.InputSystem.InputManager::AvailableDevice
struct CORDL_TYPE ____UnityEngine__InputSystem__InputManager__AvailableDevice : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "description", ty: "::UnityEngine::InputSystem::Layouts::InputDeviceDescription", modifiers: "", def_value: None }, CppParam { name: "deviceId", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "isNative", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "isRemoved", ty: "bool", modifiers: "", def_value: None }]
constexpr ____UnityEngine__InputSystem__InputManager__AvailableDevice(::UnityEngine::InputSystem::Layouts::InputDeviceDescription description, int32_t deviceId, bool isNative, bool isRemoved) noexcept;


                    constexpr ____UnityEngine__InputSystem__InputManager__AvailableDevice(____UnityEngine__InputSystem__InputManager__AvailableDevice const&) = default;
                    constexpr ____UnityEngine__InputSystem__InputManager__AvailableDevice(____UnityEngine__InputSystem__InputManager__AvailableDevice&&) = default;
                    constexpr ____UnityEngine__InputSystem__InputManager__AvailableDevice& operator=(____UnityEngine__InputSystem__InputManager__AvailableDevice const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____UnityEngine__InputSystem__InputManager__AvailableDevice& operator=(____UnityEngine__InputSystem__InputManager__AvailableDevice&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x40};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__InputSystem__InputManager__AvailableDevice(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::UnityEngine::InputSystem::Layouts::InputDeviceDescription __declspec(property(get=__get_description, put=__set_description))  description;

constexpr void __set_description(::UnityEngine::InputSystem::Layouts::InputDeviceDescription value) ;

constexpr ::UnityEngine::InputSystem::Layouts::InputDeviceDescription __get_description() const;

 int32_t __declspec(property(get=__get_deviceId, put=__set_deviceId))  deviceId;

constexpr void __set_deviceId(int32_t value) ;

constexpr int32_t __get_deviceId() const;

 bool __declspec(property(get=__get_isNative, put=__set_isNative))  isNative;

constexpr void __set_isNative(bool value) ;

constexpr bool __get_isNative() const;

 bool __declspec(property(get=__get_isRemoved, put=__set_isRemoved))  isRemoved;

constexpr void __set_isRemoved(bool value) ;

constexpr bool __get_isRemoved() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem
// Type: ::StateChangeMonitorTimeout
namespace UnityEngine::InputSystem {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6377))
// CS Name: UnityEngine.InputSystem.InputManager::StateChangeMonitorTimeout
struct CORDL_TYPE ____UnityEngine__InputSystem__InputManager__StateChangeMonitorTimeout : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "control", ty: "::UnityEngine::InputSystem::InputControl", modifiers: "", def_value: None }, CppParam { name: "time", ty: "double_t", modifiers: "", def_value: None }, CppParam { name: "monitor", ty: "::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor", modifiers: "", def_value: None }, CppParam { name: "monitorIndex", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "timerIndex", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ____UnityEngine__InputSystem__InputManager__StateChangeMonitorTimeout(::UnityEngine::InputSystem::InputControl control, double_t time, ::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor monitor, int64_t monitorIndex, int32_t timerIndex) noexcept;


                    constexpr ____UnityEngine__InputSystem__InputManager__StateChangeMonitorTimeout(____UnityEngine__InputSystem__InputManager__StateChangeMonitorTimeout const&) = default;
                    constexpr ____UnityEngine__InputSystem__InputManager__StateChangeMonitorTimeout(____UnityEngine__InputSystem__InputManager__StateChangeMonitorTimeout&&) = default;
                    constexpr ____UnityEngine__InputSystem__InputManager__StateChangeMonitorTimeout& operator=(____UnityEngine__InputSystem__InputManager__StateChangeMonitorTimeout const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____UnityEngine__InputSystem__InputManager__StateChangeMonitorTimeout& operator=(____UnityEngine__InputSystem__InputManager__StateChangeMonitorTimeout&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x28};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__InputSystem__InputManager__StateChangeMonitorTimeout(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::UnityEngine::InputSystem::InputControl __declspec(property(get=__get_control, put=__set_control))  control;

constexpr void __set_control(::UnityEngine::InputSystem::InputControl value) ;

constexpr ::UnityEngine::InputSystem::InputControl __get_control() const;

 double_t __declspec(property(get=__get_time, put=__set_time))  time;

constexpr void __set_time(double_t value) ;

constexpr double_t __get_time() const;

 ::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor __declspec(property(get=__get_monitor, put=__set_monitor))  monitor;

constexpr void __set_monitor(::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor value) ;

constexpr ::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor __get_monitor() const;

 int64_t __declspec(property(get=__get_monitorIndex, put=__set_monitorIndex))  monitorIndex;

constexpr void __set_monitorIndex(int64_t value) ;

constexpr int64_t __get_monitorIndex() const;

 int32_t __declspec(property(get=__get_timerIndex, put=__set_timerIndex))  timerIndex;

constexpr void __set_timerIndex(int32_t value) ;

constexpr int32_t __get_timerIndex() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem
// Type: ::StateChangeMonitorListener
namespace UnityEngine::InputSystem {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6378))
// CS Name: UnityEngine.InputSystem.InputManager::StateChangeMonitorListener
struct CORDL_TYPE ____UnityEngine__InputSystem__InputManager__StateChangeMonitorListener : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "control", ty: "::UnityEngine::InputSystem::InputControl", modifiers: "", def_value: None }, CppParam { name: "monitor", ty: "::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor", modifiers: "", def_value: None }, CppParam { name: "monitorIndex", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "groupIndex", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr ____UnityEngine__InputSystem__InputManager__StateChangeMonitorListener(::UnityEngine::InputSystem::InputControl control, ::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor monitor, int64_t monitorIndex, uint32_t groupIndex) noexcept;


                    constexpr ____UnityEngine__InputSystem__InputManager__StateChangeMonitorListener(____UnityEngine__InputSystem__InputManager__StateChangeMonitorListener const&) = default;
                    constexpr ____UnityEngine__InputSystem__InputManager__StateChangeMonitorListener(____UnityEngine__InputSystem__InputManager__StateChangeMonitorListener&&) = default;
                    constexpr ____UnityEngine__InputSystem__InputManager__StateChangeMonitorListener& operator=(____UnityEngine__InputSystem__InputManager__StateChangeMonitorListener const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____UnityEngine__InputSystem__InputManager__StateChangeMonitorListener& operator=(____UnityEngine__InputSystem__InputManager__StateChangeMonitorListener&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x20};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__InputSystem__InputManager__StateChangeMonitorListener(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::UnityEngine::InputSystem::InputControl __declspec(property(get=__get_control, put=__set_control))  control;

constexpr void __set_control(::UnityEngine::InputSystem::InputControl value) ;

constexpr ::UnityEngine::InputSystem::InputControl __get_control() const;

 ::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor __declspec(property(get=__get_monitor, put=__set_monitor))  monitor;

constexpr void __set_monitor(::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor value) ;

constexpr ::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor __get_monitor() const;

 int64_t __declspec(property(get=__get_monitorIndex, put=__set_monitorIndex))  monitorIndex;

constexpr void __set_monitorIndex(int64_t value) ;

constexpr int64_t __get_monitorIndex() const;

 uint32_t __declspec(property(get=__get_groupIndex, put=__set_groupIndex))  groupIndex;

constexpr void __set_groupIndex(uint32_t value) ;

constexpr uint32_t __get_groupIndex() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem
// Type: ::StateChangeMonitorsForDevice
namespace UnityEngine::InputSystem {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6379))
// CS Name: UnityEngine.InputSystem.InputManager::StateChangeMonitorsForDevice
struct CORDL_TYPE ____UnityEngine__InputSystem__InputManager__StateChangeMonitorsForDevice : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "memoryRegions", ty: "::ArrayW<::UnityEngine::InputSystem::Utilities::____UnityEngine__InputSystem__Utilities__MemoryHelpers__BitRegion>", modifiers: "", def_value: None }, CppParam { name: "listeners", ty: "::ArrayW<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputManager__StateChangeMonitorListener>", modifiers: "", def_value: None }, CppParam { name: "signalled", ty: "::UnityEngine::InputSystem::DynamicBitfield", modifiers: "", def_value: None }, CppParam { name: "needToUpdateOrderingOfMonitors", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "needToCompactArrays", ty: "bool", modifiers: "", def_value: None }]
constexpr ____UnityEngine__InputSystem__InputManager__StateChangeMonitorsForDevice(::ArrayW<::UnityEngine::InputSystem::Utilities::____UnityEngine__InputSystem__Utilities__MemoryHelpers__BitRegion> memoryRegions, ::ArrayW<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputManager__StateChangeMonitorListener> listeners, ::UnityEngine::InputSystem::DynamicBitfield signalled, bool needToUpdateOrderingOfMonitors, bool needToCompactArrays) noexcept;


                    constexpr ____UnityEngine__InputSystem__InputManager__StateChangeMonitorsForDevice(____UnityEngine__InputSystem__InputManager__StateChangeMonitorsForDevice const&) = default;
                    constexpr ____UnityEngine__InputSystem__InputManager__StateChangeMonitorsForDevice(____UnityEngine__InputSystem__InputManager__StateChangeMonitorsForDevice&&) = default;
                    constexpr ____UnityEngine__InputSystem__InputManager__StateChangeMonitorsForDevice& operator=(____UnityEngine__InputSystem__InputManager__StateChangeMonitorsForDevice const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____UnityEngine__InputSystem__InputManager__StateChangeMonitorsForDevice& operator=(____UnityEngine__InputSystem__InputManager__StateChangeMonitorsForDevice&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x38};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__InputSystem__InputManager__StateChangeMonitorsForDevice(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::ArrayW<::UnityEngine::InputSystem::Utilities::____UnityEngine__InputSystem__Utilities__MemoryHelpers__BitRegion> __declspec(property(get=__get_memoryRegions, put=__set_memoryRegions))  memoryRegions;

constexpr void __set_memoryRegions(::ArrayW<::UnityEngine::InputSystem::Utilities::____UnityEngine__InputSystem__Utilities__MemoryHelpers__BitRegion> value) ;

constexpr ::ArrayW<::UnityEngine::InputSystem::Utilities::____UnityEngine__InputSystem__Utilities__MemoryHelpers__BitRegion> __get_memoryRegions() const;

 ::ArrayW<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputManager__StateChangeMonitorListener> __declspec(property(get=__get_listeners, put=__set_listeners))  listeners;

constexpr void __set_listeners(::ArrayW<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputManager__StateChangeMonitorListener> value) ;

constexpr ::ArrayW<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputManager__StateChangeMonitorListener> __get_listeners() const;

 ::UnityEngine::InputSystem::DynamicBitfield __declspec(property(get=__get_signalled, put=__set_signalled))  signalled;

constexpr void __set_signalled(::UnityEngine::InputSystem::DynamicBitfield value) ;

constexpr ::UnityEngine::InputSystem::DynamicBitfield __get_signalled() const;

 bool __declspec(property(get=__get_needToUpdateOrderingOfMonitors, put=__set_needToUpdateOrderingOfMonitors))  needToUpdateOrderingOfMonitors;

constexpr void __set_needToUpdateOrderingOfMonitors(bool value) ;

constexpr bool __get_needToUpdateOrderingOfMonitors() const;

 bool __declspec(property(get=__get_needToCompactArrays, put=__set_needToCompactArrays))  needToCompactArrays;

constexpr void __set_needToCompactArrays(bool value) ;

constexpr bool __get_needToCompactArrays() const;


// Properties

 int32_t __declspec(property(get=get_count))  count;


// Methods

/// @brief Method get_count addr 0x292438c size 0x8 virtual false final false
 int32_t get_count() ;

/// @brief Method Add addr 0x2924394 size 0x114 virtual false final false
 void Add(::UnityEngine::InputSystem::InputControl control, ::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor monitor, int64_t monitorIndex, uint32_t groupIndex) ;

/// @brief Method Remove addr 0x292451c size 0xb4 virtual false final false
 void Remove(::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor monitor, int64_t monitorIndex, bool deferRemoval) ;

/// @brief Method Clear addr 0x2924714 size 0x64 virtual false final false
 void Clear() ;

/// @brief Method CompactArrays addr 0x2924778 size 0x68 virtual false final false
 void CompactArrays() ;

/// @brief Method RemoveAt addr 0x2924668 size 0xac virtual false final false
 void RemoveAt(int32_t i) ;

/// @brief Method SortMonitorsByIndex addr 0x29247e0 size 0x13c virtual false final false
 void SortMonitorsByIndex() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem
// Type: ::<>c__60`1
// Type: ::<ListControlLayouts>d__75
namespace UnityEngine::InputSystem {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6381))
// CS Name: UnityEngine.InputSystem.InputManager::<ListControlLayouts>d__75
class CORDL_TYPE ____UnityEngine__InputSystem__InputManager___ListControlLayouts_d__75 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::System::Collections::Generic::IEnumerable_1<::StringW>
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::StringW>() const noexcept;

/// @brief Convert operator to ::System::Collections::IEnumerable
constexpr operator  ::System::Collections::IEnumerable() const noexcept;

/// @brief Convert operator to ::System::Collections::Generic::IEnumerator_1<::StringW>
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::StringW>() const noexcept;

/// @brief Convert operator to ::System::Collections::IEnumerator
constexpr operator  ::System::Collections::IEnumerator() const noexcept;

/// @brief Convert operator to ::System::IDisposable
constexpr operator  ::System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xe0};

virtual ~____UnityEngine__InputSystem__InputManager___ListControlLayouts_d__75() = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__InputSystem__InputManager___ListControlLayouts_d__75", modifiers: " const&", def_value: None }]
constexpr ____UnityEngine__InputSystem__InputManager___ListControlLayouts_d__75(____UnityEngine__InputSystem__InputManager___ListControlLayouts_d__75 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__InputSystem__InputManager___ListControlLayouts_d__75", modifiers: "&&", def_value: None }]
constexpr ____UnityEngine__InputSystem__InputManager___ListControlLayouts_d__75(____UnityEngine__InputSystem__InputManager___ListControlLayouts_d__75&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__InputSystem__InputManager___ListControlLayouts_d__75(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____UnityEngine__InputSystem__InputManager___ListControlLayouts_d__75& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____UnityEngine__InputSystem__InputManager___ListControlLayouts_d__75& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____UnityEngine__InputSystem__InputManager___ListControlLayouts_d__75& operator=(____UnityEngine__InputSystem__InputManager___ListControlLayouts_d__75&& o) noexcept = default;
  constexpr ____UnityEngine__InputSystem__InputManager___ListControlLayouts_d__75& operator=(____UnityEngine__InputSystem__InputManager___ListControlLayouts_d__75 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 ::StringW __declspec(property(get=__get___2__current, put=__set___2__current))  __2__current;

constexpr void __set___2__current(::StringW value) ;

constexpr ::StringW __get___2__current() const;

 int32_t __declspec(property(get=__get___l__initialThreadId, put=__set___l__initialThreadId))  __l__initialThreadId;

constexpr void __set___l__initialThreadId(int32_t value) ;

constexpr int32_t __get___l__initialThreadId() const;

 ::StringW __declspec(property(get=__get_basedOn, put=__set_basedOn))  basedOn;

constexpr void __set_basedOn(::StringW value) ;

constexpr ::StringW __get_basedOn() const;

 ::StringW __declspec(property(get=__get___3__basedOn, put=__set___3__basedOn))  __3__basedOn;

constexpr void __set___3__basedOn(::StringW value) ;

constexpr ::StringW __get___3__basedOn() const;

 ::UnityEngine::InputSystem::InputManager __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(::UnityEngine::InputSystem::InputManager value) ;

constexpr ::UnityEngine::InputSystem::InputManager __get___4__this() const;

 ::UnityEngine::InputSystem::Utilities::InternedString __declspec(property(get=__get__internedBasedOn_5__2, put=__set__internedBasedOn_5__2))  _internedBasedOn_5__2;

constexpr void __set__internedBasedOn_5__2(::UnityEngine::InputSystem::Utilities::InternedString value) ;

constexpr ::UnityEngine::InputSystem::Utilities::InternedString __get__internedBasedOn_5__2() const;

 ::System::Collections::Generic::____System__Collections__Generic__Dictionary_2__Enumerator<::UnityEngine::InputSystem::Utilities::InternedString,::System::Type> __declspec(property(get=__get___7__wrap2, put=__set___7__wrap2))  __7__wrap2;

constexpr void __set___7__wrap2(::System::Collections::Generic::____System__Collections__Generic__Dictionary_2__Enumerator<::UnityEngine::InputSystem::Utilities::InternedString,::System::Type> value) ;

constexpr ::System::Collections::Generic::____System__Collections__Generic__Dictionary_2__Enumerator<::UnityEngine::InputSystem::Utilities::InternedString,::System::Type> __get___7__wrap2() const;

 ::System::Collections::Generic::____System__Collections__Generic__Dictionary_2__Enumerator<::UnityEngine::InputSystem::Utilities::InternedString,::StringW> __declspec(property(get=__get___7__wrap3, put=__set___7__wrap3))  __7__wrap3;

constexpr void __set___7__wrap3(::System::Collections::Generic::____System__Collections__Generic__Dictionary_2__Enumerator<::UnityEngine::InputSystem::Utilities::InternedString,::StringW> value) ;

constexpr ::System::Collections::Generic::____System__Collections__Generic__Dictionary_2__Enumerator<::UnityEngine::InputSystem::Utilities::InternedString,::StringW> __get___7__wrap3() const;

 ::System::Collections::Generic::____System__Collections__Generic__Dictionary_2__Enumerator<::UnityEngine::InputSystem::Utilities::InternedString,::System::Func_1<::UnityEngine::InputSystem::Layouts::InputControlLayout>> __declspec(property(get=__get___7__wrap4, put=__set___7__wrap4))  __7__wrap4;

constexpr void __set___7__wrap4(::System::Collections::Generic::____System__Collections__Generic__Dictionary_2__Enumerator<::UnityEngine::InputSystem::Utilities::InternedString,::System::Func_1<::UnityEngine::InputSystem::Layouts::InputControlLayout>> value) ;

constexpr ::System::Collections::Generic::____System__Collections__Generic__Dictionary_2__Enumerator<::UnityEngine::InputSystem::Utilities::InternedString,::System::Func_1<::UnityEngine::InputSystem::Layouts::InputControlLayout>> __get___7__wrap4() const;


// Properties

 ::StringW __declspec(property(get=System_Collections_Generic_IEnumerator_System_String__get_Current))  System_Collections_Generic_IEnumerator_System_String__Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }]
explicit ____UnityEngine__InputSystem__InputManager___ListControlLayouts_d__75(int32_t __1__state) ;

/// @brief Method .ctor addr 0x292491c size 0x34 virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x2924950 size 0x44 virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x2924994 size 0x6a4 virtual true final true
 bool MoveNext() ;

/// @brief Method <>m__Finally1 addr 0x2925038 size 0x50 virtual false final false
 void __m__Finally1() ;

/// @brief Method <>m__Finally2 addr 0x2925088 size 0x50 virtual false final false
 void __m__Finally2() ;

/// @brief Method <>m__Finally3 addr 0x29250d8 size 0x50 virtual false final false
 void __m__Finally3() ;

/// @brief Method <>m__Finally4 addr 0x2925128 size 0x50 virtual false final false
 void __m__Finally4() ;

/// @brief Method <>m__Finally5 addr 0x2925178 size 0x50 virtual false final false
 void __m__Finally5() ;

/// @brief Method <>m__Finally6 addr 0x29251c8 size 0x50 virtual false final false
 void __m__Finally6() ;

/// @brief Method System.Collections.Generic.IEnumerator<System.String>.get_Current addr 0x2925218 size 0x8 virtual true final true
 ::StringW System_Collections_Generic_IEnumerator_System_String__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x2925220 size 0x40 virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x2925260 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.Collections.Generic.IEnumerable<System.String>.GetEnumerator addr 0x2925268 size 0xac virtual true final true
 ::System::Collections::Generic::IEnumerator_1<::StringW> System_Collections_Generic_IEnumerable_System_String__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x2925314 size 0x4 virtual true final true
 ::System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem
// Type: ::<>c
namespace UnityEngine::InputSystem {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6382))
// CS Name: UnityEngine.InputSystem.InputManager::<>c
class CORDL_TYPE ____UnityEngine__InputSystem__InputManager____c : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~____UnityEngine__InputSystem__InputManager____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__InputSystem__InputManager____c", modifiers: " const&", def_value: None }]
constexpr ____UnityEngine__InputSystem__InputManager____c(____UnityEngine__InputSystem__InputManager____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__InputSystem__InputManager____c", modifiers: "&&", def_value: None }]
constexpr ____UnityEngine__InputSystem__InputManager____c(____UnityEngine__InputSystem__InputManager____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__InputSystem__InputManager____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____UnityEngine__InputSystem__InputManager____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____UnityEngine__InputSystem__InputManager____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____UnityEngine__InputSystem__InputManager____c& operator=(____UnityEngine__InputSystem__InputManager____c&& o) noexcept = default;
  constexpr ____UnityEngine__InputSystem__InputManager____c& operator=(____UnityEngine__InputSystem__InputManager____c const& o) noexcept = default;
                


// Fields

static ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputManager____c __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputManager____c value) ;

static ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputManager____c __get___9() ;

static ::System::Func_2<::UnityEngine::InputSystem::InputDevice,::StringW> __declspec(property(get=__get___9__144_0, put=__set___9__144_0))  __9__144_0;

static void __set___9__144_0(::System::Func_2<::UnityEngine::InputSystem::InputDevice,::StringW> value) ;

static ::System::Func_2<::UnityEngine::InputSystem::InputDevice,::StringW> __get___9__144_0() ;


// Methods

// Ctor Parameters []
explicit ____UnityEngine__InputSystem__InputManager____c() ;

/// @brief Method .ctor addr 0x292537c size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <MakeDeviceNameUnique>b__144_0 addr 0x2925384 size 0x64 virtual false final false
 ::StringW _MakeDeviceNameUnique_b__144_0(::UnityEngine::InputSystem::InputDevice x) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem
// Type: UnityEngine.InputSystem::InputManager
namespace UnityEngine::InputSystem {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6383))
// CS Name: UnityEngine.InputSystem.InputManager
class CORDL_TYPE InputManager : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using __c = ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputManager____c;

using _ListControlLayouts_d__75 = ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputManager___ListControlLayouts_d__75;

template<typename TDevice>
using __c__60_1 = ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputManager____c__60_1<TDevice>;

using StateChangeMonitorsForDevice = ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputManager__StateChangeMonitorsForDevice;

using StateChangeMonitorListener = ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputManager__StateChangeMonitorListener;

using StateChangeMonitorTimeout = ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputManager__StateChangeMonitorTimeout;

using AvailableDevice = ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputManager__AvailableDevice;

using DeviceDisableScope = ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputManager__DeviceDisableScope;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x4c8};

virtual ~InputManager() = default;

// Ctor Parameters [CppParam { name: "", ty: "InputManager", modifiers: " const&", def_value: None }]
constexpr InputManager(InputManager const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "InputManager", modifiers: "&&", def_value: None }]
constexpr InputManager(InputManager&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit InputManager(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr InputManager& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr InputManager& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr InputManager& operator=(InputManager&& o) noexcept = default;
  constexpr InputManager& operator=(InputManager const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get_m_LayoutRegistrationVersion, put=__set_m_LayoutRegistrationVersion))  m_LayoutRegistrationVersion;

constexpr void __set_m_LayoutRegistrationVersion(int32_t value) ;

constexpr int32_t __get_m_LayoutRegistrationVersion() const;

 float_t __declspec(property(get=__get_m_PollingFrequency, put=__set_m_PollingFrequency))  m_PollingFrequency;

constexpr void __set_m_PollingFrequency(float_t value) ;

constexpr float_t __get_m_PollingFrequency() const;

 ::UnityEngine::InputSystem::Layouts::____UnityEngine__InputSystem__Layouts__InputControlLayout__Collection __declspec(property(get=__get_m_Layouts, put=__set_m_Layouts))  m_Layouts;

constexpr void __set_m_Layouts(::UnityEngine::InputSystem::Layouts::____UnityEngine__InputSystem__Layouts__InputControlLayout__Collection value) ;

constexpr ::UnityEngine::InputSystem::Layouts::____UnityEngine__InputSystem__Layouts__InputControlLayout__Collection __get_m_Layouts() const;

 ::UnityEngine::InputSystem::Utilities::TypeTable __declspec(property(get=__get_m_Processors, put=__set_m_Processors))  m_Processors;

constexpr void __set_m_Processors(::UnityEngine::InputSystem::Utilities::TypeTable value) ;

constexpr ::UnityEngine::InputSystem::Utilities::TypeTable __get_m_Processors() const;

 ::UnityEngine::InputSystem::Utilities::TypeTable __declspec(property(get=__get_m_Interactions, put=__set_m_Interactions))  m_Interactions;

constexpr void __set_m_Interactions(::UnityEngine::InputSystem::Utilities::TypeTable value) ;

constexpr ::UnityEngine::InputSystem::Utilities::TypeTable __get_m_Interactions() const;

 ::UnityEngine::InputSystem::Utilities::TypeTable __declspec(property(get=__get_m_Composites, put=__set_m_Composites))  m_Composites;

constexpr void __set_m_Composites(::UnityEngine::InputSystem::Utilities::TypeTable value) ;

constexpr ::UnityEngine::InputSystem::Utilities::TypeTable __get_m_Composites() const;

 int32_t __declspec(property(get=__get_m_DevicesCount, put=__set_m_DevicesCount))  m_DevicesCount;

constexpr void __set_m_DevicesCount(int32_t value) ;

constexpr int32_t __get_m_DevicesCount() const;

 ::ArrayW<::UnityEngine::InputSystem::InputDevice> __declspec(property(get=__get_m_Devices, put=__set_m_Devices))  m_Devices;

constexpr void __set_m_Devices(::ArrayW<::UnityEngine::InputSystem::InputDevice> value) ;

constexpr ::ArrayW<::UnityEngine::InputSystem::InputDevice> __get_m_Devices() const;

 ::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::InputSystem::InputDevice> __declspec(property(get=__get_m_DevicesById, put=__set_m_DevicesById))  m_DevicesById;

constexpr void __set_m_DevicesById(::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::InputSystem::InputDevice> value) ;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::InputSystem::InputDevice> __get_m_DevicesById() const;

 int32_t __declspec(property(get=__get_m_AvailableDeviceCount, put=__set_m_AvailableDeviceCount))  m_AvailableDeviceCount;

constexpr void __set_m_AvailableDeviceCount(int32_t value) ;

constexpr int32_t __get_m_AvailableDeviceCount() const;

 ::ArrayW<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputManager__AvailableDevice> __declspec(property(get=__get_m_AvailableDevices, put=__set_m_AvailableDevices))  m_AvailableDevices;

constexpr void __set_m_AvailableDevices(::ArrayW<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputManager__AvailableDevice> value) ;

constexpr ::ArrayW<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputManager__AvailableDevice> __get_m_AvailableDevices() const;

 int32_t __declspec(property(get=__get_m_DisconnectedDevicesCount, put=__set_m_DisconnectedDevicesCount))  m_DisconnectedDevicesCount;

constexpr void __set_m_DisconnectedDevicesCount(int32_t value) ;

constexpr int32_t __get_m_DisconnectedDevicesCount() const;

 ::ArrayW<::UnityEngine::InputSystem::InputDevice> __declspec(property(get=__get_m_DisconnectedDevices, put=__set_m_DisconnectedDevices))  m_DisconnectedDevices;

constexpr void __set_m_DisconnectedDevices(::ArrayW<::UnityEngine::InputSystem::InputDevice> value) ;

constexpr ::ArrayW<::UnityEngine::InputSystem::InputDevice> __get_m_DisconnectedDevices() const;

 ::UnityEngine::InputSystem::LowLevel::InputUpdateType __declspec(property(get=__get_m_UpdateMask, put=__set_m_UpdateMask))  m_UpdateMask;

constexpr void __set_m_UpdateMask(::UnityEngine::InputSystem::LowLevel::InputUpdateType value) ;

constexpr ::UnityEngine::InputSystem::LowLevel::InputUpdateType __get_m_UpdateMask() const;

 ::UnityEngine::InputSystem::LowLevel::InputUpdateType __declspec(property(get=__get_m_CurrentUpdate, put=__set_m_CurrentUpdate))  m_CurrentUpdate;

constexpr void __set_m_CurrentUpdate(::UnityEngine::InputSystem::LowLevel::InputUpdateType value) ;

constexpr ::UnityEngine::InputSystem::LowLevel::InputUpdateType __get_m_CurrentUpdate() const;

 ::UnityEngine::InputSystem::LowLevel::InputStateBuffers __declspec(property(get=__get_m_StateBuffers, put=__set_m_StateBuffers))  m_StateBuffers;

constexpr void __set_m_StateBuffers(::UnityEngine::InputSystem::LowLevel::InputStateBuffers value) ;

constexpr ::UnityEngine::InputSystem::LowLevel::InputStateBuffers __get_m_StateBuffers() const;

 ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_2<::UnityEngine::InputSystem::InputDevice,::UnityEngine::InputSystem::InputDeviceChange>> __declspec(property(get=__get_m_DeviceChangeListeners, put=__set_m_DeviceChangeListeners))  m_DeviceChangeListeners;

constexpr void __set_m_DeviceChangeListeners(::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_2<::UnityEngine::InputSystem::InputDevice,::UnityEngine::InputSystem::InputDeviceChange>> value) ;

constexpr ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_2<::UnityEngine::InputSystem::InputDevice,::UnityEngine::InputSystem::InputDeviceChange>> __get_m_DeviceChangeListeners() const;

 ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_2<::UnityEngine::InputSystem::InputDevice,::UnityEngine::InputSystem::LowLevel::InputEventPtr>> __declspec(property(get=__get_m_DeviceStateChangeListeners, put=__set_m_DeviceStateChangeListeners))  m_DeviceStateChangeListeners;

constexpr void __set_m_DeviceStateChangeListeners(::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_2<::UnityEngine::InputSystem::InputDevice,::UnityEngine::InputSystem::LowLevel::InputEventPtr>> value) ;

constexpr ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_2<::UnityEngine::InputSystem::InputDevice,::UnityEngine::InputSystem::LowLevel::InputEventPtr>> __get_m_DeviceStateChangeListeners() const;

 ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::UnityEngine::InputSystem::Layouts::InputDeviceFindControlLayoutDelegate> __declspec(property(get=__get_m_DeviceFindLayoutCallbacks, put=__set_m_DeviceFindLayoutCallbacks))  m_DeviceFindLayoutCallbacks;

constexpr void __set_m_DeviceFindLayoutCallbacks(::UnityEngine::InputSystem::Utilities::CallbackArray_1<::UnityEngine::InputSystem::Layouts::InputDeviceFindControlLayoutDelegate> value) ;

constexpr ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::UnityEngine::InputSystem::Layouts::InputDeviceFindControlLayoutDelegate> __get_m_DeviceFindLayoutCallbacks() const;

 ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::UnityEngine::InputSystem::LowLevel::InputDeviceCommandDelegate> __declspec(property(get=__get_m_DeviceCommandCallbacks, put=__set_m_DeviceCommandCallbacks))  m_DeviceCommandCallbacks;

constexpr void __set_m_DeviceCommandCallbacks(::UnityEngine::InputSystem::Utilities::CallbackArray_1<::UnityEngine::InputSystem::LowLevel::InputDeviceCommandDelegate> value) ;

constexpr ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::UnityEngine::InputSystem::LowLevel::InputDeviceCommandDelegate> __get_m_DeviceCommandCallbacks() const;

 ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_2<::StringW,::UnityEngine::InputSystem::InputControlLayoutChange>> __declspec(property(get=__get_m_LayoutChangeListeners, put=__set_m_LayoutChangeListeners))  m_LayoutChangeListeners;

constexpr void __set_m_LayoutChangeListeners(::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_2<::StringW,::UnityEngine::InputSystem::InputControlLayoutChange>> value) ;

constexpr ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_2<::StringW,::UnityEngine::InputSystem::InputControlLayoutChange>> __get_m_LayoutChangeListeners() const;

 ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr,::UnityEngine::InputSystem::InputDevice>> __declspec(property(get=__get_m_EventListeners, put=__set_m_EventListeners))  m_EventListeners;

constexpr void __set_m_EventListeners(::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr,::UnityEngine::InputSystem::InputDevice>> value) ;

constexpr ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr,::UnityEngine::InputSystem::InputDevice>> __get_m_EventListeners() const;

 ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action> __declspec(property(get=__get_m_BeforeUpdateListeners, put=__set_m_BeforeUpdateListeners))  m_BeforeUpdateListeners;

constexpr void __set_m_BeforeUpdateListeners(::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action> value) ;

constexpr ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action> __get_m_BeforeUpdateListeners() const;

 ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action> __declspec(property(get=__get_m_AfterUpdateListeners, put=__set_m_AfterUpdateListeners))  m_AfterUpdateListeners;

constexpr void __set_m_AfterUpdateListeners(::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action> value) ;

constexpr ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action> __get_m_AfterUpdateListeners() const;

 ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action> __declspec(property(get=__get_m_SettingsChangedListeners, put=__set_m_SettingsChangedListeners))  m_SettingsChangedListeners;

constexpr void __set_m_SettingsChangedListeners(::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action> value) ;

constexpr ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action> __get_m_SettingsChangedListeners() const;

 bool __declspec(property(get=__get_m_NativeBeforeUpdateHooked, put=__set_m_NativeBeforeUpdateHooked))  m_NativeBeforeUpdateHooked;

constexpr void __set_m_NativeBeforeUpdateHooked(bool value) ;

constexpr bool __get_m_NativeBeforeUpdateHooked() const;

 bool __declspec(property(get=__get_m_HaveDevicesWithStateCallbackReceivers, put=__set_m_HaveDevicesWithStateCallbackReceivers))  m_HaveDevicesWithStateCallbackReceivers;

constexpr void __set_m_HaveDevicesWithStateCallbackReceivers(bool value) ;

constexpr bool __get_m_HaveDevicesWithStateCallbackReceivers() const;

 bool __declspec(property(get=__get_m_HasFocus, put=__set_m_HasFocus))  m_HasFocus;

constexpr void __set_m_HasFocus(bool value) ;

constexpr bool __get_m_HasFocus() const;

 ::UnityEngine::InputSystem::LowLevel::InputEventStream __declspec(property(get=__get_m_InputEventStream, put=__set_m_InputEventStream))  m_InputEventStream;

constexpr void __set_m_InputEventStream(::UnityEngine::InputSystem::LowLevel::InputEventStream value) ;

constexpr ::UnityEngine::InputSystem::LowLevel::InputEventStream __get_m_InputEventStream() const;

 ::UnityEngine::InputSystem::LowLevel::InputDeviceExecuteCommandDelegate __declspec(property(get=__get_m_DeviceFindExecuteCommandDelegate, put=__set_m_DeviceFindExecuteCommandDelegate))  m_DeviceFindExecuteCommandDelegate;

constexpr void __set_m_DeviceFindExecuteCommandDelegate(::UnityEngine::InputSystem::LowLevel::InputDeviceExecuteCommandDelegate value) ;

constexpr ::UnityEngine::InputSystem::LowLevel::InputDeviceExecuteCommandDelegate __get_m_DeviceFindExecuteCommandDelegate() const;

 int32_t __declspec(property(get=__get_m_DeviceFindExecuteCommandDeviceId, put=__set_m_DeviceFindExecuteCommandDeviceId))  m_DeviceFindExecuteCommandDeviceId;

constexpr void __set_m_DeviceFindExecuteCommandDeviceId(int32_t value) ;

constexpr int32_t __get_m_DeviceFindExecuteCommandDeviceId() const;

 ::UnityEngine::InputSystem::LowLevel::IInputRuntime __declspec(property(get=__get_m_Runtime, put=__set_m_Runtime))  m_Runtime;

constexpr void __set_m_Runtime(::UnityEngine::InputSystem::LowLevel::IInputRuntime value) ;

constexpr ::UnityEngine::InputSystem::LowLevel::IInputRuntime __get_m_Runtime() const;

 ::UnityEngine::InputSystem::LowLevel::InputMetrics __declspec(property(get=__get_m_Metrics, put=__set_m_Metrics))  m_Metrics;

constexpr void __set_m_Metrics(::UnityEngine::InputSystem::LowLevel::InputMetrics value) ;

constexpr ::UnityEngine::InputSystem::LowLevel::InputMetrics __get_m_Metrics() const;

 ::UnityEngine::InputSystem::InputSettings __declspec(property(get=__get_m_Settings, put=__set_m_Settings))  m_Settings;

constexpr void __set_m_Settings(::UnityEngine::InputSystem::InputSettings value) ;

constexpr ::UnityEngine::InputSystem::InputSettings __get_m_Settings() const;

 ::ArrayW<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputManager__StateChangeMonitorsForDevice> __declspec(property(get=__get_m_StateChangeMonitors, put=__set_m_StateChangeMonitors))  m_StateChangeMonitors;

constexpr void __set_m_StateChangeMonitors(::ArrayW<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputManager__StateChangeMonitorsForDevice> value) ;

constexpr ::ArrayW<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputManager__StateChangeMonitorsForDevice> __get_m_StateChangeMonitors() const;

 ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputManager__StateChangeMonitorTimeout> __declspec(property(get=__get_m_StateChangeMonitorTimeouts, put=__set_m_StateChangeMonitorTimeouts))  m_StateChangeMonitorTimeouts;

constexpr void __set_m_StateChangeMonitorTimeouts(::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputManager__StateChangeMonitorTimeout> value) ;

constexpr ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputManager__StateChangeMonitorTimeout> __get_m_StateChangeMonitorTimeouts() const;


// Properties

 ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice> __declspec(property(get=get_devices))  devices;

 ::UnityEngine::InputSystem::Utilities::TypeTable __declspec(property(get=get_processors))  processors;

 ::UnityEngine::InputSystem::Utilities::TypeTable __declspec(property(get=get_interactions))  interactions;

 ::UnityEngine::InputSystem::Utilities::TypeTable __declspec(property(get=get_composites))  composites;

 ::UnityEngine::InputSystem::LowLevel::InputMetrics __declspec(property(get=get_metrics))  metrics;

 ::UnityEngine::InputSystem::InputSettings __declspec(property(get=get_settings, put=set_settings))  settings;

 ::UnityEngine::InputSystem::LowLevel::InputUpdateType __declspec(property(get=get_updateMask, put=set_updateMask))  updateMask;

 ::UnityEngine::InputSystem::LowLevel::InputUpdateType __declspec(property(get=get_defaultUpdateType))  defaultUpdateType;

 float_t __declspec(property(get=get_pollingFrequency, put=set_pollingFrequency))  pollingFrequency;

 bool __declspec(property(get=get_isProcessingEvents))  isProcessingEvents;

 bool __declspec(property(get=get_gameIsPlaying))  gameIsPlaying;

 bool __declspec(property(get=get_gameHasFocus))  gameHasFocus;

 bool __declspec(property(get=get_gameShouldGetInputRegardlessOfFocus))  gameShouldGetInputRegardlessOfFocus;


// Methods

/// @brief Method get_devices addr 0x2912554 size 0x68 virtual false final false
 ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice> get_devices() ;

/// @brief Method get_processors addr 0x29183cc size 0x8 virtual false final false
 ::UnityEngine::InputSystem::Utilities::TypeTable get_processors() ;

/// @brief Method get_interactions addr 0x29183d4 size 0x8 virtual false final false
 ::UnityEngine::InputSystem::Utilities::TypeTable get_interactions() ;

/// @brief Method get_composites addr 0x29183dc size 0x8 virtual false final false
 ::UnityEngine::InputSystem::Utilities::TypeTable get_composites() ;

/// @brief Method get_metrics addr 0x29183e4 size 0x19c virtual false final false
 ::UnityEngine::InputSystem::LowLevel::InputMetrics get_metrics() ;

/// @brief Method get_settings addr 0x2918580 size 0x8 virtual false final false
 ::UnityEngine::InputSystem::InputSettings get_settings() ;

/// @brief Method set_settings addr 0x2918588 size 0xfc virtual false final false
 void set_settings(::UnityEngine::InputSystem::InputSettings value) ;

/// @brief Method get_updateMask addr 0x2918a10 size 0x8 virtual false final false
 ::UnityEngine::InputSystem::LowLevel::InputUpdateType get_updateMask() ;

/// @brief Method set_updateMask addr 0x2918a18 size 0x24 virtual false final false
 void set_updateMask(::UnityEngine::InputSystem::LowLevel::InputUpdateType value) ;

/// @brief Method get_defaultUpdateType addr 0x2918bd0 size 0x1c virtual false final false
 ::UnityEngine::InputSystem::LowLevel::InputUpdateType get_defaultUpdateType() ;

/// @brief Method get_pollingFrequency addr 0x2918bec size 0x8 virtual false final false
 float_t get_pollingFrequency() ;

/// @brief Method set_pollingFrequency addr 0x2918bf4 size 0x12c virtual false final false
 void set_pollingFrequency(float_t value) ;

/// @brief Method add_onDeviceChange addr 0x2910e34 size 0x58 virtual false final false
 void add_onDeviceChange(::System::Action_2<::UnityEngine::InputSystem::InputDevice,::UnityEngine::InputSystem::InputDeviceChange> value) ;

/// @brief Method remove_onDeviceChange addr 0x29110b4 size 0x58 virtual false final false
 void remove_onDeviceChange(::System::Action_2<::UnityEngine::InputSystem::InputDevice,::UnityEngine::InputSystem::InputDeviceChange> value) ;

/// @brief Method add_onDeviceStateChange addr 0x2918d20 size 0x58 virtual false final false
 void add_onDeviceStateChange(::System::Action_2<::UnityEngine::InputSystem::InputDevice,::UnityEngine::InputSystem::LowLevel::InputEventPtr> value) ;

/// @brief Method remove_onDeviceStateChange addr 0x2918d78 size 0x58 virtual false final false
 void remove_onDeviceStateChange(::System::Action_2<::UnityEngine::InputSystem::InputDevice,::UnityEngine::InputSystem::LowLevel::InputEventPtr> value) ;

/// @brief Method add_onDeviceCommand addr 0x2918dd0 size 0x58 virtual false final false
 void add_onDeviceCommand(::UnityEngine::InputSystem::LowLevel::InputDeviceCommandDelegate value) ;

/// @brief Method remove_onDeviceCommand addr 0x2918e28 size 0x58 virtual false final false
 void remove_onDeviceCommand(::UnityEngine::InputSystem::LowLevel::InputDeviceCommandDelegate value) ;

/// @brief Method add_onFindControlLayoutForDevice addr 0x2918e80 size 0x60 virtual false final false
 void add_onFindControlLayoutForDevice(::UnityEngine::InputSystem::Layouts::InputDeviceFindControlLayoutDelegate value) ;

/// @brief Method remove_onFindControlLayoutForDevice addr 0x2919188 size 0x58 virtual false final false
 void remove_onFindControlLayoutForDevice(::UnityEngine::InputSystem::Layouts::InputDeviceFindControlLayoutDelegate value) ;

/// @brief Method add_onLayoutChange addr 0x2910e8c size 0x58 virtual false final false
 void add_onLayoutChange(::System::Action_2<::StringW,::UnityEngine::InputSystem::InputControlLayoutChange> value) ;

/// @brief Method remove_onLayoutChange addr 0x291110c size 0x58 virtual false final false
 void remove_onLayoutChange(::System::Action_2<::StringW,::UnityEngine::InputSystem::InputControlLayoutChange> value) ;

/// @brief Method add_onEvent addr 0x2910ddc size 0x58 virtual false final false
 void add_onEvent(::System::Action_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr,::UnityEngine::InputSystem::InputDevice> value) ;

/// @brief Method remove_onEvent addr 0x291105c size 0x58 virtual false final false
 void remove_onEvent(::System::Action_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr,::UnityEngine::InputSystem::InputDevice> value) ;

/// @brief Method add_onBeforeUpdate addr 0x29191e0 size 0x60 virtual false final false
 void add_onBeforeUpdate(::System::Action value) ;

/// @brief Method remove_onBeforeUpdate addr 0x291934c size 0x58 virtual false final false
 void remove_onBeforeUpdate(::System::Action value) ;

/// @brief Method add_onAfterUpdate addr 0x29193a4 size 0x58 virtual false final false
 void add_onAfterUpdate(::System::Action value) ;

/// @brief Method remove_onAfterUpdate addr 0x29193fc size 0x58 virtual false final false
 void remove_onAfterUpdate(::System::Action value) ;

/// @brief Method add_onSettingsChange addr 0x2919454 size 0x58 virtual false final false
 void add_onSettingsChange(::System::Action value) ;

/// @brief Method remove_onSettingsChange addr 0x29194ac size 0x58 virtual false final false
 void remove_onSettingsChange(::System::Action value) ;

/// @brief Method get_isProcessingEvents addr 0x2919504 size 0x8 virtual false final false
 bool get_isProcessingEvents() ;

/// @brief Method get_gameIsPlaying addr 0x291950c size 0x8 virtual false final false
 bool get_gameIsPlaying() ;

/// @brief Method get_gameHasFocus addr 0x2919514 size 0x34 virtual false final false
 bool get_gameHasFocus() ;

/// @brief Method get_gameShouldGetInputRegardlessOfFocus addr 0x2919548 size 0x24 virtual false final false
 bool get_gameShouldGetInputRegardlessOfFocus() ;

/// @brief Method RegisterControlLayout addr 0x291956c size 0x618 virtual false final false
 void RegisterControlLayout(::StringW name, ::System::Type type) ;

/// @brief Method RegisterControlLayout addr 0x29136f0 size 0x4bc virtual false final false
 void RegisterControlLayout(::StringW json, ::StringW name, bool isOverride) ;

/// @brief Method RegisterControlLayoutBuilder addr 0x291a0fc size 0x194 virtual false final false
 void RegisterControlLayoutBuilder(::System::Func_1<::UnityEngine::InputSystem::Layouts::InputControlLayout> method, ::StringW name, ::StringW baseLayout) ;

/// @brief Method PerformLayoutPostRegistration addr 0x2919b84 size 0x458 virtual false final false
 void PerformLayoutPostRegistration(::UnityEngine::InputSystem::Utilities::InternedString layoutName, ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::Utilities::InternedString> baseLayouts, bool isReplacement, bool isKnownToBeDeviceLayout, bool isOverride) ;

/// @brief Method RegisterPrecompiledLayout addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TDevice>
 void RegisterPrecompiledLayout(::StringW metadata) ;

/// @brief Method RecreateDevicesUsingLayout addr 0x291a290 size 0x274 virtual false final false
 void RecreateDevicesUsingLayout(::UnityEngine::InputSystem::Utilities::InternedString layout, bool isKnownToBeDeviceLayout) ;

/// @brief Method IsControlOrChildUsingLayoutRecursive addr 0x291a5d4 size 0xf0 virtual false final false
 bool IsControlOrChildUsingLayoutRecursive(::UnityEngine::InputSystem::InputControl control, ::UnityEngine::InputSystem::Utilities::InternedString layout) ;

/// @brief Method IsControlUsingLayout addr 0x291a504 size 0xd0 virtual false final false
 bool IsControlUsingLayout(::UnityEngine::InputSystem::InputControl control, ::UnityEngine::InputSystem::Utilities::InternedString layout) ;

/// @brief Method RegisterControlLayoutMatcher addr 0x2919fdc size 0x120 virtual false final false
 void RegisterControlLayoutMatcher(::StringW layoutName, ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher matcher) ;

/// @brief Method RegisterControlLayoutMatcher addr 0x291ad94 size 0x204 virtual false final false
 void RegisterControlLayoutMatcher(::System::Type type, ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher matcher) ;

/// @brief Method RecreateDevicesUsingLayoutWithInferiorMatch addr 0x291a820 size 0x1ec virtual false final false
 void RecreateDevicesUsingLayoutWithInferiorMatch(::UnityEngine::InputSystem::Layouts::InputDeviceMatcher deviceMatcher) ;

/// @brief Method RecreateDevice addr 0x291a6c4 size 0x15c virtual false final false
 void RecreateDevice(::UnityEngine::InputSystem::InputDevice oldDevice, ::UnityEngine::InputSystem::Utilities::InternedString newLayout) ;

/// @brief Method AddAvailableDevicesMatchingDescription addr 0x291aa0c size 0x388 virtual false final false
 void AddAvailableDevicesMatchingDescription(::UnityEngine::InputSystem::Layouts::InputDeviceMatcher matcher, ::UnityEngine::InputSystem::Utilities::InternedString layout) ;

/// @brief Method RemoveControlLayout addr 0x291ba88 size 0x214 virtual false final false
 void RemoveControlLayout(::StringW name) ;

/// @brief Method TryLoadControlLayout addr 0x291bc9c size 0x230 virtual false final false
 ::UnityEngine::InputSystem::Layouts::InputControlLayout TryLoadControlLayout(::System::Type type) ;

/// @brief Method TryLoadControlLayout addr 0x29136e0 size 0x10 virtual false final false
 ::UnityEngine::InputSystem::Layouts::InputControlLayout TryLoadControlLayout(::UnityEngine::InputSystem::Utilities::InternedString name) ;

/// @brief Method TryFindMatchingControlLayout addr 0x291af98 size 0x430 virtual false final false
 ::UnityEngine::InputSystem::Utilities::InternedString TryFindMatchingControlLayout(ByRef<::UnityEngine::InputSystem::Layouts::InputDeviceDescription> deviceDescription, int32_t deviceId) ;

/// @brief Method FindOrRegisterDeviceLayoutForType addr 0x291becc size 0xa0 virtual false final false
 ::UnityEngine::InputSystem::Utilities::InternedString FindOrRegisterDeviceLayoutForType(::System::Type type) ;

/// @brief Method IsDeviceLayoutMarkedAsSupportedInSettings addr 0x291bf6c size 0x10c virtual false final false
 bool IsDeviceLayoutMarkedAsSupportedInSettings(::UnityEngine::InputSystem::Utilities::InternedString layoutName) ;

/// @brief Method ListControlLayouts addr 0x291c078 size 0x74 virtual false final false
 ::System::Collections::Generic::IEnumerable_1<::StringW> ListControlLayouts(::StringW basedOn) ;

/// @brief Method GetControls addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TControl>
 int32_t GetControls(::StringW path, ByRef<::UnityEngine::InputSystem::InputControlList_1<TControl>> controls) ;

/// @brief Method SetDeviceUsage addr 0x291c0ec size 0x15c virtual false final false
 void SetDeviceUsage(::UnityEngine::InputSystem::InputDevice device, ::UnityEngine::InputSystem::Utilities::InternedString usage) ;

/// @brief Method AddDeviceUsage addr 0x2913cf0 size 0x134 virtual false final false
 void AddDeviceUsage(::UnityEngine::InputSystem::InputDevice device, ::UnityEngine::InputSystem::Utilities::InternedString usage) ;

/// @brief Method RemoveDeviceUsage addr 0x2913eb8 size 0x134 virtual false final false
 void RemoveDeviceUsage(::UnityEngine::InputSystem::InputDevice device, ::UnityEngine::InputSystem::Utilities::InternedString usage) ;

/// @brief Method NotifyUsageChanged addr 0x291c248 size 0xa4 virtual false final false
 void NotifyUsageChanged(::UnityEngine::InputSystem::InputDevice device) ;

/// @brief Method AddDevice addr 0x291c2ec size 0xe8 virtual false final false
 ::UnityEngine::InputSystem::InputDevice AddDevice(::System::Type type, ::StringW name) ;

/// @brief Method AddDevice addr 0x2913bac size 0x144 virtual false final false
 ::UnityEngine::InputSystem::InputDevice AddDevice(::StringW layout, ::StringW name, ::UnityEngine::InputSystem::Utilities::InternedString variants) ;

/// @brief Method AddDevice addr 0x291b8d8 size 0x1b0 virtual false final false
 ::UnityEngine::InputSystem::InputDevice AddDevice(::UnityEngine::InputSystem::Utilities::InternedString layout, int32_t deviceId, ::StringW deviceName, ::UnityEngine::InputSystem::Layouts::InputDeviceDescription deviceDescription, ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputDevice__DeviceFlags deviceFlags, ::UnityEngine::InputSystem::Utilities::InternedString variants) ;

/// @brief Method AddDevice addr 0x291b3c8 size 0x510 virtual false final false
 void AddDevice(::UnityEngine::InputSystem::InputDevice device) ;

/// @brief Method AddDevice addr 0x291cd74 size 0x44 virtual false final false
 ::UnityEngine::InputSystem::InputDevice AddDevice(::UnityEngine::InputSystem::Layouts::InputDeviceDescription description) ;

/// @brief Method AddDevice addr 0x291cdb8 size 0x1d8 virtual false final false
 ::UnityEngine::InputSystem::InputDevice AddDevice(::UnityEngine::InputSystem::Layouts::InputDeviceDescription description, bool throwIfNoLayoutFound, ::StringW deviceName, int32_t deviceId, ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputDevice__DeviceFlags deviceFlags) ;

/// @brief Method AddDevice addr 0x291cf90 size 0xd4 virtual false final false
 ::UnityEngine::InputSystem::InputDevice AddDevice(::UnityEngine::InputSystem::Layouts::InputDeviceDescription description, ::UnityEngine::InputSystem::Utilities::InternedString layout, ::StringW deviceName, int32_t deviceId, ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputDevice__DeviceFlags deviceFlags) ;

/// @brief Method RemoveDevice addr 0x2913224 size 0x464 virtual false final false
 void RemoveDevice(::UnityEngine::InputSystem::InputDevice device, bool keepOnListOfAvailableDevices) ;

/// @brief Method FlushDisconnectedDevices addr 0x291d190 size 0x54 virtual false final false
 void FlushDisconnectedDevices() ;

/// @brief Method ResetDevice addr 0x291d1e4 size 0x57c virtual false final false
 void ResetDevice(::UnityEngine::InputSystem::InputDevice device, bool alsoResetDontResetControls, ::System::Nullable_1<bool> issueResetCommand) ;

/// @brief Method TryGetDevice addr 0x291d928 size 0x128 virtual false final false
 ::UnityEngine::InputSystem::InputDevice TryGetDevice(::StringW nameOrLayout) ;

/// @brief Method GetDevice addr 0x291da50 size 0xa4 virtual false final false
 ::UnityEngine::InputSystem::InputDevice GetDevice(::StringW nameOrLayout) ;

/// @brief Method TryGetDevice addr 0x291daf4 size 0x58 virtual false final false
 ::UnityEngine::InputSystem::InputDevice TryGetDevice(::System::Type layoutType) ;

/// @brief Method TryGetDeviceById addr 0x29130a8 size 0x78 virtual false final false
 ::UnityEngine::InputSystem::InputDevice TryGetDeviceById(int32_t id) ;

/// @brief Method GetUnsupportedDevices addr 0x291db4c size 0x1ec virtual false final false
 int32_t GetUnsupportedDevices(::System::Collections::Generic::List_1<::UnityEngine::InputSystem::Layouts::InputDeviceDescription> descriptions) ;

/// @brief Method EnableOrDisableDevice addr 0x291c948 size 0x42c virtual false final false
 void EnableOrDisableDevice(::UnityEngine::InputSystem::InputDevice device, bool enable, ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputManager__DeviceDisableScope scope) ;

/// @brief Method QueueEvent addr 0x291dd38 size 0xcc virtual false final false
 void QueueEvent(void* eventPtr) ;

/// @brief Method QueueEvent addr 0x2913eb4 size 0x4 virtual false final false
 void QueueEvent(::UnityEngine::InputSystem::LowLevel::InputEventPtr ptr) ;

/// @brief Method QueueEvent addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TEvent>
 void QueueEvent(ByRef<TEvent> inputEvent) ;

/// @brief Method Update addr 0x291de04 size 0x2c virtual false final false
 void Update() ;

/// @brief Method Update addr 0x291de30 size 0xac virtual false final false
 void Update(::UnityEngine::InputSystem::LowLevel::InputUpdateType updateType) ;

/// @brief Method Initialize addr 0x291dedc size 0x3c virtual false final false
 void Initialize(::UnityEngine::InputSystem::LowLevel::IInputRuntime runtime, ::UnityEngine::InputSystem::InputSettings settings) ;

/// @brief Method Destroy addr 0x291fc74 size 0x10c virtual false final false
 void Destroy() ;

/// @brief Method InitializeData addr 0x291df18 size 0x146c virtual false final false
 void InitializeData() ;

/// @brief Method InstallRuntime addr 0x291f384 size 0x6e0 virtual false final false
 void InstallRuntime(::UnityEngine::InputSystem::LowLevel::IInputRuntime runtime) ;

/// @brief Method InstallGlobals addr 0x291fa64 size 0x210 virtual false final false
 void InstallGlobals() ;

/// @brief Method UninstallGlobals addr 0x291fd80 size 0x38c virtual false final false
 void UninstallGlobals() ;

/// @brief Method MakeDeviceNameUnique addr 0x291c3d4 size 0x184 virtual false final false
 void MakeDeviceNameUnique(::UnityEngine::InputSystem::InputDevice device) ;

/// @brief Method ResetControlPathsRecursive addr 0x292010c size 0xa4 virtual false final false
static void ResetControlPathsRecursive(::UnityEngine::InputSystem::InputControl control) ;

/// @brief Method AssignUniqueDeviceId addr 0x291c558 size 0x18c virtual false final false
 void AssignUniqueDeviceId(::UnityEngine::InputSystem::InputDevice device) ;

/// @brief Method ReallocateStateBuffers addr 0x2918a3c size 0x194 virtual false final false
 void ReallocateStateBuffers() ;

/// @brief Method InitializeDefaultState addr 0x29201b0 size 0x158 virtual false final false
 void InitializeDefaultState(::UnityEngine::InputSystem::InputDevice device) ;

/// @brief Method InitializeDeviceState addr 0x291c6e4 size 0x228 virtual false final false
 void InitializeDeviceState(::UnityEngine::InputSystem::InputDevice device) ;

/// @brief Method OnNativeDeviceDiscovered addr 0x2920308 size 0x3e8 virtual false final false
 void OnNativeDeviceDiscovered(int32_t deviceId, ::StringW deviceDescriptor) ;

/// @brief Method TryMatchDisconnectedDevice addr 0x29206f4 size 0x1e4 virtual false final false
 ::UnityEngine::InputSystem::InputDevice TryMatchDisconnectedDevice(::StringW deviceDescriptor) ;

/// @brief Method InstallBeforeUpdateHookIfNecessary addr 0x2919240 size 0x10c virtual false final false
 void InstallBeforeUpdateHookIfNecessary() ;

/// @brief Method RestoreDevicesAfterDomainReloadIfNecessary addr 0x29206f0 size 0x4 virtual false final false
 void RestoreDevicesAfterDomainReloadIfNecessary() ;

/// @brief Method WarnAboutDevicesFailingToRecreateAfterDomainReload addr 0x29208d8 size 0x4 virtual false final false
 void WarnAboutDevicesFailingToRecreateAfterDomainReload() ;

/// @brief Method OnBeforeUpdate addr 0x29208dc size 0x1c0 virtual false final false
 void OnBeforeUpdate(::UnityEngine::InputSystem::LowLevel::InputUpdateType updateType) ;

/// @brief Method ApplySettings addr 0x2918684 size 0x38c virtual false final false
 void ApplySettings() ;

/// @brief Method ExecuteGlobalCommand addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TCommand>
 int64_t ExecuteGlobalCommand(ByRef<TCommand> command) ;

/// @brief Method AddAvailableDevicesThatAreNowRecognized addr 0x2918ee0 size 0x2a8 virtual false final false
 void AddAvailableDevicesThatAreNowRecognized() ;

/// @brief Method ShouldRunDeviceInBackground addr 0x291c90c size 0x3c virtual false final false
 bool ShouldRunDeviceInBackground(::UnityEngine::InputSystem::InputDevice device) ;

/// @brief Method OnFocusChanged addr 0x2920a9c size 0x240 virtual false final false
 void OnFocusChanged(bool focus) ;

/// @brief Method ShouldRunUpdate addr 0x2920cdc size 0x1c virtual false final false
 bool ShouldRunUpdate(::UnityEngine::InputSystem::LowLevel::InputUpdateType updateType) ;

/// @brief Method OnUpdate addr 0x2920cf8 size 0x12e0 virtual false final false
 void OnUpdate(::UnityEngine::InputSystem::LowLevel::InputUpdateType updateType, ByRef<::UnityEngine::InputSystem::LowLevel::InputEventBuffer> eventBuffer) ;

/// @brief Method InvokeAfterUpdateCallback addr 0x292228c size 0x68 virtual false final false
 void InvokeAfterUpdateCallback(::UnityEngine::InputSystem::LowLevel::InputUpdateType updateType) ;

/// @brief Method UpdateState addr 0x29222f4 size 0x154 virtual false final false
 bool UpdateState(::UnityEngine::InputSystem::InputDevice device, void* eventPtr, ::UnityEngine::InputSystem::LowLevel::InputUpdateType updateType) ;

/// @brief Method UpdateState addr 0x291d760 size 0x1c8 virtual false final false
 bool UpdateState(::UnityEngine::InputSystem::InputDevice device, ::UnityEngine::InputSystem::LowLevel::InputUpdateType updateType, void* statePtr, uint32_t stateOffsetInDevice, uint32_t stateSize, double_t internalTime, ::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr) ;

/// @brief Method WriteStateChange addr 0x29227c8 size 0xb4 virtual false final false
static void WriteStateChange(::UnityEngine::InputSystem::LowLevel::____UnityEngine__InputSystem__LowLevel__InputStateBuffers__DoubleBuffers buffers, int32_t deviceIndex, ByRef<::UnityEngine::InputSystem::LowLevel::InputStateBlock> deviceStateBlock, uint32_t stateOffsetInDevice, void* statePtr, uint32_t stateSizeInBytes, bool flippedBuffers) ;

/// @brief Method FlipBuffersForDeviceIfNecessary addr 0x2922724 size 0xa4 virtual false final false
 bool FlipBuffersForDeviceIfNecessary(::UnityEngine::InputSystem::InputDevice device, ::UnityEngine::InputSystem::LowLevel::InputUpdateType updateType) ;

/// @brief Method AddStateChangeMonitor addr 0x2922c94 size 0x13c virtual false final false
 void AddStateChangeMonitor(::UnityEngine::InputSystem::InputControl control, ::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor monitor, int64_t monitorIndex, uint32_t groupIndex) ;

/// @brief Method RemoveStateChangeMonitors addr 0x291d064 size 0x12c virtual false final false
 void RemoveStateChangeMonitors(::UnityEngine::InputSystem::InputDevice device) ;

/// @brief Method RemoveStateChangeMonitor addr 0x2922dd0 size 0x158 virtual false final false
 void RemoveStateChangeMonitor(::UnityEngine::InputSystem::InputControl control, ::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor monitor, int64_t monitorIndex) ;

/// @brief Method AddStateChangeMonitorTimeout addr 0x2922f28 size 0x94 virtual false final false
 void AddStateChangeMonitorTimeout(::UnityEngine::InputSystem::InputControl control, ::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor monitor, double_t time, int64_t monitorIndex, int32_t timerIndex) ;

/// @brief Method RemoveStateChangeMonitorTimeout addr 0x2922fbc size 0x124 virtual false final false
 void RemoveStateChangeMonitorTimeout(::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor monitor, int64_t monitorIndex, int32_t timerIndex) ;

/// @brief Method SortStateChangeMonitorsIfNecessary addr 0x2922448 size 0x54 virtual false final false
 void SortStateChangeMonitorsIfNecessary(int32_t deviceIndex) ;

/// @brief Method SignalStateChangeMonitor addr 0x29230e0 size 0xf0 virtual false final false
 void SignalStateChangeMonitor(::UnityEngine::InputSystem::InputControl control, ::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor monitor) ;

/// @brief Method FireStateChangeNotifications addr 0x29231d0 size 0x14c virtual false final false
 void FireStateChangeNotifications() ;

/// @brief Method ProcessStateChangeMonitors addr 0x292249c size 0x288 virtual false final false
 bool ProcessStateChangeMonitors(int32_t deviceIndex, void* newStateFromEvent, void* oldStateOfDevice, uint32_t newStateSizeInBytes, uint32_t newStateOffsetInBytes) ;

/// @brief Method FireStateChangeNotifications addr 0x292287c size 0x418 virtual false final false
 void FireStateChangeNotifications(int32_t deviceIndex, double_t internalTime, void* eventPtr) ;

/// @brief Method ProcessStateChangeMonitorTimeouts addr 0x2921fd8 size 0x2b4 virtual false final false
 void ProcessStateChangeMonitorTimeouts() ;

// Ctor Parameters []
explicit InputManager() ;

/// @brief Method .ctor addr 0x292331c size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <TryFindMatchingControlLayout>b__72_0 addr 0x2923324 size 0x1068 virtual false final false
 int64_t _TryFindMatchingControlLayout_b__72_0(ByRef<::UnityEngine::InputSystem::LowLevel::InputDeviceCommand> commandRef) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem
// Type: ::<>c__60`1
namespace UnityEngine::InputSystem {
// cpp template
template<::cordl_internals::il2cpp_reference_type TDevice>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6380))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6380), inst: 2 })
// CS Name: UnityEngine.InputSystem.InputManager::<>c__60`1
class CORDL_TYPE ____UnityEngine__InputSystem__InputManager____c__60_1<TDevice> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~____UnityEngine__InputSystem__InputManager____c__60_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__InputSystem__InputManager____c__60_1", modifiers: " const&", def_value: None }]
constexpr ____UnityEngine__InputSystem__InputManager____c__60_1(____UnityEngine__InputSystem__InputManager____c__60_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__InputSystem__InputManager____c__60_1", modifiers: "&&", def_value: None }]
constexpr ____UnityEngine__InputSystem__InputManager____c__60_1(____UnityEngine__InputSystem__InputManager____c__60_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__InputSystem__InputManager____c__60_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____UnityEngine__InputSystem__InputManager____c__60_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____UnityEngine__InputSystem__InputManager____c__60_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____UnityEngine__InputSystem__InputManager____c__60_1& operator=(____UnityEngine__InputSystem__InputManager____c__60_1&& o) noexcept = default;
  constexpr ____UnityEngine__InputSystem__InputManager____c__60_1& operator=(____UnityEngine__InputSystem__InputManager____c__60_1 const& o) noexcept = default;
                


// Fields

static ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputManager____c__60_1<TDevice> __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputManager____c__60_1<TDevice> value) ;

static ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputManager____c__60_1<TDevice> __get___9() ;

static ::System::Func_1<::UnityEngine::InputSystem::InputDevice> __declspec(property(get=__get___9__60_0, put=__set___9__60_0))  __9__60_0;

static void __set___9__60_0(::System::Func_1<::UnityEngine::InputSystem::InputDevice> value) ;

static ::System::Func_1<::UnityEngine::InputSystem::InputDevice> __get___9__60_0() ;


// Methods

// Ctor Parameters []
explicit ____UnityEngine__InputSystem__InputManager____c__60_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method <RegisterPrecompiledLayout>b__60_0 addr 0x0 size 0xffffffffffffffff virtual false final false
 ::UnityEngine::InputSystem::InputDevice _RegisterPrecompiledLayout_b__60_0() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputManager____c__60_1, "UnityEngine.InputSystem", "InputManager/<>c__60`1");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputManager__DeviceDisableScope, "UnityEngine.InputSystem", "InputManager/DeviceDisableScope");
NEED_NO_BOX(::UnityEngine::InputSystem::InputManager);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::InputManager, "UnityEngine.InputSystem", "InputManager");
NEED_NO_BOX(::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputManager___ListControlLayouts_d__75);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputManager___ListControlLayouts_d__75, "UnityEngine.InputSystem", "InputManager/<ListControlLayouts>d__75");
NEED_NO_BOX(::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputManager____c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputManager____c, "UnityEngine.InputSystem", "InputManager/<>c");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputManager__AvailableDevice, "UnityEngine.InputSystem", "InputManager/AvailableDevice");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputManager__StateChangeMonitorListener, "UnityEngine.InputSystem", "InputManager/StateChangeMonitorListener");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputManager__StateChangeMonitorTimeout, "UnityEngine.InputSystem", "InputManager/StateChangeMonitorTimeout");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputManager__StateChangeMonitorsForDevice, "UnityEngine.InputSystem", "InputManager/StateChangeMonitorsForDevice");
