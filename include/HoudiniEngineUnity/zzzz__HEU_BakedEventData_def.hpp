#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_AssetEventData_def.hpp"
namespace HoudiniEngineUnity {
class HEU_HoudiniAsset;
}
namespace UnityEngine {
class GameObject;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class HEU_BakedEventData;
}
// Type: HoudiniEngineUnity::HEU_BakedEventData
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9536))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9539))
// CS Name: HoudiniEngineUnity.HEU_BakedEventData
class CORDL_TYPE HEU_BakedEventData : public HoudiniEngineUnity::HEU_AssetEventData {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~HEU_BakedEventData() = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_BakedEventData", modifiers: " const&", def_value: None }]
constexpr HEU_BakedEventData(HEU_BakedEventData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_BakedEventData", modifiers: "&&", def_value: None }]
constexpr HEU_BakedEventData(HEU_BakedEventData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HEU_BakedEventData(void* ptr) noexcept : HoudiniEngineUnity::HEU_AssetEventData(ptr) {
}


  constexpr HEU_BakedEventData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HEU_BakedEventData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HEU_BakedEventData& operator=(HEU_BakedEventData&& o) noexcept = default;
  constexpr HEU_BakedEventData& operator=(HEU_BakedEventData const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get_IsNewBake, put=__set_IsNewBake))  IsNewBake;

constexpr void __set_IsNewBake(bool value) ;

constexpr bool __get_IsNewBake() const;


// Methods

static HoudiniEngineUnity::HEU_BakedEventData New_ctor(HoudiniEngineUnity::HEU_HoudiniAsset asset, bool successful, System::Collections::Generic::List_1<UnityEngine::GameObject> outputObjects, bool isNewBake) ;

/// @brief Method .ctor addr 0x1fdaa98 size 0x6c virtual false final false
 void _ctor(HoudiniEngineUnity::HEU_HoudiniAsset asset, bool successful, System::Collections::Generic::List_1<UnityEngine::GameObject> outputObjects, bool isNewBake) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
NEED_NO_BOX(HoudiniEngineUnity::HEU_BakedEventData);
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HEU_BakedEventData, "HoudiniEngineUnity", "HEU_BakedEventData");
