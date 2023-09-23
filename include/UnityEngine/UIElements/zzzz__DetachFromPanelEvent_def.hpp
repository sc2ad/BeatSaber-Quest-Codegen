#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/UIElements/zzzz__PanelChangedEventBase_1_def.hpp"
// Forward declare root types
namespace UnityEngine::UIElements {
class DetachFromPanelEvent;
}
// Type: UnityEngine.UIElements::DetachFromPanelEvent
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7342)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7342), inst: 4666 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7344))
// CS Name: UnityEngine.UIElements.DetachFromPanelEvent
class CORDL_TYPE DetachFromPanelEvent : public UnityEngine::UIElements::PanelChangedEventBase_1<UnityEngine::UIElements::DetachFromPanelEvent> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x90};

virtual ~DetachFromPanelEvent() = default;

// Ctor Parameters [CppParam { name: "", ty: "DetachFromPanelEvent", modifiers: " const&", def_value: None }]
constexpr DetachFromPanelEvent(DetachFromPanelEvent const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DetachFromPanelEvent", modifiers: "&&", def_value: None }]
constexpr DetachFromPanelEvent(DetachFromPanelEvent&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DetachFromPanelEvent(void* ptr) noexcept : UnityEngine::UIElements::PanelChangedEventBase_1<UnityEngine::UIElements::DetachFromPanelEvent>(ptr) {
}


  constexpr DetachFromPanelEvent& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DetachFromPanelEvent& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DetachFromPanelEvent& operator=(DetachFromPanelEvent&& o) noexcept = default;
  constexpr DetachFromPanelEvent& operator=(DetachFromPanelEvent const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit DetachFromPanelEvent() ;

/// @brief Method .ctor addr 0x2cdb96c size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(UnityEngine::UIElements::DetachFromPanelEvent);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::DetachFromPanelEvent, "UnityEngine.UIElements", "DetachFromPanelEvent");
