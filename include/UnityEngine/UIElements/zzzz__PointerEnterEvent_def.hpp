#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/UIElements/zzzz__PointerEventBase_1_def.hpp"
// Forward declare root types
namespace UnityEngine::UIElements {
class PointerEnterEvent;
}
// Type: UnityEngine.UIElements::PointerEnterEvent
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7297)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7297), inst: 4682 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7304))
// CS Name: UnityEngine.UIElements.PointerEnterEvent
class CORDL_TYPE PointerEnterEvent : public UnityEngine::UIElements::PointerEventBase_1<UnityEngine::UIElements::PointerEnterEvent> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xf0};

virtual ~PointerEnterEvent() = default;

// Ctor Parameters [CppParam { name: "", ty: "PointerEnterEvent", modifiers: " const&", def_value: None }]
constexpr PointerEnterEvent(PointerEnterEvent const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PointerEnterEvent", modifiers: "&&", def_value: None }]
constexpr PointerEnterEvent(PointerEnterEvent&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PointerEnterEvent(void* ptr) noexcept : UnityEngine::UIElements::PointerEventBase_1<UnityEngine::UIElements::PointerEnterEvent>(ptr) {
}


  constexpr PointerEnterEvent& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PointerEnterEvent& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PointerEnterEvent& operator=(PointerEnterEvent&& o) noexcept = default;
  constexpr PointerEnterEvent& operator=(PointerEnterEvent const& o) noexcept = default;
                


// Methods

/// @brief Method Init addr 0x2cd9378 size 0x54 virtual true final false
 void Init() ;

/// @brief Method LocalInit addr 0x2cd93cc size 0xc virtual false final false
 void LocalInit() ;

// Ctor Parameters []
explicit PointerEnterEvent() ;

/// @brief Method .ctor addr 0x2cd93d8 size 0x54 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(UnityEngine::UIElements::PointerEnterEvent);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::PointerEnterEvent, "UnityEngine.UIElements", "PointerEnterEvent");
