#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace UnityEngine {
class GameObject;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::ProBuilder {
struct Edge;
}
namespace UnityEngine::ProBuilder {
class Face;
}
namespace UnityEngine::ProBuilder {
class ProBuilderMesh;
}
namespace System {
template<typename T>
class IEquatable_1;
}
// Forward declare root types
namespace UnityEngine::ProBuilder {
class SceneSelection;
}
// Type: UnityEngine.ProBuilder::SceneSelection
namespace UnityEngine::ProBuilder {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12133))
// CS Name: UnityEngine.ProBuilder.SceneSelection
class CORDL_TYPE SceneSelection : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::System::IEquatable_1<::UnityEngine::ProBuilder::SceneSelection>
constexpr operator  ::System::IEquatable_1<::UnityEngine::ProBuilder::SceneSelection>() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~SceneSelection() = default;

// Ctor Parameters [CppParam { name: "", ty: "SceneSelection", modifiers: " const&", def_value: None }]
constexpr SceneSelection(SceneSelection const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SceneSelection", modifiers: "&&", def_value: None }]
constexpr SceneSelection(SceneSelection&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SceneSelection(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr SceneSelection& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SceneSelection& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SceneSelection& operator=(SceneSelection&& o) noexcept = default;
  constexpr SceneSelection& operator=(SceneSelection const& o) noexcept = default;
                


// Fields

 ::UnityEngine::GameObject __declspec(property(get=__get_gameObject, put=__set_gameObject))  gameObject;

constexpr void __set_gameObject(::UnityEngine::GameObject value) ;

constexpr ::UnityEngine::GameObject __get_gameObject() const;

 ::UnityEngine::ProBuilder::ProBuilderMesh __declspec(property(get=__get_mesh, put=__set_mesh))  mesh;

constexpr void __set_mesh(::UnityEngine::ProBuilder::ProBuilderMesh value) ;

constexpr ::UnityEngine::ProBuilder::ProBuilderMesh __get_mesh() const;

 ::System::Collections::Generic::List_1<int32_t> __declspec(property(get=__get_m_Vertices, put=__set_m_Vertices))  m_Vertices;

constexpr void __set_m_Vertices(::System::Collections::Generic::List_1<int32_t> value) ;

constexpr ::System::Collections::Generic::List_1<int32_t> __get_m_Vertices() const;

 ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Edge> __declspec(property(get=__get_m_Edges, put=__set_m_Edges))  m_Edges;

constexpr void __set_m_Edges(::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Edge> value) ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Edge> __get_m_Edges() const;

 ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face> __declspec(property(get=__get_m_Faces, put=__set_m_Faces))  m_Faces;

constexpr void __set_m_Faces(::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face> value) ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face> __get_m_Faces() const;

 int32_t __declspec(property(get=__get_vertex, put=__set_vertex))  vertex;

constexpr void __set_vertex(int32_t value) ;

constexpr int32_t __get_vertex() const;

 ::UnityEngine::ProBuilder::Edge __declspec(property(get=__get_edge, put=__set_edge))  edge;

constexpr void __set_edge(::UnityEngine::ProBuilder::Edge value) ;

constexpr ::UnityEngine::ProBuilder::Edge __get_edge() const;

 ::UnityEngine::ProBuilder::Face __declspec(property(get=__get_face, put=__set_face))  face;

constexpr void __set_face(::UnityEngine::ProBuilder::Face value) ;

constexpr ::UnityEngine::ProBuilder::Face __get_face() const;


// Properties

 ::System::Collections::Generic::List_1<int32_t> __declspec(property(get=get_vertexes, put=set_vertexes))  vertexes;

 ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Edge> __declspec(property(get=get_edges, put=set_edges))  edges;

 ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face> __declspec(property(get=get_faces, put=set_faces))  faces;


// Methods

/// @brief Method get_vertexes addr 0x29d55a0 size 0x8 virtual false final false
 ::System::Collections::Generic::List_1<int32_t> get_vertexes() ;

/// @brief Method set_vertexes addr 0x29d55a8 size 0x8 virtual false final false
 void set_vertexes(::System::Collections::Generic::List_1<int32_t> value) ;

/// @brief Method get_edges addr 0x29d55b0 size 0x8 virtual false final false
 ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Edge> get_edges() ;

/// @brief Method set_edges addr 0x29d55b8 size 0x8 virtual false final false
 void set_edges(::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Edge> value) ;

/// @brief Method get_faces addr 0x29d55c0 size 0x8 virtual false final false
 ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face> get_faces() ;

/// @brief Method set_faces addr 0x29d55c8 size 0x8 virtual false final false
 void set_faces(::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face> value) ;

// Ctor Parameters [CppParam { name: "gameObject", ty: "::UnityEngine::GameObject", modifiers: "", def_value: None }]
explicit SceneSelection(::UnityEngine::GameObject gameObject) ;

/// @brief Method .ctor addr 0x29d55d0 size 0x118 virtual false final false
 void _ctor(::UnityEngine::GameObject gameObject) ;

// Ctor Parameters [CppParam { name: "mesh", ty: "::UnityEngine::ProBuilder::ProBuilderMesh", modifiers: "", def_value: None }, CppParam { name: "vertex", ty: "int32_t", modifiers: "", def_value: None }]
explicit SceneSelection(::UnityEngine::ProBuilder::ProBuilderMesh mesh, int32_t vertex) ;

/// @brief Method .ctor addr 0x29d56e8 size 0xf8 virtual false final false
 void _ctor(::UnityEngine::ProBuilder::ProBuilderMesh mesh, int32_t vertex) ;

// Ctor Parameters [CppParam { name: "mesh", ty: "::UnityEngine::ProBuilder::ProBuilderMesh", modifiers: "", def_value: None }, CppParam { name: "edge", ty: "::UnityEngine::ProBuilder::Edge", modifiers: "", def_value: None }]
explicit SceneSelection(::UnityEngine::ProBuilder::ProBuilderMesh mesh, ::UnityEngine::ProBuilder::Edge edge) ;

/// @brief Method .ctor addr 0x29d5904 size 0xf8 virtual false final false
 void _ctor(::UnityEngine::ProBuilder::ProBuilderMesh mesh, ::UnityEngine::ProBuilder::Edge edge) ;

// Ctor Parameters [CppParam { name: "mesh", ty: "::UnityEngine::ProBuilder::ProBuilderMesh", modifiers: "", def_value: None }, CppParam { name: "face", ty: "::UnityEngine::ProBuilder::Face", modifiers: "", def_value: None }]
explicit SceneSelection(::UnityEngine::ProBuilder::ProBuilderMesh mesh, ::UnityEngine::ProBuilder::Face face) ;

/// @brief Method .ctor addr 0x29d5b20 size 0xf8 virtual false final false
 void _ctor(::UnityEngine::ProBuilder::ProBuilderMesh mesh, ::UnityEngine::ProBuilder::Face face) ;

// Ctor Parameters [CppParam { name: "mesh", ty: "::UnityEngine::ProBuilder::ProBuilderMesh", modifiers: "", def_value: None }, CppParam { name: "vertexes", ty: "::System::Collections::Generic::List_1<int32_t>", modifiers: "", def_value: None }]
explicit SceneSelection(::UnityEngine::ProBuilder::ProBuilderMesh mesh, ::System::Collections::Generic::List_1<int32_t> vertexes) ;

/// @brief Method .ctor addr 0x29d57e0 size 0x124 virtual false final false
 void _ctor(::UnityEngine::ProBuilder::ProBuilderMesh mesh, ::System::Collections::Generic::List_1<int32_t> vertexes) ;

// Ctor Parameters [CppParam { name: "mesh", ty: "::UnityEngine::ProBuilder::ProBuilderMesh", modifiers: "", def_value: None }, CppParam { name: "edges", ty: "::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Edge>", modifiers: "", def_value: None }]
explicit SceneSelection(::UnityEngine::ProBuilder::ProBuilderMesh mesh, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Edge> edges) ;

/// @brief Method .ctor addr 0x29d59fc size 0x124 virtual false final false
 void _ctor(::UnityEngine::ProBuilder::ProBuilderMesh mesh, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Edge> edges) ;

// Ctor Parameters [CppParam { name: "mesh", ty: "::UnityEngine::ProBuilder::ProBuilderMesh", modifiers: "", def_value: None }, CppParam { name: "faces", ty: "::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face>", modifiers: "", def_value: None }]
explicit SceneSelection(::UnityEngine::ProBuilder::ProBuilderMesh mesh, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face> faces) ;

/// @brief Method .ctor addr 0x29d5c18 size 0x124 virtual false final false
 void _ctor(::UnityEngine::ProBuilder::ProBuilderMesh mesh, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face> faces) ;

/// @brief Method SetSingleFace addr 0x29d5d3c size 0xe0 virtual false final false
 void SetSingleFace(::UnityEngine::ProBuilder::Face face) ;

/// @brief Method SetSingleVertex addr 0x29d5e1c size 0xa8 virtual false final false
 void SetSingleVertex(int32_t vertex) ;

/// @brief Method SetSingleEdge addr 0x29d5ec4 size 0xa8 virtual false final false
 void SetSingleEdge(::UnityEngine::ProBuilder::Edge edge) ;

/// @brief Method Clear addr 0x29d5f6c size 0xac virtual false final false
 void Clear() ;

/// @brief Method CopyTo addr 0x29d6018 size 0x540 virtual false final false
 void CopyTo(::UnityEngine::ProBuilder::SceneSelection dst) ;

/// @brief Method ToString addr 0x29d6558 size 0x260 virtual true final false
 ::StringW ToString() ;

/// @brief Method Equals addr 0x29d67b8 size 0xec virtual true final true
 bool Equals(::UnityEngine::ProBuilder::SceneSelection other) ;

/// @brief Method Equals addr 0x29d68a4 size 0x10c virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x29d69b0 size 0x158 virtual true final false
 int32_t GetHashCode() ;

/// @brief Method op_Equality addr 0x29d6b08 size 0x8 virtual false final false
static bool op_Equality(::UnityEngine::ProBuilder::SceneSelection left, ::UnityEngine::ProBuilder::SceneSelection right) ;

/// @brief Method op_Inequality addr 0x29d6b10 size 0x1c virtual false final false
static bool op_Inequality(::UnityEngine::ProBuilder::SceneSelection left, ::UnityEngine::ProBuilder::SceneSelection right) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::ProBuilder::SceneSelection);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::SceneSelection, "UnityEngine.ProBuilder", "SceneSelection");
