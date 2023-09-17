#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace {
namespace UnityEngine::InputSystem {
class InputDevice;
}
namespace UnityEngine::InputSystem {
struct ____UnityEngine__InputSystem__InputSettings__UpdateMode;
}
namespace UnityEngine::InputSystem {
struct InputDeviceChange;
}
// Forward declare root types
namespace UnityEngine::InputSystem::EnhancedTouch {
class EnhancedTouchSupport;
}
// Type: UnityEngine.InputSystem.EnhancedTouch::EnhancedTouchSupport
namespace UnityEngine::InputSystem::EnhancedTouch {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6496))
// CS Name: UnityEngine.InputSystem.EnhancedTouch.EnhancedTouchSupport
class CORDL_TYPE EnhancedTouchSupport : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~EnhancedTouchSupport() = default;

// Ctor Parameters [CppParam { name: "", ty: "EnhancedTouchSupport", modifiers: " const&", def_value: None }]
constexpr EnhancedTouchSupport(EnhancedTouchSupport const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "EnhancedTouchSupport", modifiers: "&&", def_value: None }]
constexpr EnhancedTouchSupport(EnhancedTouchSupport&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit EnhancedTouchSupport(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr EnhancedTouchSupport& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr EnhancedTouchSupport& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr EnhancedTouchSupport& operator=(EnhancedTouchSupport&& o) noexcept = default;
  constexpr EnhancedTouchSupport& operator=(EnhancedTouchSupport const& o) noexcept = default;
                


// Fields

static int32_t __declspec(property(get=__get_s_Enabled, put=__set_s_Enabled))  s_Enabled;

static void __set_s_Enabled(int32_t value) ;

static int32_t __get_s_Enabled() ;

static ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputSettings__UpdateMode __declspec(property(get=__get_s_UpdateMode, put=__set_s_UpdateMode))  s_UpdateMode;

static void __set_s_UpdateMode(::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputSettings__UpdateMode value) ;

static ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputSettings__UpdateMode __get_s_UpdateMode() ;


// Properties

static bool __declspec(property(get=get_enabled))  enabled;


// Methods

/// @brief Method get_enabled addr 0x294c814 size 0x50 virtual false final false
static bool get_enabled() ;

/// @brief Method Enable addr 0x294c864 size 0x174 virtual false final false
static void Enable() ;

/// @brief Method Disable addr 0x294cbb8 size 0x198 virtual false final false
static void Disable() ;

/// @brief Method Reset addr 0x294cf14 size 0xa4 virtual false final false
static void Reset() ;

/// @brief Method SetUpState addr 0x294c9d8 size 0x1e0 virtual false final false
static void SetUpState() ;

/// @brief Method TearDownState addr 0x294cd50 size 0x1c4 virtual false final false
static void TearDownState() ;

/// @brief Method OnDeviceChange addr 0x294cfb8 size 0x114 virtual false final false
static void OnDeviceChange(::UnityEngine::InputSystem::InputDevice device, ::UnityEngine::InputSystem::InputDeviceChange change) ;

/// @brief Method OnSettingsChange addr 0x294d0cc size 0x98 virtual false final false
static void OnSettingsChange() ;

/// @brief Method CheckEnabled addr 0x294d164 size 0x109c virtual false final false
static void CheckEnabled() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::EnhancedTouch
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::InputSystem::EnhancedTouch::EnhancedTouchSupport);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::EnhancedTouch::EnhancedTouchSupport, "UnityEngine.InputSystem.EnhancedTouch", "EnhancedTouchSupport");
