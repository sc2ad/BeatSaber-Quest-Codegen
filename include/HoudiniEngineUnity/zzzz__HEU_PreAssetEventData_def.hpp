#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace HoudiniEngineUnity {
class HEU_HoudiniAsset;
}
namespace HoudiniEngineUnity {
struct HEU_AssetEventType;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class HEU_PreAssetEventData;
}
// Type: HoudiniEngineUnity::HEU_PreAssetEventData
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9540))
// CS Name: HoudiniEngineUnity.HEU_PreAssetEventData
class CORDL_TYPE HEU_PreAssetEventData : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~HEU_PreAssetEventData() = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_PreAssetEventData", modifiers: " const&", def_value: None }]
constexpr HEU_PreAssetEventData(HEU_PreAssetEventData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_PreAssetEventData", modifiers: "&&", def_value: None }]
constexpr HEU_PreAssetEventData(HEU_PreAssetEventData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HEU_PreAssetEventData(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr HEU_PreAssetEventData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HEU_PreAssetEventData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HEU_PreAssetEventData& operator=(HEU_PreAssetEventData&& o) noexcept = default;
  constexpr HEU_PreAssetEventData& operator=(HEU_PreAssetEventData const& o) noexcept = default;
                


// Fields

 HoudiniEngineUnity::HEU_HoudiniAsset __declspec(property(get=__get_Asset, put=__set_Asset))  Asset;

constexpr void __set_Asset(HoudiniEngineUnity::HEU_HoudiniAsset value) ;

constexpr HoudiniEngineUnity::HEU_HoudiniAsset __get_Asset() const;

 HoudiniEngineUnity::HEU_AssetEventType __declspec(property(get=__get_AssetType, put=__set_AssetType))  AssetType;

constexpr void __set_AssetType(HoudiniEngineUnity::HEU_AssetEventType value) ;

constexpr HoudiniEngineUnity::HEU_AssetEventType __get_AssetType() const;


// Methods

static HoudiniEngineUnity::HEU_PreAssetEventData New_ctor(HoudiniEngineUnity::HEU_HoudiniAsset asset, HoudiniEngineUnity::HEU_AssetEventType assetType) ;

/// @brief Method .ctor addr 0x1fdab04 size 0x30 virtual false final false
 void _ctor(HoudiniEngineUnity::HEU_HoudiniAsset asset, HoudiniEngineUnity::HEU_AssetEventType assetType) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
NEED_NO_BOX(HoudiniEngineUnity::HEU_PreAssetEventData);
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HEU_PreAssetEventData, "HoudiniEngineUnity", "HEU_PreAssetEventData");
