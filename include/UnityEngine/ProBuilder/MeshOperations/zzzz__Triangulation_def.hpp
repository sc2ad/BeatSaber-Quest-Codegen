#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
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
namespace UnityEngine::ProBuilder::Poly2Tri {
class TriangulationContext;
}
namespace UnityEngine::ProBuilder::Poly2Tri {
class TriangulationPoint;
}
namespace UnityEngine::ProBuilder::Poly2Tri {
class PolygonPoint;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
// Forward declare root types
namespace UnityEngine::ProBuilder::MeshOperations {
class Triangulation;
}
namespace UnityEngine::ProBuilder::MeshOperations {
class UnityEngine__ProBuilder__MeshOperations__Triangulation____c__DisplayClass7_0;
}
namespace UnityEngine::ProBuilder::MeshOperations {
class UnityEngine__ProBuilder__MeshOperations__Triangulation____c__DisplayClass8_0;
}
// Type: ::<>c__DisplayClass7_0
namespace UnityEngine::ProBuilder::MeshOperations {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12225))
// CS Name: UnityEngine.ProBuilder.MeshOperations.Triangulation::<>c__DisplayClass7_0
class CORDL_TYPE UnityEngine__ProBuilder__MeshOperations__Triangulation____c__DisplayClass7_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~UnityEngine__ProBuilder__MeshOperations__Triangulation____c__DisplayClass7_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__ProBuilder__MeshOperations__Triangulation____c__DisplayClass7_0", modifiers: " const&", def_value: None }]
constexpr UnityEngine__ProBuilder__MeshOperations__Triangulation____c__DisplayClass7_0(UnityEngine__ProBuilder__MeshOperations__Triangulation____c__DisplayClass7_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__ProBuilder__MeshOperations__Triangulation____c__DisplayClass7_0", modifiers: "&&", def_value: None }]
constexpr UnityEngine__ProBuilder__MeshOperations__Triangulation____c__DisplayClass7_0(UnityEngine__ProBuilder__MeshOperations__Triangulation____c__DisplayClass7_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__ProBuilder__MeshOperations__Triangulation____c__DisplayClass7_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnityEngine__ProBuilder__MeshOperations__Triangulation____c__DisplayClass7_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__ProBuilder__MeshOperations__Triangulation____c__DisplayClass7_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__ProBuilder__MeshOperations__Triangulation____c__DisplayClass7_0& operator=(UnityEngine__ProBuilder__MeshOperations__Triangulation____c__DisplayClass7_0&& o) noexcept = default;
  constexpr UnityEngine__ProBuilder__MeshOperations__Triangulation____c__DisplayClass7_0& operator=(UnityEngine__ProBuilder__MeshOperations__Triangulation____c__DisplayClass7_0 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get_index, put=__set_index))  index;

constexpr void __set_index(int32_t value) ;

constexpr int32_t __get_index() const;


// Methods

// Ctor Parameters []
explicit UnityEngine__ProBuilder__MeshOperations__Triangulation____c__DisplayClass7_0() ;

/// @brief Method .ctor addr 0x2a2c7dc size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <Triangulate>b__0 addr 0x2a2c7ec size 0x88 virtual false final false
 UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint _Triangulate_b__0(UnityEngine::Vector2 x) ;

/// @brief Method <Triangulate>b__1 addr 0x2a2c874 size 0x88 virtual false final false
 UnityEngine::ProBuilder::Poly2Tri::PolygonPoint _Triangulate_b__1(UnityEngine::Vector2 x) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder::MeshOperations
// Type: ::<>c__DisplayClass8_0
namespace UnityEngine::ProBuilder::MeshOperations {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12226))
// CS Name: UnityEngine.ProBuilder.MeshOperations.Triangulation::<>c__DisplayClass8_0
class CORDL_TYPE UnityEngine__ProBuilder__MeshOperations__Triangulation____c__DisplayClass8_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~UnityEngine__ProBuilder__MeshOperations__Triangulation____c__DisplayClass8_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__ProBuilder__MeshOperations__Triangulation____c__DisplayClass8_0", modifiers: " const&", def_value: None }]
constexpr UnityEngine__ProBuilder__MeshOperations__Triangulation____c__DisplayClass8_0(UnityEngine__ProBuilder__MeshOperations__Triangulation____c__DisplayClass8_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__ProBuilder__MeshOperations__Triangulation____c__DisplayClass8_0", modifiers: "&&", def_value: None }]
constexpr UnityEngine__ProBuilder__MeshOperations__Triangulation____c__DisplayClass8_0(UnityEngine__ProBuilder__MeshOperations__Triangulation____c__DisplayClass8_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__ProBuilder__MeshOperations__Triangulation____c__DisplayClass8_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnityEngine__ProBuilder__MeshOperations__Triangulation____c__DisplayClass8_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__ProBuilder__MeshOperations__Triangulation____c__DisplayClass8_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__ProBuilder__MeshOperations__Triangulation____c__DisplayClass8_0& operator=(UnityEngine__ProBuilder__MeshOperations__Triangulation____c__DisplayClass8_0&& o) noexcept = default;
  constexpr UnityEngine__ProBuilder__MeshOperations__Triangulation____c__DisplayClass8_0& operator=(UnityEngine__ProBuilder__MeshOperations__Triangulation____c__DisplayClass8_0 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get_index, put=__set_index))  index;

constexpr void __set_index(int32_t value) ;

constexpr int32_t __get_index() const;

 System::Func_2<UnityEngine::Vector2,UnityEngine::ProBuilder::Poly2Tri::PolygonPoint> __declspec(property(get=__get___9__1, put=__set___9__1))  __9__1;

constexpr void __set___9__1(System::Func_2<UnityEngine::Vector2,UnityEngine::ProBuilder::Poly2Tri::PolygonPoint> value) ;

constexpr System::Func_2<UnityEngine::Vector2,UnityEngine::ProBuilder::Poly2Tri::PolygonPoint> __get___9__1() const;


// Methods

// Ctor Parameters []
explicit UnityEngine__ProBuilder__MeshOperations__Triangulation____c__DisplayClass8_0() ;

/// @brief Method .ctor addr 0x2a2c7e4 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <Triangulate>b__0 addr 0x2a2c8fc size 0x88 virtual false final false
 UnityEngine::ProBuilder::Poly2Tri::PolygonPoint _Triangulate_b__0(UnityEngine::Vector2 x) ;

/// @brief Method <Triangulate>b__1 addr 0x2a2c984 size 0x88 virtual false final false
 UnityEngine::ProBuilder::Poly2Tri::PolygonPoint _Triangulate_b__1(UnityEngine::Vector2 x) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder::MeshOperations
// Type: UnityEngine.ProBuilder.MeshOperations::Triangulation
namespace UnityEngine::ProBuilder::MeshOperations {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12227))
// CS Name: UnityEngine.ProBuilder.MeshOperations.Triangulation
class CORDL_TYPE Triangulation : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using __c__DisplayClass8_0 = UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__Triangulation____c__DisplayClass8_0;

