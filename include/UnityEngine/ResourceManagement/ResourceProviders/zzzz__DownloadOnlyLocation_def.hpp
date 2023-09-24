#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/ResourceManagement/ResourceLocations/zzzz__LocationWrapper_def.hpp"
namespace UnityEngine::ResourceManagement::ResourceLocations {
class IResourceLocation;
}
// Forward declare root types
namespace UnityEngine::ResourceManagement::ResourceProviders {
class DownloadOnlyLocation;
}
// Type: UnityEngine.ResourceManagement.ResourceProviders::DownloadOnlyLocation
namespace UnityEngine::ResourceManagement::ResourceProviders {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14304))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14269))
// CS Name: UnityEngine.ResourceManagement.ResourceProviders.DownloadOnlyLocation
class CORDL_TYPE DownloadOnlyLocation : public UnityEngine::ResourceManagement::ResourceLocations::LocationWrapper {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~DownloadOnlyLocation() = default;

// Ctor Parameters [CppParam { name: "", ty: "DownloadOnlyLocation", modifiers: " const&", def_value: None }]
constexpr DownloadOnlyLocation(DownloadOnlyLocation const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DownloadOnlyLocation", modifiers: "&&", def_value: None }]
constexpr DownloadOnlyLocation(DownloadOnlyLocation&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DownloadOnlyLocation(void* ptr) noexcept : UnityEngine::ResourceManagement::ResourceLocations::LocationWrapper(ptr) {
}


  constexpr DownloadOnlyLocation& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DownloadOnlyLocation& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DownloadOnlyLocation& operator=(DownloadOnlyLocation&& o) noexcept = default;
  constexpr DownloadOnlyLocation& operator=(DownloadOnlyLocation const& o) noexcept = default;
                


// Methods

static UnityEngine::ResourceManagement::ResourceProviders::DownloadOnlyLocation New_ctor(UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation location) ;

/// @brief Method .ctor addr 0x2a3bebc size 0x28 virtual false final false
 void _ctor(UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation location) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ResourceManagement::ResourceProviders
NEED_NO_BOX(UnityEngine::ResourceManagement::ResourceProviders::DownloadOnlyLocation);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ResourceManagement::ResourceProviders::DownloadOnlyLocation, "UnityEngine.ResourceManagement.ResourceProviders", "DownloadOnlyLocation");
