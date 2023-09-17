#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstddef>
#include <cstdint>
namespace {
namespace UnityEngine {
class Mesh;
}
namespace UnityEngine {
struct Vector3;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace UnityEngine {
struct Vector4;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
struct Color32;
}
namespace UnityEngine {
struct Bounds;
}
namespace TMPro {
struct VertexSortingOrder;
}
// Forward declare root types
namespace TMPro {
struct TMP_MeshInfo;
}
// Type: TMPro::TMP_MeshInfo
namespace TMPro {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12347))
// CS Name: TMPro.TMP_MeshInfo
struct CORDL_TYPE TMP_MeshInfo : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "mesh", ty: "::UnityEngine::Mesh", modifiers: "", def_value: None }, CppParam { name: "vertexCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "vertices", ty: "::ArrayW<::UnityEngine::Vector3>", modifiers: "", def_value: None }, CppParam { name: "normals", ty: "::ArrayW<::UnityEngine::Vector3>", modifiers: "", def_value: None }, CppParam { name: "tangents", ty: "::ArrayW<::UnityEngine::Vector4>", modifiers: "", def_value: None }, CppParam { name: "uvs0", ty: "::ArrayW<::UnityEngine::Vector2>", modifiers: "", def_value: None }, CppParam { name: "uvs2", ty: "::ArrayW<::UnityEngine::Vector2>", modifiers: "", def_value: None }, CppParam { name: "colors32", ty: "::ArrayW<::UnityEngine::Color32>", modifiers: "", def_value: None }, CppParam { name: "triangles", ty: "::ArrayW<int32_t>", modifiers: "", def_value: None }, CppParam { name: "material", ty: "::UnityEngine::Material", modifiers: "", def_value: None }]
constexpr TMP_MeshInfo(::UnityEngine::Mesh mesh, int32_t vertexCount, ::ArrayW<::UnityEngine::Vector3> vertices, ::ArrayW<::UnityEngine::Vector3> normals, ::ArrayW<::UnityEngine::Vector4> tangents, ::ArrayW<::UnityEngine::Vector2> uvs0, ::ArrayW<::UnityEngine::Vector2> uvs2, ::ArrayW<::UnityEngine::Color32> colors32, ::ArrayW<int32_t> triangles, ::UnityEngine::Material material) noexcept;


