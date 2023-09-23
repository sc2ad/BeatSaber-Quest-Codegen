#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/UIElements/zzzz__PointerCaptureEventBase_1_def.hpp"
// Forward declare root types
namespace UnityEngine::UIElements {
class PointerCaptureOutEvent;
}
// Type: UnityEngine.UIElements::PointerCaptureOutEvent
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7249), inst: 4676 }), TypeDefinitionIndex(TypeDefinitionIndex(7249))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7250))
// CS Name: UnityEngine.UIElements.PointerCaptureOutEvent
class CORDL_TYPE PointerCaptureOutEvent : public UnityEngine::UIElements::PointerCaptureEventBase_1<UnityEngine::UIElements::PointerCaptureOutEvent> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x90};

virtual ~PointerCaptureOutEvent() = default;

// Ctor Parameters [CppParam { name: "", ty: "PointerCaptureOutEvent", modifiers: " const&", def_value: None }]
constexpr PointerCaptureOutEvent(PointerCaptureOutEvent const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PointerCaptureOutEvent", modifiers: "&&", def_value: None }]
constexpr PointerCaptureOutEvent(PointerCaptureOutEvent&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PointerCaptureOutEvent(void* ptr) noexcept : UnityEngine::UIElements::PointerCaptureEventBase_1<UnityEngine::UIElements::PointerCaptureOutEvent>(ptr) {
}


  constexpr PointerCaptureOutEvent& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PointerCaptureOutEvent& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PointerCaptureOutEvent& operator=(PointerCaptureOutEvent&& o) noexcept = default;
  constexpr PointerCaptureOutEvent& operator=(PointerCaptureOutEvent const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit PointerCaptureOutEvent() ;

/// @brief Method .ctor addr 0x2cd0a94 size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(UnityEngine::UIElements::PointerCaptureOutEvent);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::PointerCaptureOutEvent, "UnityEngine.UIElements", "PointerCaptureOutEvent");
