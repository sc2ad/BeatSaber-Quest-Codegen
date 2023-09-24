#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/UIElements/zzzz__PointerEventBase_1_def.hpp"
// Forward declare root types
namespace UnityEngine::UIElements {
class PointerOverEvent;
}
// Type: UnityEngine.UIElements::PointerOverEvent
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7297), inst: 4685 }), TypeDefinitionIndex(TypeDefinitionIndex(7297))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7306))
// CS Name: UnityEngine.UIElements.PointerOverEvent
class CORDL_TYPE PointerOverEvent : public UnityEngine::UIElements::PointerEventBase_1<UnityEngine::UIElements::PointerOverEvent> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xf0};

virtual ~PointerOverEvent() = default;

// Ctor Parameters [CppParam { name: "", ty: "PointerOverEvent", modifiers: " const&", def_value: None }]
constexpr PointerOverEvent(PointerOverEvent const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PointerOverEvent", modifiers: "&&", def_value: None }]
constexpr PointerOverEvent(PointerOverEvent&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PointerOverEvent(void* ptr) noexcept : UnityEngine::UIElements::PointerEventBase_1<UnityEngine::UIElements::PointerOverEvent>(ptr) {
}


  constexpr PointerOverEvent& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PointerOverEvent& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PointerOverEvent& operator=(PointerOverEvent&& o) noexcept = default;
  constexpr PointerOverEvent& operator=(PointerOverEvent const& o) noexcept = default;
                


// Methods

static UnityEngine::UIElements::PointerOverEvent New_ctor() ;

/// @brief Method .ctor addr 0x2cd94e0 size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(UnityEngine::UIElements::PointerOverEvent);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::PointerOverEvent, "UnityEngine.UIElements", "PointerOverEvent");
