#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/UIElements/zzzz__PanelChangedEventBase_1_def.hpp"
// Forward declare root types
namespace UnityEngine::UIElements {
class AttachToPanelEvent;
}
// Type: UnityEngine.UIElements::AttachToPanelEvent
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7342)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7342), inst: 4665 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7343))
// CS Name: UnityEngine.UIElements.AttachToPanelEvent
class CORDL_TYPE AttachToPanelEvent : public UnityEngine::UIElements::PanelChangedEventBase_1<UnityEngine::UIElements::AttachToPanelEvent> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x90};

virtual ~AttachToPanelEvent() = default;

// Ctor Parameters [CppParam { name: "", ty: "AttachToPanelEvent", modifiers: " const&", def_value: None }]
constexpr AttachToPanelEvent(AttachToPanelEvent const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AttachToPanelEvent", modifiers: "&&", def_value: None }]
constexpr AttachToPanelEvent(AttachToPanelEvent&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AttachToPanelEvent(void* ptr) noexcept : UnityEngine::UIElements::PanelChangedEventBase_1<UnityEngine::UIElements::AttachToPanelEvent>(ptr) {
}


  constexpr AttachToPanelEvent& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AttachToPanelEvent& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AttachToPanelEvent& operator=(AttachToPanelEvent&& o) noexcept = default;
  constexpr AttachToPanelEvent& operator=(AttachToPanelEvent const& o) noexcept = default;
                


// Methods

static UnityEngine::UIElements::AttachToPanelEvent New_ctor() ;

/// @brief Method .ctor addr 0x2cdb924 size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(UnityEngine::UIElements::AttachToPanelEvent);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::AttachToPanelEvent, "UnityEngine.UIElements", "AttachToPanelEvent");
