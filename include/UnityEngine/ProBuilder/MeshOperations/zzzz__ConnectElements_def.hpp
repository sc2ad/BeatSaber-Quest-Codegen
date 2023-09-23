#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace UnityEngine::ProBuilder {
class Face;
}
namespace UnityEngine::ProBuilder {
struct Edge;
}
namespace UnityEngine::ProBuilder {
template<typename T1,typename T2>
struct SimpleTuple_2;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace UnityEngine::ProBuilder {
class ProBuilderMesh;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace UnityEngine::ProBuilder {
class Vertex;
}
namespace UnityEngine::ProBuilder {
class ActionResult;
}
namespace UnityEngine::ProBuilder::MeshOperations {
class ConnectFaceRebuildData;
}
namespace UnityEngine::ProBuilder {
class WingedEdge;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace UnityEngine::ProBuilder {
class FaceRebuildData;
}
namespace UnityEngine::ProBuilder {
struct EdgeLookup;
}
// Forward declare root types
namespace UnityEngine::ProBuilder::MeshOperations {
class ConnectElements;
}
namespace UnityEngine::ProBuilder::MeshOperations {
class UnityEngine__ProBuilder__MeshOperations__ConnectElements____c;
}
namespace UnityEngine::ProBuilder::MeshOperations {
class UnityEngine__ProBuilder__MeshOperations__ConnectElements____c__DisplayClass2_0;
}
namespace UnityEngine::ProBuilder::MeshOperations {
class UnityEngine__ProBuilder__MeshOperations__ConnectElements____c__DisplayClass3_0;
}
// Type: ::<>c
namespace UnityEngine::ProBuilder::MeshOperations {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12193))
// CS Name: UnityEngine.ProBuilder.MeshOperations.ConnectElements::<>c
class CORDL_TYPE UnityEngine__ProBuilder__MeshOperations__ConnectElements____c : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~UnityEngine__ProBuilder__MeshOperations__ConnectElements____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__ProBuilder__MeshOperations__ConnectElements____c", modifiers: " const&", def_value: None }]
constexpr UnityEngine__ProBuilder__MeshOperations__ConnectElements____c(UnityEngine__ProBuilder__MeshOperations__ConnectElements____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__ProBuilder__MeshOperations__ConnectElements____c", modifiers: "&&", def_value: None }]
constexpr UnityEngine__ProBuilder__MeshOperations__ConnectElements____c(UnityEngine__ProBuilder__MeshOperations__ConnectElements____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__ProBuilder__MeshOperations__ConnectElements____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnityEngine__ProBuilder__MeshOperations__ConnectElements____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__ProBuilder__MeshOperations__ConnectElements____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__ProBuilder__MeshOperations__ConnectElements____c& operator=(UnityEngine__ProBuilder__MeshOperations__ConnectElements____c&& o) noexcept = default;
  constexpr UnityEngine__ProBuilder__MeshOperations__ConnectElements____c& operator=(UnityEngine__ProBuilder__MeshOperations__ConnectElements____c const& o) noexcept = default;
                


// Fields

static UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ConnectElements____c __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ConnectElements____c value) ;

static UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ConnectElements____c __get___9() ;

static System::Func_2<UnityEngine::ProBuilder::Face,System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Edge>> __declspec(property(get=__get___9__0_0, put=__set___9__0_0))  __9__0_0;

static void __set___9__0_0(System::Func_2<UnityEngine::ProBuilder::Face,System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Edge>> value) ;

static System::Func_2<UnityEngine::ProBuilder::Face,System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Edge>> __get___9__0_0() ;

static System::Func_2<UnityEngine::ProBuilder::Face,int32_t> __declspec(property(get=__get___9__2_1, put=__set___9__2_1))  __9__2_1;

static void __set___9__2_1(System::Func_2<UnityEngine::ProBuilder::Face,int32_t> value) ;

static System::Func_2<UnityEngine::ProBuilder::Face,int32_t> __get___9__2_1() ;

static System::Func_2<UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData,UnityEngine::ProBuilder::FaceRebuildData> __declspec(property(get=__get___9__2_2, put=__set___9__2_2))  __9__2_2;

static void __set___9__2_2(System::Func_2<UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData,UnityEngine::ProBuilder::FaceRebuildData> value) ;

static System::Func_2<UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData,UnityEngine::ProBuilder::FaceRebuildData> __get___9__2_2() ;

static System::Func_2<UnityEngine::ProBuilder::Face,int32_t> __declspec(property(get=__get___9__3_0, put=__set___9__3_0))  __9__3_0;

static void __set___9__3_0(System::Func_2<UnityEngine::ProBuilder::Face,int32_t> value) ;

static System::Func_2<UnityEngine::ProBuilder::Face,int32_t> __get___9__3_0() ;

static System::Func_2<UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData,UnityEngine::ProBuilder::FaceRebuildData> __declspec(property(get=__get___9__3_1, put=__set___9__3_1))  __9__3_1;

static void __set___9__3_1(System::Func_2<UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData,UnityEngine::ProBuilder::FaceRebuildData> value) ;

static System::Func_2<UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData,UnityEngine::ProBuilder::FaceRebuildData> __get___9__3_1() ;

static System::Func_2<UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData,System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Edge>> __declspec(property(get=__get___9__3_2, put=__set___9__3_2))  __9__3_2;

static void __set___9__3_2(System::Func_2<UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData,System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Edge>> value) ;

static System::Func_2<UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData,System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Edge>> __get___9__3_2() ;

static System::Func_2<UnityEngine::ProBuilder::EdgeLookup,UnityEngine::ProBuilder::Edge> __declspec(property(get=__get___9__3_4, put=__set___9__3_4))  __9__3_4;

static void __set___9__3_4(System::Func_2<UnityEngine::ProBuilder::EdgeLookup,UnityEngine::ProBuilder::Edge> value) ;

static System::Func_2<UnityEngine::ProBuilder::EdgeLookup,UnityEngine::ProBuilder::Edge> __get___9__3_4() ;

static System::Func_2<int32_t,System::Collections::Generic::List_1<UnityEngine::ProBuilder::Vertex>> __declspec(property(get=__get___9__5_0, put=__set___9__5_0))  __9__5_0;

static void __set___9__5_0(System::Func_2<int32_t,System::Collections::Generic::List_1<UnityEngine::ProBuilder::Vertex>> value) ;

static System::Func_2<int32_t,System::Collections::Generic::List_1<UnityEngine::ProBuilder::Vertex>> __get___9__5_0() ;

static System::Func_2<int32_t,System::Collections::Generic::List_1<int32_t>> __declspec(property(get=__get___9__5_1, put=__set___9__5_1))  __9__5_1;

static void __set___9__5_1(System::Func_2<int32_t,System::Collections::Generic::List_1<int32_t>> value) ;

static System::Func_2<int32_t,System::Collections::Generic::List_1<int32_t>> __get___9__5_1() ;

static System::Func_2<UnityEngine::ProBuilder::WingedEdge,UnityEngine::ProBuilder::Edge> __declspec(property(get=__get___9__5_2, put=__set___9__5_2))  __9__5_2;

static void __set___9__5_2(System::Func_2<UnityEngine::ProBuilder::WingedEdge,UnityEngine::ProBuilder::Edge> value) ;

static System::Func_2<UnityEngine::ProBuilder::WingedEdge,UnityEngine::ProBuilder::Edge> __get___9__5_2() ;

static System::Func_2<UnityEngine::ProBuilder::WingedEdge,UnityEngine::ProBuilder::Edge> __declspec(property(get=__get___9__6_0, put=__set___9__6_0))  __9__6_0;

static void __set___9__6_0(System::Func_2<UnityEngine::ProBuilder::WingedEdge,UnityEngine::ProBuilder::Edge> value) ;

static System::Func_2<UnityEngine::ProBuilder::WingedEdge,UnityEngine::ProBuilder::Edge> __get___9__6_0() ;

static System::Func_2<int32_t,System::Collections::Generic::List_1<UnityEngine::ProBuilder::Vertex>> __declspec(property(get=__get___9__8_0, put=__set___9__8_0))  __9__8_0;

static void __set___9__8_0(System::Func_2<int32_t,System::Collections::Generic::List_1<UnityEngine::ProBuilder::Vertex>> value) ;

static System::Func_2<int32_t,System::Collections::Generic::List_1<UnityEngine::ProBuilder::Vertex>> __get___9__8_0() ;

static System::Func_2<int32_t,System::Collections::Generic::List_1<int32_t>> __declspec(property(get=__get___9__8_1, put=__set___9__8_1))  __9__8_1;

static void __set___9__8_1(System::Func_2<int32_t,System::Collections::Generic::List_1<int32_t>> value) ;

static System::Func_2<int32_t,System::Collections::Generic::List_1<int32_t>> __get___9__8_1() ;

static System::Func_2<int32_t,System::Collections::Generic::List_1<int32_t>> __declspec(property(get=__get___9__8_2, put=__set___9__8_2))  __9__8_2;

static void __set___9__8_2(System::Func_2<int32_t,System::Collections::Generic::List_1<int32_t>> value) ;

static System::Func_2<int32_t,System::Collections::Generic::List_1<int32_t>> __get___9__8_2() ;


// Methods

// Ctor Parameters []
explicit UnityEngine__ProBuilder__MeshOperations__ConnectElements____c() ;

/// @brief Method .ctor addr 0x2a12c2c size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <Connect>b__0_0 addr 0x2a12c34 size 0x18 virtual false final false
 System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Edge> _Connect_b__0_0(UnityEngine::ProBuilder::Face x) ;

/// @brief Method <Connect>b__2_1 addr 0x2a12c4c size 0x18 virtual false final false
 int32_t _Connect_b__2_1(UnityEngine::ProBuilder::Face x) ;

/// @brief Method <Connect>b__2_2 addr 0x2a12c64 size 0x18 virtual false final false
 UnityEngine::ProBuilder::FaceRebuildData _Connect_b__2_2(UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData x) ;

/// @brief Method <Connect>b__3_0 addr 0x2a12c7c size 0x18 virtual false final false
 int32_t _Connect_b__3_0(UnityEngine::ProBuilder::Face x) ;

/// @brief Method <Connect>b__3_1 addr 0x2a12c94 size 0x18 virtual false final false
 UnityEngine::ProBuilder::FaceRebuildData _Connect_b__3_1(UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData x) ;

/// @brief Method <Connect>b__3_2 addr 0x2a12cac size 0x28 virtual false final false
 System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Edge> _Connect_b__3_2(UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData x) ;

/// @brief Method <Connect>b__3_4 addr 0x2a12cd4 size 0x8 virtual false final false
 UnityEngine::ProBuilder::Edge _Connect_b__3_4(UnityEngine::ProBuilder::EdgeLookup x) ;

/// @brief Method <ConnectEdgesInFace>b__5_0 addr 0x2a12cdc size 0x70 virtual false final false
 System::Collections::Generic::List_1<UnityEngine::ProBuilder::Vertex> _ConnectEdgesInFace_b__5_0(int32_t x) ;

/// @brief Method <ConnectEdgesInFace>b__5_1 addr 0x2a12d4c size 0x70 virtual false final false
 System::Collections::Generic::List_1<int32_t> _ConnectEdgesInFace_b__5_1(int32_t x) ;

/// @brief Method <ConnectEdgesInFace>b__5_2 addr 0x2a12dbc size 0x18 virtual false final false
 UnityEngine::ProBuilder::Edge _ConnectEdgesInFace_b__5_2(UnityEngine::ProBuilder::WingedEdge x) ;

/// @brief Method <InsertVertices>b__6_0 addr 0x2a12dd4 size 0x18 virtual false final false
 UnityEngine::ProBuilder::Edge _InsertVertices_b__6_0(UnityEngine::ProBuilder::WingedEdge x) ;

/// @brief Method <ConnectIndexesPerFace>b__8_0 addr 0x2a12dec size 0x70 virtual false final false
 System::Collections::Generic::List_1<UnityEngine::ProBuilder::Vertex> _ConnectIndexesPerFace_b__8_0(int32_t x) ;

/// @brief Method <ConnectIndexesPerFace>b__8_1 addr 0x2a12e5c size 0x70 virtual false final false
 System::Collections::Generic::List_1<int32_t> _ConnectIndexesPerFace_b__8_1(int32_t x) ;

/// @brief Method <ConnectIndexesPerFace>b__8_2 addr 0x2a12ecc size 0x70 virtual false final false
 System::Collections::Generic::List_1<int32_t> _ConnectIndexesPerFace_b__8_2(int32_t x) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder::MeshOperations
// Type: ::<>c__DisplayClass2_0
namespace UnityEngine::ProBuilder::MeshOperations {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12194))
// CS Name: UnityEngine.ProBuilder.MeshOperations.ConnectElements::<>c__DisplayClass2_0
class CORDL_TYPE UnityEngine__ProBuilder__MeshOperations__ConnectElements____c__DisplayClass2_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~UnityEngine__ProBuilder__MeshOperations__ConnectElements____c__DisplayClass2_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__ProBuilder__MeshOperations__ConnectElements____c__DisplayClass2_0", modifiers: " const&", def_value: None }]
constexpr UnityEngine__ProBuilder__MeshOperations__ConnectElements____c__DisplayClass2_0(UnityEngine__ProBuilder__MeshOperations__ConnectElements____c__DisplayClass2_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__ProBuilder__MeshOperations__ConnectElements____c__DisplayClass2_0", modifiers: "&&", def_value: None }]
constexpr UnityEngine__ProBuilder__MeshOperations__ConnectElements____c__DisplayClass2_0(UnityEngine__ProBuilder__MeshOperations__ConnectElements____c__DisplayClass2_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__ProBuilder__MeshOperations__ConnectElements____c__DisplayClass2_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnityEngine__ProBuilder__MeshOperations__ConnectElements____c__DisplayClass2_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__ProBuilder__MeshOperations__ConnectElements____c__DisplayClass2_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__ProBuilder__MeshOperations__ConnectElements____c__DisplayClass2_0& operator=(UnityEngine__ProBuilder__MeshOperations__ConnectElements____c__DisplayClass2_0&& o) noexcept = default;
  constexpr UnityEngine__ProBuilder__MeshOperations__ConnectElements____c__DisplayClass2_0& operator=(UnityEngine__ProBuilder__MeshOperations__ConnectElements____c__DisplayClass2_0 const& o) noexcept = default;
                


// Fields

 System::Collections::Generic::Dictionary_2<int32_t,int32_t> __declspec(property(get=__get_lookup, put=__set_lookup))  lookup;

constexpr void __set_lookup(System::Collections::Generic::Dictionary_2<int32_t,int32_t> value) ;

constexpr System::Collections::Generic::Dictionary_2<int32_t,int32_t> __get_lookup() const;

 UnityEngine::ProBuilder::ProBuilderMesh __declspec(property(get=__get_mesh, put=__set_mesh))  mesh;

constexpr void __set_mesh(UnityEngine::ProBuilder::ProBuilderMesh value) ;

constexpr UnityEngine::ProBuilder::ProBuilderMesh __get_mesh() const;


// Methods

// Ctor Parameters []
explicit UnityEngine__ProBuilder__MeshOperations__ConnectElements____c__DisplayClass2_0() ;

/// @brief Method .ctor addr 0x2a101fc size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <Connect>b__0 addr 0x2a12f3c size 0x58 virtual false final false
 int32_t _Connect_b__0(int32_t x) ;

/// @brief Method <Connect>b__3 addr 0x2a12f94 size 0x44 virtual false final false
 int32_t _Connect_b__3(int32_t x) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder::MeshOperations
// Type: ::<>c__DisplayClass3_0
namespace UnityEngine::ProBuilder::MeshOperations {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12195))
// CS Name: UnityEngine.ProBuilder.MeshOperations.ConnectElements::<>c__DisplayClass3_0
class CORDL_TYPE UnityEngine__ProBuilder__MeshOperations__ConnectElements____c__DisplayClass3_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~UnityEngine__ProBuilder__MeshOperations__ConnectElements____c__DisplayClass3_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__ProBuilder__MeshOperations__ConnectElements____c__DisplayClass3_0", modifiers: " const&", def_value: None }]
constexpr UnityEngine__ProBuilder__MeshOperations__ConnectElements____c__DisplayClass3_0(UnityEngine__ProBuilder__MeshOperations__ConnectElements____c__DisplayClass3_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__ProBuilder__MeshOperations__ConnectElements____c__DisplayClass3_0", modifiers: "&&", def_value: None }]
constexpr UnityEngine__ProBuilder__MeshOperations__ConnectElements____c__DisplayClass3_0(UnityEngine__ProBuilder__MeshOperations__ConnectElements____c__DisplayClass3_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__ProBuilder__MeshOperations__ConnectElements____c__DisplayClass3_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnityEngine__ProBuilder__MeshOperations__ConnectElements____c__DisplayClass3_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__ProBuilder__MeshOperations__ConnectElements____c__DisplayClass3_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__ProBuilder__MeshOperations__ConnectElements____c__DisplayClass3_0& operator=(UnityEngine__ProBuilder__MeshOperations__ConnectElements____c__DisplayClass3_0&& o) noexcept = default;
  constexpr UnityEngine__ProBuilder__MeshOperations__ConnectElements____c__DisplayClass3_0& operator=(UnityEngine__ProBuilder__MeshOperations__ConnectElements____c__DisplayClass3_0 const& o) noexcept = default;
                


// Fields

 System::Collections::Generic::HashSet_1<int32_t> __declspec(property(get=__get_appended, put=__set_appended))  appended;

constexpr void __set_appended(System::Collections::Generic::HashSet_1<int32_t> value) ;

constexpr System::Collections::Generic::HashSet_1<int32_t> __get_appended() const;


// Methods

// Ctor Parameters []
explicit UnityEngine__ProBuilder__MeshOperations__ConnectElements____c__DisplayClass3_0() ;

/// @brief Method .ctor addr 0x2a12bc0 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <Connect>b__3 addr 0x2a12fd8 size 0x80 virtual false final false
 bool _Connect_b__3(UnityEngine::ProBuilder::Edge x) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder::MeshOperations
// Type: UnityEngine.ProBuilder.MeshOperations::ConnectElements
namespace UnityEngine::ProBuilder::MeshOperations {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12196))
// CS Name: UnityEngine.ProBuilder.MeshOperations.ConnectElements
class CORDL_TYPE ConnectElements : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using __c__DisplayClass3_0 = UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ConnectElements____c__DisplayClass3_0;

using __c__DisplayClass2_0 = UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ConnectElements____c__DisplayClass2_0;

using __c = UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ConnectElements____c;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~ConnectElements() = default;

// Ctor Parameters [CppParam { name: "", ty: "ConnectElements", modifiers: " const&", def_value: None }]
constexpr ConnectElements(ConnectElements const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ConnectElements", modifiers: "&&", def_value: None }]
constexpr ConnectElements(ConnectElements&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ConnectElements(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ConnectElements& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ConnectElements& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ConnectElements& operator=(ConnectElements&& o) noexcept = default;
  constexpr ConnectElements& operator=(ConnectElements const& o) noexcept = default;
                


// Methods

/// @brief Method Connect addr 0x2a0da90 size 0x2c0 virtual false final false
static ::ArrayW<UnityEngine::ProBuilder::Face> Connect(UnityEngine::ProBuilder::ProBuilderMesh mesh, System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Face> faces) ;

/// @brief Method Connect addr 0x2a0f2e0 size 0x98 virtual false final false
static UnityEngine::ProBuilder::SimpleTuple_2<::ArrayW<UnityEngine::ProBuilder::Face>,::ArrayW<UnityEngine::ProBuilder::Edge>> Connect(UnityEngine::ProBuilder::ProBuilderMesh mesh, System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Edge> edges) ;

/// @brief Method Connect addr 0x2a0f378 size 0xe84 virtual false final false
static ::ArrayW<int32_t> Connect(UnityEngine::ProBuilder::ProBuilderMesh mesh, System::Collections::Generic::IList_1<int32_t> indexes) ;

/// @brief Method Connect addr 0x2a0dd50 size 0x1590 virtual false final false
static UnityEngine::ProBuilder::ActionResult Connect(UnityEngine::ProBuilder::ProBuilderMesh mesh, System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Edge> edges, ByRef<::ArrayW<UnityEngine::ProBuilder::Face>> addedFaces, ByRef<::ArrayW<UnityEngine::ProBuilder::Edge>> connections, bool returnFaces, bool returnEdges, System::Collections::Generic::HashSet_1<UnityEngine::ProBuilder::Face> faceMask) ;

/// @brief Method ConnectEdgesInFace addr 0x2a12400 size 0x7c0 virtual false final false
static System::Collections::Generic::List_1<UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData> ConnectEdgesInFace(UnityEngine::ProBuilder::Face face, UnityEngine::ProBuilder::WingedEdge a, UnityEngine::ProBuilder::WingedEdge b, System::Collections::Generic::List_1<UnityEngine::ProBuilder::Vertex> vertices) ;

/// @brief Method ConnectEdgesInFace addr 0x2a11a64 size 0x99c virtual false final false
static System::Collections::Generic::List_1<UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData> ConnectEdgesInFace(UnityEngine::ProBuilder::Face face, System::Collections::Generic::List_1<UnityEngine::ProBuilder::WingedEdge> edges, System::Collections::Generic::List_1<UnityEngine::ProBuilder::Vertex> vertices) ;

/// @brief Method InsertVertices addr 0x2a1151c size 0x548 virtual false final false
static bool InsertVertices(UnityEngine::ProBuilder::Face face, System::Collections::Generic::List_1<UnityEngine::ProBuilder::WingedEdge> edges, System::Collections::Generic::List_1<UnityEngine::ProBuilder::Vertex> vertices, ByRef<UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData> data) ;

/// @brief Method ConnectIndexesPerFace addr 0x2a10c6c size 0x8b0 virtual false final false
static System::Collections::Generic::List_1<UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData> ConnectIndexesPerFace(UnityEngine::ProBuilder::Face face, int32_t a, int32_t b, System::Collections::Generic::List_1<UnityEngine::ProBuilder::Vertex> vertices, System::Collections::Generic::Dictionary_2<int32_t,int32_t> lookup) ;

/// @brief Method ConnectIndexesPerFace addr 0x2a10204 size 0xa68 virtual false final false
static System::Collections::Generic::List_1<UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData> ConnectIndexesPerFace(UnityEngine::ProBuilder::Face face, System::Collections::Generic::List_1<int32_t> indexes, System::Collections::Generic::List_1<UnityEngine::ProBuilder::Vertex> vertices, System::Collections::Generic::Dictionary_2<int32_t,int32_t> lookup, int32_t sharedIndexOffset) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder::MeshOperations
NEED_NO_BOX(UnityEngine::ProBuilder::MeshOperations::ConnectElements);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::MeshOperations::ConnectElements, "UnityEngine.ProBuilder.MeshOperations", "ConnectElements");
NEED_NO_BOX(UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ConnectElements____c);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ConnectElements____c, "UnityEngine.ProBuilder.MeshOperations", "ConnectElements/<>c");
NEED_NO_BOX(UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ConnectElements____c__DisplayClass2_0);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ConnectElements____c__DisplayClass2_0, "UnityEngine.ProBuilder.MeshOperations", "ConnectElements/<>c__DisplayClass2_0");
NEED_NO_BOX(UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ConnectElements____c__DisplayClass3_0);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ConnectElements____c__DisplayClass3_0, "UnityEngine.ProBuilder.MeshOperations", "ConnectElements/<>c__DisplayClass3_0");
