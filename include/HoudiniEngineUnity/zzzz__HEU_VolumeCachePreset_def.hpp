#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace HoudiniEngineUnity {
class HEU_VolumeLayerPreset;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class HEU_VolumeCachePreset;
}
// Type: HoudiniEngineUnity::HEU_VolumeCachePreset
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9553))
// CS Name: HoudiniEngineUnity.HEU_VolumeCachePreset
class CORDL_TYPE HEU_VolumeCachePreset : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~HEU_VolumeCachePreset() = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_VolumeCachePreset", modifiers: " const&", def_value: None }]
constexpr HEU_VolumeCachePreset(HEU_VolumeCachePreset const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_VolumeCachePreset", modifiers: "&&", def_value: None }]
constexpr HEU_VolumeCachePreset(HEU_VolumeCachePreset&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HEU_VolumeCachePreset(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr HEU_VolumeCachePreset& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HEU_VolumeCachePreset& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HEU_VolumeCachePreset& operator=(HEU_VolumeCachePreset&& o) noexcept = default;
  constexpr HEU_VolumeCachePreset& operator=(HEU_VolumeCachePreset const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__objName, put=__set__objName))  _objName;

constexpr void __set__objName(::StringW value) ;

constexpr ::StringW __get__objName() const;

 ::StringW __declspec(property(get=__get__geoName, put=__set__geoName))  _geoName;

constexpr void __set__geoName(::StringW value) ;

constexpr ::StringW __get__geoName() const;

 bool __declspec(property(get=__get__uiExpanded, put=__set__uiExpanded))  _uiExpanded;

constexpr void __set__uiExpanded(bool value) ;

constexpr bool __get__uiExpanded() const;

 System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_VolumeLayerPreset> __declspec(property(get=__get__volumeLayersPresets, put=__set__volumeLayersPresets))  _volumeLayersPresets;

constexpr void __set__volumeLayersPresets(System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_VolumeLayerPreset> value) ;

constexpr System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_VolumeLayerPreset> __get__volumeLayersPresets() const;

 ::StringW __declspec(property(get=__get__terrainDataPath, put=__set__terrainDataPath))  _terrainDataPath;

constexpr void __set__terrainDataPath(::StringW value) ;

constexpr ::StringW __get__terrainDataPath() const;

 int32_t __declspec(property(get=__get__tile, put=__set__tile))  _tile;

constexpr void __set__tile(int32_t value) ;

constexpr int32_t __get__tile() const;


// Methods

static HoudiniEngineUnity::HEU_VolumeCachePreset New_ctor() ;

/// @brief Method .ctor addr 0x1fdafec size 0x7c virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
NEED_NO_BOX(HoudiniEngineUnity::HEU_VolumeCachePreset);
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HEU_VolumeCachePreset, "HoudiniEngineUnity", "HEU_VolumeCachePreset");
