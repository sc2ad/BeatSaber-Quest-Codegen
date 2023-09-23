#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine::ProBuilder {
class Vertex;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace UnityEngine::ProBuilder {
class SharedVertex;
}
namespace UnityEngine::ProBuilder {
class Face;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace UnityEngine::ProBuilder {
class ProBuilderMesh;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
// Forward declare root types
namespace UnityEngine::ProBuilder::MeshOperations {
class CombineMeshes;
}
namespace UnityEngine::ProBuilder::MeshOperations {
class UnityEngine__ProBuilder__MeshOperations__CombineMeshes____c;
}
// Type: ::<>c
namespace UnityEngine::ProBuilder::MeshOperations {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12190))
// CS Name: UnityEngine.ProBuilder.MeshOperations.CombineMeshes::<>c
class CORDL_TYPE UnityEngine__ProBuilder__MeshOperations__CombineMeshes____c : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~UnityEngine__ProBuilder__MeshOperations__CombineMeshes____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__ProBuilder__MeshOperations__CombineMeshes____c", modifiers: " const&", def_value: None }]
constexpr UnityEngine__ProBuilder__MeshOperations__CombineMeshes____c(UnityEngine__ProBuilder__MeshOperations__CombineMeshes____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__ProBuilder__MeshOperations__CombineMeshes____c", modifiers: "&&", def_value: None }]
constexpr UnityEngine__ProBuilder__MeshOperations__CombineMeshes____c(UnityEngine__ProBuilder__MeshOperations__CombineMeshes____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__ProBuilder__MeshOperations__CombineMeshes____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnityEngine__ProBuilder__MeshOperations__CombineMeshes____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__ProBuilder__MeshOperations__CombineMeshes____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__ProBuilder__MeshOperations__CombineMeshes____c& operator=(UnityEngine__ProBuilder__MeshOperations__CombineMeshes____c&& o) noexcept = default;
  constexpr UnityEngine__ProBuilder__MeshOperations__CombineMeshes____c& operator=(UnityEngine__ProBuilder__MeshOperations__CombineMeshes____c const& o) noexcept = default;
                


// Fields

static UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__CombineMeshes____c __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__CombineMeshes____c value) ;

static UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__CombineMeshes____c __get___9() ;

static System::Func_2<UnityEngine::ProBuilder::Face,int32_t> __declspec(property(get=__get___9__5_0, put=__set___9__5_0))  __9__5_0;

static void __set___9__5_0(System::Func_2<UnityEngine::ProBuilder::Face,int32_t> value) ;

static System::Func_2<UnityEngine::ProBuilder::Face,int32_t> __get___9__5_0() ;


// Methods

// Ctor Parameters []
explicit UnityEngine__ProBuilder__MeshOperations__CombineMeshes____c() ;

/// @brief Method .ctor addr 0x2a0da44 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <SplitByMaxVertexCount>b__5_0 addr 0x2a0da4c size 0x18 virtual false final false
 int32_t _SplitByMaxVertexCount_b__5_0(UnityEngine::ProBuilder::Face x) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder::MeshOperations
// Type: UnityEngine.ProBuilder.MeshOperations::CombineMeshes
namespace UnityEngine::ProBuilder::MeshOperations {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12191))
// CS Name: UnityEngine.ProBuilder.MeshOperations.CombineMeshes
class CORDL_TYPE CombineMeshes : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using __c = UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__CombineMeshes____c;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~CombineMeshes() = default;

// Ctor Parameters [CppParam { name: "", ty: "CombineMeshes", modifiers: " const&", def_value: None }]
constexpr CombineMeshes(CombineMeshes const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CombineMeshes", modifiers: "&&", def_value: None }]
constexpr CombineMeshes(CombineMeshes&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CombineMeshes(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr CombineMeshes& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CombineMeshes& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CombineMeshes& operator=(CombineMeshes&& o) noexcept = default;
  constexpr CombineMeshes& operator=(CombineMeshes const& o) noexcept = default;
                


// Methods

/// @brief Method Combine addr 0x2a0a9f8 size 0x4 virtual false final false
static System::Collections::Generic::List_1<UnityEngine::ProBuilder::ProBuilderMesh> Combine(System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::ProBuilderMesh> meshes) ;

/// @brief Method Combine addr 0x2a0aea0 size 0xbb8 virtual false final false
static System::Collections::Generic::List_1<UnityEngine::ProBuilder::ProBuilderMesh> Combine(System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::ProBuilderMesh> meshes, UnityEngine::ProBuilder::ProBuilderMesh meshTarget) ;

/// @brief Method CombineToNewMeshes addr 0x2a0a9fc size 0x4a4 virtual false final false
static System::Collections::Generic::List_1<UnityEngine::ProBuilder::ProBuilderMesh> CombineToNewMeshes(System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::ProBuilderMesh> meshes) ;

/// @brief Method AccumulateMeshesInfo addr 0x2a0ba58 size 0xd74 virtual false final false
static void AccumulateMeshesInfo(System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::ProBuilderMesh> meshes, int32_t offset, ByRef<System::Collections::Generic::List_1<UnityEngine::ProBuilder::Vertex>> vertices, ByRef<System::Collections::Generic::List_1<UnityEngine::ProBuilder::Face>> faces, ByRef<System::Collections::Generic::List_1<UnityEngine::ProBuilder::Face>> autoUvFaces, ByRef<System::Collections::Generic::List_1<UnityEngine::ProBuilder::SharedVertex>> sharedVertices, ByRef<System::Collections::Generic::List_1<UnityEngine::ProBuilder::SharedVertex>> sharedTextures, ByRef<System::Collections::Generic::List_1<UnityEngine::Material>> materialMap, UnityEngine::Transform targetTransform) ;

/// @brief Method CreateMeshFromSplit addr 0x2a0d4d4 size 0x50c virtual false final false
static UnityEngine::ProBuilder::ProBuilderMesh CreateMeshFromSplit(System::Collections::Generic::List_1<UnityEngine::ProBuilder::Vertex> vertices, System::Collections::Generic::List_1<UnityEngine::ProBuilder::Face> faces, System::Collections::Generic::Dictionary_2<int32_t,int32_t> sharedVertexLookup, System::Collections::Generic::Dictionary_2<int32_t,int32_t> sharedTextureLookup, System::Collections::Generic::Dictionary_2<int32_t,int32_t> remap, ::ArrayW<UnityEngine::Material> materials) ;

/// @brief Method SplitByMaxVertexCount addr 0x2a0c7cc size 0xd08 virtual false final false
static System::Collections::Generic::List_1<UnityEngine::ProBuilder::ProBuilderMesh> SplitByMaxVertexCount(System::Collections::Generic::IList_1<UnityEngine::ProBuilder::Vertex> vertices, System::Collections::Generic::IList_1<UnityEngine::ProBuilder::Face> faces, System::Collections::Generic::IList_1<UnityEngine::ProBuilder::SharedVertex> sharedVertices, System::Collections::Generic::IList_1<UnityEngine::ProBuilder::SharedVertex> sharedTextures, uint32_t maxVertexCount) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder::MeshOperations
NEED_NO_BOX(UnityEngine::ProBuilder::MeshOperations::CombineMeshes);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::MeshOperations::CombineMeshes, "UnityEngine.ProBuilder.MeshOperations", "CombineMeshes");
NEED_NO_BOX(UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__CombineMeshes____c);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__CombineMeshes____c, "UnityEngine.ProBuilder.MeshOperations", "CombineMeshes/<>c");
