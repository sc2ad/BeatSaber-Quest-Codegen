#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
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
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine::ProBuilder {
class Vertex;
}
// Forward declare root types
namespace UnityEngine::ProBuilder {
class VertexPositioning;
}
// Type: UnityEngine.ProBuilder::VertexPositioning
namespace UnityEngine::ProBuilder {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12161))
// CS Name: UnityEngine.ProBuilder.VertexPositioning
class CORDL_TYPE VertexPositioning : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~VertexPositioning() = default;

// Ctor Parameters [CppParam { name: "", ty: "VertexPositioning", modifiers: " const&", def_value: None }]
constexpr VertexPositioning(VertexPositioning const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "VertexPositioning", modifiers: "&&", def_value: None }]
constexpr VertexPositioning(VertexPositioning&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit VertexPositioning(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr VertexPositioning& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr VertexPositioning& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr VertexPositioning& operator=(VertexPositioning&& o) noexcept = default;
  constexpr VertexPositioning& operator=(VertexPositioning const& o) noexcept = default;
                


// Fields

static System::Collections::Generic::List_1<int32_t> __declspec(property(get=__get_s_CoincidentVertices, put=__set_s_CoincidentVertices))  s_CoincidentVertices;

static void __set_s_CoincidentVertices(System::Collections::Generic::List_1<int32_t> value) ;

static System::Collections::Generic::List_1<int32_t> __get_s_CoincidentVertices() ;


// Methods

/// @brief Method VerticesInWorldSpace addr 0x29ee41c size 0x17c virtual false final false
static ::ArrayW<UnityEngine::Vector3> VerticesInWorldSpace(UnityEngine::ProBuilder::ProBuilderMesh mesh) ;

/// @brief Method TranslateVerticesInWorldSpace addr 0x29ee598 size 0x118 virtual false final false
static void TranslateVerticesInWorldSpace(UnityEngine::ProBuilder::ProBuilderMesh mesh, ::ArrayW<int32_t> indexes, UnityEngine::Vector3 offset) ;

/// @brief Method TranslateVerticesInWorldSpace addr 0x29ee6b0 size 0x4d0 virtual false final false
static void TranslateVerticesInWorldSpace(UnityEngine::ProBuilder::ProBuilderMesh mesh, ::ArrayW<int32_t> indexes, UnityEngine::Vector3 offset, float_t snapValue, bool snapAxisOnly) ;

/// @brief Method TranslateVertices addr 0x29eeb80 size 0x130 virtual false final false
static void TranslateVertices(UnityEngine::ProBuilder::ProBuilderMesh mesh, System::Collections::Generic::IEnumerable_1<int32_t> indexes, UnityEngine::Vector3 offset) ;

/// @brief Method TranslateVertices addr 0x29eee10 size 0x130 virtual false final false
static void TranslateVertices(UnityEngine::ProBuilder::ProBuilderMesh mesh, System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Edge> edges, UnityEngine::Vector3 offset) ;

/// @brief Method TranslateVertices addr 0x29eef40 size 0x130 virtual false final false
static void TranslateVertices(UnityEngine::ProBuilder::ProBuilderMesh mesh, System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Face> faces, UnityEngine::Vector3 offset) ;

/// @brief Method TranslateVerticesInternal addr 0x29eecb0 size 0x160 virtual false final false
static void TranslateVerticesInternal(UnityEngine::ProBuilder::ProBuilderMesh mesh, System::Collections::Generic::IEnumerable_1<int32_t> indices, UnityEngine::Vector3 offset) ;

/// @brief Method SetSharedVertexPosition addr 0x29ef070 size 0x3b0 virtual false final false
static void SetSharedVertexPosition(UnityEngine::ProBuilder::ProBuilderMesh mesh, int32_t sharedVertexHandle, UnityEngine::Vector3 position) ;

/// @brief Method SetSharedVertexValues addr 0x29ef420 size 0x30c virtual false final false
static void SetSharedVertexValues(UnityEngine::ProBuilder::ProBuilderMesh mesh, int32_t sharedVertexHandle, UnityEngine::ProBuilder::Vertex vertex) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder
NEED_NO_BOX(UnityEngine::ProBuilder::VertexPositioning);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::VertexPositioning, "UnityEngine.ProBuilder", "VertexPositioning");
