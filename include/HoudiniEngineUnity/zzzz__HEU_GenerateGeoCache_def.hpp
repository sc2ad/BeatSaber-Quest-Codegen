#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace UnityEngine {
class Material;
}
namespace HoudiniEngineUnity {
class HEU_GeoGroup;
}
namespace UnityEngine {
class Mesh;
}
namespace HoudiniEngineUnity {
class HoudiniEngineUnity__HEU_GenerateGeoCache____c;
}
namespace HoudiniEngineUnity {
class HEU_UnityMaterialInfo;
}
namespace HoudiniEngineUnity {
struct HAPI_AttributeInfo;
}
namespace HoudiniEngineUnity {
class HEU_MeshData;
}
namespace HoudiniEngineUnity {
class HEU_GeneratedOutputData;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class GameObject;
}
namespace HoudiniEngineUnity {
struct HAPI_PartInfo;
}
namespace HoudiniEngineUnity {
class HEU_MeshIndexFormat;
}
namespace UnityEngine {
struct MeshTopology;
}
namespace HoudiniEngineUnity {
class HEU_GeneratedOutput;
}
namespace HoudiniEngineUnity {
class HoudiniEngineUnity__HEU_GenerateGeoCache__HEU_ColliderInfo;
}
namespace HoudiniEngineUnity {
struct HAPI_GeoInfo;
}
namespace HoudiniEngineUnity {
class HEU_MaterialData;
}
namespace HoudiniEngineUnity {
class HEU_SessionBase;
}
namespace UnityEngine {
struct Vector3;
}
namespace GlobalNamespace {
struct HoudiniEngineUnity__HEU_GenerateGeoCache__HEU_ColliderInfo__ColliderType;
}
namespace System {
template<typename T>
class Predicate_1;
}
namespace System {
template<typename T>
class Comparison_1;
}
// Forward declare root types
namespace GlobalNamespace {
struct HoudiniEngineUnity__HEU_GenerateGeoCache__HEU_ColliderInfo__ColliderType;
}
namespace HoudiniEngineUnity {
class HEU_GenerateGeoCache;
}
namespace HoudiniEngineUnity {
class HoudiniEngineUnity__HEU_GenerateGeoCache__HEU_ColliderInfo;
}
namespace HoudiniEngineUnity {
class HoudiniEngineUnity__HEU_GenerateGeoCache____c;
}
// Type: ::ColliderType
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9772))
// CS Name: HoudiniEngineUnity.HEU_GenerateGeoCache::HEU_ColliderInfo::ColliderType
struct CORDL_TYPE HoudiniEngineUnity__HEU_GenerateGeoCache__HEU_ColliderInfo__ColliderType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr HoudiniEngineUnity__HEU_GenerateGeoCache__HEU_ColliderInfo__ColliderType(int32_t value__) noexcept;


                    constexpr HoudiniEngineUnity__HEU_GenerateGeoCache__HEU_ColliderInfo__ColliderType(HoudiniEngineUnity__HEU_GenerateGeoCache__HEU_ColliderInfo__ColliderType const&) = default;
                    constexpr HoudiniEngineUnity__HEU_GenerateGeoCache__HEU_ColliderInfo__ColliderType(HoudiniEngineUnity__HEU_GenerateGeoCache__HEU_ColliderInfo__ColliderType&&) = default;
                    constexpr HoudiniEngineUnity__HEU_GenerateGeoCache__HEU_ColliderInfo__ColliderType& operator=(HoudiniEngineUnity__HEU_GenerateGeoCache__HEU_ColliderInfo__ColliderType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr HoudiniEngineUnity__HEU_GenerateGeoCache__HEU_ColliderInfo__ColliderType& operator=(HoudiniEngineUnity__HEU_GenerateGeoCache__HEU_ColliderInfo__ColliderType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit HoudiniEngineUnity__HEU_GenerateGeoCache__HEU_ColliderInfo__ColliderType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __HoudiniEngineUnity__HEU_GenerateGeoCache__HEU_ColliderInfo__ColliderType_Unwrapped : int32_t {
__NONE = 0,
__BOX = 1,
__SPHERE = 2,
__MESH = 3,
__SIMPLE_BOX = 4,
__SIMPLE_SPHERE = 5,
__SIMPLE_CAPSULE = 6,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __HoudiniEngineUnity__HEU_GenerateGeoCache__HEU_ColliderInfo__ColliderType_Unwrapped () const noexcept {
return std::bit_cast<__HoudiniEngineUnity__HEU_GenerateGeoCache__HEU_ColliderInfo__ColliderType_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field NONE offset 0
static GlobalNamespace::HoudiniEngineUnity__HEU_GenerateGeoCache__HEU_ColliderInfo__ColliderType const NONE;

/// @brief Field BOX offset 0
static GlobalNamespace::HoudiniEngineUnity__HEU_GenerateGeoCache__HEU_ColliderInfo__ColliderType const BOX;

/// @brief Field SPHERE offset 0
static GlobalNamespace::HoudiniEngineUnity__HEU_GenerateGeoCache__HEU_ColliderInfo__ColliderType const SPHERE;

/// @brief Field MESH offset 0
static GlobalNamespace::HoudiniEngineUnity__HEU_GenerateGeoCache__HEU_ColliderInfo__ColliderType const MESH;

/// @brief Field SIMPLE_BOX offset 0
static GlobalNamespace::HoudiniEngineUnity__HEU_GenerateGeoCache__HEU_ColliderInfo__ColliderType const SIMPLE_BOX;

/// @brief Field SIMPLE_SPHERE offset 0
static GlobalNamespace::HoudiniEngineUnity__HEU_GenerateGeoCache__HEU_ColliderInfo__ColliderType const SIMPLE_SPHERE;

/// @brief Field SIMPLE_CAPSULE offset 0
static GlobalNamespace::HoudiniEngineUnity__HEU_GenerateGeoCache__HEU_ColliderInfo__ColliderType const SIMPLE_CAPSULE;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::HEU_ColliderInfo
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9773))
// CS Name: HoudiniEngineUnity.HEU_GenerateGeoCache::HEU_ColliderInfo
class CORDL_TYPE HoudiniEngineUnity__HEU_GenerateGeoCache__HEU_ColliderInfo : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using ColliderType = GlobalNamespace::HoudiniEngineUnity__HEU_GenerateGeoCache__HEU_ColliderInfo__ColliderType;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x58};

virtual ~HoudiniEngineUnity__HEU_GenerateGeoCache__HEU_ColliderInfo() = default;

// Ctor Parameters [CppParam { name: "", ty: "HoudiniEngineUnity__HEU_GenerateGeoCache__HEU_ColliderInfo", modifiers: " const&", def_value: None }]
constexpr HoudiniEngineUnity__HEU_GenerateGeoCache__HEU_ColliderInfo(HoudiniEngineUnity__HEU_GenerateGeoCache__HEU_ColliderInfo const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HoudiniEngineUnity__HEU_GenerateGeoCache__HEU_ColliderInfo", modifiers: "&&", def_value: None }]
constexpr HoudiniEngineUnity__HEU_GenerateGeoCache__HEU_ColliderInfo(HoudiniEngineUnity__HEU_GenerateGeoCache__HEU_ColliderInfo&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HoudiniEngineUnity__HEU_GenerateGeoCache__HEU_ColliderInfo(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr HoudiniEngineUnity__HEU_GenerateGeoCache__HEU_ColliderInfo& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HoudiniEngineUnity__HEU_GenerateGeoCache__HEU_ColliderInfo& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HoudiniEngineUnity__HEU_GenerateGeoCache__HEU_ColliderInfo& operator=(HoudiniEngineUnity__HEU_GenerateGeoCache__HEU_ColliderInfo&& o) noexcept = default;
  constexpr HoudiniEngineUnity__HEU_GenerateGeoCache__HEU_ColliderInfo& operator=(HoudiniEngineUnity__HEU_GenerateGeoCache__HEU_ColliderInfo const& o) noexcept = default;
                


// Fields

 GlobalNamespace::HoudiniEngineUnity__HEU_GenerateGeoCache__HEU_ColliderInfo__ColliderType __declspec(property(get=__get__colliderType, put=__set__colliderType))  _colliderType;

constexpr void __set__colliderType(GlobalNamespace::HoudiniEngineUnity__HEU_GenerateGeoCache__HEU_ColliderInfo__ColliderType value) ;

constexpr GlobalNamespace::HoudiniEngineUnity__HEU_GenerateGeoCache__HEU_ColliderInfo__ColliderType __get__colliderType() const;

 UnityEngine::Vector3 __declspec(property(get=__get__colliderCenter, put=__set__colliderCenter))  _colliderCenter;

constexpr void __set__colliderCenter(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get__colliderCenter() const;

 UnityEngine::Vector3 __declspec(property(get=__get__colliderSize, put=__set__colliderSize))  _colliderSize;

constexpr void __set__colliderSize(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get__colliderSize() const;

 float_t __declspec(property(get=__get__colliderRadius, put=__set__colliderRadius))  _colliderRadius;

constexpr void __set__colliderRadius(float_t value) ;

constexpr float_t __get__colliderRadius() const;

 bool __declspec(property(get=__get__convexCollider, put=__set__convexCollider))  _convexCollider;

constexpr void __set__convexCollider(bool value) ;

constexpr bool __get__convexCollider() const;

 ::StringW __declspec(property(get=__get__collisionGroupName, put=__set__collisionGroupName))  _collisionGroupName;

constexpr void __set__collisionGroupName(::StringW value) ;

constexpr ::StringW __get__collisionGroupName() const;

 ::ArrayW<UnityEngine::Vector3> __declspec(property(get=__get__collisionVertices, put=__set__collisionVertices))  _collisionVertices;

constexpr void __set__collisionVertices(::ArrayW<UnityEngine::Vector3> value) ;

constexpr ::ArrayW<UnityEngine::Vector3> __get__collisionVertices() const;

 ::ArrayW<int32_t> __declspec(property(get=__get__collisionIndices, put=__set__collisionIndices))  _collisionIndices;

constexpr void __set__collisionIndices(::ArrayW<int32_t> value) ;

constexpr ::ArrayW<int32_t> __get__collisionIndices() const;

 UnityEngine::MeshTopology __declspec(property(get=__get__meshTopology, put=__set__meshTopology))  _meshTopology;

constexpr void __set__meshTopology(UnityEngine::MeshTopology value) ;

constexpr UnityEngine::MeshTopology __get__meshTopology() const;

 bool __declspec(property(get=__get__isTrigger, put=__set__isTrigger))  _isTrigger;

constexpr void __set__isTrigger(bool value) ;

constexpr bool __get__isTrigger() const;


// Methods

static HoudiniEngineUnity::HoudiniEngineUnity__HEU_GenerateGeoCache__HEU_ColliderInfo New_ctor() ;

/// @brief Method .ctor addr 0x20516c8 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
// Type: ::<>c
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9774))
// CS Name: HoudiniEngineUnity.HEU_GenerateGeoCache::<>c
class CORDL_TYPE HoudiniEngineUnity__HEU_GenerateGeoCache____c : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~HoudiniEngineUnity__HEU_GenerateGeoCache____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "HoudiniEngineUnity__HEU_GenerateGeoCache____c", modifiers: " const&", def_value: None }]
constexpr HoudiniEngineUnity__HEU_GenerateGeoCache____c(HoudiniEngineUnity__HEU_GenerateGeoCache____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HoudiniEngineUnity__HEU_GenerateGeoCache____c", modifiers: "&&", def_value: None }]
constexpr HoudiniEngineUnity__HEU_GenerateGeoCache____c(HoudiniEngineUnity__HEU_GenerateGeoCache____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HoudiniEngineUnity__HEU_GenerateGeoCache____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr HoudiniEngineUnity__HEU_GenerateGeoCache____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HoudiniEngineUnity__HEU_GenerateGeoCache____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HoudiniEngineUnity__HEU_GenerateGeoCache____c& operator=(HoudiniEngineUnity__HEU_GenerateGeoCache____c&& o) noexcept = default;
  constexpr HoudiniEngineUnity__HEU_GenerateGeoCache____c& operator=(HoudiniEngineUnity__HEU_GenerateGeoCache____c const& o) noexcept = default;
                


// Fields

static HoudiniEngineUnity::HoudiniEngineUnity__HEU_GenerateGeoCache____c __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(HoudiniEngineUnity::HoudiniEngineUnity__HEU_GenerateGeoCache____c value) ;

static HoudiniEngineUnity::HoudiniEngineUnity__HEU_GenerateGeoCache____c __get___9() ;

static System::Predicate_1<UnityEngine::Material> __declspec(property(get=__get___9__63_0, put=__set___9__63_0))  __9__63_0;

static void __set___9__63_0(System::Predicate_1<UnityEngine::Material> value) ;

static System::Predicate_1<UnityEngine::Material> __get___9__63_0() ;

static System::Comparison_1<float_t> __declspec(property(get=__get___9__65_0, put=__set___9__65_0))  __9__65_0;

static void __set___9__65_0(System::Comparison_1<float_t> value) ;

static System::Comparison_1<float_t> __get___9__65_0() ;


// Methods

static HoudiniEngineUnity::HoudiniEngineUnity__HEU_GenerateGeoCache____c New_ctor() ;

/// @brief Method .ctor addr 0x2053d40 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <GetFinalMaterialsFromComparingNewWithPrevious>b__63_0 addr 0x2053d48 size 0x5c virtual false final false
 bool _GetFinalMaterialsFromComparingNewWithPrevious_b__63_0(UnityEngine::Material material) ;

/// @brief Method <GenerateLODMeshesFromGeoGroups>b__65_0 addr 0x2053da4 size 0x1c virtual false final false
 int32_t _GenerateLODMeshesFromGeoGroups_b__65_0(float_t a, float_t b) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
// Type: HoudiniEngineUnity::HEU_GenerateGeoCache
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9775))
// CS Name: HoudiniEngineUnity.HEU_GenerateGeoCache
class CORDL_TYPE HEU_GenerateGeoCache : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using __c = HoudiniEngineUnity::HoudiniEngineUnity__HEU_GenerateGeoCache____c;

using HEU_ColliderInfo = HoudiniEngineUnity::HoudiniEngineUnity__HEU_GenerateGeoCache__HEU_ColliderInfo;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x2b8};

virtual ~HEU_GenerateGeoCache() = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_GenerateGeoCache", modifiers: " const&", def_value: None }]
constexpr HEU_GenerateGeoCache(HEU_GenerateGeoCache const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_GenerateGeoCache", modifiers: "&&", def_value: None }]
constexpr HEU_GenerateGeoCache(HEU_GenerateGeoCache&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HEU_GenerateGeoCache(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr HEU_GenerateGeoCache& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HEU_GenerateGeoCache& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HEU_GenerateGeoCache& operator=(HEU_GenerateGeoCache&& o) noexcept = default;
  constexpr HEU_GenerateGeoCache& operator=(HEU_GenerateGeoCache const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get__AssetID_k__BackingField, put=__set__AssetID_k__BackingField))  _AssetID_k__BackingField;

constexpr void __set__AssetID_k__BackingField(int32_t value) ;

constexpr int32_t __get__AssetID_k__BackingField() const;

 HoudiniEngineUnity::HAPI_GeoInfo __declspec(property(get=__get__geoInfo, put=__set__geoInfo))  _geoInfo;

constexpr void __set__geoInfo(HoudiniEngineUnity::HAPI_GeoInfo value) ;

constexpr HoudiniEngineUnity::HAPI_GeoInfo __get__geoInfo() const;

 HoudiniEngineUnity::HAPI_PartInfo __declspec(property(get=__get__partInfo, put=__set__partInfo))  _partInfo;

constexpr void __set__partInfo(HoudiniEngineUnity::HAPI_PartInfo value) ;

constexpr HoudiniEngineUnity::HAPI_PartInfo __get__partInfo() const;

 ::StringW __declspec(property(get=__get__partName, put=__set__partName))  _partName;

constexpr void __set__partName(::StringW value) ;

constexpr ::StringW __get__partName() const;

 ::ArrayW<int32_t> __declspec(property(get=__get__vertexList, put=__set__vertexList))  _vertexList;

constexpr void __set__vertexList(::ArrayW<int32_t> value) ;

constexpr ::ArrayW<int32_t> __get__vertexList() const;

 ::ArrayW<int32_t> __declspec(property(get=__get__faceCounts, put=__set__faceCounts))  _faceCounts;

constexpr void __set__faceCounts(::ArrayW<int32_t> value) ;

constexpr ::ArrayW<int32_t> __get__faceCounts() const;

 ::ArrayW<int32_t> __declspec(property(get=__get__houdiniMaterialIDs, put=__set__houdiniMaterialIDs))  _houdiniMaterialIDs;

constexpr void __set__houdiniMaterialIDs(::ArrayW<int32_t> value) ;

constexpr ::ArrayW<int32_t> __get__houdiniMaterialIDs() const;

 bool __declspec(property(get=__get__singleFaceUnityMaterial, put=__set__singleFaceUnityMaterial))  _singleFaceUnityMaterial;

constexpr void __set__singleFaceUnityMaterial(bool value) ;

constexpr bool __get__singleFaceUnityMaterial() const;

 bool __declspec(property(get=__get__singleFaceHoudiniMaterial, put=__set__singleFaceHoudiniMaterial))  _singleFaceHoudiniMaterial;

constexpr void __set__singleFaceHoudiniMaterial(bool value) ;

constexpr bool __get__singleFaceHoudiniMaterial() const;

 System::Collections::Generic::Dictionary_2<int32_t,HoudiniEngineUnity::HEU_UnityMaterialInfo> __declspec(property(get=__get__unityMaterialInfos, put=__set__unityMaterialInfos))  _unityMaterialInfos;

constexpr void __set__unityMaterialInfos(System::Collections::Generic::Dictionary_2<int32_t,HoudiniEngineUnity::HEU_UnityMaterialInfo> value) ;

constexpr System::Collections::Generic::Dictionary_2<int32_t,HoudiniEngineUnity::HEU_UnityMaterialInfo> __get__unityMaterialInfos() const;

 HoudiniEngineUnity::HAPI_AttributeInfo __declspec(property(get=__get__unityMaterialAttrInfo, put=__set__unityMaterialAttrInfo))  _unityMaterialAttrInfo;

constexpr void __set__unityMaterialAttrInfo(HoudiniEngineUnity::HAPI_AttributeInfo value) ;

constexpr HoudiniEngineUnity::HAPI_AttributeInfo __get__unityMaterialAttrInfo() const;

 ::ArrayW<int32_t> __declspec(property(get=__get__unityMaterialAttrName, put=__set__unityMaterialAttrName))  _unityMaterialAttrName;

constexpr void __set__unityMaterialAttrName(::ArrayW<int32_t> value) ;

constexpr ::ArrayW<int32_t> __get__unityMaterialAttrName() const;

 System::Collections::Generic::Dictionary_2<int32_t,::StringW> __declspec(property(get=__get__unityMaterialAttrStringsMap, put=__set__unityMaterialAttrStringsMap))  _unityMaterialAttrStringsMap;

constexpr void __set__unityMaterialAttrStringsMap(System::Collections::Generic::Dictionary_2<int32_t,::StringW> value) ;

constexpr System::Collections::Generic::Dictionary_2<int32_t,::StringW> __get__unityMaterialAttrStringsMap() const;

 HoudiniEngineUnity::HAPI_AttributeInfo __declspec(property(get=__get__substanceMaterialAttrNameInfo, put=__set__substanceMaterialAttrNameInfo))  _substanceMaterialAttrNameInfo;

constexpr void __set__substanceMaterialAttrNameInfo(HoudiniEngineUnity::HAPI_AttributeInfo value) ;

constexpr HoudiniEngineUnity::HAPI_AttributeInfo __get__substanceMaterialAttrNameInfo() const;

 ::ArrayW<int32_t> __declspec(property(get=__get__substanceMaterialAttrName, put=__set__substanceMaterialAttrName))  _substanceMaterialAttrName;

constexpr void __set__substanceMaterialAttrName(::ArrayW<int32_t> value) ;

constexpr ::ArrayW<int32_t> __get__substanceMaterialAttrName() const;

 System::Collections::Generic::Dictionary_2<int32_t,::StringW> __declspec(property(get=__get__substanceMaterialAttrStringsMap, put=__set__substanceMaterialAttrStringsMap))  _substanceMaterialAttrStringsMap;

constexpr void __set__substanceMaterialAttrStringsMap(System::Collections::Generic::Dictionary_2<int32_t,::StringW> value) ;

constexpr System::Collections::Generic::Dictionary_2<int32_t,::StringW> __get__substanceMaterialAttrStringsMap() const;

 HoudiniEngineUnity::HAPI_AttributeInfo __declspec(property(get=__get__substanceMaterialAttrIndexInfo, put=__set__substanceMaterialAttrIndexInfo))  _substanceMaterialAttrIndexInfo;

constexpr void __set__substanceMaterialAttrIndexInfo(HoudiniEngineUnity::HAPI_AttributeInfo value) ;

constexpr HoudiniEngineUnity::HAPI_AttributeInfo __get__substanceMaterialAttrIndexInfo() const;

 ::ArrayW<int32_t> __declspec(property(get=__get__substanceMaterialAttrIndex, put=__set__substanceMaterialAttrIndex))  _substanceMaterialAttrIndex;

constexpr void __set__substanceMaterialAttrIndex(::ArrayW<int32_t> value) ;

constexpr ::ArrayW<int32_t> __get__substanceMaterialAttrIndex() const;

 System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_MaterialData> __declspec(property(get=__get__inUseMaterials, put=__set__inUseMaterials))  _inUseMaterials;

constexpr void __set__inUseMaterials(System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_MaterialData> value) ;

constexpr System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_MaterialData> __get__inUseMaterials() const;

 HoudiniEngineUnity::HAPI_AttributeInfo __declspec(property(get=__get__posAttrInfo, put=__set__posAttrInfo))  _posAttrInfo;

constexpr void __set__posAttrInfo(HoudiniEngineUnity::HAPI_AttributeInfo value) ;

constexpr HoudiniEngineUnity::HAPI_AttributeInfo __get__posAttrInfo() const;

 ::ArrayW<HoudiniEngineUnity::HAPI_AttributeInfo> __declspec(property(get=__get__uvsAttrInfo, put=__set__uvsAttrInfo))  _uvsAttrInfo;

constexpr void __set__uvsAttrInfo(::ArrayW<HoudiniEngineUnity::HAPI_AttributeInfo> value) ;

constexpr ::ArrayW<HoudiniEngineUnity::HAPI_AttributeInfo> __get__uvsAttrInfo() const;

 HoudiniEngineUnity::HAPI_AttributeInfo __declspec(property(get=__get__normalAttrInfo, put=__set__normalAttrInfo))  _normalAttrInfo;

constexpr void __set__normalAttrInfo(HoudiniEngineUnity::HAPI_AttributeInfo value) ;

constexpr HoudiniEngineUnity::HAPI_AttributeInfo __get__normalAttrInfo() const;

 HoudiniEngineUnity::HAPI_AttributeInfo __declspec(property(get=__get__colorAttrInfo, put=__set__colorAttrInfo))  _colorAttrInfo;

constexpr void __set__colorAttrInfo(HoudiniEngineUnity::HAPI_AttributeInfo value) ;

constexpr HoudiniEngineUnity::HAPI_AttributeInfo __get__colorAttrInfo() const;

 HoudiniEngineUnity::HAPI_AttributeInfo __declspec(property(get=__get__alphaAttrInfo, put=__set__alphaAttrInfo))  _alphaAttrInfo;

constexpr void __set__alphaAttrInfo(HoudiniEngineUnity::HAPI_AttributeInfo value) ;

constexpr HoudiniEngineUnity::HAPI_AttributeInfo __get__alphaAttrInfo() const;

 HoudiniEngineUnity::HAPI_AttributeInfo __declspec(property(get=__get__tangentAttrInfo, put=__set__tangentAttrInfo))  _tangentAttrInfo;

constexpr void __set__tangentAttrInfo(HoudiniEngineUnity::HAPI_AttributeInfo value) ;

constexpr HoudiniEngineUnity::HAPI_AttributeInfo __get__tangentAttrInfo() const;

 ::ArrayW<float_t> __declspec(property(get=__get__posAttr, put=__set__posAttr))  _posAttr;

constexpr void __set__posAttr(::ArrayW<float_t> value) ;

constexpr ::ArrayW<float_t> __get__posAttr() const;

 ::ArrayW<::ArrayW<float_t>> __declspec(property(get=__get__uvsAttr, put=__set__uvsAttr))  _uvsAttr;

constexpr void __set__uvsAttr(::ArrayW<::ArrayW<float_t>> value) ;

constexpr ::ArrayW<::ArrayW<float_t>> __get__uvsAttr() const;

 ::ArrayW<float_t> __declspec(property(get=__get__normalAttr, put=__set__normalAttr))  _normalAttr;

constexpr void __set__normalAttr(::ArrayW<float_t> value) ;

constexpr ::ArrayW<float_t> __get__normalAttr() const;

 ::ArrayW<float_t> __declspec(property(get=__get__colorAttr, put=__set__colorAttr))  _colorAttr;

constexpr void __set__colorAttr(::ArrayW<float_t> value) ;

constexpr ::ArrayW<float_t> __get__colorAttr() const;

 ::ArrayW<float_t> __declspec(property(get=__get__alphaAttr, put=__set__alphaAttr))  _alphaAttr;

constexpr void __set__alphaAttr(::ArrayW<float_t> value) ;

constexpr ::ArrayW<float_t> __get__alphaAttr() const;

 ::ArrayW<float_t> __declspec(property(get=__get__tangentAttr, put=__set__tangentAttr))  _tangentAttr;

constexpr void __set__tangentAttr(::ArrayW<float_t> value) ;

constexpr ::ArrayW<float_t> __get__tangentAttr() const;

 ::ArrayW<::StringW> __declspec(property(get=__get__groups, put=__set__groups))  _groups;

constexpr void __set__groups(::ArrayW<::StringW> value) ;

constexpr ::ArrayW<::StringW> __get__groups() const;

 bool __declspec(property(get=__get__hasGroupGeometry, put=__set__hasGroupGeometry))  _hasGroupGeometry;

constexpr void __set__hasGroupGeometry(bool value) ;

constexpr bool __get__hasGroupGeometry() const;

 System::Collections::Generic::Dictionary_2<::StringW,::ArrayW<int32_t>> __declspec(property(get=__get__groupSplitVertexIndices, put=__set__groupSplitVertexIndices))  _groupSplitVertexIndices;

constexpr void __set__groupSplitVertexIndices(System::Collections::Generic::Dictionary_2<::StringW,::ArrayW<int32_t>> value) ;

constexpr System::Collections::Generic::Dictionary_2<::StringW,::ArrayW<int32_t>> __get__groupSplitVertexIndices() const;

 System::Collections::Generic::Dictionary_2<::StringW,System::Collections::Generic::List_1<int32_t>> __declspec(property(get=__get__groupSplitFaceIndices, put=__set__groupSplitFaceIndices))  _groupSplitFaceIndices;

constexpr void __set__groupSplitFaceIndices(System::Collections::Generic::Dictionary_2<::StringW,System::Collections::Generic::List_1<int32_t>> value) ;

constexpr System::Collections::Generic::Dictionary_2<::StringW,System::Collections::Generic::List_1<int32_t>> __get__groupSplitFaceIndices() const;

 System::Collections::Generic::Dictionary_2<::StringW,System::Collections::Generic::List_1<int32_t>> __declspec(property(get=__get__groupVertexOffsets, put=__set__groupVertexOffsets))  _groupVertexOffsets;

constexpr void __set__groupVertexOffsets(System::Collections::Generic::Dictionary_2<::StringW,System::Collections::Generic::List_1<int32_t>> value) ;

constexpr System::Collections::Generic::Dictionary_2<::StringW,System::Collections::Generic::List_1<int32_t>> __get__groupVertexOffsets() const;

 ::ArrayW<int32_t> __declspec(property(get=__get__allCollisionVertexList, put=__set__allCollisionVertexList))  _allCollisionVertexList;

constexpr void __set__allCollisionVertexList(::ArrayW<int32_t> value) ;

constexpr ::ArrayW<int32_t> __get__allCollisionVertexList() const;

 ::ArrayW<int32_t> __declspec(property(get=__get__allCollisionFaceIndices, put=__set__allCollisionFaceIndices))  _allCollisionFaceIndices;

constexpr void __set__allCollisionFaceIndices(::ArrayW<int32_t> value) ;

constexpr ::ArrayW<int32_t> __get__allCollisionFaceIndices() const;

 float_t __declspec(property(get=__get__normalCosineThreshold, put=__set__normalCosineThreshold))  _normalCosineThreshold;

constexpr void __set__normalCosineThreshold(float_t value) ;

constexpr float_t __get__normalCosineThreshold() const;

 bool __declspec(property(get=__get__hasLODGroups, put=__set__hasLODGroups))  _hasLODGroups;

constexpr void __set__hasLODGroups(bool value) ;

constexpr bool __get__hasLODGroups() const;

 ::ArrayW<float_t> __declspec(property(get=__get__LODTransitionValues, put=__set__LODTransitionValues))  _LODTransitionValues;

constexpr void __set__LODTransitionValues(::ArrayW<float_t> value) ;

constexpr ::ArrayW<float_t> __get__LODTransitionValues() const;

 bool __declspec(property(get=__get__isMeshReadWrite, put=__set__isMeshReadWrite))  _isMeshReadWrite;

constexpr void __set__isMeshReadWrite(bool value) ;

constexpr bool __get__isMeshReadWrite() const;

 System::Collections::Generic::List_1<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GenerateGeoCache__HEU_ColliderInfo> __declspec(property(get=__get__colliderInfos, put=__set__colliderInfos))  _colliderInfos;

constexpr void __set__colliderInfos(System::Collections::Generic::List_1<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GenerateGeoCache__HEU_ColliderInfo> value) ;

constexpr System::Collections::Generic::List_1<HoudiniEngineUnity::HoudiniEngineUnity__HEU_GenerateGeoCache__HEU_ColliderInfo> __get__colliderInfos() const;

 System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_MaterialData> __declspec(property(get=__get__materialCache, put=__set__materialCache))  _materialCache;

constexpr void __set__materialCache(System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_MaterialData> value) ;

constexpr System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_MaterialData> __get__materialCache() const;

 System::Collections::Generic::Dictionary_2<int32_t,HoudiniEngineUnity::HEU_MaterialData> __declspec(property(get=__get__materialIDToDataMap, put=__set__materialIDToDataMap))  _materialIDToDataMap;

constexpr void __set__materialIDToDataMap(System::Collections::Generic::Dictionary_2<int32_t,HoudiniEngineUnity::HEU_MaterialData> value) ;

constexpr System::Collections::Generic::Dictionary_2<int32_t,HoudiniEngineUnity::HEU_MaterialData> __get__materialIDToDataMap() const;

 ::StringW __declspec(property(get=__get__assetCacheFolderPath, put=__set__assetCacheFolderPath))  _assetCacheFolderPath;

constexpr void __set__assetCacheFolderPath(::StringW value) ;

constexpr ::StringW __get__assetCacheFolderPath() const;

 HoudiniEngineUnity::HEU_MeshIndexFormat __declspec(property(get=__get__meshIndexFormat, put=__set__meshIndexFormat))  _meshIndexFormat;

constexpr void __set__meshIndexFormat(HoudiniEngineUnity::HEU_MeshIndexFormat value) ;

constexpr HoudiniEngineUnity::HEU_MeshIndexFormat __get__meshIndexFormat() const;


// Properties

 int32_t __declspec(property(get=get_GeoID))  GeoID;

 int32_t __declspec(property(get=get_PartID))  PartID;

 int32_t __declspec(property(get=get_AssetID, put=set_AssetID))  AssetID;


// Methods

/// @brief Method get_GeoID addr 0x20488a4 size 0x8 virtual false final false
 int32_t get_GeoID() ;

/// @brief Method get_PartID addr 0x20488ac size 0x8 virtual false final false
 int32_t get_PartID() ;

/// @brief Method get_AssetID addr 0x20488b4 size 0x8 virtual false final false
 int32_t get_AssetID() ;

/// @brief Method set_AssetID addr 0x20488bc size 0x8 virtual false final false
 void set_AssetID(int32_t value) ;

/// @brief Method GetPopulatedGeoCache addr 0x20488c4 size 0x304 virtual false final false
static HoudiniEngineUnity::HEU_GenerateGeoCache GetPopulatedGeoCache(HoudiniEngineUnity::HEU_SessionBase session, int32_t assetID, int32_t geoID, int32_t partID, bool bUseLODGroups, System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_MaterialData> materialCache, ::StringW assetCacheFolderPath) ;

/// @brief Method PopulateUnityMaterialData addr 0x2048dc4 size 0x614 virtual false final false
 void PopulateUnityMaterialData(HoudiniEngineUnity::HEU_SessionBase session) ;

/// @brief Method GetMaterialKeyFromAttributeIndex addr 0x204afd8 size 0x15c virtual false final false
static int32_t GetMaterialKeyFromAttributeIndex(HoudiniEngineUnity::HEU_GenerateGeoCache geoCache, int32_t attributeIndex, ByRef<::StringW> unityMaterialName, ByRef<::StringW> substanceName, ByRef<int32_t> substanceIndex) ;

/// @brief Method CreateMaterialInfoEntryFromAttributeIndex addr 0x204aebc size 0x11c virtual false final false
static void CreateMaterialInfoEntryFromAttributeIndex(HoudiniEngineUnity::HEU_GenerateGeoCache geoCache, int32_t materialAttributeIndex) ;

/// @brief Method PopulateGeometryData addr 0x20493d8 size 0x1ae4 virtual false final false
 bool PopulateGeometryData(HoudiniEngineUnity::HEU_SessionBase session, bool bUseLODGroups) ;

/// @brief Method ParseLODTransitionAttribute addr 0x204b134 size 0x1bc virtual false final false
static void ParseLODTransitionAttribute(HoudiniEngineUnity::HEU_SessionBase session, int32_t geoID, int32_t partID, ByRef<::ArrayW<float_t>> LODTransitionValues) ;

/// @brief Method UpdateColliders addr 0x204b2f0 size 0x150 virtual false final false
static void UpdateColliders(HoudiniEngineUnity::HEU_GenerateGeoCache geoCache, HoudiniEngineUnity::HEU_GeneratedOutputData outputData) ;

/// @brief Method UpdateCollider addr 0x204b440 size 0x644 virtual false final false
static void UpdateCollider(HoudiniEngineUnity::HEU_GenerateGeoCache geoCache, HoudiniEngineUnity::HEU_GeneratedOutputData outputData, HoudiniEngineUnity::HoudiniEngineUnity__HEU_GenerateGeoCache__HEU_ColliderInfo colliderInfo) ;

/// @brief Method GetFinalMaterialsFromComparingNewWithPrevious addr 0x204ba84 size 0x3a4 virtual false final false
static void GetFinalMaterialsFromComparingNewWithPrevious(UnityEngine::GameObject gameObject, ::ArrayW<UnityEngine::Material> previousMaterials, ::ArrayW<UnityEngine::Material> newMaterials, ByRef<::ArrayW<UnityEngine::Material>> finalMaterials) ;

/// @brief Method GenerateMeshFromSingleGroup addr 0x204be28 size 0x1bc virtual false final false
static bool GenerateMeshFromSingleGroup(HoudiniEngineUnity::HEU_SessionBase session, HoudiniEngineUnity::HEU_GeoGroup GeoGroup, HoudiniEngineUnity::HEU_GenerateGeoCache geoCache, HoudiniEngineUnity::HEU_GeneratedOutput generatedOutput, int32_t defaultMaterialKey, bool bGenerateUVs, bool bGenerateTangents, bool bGenerateNormals, bool bPartInstanced) ;

/// @brief Method GenerateLODMeshesFromGeoGroups addr 0x204cad0 size 0xb64 virtual false final false
static bool GenerateLODMeshesFromGeoGroups(HoudiniEngineUnity::HEU_SessionBase session, System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_GeoGroup> GeoGroupMeshes, HoudiniEngineUnity::HEU_GenerateGeoCache geoCache, HoudiniEngineUnity::HEU_GeneratedOutput generatedOutput, int32_t defaultMaterialKey, bool bGenerateUVs, bool bGenerateTangents, bool bGenerateNormals, bool bPartInstanced) ;

/// @brief Method GenerateMeshFromGeoGroup addr 0x204bfe4 size 0xaec virtual false final false
static bool GenerateMeshFromGeoGroup(HoudiniEngineUnity::HEU_SessionBase session, HoudiniEngineUnity::HEU_GeoGroup GeoGroup, HoudiniEngineUnity::HEU_GenerateGeoCache geoCache, int32_t defaultMaterialKey, bool bGenerateUVs, bool bGenerateTangents, bool bGenerateNormals, bool bPartInstanced, ByRef<UnityEngine::Mesh> newMesh, ByRef<::ArrayW<UnityEngine::Material>> newMaterials) ;

/// @brief Method CombineQuadMeshes addr 0x204dda8 size 0x5a4 virtual false final false
static UnityEngine::Mesh CombineQuadMeshes(System::Collections::Generic::Dictionary_2<int32_t,HoudiniEngineUnity::HEU_MeshData> subMeshesMap, System::Collections::Generic::List_1<int32_t> subMeshIndices, bool bGenerateNormals) ;

/// @brief Method CombineMeshes addr 0x204e34c size 0x344 virtual false final false
static UnityEngine::Mesh CombineMeshes(System::Collections::Generic::Dictionary_2<int32_t,HoudiniEngineUnity::HEU_MeshData> subMeshesMap, System::Collections::Generic::List_1<int32_t> submeshIndices, bool bGenerateUVs, bool bGenerateNormals, HoudiniEngineUnity::HEU_MeshIndexFormat meshIndexFormat) ;

/// @brief Method CreateMeshFromMeshData addr 0x204db0c size 0x29c virtual false final false
static UnityEngine::Mesh CreateMeshFromMeshData(HoudiniEngineUnity::HEU_MeshData submesh, bool bGenerateUVs, bool bGenerateNormals, HoudiniEngineUnity::HEU_MeshIndexFormat meshIndexFormat) ;

/// @brief Method TransferRegularAttributesToVertices addr 0x204e6dc size 0x2ec virtual false final false
static void TransferRegularAttributesToVertices(::ArrayW<int32_t> groupVertexList, ::ArrayW<int32_t> allFaceCounts, System::Collections::Generic::List_1<int32_t> groupFaces, System::Collections::Generic::List_1<int32_t> groupVertexOffset, ByRef<HoudiniEngineUnity::HAPI_AttributeInfo> attribInfo, ::ArrayW<float_t> inData, ByRef<::ArrayW<float_t>> outData) ;

/// @brief Method GenerateGeoGroupUsingGeoCacheVertices addr 0x204e9c8 size 0x2d00 virtual false final false
static bool GenerateGeoGroupUsingGeoCacheVertices(HoudiniEngineUnity::HEU_SessionBase session, HoudiniEngineUnity::HEU_GenerateGeoCache geoCache, bool bGenerateUVs, bool bGenerateTangents, bool bGenerateNormals, bool bUseLODGroups, bool bPartInstanced, ByRef<System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_GeoGroup>> LODGroupMeshes, ByRef<int32_t> defaultMaterialKey) ;

/// @brief Method GenerateGeoGroupUsingGeoCachePoints addr 0x2051a70 size 0x226c virtual false final false
static bool GenerateGeoGroupUsingGeoCachePoints(HoudiniEngineUnity::HEU_SessionBase session, HoudiniEngineUnity::HEU_GenerateGeoCache geoCache, bool bGenerateUVs, bool bGenerateTangents, bool bGenerateNormals, bool bUseLODGroups, bool bPartInstanced, ByRef<System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_GeoGroup>> LODGroupMeshes, ByRef<int32_t> defaultMaterialKey) ;

/// @brief Method CalculateGroupMeshTopology addr 0x20516d0 size 0x1c8 virtual false final false
static UnityEngine::MeshTopology CalculateGroupMeshTopology(System::Collections::Generic::List_1<int32_t> groupFaces, ::ArrayW<int32_t> allFaceCounts) ;

static HoudiniEngineUnity::HEU_GenerateGeoCache New_ctor() ;

/// @brief Method .ctor addr 0x2048bc8 size 0x1fc virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::HoudiniEngineUnity__HEU_GenerateGeoCache__HEU_ColliderInfo__ColliderType, "HoudiniEngineUnity", "HEU_GenerateGeoCache/HEU_ColliderInfo/ColliderType");
NEED_NO_BOX(HoudiniEngineUnity::HEU_GenerateGeoCache);
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HEU_GenerateGeoCache, "HoudiniEngineUnity", "HEU_GenerateGeoCache");
NEED_NO_BOX(HoudiniEngineUnity::HoudiniEngineUnity__HEU_GenerateGeoCache__HEU_ColliderInfo);
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HoudiniEngineUnity__HEU_GenerateGeoCache__HEU_ColliderInfo, "HoudiniEngineUnity", "HEU_GenerateGeoCache/HEU_ColliderInfo");
NEED_NO_BOX(HoudiniEngineUnity::HoudiniEngineUnity__HEU_GenerateGeoCache____c);
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HoudiniEngineUnity__HEU_GenerateGeoCache____c, "HoudiniEngineUnity", "HEU_GenerateGeoCache/<>c");
