#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/UIElements/zzzz__MouseCaptureEventBase_1_def.hpp"
// Forward declare root types
namespace UnityEngine::UIElements {
class MouseCaptureOutEvent;
}
// Type: UnityEngine.UIElements::MouseCaptureOutEvent
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7252), inst: 4500 }), TypeDefinitionIndex(TypeDefinitionIndex(7252))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7253))
// CS Name: UnityEngine.UIElements.MouseCaptureOutEvent
class CORDL_TYPE MouseCaptureOutEvent : public UnityEngine::UIElements::MouseCaptureEventBase_1<UnityEngine::UIElements::MouseCaptureOutEvent> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x90};

virtual ~MouseCaptureOutEvent() = default;

// Ctor Parameters [CppParam { name: "", ty: "MouseCaptureOutEvent", modifiers: " const&", def_value: None }]
constexpr MouseCaptureOutEvent(MouseCaptureOutEvent const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MouseCaptureOutEvent", modifiers: "&&", def_value: None }]
constexpr MouseCaptureOutEvent(MouseCaptureOutEvent&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MouseCaptureOutEvent(void* ptr) noexcept : UnityEngine::UIElements::MouseCaptureEventBase_1<UnityEngine::UIElements::MouseCaptureOutEvent>(ptr) {
}


  constexpr MouseCaptureOutEvent& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MouseCaptureOutEvent& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MouseCaptureOutEvent& operator=(MouseCaptureOutEvent&& o) noexcept = default;
  constexpr MouseCaptureOutEvent& operator=(MouseCaptureOutEvent const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit MouseCaptureOutEvent() ;

/// @brief Method .ctor addr 0x2cd0b24 size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(UnityEngine::UIElements::MouseCaptureOutEvent);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::MouseCaptureOutEvent, "UnityEngine.UIElements", "MouseCaptureOutEvent");