                    constexpr TMP_MeshInfo(TMP_MeshInfo const&) = default;
                    constexpr TMP_MeshInfo(TMP_MeshInfo&&) = default;
                    constexpr TMP_MeshInfo& operator=(TMP_MeshInfo const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr TMP_MeshInfo& operator=(TMP_MeshInfo&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x50};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit TMP_MeshInfo(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

static ::UnityEngine::Color32 __declspec(property(get=__get_s_DefaultColor, put=__set_s_DefaultColor))  s_DefaultColor;

static void __set_s_DefaultColor(::UnityEngine::Color32 value) ;

static ::UnityEngine::Color32 __get_s_DefaultColor() ;

static ::UnityEngine::Vector3 __declspec(property(get=__get_s_DefaultNormal, put=__set_s_DefaultNormal))  s_DefaultNormal;

static void __set_s_DefaultNormal(::UnityEngine::Vector3 value) ;

static ::UnityEngine::Vector3 __get_s_DefaultNormal() ;

static ::UnityEngine::Vector4 __declspec(property(get=__get_s_DefaultTangent, put=__set_s_DefaultTangent))  s_DefaultTangent;

static void __set_s_DefaultTangent(::UnityEngine::Vector4 value) ;

static ::UnityEngine::Vector4 __get_s_DefaultTangent() ;

static ::UnityEngine::Bounds __declspec(property(get=__get_s_DefaultBounds, put=__set_s_DefaultBounds))  s_DefaultBounds;

static void __set_s_DefaultBounds(::UnityEngine::Bounds value) ;

static ::UnityEngine::Bounds __get_s_DefaultBounds() ;

 ::UnityEngine::Mesh __declspec(property(get=__get_mesh, put=__set_mesh))  mesh;

constexpr void __set_mesh(::UnityEngine::Mesh value) ;

constexpr ::UnityEngine::Mesh __get_mesh() const;

 int32_t __declspec(property(get=__get_vertexCount, put=__set_vertexCount))  vertexCount;

constexpr void __set_vertexCount(int32_t value) ;

constexpr int32_t __get_vertexCount() const;

 ::ArrayW<::UnityEngine::Vector3> __declspec(property(get=__get_vertices, put=__set_vertices))  vertices;

constexpr void __set_vertices(::ArrayW<::UnityEngine::Vector3> value) ;

constexpr ::ArrayW<::UnityEngine::Vector3> __get_vertices() const;

 ::ArrayW<::UnityEngine::Vector3> __declspec(property(get=__get_normals, put=__set_normals))  normals;

constexpr void __set_normals(::ArrayW<::UnityEngine::Vector3> value) ;

constexpr ::ArrayW<::UnityEngine::Vector3> __get_normals() const;

 ::ArrayW<::UnityEngine::Vector4> __declspec(property(get=__get_tangents, put=__set_tangents))  tangents;

constexpr void __set_tangents(::ArrayW<::UnityEngine::Vector4> value) ;

constexpr ::ArrayW<::UnityEngine::Vector4> __get_tangents() const;

 ::ArrayW<::UnityEngine::Vector2> __declspec(property(get=__get_uvs0, put=__set_uvs0))  uvs0;

constexpr void __set_uvs0(::ArrayW<::UnityEngine::Vector2> value) ;

constexpr ::ArrayW<::UnityEngine::Vector2> __get_uvs0() const;

 ::ArrayW<::UnityEngine::Vector2> __declspec(property(get=__get_uvs2, put=__set_uvs2))  uvs2;

constexpr void __set_uvs2(::ArrayW<::UnityEngine::Vector2> value) ;

constexpr ::ArrayW<::UnityEngine::Vector2> __get_uvs2() const;

 ::ArrayW<::UnityEngine::Color32> __declspec(property(get=__get_colors32, put=__set_colors32))  colors32;

constexpr void __set_colors32(::ArrayW<::UnityEngine::Color32> value) ;

constexpr ::ArrayW<::UnityEngine::Color32> __get_colors32() const;

 ::ArrayW<int32_t> __declspec(property(get=__get_triangles, put=__set_triangles))  triangles;

constexpr void __set_triangles(::ArrayW<int32_t> value) ;

constexpr ::ArrayW<int32_t> __get_triangles() const;

 ::UnityEngine::Material __declspec(property(get=__get_material, put=__set_material))  material;

constexpr void __set_material(::UnityEngine::Material value) ;

constexpr ::UnityEngine::Material __get_material() const;


// Methods

/// @brief Method .ctor addr 0x2aa55d8 size 0x4f8 virtual false final false
 void _ctor(::UnityEngine::Mesh mesh, int32_t size) ;

/// @brief Method .ctor addr 0x2aa5ad0 size 0x784 virtual false final false
 void _ctor(::UnityEngine::Mesh mesh, int32_t size, bool isVolumetric) ;

/// @brief Method ResizeMeshInfo addr 0x2aa6254 size 0x474 virtual false final false
 void ResizeMeshInfo(int32_t size) ;

/// @brief Method ResizeMeshInfo addr 0x2aa66c8 size 0x8d4 virtual false final false
 void ResizeMeshInfo(int32_t size, bool isVolumetric) ;

/// @brief Method Clear addr 0x2aa6f9c size 0xa4 virtual false final false
 void Clear() ;

/// @brief Method Clear addr 0x2aa7040 size 0x138 virtual false final false
 void Clear(bool uploadChanges) ;

/// @brief Method ClearUnusedVertices addr 0x2aa7178 size 0x3c virtual false final false
 void ClearUnusedVertices() ;

/// @brief Method ClearUnusedVertices addr 0x2aa71b4 size 0x34 virtual false final false
 void ClearUnusedVertices(int32_t startIndex) ;

/// @brief Method ClearUnusedVertices addr 0x2aa71e8 size 0xc4 virtual false final false
 void ClearUnusedVertices(int32_t startIndex, bool updateMesh) ;

/// @brief Method SortGeometry addr 0x2aa72ac size 0x7c virtual false final false
 void SortGeometry(::TMPro::VertexSortingOrder order) ;

/// @brief Method SortGeometry addr 0x2aa78b4 size 0x1d4 virtual false final false
 void SortGeometry(::System::Collections::Generic::IList_1<int32_t> sortingOrder) ;

/// @brief Method SwapVertexData addr 0x2aa7328 size 0x58c virtual false final false
 void SwapVertexData(int32_t src, int32_t dst) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def TMPro
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::TMPro::TMP_MeshInfo, "TMPro", "TMP_MeshInfo");
