#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace UnityEngine::UIElements {
class IPanel;
}
namespace UnityEngine::UIElements {
class IEventDispatchingStrategy;
}
namespace UnityEngine::UIElements {
class EventBase;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class NavigationEventDispatchingStrategy;
}
// Type: UnityEngine.UIElements::NavigationEventDispatchingStrategy
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7292))
// CS Name: UnityEngine.UIElements.NavigationEventDispatchingStrategy
class CORDL_TYPE NavigationEventDispatchingStrategy : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to UnityEngine::UIElements::IEventDispatchingStrategy
constexpr operator  UnityEngine::UIElements::IEventDispatchingStrategy() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~NavigationEventDispatchingStrategy() = default;

// Ctor Parameters [CppParam { name: "", ty: "NavigationEventDispatchingStrategy", modifiers: " const&", def_value: None }]
constexpr NavigationEventDispatchingStrategy(NavigationEventDispatchingStrategy const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "NavigationEventDispatchingStrategy", modifiers: "&&", def_value: None }]
constexpr NavigationEventDispatchingStrategy(NavigationEventDispatchingStrategy&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit NavigationEventDispatchingStrategy(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr NavigationEventDispatchingStrategy& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr NavigationEventDispatchingStrategy& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr NavigationEventDispatchingStrategy& operator=(NavigationEventDispatchingStrategy&& o) noexcept = default;
  constexpr NavigationEventDispatchingStrategy& operator=(NavigationEventDispatchingStrategy const& o) noexcept = default;
                


// Methods

/// @brief Method CanDispatchEvent addr 0x2cd76a0 size 0x54 virtual true final true
 bool CanDispatchEvent(UnityEngine::UIElements::EventBase evt) ;

/// @brief Method DispatchEvent addr 0x2cd76f4 size 0x144 virtual true final true
 void DispatchEvent(UnityEngine::UIElements::EventBase evt, UnityEngine::UIElements::IPanel panel) ;

static UnityEngine::UIElements::NavigationEventDispatchingStrategy New_ctor() ;

/// @brief Method .ctor addr 0x2cd7838 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(UnityEngine::UIElements::NavigationEventDispatchingStrategy);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::NavigationEventDispatchingStrategy, "UnityEngine.UIElements", "NavigationEventDispatchingStrategy");
