#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace UnityEngine::ProBuilder {
struct Edge;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace UnityEngine::ProBuilder {
class ProBuilderMesh;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace UnityEngine::ProBuilder {
struct EdgeLookup;
}
namespace UnityEngine::ProBuilder {
class Face;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System {
template<typename T>
class IEquatable_1;
}
// Forward declare root types
namespace UnityEngine::ProBuilder {
class UnityEngine__ProBuilder__WingedEdge____c;
}
namespace UnityEngine::ProBuilder {
class UnityEngine__ProBuilder__WingedEdge____c__DisplayClass32_0;
}
namespace UnityEngine::ProBuilder {
class WingedEdge;
}
// Type: ::<>c__DisplayClass32_0
namespace UnityEngine::ProBuilder {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12162))
// CS Name: UnityEngine.ProBuilder.WingedEdge::<>c__DisplayClass32_0
class CORDL_TYPE UnityEngine__ProBuilder__WingedEdge____c__DisplayClass32_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~UnityEngine__ProBuilder__WingedEdge____c__DisplayClass32_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__ProBuilder__WingedEdge____c__DisplayClass32_0", modifiers: " const&", def_value: None }]
constexpr UnityEngine__ProBuilder__WingedEdge____c__DisplayClass32_0(UnityEngine__ProBuilder__WingedEdge____c__DisplayClass32_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__ProBuilder__WingedEdge____c__DisplayClass32_0", modifiers: "&&", def_value: None }]
constexpr UnityEngine__ProBuilder__WingedEdge____c__DisplayClass32_0(UnityEngine__ProBuilder__WingedEdge____c__DisplayClass32_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__ProBuilder__WingedEdge____c__DisplayClass32_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnityEngine__ProBuilder__WingedEdge____c__DisplayClass32_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__ProBuilder__WingedEdge____c__DisplayClass32_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__ProBuilder__WingedEdge____c__DisplayClass32_0& operator=(UnityEngine__ProBuilder__WingedEdge____c__DisplayClass32_0&& o) noexcept = default;
  constexpr UnityEngine__ProBuilder__WingedEdge____c__DisplayClass32_0& operator=(UnityEngine__ProBuilder__WingedEdge____c__DisplayClass32_0 const& o) noexcept = default;
                


// Fields

 System::Collections::Generic::HashSet_1<int32_t> __declspec(property(get=__get_common, put=__set_common))  common;

constexpr void __set_common(System::Collections::Generic::HashSet_1<int32_t> value) ;

constexpr System::Collections::Generic::HashSet_1<int32_t> __get_common() const;


// Methods

// Ctor Parameters []
explicit UnityEngine__ProBuilder__WingedEdge____c__DisplayClass32_0() ;

/// @brief Method .ctor addr 0x29f0988 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <SortCommonIndexesByAdjacency>b__0 addr 0x29f1258 size 0x84 virtual false final false
 bool _SortCommonIndexesByAdjacency_b__0(UnityEngine::ProBuilder::WingedEdge x) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder
// Type: ::<>c
namespace UnityEngine::ProBuilder {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12163))
// CS Name: UnityEngine.ProBuilder.WingedEdge::<>c
class CORDL_TYPE UnityEngine__ProBuilder__WingedEdge____c : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~UnityEngine__ProBuilder__WingedEdge____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__ProBuilder__WingedEdge____c", modifiers: " const&", def_value: None }]
constexpr UnityEngine__ProBuilder__WingedEdge____c(UnityEngine__ProBuilder__WingedEdge____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__ProBuilder__WingedEdge____c", modifiers: "&&", def_value: None }]
constexpr UnityEngine__ProBuilder__WingedEdge____c(UnityEngine__ProBuilder__WingedEdge____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__ProBuilder__WingedEdge____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnityEngine__ProBuilder__WingedEdge____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__ProBuilder__WingedEdge____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__ProBuilder__WingedEdge____c& operator=(UnityEngine__ProBuilder__WingedEdge____c&& o) noexcept = default;
  constexpr UnityEngine__ProBuilder__WingedEdge____c& operator=(UnityEngine__ProBuilder__WingedEdge____c const& o) noexcept = default;
                


// Fields

static UnityEngine::ProBuilder::UnityEngine__ProBuilder__WingedEdge____c __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(UnityEngine::ProBuilder::UnityEngine__ProBuilder__WingedEdge____c value) ;

static UnityEngine::ProBuilder::UnityEngine__ProBuilder__WingedEdge____c __get___9() ;

static System::Func_2<UnityEngine::ProBuilder::WingedEdge,UnityEngine::ProBuilder::Edge> __declspec(property(get=__get___9__32_1, put=__set___9__32_1))  __9__32_1;

static void __set___9__32_1(System::Func_2<UnityEngine::ProBuilder::WingedEdge,UnityEngine::ProBuilder::Edge> value) ;

static System::Func_2<UnityEngine::ProBuilder::WingedEdge,UnityEngine::ProBuilder::Edge> __get___9__32_1() ;

static System::Func_2<UnityEngine::ProBuilder::Edge,int32_t> __declspec(property(get=__get___9__32_2, put=__set___9__32_2))  __9__32_2;

static void __set___9__32_2(System::Func_2<UnityEngine::ProBuilder::Edge,int32_t> value) ;

static System::Func_2<UnityEngine::ProBuilder::Edge,int32_t> __get___9__32_2() ;


// Methods

// Ctor Parameters []
explicit UnityEngine__ProBuilder__WingedEdge____c() ;

/// @brief Method .ctor addr 0x29f1340 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <SortCommonIndexesByAdjacency>b__32_1 addr 0x29f1348 size 0x18 virtual false final false
 UnityEngine::ProBuilder::Edge _SortCommonIndexesByAdjacency_b__32_1(UnityEngine::ProBuilder::WingedEdge y) ;

/// @brief Method <SortCommonIndexesByAdjacency>b__32_2 addr 0x29f1360 size 0x8 virtual false final false
 int32_t _SortCommonIndexesByAdjacency_b__32_2(UnityEngine::ProBuilder::Edge x) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder
// Type: UnityEngine.ProBuilder::WingedEdge
namespace UnityEngine::ProBuilder {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12164))
// CS Name: UnityEngine.ProBuilder.WingedEdge
class CORDL_TYPE WingedEdge : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using __c = UnityEngine::ProBuilder::UnityEngine__ProBuilder__WingedEdge____c;

using __c__DisplayClass32_0 = UnityEngine::ProBuilder::UnityEngine__ProBuilder__WingedEdge____c__DisplayClass32_0;

/// @brief Convert operator to System::IEquatable_1<UnityEngine::ProBuilder::WingedEdge>
constexpr operator  System::IEquatable_1<UnityEngine::ProBuilder::WingedEdge>() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~WingedEdge() = default;

// Ctor Parameters [CppParam { name: "", ty: "WingedEdge", modifiers: " const&", def_value: None }]
constexpr WingedEdge(WingedEdge const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "WingedEdge", modifiers: "&&", def_value: None }]
constexpr WingedEdge(WingedEdge&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit WingedEdge(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr WingedEdge& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr WingedEdge& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr WingedEdge& operator=(WingedEdge&& o) noexcept = default;
  constexpr WingedEdge& operator=(WingedEdge const& o) noexcept = default;
                


// Fields

static System::Collections::Generic::Dictionary_2<UnityEngine::ProBuilder::Edge,UnityEngine::ProBuilder::WingedEdge> __declspec(property(get=__get_k_OppositeEdgeDictionary, put=__set_k_OppositeEdgeDictionary))  k_OppositeEdgeDictionary;

static void __set_k_OppositeEdgeDictionary(System::Collections::Generic::Dictionary_2<UnityEngine::ProBuilder::Edge,UnityEngine::ProBuilder::WingedEdge> value) ;

static System::Collections::Generic::Dictionary_2<UnityEngine::ProBuilder::Edge,UnityEngine::ProBuilder::WingedEdge> __get_k_OppositeEdgeDictionary() ;

 UnityEngine::ProBuilder::EdgeLookup __declspec(property(get=__get__edge_k__BackingField, put=__set__edge_k__BackingField))  _edge_k__BackingField;

constexpr void __set__edge_k__BackingField(UnityEngine::ProBuilder::EdgeLookup value) ;

constexpr UnityEngine::ProBuilder::EdgeLookup __get__edge_k__BackingField() const;

 UnityEngine::ProBuilder::Face __declspec(property(get=__get__face_k__BackingField, put=__set__face_k__BackingField))  _face_k__BackingField;

constexpr void __set__face_k__BackingField(UnityEngine::ProBuilder::Face value) ;

constexpr UnityEngine::ProBuilder::Face __get__face_k__BackingField() const;

 UnityEngine::ProBuilder::WingedEdge __declspec(property(get=__get__next_k__BackingField, put=__set__next_k__BackingField))  _next_k__BackingField;

constexpr void __set__next_k__BackingField(UnityEngine::ProBuilder::WingedEdge value) ;

constexpr UnityEngine::ProBuilder::WingedEdge __get__next_k__BackingField() const;

 UnityEngine::ProBuilder::WingedEdge __declspec(property(get=__get__previous_k__BackingField, put=__set__previous_k__BackingField))  _previous_k__BackingField;

constexpr void __set__previous_k__BackingField(UnityEngine::ProBuilder::WingedEdge value) ;

constexpr UnityEngine::ProBuilder::WingedEdge __get__previous_k__BackingField() const;

 UnityEngine::ProBuilder::WingedEdge __declspec(property(get=__get__opposite_k__BackingField, put=__set__opposite_k__BackingField))  _opposite_k__BackingField;

constexpr void __set__opposite_k__BackingField(UnityEngine::ProBuilder::WingedEdge value) ;

constexpr UnityEngine::ProBuilder::WingedEdge __get__opposite_k__BackingField() const;


// Properties

 UnityEngine::ProBuilder::EdgeLookup __declspec(property(get=get_edge, put=set_edge))  edge;

 UnityEngine::ProBuilder::Face __declspec(property(get=get_face, put=set_face))  face;

 UnityEngine::ProBuilder::WingedEdge __declspec(property(get=get_next, put=set_next))  next;

 UnityEngine::ProBuilder::WingedEdge __declspec(property(get=get_previous, put=set_previous))  previous;

 UnityEngine::ProBuilder::WingedEdge __declspec(property(get=get_opposite, put=set_opposite))  opposite;


// Methods

/// @brief Method get_edge addr 0x29ef7b8 size 0xc virtual false final false
 UnityEngine::ProBuilder::EdgeLookup get_edge() ;

/// @brief Method set_edge addr 0x29ef7c4 size 0x8 virtual false final false
 void set_edge(UnityEngine::ProBuilder::EdgeLookup value) ;

/// @brief Method get_face addr 0x29ef7cc size 0x8 virtual false final false
 UnityEngine::ProBuilder::Face get_face() ;

/// @brief Method set_face addr 0x29ef7d4 size 0x8 virtual false final false
 void set_face(UnityEngine::ProBuilder::Face value) ;

/// @brief Method get_next addr 0x29ef7dc size 0x8 virtual false final false
 UnityEngine::ProBuilder::WingedEdge get_next() ;

/// @brief Method set_next addr 0x29ef7e4 size 0x8 virtual false final false
 void set_next(UnityEngine::ProBuilder::WingedEdge value) ;

/// @brief Method get_previous addr 0x29ef7ec size 0x8 virtual false final false
 UnityEngine::ProBuilder::WingedEdge get_previous() ;

/// @brief Method set_previous addr 0x29ef7f4 size 0x8 virtual false final false
 void set_previous(UnityEngine::ProBuilder::WingedEdge value) ;

/// @brief Method get_opposite addr 0x29ef7fc size 0x8 virtual false final false
 UnityEngine::ProBuilder::WingedEdge get_opposite() ;

/// @brief Method set_opposite addr 0x29ef804 size 0x8 virtual false final false
 void set_opposite(UnityEngine::ProBuilder::WingedEdge value) ;

// Ctor Parameters []
explicit WingedEdge() ;

/// @brief Method .ctor addr 0x29ef80c size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method Equals addr 0x29ef814 size 0x38 virtual true final true
 bool Equals(UnityEngine::ProBuilder::WingedEdge other) ;

/// @brief Method Equals addr 0x29ef84c size 0xd4 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x29ef920 size 0x20 virtual true final false
 int32_t GetHashCode() ;

/// @brief Method Count addr 0x29ef940 size 0x34 virtual false final false
 int32_t Count() ;

/// @brief Method ToString addr 0x29ef974 size 0x1cc virtual true final false
 ::StringW ToString() ;

/// @brief Method MakeQuad addr 0x29efb40 size 0x3dc virtual false final false
static ::ArrayW<int32_t> MakeQuad(UnityEngine::ProBuilder::WingedEdge left, UnityEngine::ProBuilder::WingedEdge right) ;

/// @brief Method GetAdjacentEdgeWithCommonIndex addr 0x29eff1c size 0x84 virtual false final false
 UnityEngine::ProBuilder::WingedEdge GetAdjacentEdgeWithCommonIndex(int32_t common) ;

/// @brief Method SortEdgesByAdjacency addr 0x29effa0 size 0x118 virtual false final false
static System::Collections::Generic::List_1<UnityEngine::ProBuilder::Edge> SortEdgesByAdjacency(UnityEngine::ProBuilder::Face face) ;

/// @brief Method SortEdgesByAdjacency addr 0x29f00b8 size 0x19c virtual false final false
static void SortEdgesByAdjacency(System::Collections::Generic::List_1<UnityEngine::ProBuilder::Edge> edges) ;

/// @brief Method GetSpokes addr 0x29f0254 size 0x430 virtual false final false
static System::Collections::Generic::Dictionary_2<int32_t,System::Collections::Generic::List_1<UnityEngine::ProBuilder::WingedEdge>> GetSpokes(System::Collections::Generic::List_1<UnityEngine::ProBuilder::WingedEdge> wings) ;

/// @brief Method SortCommonIndexesByAdjacency addr 0x29f0684 size 0x304 virtual false final false
static System::Collections::Generic::List_1<int32_t> SortCommonIndexesByAdjacency(System::Collections::Generic::List_1<UnityEngine::ProBuilder::WingedEdge> wings, System::Collections::Generic::HashSet_1<int32_t> common) ;

/// @brief Method GetWingedEdges addr 0x29f0990 size 0xf8 virtual false final false
static System::Collections::Generic::List_1<UnityEngine::ProBuilder::WingedEdge> GetWingedEdges(UnityEngine::ProBuilder::ProBuilderMesh mesh, bool oneWingPerFace) ;

/// @brief Method GetWingedEdges addr 0x29f0a88 size 0x744 virtual false final false
static System::Collections::Generic::List_1<UnityEngine::ProBuilder::WingedEdge> GetWingedEdges(UnityEngine::ProBuilder::ProBuilderMesh mesh, System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Face> faces, bool oneWingPerFace) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder
NEED_NO_BOX(UnityEngine::ProBuilder::UnityEngine__ProBuilder__WingedEdge____c);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::UnityEngine__ProBuilder__WingedEdge____c, "UnityEngine.ProBuilder", "WingedEdge/<>c");
NEED_NO_BOX(UnityEngine::ProBuilder::UnityEngine__ProBuilder__WingedEdge____c__DisplayClass32_0);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::UnityEngine__ProBuilder__WingedEdge____c__DisplayClass32_0, "UnityEngine.ProBuilder", "WingedEdge/<>c__DisplayClass32_0");
NEED_NO_BOX(UnityEngine::ProBuilder::WingedEdge);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::WingedEdge, "UnityEngine.ProBuilder", "WingedEdge");
