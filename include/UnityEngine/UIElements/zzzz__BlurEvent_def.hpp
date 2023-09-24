#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/UIElements/zzzz__FocusEventBase_1_def.hpp"
namespace UnityEngine::UIElements {
class IPanel;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class BlurEvent;
}
// Type: UnityEngine.UIElements::BlurEvent
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7331), inst: 1901 }), TypeDefinitionIndex(TypeDefinitionIndex(7331))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7333))
// CS Name: UnityEngine.UIElements.BlurEvent
class CORDL_TYPE BlurEvent : public UnityEngine::UIElements::FocusEventBase_1<UnityEngine::UIElements::BlurEvent> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xa0};

virtual ~BlurEvent() = default;

// Ctor Parameters [CppParam { name: "", ty: "BlurEvent", modifiers: " const&", def_value: None }]
constexpr BlurEvent(BlurEvent const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BlurEvent", modifiers: "&&", def_value: None }]
constexpr BlurEvent(BlurEvent&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BlurEvent(void* ptr) noexcept : UnityEngine::UIElements::FocusEventBase_1<UnityEngine::UIElements::BlurEvent>(ptr) {
}


  constexpr BlurEvent& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BlurEvent& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BlurEvent& operator=(BlurEvent&& o) noexcept = default;
  constexpr BlurEvent& operator=(BlurEvent const& o) noexcept = default;
                


// Methods

/// @brief Method PreDispatch addr 0x2cdac98 size 0x7c virtual true final false
 void PreDispatch(UnityEngine::UIElements::IPanel panel) ;

static UnityEngine::UIElements::BlurEvent New_ctor() ;

/// @brief Method .ctor addr 0x2cdad14 size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(UnityEngine::UIElements::BlurEvent);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::BlurEvent, "UnityEngine.UIElements", "BlurEvent");
