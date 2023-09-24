#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/InputSystem/zzzz__InputBindingComposite_1_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
#include <cstdint>
namespace UnityEngine::InputSystem {
struct InputBindingCompositeContext;
}
// Forward declare root types
namespace UnityEngine::InputSystem::Composites {
class ButtonWithTwoModifiers;
}
// Type: UnityEngine.InputSystem.Composites::ButtonWithTwoModifiers
namespace UnityEngine::InputSystem::Composites {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6273), inst: 374 }), TypeDefinitionIndex(TypeDefinitionIndex(6273))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6799))
// CS Name: UnityEngine.InputSystem.Composites.ButtonWithTwoModifiers
class CORDL_TYPE ButtonWithTwoModifiers : public UnityEngine::InputSystem::InputBindingComposite_1<float_t> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~ButtonWithTwoModifiers() = default;

// Ctor Parameters [CppParam { name: "", ty: "ButtonWithTwoModifiers", modifiers: " const&", def_value: None }]
constexpr ButtonWithTwoModifiers(ButtonWithTwoModifiers const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ButtonWithTwoModifiers", modifiers: "&&", def_value: None }]
constexpr ButtonWithTwoModifiers(ButtonWithTwoModifiers&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ButtonWithTwoModifiers(void* ptr) noexcept : UnityEngine::InputSystem::InputBindingComposite_1<float_t>(ptr) {
}


  constexpr ButtonWithTwoModifiers& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ButtonWithTwoModifiers& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ButtonWithTwoModifiers& operator=(ButtonWithTwoModifiers&& o) noexcept = default;
  constexpr ButtonWithTwoModifiers& operator=(ButtonWithTwoModifiers const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get_modifier1, put=__set_modifier1))  modifier1;

constexpr void __set_modifier1(int32_t value) ;

constexpr int32_t __get_modifier1() const;

 int32_t __declspec(property(get=__get_modifier2, put=__set_modifier2))  modifier2;

constexpr void __set_modifier2(int32_t value) ;

constexpr int32_t __get_modifier2() const;

 int32_t __declspec(property(get=__get_button, put=__set_button))  button;

constexpr void __set_button(int32_t value) ;

constexpr int32_t __get_button() const;

 bool __declspec(property(get=__get_overrideModifiersNeedToBePressedFirst, put=__set_overrideModifiersNeedToBePressedFirst))  overrideModifiersNeedToBePressedFirst;

constexpr void __set_overrideModifiersNeedToBePressedFirst(bool value) ;

constexpr bool __get_overrideModifiersNeedToBePressedFirst() const;


// Methods

/// @brief Method ReadValue addr 0x28c84f4 size 0x70 virtual true final false
 float_t ReadValue(ByRef<UnityEngine::InputSystem::InputBindingCompositeContext> context) ;

/// @brief Method ModifiersArePressed addr 0x28c8564 size 0xb4 virtual false final false
 bool ModifiersArePressed(ByRef<UnityEngine::InputSystem::InputBindingCompositeContext> context) ;

/// @brief Method EvaluateMagnitude addr 0x28c8618 size 0xc virtual true final false
 float_t EvaluateMagnitude(ByRef<UnityEngine::InputSystem::InputBindingCompositeContext> context) ;

/// @brief Method FinishSetup addr 0x28c8624 size 0x90 virtual true final false
 void FinishSetup(ByRef<UnityEngine::InputSystem::InputBindingCompositeContext> context) ;

static UnityEngine::InputSystem::Composites::ButtonWithTwoModifiers New_ctor() ;

/// @brief Method .ctor addr 0x28c86b4 size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Composites
NEED_NO_BOX(UnityEngine::InputSystem::Composites::ButtonWithTwoModifiers);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::Composites::ButtonWithTwoModifiers, "UnityEngine.InputSystem.Composites", "ButtonWithTwoModifiers");
