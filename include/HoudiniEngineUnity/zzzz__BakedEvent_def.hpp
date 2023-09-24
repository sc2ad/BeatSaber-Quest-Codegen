#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_HoudiniAsset_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_3_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
// Forward declare root types
namespace HoudiniEngineUnity {
class BakedEvent;
}
// Type: HoudiniEngineUnity::BakedEvent
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10138)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10403), inst: 5059 }), TypeDefinitionIndex(TypeDefinitionIndex(10403)), TypeDefinitionIndex(TypeDefinitionIndex(9580)), TypeDefinitionIndex(TypeDefinitionIndex(3828)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3828), inst: 298 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9545))
// CS Name: HoudiniEngineUnity.BakedEvent
class CORDL_TYPE BakedEvent : public UnityEngine::Events::UnityEvent_3<HoudiniEngineUnity::HEU_HoudiniAsset,bool,System::Collections::Generic::List_1<UnityEngine::GameObject>> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~BakedEvent() = default;

// Ctor Parameters [CppParam { name: "", ty: "BakedEvent", modifiers: " const&", def_value: None }]
constexpr BakedEvent(BakedEvent const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BakedEvent", modifiers: "&&", def_value: None }]
constexpr BakedEvent(BakedEvent&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BakedEvent(void* ptr) noexcept : UnityEngine::Events::UnityEvent_3<HoudiniEngineUnity::HEU_HoudiniAsset,bool,System::Collections::Generic::List_1<UnityEngine::GameObject>>(ptr) {
}


  constexpr BakedEvent& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BakedEvent& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BakedEvent& operator=(BakedEvent&& o) noexcept = default;
  constexpr BakedEvent& operator=(BakedEvent const& o) noexcept = default;
                


// Methods

static HoudiniEngineUnity::BakedEvent New_ctor() ;

/// @brief Method .ctor addr 0x1fdac54 size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
NEED_NO_BOX(HoudiniEngineUnity::BakedEvent);
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::BakedEvent, "HoudiniEngineUnity", "BakedEvent");
