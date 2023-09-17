#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/UIElements/zzzz__KeyboardEventBase_1_def.hpp"
namespace {
// Forward declare root types
namespace UnityEngine::UIElements {
class KeyUpEvent;
}
// Type: UnityEngine.UIElements::KeyUpEvent
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7339)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7339), inst: 3803 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7341))
// CS Name: UnityEngine.UIElements.KeyUpEvent
class CORDL_TYPE KeyUpEvent : public ::UnityEngine::UIElements::KeyboardEventBase_1<::UnityEngine::UIElements::KeyUpEvent> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x88};

virtual ~KeyUpEvent() = default;

// Ctor Parameters [CppParam { name: "", ty: "KeyUpEvent", modifiers: " const&", def_value: None }]
constexpr KeyUpEvent(KeyUpEvent const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "KeyUpEvent", modifiers: "&&", def_value: None }]
constexpr KeyUpEvent(KeyUpEvent&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit KeyUpEvent(void* ptr) noexcept : ::UnityEngine::UIElements::KeyboardEventBase_1<::UnityEngine::UIElements::KeyUpEvent>(ptr) {
}


  constexpr KeyUpEvent& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr KeyUpEvent& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr KeyUpEvent& operator=(KeyUpEvent&& o) noexcept = default;
  constexpr KeyUpEvent& operator=(KeyUpEvent const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit KeyUpEvent() ;

/// @brief Method .ctor addr 0x2cdb8dc size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::UIElements::KeyUpEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::KeyUpEvent, "UnityEngine.UIElements", "KeyUpEvent");
