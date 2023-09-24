#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_BakedEventData_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_1_def.hpp"
// Forward declare root types
namespace HoudiniEngineUnity {
class HEU_BakedDataEvent;
}
// Type: HoudiniEngineUnity::HEU_BakedDataEvent
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10401), inst: 5062 }), TypeDefinitionIndex(TypeDefinitionIndex(9539)), TypeDefinitionIndex(TypeDefinitionIndex(10401))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9546))
// CS Name: HoudiniEngineUnity.HEU_BakedDataEvent
class CORDL_TYPE HEU_BakedDataEvent : public UnityEngine::Events::UnityEvent_1<HoudiniEngineUnity::HEU_BakedEventData> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~HEU_BakedDataEvent() = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_BakedDataEvent", modifiers: " const&", def_value: None }]
constexpr HEU_BakedDataEvent(HEU_BakedDataEvent const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_BakedDataEvent", modifiers: "&&", def_value: None }]
constexpr HEU_BakedDataEvent(HEU_BakedDataEvent&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HEU_BakedDataEvent(void* ptr) noexcept : UnityEngine::Events::UnityEvent_1<HoudiniEngineUnity::HEU_BakedEventData>(ptr) {
}


  constexpr HEU_BakedDataEvent& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HEU_BakedDataEvent& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HEU_BakedDataEvent& operator=(HEU_BakedDataEvent&& o) noexcept = default;
  constexpr HEU_BakedDataEvent& operator=(HEU_BakedDataEvent const& o) noexcept = default;
                


// Methods

static HoudiniEngineUnity::HEU_BakedDataEvent New_ctor() ;

/// @brief Method .ctor addr 0x1fdac9c size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
NEED_NO_BOX(HoudiniEngineUnity::HEU_BakedDataEvent);
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HEU_BakedDataEvent, "HoudiniEngineUnity", "HEU_BakedDataEvent");
