#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace HoudiniEngineUnity {
struct HAPI_NodeInfo;
}
namespace HoudiniEngineUnity {
struct HAPI_ParmInfo;
}
namespace HoudiniEngineUnity {
struct HAPI_ImageInfo;
}
namespace HoudiniEngineUnity {
template<typename T>
class IEquivable_1;
}
namespace HoudiniEngineUnity {
struct HAPI_MaterialInfo;
}
namespace UnityEngine {
class Material;
}
namespace HoudiniEngineUnity {
class HEU_SessionBase;
}
// Forward declare root types
namespace HoudiniEngineUnity {
struct HoudiniEngineUnity__HEU_MaterialData__Source;
}
namespace HoudiniEngineUnity {
class HEU_MaterialData;
}
// Type: ::Source
namespace HoudiniEngineUnity {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9718))
// CS Name: HoudiniEngineUnity.HEU_MaterialData::Source
struct CORDL_TYPE HoudiniEngineUnity__HEU_MaterialData__Source : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr HoudiniEngineUnity__HEU_MaterialData__Source(int32_t value__) noexcept;


                    constexpr HoudiniEngineUnity__HEU_MaterialData__Source(HoudiniEngineUnity__HEU_MaterialData__Source const&) = default;
                    constexpr HoudiniEngineUnity__HEU_MaterialData__Source(HoudiniEngineUnity__HEU_MaterialData__Source&&) = default;
                    constexpr HoudiniEngineUnity__HEU_MaterialData__Source& operator=(HoudiniEngineUnity__HEU_MaterialData__Source const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr HoudiniEngineUnity__HEU_MaterialData__Source& operator=(HoudiniEngineUnity__HEU_MaterialData__Source&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit HoudiniEngineUnity__HEU_MaterialData__Source(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __HoudiniEngineUnity__HEU_MaterialData__Source_Unwrapped : int32_t {
__DEFAULT = 0,
__HOUDINI = 1,
__UNITY = 2,
__SUBSTANCE = 3,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __HoudiniEngineUnity__HEU_MaterialData__Source_Unwrapped () const noexcept {
return std::bit_cast<__HoudiniEngineUnity__HEU_MaterialData__Source_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field DEFAULT offset 0
static HoudiniEngineUnity::HoudiniEngineUnity__HEU_MaterialData__Source const DEFAULT;

/// @brief Field HOUDINI offset 0
static HoudiniEngineUnity::HoudiniEngineUnity__HEU_MaterialData__Source const HOUDINI;

/// @brief Field UNITY offset 0
static HoudiniEngineUnity::HoudiniEngineUnity__HEU_MaterialData__Source const UNITY;

/// @brief Field SUBSTANCE offset 0
static HoudiniEngineUnity::HoudiniEngineUnity__HEU_MaterialData__Source const SUBSTANCE;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
// Type: HoudiniEngineUnity::HEU_MaterialData
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10151))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9719))
// CS Name: HoudiniEngineUnity.HEU_MaterialData
class CORDL_TYPE HEU_MaterialData : public UnityEngine::ScriptableObject {
public:
// Declarations
using Source = HoudiniEngineUnity::HoudiniEngineUnity__HEU_MaterialData__Source;

/// @brief Convert operator to HoudiniEngineUnity::IEquivable_1<HoudiniEngineUnity::HEU_MaterialData>
constexpr operator  HoudiniEngineUnity::IEquivable_1<HoudiniEngineUnity::HEU_MaterialData>() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~HEU_MaterialData() = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_MaterialData", modifiers: " const&", def_value: None }]
constexpr HEU_MaterialData(HEU_MaterialData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_MaterialData", modifiers: "&&", def_value: None }]
constexpr HEU_MaterialData(HEU_MaterialData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HEU_MaterialData(void* ptr) noexcept : UnityEngine::ScriptableObject(ptr) {
}


  constexpr HEU_MaterialData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HEU_MaterialData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HEU_MaterialData& operator=(HEU_MaterialData&& o) noexcept = default;
  constexpr HEU_MaterialData& operator=(HEU_MaterialData const& o) noexcept = default;
                


// Fields

 UnityEngine::Material __declspec(property(get=__get__material, put=__set__material))  _material;

constexpr void __set__material(UnityEngine::Material value) ;

constexpr UnityEngine::Material __get__material() const;

 HoudiniEngineUnity::HoudiniEngineUnity__HEU_MaterialData__Source __declspec(property(get=__get__materialSource, put=__set__materialSource))  _materialSource;

constexpr void __set__materialSource(HoudiniEngineUnity::HoudiniEngineUnity__HEU_MaterialData__Source value) ;

constexpr HoudiniEngineUnity::HoudiniEngineUnity__HEU_MaterialData__Source __get__materialSource() const;

 int32_t __declspec(property(get=__get__materialKey, put=__set__materialKey))  _materialKey;

constexpr void __set__materialKey(int32_t value) ;

constexpr int32_t __get__materialKey() const;


// Methods

/// @brief Method IsExistingMaterial addr 0x202bd18 size 0x14 virtual false final false
 bool IsExistingMaterial() ;

/// @brief Method UpdateMaterialFromHoudini addr 0x202bd2c size 0xf40 virtual false final false
 void UpdateMaterialFromHoudini(HoudiniEngineUnity::HAPI_MaterialInfo materialInfo, ::StringW assetCacheFolderPath) ;

/// @brief Method UseLegacyShaders addr 0x202cce8 size 0x5d8 virtual false final false
 void UseLegacyShaders(HoudiniEngineUnity::HAPI_MaterialInfo materialInfo, ::StringW assetCacheFolderPath, HoudiniEngineUnity::HEU_SessionBase session, HoudiniEngineUnity::HAPI_NodeInfo nodeInfo, ::ArrayW<HoudiniEngineUnity::HAPI_ParmInfo> parmInfos) ;

/// @brief Method GetTextureFileNameFromMaterialParam addr 0x202d2c0 size 0x24c virtual false final false
static ::StringW GetTextureFileNameFromMaterialParam(HoudiniEngineUnity::HEU_SessionBase session, int32_t nodeID, HoudiniEngineUnity::HAPI_ParmInfo parmInfo) ;

/// @brief Method IsTransparentMaterial addr 0x202cc6c size 0x30 virtual false final false
static bool IsTransparentMaterial(HoudiniEngineUnity::HEU_SessionBase session, int32_t nodeID, ::ArrayW<HoudiniEngineUnity::HAPI_ParmInfo> parameters) ;

/// @brief Method GetMaterialAlpha addr 0x202d97c size 0x1d8 virtual false final false
static bool GetMaterialAlpha(HoudiniEngineUnity::HEU_SessionBase session, int32_t nodeID, ::ArrayW<HoudiniEngineUnity::HAPI_ParmInfo> parameters, float_t defaultValue, ByRef<float_t> alpha) ;

/// @brief Method GetSupportedFileFormat addr 0x202db54 size 0x124 virtual false final false
static ::StringW GetSupportedFileFormat(HoudiniEngineUnity::HEU_SessionBase session, ByRef<HoudiniEngineUnity::HAPI_ImageInfo> imageInfo) ;

/// @brief Method IsEquivalentTo addr 0x202dc78 size 0x1c8 virtual true final true
 bool IsEquivalentTo(HoudiniEngineUnity::HEU_MaterialData other) ;

// Ctor Parameters []
explicit HEU_MaterialData() ;

/// @brief Method .ctor addr 0x202de40 size 0x10 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HoudiniEngineUnity__HEU_MaterialData__Source, "HoudiniEngineUnity", "HEU_MaterialData/Source");
NEED_NO_BOX(HoudiniEngineUnity::HEU_MaterialData);
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HEU_MaterialData, "HoudiniEngineUnity", "HEU_MaterialData");
