#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/UIElements/zzzz__FocusEventBase_1_def.hpp"
namespace {
// Forward declare root types
namespace UnityEngine::UIElements {
class FocusOutEvent;
}
// Type: UnityEngine.UIElements::FocusOutEvent
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7331)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7331), inst: 1904 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7332))
// CS Name: UnityEngine.UIElements.FocusOutEvent
class CORDL_TYPE FocusOutEvent : public ::UnityEngine::UIElements::FocusEventBase_1<::UnityEngine::UIElements::FocusOutEvent> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xa0};

virtual ~FocusOutEvent() = default;

// Ctor Parameters [CppParam { name: "", ty: "FocusOutEvent", modifiers: " const&", def_value: None }]
constexpr FocusOutEvent(FocusOutEvent const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "FocusOutEvent", modifiers: "&&", def_value: None }]
constexpr FocusOutEvent(FocusOutEvent&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit FocusOutEvent(void* ptr) noexcept : ::UnityEngine::UIElements::FocusEventBase_1<::UnityEngine::UIElements::FocusOutEvent>(ptr) {
}


  constexpr FocusOutEvent& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr FocusOutEvent& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr FocusOutEvent& operator=(FocusOutEvent&& o) noexcept = default;
  constexpr FocusOutEvent& operator=(FocusOutEvent const& o) noexcept = default;
                


// Methods

/// @brief Method Init addr 0x2cdabe4 size 0x54 virtual true final false
 void Init() ;

/// @brief Method LocalInit addr 0x2cdac38 size 0xc virtual false final false
 void LocalInit() ;

// Ctor Parameters []
explicit FocusOutEvent() ;

/// @brief Method .ctor addr 0x2cdac44 size 0x54 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::UIElements::FocusOutEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::FocusOutEvent, "UnityEngine.UIElements", "FocusOutEvent");
