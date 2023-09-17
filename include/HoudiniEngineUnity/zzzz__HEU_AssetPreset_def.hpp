#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace HoudiniEngineUnity {
class HEU_VolumeCachePreset;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace HoudiniEngineUnity {
class HEU_InputPreset;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class HEU_AssetPreset;
}
// Type: HoudiniEngineUnity::HEU_AssetPreset
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9548))
// CS Name: HoudiniEngineUnity.HEU_AssetPreset
class CORDL_TYPE HEU_AssetPreset : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~HEU_AssetPreset() = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_AssetPreset", modifiers: " const&", def_value: None }]
constexpr HEU_AssetPreset(HEU_AssetPreset const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_AssetPreset", modifiers: "&&", def_value: None }]
constexpr HEU_AssetPreset(HEU_AssetPreset&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HEU_AssetPreset(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr HEU_AssetPreset& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HEU_AssetPreset& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HEU_AssetPreset& operator=(HEU_AssetPreset&& o) noexcept = default;
  constexpr HEU_AssetPreset& operator=(HEU_AssetPreset const& o) noexcept = default;
                


// Fields

 ::ArrayW<char16_t> __declspec(property(get=__get__identifier, put=__set__identifier))  _identifier;

constexpr void __set__identifier(::ArrayW<char16_t> value) ;

constexpr ::ArrayW<char16_t> __get__identifier() const;

 int32_t __declspec(property(get=__get__version, put=__set__version))  _version;

constexpr void __set__version(int32_t value) ;

constexpr int32_t __get__version() const;

 ::StringW __declspec(property(get=__get__assetOPName, put=__set__assetOPName))  _assetOPName;

constexpr void __set__assetOPName(::StringW value) ;

constexpr ::StringW __get__assetOPName() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get__parameterPreset, put=__set__parameterPreset))  _parameterPreset;

constexpr void __set__parameterPreset(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get__parameterPreset() const;

 ::System::Collections::Generic::List_1<::StringW> __declspec(property(get=__get__curveNames, put=__set__curveNames))  _curveNames;

constexpr void __set__curveNames(::System::Collections::Generic::List_1<::StringW> value) ;

constexpr ::System::Collections::Generic::List_1<::StringW> __get__curveNames() const;

 ::System::Collections::Generic::List_1<::ArrayW<uint8_t>> __declspec(property(get=__get__curvePresets, put=__set__curvePresets))  _curvePresets;

constexpr void __set__curvePresets(::System::Collections::Generic::List_1<::ArrayW<uint8_t>> value) ;

constexpr ::System::Collections::Generic::List_1<::ArrayW<uint8_t>> __get__curvePresets() const;

 ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InputPreset> __declspec(property(get=__get_inputPresets, put=__set_inputPresets))  inputPresets;

constexpr void __set_inputPresets(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InputPreset> value) ;

constexpr ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InputPreset> __get_inputPresets() const;

 ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_VolumeCachePreset> __declspec(property(get=__get_volumeCachePresets, put=__set_volumeCachePresets))  volumeCachePresets;

constexpr void __set_volumeCachePresets(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_VolumeCachePreset> value) ;

constexpr ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_VolumeCachePreset> __get_volumeCachePresets() const;


// Methods

// Ctor Parameters []
explicit HEU_AssetPreset() ;

/// @brief Method .ctor addr 0x1fdad2c size 0x148 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
} // end anonymous namespace
NEED_NO_BOX(::HoudiniEngineUnity::HEU_AssetPreset);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_AssetPreset, "HoudiniEngineUnity", "HEU_AssetPreset");
