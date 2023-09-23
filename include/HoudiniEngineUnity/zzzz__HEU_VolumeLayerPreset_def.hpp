#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
// Forward declare root types
namespace HoudiniEngineUnity {
class HEU_VolumeLayerPreset;
}
// Type: HoudiniEngineUnity::HEU_VolumeLayerPreset
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9552))
// CS Name: HoudiniEngineUnity.HEU_VolumeLayerPreset
class CORDL_TYPE HEU_VolumeLayerPreset : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~HEU_VolumeLayerPreset() = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_VolumeLayerPreset", modifiers: " const&", def_value: None }]
constexpr HEU_VolumeLayerPreset(HEU_VolumeLayerPreset const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_VolumeLayerPreset", modifiers: "&&", def_value: None }]
constexpr HEU_VolumeLayerPreset(HEU_VolumeLayerPreset&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HEU_VolumeLayerPreset(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr HEU_VolumeLayerPreset& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HEU_VolumeLayerPreset& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HEU_VolumeLayerPreset& operator=(HEU_VolumeLayerPreset&& o) noexcept = default;
  constexpr HEU_VolumeLayerPreset& operator=(HEU_VolumeLayerPreset const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__layerName, put=__set__layerName))  _layerName;

constexpr void __set__layerName(::StringW value) ;

constexpr ::StringW __get__layerName() const;

 float_t __declspec(property(get=__get__strength, put=__set__strength))  _strength;

constexpr void __set__strength(float_t value) ;

constexpr float_t __get__strength() const;

 bool __declspec(property(get=__get__uiExpanded, put=__set__uiExpanded))  _uiExpanded;

constexpr void __set__uiExpanded(bool value) ;

constexpr bool __get__uiExpanded() const;

 int32_t __declspec(property(get=__get__tile, put=__set__tile))  _tile;

constexpr void __set__tile(int32_t value) ;

constexpr int32_t __get__tile() const;


// Methods

// Ctor Parameters []
explicit HEU_VolumeLayerPreset() ;

/// @brief Method .ctor addr 0x1fdafe4 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
NEED_NO_BOX(HoudiniEngineUnity::HEU_VolumeLayerPreset);
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HEU_VolumeLayerPreset, "HoudiniEngineUnity", "HEU_VolumeLayerPreset");
