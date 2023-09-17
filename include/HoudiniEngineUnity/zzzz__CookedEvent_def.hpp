#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_HoudiniAsset_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_3_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
namespace {
// Forward declare root types
namespace HoudiniEngineUnity {
class CookedEvent;
}
// Type: HoudiniEngineUnity::CookedEvent
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3828)), TypeDefinitionIndex(TypeDefinitionIndex(10138)), TypeDefinitionIndex(TypeDefinitionIndex(9580)), TypeDefinitionIndex(TypeDefinitionIndex(10403)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3828), inst: 298 }), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10403), inst: 5059 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9543))
// CS Name: HoudiniEngineUnity.CookedEvent
class CORDL_TYPE CookedEvent : public ::UnityEngine::Events::UnityEvent_3<::HoudiniEngineUnity::HEU_HoudiniAsset,bool,::System::Collections::Generic::List_1<::UnityEngine::GameObject>> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~CookedEvent() = default;

// Ctor Parameters [CppParam { name: "", ty: "CookedEvent", modifiers: " const&", def_value: None }]
constexpr CookedEvent(CookedEvent const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CookedEvent", modifiers: "&&", def_value: None }]
constexpr CookedEvent(CookedEvent&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CookedEvent(void* ptr) noexcept : ::UnityEngine::Events::UnityEvent_3<::HoudiniEngineUnity::HEU_HoudiniAsset,bool,::System::Collections::Generic::List_1<::UnityEngine::GameObject>>(ptr) {
}


  constexpr CookedEvent& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CookedEvent& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CookedEvent& operator=(CookedEvent&& o) noexcept = default;
  constexpr CookedEvent& operator=(CookedEvent const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit CookedEvent() ;

/// @brief Method .ctor addr 0x1fdabc4 size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
} // end anonymous namespace
NEED_NO_BOX(::HoudiniEngineUnity::CookedEvent);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::CookedEvent, "HoudiniEngineUnity", "CookedEvent");
