#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_ReloadEventData_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_1_def.hpp"
// Forward declare root types
namespace HoudiniEngineUnity {
class HEU_ReloadDataEvent;
}
// Type: HoudiniEngineUnity::HEU_ReloadDataEvent
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10401), inst: 5065 }), TypeDefinitionIndex(TypeDefinitionIndex(10401)), TypeDefinitionIndex(TypeDefinitionIndex(9537))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9542))
// CS Name: HoudiniEngineUnity.HEU_ReloadDataEvent
class CORDL_TYPE HEU_ReloadDataEvent : public UnityEngine::Events::UnityEvent_1<HoudiniEngineUnity::HEU_ReloadEventData> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~HEU_ReloadDataEvent() = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_ReloadDataEvent", modifiers: " const&", def_value: None }]
constexpr HEU_ReloadDataEvent(HEU_ReloadDataEvent const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_ReloadDataEvent", modifiers: "&&", def_value: None }]
constexpr HEU_ReloadDataEvent(HEU_ReloadDataEvent&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HEU_ReloadDataEvent(void* ptr) noexcept : UnityEngine::Events::UnityEvent_1<HoudiniEngineUnity::HEU_ReloadEventData>(ptr) {
}


  constexpr HEU_ReloadDataEvent& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HEU_ReloadDataEvent& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HEU_ReloadDataEvent& operator=(HEU_ReloadDataEvent&& o) noexcept = default;
  constexpr HEU_ReloadDataEvent& operator=(HEU_ReloadDataEvent const& o) noexcept = default;
                


// Methods

static HoudiniEngineUnity::HEU_ReloadDataEvent New_ctor() ;

/// @brief Method .ctor addr 0x1fdab7c size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
NEED_NO_BOX(HoudiniEngineUnity::HEU_ReloadDataEvent);
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HEU_ReloadDataEvent, "HoudiniEngineUnity", "HEU_ReloadDataEvent");
