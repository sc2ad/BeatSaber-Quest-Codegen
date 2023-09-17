#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/UIElements/zzzz__PointerEventBase_1_def.hpp"
namespace {
namespace UnityEngine::UIElements {
class IPanel;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class PointerCancelEvent;
}
// Type: UnityEngine.UIElements::PointerCancelEvent
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7297), inst: 4680 }), TypeDefinitionIndex(TypeDefinitionIndex(7297))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7302))
// CS Name: UnityEngine.UIElements.PointerCancelEvent
class CORDL_TYPE PointerCancelEvent : public ::UnityEngine::UIElements::PointerEventBase_1<::UnityEngine::UIElements::PointerCancelEvent> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xf0};

virtual ~PointerCancelEvent() = default;

// Ctor Parameters [CppParam { name: "", ty: "PointerCancelEvent", modifiers: " const&", def_value: None }]
constexpr PointerCancelEvent(PointerCancelEvent const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PointerCancelEvent", modifiers: "&&", def_value: None }]
constexpr PointerCancelEvent(PointerCancelEvent&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PointerCancelEvent(void* ptr) noexcept : ::UnityEngine::UIElements::PointerEventBase_1<::UnityEngine::UIElements::PointerCancelEvent>(ptr) {
}


  constexpr PointerCancelEvent& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PointerCancelEvent& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PointerCancelEvent& operator=(PointerCancelEvent&& o) noexcept = default;
  constexpr PointerCancelEvent& operator=(PointerCancelEvent const& o) noexcept = default;
                


// Methods

/// @brief Method Init addr 0x2cd8d7c size 0x50 virtual true final false
 void Init() ;

/// @brief Method LocalInit addr 0x2cd8dcc size 0x104 virtual false final false
 void LocalInit() ;

// Ctor Parameters []
explicit PointerCancelEvent() ;

/// @brief Method .ctor addr 0x2cd8ed0 size 0x50 virtual false final false
 void _ctor() ;

/// @brief Method PostDispatch addr 0x2cd8f20 size 0x330 virtual true final false
 void PostDispatch(::UnityEngine::UIElements::IPanel panel) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::UIElements::PointerCancelEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::PointerCancelEvent, "UnityEngine.UIElements", "PointerCancelEvent");
