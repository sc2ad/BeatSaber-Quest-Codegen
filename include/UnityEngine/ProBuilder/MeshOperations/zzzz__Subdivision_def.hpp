#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace UnityEngine::ProBuilder {
class Face;
}
namespace UnityEngine::ProBuilder {
class ProBuilderMesh;
}
namespace UnityEngine::ProBuilder {
class ActionResult;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
// Forward declare root types
namespace UnityEngine::ProBuilder::MeshOperations {
class Subdivision;
}
// Type: UnityEngine.ProBuilder.MeshOperations::Subdivision
namespace UnityEngine::ProBuilder::MeshOperations {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12222))
// CS Name: UnityEngine.ProBuilder.MeshOperations.Subdivision
class CORDL_TYPE Subdivision : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~Subdivision() = default;

// Ctor Parameters [CppParam { name: "", ty: "Subdivision", modifiers: " const&", def_value: None }]
constexpr Subdivision(Subdivision const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Subdivision", modifiers: "&&", def_value: None }]
constexpr Subdivision(Subdivision&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Subdivision(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Subdivision& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Subdivision& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Subdivision& operator=(Subdivision&& o) noexcept = default;
  constexpr Subdivision& operator=(Subdivision const& o) noexcept = default;
                


// Methods

/// @brief Method Subdivide addr 0x2a287b8 size 0xb4 virtual false final false
static UnityEngine::ProBuilder::ActionResult Subdivide(UnityEngine::ProBuilder::ProBuilderMesh pb) ;

/// @brief Method Subdivide addr 0x2a2886c size 0x8 virtual false final false
static ::ArrayW<UnityEngine::ProBuilder::Face> Subdivide(UnityEngine::ProBuilder::ProBuilderMesh pb, System::Collections::Generic::IList_1<UnityEngine::ProBuilder::Face> faces) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder::MeshOperations
NEED_NO_BOX(UnityEngine::ProBuilder::MeshOperations::Subdivision);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::MeshOperations::Subdivision, "UnityEngine.ProBuilder.MeshOperations", "Subdivision");
