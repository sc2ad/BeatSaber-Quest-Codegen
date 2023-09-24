#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace UnityEngine::ProBuilder {
template<typename T1,typename T2>
struct SimpleTuple_2;
}
namespace UnityEngine::ProBuilder {
class ProBuilderMesh;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace UnityEngine::ProBuilder::MeshOperations {
class UnityEngine__ProBuilder__MeshOperations__MergeElements____c__DisplayClass0_0;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::ProBuilder {
class Face;
}
namespace UnityEngine::ProBuilder::MeshOperations {
class UnityEngine__ProBuilder__MeshOperations__MergeElements____c;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
// Forward declare root types
namespace UnityEngine::ProBuilder::MeshOperations {
class MergeElements;
}
namespace UnityEngine::ProBuilder::MeshOperations {
class UnityEngine__ProBuilder__MeshOperations__MergeElements____c;
}
namespace UnityEngine::ProBuilder::MeshOperations {
class UnityEngine__ProBuilder__MeshOperations__MergeElements____c__DisplayClass0_0;
}
// Type: ::<>c__DisplayClass0_0
namespace UnityEngine::ProBuilder::MeshOperations {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12209))
// CS Name: UnityEngine.ProBuilder.MeshOperations.MergeElements::<>c__DisplayClass0_0
class CORDL_TYPE UnityEngine__ProBuilder__MeshOperations__MergeElements____c__DisplayClass0_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~UnityEngine__ProBuilder__MeshOperations__MergeElements____c__DisplayClass0_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__ProBuilder__MeshOperations__MergeElements____c__DisplayClass0_0", modifiers: " const&", def_value: None }]
constexpr UnityEngine__ProBuilder__MeshOperations__MergeElements____c__DisplayClass0_0(UnityEngine__ProBuilder__MeshOperations__MergeElements____c__DisplayClass0_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__ProBuilder__MeshOperations__MergeElements____c__DisplayClass0_0", modifiers: "&&", def_value: None }]
constexpr UnityEngine__ProBuilder__MeshOperations__MergeElements____c__DisplayClass0_0(UnityEngine__ProBuilder__MeshOperations__MergeElements____c__DisplayClass0_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__ProBuilder__MeshOperations__MergeElements____c__DisplayClass0_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnityEngine__ProBuilder__MeshOperations__MergeElements____c__DisplayClass0_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__ProBuilder__MeshOperations__MergeElements____c__DisplayClass0_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__ProBuilder__MeshOperations__MergeElements____c__DisplayClass0_0& operator=(UnityEngine__ProBuilder__MeshOperations__MergeElements____c__DisplayClass0_0&& o) noexcept = default;
  constexpr UnityEngine__ProBuilder__MeshOperations__MergeElements____c__DisplayClass0_0& operator=(UnityEngine__ProBuilder__MeshOperations__MergeElements____c__DisplayClass0_0 const& o) noexcept = default;
                


// Fields

 System::Collections::Generic::HashSet_1<UnityEngine::ProBuilder::Face> __declspec(property(get=__get_remove, put=__set_remove))  remove;

constexpr void __set_remove(System::Collections::Generic::HashSet_1<UnityEngine::ProBuilder::Face> value) ;

constexpr System::Collections::Generic::HashSet_1<UnityEngine::ProBuilder::Face> __get_remove() const;


// Methods

static UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__MergeElements____c__DisplayClass0_0 New_ctor() ;

/// @brief Method .ctor addr 0x2a22510 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <MergePairs>b__0 addr 0x2a230d4 size 0x64 virtual false final false
 bool _MergePairs_b__0(UnityEngine::ProBuilder::Face x) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder::MeshOperations
// Type: ::<>c
namespace UnityEngine::ProBuilder::MeshOperations {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12210))
// CS Name: UnityEngine.ProBuilder.MeshOperations.MergeElements::<>c
class CORDL_TYPE UnityEngine__ProBuilder__MeshOperations__MergeElements____c : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~UnityEngine__ProBuilder__MeshOperations__MergeElements____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__ProBuilder__MeshOperations__MergeElements____c", modifiers: " const&", def_value: None }]
constexpr UnityEngine__ProBuilder__MeshOperations__MergeElements____c(UnityEngine__ProBuilder__MeshOperations__MergeElements____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__ProBuilder__MeshOperations__MergeElements____c", modifiers: "&&", def_value: None }]
constexpr UnityEngine__ProBuilder__MeshOperations__MergeElements____c(UnityEngine__ProBuilder__MeshOperations__MergeElements____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__ProBuilder__MeshOperations__MergeElements____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnityEngine__ProBuilder__MeshOperations__MergeElements____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__ProBuilder__MeshOperations__MergeElements____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__ProBuilder__MeshOperations__MergeElements____c& operator=(UnityEngine__ProBuilder__MeshOperations__MergeElements____c&& o) noexcept = default;
  constexpr UnityEngine__ProBuilder__MeshOperations__MergeElements____c& operator=(UnityEngine__ProBuilder__MeshOperations__MergeElements____c const& o) noexcept = default;
                


// Fields

static UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__MergeElements____c __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__MergeElements____c value) ;

static UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__MergeElements____c __get___9() ;

static System::Func_2<UnityEngine::ProBuilder::Face,System::Collections::Generic::IEnumerable_1<int32_t>> __declspec(property(get=__get___9__1_0, put=__set___9__1_0))  __9__1_0;

static void __set___9__1_0(System::Func_2<UnityEngine::ProBuilder::Face,System::Collections::Generic::IEnumerable_1<int32_t>> value) ;

static System::Func_2<UnityEngine::ProBuilder::Face,System::Collections::Generic::IEnumerable_1<int32_t>> __get___9__1_0() ;


// Methods

static UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__MergeElements____c New_ctor() ;

/// @brief Method .ctor addr 0x2a2319c size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <Merge>b__1_0 addr 0x2a231a4 size 0x18 virtual false final false
 System::Collections::Generic::IEnumerable_1<int32_t> _Merge_b__1_0(UnityEngine::ProBuilder::Face x) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder::MeshOperations
// Type: UnityEngine.ProBuilder.MeshOperations::MergeElements
namespace UnityEngine::ProBuilder::MeshOperations {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12211))
// CS Name: UnityEngine.ProBuilder.MeshOperations.MergeElements
class CORDL_TYPE MergeElements : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using __c = UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__MergeElements____c;

using __c__DisplayClass0_0 = UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__MergeElements____c__DisplayClass0_0;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~MergeElements() = default;

// Ctor Parameters [CppParam { name: "", ty: "MergeElements", modifiers: " const&", def_value: None }]
constexpr MergeElements(MergeElements const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MergeElements", modifiers: "&&", def_value: None }]
constexpr MergeElements(MergeElements&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MergeElements(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr MergeElements& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MergeElements& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MergeElements& operator=(MergeElements&& o) noexcept = default;
  constexpr MergeElements& operator=(MergeElements const& o) noexcept = default;
                


// Methods

/// @brief Method MergePairs addr 0x2a21e60 size 0x6b0 virtual false final false
static System::Collections::Generic::List_1<UnityEngine::ProBuilder::Face> MergePairs(UnityEngine::ProBuilder::ProBuilderMesh target, System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::SimpleTuple_2<UnityEngine::ProBuilder::Face,UnityEngine::ProBuilder::Face>> pairs, bool collapseCoincidentVertices) ;

/// @brief Method Merge addr 0x2a229d8 size 0x3d0 virtual false final false
static UnityEngine::ProBuilder::Face Merge(UnityEngine::ProBuilder::ProBuilderMesh target, System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Face> faces) ;

/// @brief Method CollapseCoincidentVertices addr 0x2a22518 size 0x4c0 virtual false final false
static void CollapseCoincidentVertices(UnityEngine::ProBuilder::ProBuilderMesh mesh, System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Face> faces) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder::MeshOperations
NEED_NO_BOX(UnityEngine::ProBuilder::MeshOperations::MergeElements);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::MeshOperations::MergeElements, "UnityEngine.ProBuilder.MeshOperations", "MergeElements");
NEED_NO_BOX(UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__MergeElements____c);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__MergeElements____c, "UnityEngine.ProBuilder.MeshOperations", "MergeElements/<>c");
NEED_NO_BOX(UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__MergeElements____c__DisplayClass0_0);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__MergeElements____c__DisplayClass0_0, "UnityEngine.ProBuilder.MeshOperations", "MergeElements/<>c__DisplayClass0_0");
