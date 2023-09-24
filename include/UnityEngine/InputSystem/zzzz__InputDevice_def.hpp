#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControl_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace System {
class Type;
}
namespace UnityEngine::InputSystem {
struct UnityEngine__InputSystem__InputDevice__DeviceFlags;
}
namespace UnityEngine::InputSystem {
class InputControl;
}
namespace UnityEngine::InputSystem::Layouts {
struct InputDeviceDescription;
}
namespace UnityEngine::InputSystem::Utilities {
struct InternedString;
}
namespace UnityEngine::InputSystem::Utilities {
template<typename TValue>
struct ReadOnlyArray_1;
}
// Forward declare root types
namespace UnityEngine::InputSystem {
struct UnityEngine__InputSystem__InputDevice__DeviceFlags;
}
namespace UnityEngine::InputSystem {
class InputDevice;
}
// Type: ::DeviceFlags
namespace UnityEngine::InputSystem {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6321))
// CS Name: UnityEngine.InputSystem.InputDevice::DeviceFlags
struct CORDL_TYPE UnityEngine__InputSystem__InputDevice__DeviceFlags : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr UnityEngine__InputSystem__InputDevice__DeviceFlags(int32_t value__) noexcept;


                    constexpr UnityEngine__InputSystem__InputDevice__DeviceFlags(UnityEngine__InputSystem__InputDevice__DeviceFlags const&) = default;
                    constexpr UnityEngine__InputSystem__InputDevice__DeviceFlags(UnityEngine__InputSystem__InputDevice__DeviceFlags&&) = default;
                    constexpr UnityEngine__InputSystem__InputDevice__DeviceFlags& operator=(UnityEngine__InputSystem__InputDevice__DeviceFlags const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__InputSystem__InputDevice__DeviceFlags& operator=(UnityEngine__InputSystem__InputDevice__DeviceFlags&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__InputSystem__InputDevice__DeviceFlags(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __UnityEngine__InputSystem__InputDevice__DeviceFlags_Unwrapped : int32_t {
__UpdateBeforeRender = 1,
__HasStateCallbacks = 2,
__HasControlsWithDefaultState = 4,
__HasDontResetControls = 1024,
__HasEventMerger = 8192,
__HasEventPreProcessor = 16384,
__Remote = 8,
__Native = 16,
__DisabledInFrontend = 32,
__DisabledInRuntime = 128,
__DisabledWhileInBackground = 256,
__DisabledStateHasBeenQueriedFromRuntime = 64,
__CanRunInBackground = 2048,
__CanRunInBackgroundHasBeenQueried = 4096,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __UnityEngine__InputSystem__InputDevice__DeviceFlags_Unwrapped () const noexcept {
return std::bit_cast<__UnityEngine__InputSystem__InputDevice__DeviceFlags_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field UpdateBeforeRender offset 0
static UnityEngine::InputSystem::UnityEngine__InputSystem__InputDevice__DeviceFlags const UpdateBeforeRender;

/// @brief Field HasStateCallbacks offset 0
static UnityEngine::InputSystem::UnityEngine__InputSystem__InputDevice__DeviceFlags const HasStateCallbacks;

/// @brief Field HasControlsWithDefaultState offset 0
static UnityEngine::InputSystem::UnityEngine__InputSystem__InputDevice__DeviceFlags const HasControlsWithDefaultState;

/// @brief Field HasDontResetControls offset 0
static UnityEngine::InputSystem::UnityEngine__InputSystem__InputDevice__DeviceFlags const HasDontResetControls;

/// @brief Field HasEventMerger offset 0
static UnityEngine::InputSystem::UnityEngine__InputSystem__InputDevice__DeviceFlags const HasEventMerger;

/// @brief Field HasEventPreProcessor offset 0
static UnityEngine::InputSystem::UnityEngine__InputSystem__InputDevice__DeviceFlags const HasEventPreProcessor;

/// @brief Field Remote offset 0
static UnityEngine::InputSystem::UnityEngine__InputSystem__InputDevice__DeviceFlags const Remote;

/// @brief Field Native offset 0
static UnityEngine::InputSystem::UnityEngine__InputSystem__InputDevice__DeviceFlags const Native;

/// @brief Field DisabledInFrontend offset 0
static UnityEngine::InputSystem::UnityEngine__InputSystem__InputDevice__DeviceFlags const DisabledInFrontend;

/// @brief Field DisabledInRuntime offset 0
static UnityEngine::InputSystem::UnityEngine__InputSystem__InputDevice__DeviceFlags const DisabledInRuntime;

/// @brief Field DisabledWhileInBackground offset 0
static UnityEngine::InputSystem::UnityEngine__InputSystem__InputDevice__DeviceFlags const DisabledWhileInBackground;

/// @brief Field DisabledStateHasBeenQueriedFromRuntime offset 0
static UnityEngine::InputSystem::UnityEngine__InputSystem__InputDevice__DeviceFlags const DisabledStateHasBeenQueriedFromRuntime;

/// @brief Field CanRunInBackground offset 0
static UnityEngine::InputSystem::UnityEngine__InputSystem__InputDevice__DeviceFlags const CanRunInBackground;

/// @brief Field CanRunInBackgroundHasBeenQueried offset 0
static UnityEngine::InputSystem::UnityEngine__InputSystem__InputDevice__DeviceFlags const CanRunInBackgroundHasBeenQueried;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem
// Type: UnityEngine.InputSystem::InputDevice
namespace UnityEngine::InputSystem {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6298))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6322))
// CS Name: UnityEngine.InputSystem.InputDevice
class CORDL_TYPE InputDevice : public UnityEngine::InputSystem::InputControl {
public:
// Declarations
using DeviceFlags = UnityEngine::InputSystem::UnityEngine__InputSystem__InputDevice__DeviceFlags;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x158};

virtual ~InputDevice() = default;

// Ctor Parameters [CppParam { name: "", ty: "InputDevice", modifiers: " const&", def_value: None }]
constexpr InputDevice(InputDevice const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "InputDevice", modifiers: "&&", def_value: None }]
constexpr InputDevice(InputDevice&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit InputDevice(void* ptr) noexcept : UnityEngine::InputSystem::InputControl(ptr) {
}


  constexpr InputDevice& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr InputDevice& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr InputDevice& operator=(InputDevice&& o) noexcept = default;
  constexpr InputDevice& operator=(InputDevice const& o) noexcept = default;
                


// Fields

/// @brief Field InvalidDeviceId offset 0
static constexpr int32_t  InvalidDeviceId{0};

/// @brief Field kLocalParticipantId offset 0
static constexpr int32_t  kLocalParticipantId{0};

/// @brief Field kInvalidDeviceIndex offset 0
static constexpr int32_t  kInvalidDeviceIndex{-1};

 UnityEngine::InputSystem::UnityEngine__InputSystem__InputDevice__DeviceFlags __declspec(property(get=__get_m_DeviceFlags, put=__set_m_DeviceFlags))  m_DeviceFlags;

constexpr void __set_m_DeviceFlags(UnityEngine::InputSystem::UnityEngine__InputSystem__InputDevice__DeviceFlags value) ;

constexpr UnityEngine::InputSystem::UnityEngine__InputSystem__InputDevice__DeviceFlags __get_m_DeviceFlags() const;

 int32_t __declspec(property(get=__get_m_DeviceId, put=__set_m_DeviceId))  m_DeviceId;

constexpr void __set_m_DeviceId(int32_t value) ;

constexpr int32_t __get_m_DeviceId() const;

 int32_t __declspec(property(get=__get_m_ParticipantId, put=__set_m_ParticipantId))  m_ParticipantId;

constexpr void __set_m_ParticipantId(int32_t value) ;

constexpr int32_t __get_m_ParticipantId() const;

 int32_t __declspec(property(get=__get_m_DeviceIndex, put=__set_m_DeviceIndex))  m_DeviceIndex;

constexpr void __set_m_DeviceIndex(int32_t value) ;

constexpr int32_t __get_m_DeviceIndex() const;

 UnityEngine::InputSystem::Layouts::InputDeviceDescription __declspec(property(get=__get_m_Description, put=__set_m_Description))  m_Description;

constexpr void __set_m_Description(UnityEngine::InputSystem::Layouts::InputDeviceDescription value) ;

constexpr UnityEngine::InputSystem::Layouts::InputDeviceDescription __get_m_Description() const;

 double_t __declspec(property(get=__get_m_LastUpdateTimeInternal, put=__set_m_LastUpdateTimeInternal))  m_LastUpdateTimeInternal;

constexpr void __set_m_LastUpdateTimeInternal(double_t value) ;

constexpr double_t __get_m_LastUpdateTimeInternal() const;

 uint32_t __declspec(property(get=__get_m_CurrentUpdateStepCount, put=__set_m_CurrentUpdateStepCount))  m_CurrentUpdateStepCount;

constexpr void __set_m_CurrentUpdateStepCount(uint32_t value) ;

constexpr uint32_t __get_m_CurrentUpdateStepCount() const;

 ::ArrayW<UnityEngine::InputSystem::Utilities::InternedString> __declspec(property(get=__get_m_AliasesForEachControl, put=__set_m_AliasesForEachControl))  m_AliasesForEachControl;

constexpr void __set_m_AliasesForEachControl(::ArrayW<UnityEngine::InputSystem::Utilities::InternedString> value) ;

constexpr ::ArrayW<UnityEngine::InputSystem::Utilities::InternedString> __get_m_AliasesForEachControl() const;

 ::ArrayW<UnityEngine::InputSystem::Utilities::InternedString> __declspec(property(get=__get_m_UsagesForEachControl, put=__set_m_UsagesForEachControl))  m_UsagesForEachControl;

constexpr void __set_m_UsagesForEachControl(::ArrayW<UnityEngine::InputSystem::Utilities::InternedString> value) ;

constexpr ::ArrayW<UnityEngine::InputSystem::Utilities::InternedString> __get_m_UsagesForEachControl() const;

 ::ArrayW<UnityEngine::InputSystem::InputControl> __declspec(property(get=__get_m_UsageToControl, put=__set_m_UsageToControl))  m_UsageToControl;

constexpr void __set_m_UsageToControl(::ArrayW<UnityEngine::InputSystem::InputControl> value) ;

constexpr ::ArrayW<UnityEngine::InputSystem::InputControl> __get_m_UsageToControl() const;

 ::ArrayW<UnityEngine::InputSystem::InputControl> __declspec(property(get=__get_m_ChildrenForEachControl, put=__set_m_ChildrenForEachControl))  m_ChildrenForEachControl;

constexpr void __set_m_ChildrenForEachControl(::ArrayW<UnityEngine::InputSystem::InputControl> value) ;

constexpr ::ArrayW<UnityEngine::InputSystem::InputControl> __get_m_ChildrenForEachControl() const;

 ::ArrayW<uint32_t> __declspec(property(get=__get_m_StateOffsetToControlMap, put=__set_m_StateOffsetToControlMap))  m_StateOffsetToControlMap;

constexpr void __set_m_StateOffsetToControlMap(::ArrayW<uint32_t> value) ;

constexpr ::ArrayW<uint32_t> __get_m_StateOffsetToControlMap() const;

/// @brief Field kControlIndexBits offset 0
static constexpr int32_t  kControlIndexBits{10};

/// @brief Field kStateOffsetBits offset 0
static constexpr int32_t  kStateOffsetBits{13};

/// @brief Field kStateSizeBits offset 0
static constexpr int32_t  kStateSizeBits{9};


// Properties

 UnityEngine::InputSystem::Layouts::InputDeviceDescription __declspec(property(get=get_description))  description;

 bool __declspec(property(get=get_enabled))  enabled;

 bool __declspec(property(get=get_canRunInBackground))  canRunInBackground;

 bool __declspec(property(get=get_added))  added;

 bool __declspec(property(get=get_remote))  remote;

 bool __declspec(property(get=get_native))  native;

 bool __declspec(property(get=get_updateBeforeRender))  updateBeforeRender;

 int32_t __declspec(property(get=get_deviceId))  deviceId;

 double_t __declspec(property(get=get_lastUpdateTime))  lastUpdateTime;

 bool __declspec(property(get=get_wasUpdatedThisFrame))  wasUpdatedThisFrame;

 UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<UnityEngine::InputSystem::InputControl> __declspec(property(get=get_allControls))  allControls;

 System::Type __declspec(property(get=get_valueType))  valueType;

 int32_t __declspec(property(get=get_valueSizeInBytes))  valueSizeInBytes;

static UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<UnityEngine::InputSystem::InputDevice> __declspec(property(get=get_all))  all;

 bool __declspec(property(get=get_disabledInFrontend, put=set_disabledInFrontend))  disabledInFrontend;

 bool __declspec(property(get=get_disabledInRuntime, put=set_disabledInRuntime))  disabledInRuntime;

 bool __declspec(property(get=get_disabledWhileInBackground, put=set_disabledWhileInBackground))  disabledWhileInBackground;

 bool __declspec(property(get=get_hasControlsWithDefaultState, put=set_hasControlsWithDefaultState))  hasControlsWithDefaultState;

 bool __declspec(property(get=get_hasDontResetControls, put=set_hasDontResetControls))  hasDontResetControls;

 bool __declspec(property(get=get_hasStateCallbacks, put=set_hasStateCallbacks))  hasStateCallbacks;

 bool __declspec(property(get=get_hasEventMerger, put=set_hasEventMerger))  hasEventMerger;

 bool __declspec(property(get=get_hasEventPreProcessor, put=set_hasEventPreProcessor))  hasEventPreProcessor;


// Methods

/// @brief Method get_description addr 0x28d7674 size 0x24 virtual false final false
 UnityEngine::InputSystem::Layouts::InputDeviceDescription get_description() ;

/// @brief Method get_enabled addr 0x28d7698 size 0x1c virtual false final false
 bool get_enabled() ;

/// @brief Method get_canRunInBackground addr 0x28d775c size 0xb8 virtual false final false
 bool get_canRunInBackground() ;

/// @brief Method get_added addr 0x28cca4c size 0x10 virtual false final false
 bool get_added() ;

/// @brief Method get_remote addr 0x28d7814 size 0xc virtual false final false
 bool get_remote() ;

/// @brief Method get_native addr 0x28d7820 size 0xc virtual false final false
 bool get_native() ;

/// @brief Method get_updateBeforeRender addr 0x28d782c size 0xc virtual false final false
 bool get_updateBeforeRender() ;

/// @brief Method get_deviceId addr 0x28d7838 size 0x8 virtual false final false
 int32_t get_deviceId() ;

/// @brief Method get_lastUpdateTime addr 0x28d7840 size 0x54 virtual false final false
 double_t get_lastUpdateTime() ;

/// @brief Method get_wasUpdatedThisFrame addr 0x28d7894 size 0x58 virtual false final false
 bool get_wasUpdatedThisFrame() ;

/// @brief Method get_allControls addr 0x28d78ec size 0x60 virtual false final false
 UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<UnityEngine::InputSystem::InputControl> get_allControls() ;

/// @brief Method get_valueType addr 0x28d794c size 0x6c virtual true final false
 System::Type get_valueType() ;

/// @brief Method get_valueSizeInBytes addr 0x28d79b8 size 0xc virtual true final false
 int32_t get_valueSizeInBytes() ;

/// @brief Method get_all addr 0x28d79c4 size 0x4c virtual false final false
static UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<UnityEngine::InputSystem::InputDevice> get_all() ;

static UnityEngine::InputSystem::InputDevice New_ctor() ;

/// @brief Method .ctor addr 0x28d7648 size 0x2c virtual false final false
 void _ctor() ;

/// @brief Method ReadValueFromBufferAsObject addr 0x28d7a10 size 0x40 virtual true final false
 ::bs_hook::Il2CppWrapperType ReadValueFromBufferAsObject(void* buffer, int32_t bufferSize) ;

/// @brief Method ReadValueFromStateAsObject addr 0x28d7a50 size 0xc8 virtual true final false
 ::bs_hook::Il2CppWrapperType ReadValueFromStateAsObject(void* statePtr) ;

/// @brief Method ReadValueFromStateIntoBuffer addr 0x28d7b18 size 0x184 virtual true final false
 void ReadValueFromStateIntoBuffer(void* statePtr, void* bufferPtr, int32_t bufferSize) ;

/// @brief Method CompareValue addr 0x28d7c9c size 0xb4 virtual true final false
 bool CompareValue(void* firstStatePtr, void* secondStatePtr) ;

/// @brief Method NotifyConfigurationChanged addr 0x28d7d50 size 0x7c virtual false final false
 void NotifyConfigurationChanged() ;

/// @brief Method MakeCurrent addr 0x28d7448 size 0x4 virtual true final false
 void MakeCurrent() ;

/// @brief Method OnAdded addr 0x28d7dcc size 0x4 virtual true final false
 void OnAdded() ;

/// @brief Method OnRemoved addr 0x28d7dd0 size 0x4 virtual true final false
 void OnRemoved() ;

/// @brief Method OnConfigurationChanged addr 0x28d7dd4 size 0x4 virtual true final false
 void OnConfigurationChanged() ;

/// @brief Method ExecuteCommand addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TCommand>
 int64_t ExecuteCommand(ByRef<TCommand> command) ;

/// @brief Method ExecuteCommand addr 0x28d7dd8 size 0xd8 virtual true final false
 int64_t ExecuteCommand(void* commandPtr) ;

/// @brief Method QueryEnabledStateFromRuntime addr 0x28d76b4 size 0xa8 virtual false final false
 bool QueryEnabledStateFromRuntime() ;

/// @brief Method get_disabledInFrontend addr 0x28d7eb0 size 0xc virtual false final false
 bool get_disabledInFrontend() ;

/// @brief Method set_disabledInFrontend addr 0x28d7ebc size 0x1c virtual false final false
 void set_disabledInFrontend(bool value) ;

/// @brief Method get_disabledInRuntime addr 0x28d7ed8 size 0xc virtual false final false
 bool get_disabledInRuntime() ;

/// @brief Method set_disabledInRuntime addr 0x28d7ee4 size 0x1c virtual false final false
 void set_disabledInRuntime(bool value) ;

/// @brief Method get_disabledWhileInBackground addr 0x28d7f00 size 0xc virtual false final false
 bool get_disabledWhileInBackground() ;

/// @brief Method set_disabledWhileInBackground addr 0x28d7f0c size 0x1c virtual false final false
 void set_disabledWhileInBackground(bool value) ;

/// @brief Method EncodeStateOffsetToControlMapEntry addr 0x28d7f28 size 0xc virtual false final false
static uint32_t EncodeStateOffsetToControlMapEntry(uint32_t controlIndex, uint32_t stateOffsetInBits, uint32_t stateSizeInBits) ;

/// @brief Method DecodeStateOffsetToControlMapEntry addr 0x28d3438 size 0x1c virtual false final false
static void DecodeStateOffsetToControlMapEntry(uint32_t entry, ByRef<uint32_t> controlIndex, ByRef<uint32_t> stateOffset, ByRef<uint32_t> stateSize) ;

/// @brief Method get_hasControlsWithDefaultState addr 0x28d7f34 size 0xc virtual false final false
 bool get_hasControlsWithDefaultState() ;

/// @brief Method set_hasControlsWithDefaultState addr 0x28d36e8 size 0x1c virtual false final false
 void set_hasControlsWithDefaultState(bool value) ;

/// @brief Method get_hasDontResetControls addr 0x28d7f40 size 0xc virtual false final false
 bool get_hasDontResetControls() ;

/// @brief Method set_hasDontResetControls addr 0x28d37d8 size 0x1c virtual false final false
 void set_hasDontResetControls(bool value) ;

/// @brief Method get_hasStateCallbacks addr 0x28d1c9c size 0xc virtual false final false
 bool get_hasStateCallbacks() ;

/// @brief Method set_hasStateCallbacks addr 0x28d7f4c size 0x1c virtual false final false
 void set_hasStateCallbacks(bool value) ;

/// @brief Method get_hasEventMerger addr 0x28d7f68 size 0xc virtual false final false
 bool get_hasEventMerger() ;

/// @brief Method set_hasEventMerger addr 0x28d7f74 size 0x1c virtual false final false
 void set_hasEventMerger(bool value) ;

/// @brief Method get_hasEventPreProcessor addr 0x28d7f90 size 0xc virtual false final false
 bool get_hasEventPreProcessor() ;

/// @brief Method set_hasEventPreProcessor addr 0x28d7f9c size 0x1c virtual false final false
 void set_hasEventPreProcessor(bool value) ;

/// @brief Method AddDeviceUsage addr 0x28d7fb8 size 0xb4 virtual false final false
 void AddDeviceUsage(UnityEngine::InputSystem::Utilities::InternedString usage) ;

/// @brief Method RemoveDeviceUsage addr 0x28d806c size 0xdc virtual false final false
 void RemoveDeviceUsage(UnityEngine::InputSystem::Utilities::InternedString usage) ;

/// @brief Method ClearDeviceUsages addr 0x28d8148 size 0x60 virtual false final false
 void ClearDeviceUsages() ;

/// @brief Method RequestSync addr 0x28cca5c size 0x6c virtual false final false
 bool RequestSync() ;

/// @brief Method RequestReset addr 0x28ccba0 size 0x6c virtual false final false
 bool RequestReset() ;

/// @brief Method ExecuteEnableCommand addr 0x28d81a8 size 0x6c virtual false final false
 bool ExecuteEnableCommand() ;

/// @brief Method ExecuteDisableCommand addr 0x28d8214 size 0x6c virtual false final false
 bool ExecuteDisableCommand() ;

/// @brief Method NotifyAdded addr 0x28d8280 size 0x10 virtual false final false
 void NotifyAdded() ;

/// @brief Method NotifyRemoved addr 0x28d8290 size 0x10 virtual false final false
 void NotifyRemoved() ;

/// @brief Method Build addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TDevice>
static TDevice Build(::StringW layoutName, ::StringW layoutVariants, UnityEngine::InputSystem::Layouts::InputDeviceDescription deviceDescription, bool noPrecompiledLayouts) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::UnityEngine__InputSystem__InputDevice__DeviceFlags, "UnityEngine.InputSystem", "InputDevice/DeviceFlags");
NEED_NO_BOX(UnityEngine::InputSystem::InputDevice);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::InputDevice, "UnityEngine.InputSystem", "InputDevice");
