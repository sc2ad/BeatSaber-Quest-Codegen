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
class IList_1;
}
namespace UnityEngine::ProBuilder {
struct AutoUnwrapSettings;
}
namespace UnityEngine::ProBuilder {
struct ProjectionAxis;
}
namespace UnityEngine {
struct Plane;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine::ProBuilder {
class Face;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine::ProBuilder {
struct SortMethod;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System {
template<typename T>
class Comparison_1;
}
namespace UnityEngine::ProBuilder {
template<typename T1,typename T2>
struct SimpleTuple_2;
}
// Forward declare root types
namespace UnityEngine::ProBuilder {
class Projection;
}
namespace UnityEngine::ProBuilder {
class UnityEngine__ProBuilder__Projection____c;
}
// Type: ::<>c
namespace UnityEngine::ProBuilder {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12121))
// CS Name: UnityEngine.ProBuilder.Projection::<>c
class CORDL_TYPE UnityEngine__ProBuilder__Projection____c : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~UnityEngine__ProBuilder__Projection____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__ProBuilder__Projection____c", modifiers: " const&", def_value: None }]
constexpr UnityEngine__ProBuilder__Projection____c(UnityEngine__ProBuilder__Projection____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__ProBuilder__Projection____c", modifiers: "&&", def_value: None }]
constexpr UnityEngine__ProBuilder__Projection____c(UnityEngine__ProBuilder__Projection____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__ProBuilder__Projection____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnityEngine__ProBuilder__Projection____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__ProBuilder__Projection____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__ProBuilder__Projection____c& operator=(UnityEngine__ProBuilder__Projection____c&& o) noexcept = default;
  constexpr UnityEngine__ProBuilder__Projection____c& operator=(UnityEngine__ProBuilder__Projection____c const& o) noexcept = default;
                


// Fields

static UnityEngine::ProBuilder::UnityEngine__ProBuilder__Projection____c __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(UnityEngine::ProBuilder::UnityEngine__ProBuilder__Projection____c value) ;

static UnityEngine::ProBuilder::UnityEngine__ProBuilder__Projection____c __get___9() ;

static System::Comparison_1<UnityEngine::ProBuilder::SimpleTuple_2<float_t,UnityEngine::Vector2>> __declspec(property(get=__get___9__6_0, put=__set___9__6_0))  __9__6_0;

static void __set___9__6_0(System::Comparison_1<UnityEngine::ProBuilder::SimpleTuple_2<float_t,UnityEngine::Vector2>> value) ;

static System::Comparison_1<UnityEngine::ProBuilder::SimpleTuple_2<float_t,UnityEngine::Vector2>> __get___9__6_0() ;

static System::Func_2<UnityEngine::ProBuilder::SimpleTuple_2<float_t,UnityEngine::Vector2>,UnityEngine::Vector2> __declspec(property(get=__get___9__6_1, put=__set___9__6_1))  __9__6_1;

static void __set___9__6_1(System::Func_2<UnityEngine::ProBuilder::SimpleTuple_2<float_t,UnityEngine::Vector2>,UnityEngine::Vector2> value) ;

static System::Func_2<UnityEngine::ProBuilder::SimpleTuple_2<float_t,UnityEngine::Vector2>,UnityEngine::Vector2> __get___9__6_1() ;


// Methods

// Ctor Parameters []
explicit UnityEngine__ProBuilder__Projection____c() ;

/// @brief Method .ctor addr 0x29cefc4 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <Sort>b__6_0 addr 0x29cefcc size 0x48 virtual false final false
 int32_t _Sort_b__6_0(UnityEngine::ProBuilder::SimpleTuple_2<float_t,UnityEngine::Vector2> a, UnityEngine::ProBuilder::SimpleTuple_2<float_t,UnityEngine::Vector2> b) ;

/// @brief Method <Sort>b__6_1 addr 0x29cf014 size 0x44 virtual false final false
 UnityEngine::Vector2 _Sort_b__6_1(UnityEngine::ProBuilder::SimpleTuple_2<float_t,UnityEngine::Vector2> x) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder
// Type: UnityEngine.ProBuilder::Projection
namespace UnityEngine::ProBuilder {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12122))
// CS Name: UnityEngine.ProBuilder.Projection
class CORDL_TYPE Projection : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using __c = UnityEngine::ProBuilder::UnityEngine__ProBuilder__Projection____c;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~Projection() = default;

// Ctor Parameters [CppParam { name: "", ty: "Projection", modifiers: " const&", def_value: None }]
constexpr Projection(Projection const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Projection", modifiers: "&&", def_value: None }]
constexpr Projection(Projection&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Projection(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Projection& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Projection& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Projection& operator=(Projection&& o) noexcept = default;
  constexpr Projection& operator=(Projection const& o) noexcept = default;
                


// Methods

/// @brief Method PlanarProject addr 0x29cc424 size 0x48 virtual false final false
static ::ArrayW<UnityEngine::Vector2> PlanarProject(System::Collections::Generic::IList_1<UnityEngine::Vector3> positions, System::Collections::Generic::IList_1<int32_t> indexes) ;

/// @brief Method PlanarProject addr 0x29ccd84 size 0x1b8 virtual false final false
static ::ArrayW<UnityEngine::Vector2> PlanarProject(System::Collections::Generic::IList_1<UnityEngine::Vector3> positions, System::Collections::Generic::IList_1<int32_t> indexes, UnityEngine::Vector3 direction) ;

/// @brief Method PlanarProject addr 0x29ccf3c size 0x784 virtual false final false
static void PlanarProject(System::Collections::Generic::IList_1<UnityEngine::Vector3> positions, System::Collections::Generic::IList_1<int32_t> indexes, UnityEngine::Vector3 direction, System::Collections::Generic::List_1<UnityEngine::Vector2> results) ;

/// @brief Method PlanarProject addr 0x29cd89c size 0x43c virtual false final false
static void PlanarProject(UnityEngine::ProBuilder::ProBuilderMesh mesh, int32_t textureGroup, UnityEngine::ProBuilder::AutoUnwrapSettings unwrapSettings) ;

/// @brief Method PlanarProject addr 0x29cdcd8 size 0x3d8 virtual false final false
static void PlanarProject(UnityEngine::ProBuilder::ProBuilderMesh mesh, UnityEngine::ProBuilder::Face face, UnityEngine::Vector3 projection) ;

/// @brief Method SphericalProject addr 0x29ce0b0 size 0x3cc virtual false final false
static ::ArrayW<UnityEngine::Vector2> SphericalProject(System::Collections::Generic::IList_1<UnityEngine::Vector3> vertices, System::Collections::Generic::IList_1<int32_t> indexes) ;

/// @brief Method Sort addr 0x29ce47c size 0x4e0 virtual false final false
static System::Collections::Generic::IList_1<UnityEngine::Vector2> Sort(System::Collections::Generic::IList_1<UnityEngine::Vector2> verts, UnityEngine::ProBuilder::SortMethod method) ;

/// @brief Method GetTangentToAxis addr 0x29cd7e0 size 0xbc virtual false final false
static UnityEngine::Vector3 GetTangentToAxis(UnityEngine::ProBuilder::ProjectionAxis axis) ;

/// @brief Method ProjectionAxisToVector addr 0x29ce95c size 0x1a0 virtual false final false
static UnityEngine::Vector3 ProjectionAxisToVector(UnityEngine::ProBuilder::ProjectionAxis axis) ;

/// @brief Method VectorToProjectionAxis addr 0x29cd6c0 size 0x120 virtual false final false
static UnityEngine::ProBuilder::ProjectionAxis VectorToProjectionAxis(UnityEngine::Vector3 direction) ;

/// @brief Method FindBestPlane addr 0x29cc46c size 0x918 virtual false final false
static UnityEngine::Plane FindBestPlane(System::Collections::Generic::IList_1<UnityEngine::Vector3> points, System::Collections::Generic::IList_1<int32_t> indexes) ;

/// @brief Method FindBestPlane addr 0x29ceafc size 0x464 virtual false final false
static UnityEngine::Plane FindBestPlane(UnityEngine::ProBuilder::ProBuilderMesh mesh, int32_t textureGroup) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder
NEED_NO_BOX(UnityEngine::ProBuilder::Projection);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::Projection, "UnityEngine.ProBuilder", "Projection");
NEED_NO_BOX(UnityEngine::ProBuilder::UnityEngine__ProBuilder__Projection____c);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::UnityEngine__ProBuilder__Projection____c, "UnityEngine.ProBuilder", "Projection/<>c");
