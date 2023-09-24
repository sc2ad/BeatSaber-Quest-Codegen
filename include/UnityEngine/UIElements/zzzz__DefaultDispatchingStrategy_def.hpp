#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace UnityEngine::UIElements {
class IEventDispatchingStrategy;
}
namespace UnityEngine::UIElements {
class IPanel;
}
namespace UnityEngine::UIElements {
class EventBase;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class DefaultDispatchingStrategy;
}
// Type: UnityEngine.UIElements::DefaultDispatchingStrategy
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7272))
// CS Name: UnityEngine.UIElements.DefaultDispatchingStrategy
class CORDL_TYPE DefaultDispatchingStrategy : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to UnityEngine::UIElements::IEventDispatchingStrategy
constexpr operator  UnityEngine::UIElements::IEventDispatchingStrategy() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~DefaultDispatchingStrategy() = default;

// Ctor Parameters [CppParam { name: "", ty: "DefaultDispatchingStrategy", modifiers: " const&", def_value: None }]
constexpr DefaultDispatchingStrategy(DefaultDispatchingStrategy const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DefaultDispatchingStrategy", modifiers: "&&", def_value: None }]
constexpr DefaultDispatchingStrategy(DefaultDispatchingStrategy&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DefaultDispatchingStrategy(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr DefaultDispatchingStrategy& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DefaultDispatchingStrategy& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DefaultDispatchingStrategy& operator=(DefaultDispatchingStrategy&& o) noexcept = default;
  constexpr DefaultDispatchingStrategy& operator=(DefaultDispatchingStrategy const& o) noexcept = default;
                


// Methods

/// @brief Method CanDispatchEvent addr 0x2cd59d4 size 0x78 virtual true final true
 bool CanDispatchEvent(UnityEngine::UIElements::EventBase evt) ;

/// @brief Method DispatchEvent addr 0x2cd5a4c size 0x200 virtual true final true
 void DispatchEvent(UnityEngine::UIElements::EventBase evt, UnityEngine::UIElements::IPanel panel) ;

static UnityEngine::UIElements::DefaultDispatchingStrategy New_ctor() ;

/// @brief Method .ctor addr 0x2cd5c58 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(UnityEngine::UIElements::DefaultDispatchingStrategy);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::DefaultDispatchingStrategy, "UnityEngine.UIElements", "DefaultDispatchingStrategy");
