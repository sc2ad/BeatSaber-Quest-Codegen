#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/UIElements/zzzz__CommandEventBase_1_def.hpp"
// Forward declare root types
namespace UnityEngine::UIElements {
class ValidateCommandEvent;
}
// Type: UnityEngine.UIElements::ValidateCommandEvent
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7328), inst: 995 }), TypeDefinitionIndex(TypeDefinitionIndex(7328))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7329))
// CS Name: UnityEngine.UIElements.ValidateCommandEvent
class CORDL_TYPE ValidateCommandEvent : public UnityEngine::UIElements::CommandEventBase_1<UnityEngine::UIElements::ValidateCommandEvent> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x88};

virtual ~ValidateCommandEvent() = default;

// Ctor Parameters [CppParam { name: "", ty: "ValidateCommandEvent", modifiers: " const&", def_value: None }]
constexpr ValidateCommandEvent(ValidateCommandEvent const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ValidateCommandEvent", modifiers: "&&", def_value: None }]
constexpr ValidateCommandEvent(ValidateCommandEvent&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ValidateCommandEvent(void* ptr) noexcept : UnityEngine::UIElements::CommandEventBase_1<UnityEngine::UIElements::ValidateCommandEvent>(ptr) {
}


  constexpr ValidateCommandEvent& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ValidateCommandEvent& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ValidateCommandEvent& operator=(ValidateCommandEvent&& o) noexcept = default;
  constexpr ValidateCommandEvent& operator=(ValidateCommandEvent const& o) noexcept = default;
                


// Methods

static UnityEngine::UIElements::ValidateCommandEvent New_ctor() ;

/// @brief Method .ctor addr 0x2cdab54 size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(UnityEngine::UIElements::ValidateCommandEvent);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::ValidateCommandEvent, "UnityEngine.UIElements", "ValidateCommandEvent");
