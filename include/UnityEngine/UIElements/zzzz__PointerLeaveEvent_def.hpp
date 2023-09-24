#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/UIElements/zzzz__PointerEventBase_1_def.hpp"
// Forward declare root types
namespace UnityEngine::UIElements {
class PointerLeaveEvent;
}
// Type: UnityEngine.UIElements::PointerLeaveEvent
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7297), inst: 4683 }), TypeDefinitionIndex(TypeDefinitionIndex(7297))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7305))
// CS Name: UnityEngine.UIElements.PointerLeaveEvent
class CORDL_TYPE PointerLeaveEvent : public UnityEngine::UIElements::PointerEventBase_1<UnityEngine::UIElements::PointerLeaveEvent> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xf0};

virtual ~PointerLeaveEvent() = default;

// Ctor Parameters [CppParam { name: "", ty: "PointerLeaveEvent", modifiers: " const&", def_value: None }]
constexpr PointerLeaveEvent(PointerLeaveEvent const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PointerLeaveEvent", modifiers: "&&", def_value: None }]
constexpr PointerLeaveEvent(PointerLeaveEvent&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PointerLeaveEvent(void* ptr) noexcept : UnityEngine::UIElements::PointerEventBase_1<UnityEngine::UIElements::PointerLeaveEvent>(ptr) {
}


  constexpr PointerLeaveEvent& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PointerLeaveEvent& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PointerLeaveEvent& operator=(PointerLeaveEvent&& o) noexcept = default;
  constexpr PointerLeaveEvent& operator=(PointerLeaveEvent const& o) noexcept = default;
                


// Methods

/// @brief Method Init addr 0x2cd942c size 0x54 virtual true final false
 void Init() ;

/// @brief Method LocalInit addr 0x2cd9480 size 0xc virtual false final false
 void LocalInit() ;

static UnityEngine::UIElements::PointerLeaveEvent New_ctor() ;

/// @brief Method .ctor addr 0x2cd948c size 0x54 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(UnityEngine::UIElements::PointerLeaveEvent);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::PointerLeaveEvent, "UnityEngine.UIElements", "PointerLeaveEvent");
