#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
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
class KeyboardEventDispatchingStrategy;
}
// Type: UnityEngine.UIElements::KeyboardEventDispatchingStrategy
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7267))
// CS Name: UnityEngine.UIElements.KeyboardEventDispatchingStrategy
class CORDL_TYPE KeyboardEventDispatchingStrategy : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::UnityEngine::UIElements::IEventDispatchingStrategy
constexpr operator  ::UnityEngine::UIElements::IEventDispatchingStrategy() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~KeyboardEventDispatchingStrategy() = default;

// Ctor Parameters [CppParam { name: "", ty: "KeyboardEventDispatchingStrategy", modifiers: " const&", def_value: None }]
constexpr KeyboardEventDispatchingStrategy(KeyboardEventDispatchingStrategy const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "KeyboardEventDispatchingStrategy", modifiers: "&&", def_value: None }]
constexpr KeyboardEventDispatchingStrategy(KeyboardEventDispatchingStrategy&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit KeyboardEventDispatchingStrategy(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr KeyboardEventDispatchingStrategy& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr KeyboardEventDispatchingStrategy& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr KeyboardEventDispatchingStrategy& operator=(KeyboardEventDispatchingStrategy&& o) noexcept = default;
  constexpr KeyboardEventDispatchingStrategy& operator=(KeyboardEventDispatchingStrategy const& o) noexcept = default;
                


// Methods

/// @brief Method CanDispatchEvent addr 0x2cd46e8 size 0x54 virtual true final true
 bool CanDispatchEvent(::UnityEngine::UIElements::EventBase evt) ;

/// @brief Method DispatchEvent addr 0x2cd473c size 0x278 virtual true final true
 void DispatchEvent(::UnityEngine::UIElements::EventBase evt, ::UnityEngine::UIElements::IPanel panel) ;

// Ctor Parameters []
explicit KeyboardEventDispatchingStrategy() ;

/// @brief Method .ctor addr 0x2cd5388 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::UIElements::KeyboardEventDispatchingStrategy);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::KeyboardEventDispatchingStrategy, "UnityEngine.UIElements", "KeyboardEventDispatchingStrategy");
