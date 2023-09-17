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
class IMGUIEventDispatchingStrategy;
}
// Type: UnityEngine.UIElements::IMGUIEventDispatchingStrategy
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7337))
// CS Name: UnityEngine.UIElements.IMGUIEventDispatchingStrategy
class CORDL_TYPE IMGUIEventDispatchingStrategy : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::UnityEngine::UIElements::IEventDispatchingStrategy
constexpr operator  ::UnityEngine::UIElements::IEventDispatchingStrategy() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~IMGUIEventDispatchingStrategy() = default;

// Ctor Parameters [CppParam { name: "", ty: "IMGUIEventDispatchingStrategy", modifiers: " const&", def_value: None }]
constexpr IMGUIEventDispatchingStrategy(IMGUIEventDispatchingStrategy const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "IMGUIEventDispatchingStrategy", modifiers: "&&", def_value: None }]
constexpr IMGUIEventDispatchingStrategy(IMGUIEventDispatchingStrategy&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IMGUIEventDispatchingStrategy(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr IMGUIEventDispatchingStrategy& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr IMGUIEventDispatchingStrategy& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr IMGUIEventDispatchingStrategy& operator=(IMGUIEventDispatchingStrategy&& o) noexcept = default;
  constexpr IMGUIEventDispatchingStrategy& operator=(IMGUIEventDispatchingStrategy const& o) noexcept = default;
                


// Methods

/// @brief Method CanDispatchEvent addr 0x2cdb694 size 0x78 virtual true final true
 bool CanDispatchEvent(::UnityEngine::UIElements::EventBase evt) ;

/// @brief Method DispatchEvent addr 0x2cdb70c size 0xc0 virtual true final true
 void DispatchEvent(::UnityEngine::UIElements::EventBase evt, ::UnityEngine::UIElements::IPanel panel) ;

// Ctor Parameters []
explicit IMGUIEventDispatchingStrategy() ;

/// @brief Method .ctor addr 0x2cdb7cc size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::UIElements::IMGUIEventDispatchingStrategy);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::IMGUIEventDispatchingStrategy, "UnityEngine.UIElements", "IMGUIEventDispatchingStrategy");
