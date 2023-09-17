#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace {
namespace GlobalNamespace {
class OVRManager;
}
namespace UnityEngine {
struct KeyCode;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct CursorLockMode;
}
// Forward declare root types
namespace GlobalNamespace {
struct ____GlobalNamespace__OVRHeadsetEmulator__OpMode;
}
namespace GlobalNamespace {
class OVRHeadsetEmulator;
}
// Type: ::OpMode
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8493))
// CS Name: OVRHeadsetEmulator::OpMode
struct CORDL_TYPE ____GlobalNamespace__OVRHeadsetEmulator__OpMode : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ____GlobalNamespace__OVRHeadsetEmulator__OpMode(int32_t value__) noexcept;


                    constexpr ____GlobalNamespace__OVRHeadsetEmulator__OpMode(____GlobalNamespace__OVRHeadsetEmulator__OpMode const&) = default;
                    constexpr ____GlobalNamespace__OVRHeadsetEmulator__OpMode(____GlobalNamespace__OVRHeadsetEmulator__OpMode&&) = default;
                    constexpr ____GlobalNamespace__OVRHeadsetEmulator__OpMode& operator=(____GlobalNamespace__OVRHeadsetEmulator__OpMode const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____GlobalNamespace__OVRHeadsetEmulator__OpMode& operator=(____GlobalNamespace__OVRHeadsetEmulator__OpMode&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__OVRHeadsetEmulator__OpMode(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class ______GlobalNamespace__OVRHeadsetEmulator__OpMode_Unwrapped : int32_t {
__Off = 0,
__EditorOnly = 1,
__AlwaysOn = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator ______GlobalNamespace__OVRHeadsetEmulator__OpMode_Unwrapped () const noexcept {
return std::bit_cast<______GlobalNamespace__OVRHeadsetEmulator__OpMode_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Off offset 0
static ::GlobalNamespace::____GlobalNamespace__OVRHeadsetEmulator__OpMode const Off;

/// @brief Field EditorOnly offset 0
static ::GlobalNamespace::____GlobalNamespace__OVRHeadsetEmulator__OpMode const EditorOnly;

/// @brief Field AlwaysOn offset 0
static ::GlobalNamespace::____GlobalNamespace__OVRHeadsetEmulator__OpMode const AlwaysOn;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::OVRHeadsetEmulator
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8494))
// CS Name: OVRHeadsetEmulator
class CORDL_TYPE OVRHeadsetEmulator : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using OpMode = ::GlobalNamespace::____GlobalNamespace__OVRHeadsetEmulator__OpMode;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x60};

virtual ~OVRHeadsetEmulator() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVRHeadsetEmulator", modifiers: " const&", def_value: None }]
constexpr OVRHeadsetEmulator(OVRHeadsetEmulator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVRHeadsetEmulator", modifiers: "&&", def_value: None }]
constexpr OVRHeadsetEmulator(OVRHeadsetEmulator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVRHeadsetEmulator(void* ptr) noexcept : ::UnityEngine::MonoBehaviour(ptr) {
}


  constexpr OVRHeadsetEmulator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVRHeadsetEmulator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVRHeadsetEmulator& operator=(OVRHeadsetEmulator&& o) noexcept = default;
  constexpr OVRHeadsetEmulator& operator=(OVRHeadsetEmulator const& o) noexcept = default;
                


// Fields

 ::GlobalNamespace::____GlobalNamespace__OVRHeadsetEmulator__OpMode __declspec(property(get=__get_opMode, put=__set_opMode))  opMode;

constexpr void __set_opMode(::GlobalNamespace::____GlobalNamespace__OVRHeadsetEmulator__OpMode value) ;

constexpr ::GlobalNamespace::____GlobalNamespace__OVRHeadsetEmulator__OpMode __get_opMode() const;

 bool __declspec(property(get=__get_resetHmdPoseOnRelease, put=__set_resetHmdPoseOnRelease))  resetHmdPoseOnRelease;

constexpr void __set_resetHmdPoseOnRelease(bool value) ;

constexpr bool __get_resetHmdPoseOnRelease() const;

 bool __declspec(property(get=__get_resetHmdPoseByMiddleMouseButton, put=__set_resetHmdPoseByMiddleMouseButton))  resetHmdPoseByMiddleMouseButton;

constexpr void __set_resetHmdPoseByMiddleMouseButton(bool value) ;

constexpr bool __get_resetHmdPoseByMiddleMouseButton() const;

 ::ArrayW<::UnityEngine::KeyCode> __declspec(property(get=__get_activateKeys, put=__set_activateKeys))  activateKeys;

constexpr void __set_activateKeys(::ArrayW<::UnityEngine::KeyCode> value) ;

constexpr ::ArrayW<::UnityEngine::KeyCode> __get_activateKeys() const;

 ::ArrayW<::UnityEngine::KeyCode> __declspec(property(get=__get_pitchKeys, put=__set_pitchKeys))  pitchKeys;

constexpr void __set_pitchKeys(::ArrayW<::UnityEngine::KeyCode> value) ;

constexpr ::ArrayW<::UnityEngine::KeyCode> __get_pitchKeys() const;

 ::GlobalNamespace::OVRManager __declspec(property(get=__get_manager, put=__set_manager))  manager;

constexpr void __set_manager(::GlobalNamespace::OVRManager value) ;

constexpr ::GlobalNamespace::OVRManager __get_manager() const;

/// @brief Field MOUSE_SCALE_X offset 0
static constexpr float_t  MOUSE_SCALE_X{-2};

/// @brief Field MOUSE_SCALE_X_PITCH offset 0
static constexpr float_t  MOUSE_SCALE_X_PITCH{-2};

/// @brief Field MOUSE_SCALE_Y offset 0
static constexpr float_t  MOUSE_SCALE_Y{2};

/// @brief Field MOUSE_SCALE_HEIGHT offset 0
static constexpr float_t  MOUSE_SCALE_HEIGHT{1};

/// @brief Field MAX_ROLL offset 0
static constexpr float_t  MAX_ROLL{85};

 bool __declspec(property(get=__get_lastFrameEmulationActivated, put=__set_lastFrameEmulationActivated))  lastFrameEmulationActivated;

constexpr void __set_lastFrameEmulationActivated(bool value) ;

constexpr bool __get_lastFrameEmulationActivated() const;

 ::UnityEngine::Vector3 __declspec(property(get=__get_recordedHeadPoseRelativeOffsetTranslation, put=__set_recordedHeadPoseRelativeOffsetTranslation))  recordedHeadPoseRelativeOffsetTranslation;

constexpr void __set_recordedHeadPoseRelativeOffsetTranslation(::UnityEngine::Vector3 value) ;

constexpr ::UnityEngine::Vector3 __get_recordedHeadPoseRelativeOffsetTranslation() const;

 ::UnityEngine::Vector3 __declspec(property(get=__get_recordedHeadPoseRelativeOffsetRotation, put=__set_recordedHeadPoseRelativeOffsetRotation))  recordedHeadPoseRelativeOffsetRotation;

constexpr void __set_recordedHeadPoseRelativeOffsetRotation(::UnityEngine::Vector3 value) ;

constexpr ::UnityEngine::Vector3 __get_recordedHeadPoseRelativeOffsetRotation() const;

 bool __declspec(property(get=__get_hasSentEvent, put=__set_hasSentEvent))  hasSentEvent;

constexpr void __set_hasSentEvent(bool value) ;

constexpr bool __get_hasSentEvent() const;

 bool __declspec(property(get=__get_emulatorHasInitialized, put=__set_emulatorHasInitialized))  emulatorHasInitialized;

constexpr void __set_emulatorHasInitialized(bool value) ;

constexpr bool __get_emulatorHasInitialized() const;

 ::UnityEngine::CursorLockMode __declspec(property(get=__get_previousCursorLockMode, put=__set_previousCursorLockMode))  previousCursorLockMode;

constexpr void __set_previousCursorLockMode(::UnityEngine::CursorLockMode value) ;

constexpr ::UnityEngine::CursorLockMode __get_previousCursorLockMode() const;


// Methods

/// @brief Method Start addr 0x25bc1bc size 0x4 virtual false final false
 void Start() ;

/// @brief Method Update addr 0x25bc1c0 size 0x448 virtual false final false
 void Update() ;

/// @brief Method IsEmulationActivated addr 0x25bc608 size 0x90 virtual false final false
 bool IsEmulationActivated() ;

/// @brief Method IsTweakingPitch addr 0x25bc898 size 0x7c virtual false final false
 bool IsTweakingPitch() ;

// Ctor Parameters []
explicit OVRHeadsetEmulator() ;

/// @brief Method .ctor addr 0x25bc914 size 0xc8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__OVRHeadsetEmulator__OpMode, "", "OVRHeadsetEmulator/OpMode");
NEED_NO_BOX(::GlobalNamespace::OVRHeadsetEmulator);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRHeadsetEmulator, "", "OVRHeadsetEmulator");
