#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
namespace {
namespace UnityEngine::UIElements {
class BaseVisualElementPanel;
}
namespace UnityEngine::UIElements {
class IEventDispatchingStrategy;
}
namespace UnityEngine::UIElements {
class EventBase;
}
namespace UnityEngine::UIElements {
class IPanel;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class MouseEventDispatchingStrategy;
}
// Type: UnityEngine.UIElements::MouseEventDispatchingStrategy
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7336))
// CS Name: UnityEngine.UIElements.MouseEventDispatchingStrategy
class CORDL_TYPE MouseEventDispatchingStrategy : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::UnityEngine::UIElements::IEventDispatchingStrategy
constexpr operator  ::UnityEngine::UIElements::IEventDispatchingStrategy() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~MouseEventDispatchingStrategy() = default;

// Ctor Parameters [CppParam { name: "", ty: "MouseEventDispatchingStrategy", modifiers: " const&", def_value: None }]
constexpr MouseEventDispatchingStrategy(MouseEventDispatchingStrategy const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MouseEventDispatchingStrategy", modifiers: "&&", def_value: None }]
constexpr MouseEventDispatchingStrategy(MouseEventDispatchingStrategy&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MouseEventDispatchingStrategy(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr MouseEventDispatchingStrategy& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MouseEventDispatchingStrategy& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MouseEventDispatchingStrategy& operator=(MouseEventDispatchingStrategy&& o) noexcept = default;
  constexpr MouseEventDispatchingStrategy& operator=(MouseEventDispatchingStrategy const& o) noexcept = default;
                


// Methods

/// @brief Method CanDispatchEvent addr 0x2cdaf00 size 0x54 virtual true final true
 bool CanDispatchEvent(::UnityEngine::UIElements::EventBase evt) ;

/// @brief Method DispatchEvent addr 0x2cdaf54 size 0x108 virtual true final true
 void DispatchEvent(::UnityEngine::UIElements::EventBase evt, ::UnityEngine::UIElements::IPanel iPanel) ;

/// @brief Method SendEventToTarget addr 0x2cdb0fc size 0x3c virtual false final false
static bool SendEventToTarget(::UnityEngine::UIElements::EventBase evt, ::UnityEngine::UIElements::BaseVisualElementPanel panel) ;

/// @brief Method SendEventToRegularTarget addr 0x2cdb138 size 0x38 virtual false final false
static bool SendEventToRegularTarget(::UnityEngine::UIElements::EventBase evt, ::UnityEngine::UIElements::BaseVisualElementPanel panel) ;

/// @brief Method SendEventToIMGUIContainer addr 0x2cdb170 size 0x1d8 virtual false final false
static bool SendEventToIMGUIContainer(::UnityEngine::UIElements::EventBase evt, ::UnityEngine::UIElements::BaseVisualElementPanel panel) ;

/// @brief Method SetBestTargetForEvent addr 0x2cdb05c size 0xa0 virtual false final false
static void SetBestTargetForEvent(::UnityEngine::UIElements::EventBase evt, ::UnityEngine::UIElements::BaseVisualElementPanel panel) ;

/// @brief Method UpdateElementUnderMouse addr 0x2cdb390 size 0x2fc virtual false final false
static void UpdateElementUnderMouse(::UnityEngine::UIElements::EventBase evt, ::UnityEngine::UIElements::BaseVisualElementPanel panel, ByRef<::UnityEngine::UIElements::VisualElement> elementUnderMouse) ;

/// @brief Method IsDone addr 0x2cdb348 size 0x48 virtual false final false
static bool IsDone(::UnityEngine::UIElements::EventBase evt) ;

// Ctor Parameters []
explicit MouseEventDispatchingStrategy() ;

/// @brief Method .ctor addr 0x2cdb68c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::UIElements::MouseEventDispatchingStrategy);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::MouseEventDispatchingStrategy, "UnityEngine.UIElements", "MouseEventDispatchingStrategy");
