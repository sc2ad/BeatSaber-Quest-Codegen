#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace UnityEngine::ProBuilder {
struct EdgeLookup;
}
namespace UnityEngine::ProBuilder {
struct Edge;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::ProBuilder {
class WingedEdge;
}
namespace UnityEngine::ProBuilder {
class Face;
}
namespace UnityEngine::ProBuilder {
class ProBuilderMesh;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace UnityEngine::ProBuilder {
struct ExtrudeMethod;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace UnityEngine::ProBuilder {
class FaceRebuildData;
}
// Forward declare root types
namespace UnityEngine::ProBuilder::MeshOperations {
class ExtrudeElements;
}
namespace UnityEngine::ProBuilder::MeshOperations {
class UnityEngine__ProBuilder__MeshOperations__ExtrudeElements____c;
}
// Type: ::<>c
namespace UnityEngine::ProBuilder::MeshOperations {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12205))
// CS Name: UnityEngine.ProBuilder.MeshOperations.ExtrudeElements::<>c
class CORDL_TYPE UnityEngine__ProBuilder__MeshOperations__ExtrudeElements____c : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~UnityEngine__ProBuilder__MeshOperations__ExtrudeElements____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__ProBuilder__MeshOperations__ExtrudeElements____c", modifiers: " const&", def_value: None }]
constexpr UnityEngine__ProBuilder__MeshOperations__ExtrudeElements____c(UnityEngine__ProBuilder__MeshOperations__ExtrudeElements____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__ProBuilder__MeshOperations__ExtrudeElements____c", modifiers: "&&", def_value: None }]
constexpr UnityEngine__ProBuilder__MeshOperations__ExtrudeElements____c(UnityEngine__ProBuilder__MeshOperations__ExtrudeElements____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__ProBuilder__MeshOperations__ExtrudeElements____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnityEngine__ProBuilder__MeshOperations__ExtrudeElements____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__ProBuilder__MeshOperations__ExtrudeElements____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__ProBuilder__MeshOperations__ExtrudeElements____c& operator=(UnityEngine__ProBuilder__MeshOperations__ExtrudeElements____c&& o) noexcept = default;
  constexpr UnityEngine__ProBuilder__MeshOperations__ExtrudeElements____c& operator=(UnityEngine__ProBuilder__MeshOperations__ExtrudeElements____c const& o) noexcept = default;
                


// Fields

static UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ExtrudeElements____c __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ExtrudeElements____c value) ;

static UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ExtrudeElements____c __get___9() ;

static System::Func_2<UnityEngine::ProBuilder::FaceRebuildData,UnityEngine::ProBuilder::Face> __declspec(property(get=__get___9__3_0, put=__set___9__3_0))  __9__3_0;

static void __set___9__3_0(System::Func_2<UnityEngine::ProBuilder::FaceRebuildData,UnityEngine::ProBuilder::Face> value) ;

static System::Func_2<UnityEngine::ProBuilder::FaceRebuildData,UnityEngine::ProBuilder::Face> __get___9__3_0() ;

static System::Func_2<UnityEngine::ProBuilder::Face,int32_t> __declspec(property(get=__get___9__4_0, put=__set___9__4_0))  __9__4_0;

static void __set___9__4_0(System::Func_2<UnityEngine::ProBuilder::Face,int32_t> value) ;

static System::Func_2<UnityEngine::ProBuilder::Face,int32_t> __get___9__4_0() ;


// Methods

// Ctor Parameters []
explicit UnityEngine__ProBuilder__MeshOperations__ExtrudeElements____c() ;

/// @brief Method .ctor addr 0x2a1f1b8 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <DetachFaces>b__3_0 addr 0x2a1f1c0 size 0x18 virtual false final false
 UnityEngine::ProBuilder::Face _DetachFaces_b__3_0(UnityEngine::ProBuilder::FaceRebuildData x) ;

/// @brief Method <ExtrudePerFace>b__4_0 addr 0x2a1f1d8 size 0x5c virtual false final false
 int32_t _ExtrudePerFace_b__4_0(UnityEngine::ProBuilder::Face x) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder::MeshOperations
// Type: UnityEngine.ProBuilder.MeshOperations::ExtrudeElements
namespace UnityEngine::ProBuilder::MeshOperations {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12206))
// CS Name: UnityEngine.ProBuilder.MeshOperations.ExtrudeElements
class CORDL_TYPE ExtrudeElements : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using __c = UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ExtrudeElements____c;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~ExtrudeElements() = default;

// Ctor Parameters [CppParam { name: "", ty: "ExtrudeElements", modifiers: " const&", def_value: None }]
constexpr ExtrudeElements(ExtrudeElements const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ExtrudeElements", modifiers: "&&", def_value: None }]
constexpr ExtrudeElements(ExtrudeElements&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ExtrudeElements(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ExtrudeElements& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ExtrudeElements& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ExtrudeElements& operator=(ExtrudeElements&& o) noexcept = default;
  constexpr ExtrudeElements& operator=(ExtrudeElements const& o) noexcept = default;
                


// Methods

/// @brief Method Extrude addr 0x2a1a4e0 size 0x14 virtual false final false
static ::ArrayW<UnityEngine::ProBuilder::Face> Extrude(UnityEngine::ProBuilder::ProBuilderMesh mesh, System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Face> faces, UnityEngine::ProBuilder::ExtrudeMethod method, float_t distance) ;

/// @brief Method Extrude addr 0x2a1cbe4 size 0x111c virtual false final false
static ::ArrayW<UnityEngine::ProBuilder::Edge> Extrude(UnityEngine::ProBuilder::ProBuilderMesh mesh, System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Edge> edges, float_t distance, bool extrudeAsGroup, bool enableManifoldExtrude) ;

/// @brief Method DetachFaces addr 0x2a1de94 size 0x8 virtual false final false
static System::Collections::Generic::List_1<UnityEngine::ProBuilder::Face> DetachFaces(UnityEngine::ProBuilder::ProBuilderMesh mesh, System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Face> faces) ;

/// @brief Method DetachFaces addr 0x2a1de9c size 0xb00 virtual false final false
static System::Collections::Generic::List_1<UnityEngine::ProBuilder::Face> DetachFaces(UnityEngine::ProBuilder::ProBuilderMesh mesh, System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Face> faces, bool deleteSourceFaces) ;

/// @brief Method ExtrudePerFace addr 0x2a1a4f4 size 0xb8c virtual false final false
static ::ArrayW<UnityEngine::ProBuilder::Face> ExtrudePerFace(UnityEngine::ProBuilder::ProBuilderMesh pb, System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Face> faces, float_t distance) ;

/// @brief Method ExtrudeAsGroups addr 0x2a1b080 size 0x1b64 virtual false final false
static ::ArrayW<UnityEngine::ProBuilder::Face> ExtrudeAsGroups(UnityEngine::ProBuilder::ProBuilderMesh mesh, System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Face> faces, bool compensateAngleVertexDistance, float_t distance) ;

/// @brief Method GetFaceGroups addr 0x2a1e99c size 0x444 virtual false final false
static System::Collections::Generic::List_1<System::Collections::Generic::HashSet_1<UnityEngine::ProBuilder::Face>> GetFaceGroups(System::Collections::Generic::List_1<UnityEngine::ProBuilder::WingedEdge> wings) ;

/// @brief Method GetPerimeterEdges addr 0x2a1ede0 size 0x374 virtual false final false
static System::Collections::Generic::Dictionary_2<UnityEngine::ProBuilder::EdgeLookup,UnityEngine::ProBuilder::Face> GetPerimeterEdges(System::Collections::Generic::HashSet_1<UnityEngine::ProBuilder::Face> faces, System::Collections::Generic::Dictionary_2<int32_t,int32_t> lookup) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder::MeshOperations
NEED_NO_BOX(UnityEngine::ProBuilder::MeshOperations::ExtrudeElements);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::MeshOperations::ExtrudeElements, "UnityEngine.ProBuilder.MeshOperations", "ExtrudeElements");
NEED_NO_BOX(UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ExtrudeElements____c);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ExtrudeElements____c, "UnityEngine.ProBuilder.MeshOperations", "ExtrudeElements/<>c");
