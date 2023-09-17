#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
namespace {
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace UnityEngine::ProBuilder {
class WingedEdge;
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
namespace UnityEngine::ProBuilder {
class ProBuilderMesh;
}
// Forward declare root types
namespace UnityEngine::ProBuilder::MeshOperations {
class QuadUtility;
}
// Type: UnityEngine.ProBuilder.MeshOperations::QuadUtility
namespace UnityEngine::ProBuilder::MeshOperations {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12221))
// CS Name: UnityEngine.ProBuilder.MeshOperations.QuadUtility
class CORDL_TYPE QuadUtility : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~QuadUtility() = default;

// Ctor Parameters [CppParam { name: "", ty: "QuadUtility", modifiers: " const&", def_value: None }]
constexpr QuadUtility(QuadUtility const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "QuadUtility", modifiers: "&&", def_value: None }]
constexpr QuadUtility(QuadUtility&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit QuadUtility(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr QuadUtility& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr QuadUtility& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr QuadUtility& operator=(QuadUtility&& o) noexcept = default;
  constexpr QuadUtility& operator=(QuadUtility const& o) noexcept = default;
                


// Methods

/// @brief Method ToQuads addr 0x2a241dc size 0x854 virtual false final false
static ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face> ToQuads(::UnityEngine::ProBuilder::ProBuilderMesh mesh, ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Face> faces, bool smoothing) ;

/// @brief Method GetBestQuadConnection addr 0x2a28548 size 0x270 virtual false final false
static ::UnityEngine::ProBuilder::Face GetBestQuadConnection(::UnityEngine::ProBuilder::WingedEdge wing, ::System::Collections::Generic::Dictionary_2<::UnityEngine::ProBuilder::EdgeLookup,float_t> connections) ;

/// @brief Method GetQuadScore addr 0x2a27edc size 0x66c virtual false final false
static float_t GetQuadScore(::UnityEngine::ProBuilder::ProBuilderMesh mesh, ::UnityEngine::ProBuilder::WingedEdge left, ::UnityEngine::ProBuilder::WingedEdge right, float_t normalThreshold) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder::MeshOperations
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::ProBuilder::MeshOperations::QuadUtility);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::MeshOperations::QuadUtility, "UnityEngine.ProBuilder.MeshOperations", "QuadUtility");
