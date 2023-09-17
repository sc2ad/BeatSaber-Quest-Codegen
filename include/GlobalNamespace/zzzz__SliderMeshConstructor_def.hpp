#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace {
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Vector2;
}
namespace GlobalNamespace {
class VertexPath;
}
namespace UnityEngine {
class MeshFilter;
}
namespace UnityEngine {
class Mesh;
}
// Forward declare root types
namespace GlobalNamespace {
class SliderMeshConstructor;
}
// Type: ::SliderMeshConstructor
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4936))
// CS Name: SliderMeshConstructor
class CORDL_TYPE SliderMeshConstructor : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~SliderMeshConstructor() = default;

// Ctor Parameters [CppParam { name: "", ty: "SliderMeshConstructor", modifiers: " const&", def_value: None }]
constexpr SliderMeshConstructor(SliderMeshConstructor const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SliderMeshConstructor", modifiers: "&&", def_value: None }]
constexpr SliderMeshConstructor(SliderMeshConstructor&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SliderMeshConstructor(void* ptr) noexcept : ::UnityEngine::MonoBehaviour(ptr) {
}


  constexpr SliderMeshConstructor& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SliderMeshConstructor& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SliderMeshConstructor& operator=(SliderMeshConstructor&& o) noexcept = default;
  constexpr SliderMeshConstructor& operator=(SliderMeshConstructor const& o) noexcept = default;
                


// Fields

 ::UnityEngine::MeshFilter __declspec(property(get=__get__meshFilter, put=__set__meshFilter))  _meshFilter;

constexpr void __set__meshFilter(::UnityEngine::MeshFilter value) ;

constexpr ::UnityEngine::MeshFilter __get__meshFilter() const;

 ::ArrayW<::UnityEngine::Vector3> __declspec(property(get=__get_reusableVerts, put=__set_reusableVerts))  reusableVerts;

constexpr void __set_reusableVerts(::ArrayW<::UnityEngine::Vector3> value) ;

constexpr ::ArrayW<::UnityEngine::Vector3> __get_reusableVerts() const;

 ::ArrayW<::UnityEngine::Vector2> __declspec(property(get=__get_reusableUvs, put=__set_reusableUvs))  reusableUvs;

constexpr void __set_reusableUvs(::ArrayW<::UnityEngine::Vector2> value) ;

constexpr ::ArrayW<::UnityEngine::Vector2> __get_reusableUvs() const;

 ::ArrayW<::UnityEngine::Vector3> __declspec(property(get=__get_reusableNormals, put=__set_reusableNormals))  reusableNormals;

constexpr void __set_reusableNormals(::ArrayW<::UnityEngine::Vector3> value) ;

constexpr ::ArrayW<::UnityEngine::Vector3> __get_reusableNormals() const;

 ::ArrayW<int32_t> __declspec(property(get=__get_reusableTriangles, put=__set_reusableTriangles))  reusableTriangles;

constexpr void __set_reusableTriangles(::ArrayW<int32_t> value) ;

constexpr ::ArrayW<int32_t> __get_reusableTriangles() const;

 ::UnityEngine::Mesh __declspec(property(get=__get__mesh, put=__set__mesh))  _mesh;

constexpr void __set__mesh(::UnityEngine::Mesh value) ;

constexpr ::UnityEngine::Mesh __get__mesh() const;


// Properties

 ::UnityEngine::Mesh __declspec(property(get=get_mesh))  mesh;


// Methods

/// @brief Method get_mesh addr 0x224b89c size 0x8 virtual false final false
 ::UnityEngine::Mesh get_mesh() ;

/// @brief Method CreateMeshIfNonExisting addr 0x224b8a4 size 0xb8 virtual false final false
 void CreateMeshIfNonExisting() ;

/// @brief Method CreateSliderMesh addr 0x224b95c size 0x190 virtual false final false
 void CreateSliderMesh(::GlobalNamespace::VertexPath path) ;

/// @brief Method CreateSliderMeshInternal addr 0x0 size 0xffffffffffffffff virtual true final false
 void CreateSliderMeshInternal(::GlobalNamespace::VertexPath path) ;

/// @brief Method GetVertexCount addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetVertexCount(::GlobalNamespace::VertexPath path) ;

/// @brief Method GetTrianglesCount addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetTrianglesCount(::GlobalNamespace::VertexPath path) ;

// Ctor Parameters []
explicit SliderMeshConstructor() ;

/// @brief Method .ctor addr 0x224baec size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::SliderMeshConstructor);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SliderMeshConstructor, "", "SliderMeshConstructor");
