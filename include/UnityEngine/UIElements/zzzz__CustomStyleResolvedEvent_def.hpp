#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/UIElements/zzzz__EventBase_1_def.hpp"
namespace {
namespace UnityEngine::UIElements {
class ICustomStyle;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class CustomStyleResolvedEvent;
}
// Type: UnityEngine.UIElements::CustomStyleResolvedEvent
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7279)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7279), inst: 1638 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7308))
// CS Name: UnityEngine.UIElements.CustomStyleResolvedEvent
class CORDL_TYPE CustomStyleResolvedEvent : public ::UnityEngine::UIElements::EventBase_1<::UnityEngine::UIElements::CustomStyleResolvedEvent> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~CustomStyleResolvedEvent() = default;

// Ctor Parameters [CppParam { name: "", ty: "CustomStyleResolvedEvent", modifiers: " const&", def_value: None }]
constexpr CustomStyleResolvedEvent(CustomStyleResolvedEvent const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CustomStyleResolvedEvent", modifiers: "&&", def_value: None }]
constexpr CustomStyleResolvedEvent(CustomStyleResolvedEvent&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CustomStyleResolvedEvent(void* ptr) noexcept : ::UnityEngine::UIElements::EventBase_1<::UnityEngine::UIElements::CustomStyleResolvedEvent>(ptr) {
}


  constexpr CustomStyleResolvedEvent& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CustomStyleResolvedEvent& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CustomStyleResolvedEvent& operator=(CustomStyleResolvedEvent&& o) noexcept = default;
  constexpr CustomStyleResolvedEvent& operator=(CustomStyleResolvedEvent const& o) noexcept = default;
                


// Properties

 ::UnityEngine::UIElements::ICustomStyle __declspec(property(get=get_customStyle))  customStyle;


// Methods

/// @brief Method get_customStyle addr 0x2cce128 size 0x88 virtual false final false
 ::UnityEngine::UIElements::ICustomStyle get_customStyle() ;

// Ctor Parameters []
explicit CustomStyleResolvedEvent() ;

/// @brief Method .ctor addr 0x2cd9570 size 0x6c virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::UIElements::CustomStyleResolvedEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::CustomStyleResolvedEvent, "UnityEngine.UIElements", "CustomStyleResolvedEvent");
