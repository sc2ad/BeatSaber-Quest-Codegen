#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace UnityEngine::ResourceManagement::ResourceLocations {
class IResourceLocation;
}
// Forward declare root types
namespace UnityEngine::ResourceManagement::Util {
class LocationUtils;
}
// Type: UnityEngine.ResourceManagement.Util::LocationUtils
namespace UnityEngine::ResourceManagement::Util {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14254))
// CS Name: UnityEngine.ResourceManagement.Util.LocationUtils
class CORDL_TYPE LocationUtils : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~LocationUtils() = default;

// Ctor Parameters [CppParam { name: "", ty: "LocationUtils", modifiers: " const&", def_value: None }]
constexpr LocationUtils(LocationUtils const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LocationUtils", modifiers: "&&", def_value: None }]
constexpr LocationUtils(LocationUtils&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LocationUtils(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr LocationUtils& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LocationUtils& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LocationUtils& operator=(LocationUtils&& o) noexcept = default;
  constexpr LocationUtils& operator=(LocationUtils const& o) noexcept = default;
                


// Methods

/// @brief Method LocationEquals addr 0x2a39e6c size 0x2f4 virtual false final false
static bool LocationEquals(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation loc1, ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation loc2) ;

/// @brief Method DependenciesEqual addr 0x2a3a2a8 size 0x278 virtual false final false
static bool DependenciesEqual(::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation> deps1, ::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation> deps2) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ResourceManagement::Util
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::ResourceManagement::Util::LocationUtils);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourceManagement::Util::LocationUtils, "UnityEngine.ResourceManagement.Util", "LocationUtils");
