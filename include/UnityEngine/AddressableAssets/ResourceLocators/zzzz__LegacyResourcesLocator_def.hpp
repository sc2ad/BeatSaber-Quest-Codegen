#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace UnityEngine::AddressableAssets::ResourceLocators {
class IResourceLocator;
}
namespace System {
class Type;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace UnityEngine::ResourceManagement::ResourceLocations {
class IResourceLocation;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
// Forward declare root types
namespace UnityEngine::AddressableAssets::ResourceLocators {
class LegacyResourcesLocator;
}
// Type: UnityEngine.AddressableAssets.ResourceLocators::LegacyResourcesLocator
namespace UnityEngine::AddressableAssets::ResourceLocators {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14394))
// CS Name: UnityEngine.AddressableAssets.ResourceLocators.LegacyResourcesLocator
class CORDL_TYPE LegacyResourcesLocator : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator
constexpr operator  ::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~LegacyResourcesLocator() = default;

// Ctor Parameters [CppParam { name: "", ty: "LegacyResourcesLocator", modifiers: " const&", def_value: None }]
constexpr LegacyResourcesLocator(LegacyResourcesLocator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LegacyResourcesLocator", modifiers: "&&", def_value: None }]
constexpr LegacyResourcesLocator(LegacyResourcesLocator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LegacyResourcesLocator(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr LegacyResourcesLocator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LegacyResourcesLocator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LegacyResourcesLocator& operator=(LegacyResourcesLocator&& o) noexcept = default;
  constexpr LegacyResourcesLocator& operator=(LegacyResourcesLocator const& o) noexcept = default;
                


// Properties

 ::System::Collections::Generic::IEnumerable_1<::bs_hook::Il2CppWrapperType> __declspec(property(get=get_Keys))  Keys;

 ::StringW __declspec(property(get=get_LocatorId))  LocatorId;


// Methods

/// @brief Method Locate addr 0x289cd24 size 0x274 virtual true final true
 bool Locate(::bs_hook::Il2CppWrapperType key, ::System::Type type, ByRef<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation>> locations) ;

/// @brief Method get_Keys addr 0x289cf98 size 0x8 virtual true final true
 ::System::Collections::Generic::IEnumerable_1<::bs_hook::Il2CppWrapperType> get_Keys() ;

/// @brief Method get_LocatorId addr 0x289cfa0 size 0x40 virtual true final true
 ::StringW get_LocatorId() ;

// Ctor Parameters []
explicit LegacyResourcesLocator() ;

/// @brief Method .ctor addr 0x289cfe0 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::AddressableAssets::ResourceLocators
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::AddressableAssets::ResourceLocators::LegacyResourcesLocator);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AddressableAssets::ResourceLocators::LegacyResourcesLocator, "UnityEngine.AddressableAssets.ResourceLocators", "LegacyResourcesLocator");
