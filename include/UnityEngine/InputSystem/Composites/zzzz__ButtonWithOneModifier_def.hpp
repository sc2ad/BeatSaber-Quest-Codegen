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
class ButtonWithOneModifier;
}
// Type: UnityEngine.InputSystem.Composites::ButtonWithOneModifier
namespace UnityEngine::InputSystem::Composites {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6273)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6273), inst: 374 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6798))
// CS Name: UnityEngine.InputSystem.Composites.ButtonWithOneModifier
class CORDL_TYPE ButtonWithOneModifier : public UnityEngine::InputSystem::InputBindingComposite_1<float_t> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~ButtonWithOneModifier() = default;

// Ctor Parameters [CppParam { name: "", ty: "ButtonWithOneModifier", modifiers: " const&", def_value: None }]
constexpr ButtonWithOneModifier(ButtonWithOneModifier const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ButtonWithOneModifier", modifiers: "&&", def_value: None }]
constexpr ButtonWithOneModifier(ButtonWithOneModifier&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ButtonWithOneModifier(void* ptr) noexcept : UnityEngine::InputSystem::InputBindingComposite_1<float_t>(ptr) {
}


  constexpr ButtonWithOneModifier& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ButtonWithOneModifier& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ButtonWithOneModifier& operator=(ButtonWithOneModifier&& o) noexcept = default;
  constexpr ButtonWithOneModifier& operator=(ButtonWithOneModifier const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get_modifier, put=__set_modifier))  modifier;

constexpr void __set_modifier(int32_t value) ;

constexpr int32_t __get_modifier() const;

 int32_t __declspec(property(get=__get_button, put=__set_button))  button;

constexpr void __set_button(int32_t value) ;

constexpr int32_t __get_button() const;

 bool __declspec(property(get=__get_overrideModifiersNeedToBePressedFirst, put=__set_overrideModifiersNeedToBePressedFirst))  overrideModifiersNeedToBePressedFirst;

constexpr void __set_overrideModifiersNeedToBePressedFirst(bool value) ;

constexpr bool __get_overrideModifiersNeedToBePressedFirst() const;


// Methods

/// @brief Method ReadValue addr 0x28c8320 size 0x70 virtual true final false
 float_t ReadValue(ByRef<UnityEngine::InputSystem::InputBindingCompositeContext> context) ;

/// @brief Method ModifierIsPressed addr 0x28c8390 size 0x80 virtual false final false
 bool ModifierIsPressed(ByRef<UnityEngine::InputSystem::InputBindingCompositeContext> context) ;

/// @brief Method EvaluateMagnitude addr 0x28c8410 size 0xc virtual true final false
 float_t EvaluateMagnitude(ByRef<UnityEngine::InputSystem::InputBindingCompositeContext> context) ;

/// @brief Method FinishSetup addr 0x28c841c size 0x90 virtual true final false
 void FinishSetup(ByRef<UnityEngine::InputSystem::InputBindingCompositeContext> context) ;

// Ctor Parameters []
explicit ButtonWithOneModifier() ;

/// @brief Method .ctor addr 0x28c84ac size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Composites
NEED_NO_BOX(UnityEngine::InputSystem::Composites::ButtonWithOneModifier);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::Composites::ButtonWithOneModifier, "UnityEngine.InputSystem.Composites", "ButtonWithOneModifier");
