#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/UIElements/zzzz__PointerEventBase_1_def.hpp"
#include <cstdint>
namespace UnityEngine::UIElements {
class PointerUpEvent;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class ClickEvent;
}
// Type: UnityEngine.UIElements::ClickEvent
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7297)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7297), inst: 4679 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7303))
// CS Name: UnityEngine.UIElements.ClickEvent
class CORDL_TYPE ClickEvent : public UnityEngine::UIElements::PointerEventBase_1<UnityEngine::UIElements::ClickEvent> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xf0};

virtual ~ClickEvent() = default;

// Ctor Parameters [CppParam { name: "", ty: "ClickEvent", modifiers: " const&", def_value: None }]
constexpr ClickEvent(ClickEvent const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ClickEvent", modifiers: "&&", def_value: None }]
constexpr ClickEvent(ClickEvent&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ClickEvent(void* ptr) noexcept : UnityEngine::UIElements::PointerEventBase_1<UnityEngine::UIElements::ClickEvent>(ptr) {
}


  constexpr ClickEvent& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ClickEvent& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ClickEvent& operator=(ClickEvent&& o) noexcept = default;
  constexpr ClickEvent& operator=(ClickEvent const& o) noexcept = default;
                


// Methods

/// @brief Method Init addr 0x2cd9254 size 0x54 virtual true final false
 void Init() ;

/// @brief Method LocalInit addr 0x2cd92a8 size 0xc virtual false final false
 void LocalInit() ;

static UnityEngine::UIElements::ClickEvent New_ctor() ;

/// @brief Method .ctor addr 0x2cd92b4 size 0x54 virtual false final false
 void _ctor() ;

/// @brief Method GetPooled addr 0x2cd9308 size 0x70 virtual false final false
static UnityEngine::UIElements::ClickEvent GetPooled(UnityEngine::UIElements::PointerUpEvent pointerEvent, int32_t clickCount) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(UnityEngine::UIElements::ClickEvent);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::ClickEvent, "UnityEngine.UIElements", "ClickEvent");
