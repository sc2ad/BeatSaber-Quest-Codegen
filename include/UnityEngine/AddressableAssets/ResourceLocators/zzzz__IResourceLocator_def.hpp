#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace System {
class Type;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace UnityEngine::ResourceManagement::ResourceLocations {
class IResourceLocation;
}
// Forward declare root types
namespace UnityEngine::AddressableAssets::ResourceLocators {
class IResourceLocator;
}
// Type: UnityEngine.AddressableAssets.ResourceLocators::IResourceLocator
namespace UnityEngine::AddressableAssets::ResourceLocators {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14393))
// CS Name: UnityEngine.AddressableAssets.ResourceLocators.IResourceLocator
class CORDL_TYPE IResourceLocator : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IResourceLocator() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IResourceLocator(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 ::StringW __declspec(property(get=get_LocatorId))  LocatorId;

 ::System::Collections::Generic::IEnumerable_1<::bs_hook::Il2CppWrapperType> __declspec(property(get=get_Keys))  Keys;


// Methods

/// @brief Method get_LocatorId addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW get_LocatorId() ;

/// @brief Method get_Keys addr 0x0 size 0xffffffffffffffff virtual true final false
 ::System::Collections::Generic::IEnumerable_1<::bs_hook::Il2CppWrapperType> get_Keys() ;

/// @brief Method Locate addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Locate(::bs_hook::Il2CppWrapperType key, ::System::Type type, ByRef<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation>> locations) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::AddressableAssets::ResourceLocators
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator, "UnityEngine.AddressableAssets.ResourceLocators", "IResourceLocator");
