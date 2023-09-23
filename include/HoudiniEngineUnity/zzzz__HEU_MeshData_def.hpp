#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace UnityEngine {
struct MeshTopology;
}
namespace UnityEngine {
struct Vector4;
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
struct Vector3;
}
namespace UnityEngine {
struct Color32;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class HEU_MeshData;
}
// Type: HoudiniEngineUnity::HEU_MeshData
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9792))
// CS Name: HoudiniEngineUnity.HEU_MeshData
class CORDL_TYPE HEU_MeshData : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x58};

virtual ~HEU_MeshData() = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_MeshData", modifiers: " const&", def_value: None }]
constexpr HEU_MeshData(HEU_MeshData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_MeshData", modifiers: "&&", def_value: None }]
constexpr HEU_MeshData(HEU_MeshData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HEU_MeshData(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr HEU_MeshData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HEU_MeshData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HEU_MeshData& operator=(HEU_MeshData&& o) noexcept = default;
  constexpr HEU_MeshData& operator=(HEU_MeshData const& o) noexcept = default;
                


// Fields

 System::Collections::Generic::List_1<int32_t> __declspec(property(get=__get__indices, put=__set__indices))  _indices;

constexpr void __set__indices(System::Collections::Generic::List_1<int32_t> value) ;

constexpr System::Collections::Generic::List_1<int32_t> __get__indices() const;

 System::Collections::Generic::List_1<UnityEngine::Vector3> __declspec(property(get=__get__vertices, put=__set__vertices))  _vertices;

constexpr void __set__vertices(System::Collections::Generic::List_1<UnityEngine::Vector3> value) ;

constexpr System::Collections::Generic::List_1<UnityEngine::Vector3> __get__vertices() const;

 System::Collections::Generic::List_1<UnityEngine::Color32> __declspec(property(get=__get__colors, put=__set__colors))  _colors;

constexpr void __set__colors(System::Collections::Generic::List_1<UnityEngine::Color32> value) ;

constexpr System::Collections::Generic::List_1<UnityEngine::Color32> __get__colors() const;

 System::Collections::Generic::List_1<UnityEngine::Vector3> __declspec(property(get=__get__normals, put=__set__normals))  _normals;

constexpr void __set__normals(System::Collections::Generic::List_1<UnityEngine::Vector3> value) ;

constexpr System::Collections::Generic::List_1<UnityEngine::Vector3> __get__normals() const;

 System::Collections::Generic::List_1<UnityEngine::Vector4> __declspec(property(get=__get__tangents, put=__set__tangents))  _tangents;

constexpr void __set__tangents(System::Collections::Generic::List_1<UnityEngine::Vector4> value) ;

constexpr System::Collections::Generic::List_1<UnityEngine::Vector4> __get__tangents() const;

 ::ArrayW<System::Collections::Generic::List_1<UnityEngine::Vector4>> __declspec(property(get=__get__uvs, put=__set__uvs))  _uvs;

constexpr void __set__uvs(::ArrayW<System::Collections::Generic::List_1<UnityEngine::Vector4>> value) ;

constexpr ::ArrayW<System::Collections::Generic::List_1<UnityEngine::Vector4>> __get__uvs() const;

 System::Collections::Generic::List_1<UnityEngine::Vector3> __declspec(property(get=__get__triangleNormals, put=__set__triangleNormals))  _triangleNormals;

constexpr void __set__triangleNormals(System::Collections::Generic::List_1<UnityEngine::Vector3> value) ;

constexpr System::Collections::Generic::List_1<UnityEngine::Vector3> __get__triangleNormals() const;

 System::Collections::Generic::Dictionary_2<int32_t,int32_t> __declspec(property(get=__get__pointIndexToMeshIndexMap, put=__set__pointIndexToMeshIndexMap))  _pointIndexToMeshIndexMap;

constexpr void __set__pointIndexToMeshIndexMap(System::Collections::Generic::Dictionary_2<int32_t,int32_t> value) ;

constexpr System::Collections::Generic::Dictionary_2<int32_t,int32_t> __get__pointIndexToMeshIndexMap() const;

 UnityEngine::MeshTopology __declspec(property(get=__get__meshTopology, put=__set__meshTopology))  _meshTopology;

constexpr void __set__meshTopology(UnityEngine::MeshTopology value) ;

constexpr UnityEngine::MeshTopology __get__meshTopology() const;


// Methods

// Ctor Parameters []
explicit HEU_MeshData() ;

/// @brief Method .ctor addr 0x205e734 size 0x1f0 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
NEED_NO_BOX(HoudiniEngineUnity::HEU_MeshData);
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HEU_MeshData, "HoudiniEngineUnity", "HEU_MeshData");
