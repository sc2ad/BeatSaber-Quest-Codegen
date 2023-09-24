#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/UIElements/zzzz__PointerEventBase_1_def.hpp"
// Forward declare root types
namespace UnityEngine::UIElements {
class PointerStationaryEvent;
}
// Type: UnityEngine.UIElements::PointerStationaryEvent
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7297)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7297), inst: 4686 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7300))
// CS Name: UnityEngine.UIElements.PointerStationaryEvent
class CORDL_TYPE PointerStationaryEvent : public UnityEngine::UIElements::PointerEventBase_1<UnityEngine::UIElements::PointerStationaryEvent> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xf0};

virtual ~PointerStationaryEvent() = default;

// Ctor Parameters [CppParam { name: "", ty: "PointerStationaryEvent", modifiers: " const&", def_value: None }]
constexpr PointerStationaryEvent(PointerStationaryEvent const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PointerStationaryEvent", modifiers: "&&", def_value: None }]
constexpr PointerStationaryEvent(PointerStationaryEvent&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PointerStationaryEvent(void* ptr) noexcept : UnityEngine::UIElements::PointerEventBase_1<UnityEngine::UIElements::PointerStationaryEvent>(ptr) {
}


  constexpr PointerStationaryEvent& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PointerStationaryEvent& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PointerStationaryEvent& operator=(PointerStationaryEvent&& o) noexcept = default;
  constexpr PointerStationaryEvent& operator=(PointerStationaryEvent const& o) noexcept = default;
                


// Methods

/// @brief Method Init addr 0x2cd8704 size 0x50 virtual true final false
 void Init() ;

/// @brief Method LocalInit addr 0x2cd8754 size 0x104 virtual false final false
 void LocalInit() ;

static UnityEngine::UIElements::PointerStationaryEvent New_ctor() ;

/// @brief Method .ctor addr 0x2cd8858 size 0x50 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(UnityEngine::UIElements::PointerStationaryEvent);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::PointerStationaryEvent, "UnityEngine.UIElements", "PointerStationaryEvent");
