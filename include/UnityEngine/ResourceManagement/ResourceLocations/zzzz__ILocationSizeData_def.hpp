#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cstdint>
namespace {
namespace UnityEngine::ResourceManagement {
class ResourceManager;
}
namespace UnityEngine::ResourceManagement::ResourceLocations {
class IResourceLocation;
}
// Forward declare root types
namespace UnityEngine::ResourceManagement::ResourceLocations {
class ILocationSizeData;
}
// Type: UnityEngine.ResourceManagement.ResourceLocations::ILocationSizeData
namespace UnityEngine::ResourceManagement::ResourceLocations {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14301))
// CS Name: UnityEngine.ResourceManagement.ResourceLocations.ILocationSizeData
class CORDL_TYPE ILocationSizeData : public ::cordl_internals::InterfaceW {
public:
// Declarations
~ILocationSizeData() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ILocationSizeData(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method ComputeSize addr 0x0 size 0xffffffffffffffff virtual true final false
 int64_t ComputeSize(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation location, ::UnityEngine::ResourceManagement::ResourceManager resourceManager) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ResourceManagement::ResourceLocations
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::ResourceManagement::ResourceLocations::ILocationSizeData);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourceManagement::ResourceLocations::ILocationSizeData, "UnityEngine.ResourceManagement.ResourceLocations", "ILocationSizeData");
