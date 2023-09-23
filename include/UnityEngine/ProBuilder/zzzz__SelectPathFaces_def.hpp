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
class List_1;
}
namespace UnityEngine::ProBuilder {
class WingedEdge;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace UnityEngine::ProBuilder {
class Face;
}
// Forward declare root types
namespace UnityEngine::ProBuilder {
class SelectPathFaces;
}
// Type: UnityEngine.ProBuilder::SelectPathFaces
namespace UnityEngine::ProBuilder {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12135))
// CS Name: UnityEngine.ProBuilder.SelectPathFaces
class CORDL_TYPE SelectPathFaces : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~SelectPathFaces() = default;

// Ctor Parameters [CppParam { name: "", ty: "SelectPathFaces", modifiers: " const&", def_value: None }]
constexpr SelectPathFaces(SelectPathFaces const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SelectPathFaces", modifiers: "&&", def_value: None }]
constexpr SelectPathFaces(SelectPathFaces&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SelectPathFaces(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr SelectPathFaces& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SelectPathFaces& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SelectPathFaces& operator=(SelectPathFaces&& o) noexcept = default;
  constexpr SelectPathFaces& operator=(SelectPathFaces const& o) noexcept = default;
                


// Fields

static ::ArrayW<int32_t> __declspec(property(get=__get_s_cachedPredecessors, put=__set_s_cachedPredecessors))  s_cachedPredecessors;

static void __set_s_cachedPredecessors(::ArrayW<int32_t> value) ;

static ::ArrayW<int32_t> __get_s_cachedPredecessors() ;

static int32_t __declspec(property(get=__get_s_cachedStart, put=__set_s_cachedStart))  s_cachedStart;

static void __set_s_cachedStart(int32_t value) ;

static int32_t __get_s_cachedStart() ;

static UnityEngine::ProBuilder::ProBuilderMesh __declspec(property(get=__get_s_cachedMesh, put=__set_s_cachedMesh))  s_cachedMesh;

static void __set_s_cachedMesh(UnityEngine::ProBuilder::ProBuilderMesh value) ;

static UnityEngine::ProBuilder::ProBuilderMesh __get_s_cachedMesh() ;

static int32_t __declspec(property(get=__get_s_cachedFacesCount, put=__set_s_cachedFacesCount))  s_cachedFacesCount;

static void __set_s_cachedFacesCount(int32_t value) ;

static int32_t __get_s_cachedFacesCount() ;

static System::Collections::Generic::List_1<UnityEngine::ProBuilder::WingedEdge> __declspec(property(get=__get_s_cachedWings, put=__set_s_cachedWings))  s_cachedWings;

static void __set_s_cachedWings(System::Collections::Generic::List_1<UnityEngine::ProBuilder::WingedEdge> value) ;

static System::Collections::Generic::List_1<UnityEngine::ProBuilder::WingedEdge> __get_s_cachedWings() ;

static System::Collections::Generic::Dictionary_2<UnityEngine::ProBuilder::Face,int32_t> __declspec(property(get=__get_s_cachedFacesIndex, put=__set_s_cachedFacesIndex))  s_cachedFacesIndex;

static void __set_s_cachedFacesIndex(System::Collections::Generic::Dictionary_2<UnityEngine::ProBuilder::Face,int32_t> value) ;

static System::Collections::Generic::Dictionary_2<UnityEngine::ProBuilder::Face,int32_t> __get_s_cachedFacesIndex() ;


// Methods

/// @brief Method GetPath addr 0x29d6b2c size 0x2b0 virtual false final false
static System::Collections::Generic::List_1<int32_t> GetPath(UnityEngine::ProBuilder::ProBuilderMesh mesh, int32_t start, int32_t end) ;

/// @brief Method Dijkstra addr 0x29d6ef8 size 0x6cc virtual false final false
static ::ArrayW<int32_t> Dijkstra(UnityEngine::ProBuilder::ProBuilderMesh mesh, int32_t start) ;

/// @brief Method GetWeight addr 0x29d75c4 size 0x494 virtual false final false
static float_t GetWeight(int32_t face1, int32_t face2, UnityEngine::ProBuilder::ProBuilderMesh mesh) ;

/// @brief Method GetMinimalPath addr 0x29d6ddc size 0x11c virtual false final false
static System::Collections::Generic::List_1<int32_t> GetMinimalPath(::ArrayW<int32_t> predecessors, int32_t start, int32_t end) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder
NEED_NO_BOX(UnityEngine::ProBuilder::SelectPathFaces);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::SelectPathFaces, "UnityEngine.ProBuilder", "SelectPathFaces");
