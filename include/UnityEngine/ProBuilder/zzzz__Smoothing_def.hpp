#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
namespace UnityEngine::ProBuilder {
class Face;
}
namespace UnityEngine::ProBuilder {
class ProBuilderMesh;
}
namespace UnityEngine::ProBuilder {
struct EdgeLookup;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine::ProBuilder {
class WingedEdge;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
// Forward declare root types
namespace UnityEngine::ProBuilder {
class Smoothing;
}
namespace UnityEngine::ProBuilder {
class UnityEngine__ProBuilder__Smoothing____c;
}
// Type: ::<>c
namespace UnityEngine::ProBuilder {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12145))
// CS Name: UnityEngine.ProBuilder.Smoothing::<>c
class CORDL_TYPE UnityEngine__ProBuilder__Smoothing____c : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~UnityEngine__ProBuilder__Smoothing____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__ProBuilder__Smoothing____c", modifiers: " const&", def_value: None }]
constexpr UnityEngine__ProBuilder__Smoothing____c(UnityEngine__ProBuilder__Smoothing____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__ProBuilder__Smoothing____c", modifiers: "&&", def_value: None }]
constexpr UnityEngine__ProBuilder__Smoothing____c(UnityEngine__ProBuilder__Smoothing____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__ProBuilder__Smoothing____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnityEngine__ProBuilder__Smoothing____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__ProBuilder__Smoothing____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__ProBuilder__Smoothing____c& operator=(UnityEngine__ProBuilder__Smoothing____c&& o) noexcept = default;
  constexpr UnityEngine__ProBuilder__Smoothing____c& operator=(UnityEngine__ProBuilder__Smoothing____c const& o) noexcept = default;
                


// Fields

static UnityEngine::ProBuilder::UnityEngine__ProBuilder__Smoothing____c __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(UnityEngine::ProBuilder::UnityEngine__ProBuilder__Smoothing____c value) ;

static UnityEngine::ProBuilder::UnityEngine__ProBuilder__Smoothing____c __get___9() ;

static System::Func_2<UnityEngine::ProBuilder::Face,int32_t> __declspec(property(get=__get___9__5_0, put=__set___9__5_0))  __9__5_0;

static void __set___9__5_0(System::Func_2<UnityEngine::ProBuilder::Face,int32_t> value) ;

static System::Func_2<UnityEngine::ProBuilder::Face,int32_t> __get___9__5_0() ;

static System::Func_2<UnityEngine::ProBuilder::Face,int32_t> __declspec(property(get=__get___9__9_0, put=__set___9__9_0))  __9__9_0;

static void __set___9__9_0(System::Func_2<UnityEngine::ProBuilder::Face,int32_t> value) ;

static System::Func_2<UnityEngine::ProBuilder::Face,int32_t> __get___9__9_0() ;


// Methods

// Ctor Parameters []
explicit UnityEngine__ProBuilder__Smoothing____c() ;

/// @brief Method .ctor addr 0x29e4dd8 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <GetUnusedSmoothingGroup>b__5_0 addr 0x29e4de0 size 0x18 virtual false final false
 int32_t _GetUnusedSmoothingGroup_b__5_0(UnityEngine::ProBuilder::Face x) ;

/// @brief Method <ApplySmoothingGroups>b__9_0 addr 0x29e4df8 size 0x18 virtual false final false
 int32_t _ApplySmoothingGroups_b__9_0(UnityEngine::ProBuilder::Face x) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder
// Type: UnityEngine.ProBuilder::Smoothing
namespace UnityEngine::ProBuilder {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12146))
// CS Name: UnityEngine.ProBuilder.Smoothing
class CORDL_TYPE Smoothing : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using __c = UnityEngine::ProBuilder::UnityEngine__ProBuilder__Smoothing____c;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~Smoothing() = default;

// Ctor Parameters [CppParam { name: "", ty: "Smoothing", modifiers: " const&", def_value: None }]
constexpr Smoothing(Smoothing const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Smoothing", modifiers: "&&", def_value: None }]
constexpr Smoothing(Smoothing&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Smoothing(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Smoothing& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Smoothing& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Smoothing& operator=(Smoothing&& o) noexcept = default;
  constexpr Smoothing& operator=(Smoothing const& o) noexcept = default;
                


// Fields

/// @brief Field smoothingGroupNone offset 0
static constexpr int32_t  smoothingGroupNone{0};

/// @brief Field smoothRangeMin offset 0
static constexpr int32_t  smoothRangeMin{1};

/// @brief Field smoothRangeMax offset 0
static constexpr int32_t  smoothRangeMax{24};

/// @brief Field hardRangeMin offset 0
static constexpr int32_t  hardRangeMin{25};

/// @brief Field hardRangeMax offset 0
static constexpr int32_t  hardRangeMax{42};


// Methods

/// @brief Method GetUnusedSmoothingGroup addr 0x29e3bb8 size 0x1dc virtual false final false
static int32_t GetUnusedSmoothingGroup(UnityEngine::ProBuilder::ProBuilderMesh mesh) ;

/// @brief Method GetNextUnusedSmoothingGroup addr 0x29e3d94 size 0xa8 virtual false final false
static int32_t GetNextUnusedSmoothingGroup(int32_t start, System::Collections::Generic::HashSet_1<int32_t> used) ;

/// @brief Method IsSmooth addr 0x29e3e3c size 0x20 virtual false final false
static bool IsSmooth(int32_t index) ;

/// @brief Method ApplySmoothingGroups addr 0x29e3e5c size 0x8 virtual false final false
static void ApplySmoothingGroups(UnityEngine::ProBuilder::ProBuilderMesh mesh, System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Face> faces, float_t angleThreshold) ;

/// @brief Method ApplySmoothingGroups addr 0x29e3e64 size 0x81c virtual false final false
static void ApplySmoothingGroups(UnityEngine::ProBuilder::ProBuilderMesh mesh, System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Face> faces, float_t angleThreshold, ::ArrayW<UnityEngine::Vector3> normals) ;

/// @brief Method FindSoftEdgesRecursive addr 0x29e4680 size 0x2d0 virtual false final false
static bool FindSoftEdgesRecursive(::ArrayW<UnityEngine::Vector3> normals, UnityEngine::ProBuilder::WingedEdge wing, float_t angleThreshold, System::Collections::Generic::HashSet_1<UnityEngine::ProBuilder::Face> processed) ;

/// @brief Method IsSoftEdge addr 0x29e4950 size 0x424 virtual false final false
static bool IsSoftEdge(::ArrayW<UnityEngine::Vector3> normals, UnityEngine::ProBuilder::EdgeLookup left, UnityEngine::ProBuilder::EdgeLookup right, float_t threshold) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder
NEED_NO_BOX(UnityEngine::ProBuilder::Smoothing);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::Smoothing, "UnityEngine.ProBuilder", "Smoothing");
NEED_NO_BOX(UnityEngine::ProBuilder::UnityEngine__ProBuilder__Smoothing____c);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::UnityEngine__ProBuilder__Smoothing____c, "UnityEngine.ProBuilder", "Smoothing/<>c");