using __c__DisplayClass7_0 = UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__Triangulation____c__DisplayClass7_0;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~Triangulation() = default;

// Ctor Parameters [CppParam { name: "", ty: "Triangulation", modifiers: " const&", def_value: None }]
constexpr Triangulation(Triangulation const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Triangulation", modifiers: "&&", def_value: None }]
constexpr Triangulation(Triangulation&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Triangulation(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Triangulation& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Triangulation& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Triangulation& operator=(Triangulation&& o) noexcept = default;
  constexpr Triangulation& operator=(Triangulation const& o) noexcept = default;
                


// Fields

static UnityEngine::ProBuilder::Poly2Tri::TriangulationContext __declspec(property(get=__get_s_TriangulationContext, put=__set_s_TriangulationContext))  s_TriangulationContext;

static void __set_s_TriangulationContext(UnityEngine::ProBuilder::Poly2Tri::TriangulationContext value) ;

static UnityEngine::ProBuilder::Poly2Tri::TriangulationContext __get_s_TriangulationContext() ;


// Properties

static UnityEngine::ProBuilder::Poly2Tri::TriangulationContext __declspec(property(get=get_triangulationContext))  triangulationContext;


// Methods

/// @brief Method get_triangulationContext addr 0x2a2a6a8 size 0x94 virtual false final false
static UnityEngine::ProBuilder::Poly2Tri::TriangulationContext get_triangulationContext() ;

/// @brief Method SortAndTriangulate addr 0x2a2a73c size 0x314 virtual false final false
static bool SortAndTriangulate(System::Collections::Generic::IList_1<UnityEngine::Vector2> points, ByRef<System::Collections::Generic::List_1<int32_t>> indexes, bool convex) ;

/// @brief Method TriangulateVertices addr 0x2a2b5e4 size 0x20c virtual false final false
static bool TriangulateVertices(System::Collections::Generic::IList_1<UnityEngine::ProBuilder::Vertex> vertices, ByRef<System::Collections::Generic::List_1<int32_t>> triangles, bool unordered, bool convex) ;

/// @brief Method TriangulateVertices addr 0x2a2ba14 size 0x1ac virtual false final false
static bool TriangulateVertices(::ArrayW<UnityEngine::Vector3> vertices, ByRef<System::Collections::Generic::List_1<int32_t>> triangles, ::ArrayW<::ArrayW<UnityEngine::Vector3>> holes) ;

/// @brief Method TriangulateVertices addr 0x2a2b7f0 size 0x224 virtual false final false
static bool TriangulateVertices(::ArrayW<UnityEngine::Vector3> vertices, ByRef<System::Collections::Generic::List_1<int32_t>> triangles, bool unordered, bool convex) ;

/// @brief Method Triangulate addr 0x2a2aa50 size 0xb94 virtual false final false
static bool Triangulate(System::Collections::Generic::IList_1<UnityEngine::Vector2> points, ByRef<System::Collections::Generic::List_1<int32_t>> indexes, bool convex) ;

/// @brief Method Triangulate addr 0x2a2bbc0 size 0xc1c virtual false final false
static bool Triangulate(System::Collections::Generic::IList_1<UnityEngine::Vector2> points, System::Collections::Generic::IList_1<System::Collections::Generic::IList_1<UnityEngine::Vector2>> holes, ByRef<System::Collections::Generic::List_1<int32_t>> indexes) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder::MeshOperations
NEED_NO_BOX(UnityEngine::ProBuilder::MeshOperations::Triangulation);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::MeshOperations::Triangulation, "UnityEngine.ProBuilder.MeshOperations", "Triangulation");
NEED_NO_BOX(UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__Triangulation____c__DisplayClass7_0);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__Triangulation____c__DisplayClass7_0, "UnityEngine.ProBuilder.MeshOperations", "Triangulation/<>c__DisplayClass7_0");
NEED_NO_BOX(UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__Triangulation____c__DisplayClass8_0);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__Triangulation____c__DisplayClass8_0, "UnityEngine.ProBuilder.MeshOperations", "Triangulation/<>c__DisplayClass8_0");
