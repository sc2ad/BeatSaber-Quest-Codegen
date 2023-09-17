#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/InputSystem/zzzz__InputBindingComposite_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
#include <cstdint>
namespace {
namespace UnityEngine::InputSystem {
struct InputBindingCompositeContext;
}
namespace System {
class Type;
}
// Forward declare root types
namespace UnityEngine::InputSystem::Composites {
class TwoModifiersComposite;
}
// Type: UnityEngine.InputSystem.Composites::TwoModifiersComposite
namespace UnityEngine::InputSystem::Composites {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6272))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6801))
// CS Name: UnityEngine.InputSystem.Composites.TwoModifiersComposite
class CORDL_TYPE TwoModifiersComposite : public ::UnityEngine::InputSystem::InputBindingComposite {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~TwoModifiersComposite() = default;

// Ctor Parameters [CppParam { name: "", ty: "TwoModifiersComposite", modifiers: " const&", def_value: None }]
constexpr TwoModifiersComposite(TwoModifiersComposite const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TwoModifiersComposite", modifiers: "&&", def_value: None }]
constexpr TwoModifiersComposite(TwoModifiersComposite&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TwoModifiersComposite(void* ptr) noexcept : ::UnityEngine::InputSystem::InputBindingComposite(ptr) {
}


  constexpr TwoModifiersComposite& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TwoModifiersComposite& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TwoModifiersComposite& operator=(TwoModifiersComposite&& o) noexcept = default;
  constexpr TwoModifiersComposite& operator=(TwoModifiersComposite const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get_modifier1, put=__set_modifier1))  modifier1;

constexpr void __set_modifier1(int32_t value) ;

constexpr int32_t __get_modifier1() const;

 int32_t __declspec(property(get=__get_modifier2, put=__set_modifier2))  modifier2;

constexpr void __set_modifier2(int32_t value) ;

constexpr int32_t __get_modifier2() const;

 int32_t __declspec(property(get=__get_binding, put=__set_binding))  binding;

constexpr void __set_binding(int32_t value) ;

constexpr int32_t __get_binding() const;

 bool __declspec(property(get=__get_overrideModifiersNeedToBePressedFirst, put=__set_overrideModifiersNeedToBePressedFirst))  overrideModifiersNeedToBePressedFirst;

constexpr void __set_overrideModifiersNeedToBePressedFirst(bool value) ;

constexpr bool __get_overrideModifiersNeedToBePressedFirst() const;

 int32_t __declspec(property(get=__get_m_ValueSizeInBytes, put=__set_m_ValueSizeInBytes))  m_ValueSizeInBytes;

constexpr void __set_m_ValueSizeInBytes(int32_t value) ;

constexpr int32_t __get_m_ValueSizeInBytes() const;

 ::System::Type __declspec(property(get=__get_m_ValueType, put=__set_m_ValueType))  m_ValueType;

constexpr void __set_m_ValueType(::System::Type value) ;

constexpr ::System::Type __get_m_ValueType() const;

 bool __declspec(property(get=__get_m_BindingIsButton, put=__set_m_BindingIsButton))  m_BindingIsButton;

constexpr void __set_m_BindingIsButton(bool value) ;

constexpr bool __get_m_BindingIsButton() const;


// Properties

 ::System::Type __declspec(property(get=get_valueType))  valueType;

 int32_t __declspec(property(get=get_valueSizeInBytes))  valueSizeInBytes;


// Methods

/// @brief Method get_valueType addr 0x28c8e10 size 0x8 virtual true final false
 ::System::Type get_valueType() ;

/// @brief Method get_valueSizeInBytes addr 0x28c8e18 size 0x8 virtual true final false
 int32_t get_valueSizeInBytes() ;

/// @brief Method EvaluateMagnitude addr 0x28c8e20 size 0x40 virtual true final false
 float_t EvaluateMagnitude(ByRef<::UnityEngine::InputSystem::InputBindingCompositeContext> context) ;

/// @brief Method ReadValue addr 0x28c8f1c size 0x64 virtual true final false
 void ReadValue(ByRef<::UnityEngine::InputSystem::InputBindingCompositeContext> context, void* buffer, int32_t bufferSize) ;

/// @brief Method ModifiersArePressed addr 0x28c8e60 size 0xbc virtual false final false
 bool ModifiersArePressed(ByRef<::UnityEngine::InputSystem::InputBindingCompositeContext> context) ;

/// @brief Method FinishSetup addr 0x28c8f80 size 0xac virtual true final false
 void FinishSetup(ByRef<::UnityEngine::InputSystem::InputBindingCompositeContext> context) ;

/// @brief Method ReadValueAsObject addr 0x28c902c size 0x64 virtual true final false
 ::bs_hook::Il2CppWrapperType ReadValueAsObject(ByRef<::UnityEngine::InputSystem::InputBindingCompositeContext> context) ;

// Ctor Parameters []
explicit TwoModifiersComposite() ;

/// @brief Method .ctor addr 0x28c9090 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Composites
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::InputSystem::Composites::TwoModifiersComposite);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Composites::TwoModifiersComposite, "UnityEngine.InputSystem.Composites", "TwoModifiersComposite");
