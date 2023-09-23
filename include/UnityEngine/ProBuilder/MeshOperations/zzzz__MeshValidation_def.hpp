#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstddef>
#include <cstdint>
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::ProBuilder {
struct Triangle;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine::ProBuilder {
struct Edge;
}
namespace UnityEngine::ProBuilder {
class ProBuilderMesh;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace UnityEngine {
struct Vector4;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine::ProBuilder {
class Face;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
// Forward declare root types
namespace UnityEngine::ProBuilder::MeshOperations {
struct UnityEngine__ProBuilder__MeshOperations__MeshValidation__AttributeValidationStrategy;
}
namespace UnityEngine::ProBuilder::MeshOperations {
class MeshValidation;
}
namespace UnityEngine::ProBuilder::MeshOperations {
class UnityEngine__ProBuilder__MeshOperations__MeshValidation____c;
}
namespace UnityEngine::ProBuilder::MeshOperations {
class UnityEngine__ProBuilder__MeshOperations__MeshValidation____c__DisplayClass10_0;
}
namespace UnityEngine::ProBuilder::MeshOperations {
class UnityEngine__ProBuilder__MeshOperations__MeshValidation____c__DisplayClass5_0;
}
// Type: ::AttributeValidationStrategy
namespace UnityEngine::ProBuilder::MeshOperations {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12216))
// CS Name: UnityEngine.ProBuilder.MeshOperations.MeshValidation::AttributeValidationStrategy
struct CORDL_TYPE UnityEngine__ProBuilder__MeshOperations__MeshValidation__AttributeValidationStrategy : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr UnityEngine__ProBuilder__MeshOperations__MeshValidation__AttributeValidationStrategy(int32_t value__) noexcept;


                    constexpr UnityEngine__ProBuilder__MeshOperations__MeshValidation__AttributeValidationStrategy(UnityEngine__ProBuilder__MeshOperations__MeshValidation__AttributeValidationStrategy const&) = default;
                    constexpr UnityEngine__ProBuilder__MeshOperations__MeshValidation__AttributeValidationStrategy(UnityEngine__ProBuilder__MeshOperations__MeshValidation__AttributeValidationStrategy&&) = default;
                    constexpr UnityEngine__ProBuilder__MeshOperations__MeshValidation__AttributeValidationStrategy& operator=(UnityEngine__ProBuilder__MeshOperations__MeshValidation__AttributeValidationStrategy const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__ProBuilder__MeshOperations__MeshValidation__AttributeValidationStrategy& operator=(UnityEngine__ProBuilder__MeshOperations__MeshValidation__AttributeValidationStrategy&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__ProBuilder__MeshOperations__MeshValidation__AttributeValidationStrategy(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __UnityEngine__ProBuilder__MeshOperations__MeshValidation__AttributeValidationStrategy_Unwrapped : int32_t {
__Resize = 0,
__Nullify = 1,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __UnityEngine__ProBuilder__MeshOperations__MeshValidation__AttributeValidationStrategy_Unwrapped () const noexcept {
return std::bit_cast<__UnityEngine__ProBuilder__MeshOperations__MeshValidation__AttributeValidationStrategy_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Resize offset 0
static UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__MeshValidation__AttributeValidationStrategy const Resize;

/// @brief Field Nullify offset 0
static UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__MeshValidation__AttributeValidationStrategy const Nullify;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder::MeshOperations
// Type: ::<>c
namespace UnityEngine::ProBuilder::MeshOperations {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12217))
// CS Name: UnityEngine.ProBuilder.MeshOperations.MeshValidation::<>c
class CORDL_TYPE UnityEngine__ProBuilder__MeshOperations__MeshValidation____c : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~UnityEngine__ProBuilder__MeshOperations__MeshValidation____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__ProBuilder__MeshOperations__MeshValidation____c", modifiers: " const&", def_value: None }]
constexpr UnityEngine__ProBuilder__MeshOperations__MeshValidation____c(UnityEngine__ProBuilder__MeshOperations__MeshValidation____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__ProBuilder__MeshOperations__MeshValidation____c", modifiers: "&&", def_value: None }]
constexpr UnityEngine__ProBuilder__MeshOperations__MeshValidation____c(UnityEngine__ProBuilder__MeshOperations__MeshValidation____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__ProBuilder__MeshOperations__MeshValidation____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnityEngine__ProBuilder__MeshOperations__MeshValidation____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__ProBuilder__MeshOperations__MeshValidation____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__ProBuilder__MeshOperations__MeshValidation____c& operator=(UnityEngine__ProBuilder__MeshOperations__MeshValidation____c&& o) noexcept = default;
  constexpr UnityEngine__ProBuilder__MeshOperations__MeshValidation____c& operator=(UnityEngine__ProBuilder__MeshOperations__MeshValidation____c const& o) noexcept = default;
                


// Fields

static UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__MeshValidation____c __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__MeshValidation____c value) ;

static UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__MeshValidation____c __get___9() ;

static System::Func_2<UnityEngine::ProBuilder::Triangle,System::Collections::Generic::IEnumerable_1<int32_t>> __declspec(property(get=__get___9__4_0, put=__set___9__4_0))  __9__4_0;

static void __set___9__4_0(System::Func_2<UnityEngine::ProBuilder::Triangle,System::Collections::Generic::IEnumerable_1<int32_t>> value) ;

static System::Func_2<UnityEngine::ProBuilder::Triangle,System::Collections::Generic::IEnumerable_1<int32_t>> __get___9__4_0() ;

static System::Func_2<UnityEngine::ProBuilder::Triangle,System::Collections::Generic::IEnumerable_1<int32_t>> __declspec(property(get=__get___9__4_1, put=__set___9__4_1))  __9__4_1;

static void __set___9__4_1(System::Func_2<UnityEngine::ProBuilder::Triangle,System::Collections::Generic::IEnumerable_1<int32_t>> value) ;

static System::Func_2<UnityEngine::ProBuilder::Triangle,System::Collections::Generic::IEnumerable_1<int32_t>> __get___9__4_1() ;

static System::Func_2<UnityEngine::ProBuilder::Face,System::Collections::Generic::IEnumerable_1<int32_t>> __declspec(property(get=__get___9__7_0, put=__set___9__7_0))  __9__7_0;

static void __set___9__7_0(System::Func_2<UnityEngine::ProBuilder::Face,System::Collections::Generic::IEnumerable_1<int32_t>> value) ;

static System::Func_2<UnityEngine::ProBuilder::Face,System::Collections::Generic::IEnumerable_1<int32_t>> __get___9__7_0() ;


// Methods

// Ctor Parameters []
explicit UnityEngine__ProBuilder__MeshOperations__MeshValidation____c() ;

/// @brief Method .ctor addr 0x2a27ddc size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <EnsureFacesAreComposedOfContiguousTriangles>b__4_0 addr 0x2a27de4 size 0x28 virtual false final false
 System::Collections::Generic::IEnumerable_1<int32_t> _EnsureFacesAreComposedOfContiguousTriangles_b__4_0(UnityEngine::ProBuilder::Triangle x) ;

/// @brief Method <EnsureFacesAreComposedOfContiguousTriangles>b__4_1 addr 0x2a27e0c size 0x28 virtual false final false
 System::Collections::Generic::IEnumerable_1<int32_t> _EnsureFacesAreComposedOfContiguousTriangles_b__4_1(UnityEngine::ProBuilder::Triangle x) ;

/// @brief Method <RemoveUnusedVertices>b__7_0 addr 0x2a27e34 size 0x18 virtual false final false
 System::Collections::Generic::IEnumerable_1<int32_t> _RemoveUnusedVertices_b__7_0(UnityEngine::ProBuilder::Face x) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder::MeshOperations
// Type: ::<>c__DisplayClass5_0
namespace UnityEngine::ProBuilder::MeshOperations {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12218))
// CS Name: UnityEngine.ProBuilder.MeshOperations.MeshValidation::<>c__DisplayClass5_0
class CORDL_TYPE UnityEngine__ProBuilder__MeshOperations__MeshValidation____c__DisplayClass5_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~UnityEngine__ProBuilder__MeshOperations__MeshValidation____c__DisplayClass5_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__ProBuilder__MeshOperations__MeshValidation____c__DisplayClass5_0", modifiers: " const&", def_value: None }]
constexpr UnityEngine__ProBuilder__MeshOperations__MeshValidation____c__DisplayClass5_0(UnityEngine__ProBuilder__MeshOperations__MeshValidation____c__DisplayClass5_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__ProBuilder__MeshOperations__MeshValidation____c__DisplayClass5_0", modifiers: "&&", def_value: None }]
constexpr UnityEngine__ProBuilder__MeshOperations__MeshValidation____c__DisplayClass5_0(UnityEngine__ProBuilder__MeshOperations__MeshValidation____c__DisplayClass5_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__ProBuilder__MeshOperations__MeshValidation____c__DisplayClass5_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnityEngine__ProBuilder__MeshOperations__MeshValidation____c__DisplayClass5_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__ProBuilder__MeshOperations__MeshValidation____c__DisplayClass5_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__ProBuilder__MeshOperations__MeshValidation____c__DisplayClass5_0& operator=(UnityEngine__ProBuilder__MeshOperations__MeshValidation____c__DisplayClass5_0&& o) noexcept = default;
  constexpr UnityEngine__ProBuilder__MeshOperations__MeshValidation____c__DisplayClass5_0& operator=(UnityEngine__ProBuilder__MeshOperations__MeshValidation____c__DisplayClass5_0 const& o) noexcept = default;
                


// Fields

 UnityEngine::ProBuilder::Triangle __declspec(property(get=__get_triangle, put=__set_triangle))  triangle;

constexpr void __set_triangle(UnityEngine::ProBuilder::Triangle value) ;

constexpr UnityEngine::ProBuilder::Triangle __get_triangle() const;

 System::Func_2<UnityEngine::ProBuilder::Triangle,bool> __declspec(property(get=__get___9__0, put=__set___9__0))  __9__0;

constexpr void __set___9__0(System::Func_2<UnityEngine::ProBuilder::Triangle,bool> value) ;

constexpr System::Func_2<UnityEngine::ProBuilder::Triangle,bool> __get___9__0() const;


// Methods

// Ctor Parameters []
explicit UnityEngine__ProBuilder__MeshOperations__MeshValidation____c__DisplayClass5_0() ;

/// @brief Method .ctor addr 0x2a260d0 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <CollectFaceGroups>b__0 addr 0x2a27e4c size 0x34 virtual false final false
 bool _CollectFaceGroups_b__0(UnityEngine::ProBuilder::Triangle x) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder::MeshOperations
// Type: ::<>c__DisplayClass10_0
namespace UnityEngine::ProBuilder::MeshOperations {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12219))
// CS Name: UnityEngine.ProBuilder.MeshOperations.MeshValidation::<>c__DisplayClass10_0
class CORDL_TYPE UnityEngine__ProBuilder__MeshOperations__MeshValidation____c__DisplayClass10_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~UnityEngine__ProBuilder__MeshOperations__MeshValidation____c__DisplayClass10_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__ProBuilder__MeshOperations__MeshValidation____c__DisplayClass10_0", modifiers: " const&", def_value: None }]
constexpr UnityEngine__ProBuilder__MeshOperations__MeshValidation____c__DisplayClass10_0(UnityEngine__ProBuilder__MeshOperations__MeshValidation____c__DisplayClass10_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__ProBuilder__MeshOperations__MeshValidation____c__DisplayClass10_0", modifiers: "&&", def_value: None }]
constexpr UnityEngine__ProBuilder__MeshOperations__MeshValidation____c__DisplayClass10_0(UnityEngine__ProBuilder__MeshOperations__MeshValidation____c__DisplayClass10_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__ProBuilder__MeshOperations__MeshValidation____c__DisplayClass10_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnityEngine__ProBuilder__MeshOperations__MeshValidation____c__DisplayClass10_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__ProBuilder__MeshOperations__MeshValidation____c__DisplayClass10_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__ProBuilder__MeshOperations__MeshValidation____c__DisplayClass10_0& operator=(UnityEngine__ProBuilder__MeshOperations__MeshValidation____c__DisplayClass10_0&& o) noexcept = default;
  constexpr UnityEngine__ProBuilder__MeshOperations__MeshValidation____c__DisplayClass10_0& operator=(UnityEngine__ProBuilder__MeshOperations__MeshValidation____c__DisplayClass10_0 const& o) noexcept = default;
                


// Fields

 UnityEngine::ProBuilder::ProBuilderMesh __declspec(property(get=__get_mesh, put=__set_mesh))  mesh;

constexpr void __set_mesh(UnityEngine::ProBuilder::ProBuilderMesh value) ;

constexpr UnityEngine::ProBuilder::ProBuilderMesh __get_mesh() const;


// Methods

// Ctor Parameters []
explicit UnityEngine__ProBuilder__MeshOperations__MeshValidation____c__DisplayClass10_0() ;

/// @brief Method .ctor addr 0x2a274bc size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <RebuildSelectionIndexes>b__0 addr 0x2a27e80 size 0x5c virtual false final false
 bool _RebuildSelectionIndexes_b__0(UnityEngine::ProBuilder::Face x) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder::MeshOperations
// Type: UnityEngine.ProBuilder.MeshOperations::MeshValidation
namespace UnityEngine::ProBuilder::MeshOperations {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12220))
// CS Name: UnityEngine.ProBuilder.MeshOperations.MeshValidation
class CORDL_TYPE MeshValidation : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using __c__DisplayClass10_0 = UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__MeshValidation____c__DisplayClass10_0;

using __c__DisplayClass5_0 = UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__MeshValidation____c__DisplayClass5_0;

using __c = UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__MeshValidation____c;

using AttributeValidationStrategy = UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__MeshValidation__AttributeValidationStrategy;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~MeshValidation() = default;

// Ctor Parameters [CppParam { name: "", ty: "MeshValidation", modifiers: " const&", def_value: None }]
constexpr MeshValidation(MeshValidation const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MeshValidation", modifiers: "&&", def_value: None }]
constexpr MeshValidation(MeshValidation&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MeshValidation(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr MeshValidation& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MeshValidation& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MeshValidation& operator=(MeshValidation&& o) noexcept = default;
  constexpr MeshValidation& operator=(MeshValidation const& o) noexcept = default;
                


// Methods

/// @brief Method ContainsDegenerateTriangles addr 0x2a24f18 size 0x18 virtual false final false
static bool ContainsDegenerateTriangles(UnityEngine::ProBuilder::ProBuilderMesh mesh) ;

/// @brief Method ContainsDegenerateTriangles addr 0x2a24f30 size 0x458 virtual false final false
static bool ContainsDegenerateTriangles(UnityEngine::ProBuilder::ProBuilderMesh mesh, System::Collections::Generic::IList_1<UnityEngine::ProBuilder::Face> faces) ;

/// @brief Method ContainsDegenerateTriangles addr 0x2a25388 size 0x154 virtual false final false
static bool ContainsDegenerateTriangles(UnityEngine::ProBuilder::ProBuilderMesh mesh, UnityEngine::ProBuilder::Face face) ;

/// @brief Method ContainsNonContiguousTriangles addr 0x2a254dc size 0x138 virtual false final false
static bool ContainsNonContiguousTriangles(UnityEngine::ProBuilder::ProBuilderMesh mesh, UnityEngine::ProBuilder::Face face) ;

/// @brief Method EnsureFacesAreComposedOfContiguousTriangles addr 0x2a25614 size 0x6f0 virtual false final false
static System::Collections::Generic::List_1<UnityEngine::ProBuilder::Face> EnsureFacesAreComposedOfContiguousTriangles(UnityEngine::ProBuilder::ProBuilderMesh mesh, System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Face> faces) ;

/// @brief Method CollectFaceGroups addr 0x2a25d04 size 0x3cc virtual false final false
static System::Collections::Generic::List_1<System::Collections::Generic::List_1<UnityEngine::ProBuilder::Triangle>> CollectFaceGroups(UnityEngine::ProBuilder::ProBuilderMesh mesh, UnityEngine::ProBuilder::Face face) ;

/// @brief Method RemoveDegenerateTriangles addr 0x2a260d8 size 0x954 virtual false final false
static bool RemoveDegenerateTriangles(UnityEngine::ProBuilder::ProBuilderMesh mesh, System::Collections::Generic::List_1<int32_t> removed) ;

/// @brief Method RemoveUnusedVertices addr 0x2a22da8 size 0x32c virtual false final false
static bool RemoveUnusedVertices(UnityEngine::ProBuilder::ProBuilderMesh mesh, System::Collections::Generic::List_1<int32_t> removed) ;

/// @brief Method RebuildIndexes addr 0x2a26a2c size 0x41c virtual false final false
static System::Collections::Generic::List_1<int32_t> RebuildIndexes(System::Collections::Generic::IEnumerable_1<int32_t> indices, System::Collections::Generic::List_1<int32_t> removed) ;

/// @brief Method RebuildEdges addr 0x2a26e48 size 0x494 virtual false final false
static System::Collections::Generic::List_1<UnityEngine::ProBuilder::Edge> RebuildEdges(System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Edge> edges, System::Collections::Generic::List_1<int32_t> removed) ;

/// @brief Method RebuildSelectionIndexes addr 0x2a272dc size 0x1e0 virtual false final false
static void RebuildSelectionIndexes(UnityEngine::ProBuilder::ProBuilderMesh mesh, ByRef<::ArrayW<UnityEngine::ProBuilder::Face>> faces, ByRef<::ArrayW<UnityEngine::ProBuilder::Edge>> edges, ByRef<::ArrayW<int32_t>> indices, System::Collections::Generic::IEnumerable_1<int32_t> removed) ;

/// @brief Method EnsureMeshIsValid addr 0x2a274c4 size 0x140 virtual false final false
static bool EnsureMeshIsValid(UnityEngine::ProBuilder::ProBuilderMesh mesh, ByRef<int32_t> removedVertices) ;

/// @brief Method EnsureRealNumbers addr 0x2a2781c size 0x1c0 virtual false final false
static void EnsureRealNumbers(System::Collections::Generic::IList_1<UnityEngine::Vector2> attribute) ;

/// @brief Method EnsureRealNumbers addr 0x2a279dc size 0x1cc virtual false final false
static void EnsureRealNumbers(System::Collections::Generic::IList_1<UnityEngine::Vector3> attribute) ;

/// @brief Method EnsureRealNumbers addr 0x2a27ba8 size 0x1d0 virtual false final false
static void EnsureRealNumbers(System::Collections::Generic::IList_1<UnityEngine::Vector4> attribute) ;

/// @brief Method EnsureArraySize addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static void EnsureArraySize(ByRef<::ArrayW<T>> attribute, int32_t expectedVertexCount, UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__MeshValidation__AttributeValidationStrategy strategy, T fill) ;

/// @brief Method EnsureListSize addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static void EnsureListSize(ByRef<System::Collections::Generic::List_1<T>> attribute, int32_t expectedVertexCount, UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__MeshValidation__AttributeValidationStrategy strategy, T fill) ;

/// @brief Method EnsureValidAttributes addr 0x2a27604 size 0x218 virtual false final false
static void EnsureValidAttributes(UnityEngine::ProBuilder::ProBuilderMesh mesh) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder::MeshOperations
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__MeshValidation__AttributeValidationStrategy, "UnityEngine.ProBuilder.MeshOperations", "MeshValidation/AttributeValidationStrategy");
NEED_NO_BOX(UnityEngine::ProBuilder::MeshOperations::MeshValidation);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::MeshOperations::MeshValidation, "UnityEngine.ProBuilder.MeshOperations", "MeshValidation");
NEED_NO_BOX(UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__MeshValidation____c);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__MeshValidation____c, "UnityEngine.ProBuilder.MeshOperations", "MeshValidation/<>c");
NEED_NO_BOX(UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__MeshValidation____c__DisplayClass10_0);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__MeshValidation____c__DisplayClass10_0, "UnityEngine.ProBuilder.MeshOperations", "MeshValidation/<>c__DisplayClass10_0");
NEED_NO_BOX(UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__MeshValidation____c__DisplayClass5_0);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__MeshValidation____c__DisplayClass5_0, "UnityEngine.ProBuilder.MeshOperations", "MeshValidation/<>c__DisplayClass5_0");
