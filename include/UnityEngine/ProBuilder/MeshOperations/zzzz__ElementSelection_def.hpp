#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
namespace UnityEngine::ProBuilder::MeshOperations {
class UnityEngine__ProBuilder__MeshOperations__ElementSelection____c__DisplayClass25_0;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::ProBuilder::MeshOperations {
class UnityEngine__ProBuilder__MeshOperations__ElementSelection____c;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine::ProBuilder {
class Face;
}
namespace UnityEngine::ProBuilder {
struct EdgeLookup;
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
class WingedEdge;
}
namespace UnityEngine::ProBuilder::MeshOperations {
class UnityEngine__ProBuilder__MeshOperations__ElementSelection____c__DisplayClass27_0;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace UnityEngine::ProBuilder {
struct Edge;
}
namespace UnityEngine::ProBuilder {
class ProBuilderMesh;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
struct KeyValuePair_2;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System {
template<typename T>
class Comparison_1;
}
// Forward declare root types
namespace UnityEngine::ProBuilder::MeshOperations {
class ElementSelection;
}
namespace UnityEngine::ProBuilder::MeshOperations {
class UnityEngine__ProBuilder__MeshOperations__ElementSelection____c;
}
namespace UnityEngine::ProBuilder::MeshOperations {
class UnityEngine__ProBuilder__MeshOperations__ElementSelection____c__DisplayClass25_0;
}
namespace UnityEngine::ProBuilder::MeshOperations {
class UnityEngine__ProBuilder__MeshOperations__ElementSelection____c__DisplayClass27_0;
}
// Type: ::<>c
namespace UnityEngine::ProBuilder::MeshOperations {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12201))
// CS Name: UnityEngine.ProBuilder.MeshOperations.ElementSelection::<>c
class CORDL_TYPE UnityEngine__ProBuilder__MeshOperations__ElementSelection____c : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~UnityEngine__ProBuilder__MeshOperations__ElementSelection____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__ProBuilder__MeshOperations__ElementSelection____c", modifiers: " const&", def_value: None }]
constexpr UnityEngine__ProBuilder__MeshOperations__ElementSelection____c(UnityEngine__ProBuilder__MeshOperations__ElementSelection____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__ProBuilder__MeshOperations__ElementSelection____c", modifiers: "&&", def_value: None }]
constexpr UnityEngine__ProBuilder__MeshOperations__ElementSelection____c(UnityEngine__ProBuilder__MeshOperations__ElementSelection____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__ProBuilder__MeshOperations__ElementSelection____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnityEngine__ProBuilder__MeshOperations__ElementSelection____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__ProBuilder__MeshOperations__ElementSelection____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__ProBuilder__MeshOperations__ElementSelection____c& operator=(UnityEngine__ProBuilder__MeshOperations__ElementSelection____c&& o) noexcept = default;
  constexpr UnityEngine__ProBuilder__MeshOperations__ElementSelection____c& operator=(UnityEngine__ProBuilder__MeshOperations__ElementSelection____c const& o) noexcept = default;
                


// Fields

static UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ElementSelection____c __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ElementSelection____c value) ;

static UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ElementSelection____c __get___9() ;

static System::Func_2<UnityEngine::ProBuilder::Face,System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Edge>> __declspec(property(get=__get___9__5_0, put=__set___9__5_0))  __9__5_0;

static void __set___9__5_0(System::Func_2<UnityEngine::ProBuilder::Face,System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Edge>> value) ;

static System::Func_2<UnityEngine::ProBuilder::Face,System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Edge>> __get___9__5_0() ;

static System::Func_2<System::Collections::Generic::KeyValuePair_2<UnityEngine::ProBuilder::Edge,System::Collections::Generic::List_1<UnityEngine::ProBuilder::Edge>>,bool> __declspec(property(get=__get___9__5_1, put=__set___9__5_1))  __9__5_1;

static void __set___9__5_1(System::Func_2<System::Collections::Generic::KeyValuePair_2<UnityEngine::ProBuilder::Edge,System::Collections::Generic::List_1<UnityEngine::ProBuilder::Edge>>,bool> value) ;

static System::Func_2<System::Collections::Generic::KeyValuePair_2<UnityEngine::ProBuilder::Edge,System::Collections::Generic::List_1<UnityEngine::ProBuilder::Edge>>,bool> __get___9__5_1() ;

static System::Func_2<System::Collections::Generic::KeyValuePair_2<UnityEngine::ProBuilder::Edge,System::Collections::Generic::List_1<UnityEngine::ProBuilder::Edge>>,UnityEngine::ProBuilder::Edge> __declspec(property(get=__get___9__5_2, put=__set___9__5_2))  __9__5_2;

static void __set___9__5_2(System::Func_2<System::Collections::Generic::KeyValuePair_2<UnityEngine::ProBuilder::Edge,System::Collections::Generic::List_1<UnityEngine::ProBuilder::Edge>>,UnityEngine::ProBuilder::Edge> value) ;

static System::Func_2<System::Collections::Generic::KeyValuePair_2<UnityEngine::ProBuilder::Edge,System::Collections::Generic::List_1<UnityEngine::ProBuilder::Edge>>,UnityEngine::ProBuilder::Edge> __get___9__5_2() ;

static System::Func_2<System::Collections::Generic::KeyValuePair_2<UnityEngine::ProBuilder::Edge,System::Collections::Generic::List_1<UnityEngine::ProBuilder::Face>>,bool> __declspec(property(get=__get___9__7_0, put=__set___9__7_0))  __9__7_0;

static void __set___9__7_0(System::Func_2<System::Collections::Generic::KeyValuePair_2<UnityEngine::ProBuilder::Edge,System::Collections::Generic::List_1<UnityEngine::ProBuilder::Face>>,bool> value) ;

static System::Func_2<System::Collections::Generic::KeyValuePair_2<UnityEngine::ProBuilder::Edge,System::Collections::Generic::List_1<UnityEngine::ProBuilder::Face>>,bool> __get___9__7_0() ;

static System::Func_2<System::Collections::Generic::KeyValuePair_2<UnityEngine::ProBuilder::Edge,System::Collections::Generic::List_1<UnityEngine::ProBuilder::Face>>,UnityEngine::ProBuilder::Face> __declspec(property(get=__get___9__7_1, put=__set___9__7_1))  __9__7_1;

static void __set___9__7_1(System::Func_2<System::Collections::Generic::KeyValuePair_2<UnityEngine::ProBuilder::Edge,System::Collections::Generic::List_1<UnityEngine::ProBuilder::Face>>,UnityEngine::ProBuilder::Face> value) ;

static System::Func_2<System::Collections::Generic::KeyValuePair_2<UnityEngine::ProBuilder::Edge,System::Collections::Generic::List_1<UnityEngine::ProBuilder::Face>>,UnityEngine::ProBuilder::Face> __get___9__7_1() ;

static System::Func_2<UnityEngine::ProBuilder::EdgeLookup,UnityEngine::ProBuilder::Edge> __declspec(property(get=__get___9__10_0, put=__set___9__10_0))  __9__10_0;

static void __set___9__10_0(System::Func_2<UnityEngine::ProBuilder::EdgeLookup,UnityEngine::ProBuilder::Edge> value) ;

static System::Func_2<UnityEngine::ProBuilder::EdgeLookup,UnityEngine::ProBuilder::Edge> __get___9__10_0() ;

static System::Func_2<UnityEngine::ProBuilder::EdgeLookup,UnityEngine::ProBuilder::Edge> __declspec(property(get=__get___9__11_0, put=__set___9__11_0))  __9__11_0;

static void __set___9__11_0(System::Func_2<UnityEngine::ProBuilder::EdgeLookup,UnityEngine::ProBuilder::Edge> value) ;

static System::Func_2<UnityEngine::ProBuilder::EdgeLookup,UnityEngine::ProBuilder::Edge> __get___9__11_0() ;

static System::Func_2<UnityEngine::ProBuilder::EdgeLookup,UnityEngine::ProBuilder::Edge> __declspec(property(get=__get___9__12_0, put=__set___9__12_0))  __9__12_0;

static void __set___9__12_0(System::Func_2<UnityEngine::ProBuilder::EdgeLookup,UnityEngine::ProBuilder::Edge> value) ;

static System::Func_2<UnityEngine::ProBuilder::EdgeLookup,UnityEngine::ProBuilder::Edge> __get___9__12_0() ;

static System::Func_2<UnityEngine::ProBuilder::EdgeLookup,UnityEngine::ProBuilder::Edge> __declspec(property(get=__get___9__13_0, put=__set___9__13_0))  __9__13_0;

static void __set___9__13_0(System::Func_2<UnityEngine::ProBuilder::EdgeLookup,UnityEngine::ProBuilder::Edge> value) ;

static System::Func_2<UnityEngine::ProBuilder::EdgeLookup,UnityEngine::ProBuilder::Edge> __get___9__13_0() ;

static System::Func_2<UnityEngine::ProBuilder::WingedEdge,UnityEngine::ProBuilder::Edge> __declspec(property(get=__get___9__14_0, put=__set___9__14_0))  __9__14_0;

static void __set___9__14_0(System::Func_2<UnityEngine::ProBuilder::WingedEdge,UnityEngine::ProBuilder::Edge> value) ;

static System::Func_2<UnityEngine::ProBuilder::WingedEdge,UnityEngine::ProBuilder::Edge> __get___9__14_0() ;

static System::Func_2<UnityEngine::ProBuilder::WingedEdge,UnityEngine::ProBuilder::Edge> __declspec(property(get=__get___9__15_0, put=__set___9__15_0))  __9__15_0;

static void __set___9__15_0(System::Func_2<UnityEngine::ProBuilder::WingedEdge,UnityEngine::ProBuilder::Edge> value) ;

static System::Func_2<UnityEngine::ProBuilder::WingedEdge,UnityEngine::ProBuilder::Edge> __get___9__15_0() ;

static System::Func_2<UnityEngine::ProBuilder::WingedEdge,UnityEngine::ProBuilder::Edge> __declspec(property(get=__get___9__15_1, put=__set___9__15_1))  __9__15_1;

static void __set___9__15_1(System::Func_2<UnityEngine::ProBuilder::WingedEdge,UnityEngine::ProBuilder::Edge> value) ;

static System::Func_2<UnityEngine::ProBuilder::WingedEdge,UnityEngine::ProBuilder::Edge> __get___9__15_1() ;

static System::Func_2<UnityEngine::ProBuilder::WingedEdge,UnityEngine::ProBuilder::Edge> __declspec(property(get=__get___9__26_0, put=__set___9__26_0))  __9__26_0;

static void __set___9__26_0(System::Func_2<UnityEngine::ProBuilder::WingedEdge,UnityEngine::ProBuilder::Edge> value) ;

static System::Func_2<UnityEngine::ProBuilder::WingedEdge,UnityEngine::ProBuilder::Edge> __get___9__26_0() ;

static System::Comparison_1<UnityEngine::ProBuilder::SimpleTuple_2<int32_t,int32_t>> __declspec(property(get=__get___9__27_0, put=__set___9__27_0))  __9__27_0;

static void __set___9__27_0(System::Comparison_1<UnityEngine::ProBuilder::SimpleTuple_2<int32_t,int32_t>> value) ;

static System::Comparison_1<UnityEngine::ProBuilder::SimpleTuple_2<int32_t,int32_t>> __get___9__27_0() ;


// Methods

static UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ElementSelection____c New_ctor() ;

/// @brief Method .ctor addr 0x2a1a18c size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <GetPerimeterEdges>b__5_0 addr 0x2a1a194 size 0x18 virtual false final false
 System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Edge> _GetPerimeterEdges_b__5_0(UnityEngine::ProBuilder::Face x) ;

/// @brief Method <GetPerimeterEdges>b__5_1 addr 0x2a1a1ac size 0x58 virtual false final false
 bool _GetPerimeterEdges_b__5_1(System::Collections::Generic::KeyValuePair_2<UnityEngine::ProBuilder::Edge,System::Collections::Generic::List_1<UnityEngine::ProBuilder::Edge>> x) ;

/// @brief Method <GetPerimeterEdges>b__5_2 addr 0x2a1a204 size 0x60 virtual false final false
 UnityEngine::ProBuilder::Edge _GetPerimeterEdges_b__5_2(System::Collections::Generic::KeyValuePair_2<UnityEngine::ProBuilder::Edge,System::Collections::Generic::List_1<UnityEngine::ProBuilder::Edge>> x) ;

/// @brief Method <GetPerimeterFaces>b__7_0 addr 0x2a1a264 size 0x58 virtual false final false
 bool _GetPerimeterFaces_b__7_0(System::Collections::Generic::KeyValuePair_2<UnityEngine::ProBuilder::Edge,System::Collections::Generic::List_1<UnityEngine::ProBuilder::Face>> x) ;

/// @brief Method <GetPerimeterFaces>b__7_1 addr 0x2a1a2bc size 0x60 virtual false final false
 UnityEngine::ProBuilder::Face _GetPerimeterFaces_b__7_1(System::Collections::Generic::KeyValuePair_2<UnityEngine::ProBuilder::Edge,System::Collections::Generic::List_1<UnityEngine::ProBuilder::Face>> x) ;

/// @brief Method <GetEdgeRing>b__10_0 addr 0x2a1a31c size 0x8 virtual false final false
 UnityEngine::ProBuilder::Edge _GetEdgeRing_b__10_0(UnityEngine::ProBuilder::EdgeLookup x) ;

/// @brief Method <GetEdgeRingIterative>b__11_0 addr 0x2a1a324 size 0x8 virtual false final false
 UnityEngine::ProBuilder::Edge _GetEdgeRingIterative_b__11_0(UnityEngine::ProBuilder::EdgeLookup x) ;

/// @brief Method <GetEdgeLoop>b__12_0 addr 0x2a1a32c size 0x8 virtual false final false
 UnityEngine::ProBuilder::Edge _GetEdgeLoop_b__12_0(UnityEngine::ProBuilder::EdgeLookup x) ;

/// @brief Method <GetEdgeLoopIterative>b__13_0 addr 0x2a1a334 size 0x8 virtual false final false
 UnityEngine::ProBuilder::Edge _GetEdgeLoopIterative_b__13_0(UnityEngine::ProBuilder::EdgeLookup x) ;

/// @brief Method <GetEdgeLoopInternal>b__14_0 addr 0x2a1a33c size 0x18 virtual false final false
 UnityEngine::ProBuilder::Edge _GetEdgeLoopInternal_b__14_0(UnityEngine::ProBuilder::WingedEdge x) ;

/// @brief Method <GetEdgeLoopInternalIterative>b__15_0 addr 0x2a1a354 size 0x18 virtual false final false
 UnityEngine::ProBuilder::Edge _GetEdgeLoopInternalIterative_b__15_0(UnityEngine::ProBuilder::WingedEdge x) ;

/// @brief Method <GetEdgeLoopInternalIterative>b__15_1 addr 0x2a1a36c size 0x18 virtual false final false
 UnityEngine::ProBuilder::Edge _GetEdgeLoopInternalIterative_b__15_1(UnityEngine::ProBuilder::WingedEdge x) ;

/// @brief Method <FindHoles>b__26_0 addr 0x2a1a384 size 0x18 virtual false final false
 UnityEngine::ProBuilder::Edge _FindHoles_b__26_0(UnityEngine::ProBuilder::WingedEdge x) ;

/// @brief Method <FindHoles>b__27_0 addr 0x2a1a39c size 0x58 virtual false final false
 int32_t _FindHoles_b__27_0(UnityEngine::ProBuilder::SimpleTuple_2<int32_t,int32_t> x, UnityEngine::ProBuilder::SimpleTuple_2<int32_t,int32_t> y) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder::MeshOperations
// Type: ::<>c__DisplayClass25_0
namespace UnityEngine::ProBuilder::MeshOperations {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12202))
// CS Name: UnityEngine.ProBuilder.MeshOperations.ElementSelection::<>c__DisplayClass25_0
class CORDL_TYPE UnityEngine__ProBuilder__MeshOperations__ElementSelection____c__DisplayClass25_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~UnityEngine__ProBuilder__MeshOperations__ElementSelection____c__DisplayClass25_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__ProBuilder__MeshOperations__ElementSelection____c__DisplayClass25_0", modifiers: " const&", def_value: None }]
constexpr UnityEngine__ProBuilder__MeshOperations__ElementSelection____c__DisplayClass25_0(UnityEngine__ProBuilder__MeshOperations__ElementSelection____c__DisplayClass25_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__ProBuilder__MeshOperations__ElementSelection____c__DisplayClass25_0", modifiers: "&&", def_value: None }]
constexpr UnityEngine__ProBuilder__MeshOperations__ElementSelection____c__DisplayClass25_0(UnityEngine__ProBuilder__MeshOperations__ElementSelection____c__DisplayClass25_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__ProBuilder__MeshOperations__ElementSelection____c__DisplayClass25_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnityEngine__ProBuilder__MeshOperations__ElementSelection____c__DisplayClass25_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__ProBuilder__MeshOperations__ElementSelection____c__DisplayClass25_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__ProBuilder__MeshOperations__ElementSelection____c__DisplayClass25_0& operator=(UnityEngine__ProBuilder__MeshOperations__ElementSelection____c__DisplayClass25_0&& o) noexcept = default;
  constexpr UnityEngine__ProBuilder__MeshOperations__ElementSelection____c__DisplayClass25_0& operator=(UnityEngine__ProBuilder__MeshOperations__ElementSelection____c__DisplayClass25_0 const& o) noexcept = default;
                


// Fields

 UnityEngine::ProBuilder::Face __declspec(property(get=__get_face, put=__set_face))  face;

constexpr void __set_face(UnityEngine::ProBuilder::Face value) ;

constexpr UnityEngine::ProBuilder::Face __get_face() const;


// Methods

static UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ElementSelection____c__DisplayClass25_0 New_ctor() ;

/// @brief Method .ctor addr 0x2a1a3f4 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <GetFaceLoop>b__0 addr 0x2a1a3fc size 0x24 virtual false final false
 bool _GetFaceLoop_b__0(UnityEngine::ProBuilder::WingedEdge x) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder::MeshOperations
// Type: ::<>c__DisplayClass27_0
namespace UnityEngine::ProBuilder::MeshOperations {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12203))
// CS Name: UnityEngine.ProBuilder.MeshOperations.ElementSelection::<>c__DisplayClass27_0
class CORDL_TYPE UnityEngine__ProBuilder__MeshOperations__ElementSelection____c__DisplayClass27_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~UnityEngine__ProBuilder__MeshOperations__ElementSelection____c__DisplayClass27_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__ProBuilder__MeshOperations__ElementSelection____c__DisplayClass27_0", modifiers: " const&", def_value: None }]
constexpr UnityEngine__ProBuilder__MeshOperations__ElementSelection____c__DisplayClass27_0(UnityEngine__ProBuilder__MeshOperations__ElementSelection____c__DisplayClass27_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__ProBuilder__MeshOperations__ElementSelection____c__DisplayClass27_0", modifiers: "&&", def_value: None }]
constexpr UnityEngine__ProBuilder__MeshOperations__ElementSelection____c__DisplayClass27_0(UnityEngine__ProBuilder__MeshOperations__ElementSelection____c__DisplayClass27_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__ProBuilder__MeshOperations__ElementSelection____c__DisplayClass27_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnityEngine__ProBuilder__MeshOperations__ElementSelection____c__DisplayClass27_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__ProBuilder__MeshOperations__ElementSelection____c__DisplayClass27_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__ProBuilder__MeshOperations__ElementSelection____c__DisplayClass27_0& operator=(UnityEngine__ProBuilder__MeshOperations__ElementSelection____c__DisplayClass27_0&& o) noexcept = default;
  constexpr UnityEngine__ProBuilder__MeshOperations__ElementSelection____c__DisplayClass27_0& operator=(UnityEngine__ProBuilder__MeshOperations__ElementSelection____c__DisplayClass27_0 const& o) noexcept = default;
                


// Fields

 System::Collections::Generic::HashSet_1<int32_t> __declspec(property(get=__get_common, put=__set_common))  common;

constexpr void __set_common(System::Collections::Generic::HashSet_1<int32_t> value) ;

constexpr System::Collections::Generic::HashSet_1<int32_t> __get_common() const;

 System::Func_2<UnityEngine::ProBuilder::WingedEdge,bool> __declspec(property(get=__get___9__1, put=__set___9__1))  __9__1;

constexpr void __set___9__1(System::Func_2<UnityEngine::ProBuilder::WingedEdge,bool> value) ;

constexpr System::Func_2<UnityEngine::ProBuilder::WingedEdge,bool> __get___9__1() const;

 System::Func_2<UnityEngine::ProBuilder::WingedEdge,bool> __declspec(property(get=__get___9__2, put=__set___9__2))  __9__2;

constexpr void __set___9__2(System::Func_2<UnityEngine::ProBuilder::WingedEdge,bool> value) ;

constexpr System::Func_2<UnityEngine::ProBuilder::WingedEdge,bool> __get___9__2() const;


// Methods

static UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ElementSelection____c__DisplayClass27_0 New_ctor() ;

/// @brief Method .ctor addr 0x2a1a420 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <FindHoles>b__1 addr 0x2a1a428 size 0x5c virtual false final false
 bool _FindHoles_b__1(UnityEngine::ProBuilder::WingedEdge w) ;

/// @brief Method <FindHoles>b__2 addr 0x2a1a484 size 0x5c virtual false final false
 bool _FindHoles_b__2(UnityEngine::ProBuilder::WingedEdge w) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder::MeshOperations
// Type: UnityEngine.ProBuilder.MeshOperations::ElementSelection
namespace UnityEngine::ProBuilder::MeshOperations {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12204))
// CS Name: UnityEngine.ProBuilder.MeshOperations.ElementSelection
class CORDL_TYPE ElementSelection : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using __c__DisplayClass27_0 = UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ElementSelection____c__DisplayClass27_0;

using __c__DisplayClass25_0 = UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ElementSelection____c__DisplayClass25_0;

using __c = UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ElementSelection____c;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~ElementSelection() = default;

// Ctor Parameters [CppParam { name: "", ty: "ElementSelection", modifiers: " const&", def_value: None }]
constexpr ElementSelection(ElementSelection const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ElementSelection", modifiers: "&&", def_value: None }]
constexpr ElementSelection(ElementSelection&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ElementSelection(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ElementSelection& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ElementSelection& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ElementSelection& operator=(ElementSelection&& o) noexcept = default;
  constexpr ElementSelection& operator=(ElementSelection const& o) noexcept = default;
                


// Fields

/// @brief Field k_MaxHoleIterations offset 0
static constexpr int32_t  k_MaxHoleIterations{2048};

static UnityEngine::Vector3 __declspec(property(get=__get_Vector3_Zero, put=__set_Vector3_Zero))  Vector3_Zero;

static void __set_Vector3_Zero(UnityEngine::Vector3 value) ;

static UnityEngine::Vector3 __get_Vector3_Zero() ;


// Methods

/// @brief Method GetNeighborFaces addr 0x2a13aac size 0x25c virtual false final false
static void GetNeighborFaces(UnityEngine::ProBuilder::ProBuilderMesh mesh, UnityEngine::ProBuilder::Edge edge, System::Collections::Generic::List_1<UnityEngine::ProBuilder::Face> neighborFaces) ;

/// @brief Method GetNeighborFaces addr 0x2a0175c size 0x2d4 virtual false final false
static System::Collections::Generic::List_1<UnityEngine::ProBuilder::SimpleTuple_2<UnityEngine::ProBuilder::Face,UnityEngine::ProBuilder::Edge>> GetNeighborFaces(UnityEngine::ProBuilder::ProBuilderMesh mesh, UnityEngine::ProBuilder::Edge edge) ;

/// @brief Method GetNeighborFaces addr 0x2a13d08 size 0x2b4 virtual false final false
static System::Collections::Generic::List_1<UnityEngine::ProBuilder::Face> GetNeighborFaces(UnityEngine::ProBuilder::ProBuilderMesh mesh, ::ArrayW<int32_t> indexes) ;

/// @brief Method GetConnectedEdges addr 0x2a13fbc size 0x610 virtual false final false
static ::ArrayW<UnityEngine::ProBuilder::Edge> GetConnectedEdges(UnityEngine::ProBuilder::ProBuilderMesh mesh, ::ArrayW<int32_t> indexes) ;

/// @brief Method GetPerimeterEdges addr 0x2a145cc size 0x5f0 virtual false final false
static System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Edge> GetPerimeterEdges(UnityEngine::ProBuilder::ProBuilderMesh mesh, System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Face> faces) ;

/// @brief Method GetPerimeterEdges addr 0x2a14bbc size 0x394 virtual false final false
static ::ArrayW<int32_t> GetPerimeterEdges(UnityEngine::ProBuilder::ProBuilderMesh mesh, System::Collections::Generic::IList_1<UnityEngine::ProBuilder::Edge> edges) ;

/// @brief Method GetPerimeterFaces addr 0x2a14f50 size 0x780 virtual false final false
static System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Face> GetPerimeterFaces(UnityEngine::ProBuilder::ProBuilderMesh mesh, System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Face> faces) ;

/// @brief Method GetPerimeterVertices addr 0x2a156d0 size 0x354 virtual false final false
static ::ArrayW<int32_t> GetPerimeterVertices(UnityEngine::ProBuilder::ProBuilderMesh mesh, ::ArrayW<int32_t> indexes, ::ArrayW<UnityEngine::ProBuilder::Edge> universal_edges_all) ;

/// @brief Method EdgeRingNext addr 0x2a15a24 size 0x84 virtual false final false
static UnityEngine::ProBuilder::WingedEdge EdgeRingNext(UnityEngine::ProBuilder::WingedEdge edge) ;

/// @brief Method GetEdgeRing addr 0x2a15aa8 size 0x484 virtual false final false
static System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Edge> GetEdgeRing(UnityEngine::ProBuilder::ProBuilderMesh pb, System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Edge> edges) ;

/// @brief Method GetEdgeRingIterative addr 0x2a15f2c size 0x4a0 virtual false final false
static System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Edge> GetEdgeRingIterative(UnityEngine::ProBuilder::ProBuilderMesh pb, System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Edge> edges) ;

/// @brief Method GetEdgeLoop addr 0x2a163cc size 0x374 virtual false final false
static bool GetEdgeLoop(UnityEngine::ProBuilder::ProBuilderMesh mesh, System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Edge> edges, ByRef<::ArrayW<UnityEngine::ProBuilder::Edge>> loop) ;

/// @brief Method GetEdgeLoopIterative addr 0x2a16970 size 0x2f8 virtual false final false
static bool GetEdgeLoopIterative(UnityEngine::ProBuilder::ProBuilderMesh mesh, System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Edge> edges, ByRef<::ArrayW<UnityEngine::ProBuilder::Edge>> loop) ;

/// @brief Method GetEdgeLoopInternal addr 0x2a16740 size 0x230 virtual false final false
static bool GetEdgeLoopInternal(UnityEngine::ProBuilder::WingedEdge start, int32_t startIndex, System::Collections::Generic::HashSet_1<UnityEngine::ProBuilder::EdgeLookup> used) ;

/// @brief Method GetEdgeLoopInternalIterative addr 0x2a16c68 size 0x388 virtual false final false
static void GetEdgeLoopInternalIterative(UnityEngine::ProBuilder::WingedEdge start, UnityEngine::ProBuilder::Edge edge, System::Collections::Generic::HashSet_1<UnityEngine::ProBuilder::EdgeLookup> used) ;

/// @brief Method NextSpoke addr 0x2a172b0 size 0x94 virtual false final false
static UnityEngine::ProBuilder::WingedEdge NextSpoke(UnityEngine::ProBuilder::WingedEdge wing, int32_t pivot, bool opp) ;

/// @brief Method GetSpokes addr 0x2a16ff0 size 0x2c0 virtual false final false
static System::Collections::Generic::List_1<UnityEngine::ProBuilder::WingedEdge> GetSpokes(UnityEngine::ProBuilder::WingedEdge wing, int32_t sharedIndex, bool allowHoles) ;

/// @brief Method GrowSelection addr 0x2a17344 size 0x578 virtual false final false
static System::Collections::Generic::HashSet_1<UnityEngine::ProBuilder::Face> GrowSelection(UnityEngine::ProBuilder::ProBuilderMesh mesh, System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Face> faces, float_t maxAngleDiff) ;

/// @brief Method Flood addr 0x2a178bc size 0x7c virtual false final false
static void Flood(UnityEngine::ProBuilder::WingedEdge wing, System::Collections::Generic::HashSet_1<UnityEngine::ProBuilder::Face> selection) ;

/// @brief Method Flood addr 0x2a17938 size 0x280 virtual false final false
static void Flood(UnityEngine::ProBuilder::ProBuilderMesh pb, UnityEngine::ProBuilder::WingedEdge wing, UnityEngine::Vector3 wingNrm, float_t maxAngle, System::Collections::Generic::HashSet_1<UnityEngine::ProBuilder::Face> selection) ;

/// @brief Method FloodSelection addr 0x2a17bb8 size 0x2ac virtual false final false
static System::Collections::Generic::HashSet_1<UnityEngine::ProBuilder::Face> FloodSelection(UnityEngine::ProBuilder::ProBuilderMesh mesh, System::Collections::Generic::IList_1<UnityEngine::ProBuilder::Face> faces, float_t maxAngleDiff) ;

/// @brief Method GetFaceLoop addr 0x2a17e64 size 0x20c virtual false final false
static System::Collections::Generic::HashSet_1<UnityEngine::ProBuilder::Face> GetFaceLoop(UnityEngine::ProBuilder::ProBuilderMesh mesh, ::ArrayW<UnityEngine::ProBuilder::Face> faces, bool ring) ;

/// @brief Method GetFaceRingAndLoop addr 0x2a18248 size 0x224 virtual false final false
static System::Collections::Generic::HashSet_1<UnityEngine::ProBuilder::Face> GetFaceRingAndLoop(UnityEngine::ProBuilder::ProBuilderMesh mesh, ::ArrayW<UnityEngine::ProBuilder::Face> faces) ;

/// @brief Method GetFaceLoop addr 0x2a18070 size 0x1d8 virtual false final false
static System::Collections::Generic::HashSet_1<UnityEngine::ProBuilder::Face> GetFaceLoop(System::Collections::Generic::List_1<UnityEngine::ProBuilder::WingedEdge> wings, UnityEngine::ProBuilder::Face face, bool ring) ;

/// @brief Method FindHoles addr 0x2a1846c size 0x3ac virtual false final false
static System::Collections::Generic::List_1<System::Collections::Generic::List_1<UnityEngine::ProBuilder::Edge>> FindHoles(UnityEngine::ProBuilder::ProBuilderMesh mesh, System::Collections::Generic::IEnumerable_1<int32_t> indexes) ;

/// @brief Method FindHoles addr 0x2a18818 size 0x844 virtual false final false
static System::Collections::Generic::List_1<System::Collections::Generic::List_1<UnityEngine::ProBuilder::WingedEdge>> FindHoles(System::Collections::Generic::List_1<UnityEngine::ProBuilder::WingedEdge> wings, System::Collections::Generic::HashSet_1<int32_t> common) ;

/// @brief Method FindNextEdgeInHole addr 0x2a1905c size 0x80 virtual false final false
static UnityEngine::ProBuilder::WingedEdge FindNextEdgeInHole(UnityEngine::ProBuilder::WingedEdge wing, int32_t common) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder::MeshOperations
NEED_NO_BOX(UnityEngine::ProBuilder::MeshOperations::ElementSelection);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::MeshOperations::ElementSelection, "UnityEngine.ProBuilder.MeshOperations", "ElementSelection");
NEED_NO_BOX(UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ElementSelection____c);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ElementSelection____c, "UnityEngine.ProBuilder.MeshOperations", "ElementSelection/<>c");
NEED_NO_BOX(UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ElementSelection____c__DisplayClass25_0);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ElementSelection____c__DisplayClass25_0, "UnityEngine.ProBuilder.MeshOperations", "ElementSelection/<>c__DisplayClass25_0");
NEED_NO_BOX(UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ElementSelection____c__DisplayClass27_0);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__ElementSelection____c__DisplayClass27_0, "UnityEngine.ProBuilder.MeshOperations", "ElementSelection/<>c__DisplayClass27_0");
