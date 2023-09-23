#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine::UIElements {
class IPointerEvent;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class PointerEventsHelper;
}
// Type: UnityEngine.UIElements::PointerEventsHelper
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7269))
// CS Name: UnityEngine.UIElements.PointerEventsHelper
class CORDL_TYPE PointerEventsHelper : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~PointerEventsHelper() = default;

// Ctor Parameters [CppParam { name: "", ty: "PointerEventsHelper", modifiers: " const&", def_value: None }]
constexpr PointerEventsHelper(PointerEventsHelper const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PointerEventsHelper", modifiers: "&&", def_value: None }]
constexpr PointerEventsHelper(PointerEventsHelper&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PointerEventsHelper(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr PointerEventsHelper& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PointerEventsHelper& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PointerEventsHelper& operator=(PointerEventsHelper&& o) noexcept = default;
  constexpr PointerEventsHelper& operator=(PointerEventsHelper const& o) noexcept = default;
                


// Methods

/// @brief Method SendEnterLeave addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TLeaveEvent,typename TEnterEvent>
static void SendEnterLeave(UnityEngine::UIElements::VisualElement previousTopElementUnderPointer, UnityEngine::UIElements::VisualElement currentTopElementUnderPointer, UnityEngine::UIElements::IPointerEvent triggerEvent, UnityEngine::Vector2 position, int32_t pointerId) ;

/// @brief Method SendOverOut addr 0x2cd1ea0 size 0x380 virtual false final false
static void SendOverOut(UnityEngine::UIElements::VisualElement previousTopElementUnderPointer, UnityEngine::UIElements::VisualElement currentTopElementUnderPointer, UnityEngine::UIElements::IPointerEvent triggerEvent, UnityEngine::Vector2 position, int32_t pointerId) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(UnityEngine::UIElements::PointerEventsHelper);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::PointerEventsHelper, "UnityEngine.UIElements", "PointerEventsHelper");
