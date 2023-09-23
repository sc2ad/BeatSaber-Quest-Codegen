#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/InputSystem/Controls/zzzz__ButtonControl_def.hpp"
#include <cstdint>
namespace UnityEngine::InputSystem {
struct Key;
}
// Forward declare root types
namespace UnityEngine::InputSystem::Controls {
class KeyControl;
}
// Type: UnityEngine.InputSystem.Controls::KeyControl
namespace UnityEngine::InputSystem::Controls {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6712))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6721))
// CS Name: UnityEngine.InputSystem.Controls.KeyControl
class CORDL_TYPE KeyControl : public UnityEngine::InputSystem::Controls::ButtonControl {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x128};

virtual ~KeyControl() = default;

// Ctor Parameters [CppParam { name: "", ty: "KeyControl", modifiers: " const&", def_value: None }]
constexpr KeyControl(KeyControl const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "KeyControl", modifiers: "&&", def_value: None }]
constexpr KeyControl(KeyControl&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit KeyControl(void* ptr) noexcept : UnityEngine::InputSystem::Controls::ButtonControl(ptr) {
}


  constexpr KeyControl& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr KeyControl& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr KeyControl& operator=(KeyControl&& o) noexcept = default;
  constexpr KeyControl& operator=(KeyControl const& o) noexcept = default;
                


// Fields

 UnityEngine::InputSystem::Key __declspec(property(get=__get__keyCode_k__BackingField, put=__set__keyCode_k__BackingField))  _keyCode_k__BackingField;

constexpr void __set__keyCode_k__BackingField(UnityEngine::InputSystem::Key value) ;

constexpr UnityEngine::InputSystem::Key __get__keyCode_k__BackingField() const;

 int32_t __declspec(property(get=__get_m_ScanCode, put=__set_m_ScanCode))  m_ScanCode;

constexpr void __set_m_ScanCode(int32_t value) ;

constexpr int32_t __get_m_ScanCode() const;


// Properties

 UnityEngine::InputSystem::Key __declspec(property(get=get_keyCode, put=set_keyCode))  keyCode;

 int32_t __declspec(property(get=get_scanCode))  scanCode;


// Methods

/// @brief Method get_keyCode addr 0x2978738 size 0x8 virtual false final false
 UnityEngine::InputSystem::Key get_keyCode() ;

/// @brief Method set_keyCode addr 0x2978740 size 0x8 virtual false final false
 void set_keyCode(UnityEngine::InputSystem::Key value) ;

/// @brief Method get_scanCode addr 0x2978748 size 0x1c virtual false final false
 int32_t get_scanCode() ;

/// @brief Method RefreshConfiguration addr 0x2978764 size 0x170 virtual true final false
 void RefreshConfiguration() ;

// Ctor Parameters []
explicit KeyControl() ;

/// @brief Method .ctor addr 0x29788d4 size 0x4 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Controls
NEED_NO_BOX(UnityEngine::InputSystem::Controls::KeyControl);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::Controls::KeyControl, "UnityEngine.InputSystem.Controls", "KeyControl");
