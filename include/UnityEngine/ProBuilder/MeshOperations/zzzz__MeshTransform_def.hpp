#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace {
namespace UnityEngine::ProBuilder {
class ProBuilderMesh;
}
namespace UnityEngine::ProBuilder {
struct PivotLocation;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::ProBuilder::MeshOperations {
class MeshTransform;
}
// Type: UnityEngine.ProBuilder.MeshOperations::MeshTransform
namespace UnityEngine::ProBuilder::MeshOperations {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12215))
// CS Name: UnityEngine.ProBuilder.MeshOperations.MeshTransform
class CORDL_TYPE MeshTransform : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~MeshTransform() = default;

// Ctor Parameters [CppParam { name: "", ty: "MeshTransform", modifiers: " const&", def_value: None }]
constexpr MeshTransform(MeshTransform const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MeshTransform", modifiers: "&&", def_value: None }]
constexpr MeshTransform(MeshTransform&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MeshTransform(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr MeshTransform& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MeshTransform& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MeshTransform& operator=(MeshTransform&& o) noexcept = default;
  constexpr MeshTransform& operator=(MeshTransform const& o) noexcept = default;
                


// Methods

/// @brief Method SetPivot addr 0x2a24b50 size 0xc0 virtual false final false
static void SetPivot(::UnityEngine::ProBuilder::ProBuilderMesh mesh, ::UnityEngine::ProBuilder::PivotLocation pivotLocation) ;

/// @brief Method CenterPivot addr 0x2a20330 size 0x2f8 virtual false final false
static void CenterPivot(::UnityEngine::ProBuilder::ProBuilderMesh mesh, ::ArrayW<int32_t> indexes) ;

/// @brief Method SetPivot addr 0x2a24c10 size 0x1a4 virtual false final false
static void SetPivot(::UnityEngine::ProBuilder::ProBuilderMesh mesh, ::UnityEngine::Vector3 worldPosition) ;

/// @brief Method FreezeScaleTransform addr 0x2a24db4 size 0x164 virtual false final false
static void FreezeScaleTransform(::UnityEngine::ProBuilder::ProBuilderMesh mesh) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder::MeshOperations
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::ProBuilder::MeshOperations::MeshTransform);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::MeshOperations::MeshTransform, "UnityEngine.ProBuilder.MeshOperations", "MeshTransform");
