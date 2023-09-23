#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace UnityEngine {
struct Vector4;
}
namespace UnityEngine::ProBuilder {
class ProBuilderMesh;
}
namespace UnityEngine {
struct Vector2;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
struct Vector3;
}
namespace System::Collections::Generic {
template<typename T>
class ICollection_1;
}
namespace UnityEngine::ProBuilder {
class Face;
}
namespace UnityEngine::ProBuilder {
struct Edge;
}
namespace UnityEngine {
class Mesh;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
// Forward declare root types
namespace UnityEngine::ProBuilder {
class MeshHandles;
}
namespace UnityEngine::ProBuilder {
class UnityEngine__ProBuilder__MeshHandles____c;
}
// Type: ::<>c
namespace UnityEngine::ProBuilder {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12083))
// CS Name: UnityEngine.ProBuilder.MeshHandles::<>c
class CORDL_TYPE UnityEngine__ProBuilder__MeshHandles____c : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~UnityEngine__ProBuilder__MeshHandles____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__ProBuilder__MeshHandles____c", modifiers: " const&", def_value: None }]
constexpr UnityEngine__ProBuilder__MeshHandles____c(UnityEngine__ProBuilder__MeshHandles____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__ProBuilder__MeshHandles____c", modifiers: "&&", def_value: None }]
constexpr UnityEngine__ProBuilder__MeshHandles____c(UnityEngine__ProBuilder__MeshHandles____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__ProBuilder__MeshHandles____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnityEngine__ProBuilder__MeshHandles____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__ProBuilder__MeshHandles____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__ProBuilder__MeshHandles____c& operator=(UnityEngine__ProBuilder__MeshHandles____c&& o) noexcept = default;
  constexpr UnityEngine__ProBuilder__MeshHandles____c& operator=(UnityEngine__ProBuilder__MeshHandles____c const& o) noexcept = default;
                


// Fields

static UnityEngine::ProBuilder::UnityEngine__ProBuilder__MeshHandles____c __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(UnityEngine::ProBuilder::UnityEngine__ProBuilder__MeshHandles____c value) ;

static UnityEngine::ProBuilder::UnityEngine__ProBuilder__MeshHandles____c __get___9() ;

static System::Func_2<UnityEngine::ProBuilder::Face,System::Collections::Generic::IEnumerable_1<int32_t>> __declspec(property(get=__get___9__9_0, put=__set___9__9_0))  __9__9_0;

static void __set___9__9_0(System::Func_2<UnityEngine::ProBuilder::Face,System::Collections::Generic::IEnumerable_1<int32_t>> value) ;

static System::Func_2<UnityEngine::ProBuilder::Face,System::Collections::Generic::IEnumerable_1<int32_t>> __get___9__9_0() ;

static System::Func_2<UnityEngine::ProBuilder::Face,System::Collections::Generic::IEnumerable_1<int32_t>> __declspec(property(get=__get___9__10_0, put=__set___9__10_0))  __9__10_0;

static void __set___9__10_0(System::Func_2<UnityEngine::ProBuilder::Face,System::Collections::Generic::IEnumerable_1<int32_t>> value) ;

static System::Func_2<UnityEngine::ProBuilder::Face,System::Collections::Generic::IEnumerable_1<int32_t>> __get___9__10_0() ;


// Methods

// Ctor Parameters []
explicit UnityEngine__ProBuilder__MeshHandles____c() ;

/// @brief Method .ctor addr 0x29bc048 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <CreateFaceMesh>b__9_0 addr 0x29bc050 size 0x18 virtual false final false
 System::Collections::Generic::IEnumerable_1<int32_t> _CreateFaceMesh_b__9_0(UnityEngine::ProBuilder::Face x) ;

/// @brief Method <CreateFaceMeshFromFaces>b__10_0 addr 0x29bc068 size 0x18 virtual false final false
 System::Collections::Generic::IEnumerable_1<int32_t> _CreateFaceMeshFromFaces_b__10_0(UnityEngine::ProBuilder::Face x) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder
// Type: UnityEngine.ProBuilder::MeshHandles
namespace UnityEngine::ProBuilder {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12084))
// CS Name: UnityEngine.ProBuilder.MeshHandles
class CORDL_TYPE MeshHandles : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using __c = UnityEngine::ProBuilder::UnityEngine__ProBuilder__MeshHandles____c;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~MeshHandles() = default;

// Ctor Parameters [CppParam { name: "", ty: "MeshHandles", modifiers: " const&", def_value: None }]
constexpr MeshHandles(MeshHandles const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MeshHandles", modifiers: "&&", def_value: None }]
constexpr MeshHandles(MeshHandles&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MeshHandles(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr MeshHandles& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MeshHandles& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MeshHandles& operator=(MeshHandles&& o) noexcept = default;
  constexpr MeshHandles& operator=(MeshHandles const& o) noexcept = default;
                


// Fields

static System::Collections::Generic::List_1<UnityEngine::Vector3> __declspec(property(get=__get_s_Vector2List, put=__set_s_Vector2List))  s_Vector2List;

static void __set_s_Vector2List(System::Collections::Generic::List_1<UnityEngine::Vector3> value) ;

static System::Collections::Generic::List_1<UnityEngine::Vector3> __get_s_Vector2List() ;

static System::Collections::Generic::List_1<UnityEngine::Vector3> __declspec(property(get=__get_s_Vector3List, put=__set_s_Vector3List))  s_Vector3List;

static void __set_s_Vector3List(System::Collections::Generic::List_1<UnityEngine::Vector3> value) ;

static System::Collections::Generic::List_1<UnityEngine::Vector3> __get_s_Vector3List() ;

static System::Collections::Generic::List_1<UnityEngine::Vector4> __declspec(property(get=__get_s_Vector4List, put=__set_s_Vector4List))  s_Vector4List;

static void __set_s_Vector4List(System::Collections::Generic::List_1<UnityEngine::Vector4> value) ;

static System::Collections::Generic::List_1<UnityEngine::Vector4> __get_s_Vector4List() ;

static System::Collections::Generic::List_1<int32_t> __declspec(property(get=__get_s_IndexList, put=__set_s_IndexList))  s_IndexList;

static void __set_s_IndexList(System::Collections::Generic::List_1<int32_t> value) ;

static System::Collections::Generic::List_1<int32_t> __get_s_IndexList() ;

static System::Collections::Generic::List_1<int32_t> __declspec(property(get=__get_s_SharedVertexIndexList, put=__set_s_SharedVertexIndexList))  s_SharedVertexIndexList;

static void __set_s_SharedVertexIndexList(System::Collections::Generic::List_1<int32_t> value) ;

static System::Collections::Generic::List_1<int32_t> __get_s_SharedVertexIndexList() ;

static UnityEngine::Vector2 __declspec(property(get=__get_k_Billboard0, put=__set_k_Billboard0))  k_Billboard0;

static void __set_k_Billboard0(UnityEngine::Vector2 value) ;

static UnityEngine::Vector2 __get_k_Billboard0() ;

static UnityEngine::Vector2 __declspec(property(get=__get_k_Billboard1, put=__set_k_Billboard1))  k_Billboard1;

static void __set_k_Billboard1(UnityEngine::Vector2 value) ;

static UnityEngine::Vector2 __get_k_Billboard1() ;

static UnityEngine::Vector2 __declspec(property(get=__get_k_Billboard2, put=__set_k_Billboard2))  k_Billboard2;

static void __set_k_Billboard2(UnityEngine::Vector2 value) ;

static UnityEngine::Vector2 __get_k_Billboard2() ;

static UnityEngine::Vector2 __declspec(property(get=__get_k_Billboard3, put=__set_k_Billboard3))  k_Billboard3;

static void __set_k_Billboard3(UnityEngine::Vector2 value) ;

static UnityEngine::Vector2 __get_k_Billboard3() ;


// Methods

/// @brief Method CreateFaceMesh addr 0x29b88e4 size 0x164 virtual false final false
static void CreateFaceMesh(UnityEngine::ProBuilder::ProBuilderMesh mesh, UnityEngine::Mesh target) ;

/// @brief Method CreateFaceMeshFromFaces addr 0x29b8a48 size 0x150 virtual false final false
static void CreateFaceMeshFromFaces(UnityEngine::ProBuilder::ProBuilderMesh mesh, System::Collections::Generic::IList_1<UnityEngine::ProBuilder::Face> faces, UnityEngine::Mesh target) ;

/// @brief Method CreateEdgeMesh addr 0x29b8b98 size 0x3fc virtual false final false
static void CreateEdgeMesh(UnityEngine::ProBuilder::ProBuilderMesh mesh, UnityEngine::Mesh target) ;

/// @brief Method CreateEdgeMesh addr 0x29b8f94 size 0x2d4 virtual false final false
static void CreateEdgeMesh(UnityEngine::ProBuilder::ProBuilderMesh mesh, UnityEngine::Mesh target, ::ArrayW<UnityEngine::ProBuilder::Edge> edges) ;

/// @brief Method CreateVertexMesh addr 0x29b9268 size 0x19c virtual false final false
static void CreateVertexMesh(UnityEngine::ProBuilder::ProBuilderMesh mesh, UnityEngine::Mesh target) ;

/// @brief Method CreateVertexMesh addr 0x29b9404 size 0xb8 virtual false final false
static void CreateVertexMesh(UnityEngine::ProBuilder::ProBuilderMesh mesh, UnityEngine::Mesh target, System::Collections::Generic::IList_1<int32_t> indexes) ;

/// @brief Method CreatePointMesh addr 0x29b94bc size 0x1b8 virtual false final false
static void CreatePointMesh(::ArrayW<UnityEngine::Vector3> positions, System::Collections::Generic::IList_1<int32_t> indexes, UnityEngine::Mesh target) ;

/// @brief Method CreatePointBillboardMesh addr 0x29ba020 size 0x914 virtual false final false
static void CreatePointBillboardMesh(System::Collections::Generic::IList_1<UnityEngine::Vector3> positions, UnityEngine::Mesh target) ;

/// @brief Method CreatePointBillboardMesh addr 0x29b9674 size 0x9ac virtual false final false
static void CreatePointBillboardMesh(System::Collections::Generic::IList_1<UnityEngine::Vector3> positions, System::Collections::Generic::IList_1<int32_t> indexes, UnityEngine::Mesh target) ;

/// @brief Method CreateEdgeBillboardMesh addr 0x29ba934 size 0x8c0 virtual false final false
static void CreateEdgeBillboardMesh(UnityEngine::ProBuilder::ProBuilderMesh mesh, UnityEngine::Mesh target) ;

/// @brief Method CreateEdgeBillboardMesh addr 0x29bb1f4 size 0xc48 virtual false final false
static void CreateEdgeBillboardMesh(UnityEngine::ProBuilder::ProBuilderMesh mesh, UnityEngine::Mesh target, System::Collections::Generic::ICollection_1<UnityEngine::ProBuilder::Edge> edges) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder
NEED_NO_BOX(UnityEngine::ProBuilder::MeshHandles);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::MeshHandles, "UnityEngine.ProBuilder", "MeshHandles");
NEED_NO_BOX(UnityEngine::ProBuilder::UnityEngine__ProBuilder__MeshHandles____c);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::UnityEngine__ProBuilder__MeshHandles____c, "UnityEngine.ProBuilder", "MeshHandles/<>c");
