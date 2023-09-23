#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/UIElements/zzzz__CommandEventBase_1_def.hpp"
// Forward declare root types
namespace UnityEngine::UIElements {
class ExecuteCommandEvent;
}
// Type: UnityEngine.UIElements::ExecuteCommandEvent
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7328), inst: 994 }), TypeDefinitionIndex(TypeDefinitionIndex(7328))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7330))
// CS Name: UnityEngine.UIElements.ExecuteCommandEvent
class CORDL_TYPE ExecuteCommandEvent : public UnityEngine::UIElements::CommandEventBase_1<UnityEngine::UIElements::ExecuteCommandEvent> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x88};

virtual ~ExecuteCommandEvent() = default;

// Ctor Parameters [CppParam { name: "", ty: "ExecuteCommandEvent", modifiers: " const&", def_value: None }]
constexpr ExecuteCommandEvent(ExecuteCommandEvent const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ExecuteCommandEvent", modifiers: "&&", def_value: None }]
constexpr ExecuteCommandEvent(ExecuteCommandEvent&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ExecuteCommandEvent(void* ptr) noexcept : UnityEngine::UIElements::CommandEventBase_1<UnityEngine::UIElements::ExecuteCommandEvent>(ptr) {
}


  constexpr ExecuteCommandEvent& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ExecuteCommandEvent& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ExecuteCommandEvent& operator=(ExecuteCommandEvent&& o) noexcept = default;
  constexpr ExecuteCommandEvent& operator=(ExecuteCommandEvent const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit ExecuteCommandEvent() ;

/// @brief Method .ctor addr 0x2cdab9c size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(UnityEngine::UIElements::ExecuteCommandEvent);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::ExecuteCommandEvent, "UnityEngine.UIElements", "ExecuteCommandEvent");
