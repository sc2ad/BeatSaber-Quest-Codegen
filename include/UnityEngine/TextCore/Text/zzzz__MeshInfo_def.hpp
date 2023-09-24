#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstddef>
#include <cstdint>
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Color32;
}
namespace UnityEngine::TextCore::Text {
struct VertexSortingOrder;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
class Material;
}
// Forward declare root types
namespace UnityEngine::TextCore::Text {
struct MeshInfo;
}
// Type: UnityEngine.TextCore.Text::MeshInfo
namespace UnityEngine::TextCore::Text {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13543))
// CS Name: UnityEngine.TextCore.Text.MeshInfo
struct CORDL_TYPE MeshInfo : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "vertexCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "vertices", ty: "::ArrayW<UnityEngine::Vector3>", modifiers: "", def_value: None }, CppParam { name: "uvs0", ty: "::ArrayW<UnityEngine::Vector2>", modifiers: "", def_value: None }, CppParam { name: "uvs2", ty: "::ArrayW<UnityEngine::Vector2>", modifiers: "", def_value: None }, CppParam { name: "colors32", ty: "::ArrayW<UnityEngine::Color32>", modifiers: "", def_value: None }, CppParam { name: "triangles", ty: "::ArrayW<int32_t>", modifiers: "", def_value: None }, CppParam { name: "material", ty: "UnityEngine::Material", modifiers: "", def_value: None }]
constexpr MeshInfo(int32_t vertexCount, ::ArrayW<UnityEngine::Vector3> vertices, ::ArrayW<UnityEngine::Vector2> uvs0, ::ArrayW<UnityEngine::Vector2> uvs2, ::ArrayW<UnityEngine::Color32> colors32, ::ArrayW<int32_t> triangles, UnityEngine::Material material) noexcept;


                    constexpr MeshInfo(MeshInfo const&) = default;
                    constexpr MeshInfo(MeshInfo&&) = default;
                    constexpr MeshInfo& operator=(MeshInfo const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr MeshInfo& operator=(MeshInfo&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x38};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit MeshInfo(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

static UnityEngine::Color32 __declspec(property(get=__get_k_DefaultColor, put=__set_k_DefaultColor))  k_DefaultColor;

static void __set_k_DefaultColor(UnityEngine::Color32 value) ;

static UnityEngine::Color32 __get_k_DefaultColor() ;

 int32_t __declspec(property(get=__get_vertexCount, put=__set_vertexCount))  vertexCount;

constexpr void __set_vertexCount(int32_t value) ;

constexpr int32_t __get_vertexCount() const;

 ::ArrayW<UnityEngine::Vector3> __declspec(property(get=__get_vertices, put=__set_vertices))  vertices;

constexpr void __set_vertices(::ArrayW<UnityEngine::Vector3> value) ;

constexpr ::ArrayW<UnityEngine::Vector3> __get_vertices() const;

 ::ArrayW<UnityEngine::Vector2> __declspec(property(get=__get_uvs0, put=__set_uvs0))  uvs0;

constexpr void __set_uvs0(::ArrayW<UnityEngine::Vector2> value) ;

constexpr ::ArrayW<UnityEngine::Vector2> __get_uvs0() const;

 ::ArrayW<UnityEngine::Vector2> __declspec(property(get=__get_uvs2, put=__set_uvs2))  uvs2;

constexpr void __set_uvs2(::ArrayW<UnityEngine::Vector2> value) ;

constexpr ::ArrayW<UnityEngine::Vector2> __get_uvs2() const;

 ::ArrayW<UnityEngine::Color32> __declspec(property(get=__get_colors32, put=__set_colors32))  colors32;

constexpr void __set_colors32(::ArrayW<UnityEngine::Color32> value) ;

constexpr ::ArrayW<UnityEngine::Color32> __get_colors32() const;

 ::ArrayW<int32_t> __declspec(property(get=__get_triangles, put=__set_triangles))  triangles;

constexpr void __set_triangles(::ArrayW<int32_t> value) ;

constexpr ::ArrayW<int32_t> __get_triangles() const;

 UnityEngine::Material __declspec(property(get=__get_material, put=__set_material))  material;

constexpr void __set_material(UnityEngine::Material value) ;

constexpr UnityEngine::Material __get_material() const;


// Methods

/// @brief Method .ctor addr 0x2bd336c size 0x354 virtual false final false
 void _ctor(int32_t size) ;

/// @brief Method ResizeMeshInfo addr 0x2bd36c0 size 0x1e8 virtual false final false
 void ResizeMeshInfo(int32_t size) ;

/// @brief Method Clear addr 0x2bcfff8 size 0x2c virtual false final false
 void Clear(bool uploadChanges) ;

/// @brief Method ClearUnusedVertices addr 0x2bd38a8 size 0x3c virtual false final false
 void ClearUnusedVertices() ;

/// @brief Method SortGeometry addr 0x2bd38e4 size 0x7c virtual false final false
 void SortGeometry(UnityEngine::TextCore::Text::VertexSortingOrder order) ;

/// @brief Method SwapVertexData addr 0x2bd3960 size 0x58c virtual false final false
 void SwapVertexData(int32_t src, int32_t dst) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::TextCore::Text
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TextCore::Text::MeshInfo, "UnityEngine.TextCore.Text", "MeshInfo");
