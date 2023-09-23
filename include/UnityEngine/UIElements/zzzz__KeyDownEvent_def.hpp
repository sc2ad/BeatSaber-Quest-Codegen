#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/UIElements/zzzz__KeyboardEventBase_1_def.hpp"
namespace UnityEngine {
class Event;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class KeyDownEvent;
}
// Type: UnityEngine.UIElements::KeyDownEvent
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7339), inst: 3802 }), TypeDefinitionIndex(TypeDefinitionIndex(7339))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7340))
// CS Name: UnityEngine.UIElements.KeyDownEvent
class CORDL_TYPE KeyDownEvent : public UnityEngine::UIElements::KeyboardEventBase_1<UnityEngine::UIElements::KeyDownEvent> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x88};

virtual ~KeyDownEvent() = default;

// Ctor Parameters [CppParam { name: "", ty: "KeyDownEvent", modifiers: " const&", def_value: None }]
constexpr KeyDownEvent(KeyDownEvent const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "KeyDownEvent", modifiers: "&&", def_value: None }]
constexpr KeyDownEvent(KeyDownEvent&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit KeyDownEvent(void* ptr) noexcept : UnityEngine::UIElements::KeyboardEventBase_1<UnityEngine::UIElements::KeyDownEvent>(ptr) {
}


  constexpr KeyDownEvent& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr KeyDownEvent& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr KeyDownEvent& operator=(KeyDownEvent&& o) noexcept = default;
  constexpr KeyDownEvent& operator=(KeyDownEvent const& o) noexcept = default;
                


// Methods

/// @brief Method GetEquivalentImguiEvent addr 0x2cdb7d4 size 0xc0 virtual false final false
 void GetEquivalentImguiEvent(UnityEngine::Event outImguiEvent) ;

// Ctor Parameters []
explicit KeyDownEvent() ;

/// @brief Method .ctor addr 0x2cdb894 size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(UnityEngine::UIElements::KeyDownEvent);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::KeyDownEvent, "UnityEngine.UIElements", "KeyDownEvent");
