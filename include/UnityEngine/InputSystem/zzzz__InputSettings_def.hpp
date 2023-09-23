#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace UnityEngine::InputSystem::Utilities {
template<typename TValue>
struct ReadOnlyArray_1;
}
// Forward declare root types
namespace UnityEngine::InputSystem {
struct UnityEngine__InputSystem__InputSettings__BackgroundBehavior;
}
namespace UnityEngine::InputSystem {
struct UnityEngine__InputSystem__InputSettings__EditorInputBehaviorInPlayMode;
}
namespace UnityEngine::InputSystem {
struct UnityEngine__InputSystem__InputSettings__UpdateMode;
}
namespace UnityEngine::InputSystem {
class InputSettings;
}
// Type: ::UpdateMode
namespace UnityEngine::InputSystem {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6384))
// CS Name: UnityEngine.InputSystem.InputSettings::UpdateMode
struct CORDL_TYPE UnityEngine__InputSystem__InputSettings__UpdateMode : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr UnityEngine__InputSystem__InputSettings__UpdateMode(int32_t value__) noexcept;


                    constexpr UnityEngine__InputSystem__InputSettings__UpdateMode(UnityEngine__InputSystem__InputSettings__UpdateMode const&) = default;
                    constexpr UnityEngine__InputSystem__InputSettings__UpdateMode(UnityEngine__InputSystem__InputSettings__UpdateMode&&) = default;
                    constexpr UnityEngine__InputSystem__InputSettings__UpdateMode& operator=(UnityEngine__InputSystem__InputSettings__UpdateMode const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__InputSystem__InputSettings__UpdateMode& operator=(UnityEngine__InputSystem__InputSettings__UpdateMode&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__InputSystem__InputSettings__UpdateMode(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __UnityEngine__InputSystem__InputSettings__UpdateMode_Unwrapped : int32_t {
__ProcessEventsInDynamicUpdate = 1,
__ProcessEventsInFixedUpdate = 2,
__ProcessEventsManually = 3,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __UnityEngine__InputSystem__InputSettings__UpdateMode_Unwrapped () const noexcept {
return std::bit_cast<__UnityEngine__InputSystem__InputSettings__UpdateMode_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field ProcessEventsInDynamicUpdate offset 0
static UnityEngine::InputSystem::UnityEngine__InputSystem__InputSettings__UpdateMode const ProcessEventsInDynamicUpdate;

/// @brief Field ProcessEventsInFixedUpdate offset 0
static UnityEngine::InputSystem::UnityEngine__InputSystem__InputSettings__UpdateMode const ProcessEventsInFixedUpdate;

/// @brief Field ProcessEventsManually offset 0
static UnityEngine::InputSystem::UnityEngine__InputSystem__InputSettings__UpdateMode const ProcessEventsManually;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem
// Type: ::BackgroundBehavior
namespace UnityEngine::InputSystem {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6385))
// CS Name: UnityEngine.InputSystem.InputSettings::BackgroundBehavior
struct CORDL_TYPE UnityEngine__InputSystem__InputSettings__BackgroundBehavior : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr UnityEngine__InputSystem__InputSettings__BackgroundBehavior(int32_t value__) noexcept;


                    constexpr UnityEngine__InputSystem__InputSettings__BackgroundBehavior(UnityEngine__InputSystem__InputSettings__BackgroundBehavior const&) = default;
                    constexpr UnityEngine__InputSystem__InputSettings__BackgroundBehavior(UnityEngine__InputSystem__InputSettings__BackgroundBehavior&&) = default;
                    constexpr UnityEngine__InputSystem__InputSettings__BackgroundBehavior& operator=(UnityEngine__InputSystem__InputSettings__BackgroundBehavior const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__InputSystem__InputSettings__BackgroundBehavior& operator=(UnityEngine__InputSystem__InputSettings__BackgroundBehavior&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__InputSystem__InputSettings__BackgroundBehavior(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __UnityEngine__InputSystem__InputSettings__BackgroundBehavior_Unwrapped : int32_t {
__ResetAndDisableNonBackgroundDevices = 0,
__ResetAndDisableAllDevices = 1,
__IgnoreFocus = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __UnityEngine__InputSystem__InputSettings__BackgroundBehavior_Unwrapped () const noexcept {
return std::bit_cast<__UnityEngine__InputSystem__InputSettings__BackgroundBehavior_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field ResetAndDisableNonBackgroundDevices offset 0
static UnityEngine::InputSystem::UnityEngine__InputSystem__InputSettings__BackgroundBehavior const ResetAndDisableNonBackgroundDevices;

/// @brief Field ResetAndDisableAllDevices offset 0
static UnityEngine::InputSystem::UnityEngine__InputSystem__InputSettings__BackgroundBehavior const ResetAndDisableAllDevices;

/// @brief Field IgnoreFocus offset 0
static UnityEngine::InputSystem::UnityEngine__InputSystem__InputSettings__BackgroundBehavior const IgnoreFocus;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem
// Type: ::EditorInputBehaviorInPlayMode
namespace UnityEngine::InputSystem {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6386))
// CS Name: UnityEngine.InputSystem.InputSettings::EditorInputBehaviorInPlayMode
struct CORDL_TYPE UnityEngine__InputSystem__InputSettings__EditorInputBehaviorInPlayMode : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr UnityEngine__InputSystem__InputSettings__EditorInputBehaviorInPlayMode(int32_t value__) noexcept;


                    constexpr UnityEngine__InputSystem__InputSettings__EditorInputBehaviorInPlayMode(UnityEngine__InputSystem__InputSettings__EditorInputBehaviorInPlayMode const&) = default;
                    constexpr UnityEngine__InputSystem__InputSettings__EditorInputBehaviorInPlayMode(UnityEngine__InputSystem__InputSettings__EditorInputBehaviorInPlayMode&&) = default;
                    constexpr UnityEngine__InputSystem__InputSettings__EditorInputBehaviorInPlayMode& operator=(UnityEngine__InputSystem__InputSettings__EditorInputBehaviorInPlayMode const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__InputSystem__InputSettings__EditorInputBehaviorInPlayMode& operator=(UnityEngine__InputSystem__InputSettings__EditorInputBehaviorInPlayMode&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__InputSystem__InputSettings__EditorInputBehaviorInPlayMode(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __UnityEngine__InputSystem__InputSettings__EditorInputBehaviorInPlayMode_Unwrapped : int32_t {
__PointersAndKeyboardsRespectGameViewFocus = 0,
__AllDevicesRespectGameViewFocus = 1,
__AllDeviceInputAlwaysGoesToGameView = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __UnityEngine__InputSystem__InputSettings__EditorInputBehaviorInPlayMode_Unwrapped () const noexcept {
return std::bit_cast<__UnityEngine__InputSystem__InputSettings__EditorInputBehaviorInPlayMode_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field PointersAndKeyboardsRespectGameViewFocus offset 0
static UnityEngine::InputSystem::UnityEngine__InputSystem__InputSettings__EditorInputBehaviorInPlayMode const PointersAndKeyboardsRespectGameViewFocus;

/// @brief Field AllDevicesRespectGameViewFocus offset 0
static UnityEngine::InputSystem::UnityEngine__InputSystem__InputSettings__EditorInputBehaviorInPlayMode const AllDevicesRespectGameViewFocus;

/// @brief Field AllDeviceInputAlwaysGoesToGameView offset 0
static UnityEngine::InputSystem::UnityEngine__InputSystem__InputSettings__EditorInputBehaviorInPlayMode const AllDeviceInputAlwaysGoesToGameView;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem
// Type: UnityEngine.InputSystem::InputSettings
namespace UnityEngine::InputSystem {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10151))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6387))
// CS Name: UnityEngine.InputSystem.InputSettings
class CORDL_TYPE InputSettings : public UnityEngine::ScriptableObject {
public:
// Declarations
using EditorInputBehaviorInPlayMode = UnityEngine::InputSystem::UnityEngine__InputSystem__InputSettings__EditorInputBehaviorInPlayMode;

using BackgroundBehavior = UnityEngine::InputSystem::UnityEngine__InputSystem__InputSettings__BackgroundBehavior;

using UpdateMode = UnityEngine::InputSystem::UnityEngine__InputSystem__InputSettings__UpdateMode;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x68};

virtual ~InputSettings() = default;

// Ctor Parameters [CppParam { name: "", ty: "InputSettings", modifiers: " const&", def_value: None }]
constexpr InputSettings(InputSettings const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "InputSettings", modifiers: "&&", def_value: None }]
constexpr InputSettings(InputSettings&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit InputSettings(void* ptr) noexcept : UnityEngine::ScriptableObject(ptr) {
}


  constexpr InputSettings& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr InputSettings& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr InputSettings& operator=(InputSettings&& o) noexcept = default;
  constexpr InputSettings& operator=(InputSettings const& o) noexcept = default;
                


// Fields

 ::ArrayW<::StringW> __declspec(property(get=__get_m_SupportedDevices, put=__set_m_SupportedDevices))  m_SupportedDevices;

constexpr void __set_m_SupportedDevices(::ArrayW<::StringW> value) ;

constexpr ::ArrayW<::StringW> __get_m_SupportedDevices() const;

 UnityEngine::InputSystem::UnityEngine__InputSystem__InputSettings__UpdateMode __declspec(property(get=__get_m_UpdateMode, put=__set_m_UpdateMode))  m_UpdateMode;

constexpr void __set_m_UpdateMode(UnityEngine::InputSystem::UnityEngine__InputSystem__InputSettings__UpdateMode value) ;

constexpr UnityEngine::InputSystem::UnityEngine__InputSystem__InputSettings__UpdateMode __get_m_UpdateMode() const;

 int32_t __declspec(property(get=__get_m_MaxEventBytesPerUpdate, put=__set_m_MaxEventBytesPerUpdate))  m_MaxEventBytesPerUpdate;

constexpr void __set_m_MaxEventBytesPerUpdate(int32_t value) ;

constexpr int32_t __get_m_MaxEventBytesPerUpdate() const;

 int32_t __declspec(property(get=__get_m_MaxQueuedEventsPerUpdate, put=__set_m_MaxQueuedEventsPerUpdate))  m_MaxQueuedEventsPerUpdate;

constexpr void __set_m_MaxQueuedEventsPerUpdate(int32_t value) ;

constexpr int32_t __get_m_MaxQueuedEventsPerUpdate() const;

 bool __declspec(property(get=__get_m_CompensateForScreenOrientation, put=__set_m_CompensateForScreenOrientation))  m_CompensateForScreenOrientation;

constexpr void __set_m_CompensateForScreenOrientation(bool value) ;

constexpr bool __get_m_CompensateForScreenOrientation() const;

 UnityEngine::InputSystem::UnityEngine__InputSystem__InputSettings__BackgroundBehavior __declspec(property(get=__get_m_BackgroundBehavior, put=__set_m_BackgroundBehavior))  m_BackgroundBehavior;

constexpr void __set_m_BackgroundBehavior(UnityEngine::InputSystem::UnityEngine__InputSystem__InputSettings__BackgroundBehavior value) ;

constexpr UnityEngine::InputSystem::UnityEngine__InputSystem__InputSettings__BackgroundBehavior __get_m_BackgroundBehavior() const;

 UnityEngine::InputSystem::UnityEngine__InputSystem__InputSettings__EditorInputBehaviorInPlayMode __declspec(property(get=__get_m_EditorInputBehaviorInPlayMode, put=__set_m_EditorInputBehaviorInPlayMode))  m_EditorInputBehaviorInPlayMode;

constexpr void __set_m_EditorInputBehaviorInPlayMode(UnityEngine::InputSystem::UnityEngine__InputSystem__InputSettings__EditorInputBehaviorInPlayMode value) ;

constexpr UnityEngine::InputSystem::UnityEngine__InputSystem__InputSettings__EditorInputBehaviorInPlayMode __get_m_EditorInputBehaviorInPlayMode() const;

 float_t __declspec(property(get=__get_m_DefaultDeadzoneMin, put=__set_m_DefaultDeadzoneMin))  m_DefaultDeadzoneMin;

constexpr void __set_m_DefaultDeadzoneMin(float_t value) ;

constexpr float_t __get_m_DefaultDeadzoneMin() const;

 float_t __declspec(property(get=__get_m_DefaultDeadzoneMax, put=__set_m_DefaultDeadzoneMax))  m_DefaultDeadzoneMax;

constexpr void __set_m_DefaultDeadzoneMax(float_t value) ;

constexpr float_t __get_m_DefaultDeadzoneMax() const;

 float_t __declspec(property(get=__get_m_DefaultButtonPressPoint, put=__set_m_DefaultButtonPressPoint))  m_DefaultButtonPressPoint;

constexpr void __set_m_DefaultButtonPressPoint(float_t value) ;

constexpr float_t __get_m_DefaultButtonPressPoint() const;

 float_t __declspec(property(get=__get_m_ButtonReleaseThreshold, put=__set_m_ButtonReleaseThreshold))  m_ButtonReleaseThreshold;

constexpr void __set_m_ButtonReleaseThreshold(float_t value) ;

constexpr float_t __get_m_ButtonReleaseThreshold() const;

 float_t __declspec(property(get=__get_m_DefaultTapTime, put=__set_m_DefaultTapTime))  m_DefaultTapTime;

constexpr void __set_m_DefaultTapTime(float_t value) ;

constexpr float_t __get_m_DefaultTapTime() const;

 float_t __declspec(property(get=__get_m_DefaultSlowTapTime, put=__set_m_DefaultSlowTapTime))  m_DefaultSlowTapTime;

constexpr void __set_m_DefaultSlowTapTime(float_t value) ;

constexpr float_t __get_m_DefaultSlowTapTime() const;

 float_t __declspec(property(get=__get_m_DefaultHoldTime, put=__set_m_DefaultHoldTime))  m_DefaultHoldTime;

constexpr void __set_m_DefaultHoldTime(float_t value) ;

constexpr float_t __get_m_DefaultHoldTime() const;

 float_t __declspec(property(get=__get_m_TapRadius, put=__set_m_TapRadius))  m_TapRadius;

constexpr void __set_m_TapRadius(float_t value) ;

constexpr float_t __get_m_TapRadius() const;

 float_t __declspec(property(get=__get_m_MultiTapDelayTime, put=__set_m_MultiTapDelayTime))  m_MultiTapDelayTime;

constexpr void __set_m_MultiTapDelayTime(float_t value) ;

constexpr float_t __get_m_MultiTapDelayTime() const;

 bool __declspec(property(get=__get_m_DisableRedundantEventsMerging, put=__set_m_DisableRedundantEventsMerging))  m_DisableRedundantEventsMerging;

constexpr void __set_m_DisableRedundantEventsMerging(bool value) ;

constexpr bool __get_m_DisableRedundantEventsMerging() const;

 bool __declspec(property(get=__get_m_ShortcutKeysConsumeInputs, put=__set_m_ShortcutKeysConsumeInputs))  m_ShortcutKeysConsumeInputs;

constexpr void __set_m_ShortcutKeysConsumeInputs(bool value) ;

constexpr bool __get_m_ShortcutKeysConsumeInputs() const;

 System::Collections::Generic::HashSet_1<::StringW> __declspec(property(get=__get_m_FeatureFlags, put=__set_m_FeatureFlags))  m_FeatureFlags;

constexpr void __set_m_FeatureFlags(System::Collections::Generic::HashSet_1<::StringW> value) ;

constexpr System::Collections::Generic::HashSet_1<::StringW> __get_m_FeatureFlags() const;

/// @brief Field s_OldUnsupportedFixedAndDynamicUpdateSetting offset 0
static constexpr int32_t  s_OldUnsupportedFixedAndDynamicUpdateSetting{0};


// Properties

 UnityEngine::InputSystem::UnityEngine__InputSystem__InputSettings__UpdateMode __declspec(property(get=get_updateMode, put=set_updateMode))  updateMode;

 bool __declspec(property(get=get_compensateForScreenOrientation, put=set_compensateForScreenOrientation))  compensateForScreenOrientation;

 bool __declspec(property(get=get_filterNoiseOnCurrent, put=set_filterNoiseOnCurrent))  filterNoiseOnCurrent;

 float_t __declspec(property(get=get_defaultDeadzoneMin, put=set_defaultDeadzoneMin))  defaultDeadzoneMin;

 float_t __declspec(property(get=get_defaultDeadzoneMax, put=set_defaultDeadzoneMax))  defaultDeadzoneMax;

 float_t __declspec(property(get=get_defaultButtonPressPoint, put=set_defaultButtonPressPoint))  defaultButtonPressPoint;

 float_t __declspec(property(get=get_buttonReleaseThreshold, put=set_buttonReleaseThreshold))  buttonReleaseThreshold;

 float_t __declspec(property(get=get_defaultTapTime, put=set_defaultTapTime))  defaultTapTime;

 float_t __declspec(property(get=get_defaultSlowTapTime, put=set_defaultSlowTapTime))  defaultSlowTapTime;

 float_t __declspec(property(get=get_defaultHoldTime, put=set_defaultHoldTime))  defaultHoldTime;

 float_t __declspec(property(get=get_tapRadius, put=set_tapRadius))  tapRadius;

 float_t __declspec(property(get=get_multiTapDelayTime, put=set_multiTapDelayTime))  multiTapDelayTime;

 UnityEngine::InputSystem::UnityEngine__InputSystem__InputSettings__BackgroundBehavior __declspec(property(get=get_backgroundBehavior, put=set_backgroundBehavior))  backgroundBehavior;

 UnityEngine::InputSystem::UnityEngine__InputSystem__InputSettings__EditorInputBehaviorInPlayMode __declspec(property(get=get_editorInputBehaviorInPlayMode, put=set_editorInputBehaviorInPlayMode))  editorInputBehaviorInPlayMode;

 int32_t __declspec(property(get=get_maxEventBytesPerUpdate, put=set_maxEventBytesPerUpdate))  maxEventBytesPerUpdate;

 int32_t __declspec(property(get=get_maxQueuedEventsPerUpdate, put=set_maxQueuedEventsPerUpdate))  maxQueuedEventsPerUpdate;

 UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::StringW> __declspec(property(get=get_supportedDevices, put=set_supportedDevices))  supportedDevices;

 bool __declspec(property(get=get_disableRedundantEventsMerging, put=set_disableRedundantEventsMerging))  disableRedundantEventsMerging;


// Methods

/// @brief Method get_updateMode addr 0x29253e8 size 0x8 virtual false final false
 UnityEngine::InputSystem::UnityEngine__InputSystem__InputSettings__UpdateMode get_updateMode() ;

/// @brief Method set_updateMode addr 0x29253f0 size 0x18 virtual false final false
 void set_updateMode(UnityEngine::InputSystem::UnityEngine__InputSystem__InputSettings__UpdateMode value) ;

/// @brief Method get_compensateForScreenOrientation addr 0x29254d4 size 0x8 virtual false final false
 bool get_compensateForScreenOrientation() ;

/// @brief Method set_compensateForScreenOrientation addr 0x29254dc size 0x1c virtual false final false
 void set_compensateForScreenOrientation(bool value) ;

/// @brief Method get_filterNoiseOnCurrent addr 0x29254f8 size 0x8 virtual false final false
 bool get_filterNoiseOnCurrent() ;

/// @brief Method set_filterNoiseOnCurrent addr 0x2925500 size 0x4 virtual false final false
 void set_filterNoiseOnCurrent(bool value) ;

/// @brief Method get_defaultDeadzoneMin addr 0x2925504 size 0x8 virtual false final false
 float_t get_defaultDeadzoneMin() ;

/// @brief Method set_defaultDeadzoneMin addr 0x292550c size 0x18 virtual false final false
 void set_defaultDeadzoneMin(float_t value) ;

/// @brief Method get_defaultDeadzoneMax addr 0x2925524 size 0x8 virtual false final false
 float_t get_defaultDeadzoneMax() ;

/// @brief Method set_defaultDeadzoneMax addr 0x292552c size 0x18 virtual false final false
 void set_defaultDeadzoneMax(float_t value) ;

/// @brief Method get_defaultButtonPressPoint addr 0x2925544 size 0x8 virtual false final false
 float_t get_defaultButtonPressPoint() ;

/// @brief Method set_defaultButtonPressPoint addr 0x292554c size 0x34 virtual false final false
 void set_defaultButtonPressPoint(float_t value) ;

/// @brief Method get_buttonReleaseThreshold addr 0x2925580 size 0x8 virtual false final false
 float_t get_buttonReleaseThreshold() ;

/// @brief Method set_buttonReleaseThreshold addr 0x2925588 size 0x18 virtual false final false
 void set_buttonReleaseThreshold(float_t value) ;

/// @brief Method get_defaultTapTime addr 0x29255a0 size 0x8 virtual false final false
 float_t get_defaultTapTime() ;

/// @brief Method set_defaultTapTime addr 0x29255a8 size 0x18 virtual false final false
 void set_defaultTapTime(float_t value) ;

/// @brief Method get_defaultSlowTapTime addr 0x29255c0 size 0x8 virtual false final false
 float_t get_defaultSlowTapTime() ;

/// @brief Method set_defaultSlowTapTime addr 0x29255c8 size 0x18 virtual false final false
 void set_defaultSlowTapTime(float_t value) ;

/// @brief Method get_defaultHoldTime addr 0x29255e0 size 0x8 virtual false final false
 float_t get_defaultHoldTime() ;

/// @brief Method set_defaultHoldTime addr 0x29255e8 size 0x18 virtual false final false
 void set_defaultHoldTime(float_t value) ;

/// @brief Method get_tapRadius addr 0x2925600 size 0x8 virtual false final false
 float_t get_tapRadius() ;

/// @brief Method set_tapRadius addr 0x2925608 size 0x18 virtual false final false
 void set_tapRadius(float_t value) ;

/// @brief Method get_multiTapDelayTime addr 0x2925620 size 0x8 virtual false final false
 float_t get_multiTapDelayTime() ;

/// @brief Method set_multiTapDelayTime addr 0x2925628 size 0x18 virtual false final false
 void set_multiTapDelayTime(float_t value) ;

/// @brief Method get_backgroundBehavior addr 0x2925640 size 0x8 virtual false final false
 UnityEngine::InputSystem::UnityEngine__InputSystem__InputSettings__BackgroundBehavior get_backgroundBehavior() ;

/// @brief Method set_backgroundBehavior addr 0x2925648 size 0x18 virtual false final false
 void set_backgroundBehavior(UnityEngine::InputSystem::UnityEngine__InputSystem__InputSettings__BackgroundBehavior value) ;

/// @brief Method get_editorInputBehaviorInPlayMode addr 0x2925660 size 0x8 virtual false final false
 UnityEngine::InputSystem::UnityEngine__InputSystem__InputSettings__EditorInputBehaviorInPlayMode get_editorInputBehaviorInPlayMode() ;

/// @brief Method set_editorInputBehaviorInPlayMode addr 0x2925668 size 0x18 virtual false final false
 void set_editorInputBehaviorInPlayMode(UnityEngine::InputSystem::UnityEngine__InputSystem__InputSettings__EditorInputBehaviorInPlayMode value) ;

/// @brief Method get_maxEventBytesPerUpdate addr 0x2925680 size 0x8 virtual false final false
 int32_t get_maxEventBytesPerUpdate() ;

/// @brief Method set_maxEventBytesPerUpdate addr 0x2925688 size 0x18 virtual false final false
 void set_maxEventBytesPerUpdate(int32_t value) ;

/// @brief Method get_maxQueuedEventsPerUpdate addr 0x29256a0 size 0x8 virtual false final false
 int32_t get_maxQueuedEventsPerUpdate() ;

/// @brief Method set_maxQueuedEventsPerUpdate addr 0x29256a8 size 0x18 virtual false final false
 void set_maxQueuedEventsPerUpdate(int32_t value) ;

/// @brief Method get_supportedDevices addr 0x29256c0 size 0x60 virtual false final false
 UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::StringW> get_supportedDevices() ;

/// @brief Method set_supportedDevices addr 0x2925720 size 0x124 virtual false final false
 void set_supportedDevices(UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::StringW> value) ;

/// @brief Method get_disableRedundantEventsMerging addr 0x2925844 size 0x8 virtual false final false
 bool get_disableRedundantEventsMerging() ;

/// @brief Method set_disableRedundantEventsMerging addr 0x292584c size 0x1c virtual false final false
 void set_disableRedundantEventsMerging(bool value) ;

/// @brief Method SetInternalFeatureFlag addr 0x2925868 size 0x1a0 virtual false final false
 void SetInternalFeatureFlag(::StringW featureName, bool enabled) ;

/// @brief Method IsFeatureEnabled addr 0x2925a08 size 0xc0 virtual false final false
 bool IsFeatureEnabled(::StringW featureName) ;

/// @brief Method OnChange addr 0x2925408 size 0xcc virtual false final false
 void OnChange() ;

// Ctor Parameters []
explicit InputSettings() ;

/// @brief Method .ctor addr 0x2925ac8 size 0x44 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::UnityEngine__InputSystem__InputSettings__BackgroundBehavior, "UnityEngine.InputSystem", "InputSettings/BackgroundBehavior");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::UnityEngine__InputSystem__InputSettings__EditorInputBehaviorInPlayMode, "UnityEngine.InputSystem", "InputSettings/EditorInputBehaviorInPlayMode");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::UnityEngine__InputSystem__InputSettings__UpdateMode, "UnityEngine.InputSystem", "InputSettings/UpdateMode");
NEED_NO_BOX(UnityEngine::InputSystem::InputSettings);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::InputSettings, "UnityEngine.InputSystem", "InputSettings");
