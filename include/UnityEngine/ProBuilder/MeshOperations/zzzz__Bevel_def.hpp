#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
namespace UnityEngine::ProBuilder {
class FaceRebuildData;
}
namespace UnityEngine::ProBuilder {
class WingedEdge;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::ProBuilder {
class Vertex;
}
namespace UnityEngine::ProBuilder {
struct Edge;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace UnityEngine::ProBuilder {
class ProBuilderMesh;
}
namespace UnityEngine::ProBuilder {
template<typename T1,typename T2>
struct SimpleTuple_2;
}
namespace UnityEngine::ProBuilder {
class Face;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace UnityEngine::ProBuilder {
class SharedVertex;
}
namespace UnityEngine::ProBuilder {
struct EdgeLookup;
}
// Forward declare root types
namespace UnityEngine::ProBuilder::MeshOperations {
class Bevel;
}
namespace UnityEngine::ProBuilder::MeshOperations {
class UnityEngine__ProBuilder__MeshOperations__Bevel____c;
}
namespace UnityEngine::ProBuilder::MeshOperations {
class UnityEngine__ProBuilder__MeshOperations__Bevel____c__DisplayClass0_0;
}
namespace UnityEngine::ProBuilder::MeshOperations {
class UnityEngine__ProBuilder__MeshOperations__Bevel____c__DisplayClass0_1;
}
namespace UnityEngine::ProBuilder::MeshOperations {
class UnityEngine__ProBuilder__MeshOperations__Bevel____c__DisplayClass0_2;
}
// Type: ::<>c__DisplayClass0_0
namespace UnityEngine::ProBuilder::MeshOperations {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12185))
// CS Name: UnityEngine.ProBuilder.MeshOperations.Bevel::<>c__DisplayClass0_0
class CORDL_TYPE UnityEngine__ProBuilder__MeshOperations__Bevel____c__DisplayClass0_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~UnityEngine__ProBuilder__MeshOperations__Bevel____c__DisplayClass0_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__ProBuilder__MeshOperations__Bevel____c__DisplayClass0_0", modifiers: " const&", def_value: None }]
constexpr UnityEngine__ProBuilder__MeshOperations__Bevel____c__DisplayClass0_0(UnityEngine__ProBuilder__MeshOperations__Bevel____c__DisplayClass0_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__ProBuilder__MeshOperations__Bevel____c__DisplayClass0_0", modifiers: "&&", def_value: None }]
constexpr UnityEngine__ProBuilder__MeshOperations__Bevel____c__DisplayClass0_0(UnityEngine__ProBuilder__MeshOperations__Bevel____c__DisplayClass0_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__ProBuilder__MeshOperations__Bevel____c__DisplayClass0_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnityEngine__ProBuilder__MeshOperations__Bevel____c__DisplayClass0_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__ProBuilder__MeshOperations__Bevel____c__DisplayClass0_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__ProBuilder__MeshOperations__Bevel____c__DisplayClass0_0& operator=(UnityEngine__ProBuilder__MeshOperations__Bevel____c__DisplayClass0_0&& o) noexcept = default;
  constexpr UnityEngine__ProBuilder__MeshOperations__Bevel____c__DisplayClass0_0& operator=(UnityEngine__ProBuilder__MeshOperations__Bevel____c__DisplayClass0_0 const& o) noexcept = default;
                


// Fields

 System::Collections::Generic::Dictionary_2<UnityEngine::ProBuilder::Face,System::Collections::Generic::List_1<int32_t>> __declspec(property(get=__get_ignore, put=__set_ignore))  ignore;

constexpr void __set_ignore(System::Collections::Generic::Dictionary_2<UnityEngine::ProBuilder::Face,System::Collections::Generic::List_1<int32_t>> value) ;

constexpr System::Collections::Generic::Dictionary_2<UnityEngine::ProBuilder::Face,System::Collections::Generic::List_1<int32_t>> __get_ignore() const;

 ::ArrayW<UnityEngine::ProBuilder::SharedVertex> __declspec(property(get=__get_sharedIndexes, put=__set_sharedIndexes))  sharedIndexes;

constexpr void __set_sharedIndexes(::ArrayW<UnityEngine::ProBuilder::SharedVertex> value) ;

constexpr ::ArrayW<UnityEngine::ProBuilder::SharedVertex> __get_sharedIndexes() const;

 System::Func_2<int32_t,int32_t> __declspec(property(get=__get___9__7, put=__set___9__7))  __9__7;

constexpr void __set___9__7(System::Func_2<int32_t,int32_t> value) ;

constexpr System::Func_2<int32_t,int32_t> __get___9__7() const;

 System::Func_2<int32_t,int32_t> __declspec(property(get=__get___9__8, put=__set___9__8))  __9__8;

constexpr void __set___9__8(System::Func_2<int32_t,int32_t> value) ;

constexpr System::Func_2<int32_t,int32_t> __get___9__8() const;


// Methods

// Ctor Parameters []
explicit UnityEngine__ProBuilder__MeshOperations__Bevel____c__DisplayClass0_0() ;

/// @brief Method .ctor addr 0x2a0980c size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <BevelEdges>b__7 addr 0x2a0a728 size 0x3c virtual false final false
 int32_t _BevelEdges_b__7(int32_t x) ;

/// @brief Method <BevelEdges>b__8 addr 0x2a0a764 size 0x3c virtual false final false
 int32_t _BevelEdges_b__8(int32_t x) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder::MeshOperations
// Type: ::<>c__DisplayClass0_1
namespace UnityEngine::ProBuilder::MeshOperations {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12186))
// CS Name: UnityEngine.ProBuilder.MeshOperations.Bevel::<>c__DisplayClass0_1
class CORDL_TYPE UnityEngine__ProBuilder__MeshOperations__Bevel____c__DisplayClass0_1 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~UnityEngine__ProBuilder__MeshOperations__Bevel____c__DisplayClass0_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__ProBuilder__MeshOperations__Bevel____c__DisplayClass0_1", modifiers: " const&", def_value: None }]
constexpr UnityEngine__ProBuilder__MeshOperations__Bevel____c__DisplayClass0_1(UnityEngine__ProBuilder__MeshOperations__Bevel____c__DisplayClass0_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__ProBuilder__MeshOperations__Bevel____c__DisplayClass0_1", modifiers: "&&", def_value: None }]
constexpr UnityEngine__ProBuilder__MeshOperations__Bevel____c__DisplayClass0_1(UnityEngine__ProBuilder__MeshOperations__Bevel____c__DisplayClass0_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__ProBuilder__MeshOperations__Bevel____c__DisplayClass0_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnityEngine__ProBuilder__MeshOperations__Bevel____c__DisplayClass0_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__ProBuilder__MeshOperations__Bevel____c__DisplayClass0_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__ProBuilder__MeshOperations__Bevel____c__DisplayClass0_1& operator=(UnityEngine__ProBuilder__MeshOperations__Bevel____c__DisplayClass0_1&& o) noexcept = default;
  constexpr UnityEngine__ProBuilder__MeshOperations__Bevel____c__DisplayClass0_1& operator=(UnityEngine__ProBuilder__MeshOperations__Bevel____c__DisplayClass0_1 const& o) noexcept = default;
                


// Fields

 UnityEngine::ProBuilder::EdgeLookup __declspec(property(get=__get_lup, put=__set_lup))  lup;

constexpr void __set_lup(UnityEngine::ProBuilder::EdgeLookup value) ;

constexpr UnityEngine::ProBuilder::EdgeLookup __get_lup() const;


// Methods

// Ctor Parameters []
explicit UnityEngine__ProBuilder__MeshOperations__Bevel____c__DisplayClass0_1() ;

/// @brief Method .ctor addr 0x2a09814 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <BevelEdges>b__4 addr 0x2a0a7a0 size 0x3c virtual false final false
 bool _BevelEdges_b__4(UnityEngine::ProBuilder::WingedEdge x) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder::MeshOperations
// Type: ::<>c__DisplayClass0_2
namespace UnityEngine::ProBuilder::MeshOperations {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12187))
// CS Name: UnityEngine.ProBuilder.MeshOperations.Bevel::<>c__DisplayClass0_2
class CORDL_TYPE UnityEngine__ProBuilder__MeshOperations__Bevel____c__DisplayClass0_2 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~UnityEngine__ProBuilder__MeshOperations__Bevel____c__DisplayClass0_2() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__ProBuilder__MeshOperations__Bevel____c__DisplayClass0_2", modifiers: " const&", def_value: None }]
constexpr UnityEngine__ProBuilder__MeshOperations__Bevel____c__DisplayClass0_2(UnityEngine__ProBuilder__MeshOperations__Bevel____c__DisplayClass0_2 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__ProBuilder__MeshOperations__Bevel____c__DisplayClass0_2", modifiers: "&&", def_value: None }]
constexpr UnityEngine__ProBuilder__MeshOperations__Bevel____c__DisplayClass0_2(UnityEngine__ProBuilder__MeshOperations__Bevel____c__DisplayClass0_2&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__ProBuilder__MeshOperations__Bevel____c__DisplayClass0_2(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnityEngine__ProBuilder__MeshOperations__Bevel____c__DisplayClass0_2& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__ProBuilder__MeshOperations__Bevel____c__DisplayClass0_2& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__ProBuilder__MeshOperations__Bevel____c__DisplayClass0_2& operator=(UnityEngine__ProBuilder__MeshOperations__Bevel____c__DisplayClass0_2&& o) noexcept = default;
  constexpr UnityEngine__ProBuilder__MeshOperations__Bevel____c__DisplayClass0_2& operator=(UnityEngine__ProBuilder__MeshOperations__Bevel____c__DisplayClass0_2 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get_c, put=__set_c))  c;

constexpr void __set_c(int32_t value) ;

constexpr int32_t __get_c() const;

 UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__Bevel____c__DisplayClass0_0 __declspec(property(get=__get_CS$__8__locals1, put=__set_CS$__8__locals1))  CS$__8__locals1;

constexpr void __set_CS$__8__locals1(UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__Bevel____c__DisplayClass0_0 value) ;

constexpr UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__Bevel____c__DisplayClass0_0 __get_CS$__8__locals1() const;


// Methods

// Ctor Parameters []
explicit UnityEngine__ProBuilder__MeshOperations__Bevel____c__DisplayClass0_2() ;

/// @brief Method .ctor addr 0x2a0a4a0 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <BevelEdges>b__5 addr 0x2a0a7dc size 0x100 virtual false final false
 bool _BevelEdges_b__5(UnityEngine::ProBuilder::WingedEdge x) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder::MeshOperations
// Type: ::<>c
namespace UnityEngine::ProBuilder::MeshOperations {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12188))
// CS Name: UnityEngine.ProBuilder.MeshOperations.Bevel::<>c
class CORDL_TYPE UnityEngine__ProBuilder__MeshOperations__Bevel____c : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~UnityEngine__ProBuilder__MeshOperations__Bevel____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__ProBuilder__MeshOperations__Bevel____c", modifiers: " const&", def_value: None }]
constexpr UnityEngine__ProBuilder__MeshOperations__Bevel____c(UnityEngine__ProBuilder__MeshOperations__Bevel____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__ProBuilder__MeshOperations__Bevel____c", modifiers: "&&", def_value: None }]
constexpr UnityEngine__ProBuilder__MeshOperations__Bevel____c(UnityEngine__ProBuilder__MeshOperations__Bevel____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__ProBuilder__MeshOperations__Bevel____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnityEngine__ProBuilder__MeshOperations__Bevel____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__ProBuilder__MeshOperations__Bevel____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__ProBuilder__MeshOperations__Bevel____c& operator=(UnityEngine__ProBuilder__MeshOperations__Bevel____c&& o) noexcept = default;
  constexpr UnityEngine__ProBuilder__MeshOperations__Bevel____c& operator=(UnityEngine__ProBuilder__MeshOperations__Bevel____c const& o) noexcept = default;
                


// Fields

static UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__Bevel____c __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__Bevel____c value) ;

static UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__Bevel____c __get___9() ;

static System::Func_2<UnityEngine::ProBuilder::FaceRebuildData,UnityEngine::ProBuilder::Face> __declspec(property(get=__get___9__0_0, put=__set___9__0_0))  __9__0_0;

static void __set___9__0_0(System::Func_2<UnityEngine::ProBuilder::FaceRebuildData,UnityEngine::ProBuilder::Face> value) ;

static System::Func_2<UnityEngine::ProBuilder::FaceRebuildData,UnityEngine::ProBuilder::Face> __get___9__0_0() ;

static System::Func_2<UnityEngine::ProBuilder::SimpleTuple_2<UnityEngine::ProBuilder::FaceRebuildData,System::Collections::Generic::List_1<int32_t>>,int32_t> __declspec(property(get=__get___9__0_6, put=__set___9__0_6))  __9__0_6;

static void __set___9__0_6(System::Func_2<UnityEngine::ProBuilder::SimpleTuple_2<UnityEngine::ProBuilder::FaceRebuildData,System::Collections::Generic::List_1<int32_t>>,int32_t> value) ;

static System::Func_2<UnityEngine::ProBuilder::SimpleTuple_2<UnityEngine::ProBuilder::FaceRebuildData,System::Collections::Generic::List_1<int32_t>>,int32_t> __get___9__0_6() ;

static System::Func_2<UnityEngine::ProBuilder::FaceRebuildData,UnityEngine::ProBuilder::Face> __declspec(property(get=__get___9__0_1, put=__set___9__0_1))  __9__0_1;

static void __set___9__0_1(System::Func_2<UnityEngine::ProBuilder::FaceRebuildData,UnityEngine::ProBuilder::Face> value) ;

static System::Func_2<UnityEngine::ProBuilder::FaceRebuildData,UnityEngine::ProBuilder::Face> __get___9__0_1() ;

static System::Func_2<UnityEngine::ProBuilder::FaceRebuildData,UnityEngine::ProBuilder::Face> __declspec(property(get=__get___9__0_2, put=__set___9__0_2))  __9__0_2;

static void __set___9__0_2(System::Func_2<UnityEngine::ProBuilder::FaceRebuildData,UnityEngine::ProBuilder::Face> value) ;

static System::Func_2<UnityEngine::ProBuilder::FaceRebuildData,UnityEngine::ProBuilder::Face> __get___9__0_2() ;

static System::Func_2<UnityEngine::ProBuilder::FaceRebuildData,UnityEngine::ProBuilder::Face> __declspec(property(get=__get___9__0_3, put=__set___9__0_3))  __9__0_3;

static void __set___9__0_3(System::Func_2<UnityEngine::ProBuilder::FaceRebuildData,UnityEngine::ProBuilder::Face> value) ;

static System::Func_2<UnityEngine::ProBuilder::FaceRebuildData,UnityEngine::ProBuilder::Face> __get___9__0_3() ;


// Methods

// Ctor Parameters []
explicit UnityEngine__ProBuilder__MeshOperations__Bevel____c() ;

/// @brief Method .ctor addr 0x2a0a940 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <BevelEdges>b__0_0 addr 0x2a0a948 size 0x18 virtual false final false
 UnityEngine::ProBuilder::Face _BevelEdges_b__0_0(UnityEngine::ProBuilder::FaceRebuildData x) ;

/// @brief Method <BevelEdges>b__0_6 addr 0x2a0a960 size 0x50 virtual false final false
 int32_t _BevelEdges_b__0_6(UnityEngine::ProBuilder::SimpleTuple_2<UnityEngine::ProBuilder::FaceRebuildData,System::Collections::Generic::List_1<int32_t>> x) ;

/// @brief Method <BevelEdges>b__0_1 addr 0x2a0a9b0 size 0x18 virtual false final false
 UnityEngine::ProBuilder::Face _BevelEdges_b__0_1(UnityEngine::ProBuilder::FaceRebuildData x) ;

/// @brief Method <BevelEdges>b__0_2 addr 0x2a0a9c8 size 0x18 virtual false final false
 UnityEngine::ProBuilder::Face _BevelEdges_b__0_2(UnityEngine::ProBuilder::FaceRebuildData x) ;

/// @brief Method <BevelEdges>b__0_3 addr 0x2a0a9e0 size 0x18 virtual false final false
 UnityEngine::ProBuilder::Face _BevelEdges_b__0_3(UnityEngine::ProBuilder::FaceRebuildData x) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder::MeshOperations
// Type: UnityEngine.ProBuilder.MeshOperations::Bevel
namespace UnityEngine::ProBuilder::MeshOperations {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12189))
// CS Name: UnityEngine.ProBuilder.MeshOperations.Bevel
class CORDL_TYPE Bevel : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using __c = UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__Bevel____c;

using __c__DisplayClass0_2 = UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__Bevel____c__DisplayClass0_2;

using __c__DisplayClass0_1 = UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__Bevel____c__DisplayClass0_1;

using __c__DisplayClass0_0 = UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__Bevel____c__DisplayClass0_0;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~Bevel() = default;

// Ctor Parameters [CppParam { name: "", ty: "Bevel", modifiers: " const&", def_value: None }]
constexpr Bevel(Bevel const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Bevel", modifiers: "&&", def_value: None }]
constexpr Bevel(Bevel&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Bevel(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Bevel& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Bevel& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Bevel& operator=(Bevel&& o) noexcept = default;
  constexpr Bevel& operator=(Bevel const& o) noexcept = default;
                


// Fields

static ::ArrayW<int32_t> __declspec(property(get=__get_k_BridgeIndexesTri, put=__set_k_BridgeIndexesTri))  k_BridgeIndexesTri;

static void __set_k_BridgeIndexesTri(::ArrayW<int32_t> value) ;

static ::ArrayW<int32_t> __get_k_BridgeIndexesTri() ;


// Methods

/// @brief Method BevelEdges addr 0x2a070c4 size 0x2748 virtual false final false
static System::Collections::Generic::List_1<UnityEngine::ProBuilder::Face> BevelEdges(UnityEngine::ProBuilder::ProBuilderMesh mesh, System::Collections::Generic::IList_1<UnityEngine::ProBuilder::Edge> edges, float_t amount) ;

/// @brief Method GetBridgeFaces addr 0x2a09bec size 0x8b4 virtual false final false
static System::Collections::Generic::List_1<UnityEngine::ProBuilder::FaceRebuildData> GetBridgeFaces(System::Collections::Generic::IList_1<UnityEngine::ProBuilder::Vertex> vertices, UnityEngine::ProBuilder::WingedEdge left, UnityEngine::ProBuilder::WingedEdge right, System::Collections::Generic::Dictionary_2<int32_t,System::Collections::Generic::List_1<UnityEngine::ProBuilder::SimpleTuple_2<UnityEngine::ProBuilder::FaceRebuildData,System::Collections::Generic::List_1<int32_t>>>> holes) ;

/// @brief Method SlideEdge addr 0x2a0981c size 0x3d0 virtual false final false
static void SlideEdge(System::Collections::Generic::IList_1<UnityEngine::ProBuilder::Vertex> vertices, UnityEngine::ProBuilder::WingedEdge we, float_t amount) ;

/// @brief Method GetLeadingEdge addr 0x2a0a5ac size 0xe8 virtual false final false
static UnityEngine::ProBuilder::Edge GetLeadingEdge(UnityEngine::ProBuilder::WingedEdge wing, int32_t common) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder::MeshOperations
NEED_NO_BOX(UnityEngine::ProBuilder::MeshOperations::Bevel);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::MeshOperations::Bevel, "UnityEngine.ProBuilder.MeshOperations", "Bevel");
NEED_NO_BOX(UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__Bevel____c);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__Bevel____c, "UnityEngine.ProBuilder.MeshOperations", "Bevel/<>c");
NEED_NO_BOX(UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__Bevel____c__DisplayClass0_0);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__Bevel____c__DisplayClass0_0, "UnityEngine.ProBuilder.MeshOperations", "Bevel/<>c__DisplayClass0_0");
NEED_NO_BOX(UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__Bevel____c__DisplayClass0_1);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__Bevel____c__DisplayClass0_1, "UnityEngine.ProBuilder.MeshOperations", "Bevel/<>c__DisplayClass0_1");
NEED_NO_BOX(UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__Bevel____c__DisplayClass0_2);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__Bevel____c__DisplayClass0_2, "UnityEngine.ProBuilder.MeshOperations", "Bevel/<>c__DisplayClass0_2");
