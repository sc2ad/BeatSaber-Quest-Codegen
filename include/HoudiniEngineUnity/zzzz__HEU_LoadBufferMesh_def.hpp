#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_LoadBufferBase_def.hpp"
#include <cstdint>
namespace HoudiniEngineUnity {
class HEU_GenerateGeoCache;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace HoudiniEngineUnity {
class HEU_GeoGroup;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class HEU_LoadBufferMesh;
}
// Type: HoudiniEngineUnity::HEU_LoadBufferMesh
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9745))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9746))
// CS Name: HoudiniEngineUnity.HEU_LoadBufferMesh
class CORDL_TYPE HEU_LoadBufferMesh : public HoudiniEngineUnity::HEU_LoadBufferBase {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~HEU_LoadBufferMesh() = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_LoadBufferMesh", modifiers: " const&", def_value: None }]
constexpr HEU_LoadBufferMesh(HEU_LoadBufferMesh const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_LoadBufferMesh", modifiers: "&&", def_value: None }]
constexpr HEU_LoadBufferMesh(HEU_LoadBufferMesh&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HEU_LoadBufferMesh(void* ptr) noexcept : HoudiniEngineUnity::HEU_LoadBufferBase(ptr) {
}


  constexpr HEU_LoadBufferMesh& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HEU_LoadBufferMesh& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HEU_LoadBufferMesh& operator=(HEU_LoadBufferMesh&& o) noexcept = default;
  constexpr HEU_LoadBufferMesh& operator=(HEU_LoadBufferMesh const& o) noexcept = default;
                


// Fields

 HoudiniEngineUnity::HEU_GenerateGeoCache __declspec(property(get=__get__geoCache, put=__set__geoCache))  _geoCache;

constexpr void __set__geoCache(HoudiniEngineUnity::HEU_GenerateGeoCache value) ;

constexpr HoudiniEngineUnity::HEU_GenerateGeoCache __get__geoCache() const;

 System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_GeoGroup> __declspec(property(get=__get__LODGroupMeshes, put=__set__LODGroupMeshes))  _LODGroupMeshes;

constexpr void __set__LODGroupMeshes(System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_GeoGroup> value) ;

constexpr System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_GeoGroup> __get__LODGroupMeshes() const;

 int32_t __declspec(property(get=__get__defaultMaterialKey, put=__set__defaultMaterialKey))  _defaultMaterialKey;

constexpr void __set__defaultMaterialKey(int32_t value) ;

constexpr int32_t __get__defaultMaterialKey() const;

 bool __declspec(property(get=__get__bGenerateUVs, put=__set__bGenerateUVs))  _bGenerateUVs;

constexpr void __set__bGenerateUVs(bool value) ;

constexpr bool __get__bGenerateUVs() const;

 bool __declspec(property(get=__get__bGenerateTangents, put=__set__bGenerateTangents))  _bGenerateTangents;

constexpr void __set__bGenerateTangents(bool value) ;

constexpr bool __get__bGenerateTangents() const;

 bool __declspec(property(get=__get__bGenerateNormals, put=__set__bGenerateNormals))  _bGenerateNormals;

constexpr void __set__bGenerateNormals(bool value) ;

constexpr bool __get__bGenerateNormals() const;

 bool __declspec(property(get=__get__bPartInstanced, put=__set__bPartInstanced))  _bPartInstanced;

constexpr void __set__bPartInstanced(bool value) ;

constexpr bool __get__bPartInstanced() const;


// Methods

// Ctor Parameters []
explicit HEU_LoadBufferMesh() ;

/// @brief Method .ctor addr 0x203a388 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
NEED_NO_BOX(HoudiniEngineUnity::HEU_LoadBufferMesh);
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HEU_LoadBufferMesh, "HoudiniEngineUnity", "HEU_LoadBufferMesh");
