#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/UIElements/zzzz__PointerCaptureEventBase_1_def.hpp"
namespace {
// Forward declare root types
namespace UnityEngine::UIElements {
class PointerCaptureEvent;
}
// Type: UnityEngine.UIElements::PointerCaptureEvent
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7249)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7249), inst: 4675 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7251))
// CS Name: UnityEngine.UIElements.PointerCaptureEvent
class CORDL_TYPE PointerCaptureEvent : public ::UnityEngine::UIElements::PointerCaptureEventBase_1<::UnityEngine::UIElements::PointerCaptureEvent> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x90};

virtual ~PointerCaptureEvent() = default;

// Ctor Parameters [CppParam { name: "", ty: "PointerCaptureEvent", modifiers: " const&", def_value: None }]
constexpr PointerCaptureEvent(PointerCaptureEvent const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PointerCaptureEvent", modifiers: "&&", def_value: None }]
constexpr PointerCaptureEvent(PointerCaptureEvent&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PointerCaptureEvent(void* ptr) noexcept : ::UnityEngine::UIElements::PointerCaptureEventBase_1<::UnityEngine::UIElements::PointerCaptureEvent>(ptr) {
}


  constexpr PointerCaptureEvent& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PointerCaptureEvent& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PointerCaptureEvent& operator=(PointerCaptureEvent&& o) noexcept = default;
  constexpr PointerCaptureEvent& operator=(PointerCaptureEvent const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit PointerCaptureEvent() ;

/// @brief Method .ctor addr 0x2cd0adc size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::UIElements::PointerCaptureEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::PointerCaptureEvent, "UnityEngine.UIElements", "PointerCaptureEvent");
