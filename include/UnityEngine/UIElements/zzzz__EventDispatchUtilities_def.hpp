#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine::UIElements {
class IPanel;
}
namespace UnityEngine::UIElements {
class EventBase;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class EventDispatchUtilities;
}
// Type: UnityEngine.UIElements::EventDispatchUtilities
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7357))
// CS Name: UnityEngine.UIElements.EventDispatchUtilities
class CORDL_TYPE EventDispatchUtilities : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~EventDispatchUtilities() = default;

// Ctor Parameters [CppParam { name: "", ty: "EventDispatchUtilities", modifiers: " const&", def_value: None }]
constexpr EventDispatchUtilities(EventDispatchUtilities const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "EventDispatchUtilities", modifiers: "&&", def_value: None }]
constexpr EventDispatchUtilities(EventDispatchUtilities&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit EventDispatchUtilities(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr EventDispatchUtilities& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr EventDispatchUtilities& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr EventDispatchUtilities& operator=(EventDispatchUtilities&& o) noexcept = default;
  constexpr EventDispatchUtilities& operator=(EventDispatchUtilities const& o) noexcept = default;
                


// Methods

/// @brief Method PropagateEvent addr 0x2cd4a0c size 0x74c virtual false final false
static void PropagateEvent(::UnityEngine::UIElements::EventBase evt) ;

/// @brief Method PropagateToIMGUIContainer addr 0x2cd5164 size 0x224 virtual false final false
static void PropagateToIMGUIContainer(::UnityEngine::UIElements::VisualElement root, ::UnityEngine::UIElements::EventBase evt) ;

/// @brief Method ExecuteDefaultAction addr 0x2cdc2f8 size 0x1a8 virtual false final false
static void ExecuteDefaultAction(::UnityEngine::UIElements::EventBase evt, ::UnityEngine::UIElements::IPanel panel) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::UIElements::EventDispatchUtilities);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::EventDispatchUtilities, "UnityEngine.UIElements", "EventDispatchUtilities");
