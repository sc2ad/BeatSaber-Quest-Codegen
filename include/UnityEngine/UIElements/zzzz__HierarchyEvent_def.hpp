#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace {
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine::UIElements {
struct HierarchyChangeType;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class HierarchyEvent;
}
// Type: UnityEngine.UIElements::HierarchyEvent
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6954))
// CS Name: UnityEngine.UIElements.HierarchyEvent
class CORDL_TYPE HierarchyEvent : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~HierarchyEvent() = default;

// Ctor Parameters [CppParam { name: "", ty: "HierarchyEvent", modifiers: " const&", def_value: None }]
constexpr HierarchyEvent(HierarchyEvent const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HierarchyEvent", modifiers: "&&", def_value: None }]
constexpr HierarchyEvent(HierarchyEvent&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HierarchyEvent(void* ptr) noexcept : ::System::MulticastDelegate(ptr) {
}


  constexpr HierarchyEvent& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HierarchyEvent& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HierarchyEvent& operator=(HierarchyEvent&& o) noexcept = default;
  constexpr HierarchyEvent& operator=(HierarchyEvent const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit HierarchyEvent(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2c4fc4c size 0x130 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2c4fd7c size 0x14 virtual true final false
 void Invoke(::UnityEngine::UIElements::VisualElement ve, ::UnityEngine::UIElements::HierarchyChangeType changeType) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::UIElements::HierarchyEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::HierarchyEvent, "UnityEngine.UIElements", "HierarchyEvent");
