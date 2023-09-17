#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/UIElements/zzzz__PointerEventBase_1_def.hpp"
namespace {
// Forward declare root types
namespace UnityEngine::UIElements {
class PointerOutEvent;
}
// Type: UnityEngine.UIElements::PointerOutEvent
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7297)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7297), inst: 4684 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7307))
// CS Name: UnityEngine.UIElements.PointerOutEvent
class CORDL_TYPE PointerOutEvent : public ::UnityEngine::UIElements::PointerEventBase_1<::UnityEngine::UIElements::PointerOutEvent> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xf0};

virtual ~PointerOutEvent() = default;

// Ctor Parameters [CppParam { name: "", ty: "PointerOutEvent", modifiers: " const&", def_value: None }]
constexpr PointerOutEvent(PointerOutEvent const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PointerOutEvent", modifiers: "&&", def_value: None }]
constexpr PointerOutEvent(PointerOutEvent&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PointerOutEvent(void* ptr) noexcept : ::UnityEngine::UIElements::PointerEventBase_1<::UnityEngine::UIElements::PointerOutEvent>(ptr) {
}


  constexpr PointerOutEvent& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PointerOutEvent& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PointerOutEvent& operator=(PointerOutEvent&& o) noexcept = default;
  constexpr PointerOutEvent& operator=(PointerOutEvent const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit PointerOutEvent() ;

/// @brief Method .ctor addr 0x2cd9528 size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::UIElements::PointerOutEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::PointerOutEvent, "UnityEngine.UIElements", "PointerOutEvent");
