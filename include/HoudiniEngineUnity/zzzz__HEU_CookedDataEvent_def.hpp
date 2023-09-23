#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_CookedEventData_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_1_def.hpp"
// Forward declare root types
namespace HoudiniEngineUnity {
class HEU_CookedDataEvent;
}
// Type: HoudiniEngineUnity::HEU_CookedDataEvent
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10401), inst: 5063 }), TypeDefinitionIndex(TypeDefinitionIndex(9538)), TypeDefinitionIndex(TypeDefinitionIndex(10401))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9544))
// CS Name: HoudiniEngineUnity.HEU_CookedDataEvent
class CORDL_TYPE HEU_CookedDataEvent : public UnityEngine::Events::UnityEvent_1<HoudiniEngineUnity::HEU_CookedEventData> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~HEU_CookedDataEvent() = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_CookedDataEvent", modifiers: " const&", def_value: None }]
constexpr HEU_CookedDataEvent(HEU_CookedDataEvent const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_CookedDataEvent", modifiers: "&&", def_value: None }]
constexpr HEU_CookedDataEvent(HEU_CookedDataEvent&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HEU_CookedDataEvent(void* ptr) noexcept : UnityEngine::Events::UnityEvent_1<HoudiniEngineUnity::HEU_CookedEventData>(ptr) {
}


  constexpr HEU_CookedDataEvent& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HEU_CookedDataEvent& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HEU_CookedDataEvent& operator=(HEU_CookedDataEvent&& o) noexcept = default;
  constexpr HEU_CookedDataEvent& operator=(HEU_CookedDataEvent const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit HEU_CookedDataEvent() ;

/// @brief Method .ctor addr 0x1fdac0c size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
NEED_NO_BOX(HoudiniEngineUnity::HEU_CookedDataEvent);
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HEU_CookedDataEvent, "HoudiniEngineUnity", "HEU_CookedDataEvent");
