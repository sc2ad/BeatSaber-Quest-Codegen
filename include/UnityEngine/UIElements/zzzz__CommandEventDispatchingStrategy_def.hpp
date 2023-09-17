#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace UnityEngine::UIElements {
class EventBase;
}
namespace UnityEngine::UIElements {
class IPanel;
}
namespace UnityEngine::UIElements {
class IEventDispatchingStrategy;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class CommandEventDispatchingStrategy;
}
// Type: UnityEngine.UIElements::CommandEventDispatchingStrategy
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7354))
// CS Name: UnityEngine.UIElements.CommandEventDispatchingStrategy
class CORDL_TYPE CommandEventDispatchingStrategy : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::UnityEngine::UIElements::IEventDispatchingStrategy
constexpr operator  ::UnityEngine::UIElements::IEventDispatchingStrategy() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~CommandEventDispatchingStrategy() = default;

// Ctor Parameters [CppParam { name: "", ty: "CommandEventDispatchingStrategy", modifiers: " const&", def_value: None }]
constexpr CommandEventDispatchingStrategy(CommandEventDispatchingStrategy const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CommandEventDispatchingStrategy", modifiers: "&&", def_value: None }]
constexpr CommandEventDispatchingStrategy(CommandEventDispatchingStrategy&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CommandEventDispatchingStrategy(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr CommandEventDispatchingStrategy& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CommandEventDispatchingStrategy& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CommandEventDispatchingStrategy& operator=(CommandEventDispatchingStrategy&& o) noexcept = default;
  constexpr CommandEventDispatchingStrategy& operator=(CommandEventDispatchingStrategy const& o) noexcept = default;
                


// Methods

/// @brief Method CanDispatchEvent addr 0x2cdbf40 size 0x54 virtual true final true
 bool CanDispatchEvent(::UnityEngine::UIElements::EventBase evt) ;

/// @brief Method DispatchEvent addr 0x2cdbf94 size 0x35c virtual true final true
 void DispatchEvent(::UnityEngine::UIElements::EventBase evt, ::UnityEngine::UIElements::IPanel panel) ;

// Ctor Parameters []
explicit CommandEventDispatchingStrategy() ;

/// @brief Method .ctor addr 0x2cdc2f0 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::UIElements::CommandEventDispatchingStrategy);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::CommandEventDispatchingStrategy, "UnityEngine.UIElements", "CommandEventDispatchingStrategy");
