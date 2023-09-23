#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_AssetEventData_def.hpp"
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace HoudiniEngineUnity {
class HEU_HoudiniAsset;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class HEU_ReloadEventData;
}
// Type: HoudiniEngineUnity::HEU_ReloadEventData
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9536))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9537))
// CS Name: HoudiniEngineUnity.HEU_ReloadEventData
class CORDL_TYPE HEU_ReloadEventData : public HoudiniEngineUnity::HEU_AssetEventData {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~HEU_ReloadEventData() = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_ReloadEventData", modifiers: " const&", def_value: None }]
constexpr HEU_ReloadEventData(HEU_ReloadEventData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_ReloadEventData", modifiers: "&&", def_value: None }]
constexpr HEU_ReloadEventData(HEU_ReloadEventData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HEU_ReloadEventData(void* ptr) noexcept : HoudiniEngineUnity::HEU_AssetEventData(ptr) {
}


  constexpr HEU_ReloadEventData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HEU_ReloadEventData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HEU_ReloadEventData& operator=(HEU_ReloadEventData&& o) noexcept = default;
  constexpr HEU_ReloadEventData& operator=(HEU_ReloadEventData const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "asset", ty: "HoudiniEngineUnity::HEU_HoudiniAsset", modifiers: "", def_value: None }, CppParam { name: "successful", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "outputObjects", ty: "System::Collections::Generic::List_1<UnityEngine::GameObject>", modifiers: "", def_value: None }]
explicit HEU_ReloadEventData(HoudiniEngineUnity::HEU_HoudiniAsset asset, bool successful, System::Collections::Generic::List_1<UnityEngine::GameObject> outputObjects) ;

/// @brief Method .ctor addr 0x1fdaa08 size 0x48 virtual false final false
 void _ctor(HoudiniEngineUnity::HEU_HoudiniAsset asset, bool successful, System::Collections::Generic::List_1<UnityEngine::GameObject> outputObjects) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
NEED_NO_BOX(HoudiniEngineUnity::HEU_ReloadEventData);
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HEU_ReloadEventData, "HoudiniEngineUnity", "HEU_ReloadEventData");
