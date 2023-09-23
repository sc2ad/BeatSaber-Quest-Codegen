#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
namespace UnityEngine::ProBuilder {
class ProBuilderMesh;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace UnityEngine::ProBuilder {
template<typename T1,typename T2>
struct SimpleTuple_2;
}
namespace UnityEngine::ProBuilder {
class FaceRebuildData;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace UnityEngine::ProBuilder {
class WingedEdge;
}
namespace UnityEngine::ProBuilder {
class Vertex;
}
namespace UnityEngine::ProBuilder {
struct Edge;
}
namespace UnityEngine::ProBuilder {
struct EdgeLookup;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace UnityEngine::ProBuilder::MeshOperations {
class VertexEditing;
}
// Type: UnityEngine.ProBuilder.MeshOperations::VertexEditing
namespace UnityEngine::ProBuilder::MeshOperations {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12232))
// CS Name: UnityEngine.ProBuilder.MeshOperations.VertexEditing
class CORDL_TYPE VertexEditing : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~VertexEditing() = default;

// Ctor Parameters [CppParam { name: "", ty: "VertexEditing", modifiers: " const&", def_value: None }]
constexpr VertexEditing(VertexEditing const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "VertexEditing", modifiers: "&&", def_value: None }]
constexpr VertexEditing(VertexEditing&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit VertexEditing(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr VertexEditing& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr VertexEditing& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr VertexEditing& operator=(VertexEditing&& o) noexcept = default;
  constexpr VertexEditing& operator=(VertexEditing const& o) noexcept = default;
                


// Methods

/// @brief Method MergeVertices addr 0x2a2ff38 size 0x32c virtual false final false
static int32_t MergeVertices(UnityEngine::ProBuilder::ProBuilderMesh mesh, ::ArrayW<int32_t> indexes, bool collapseToFirst) ;

/// @brief Method SplitVertices addr 0x2a30264 size 0x88 virtual false final false
static void SplitVertices(UnityEngine::ProBuilder::ProBuilderMesh mesh, UnityEngine::ProBuilder::Edge edge) ;

/// @brief Method SplitVertices addr 0x2a302ec size 0x424 virtual false final false
static void SplitVertices(UnityEngine::ProBuilder::ProBuilderMesh mesh, System::Collections::Generic::IEnumerable_1<int32_t> vertices) ;

/// @brief Method WeldVertices addr 0x2a30710 size 0xce8 virtual false final false
static ::ArrayW<int32_t> WeldVertices(UnityEngine::ProBuilder::ProBuilderMesh mesh, System::Collections::Generic::IEnumerable_1<int32_t> indexes, float_t neighborRadius) ;

/// @brief Method ExplodeVertex addr 0x2a313f8 size 0xb90 virtual false final false
static UnityEngine::ProBuilder::FaceRebuildData ExplodeVertex(System::Collections::Generic::IList_1<UnityEngine::ProBuilder::Vertex> vertices, System::Collections::Generic::IList_1<UnityEngine::ProBuilder::SimpleTuple_2<UnityEngine::ProBuilder::WingedEdge,int32_t>> edgeAndCommonIndex, float_t distance, ByRef<System::Collections::Generic::Dictionary_2<int32_t,System::Collections::Generic::List_1<int32_t>>> appendedVertices) ;

/// @brief Method AlignEdgeWithDirection addr 0x2a31f88 size 0x48 virtual false final false
static UnityEngine::ProBuilder::Edge AlignEdgeWithDirection(UnityEngine::ProBuilder::EdgeLookup edge, int32_t commonIndex) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder::MeshOperations
NEED_NO_BOX(UnityEngine::ProBuilder::MeshOperations::VertexEditing);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::MeshOperations::VertexEditing, "UnityEngine.ProBuilder.MeshOperations", "VertexEditing");
