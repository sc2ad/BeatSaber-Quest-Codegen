#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
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
namespace UnityEngine::AddressableAssets::ResourceLocators {
class ResourceLocationData;
}
namespace System {
class Type;
}
namespace UnityEngine::AddressableAssets::ResourceLocators {
class IResourceLocator;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
// Forward declare root types
namespace UnityEngine::AddressableAssets::ResourceLocators {
class ResourceLocationMap;
}
// Type: UnityEngine.AddressableAssets.ResourceLocators::ResourceLocationMap
namespace UnityEngine::AddressableAssets::ResourceLocators {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14396))
// CS Name: UnityEngine.AddressableAssets.ResourceLocators.ResourceLocationMap
class CORDL_TYPE ResourceLocationMap : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator
constexpr operator  UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~ResourceLocationMap() = default;

// Ctor Parameters [CppParam { name: "", ty: "ResourceLocationMap", modifiers: " const&", def_value: None }]
constexpr ResourceLocationMap(ResourceLocationMap const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ResourceLocationMap", modifiers: "&&", def_value: None }]
constexpr ResourceLocationMap(ResourceLocationMap&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ResourceLocationMap(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ResourceLocationMap& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ResourceLocationMap& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ResourceLocationMap& operator=(ResourceLocationMap&& o) noexcept = default;
  constexpr ResourceLocationMap& operator=(ResourceLocationMap const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__LocatorId_k__BackingField, put=__set__LocatorId_k__BackingField))  _LocatorId_k__BackingField;

constexpr void __set__LocatorId_k__BackingField(::StringW value) ;

constexpr ::StringW __get__LocatorId_k__BackingField() const;

 System::Collections::Generic::Dictionary_2<::bs_hook::Il2CppWrapperType,System::Collections::Generic::IList_1<UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation>> __declspec(property(get=__get__Locations_k__BackingField, put=__set__Locations_k__BackingField))  _Locations_k__BackingField;

constexpr void __set__Locations_k__BackingField(System::Collections::Generic::Dictionary_2<::bs_hook::Il2CppWrapperType,System::Collections::Generic::IList_1<UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation>> value) ;

constexpr System::Collections::Generic::Dictionary_2<::bs_hook::Il2CppWrapperType,System::Collections::Generic::IList_1<UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation>> __get__Locations_k__BackingField() const;


// Properties

 ::StringW __declspec(property(get=get_LocatorId, put=set_LocatorId))  LocatorId;

 System::Collections::Generic::Dictionary_2<::bs_hook::Il2CppWrapperType,System::Collections::Generic::IList_1<UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation>> __declspec(property(get=get_Locations, put=set_Locations))  Locations;

 System::Collections::Generic::IEnumerable_1<::bs_hook::Il2CppWrapperType> __declspec(property(get=get_Keys))  Keys;


// Methods

// Ctor Parameters [CppParam { name: "id", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "capacity", ty: "int32_t", modifiers: "", def_value: None }]
explicit ResourceLocationMap(::StringW id, int32_t capacity) ;

/// @brief Method .ctor addr 0x289bfe8 size 0xa0 virtual false final false
 void _ctor(::StringW id, int32_t capacity) ;

/// @brief Method get_LocatorId addr 0x289d238 size 0x8 virtual true final true
 ::StringW get_LocatorId() ;

/// @brief Method set_LocatorId addr 0x289d240 size 0x8 virtual false final false
 void set_LocatorId(::StringW value) ;

// Ctor Parameters [CppParam { name: "id", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "locations", ty: "System::Collections::Generic::IList_1<UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationData>", modifiers: "", def_value: None }]
explicit ResourceLocationMap(::StringW id, System::Collections::Generic::IList_1<UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationData> locations) ;

/// @brief Method .ctor addr 0x289d248 size 0x96c virtual false final false
 void _ctor(::StringW id, System::Collections::Generic::IList_1<UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationData> locations) ;

/// @brief Method get_Locations addr 0x289dd18 size 0x8 virtual false final false
 System::Collections::Generic::Dictionary_2<::bs_hook::Il2CppWrapperType,System::Collections::Generic::IList_1<UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation>> get_Locations() ;

/// @brief Method set_Locations addr 0x289dd20 size 0x8 virtual false final false
 void set_Locations(System::Collections::Generic::Dictionary_2<::bs_hook::Il2CppWrapperType,System::Collections::Generic::IList_1<UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation>> value) ;

/// @brief Method get_Keys addr 0x289dd28 size 0x50 virtual true final true
 System::Collections::Generic::IEnumerable_1<::bs_hook::Il2CppWrapperType> get_Keys() ;

/// @brief Method Locate addr 0x289c424 size 0x86c virtual true final true
 bool Locate(::bs_hook::Il2CppWrapperType key, System::Type type, ByRef<System::Collections::Generic::IList_1<UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation>> locations) ;

/// @brief Method Add addr 0x289dbb4 size 0x164 virtual false final false
 void Add(::bs_hook::Il2CppWrapperType key, UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation location) ;

/// @brief Method Add addr 0x289c27c size 0x68 virtual false final false
 void Add(::bs_hook::Il2CppWrapperType key, System::Collections::Generic::IList_1<UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation> locations) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::AddressableAssets::ResourceLocators
NEED_NO_BOX(UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap, "UnityEngine.AddressableAssets.ResourceLocators", "ResourceLocationMap");
