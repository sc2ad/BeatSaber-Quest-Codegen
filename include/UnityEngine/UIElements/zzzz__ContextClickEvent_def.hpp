#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/UIElements/zzzz__MouseEventBase_1_def.hpp"
// Forward declare root types
namespace UnityEngine::UIElements {
class ContextClickEvent;
}
// Type: UnityEngine.UIElements::ContextClickEvent
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7314)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7314), inst: 4503 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7318))
// CS Name: UnityEngine.UIElements.ContextClickEvent
class CORDL_TYPE ContextClickEvent : public UnityEngine::UIElements::MouseEventBase_1<UnityEngine::UIElements::ContextClickEvent> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xb0};

virtual ~ContextClickEvent() = default;

// Ctor Parameters [CppParam { name: "", ty: "ContextClickEvent", modifiers: " const&", def_value: None }]
constexpr ContextClickEvent(ContextClickEvent const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ContextClickEvent", modifiers: "&&", def_value: None }]
constexpr ContextClickEvent(ContextClickEvent&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ContextClickEvent(void* ptr) noexcept : UnityEngine::UIElements::MouseEventBase_1<UnityEngine::UIElements::ContextClickEvent>(ptr) {
}


  constexpr ContextClickEvent& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ContextClickEvent& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ContextClickEvent& operator=(ContextClickEvent&& o) noexcept = default;
  constexpr ContextClickEvent& operator=(ContextClickEvent const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit ContextClickEvent() ;

/// @brief Method .ctor addr 0x2cd9fe0 size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(UnityEngine::UIElements::ContextClickEvent);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::ContextClickEvent, "UnityEngine.UIElements", "ContextClickEvent");
