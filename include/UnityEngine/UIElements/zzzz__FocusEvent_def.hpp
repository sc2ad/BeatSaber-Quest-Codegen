#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/UIElements/zzzz__FocusEventBase_1_def.hpp"
namespace {
namespace UnityEngine::UIElements {
class IPanel;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class FocusEvent;
}
// Type: UnityEngine.UIElements::FocusEvent
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7331)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7331), inst: 1902 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7335))
// CS Name: UnityEngine.UIElements.FocusEvent
class CORDL_TYPE FocusEvent : public ::UnityEngine::UIElements::FocusEventBase_1<::UnityEngine::UIElements::FocusEvent> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xa0};

virtual ~FocusEvent() = default;

// Ctor Parameters [CppParam { name: "", ty: "FocusEvent", modifiers: " const&", def_value: None }]
constexpr FocusEvent(FocusEvent const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "FocusEvent", modifiers: "&&", def_value: None }]
constexpr FocusEvent(FocusEvent&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit FocusEvent(void* ptr) noexcept : ::UnityEngine::UIElements::FocusEventBase_1<::UnityEngine::UIElements::FocusEvent>(ptr) {
}


  constexpr FocusEvent& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr FocusEvent& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr FocusEvent& operator=(FocusEvent&& o) noexcept = default;
  constexpr FocusEvent& operator=(FocusEvent const& o) noexcept = default;
                


// Methods

/// @brief Method PreDispatch addr 0x2cdae10 size 0xa8 virtual true final false
 void PreDispatch(::UnityEngine::UIElements::IPanel panel) ;

// Ctor Parameters []
explicit FocusEvent() ;

/// @brief Method .ctor addr 0x2cdaeb8 size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::UIElements::FocusEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::FocusEvent, "UnityEngine.UIElements", "FocusEvent");
