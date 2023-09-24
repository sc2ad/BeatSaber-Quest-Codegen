#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
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
class PointerEventDispatchingStrategy;
}
// Type: UnityEngine.UIElements::PointerEventDispatchingStrategy
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7284))
// CS Name: UnityEngine.UIElements.PointerEventDispatchingStrategy
class CORDL_TYPE PointerEventDispatchingStrategy : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to UnityEngine::UIElements::IEventDispatchingStrategy
constexpr operator  UnityEngine::UIElements::IEventDispatchingStrategy() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~PointerEventDispatchingStrategy() = default;

// Ctor Parameters [CppParam { name: "", ty: "PointerEventDispatchingStrategy", modifiers: " const&", def_value: None }]
constexpr PointerEventDispatchingStrategy(PointerEventDispatchingStrategy const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PointerEventDispatchingStrategy", modifiers: "&&", def_value: None }]
constexpr PointerEventDispatchingStrategy(PointerEventDispatchingStrategy&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PointerEventDispatchingStrategy(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr PointerEventDispatchingStrategy& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PointerEventDispatchingStrategy& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PointerEventDispatchingStrategy& operator=(PointerEventDispatchingStrategy&& o) noexcept = default;
  constexpr PointerEventDispatchingStrategy& operator=(PointerEventDispatchingStrategy const& o) noexcept = default;
                


// Methods

/// @brief Method CanDispatchEvent addr 0x2cd6d40 size 0x54 virtual true final true
 bool CanDispatchEvent(UnityEngine::UIElements::EventBase evt) ;

/// @brief Method DispatchEvent addr 0x2cd6d94 size 0x38 virtual true final false
 void DispatchEvent(UnityEngine::UIElements::EventBase evt, UnityEngine::UIElements::IPanel panel) ;

/// @brief Method SendEventToTarget addr 0x2cd7008 size 0x24 virtual false final false
static void SendEventToTarget(UnityEngine::UIElements::EventBase evt) ;

/// @brief Method SetBestTargetForEvent addr 0x2cd6dcc size 0x23c virtual false final false
static void SetBestTargetForEvent(UnityEngine::UIElements::EventBase evt, UnityEngine::UIElements::IPanel panel) ;

/// @brief Method UpdateElementUnderPointer addr 0x2cd702c size 0x2ac virtual false final false
static void UpdateElementUnderPointer(UnityEngine::UIElements::EventBase evt, UnityEngine::UIElements::IPanel panel, ByRef<UnityEngine::UIElements::VisualElement> elementUnderPointer) ;

static UnityEngine::UIElements::PointerEventDispatchingStrategy New_ctor() ;

/// @brief Method .ctor addr 0x2cd72d8 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(UnityEngine::UIElements::PointerEventDispatchingStrategy);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::PointerEventDispatchingStrategy, "UnityEngine.UIElements", "PointerEventDispatchingStrategy");
