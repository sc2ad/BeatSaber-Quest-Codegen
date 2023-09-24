#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace UnityEngine::ProBuilder {
class SharedVertex;
}
namespace UnityEngine::ProBuilder::MeshOperations {
class UnityEngine__ProBuilder__MeshOperations__InternalMeshUtility____c;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace UnityEngine::ProBuilder {
class ProBuilderMesh;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
class Mesh;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::ProBuilder::MeshOperations {
class InternalMeshUtility;
}
namespace UnityEngine::ProBuilder::MeshOperations {
class UnityEngine__ProBuilder__MeshOperations__InternalMeshUtility____c;
}
// Type: ::<>c
namespace UnityEngine::ProBuilder::MeshOperations {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12207))
// CS Name: UnityEngine.ProBuilder.MeshOperations.InternalMeshUtility::<>c
class CORDL_TYPE UnityEngine__ProBuilder__MeshOperations__InternalMeshUtility____c : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~UnityEngine__ProBuilder__MeshOperations__InternalMeshUtility____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__ProBuilder__MeshOperations__InternalMeshUtility____c", modifiers: " const&", def_value: None }]
constexpr UnityEngine__ProBuilder__MeshOperations__InternalMeshUtility____c(UnityEngine__ProBuilder__MeshOperations__InternalMeshUtility____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__ProBuilder__MeshOperations__InternalMeshUtility____c", modifiers: "&&", def_value: None }]
constexpr UnityEngine__ProBuilder__MeshOperations__InternalMeshUtility____c(UnityEngine__ProBuilder__MeshOperations__InternalMeshUtility____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__ProBuilder__MeshOperations__InternalMeshUtility____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnityEngine__ProBuilder__MeshOperations__InternalMeshUtility____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__ProBuilder__MeshOperations__InternalMeshUtility____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__ProBuilder__MeshOperations__InternalMeshUtility____c& operator=(UnityEngine__ProBuilder__MeshOperations__InternalMeshUtility____c&& o) noexcept = default;
  constexpr UnityEngine__ProBuilder__MeshOperations__InternalMeshUtility____c& operator=(UnityEngine__ProBuilder__MeshOperations__InternalMeshUtility____c const& o) noexcept = default;
                


// Fields

static UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__InternalMeshUtility____c __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__InternalMeshUtility____c value) ;

static UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__InternalMeshUtility____c __get___9() ;

static System::Func_2<UnityEngine::Mesh,::ArrayW<UnityEngine::Vector3>> __declspec(property(get=__get___9__1_0, put=__set___9__1_0))  __9__1_0;

static void __set___9__1_0(System::Func_2<UnityEngine::Mesh,::ArrayW<UnityEngine::Vector3>> value) ;

static System::Func_2<UnityEngine::Mesh,::ArrayW<UnityEngine::Vector3>> __get___9__1_0() ;

static System::Func_2<UnityEngine::Mesh,::ArrayW<UnityEngine::Color>> __declspec(property(get=__get___9__1_1, put=__set___9__1_1))  __9__1_1;

static void __set___9__1_1(System::Func_2<UnityEngine::Mesh,::ArrayW<UnityEngine::Color>> value) ;

static System::Func_2<UnityEngine::Mesh,::ArrayW<UnityEngine::Color>> __get___9__1_1() ;

static System::Func_2<UnityEngine::Mesh,::ArrayW<UnityEngine::Vector2>> __declspec(property(get=__get___9__1_2, put=__set___9__1_2))  __9__1_2;

static void __set___9__1_2(System::Func_2<UnityEngine::Mesh,::ArrayW<UnityEngine::Vector2>> value) ;

static System::Func_2<UnityEngine::Mesh,::ArrayW<UnityEngine::Vector2>> __get___9__1_2() ;

static System::Func_2<UnityEngine::Mesh,::ArrayW<UnityEngine::Vector3>> __declspec(property(get=__get___9__2_0, put=__set___9__2_0))  __9__2_0;

static void __set___9__2_0(System::Func_2<UnityEngine::Mesh,::ArrayW<UnityEngine::Vector3>> value) ;

static System::Func_2<UnityEngine::Mesh,::ArrayW<UnityEngine::Vector3>> __get___9__2_0() ;

static System::Func_2<UnityEngine::Mesh,::ArrayW<UnityEngine::Color>> __declspec(property(get=__get___9__2_1, put=__set___9__2_1))  __9__2_1;

static void __set___9__2_1(System::Func_2<UnityEngine::Mesh,::ArrayW<UnityEngine::Color>> value) ;

static System::Func_2<UnityEngine::Mesh,::ArrayW<UnityEngine::Color>> __get___9__2_1() ;

static System::Func_2<UnityEngine::Mesh,::ArrayW<UnityEngine::Vector2>> __declspec(property(get=__get___9__2_2, put=__set___9__2_2))  __9__2_2;

static void __set___9__2_2(System::Func_2<UnityEngine::Mesh,::ArrayW<UnityEngine::Vector2>> value) ;

static System::Func_2<UnityEngine::Mesh,::ArrayW<UnityEngine::Vector2>> __get___9__2_2() ;

static System::Func_2<bool,bool> __declspec(property(get=__get___9__3_0, put=__set___9__3_0))  __9__3_0;

static void __set___9__3_0(System::Func_2<bool,bool> value) ;

static System::Func_2<bool,bool> __get___9__3_0() ;


// Methods

static UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__InternalMeshUtility____c New_ctor() ;

/// @brief Method .ctor addr 0x2a21dbc size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <CreateMeshWithTransform>b__1_0 addr 0x2a21dc4 size 0x18 virtual false final false
 ::ArrayW<UnityEngine::Vector3> _CreateMeshWithTransform_b__1_0(UnityEngine::Mesh x) ;

/// @brief Method <CreateMeshWithTransform>b__1_1 addr 0x2a21ddc size 0x18 virtual false final false
 ::ArrayW<UnityEngine::Color> _CreateMeshWithTransform_b__1_1(UnityEngine::Mesh x) ;

/// @brief Method <CreateMeshWithTransform>b__1_2 addr 0x2a21df4 size 0x18 virtual false final false
 ::ArrayW<UnityEngine::Vector2> _CreateMeshWithTransform_b__1_2(UnityEngine::Mesh x) ;

/// @brief Method <ResetPbObjectWithMeshFilter>b__2_0 addr 0x2a21e0c size 0x18 virtual false final false
 ::ArrayW<UnityEngine::Vector3> _ResetPbObjectWithMeshFilter_b__2_0(UnityEngine::Mesh x) ;

/// @brief Method <ResetPbObjectWithMeshFilter>b__2_1 addr 0x2a21e24 size 0x18 virtual false final false
 ::ArrayW<UnityEngine::Color> _ResetPbObjectWithMeshFilter_b__2_1(UnityEngine::Mesh x) ;

/// @brief Method <ResetPbObjectWithMeshFilter>b__2_2 addr 0x2a21e3c size 0x18 virtual false final false
 ::ArrayW<UnityEngine::Vector2> _ResetPbObjectWithMeshFilter_b__2_2(UnityEngine::Mesh x) ;

/// @brief Method <FilterUnusedSubmeshIndexes>b__3_0 addr 0x2a21e54 size 0xc virtual false final false
 bool _FilterUnusedSubmeshIndexes_b__3_0(bool x) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder::MeshOperations
// Type: UnityEngine.ProBuilder.MeshOperations::InternalMeshUtility
namespace UnityEngine::ProBuilder::MeshOperations {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12208))
// CS Name: UnityEngine.ProBuilder.MeshOperations.InternalMeshUtility
class CORDL_TYPE InternalMeshUtility : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using __c = UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__InternalMeshUtility____c;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~InternalMeshUtility() = default;

// Ctor Parameters [CppParam { name: "", ty: "InternalMeshUtility", modifiers: " const&", def_value: None }]
constexpr InternalMeshUtility(InternalMeshUtility const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "InternalMeshUtility", modifiers: "&&", def_value: None }]
constexpr InternalMeshUtility(InternalMeshUtility&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit InternalMeshUtility(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr InternalMeshUtility& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr InternalMeshUtility& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr InternalMeshUtility& operator=(InternalMeshUtility&& o) noexcept = default;
  constexpr InternalMeshUtility& operator=(InternalMeshUtility const& o) noexcept = default;
                


// Methods

/// @brief Method AverageNormalWithIndexes addr 0x2a1dd00 size 0x194 virtual false final false
static UnityEngine::Vector3 AverageNormalWithIndexes(UnityEngine::ProBuilder::SharedVertex shared, ::ArrayW<int32_t> all, System::Collections::Generic::IList_1<UnityEngine::Vector3> norm) ;

/// @brief Method CreateMeshWithTransform addr 0x2a1f234 size 0x10fc virtual false final false
static UnityEngine::ProBuilder::ProBuilderMesh CreateMeshWithTransform(UnityEngine::Transform t, bool preserveFaces) ;

/// @brief Method ResetPbObjectWithMeshFilter addr 0x2a20628 size 0x11d8 virtual false final false
static bool ResetPbObjectWithMeshFilter(UnityEngine::ProBuilder::ProBuilderMesh pb, bool preserveFaces) ;

/// @brief Method FilterUnusedSubmeshIndexes addr 0x2a21800 size 0x558 virtual false final false
static void FilterUnusedSubmeshIndexes(UnityEngine::ProBuilder::ProBuilderMesh mesh) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder::MeshOperations
NEED_NO_BOX(UnityEngine::ProBuilder::MeshOperations::InternalMeshUtility);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::MeshOperations::InternalMeshUtility, "UnityEngine.ProBuilder.MeshOperations", "InternalMeshUtility");
NEED_NO_BOX(UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__InternalMeshUtility____c);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__InternalMeshUtility____c, "UnityEngine.ProBuilder.MeshOperations", "InternalMeshUtility/<>c");
