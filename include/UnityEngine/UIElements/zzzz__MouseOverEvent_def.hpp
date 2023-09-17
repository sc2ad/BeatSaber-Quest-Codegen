#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/UIElements/zzzz__MouseEventBase_1_def.hpp"
namespace {
// Forward declare root types
namespace UnityEngine::UIElements {
class MouseOverEvent;
}
// Type: UnityEngine.UIElements::MouseOverEvent
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7314)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7314), inst: 4512 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7324))
// CS Name: UnityEngine.UIElements.MouseOverEvent
class CORDL_TYPE MouseOverEvent : public ::UnityEngine::UIElements::MouseEventBase_1<::UnityEngine::UIElements::MouseOverEvent> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xb0};

virtual ~MouseOverEvent() = default;

// Ctor Parameters [CppParam { name: "", ty: "MouseOverEvent", modifiers: " const&", def_value: None }]
constexpr MouseOverEvent(MouseOverEvent const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MouseOverEvent", modifiers: "&&", def_value: None }]
constexpr MouseOverEvent(MouseOverEvent&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MouseOverEvent(void* ptr) noexcept : ::UnityEngine::UIElements::MouseEventBase_1<::UnityEngine::UIElements::MouseOverEvent>(ptr) {
}


  constexpr MouseOverEvent& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MouseOverEvent& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MouseOverEvent& operator=(MouseOverEvent&& o) noexcept = default;
  constexpr MouseOverEvent& operator=(MouseOverEvent const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit MouseOverEvent() ;

/// @brief Method .ctor addr 0x2cda900 size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::UIElements::MouseOverEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::MouseOverEvent, "UnityEngine.UIElements", "MouseOverEvent");
