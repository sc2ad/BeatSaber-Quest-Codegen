#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace UnityEngine::InputSystem {
struct UnityEngine__InputSystem__InputAction__CallbackContext;
}
namespace System {
template<typename T>
struct Nullable_1;
}
// Forward declare root types
namespace UnityEngine::InputSystem {
class InputValue;
}
// Type: UnityEngine.InputSystem::InputValue
namespace UnityEngine::InputSystem {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6393))
// CS Name: UnityEngine.InputSystem.InputValue
class CORDL_TYPE InputValue : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~InputValue() = default;

// Ctor Parameters [CppParam { name: "", ty: "InputValue", modifiers: " const&", def_value: None }]
constexpr InputValue(InputValue const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "InputValue", modifiers: "&&", def_value: None }]
constexpr InputValue(InputValue&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit InputValue(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr InputValue& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr InputValue& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr InputValue& operator=(InputValue&& o) noexcept = default;
  constexpr InputValue& operator=(InputValue const& o) noexcept = default;
                


// Fields

 System::Nullable_1<UnityEngine::InputSystem::UnityEngine__InputSystem__InputAction__CallbackContext> __declspec(property(get=__get_m_Context, put=__set_m_Context))  m_Context;

constexpr void __set_m_Context(System::Nullable_1<UnityEngine::InputSystem::UnityEngine__InputSystem__InputAction__CallbackContext> value) ;

constexpr System::Nullable_1<UnityEngine::InputSystem::UnityEngine__InputSystem__InputAction__CallbackContext> __get_m_Context() const;


// Properties

 bool __declspec(property(get=get_isPressed))  isPressed;


// Methods

/// @brief Method Get addr 0x29296c0 size 0x64 virtual false final false
 ::bs_hook::Il2CppWrapperType Get() ;

/// @brief Method Get addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TValue>
 TValue Get() ;

/// @brief Method get_isPressed addr 0x2929724 size 0x7c virtual false final false
 bool get_isPressed() ;

static UnityEngine::InputSystem::InputValue New_ctor() ;

/// @brief Method .ctor addr 0x29297a0 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem
NEED_NO_BOX(UnityEngine::InputSystem::InputValue);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::InputValue, "UnityEngine.InputSystem", "InputValue");
