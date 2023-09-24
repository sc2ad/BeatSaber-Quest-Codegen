#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_AssetEventData_def.hpp"
namespace HoudiniEngineUnity {
class HEU_HoudiniAsset;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class HEU_CookedEventData;
}
// Type: HoudiniEngineUnity::HEU_CookedEventData
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9536))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9538))
// CS Name: HoudiniEngineUnity.HEU_CookedEventData
class CORDL_TYPE HEU_CookedEventData : public HoudiniEngineUnity::HEU_AssetEventData {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~HEU_CookedEventData() = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_CookedEventData", modifiers: " const&", def_value: None }]
constexpr HEU_CookedEventData(HEU_CookedEventData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_CookedEventData", modifiers: "&&", def_value: None }]
constexpr HEU_CookedEventData(HEU_CookedEventData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HEU_CookedEventData(void* ptr) noexcept : HoudiniEngineUnity::HEU_AssetEventData(ptr) {
}


  constexpr HEU_CookedEventData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HEU_CookedEventData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HEU_CookedEventData& operator=(HEU_CookedEventData&& o) noexcept = default;
  constexpr HEU_CookedEventData& operator=(HEU_CookedEventData const& o) noexcept = default;
                


// Methods

static HoudiniEngineUnity::HEU_CookedEventData New_ctor(HoudiniEngineUnity::HEU_HoudiniAsset asset, bool successful, System::Collections::Generic::List_1<UnityEngine::GameObject> outputObjects) ;

/// @brief Method .ctor addr 0x1fdaa50 size 0x48 virtual false final false
 void _ctor(HoudiniEngineUnity::HEU_HoudiniAsset asset, bool successful, System::Collections::Generic::List_1<UnityEngine::GameObject> outputObjects) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
NEED_NO_BOX(HoudiniEngineUnity::HEU_CookedEventData);
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HEU_CookedEventData, "HoudiniEngineUnity", "HEU_CookedEventData");
