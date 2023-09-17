#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/UIElements/zzzz__MouseCaptureEventBase_1_def.hpp"
namespace {
// Forward declare root types
namespace UnityEngine::UIElements {
class MouseCaptureEvent;
}
// Type: UnityEngine.UIElements::MouseCaptureEvent
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7252), inst: 4499 }), TypeDefinitionIndex(TypeDefinitionIndex(7252))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7254))
// CS Name: UnityEngine.UIElements.MouseCaptureEvent
class CORDL_TYPE MouseCaptureEvent : public ::UnityEngine::UIElements::MouseCaptureEventBase_1<::UnityEngine::UIElements::MouseCaptureEvent> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x90};

virtual ~MouseCaptureEvent() = default;

// Ctor Parameters [CppParam { name: "", ty: "MouseCaptureEvent", modifiers: " const&", def_value: None }]
constexpr MouseCaptureEvent(MouseCaptureEvent const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MouseCaptureEvent", modifiers: "&&", def_value: None }]
constexpr MouseCaptureEvent(MouseCaptureEvent&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MouseCaptureEvent(void* ptr) noexcept : ::UnityEngine::UIElements::MouseCaptureEventBase_1<::UnityEngine::UIElements::MouseCaptureEvent>(ptr) {
}


  constexpr MouseCaptureEvent& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MouseCaptureEvent& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MouseCaptureEvent& operator=(MouseCaptureEvent&& o) noexcept = default;
  constexpr MouseCaptureEvent& operator=(MouseCaptureEvent const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit MouseCaptureEvent() ;

/// @brief Method .ctor addr 0x2cd0b6c size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::UIElements::MouseCaptureEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::MouseCaptureEvent, "UnityEngine.UIElements", "MouseCaptureEvent");
