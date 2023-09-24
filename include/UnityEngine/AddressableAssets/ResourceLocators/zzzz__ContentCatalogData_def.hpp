#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace UnityEngine::AddressableAssets::ResourceLocators {
class ResourceLocationMap;
}
namespace UnityEngine::AddressableAssets::ResourceLocators {
class UnityEngine__AddressableAssets__ResourceLocators__ContentCatalogData__CompactLocation;
}
namespace UnityEngine::ResourceManagement::ResourceLocations {
class IResourceLocation;
}
namespace UnityEngine::ResourceManagement::Util {
struct SerializedType;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::ResourceManagement::Util {
struct ObjectInitializationData;
}
namespace UnityEngine::AddressableAssets::ResourceLocators {
struct UnityEngine__AddressableAssets__ResourceLocators__ContentCatalogData__Bucket;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace System {
class Type;
}
// Forward declare root types
namespace UnityEngine::AddressableAssets::ResourceLocators {
class ContentCatalogData;
}
namespace UnityEngine::AddressableAssets::ResourceLocators {
class UnityEngine__AddressableAssets__ResourceLocators__ContentCatalogData__CompactLocation;
}
namespace UnityEngine::AddressableAssets::ResourceLocators {
struct UnityEngine__AddressableAssets__ResourceLocators__ContentCatalogData__Bucket;
}
// Type: ::Bucket
namespace UnityEngine::AddressableAssets::ResourceLocators {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14390))
// CS Name: UnityEngine.AddressableAssets.ResourceLocators.ContentCatalogData::Bucket
struct CORDL_TYPE UnityEngine__AddressableAssets__ResourceLocators__ContentCatalogData__Bucket : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "dataOffset", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "entries", ty: "::ArrayW<int32_t>", modifiers: "", def_value: None }]
constexpr UnityEngine__AddressableAssets__ResourceLocators__ContentCatalogData__Bucket(int32_t dataOffset, ::ArrayW<int32_t> entries) noexcept;


                    constexpr UnityEngine__AddressableAssets__ResourceLocators__ContentCatalogData__Bucket(UnityEngine__AddressableAssets__ResourceLocators__ContentCatalogData__Bucket const&) = default;
                    constexpr UnityEngine__AddressableAssets__ResourceLocators__ContentCatalogData__Bucket(UnityEngine__AddressableAssets__ResourceLocators__ContentCatalogData__Bucket&&) = default;
                    constexpr UnityEngine__AddressableAssets__ResourceLocators__ContentCatalogData__Bucket& operator=(UnityEngine__AddressableAssets__ResourceLocators__ContentCatalogData__Bucket const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__AddressableAssets__ResourceLocators__ContentCatalogData__Bucket& operator=(UnityEngine__AddressableAssets__ResourceLocators__ContentCatalogData__Bucket&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__AddressableAssets__ResourceLocators__ContentCatalogData__Bucket(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get_dataOffset, put=__set_dataOffset))  dataOffset;

constexpr void __set_dataOffset(int32_t value) ;

constexpr int32_t __get_dataOffset() const;

 ::ArrayW<int32_t> __declspec(property(get=__get_entries, put=__set_entries))  entries;

constexpr void __set_entries(::ArrayW<int32_t> value) ;

constexpr ::ArrayW<int32_t> __get_entries() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::AddressableAssets::ResourceLocators
// Type: ::CompactLocation
namespace UnityEngine::AddressableAssets::ResourceLocators {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14391))
// CS Name: UnityEngine.AddressableAssets.ResourceLocators.ContentCatalogData::CompactLocation
class CORDL_TYPE UnityEngine__AddressableAssets__ResourceLocators__ContentCatalogData__CompactLocation : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation
constexpr operator  UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~UnityEngine__AddressableAssets__ResourceLocators__ContentCatalogData__CompactLocation() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__AddressableAssets__ResourceLocators__ContentCatalogData__CompactLocation", modifiers: " const&", def_value: None }]
constexpr UnityEngine__AddressableAssets__ResourceLocators__ContentCatalogData__CompactLocation(UnityEngine__AddressableAssets__ResourceLocators__ContentCatalogData__CompactLocation const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__AddressableAssets__ResourceLocators__ContentCatalogData__CompactLocation", modifiers: "&&", def_value: None }]
constexpr UnityEngine__AddressableAssets__ResourceLocators__ContentCatalogData__CompactLocation(UnityEngine__AddressableAssets__ResourceLocators__ContentCatalogData__CompactLocation&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__AddressableAssets__ResourceLocators__ContentCatalogData__CompactLocation(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnityEngine__AddressableAssets__ResourceLocators__ContentCatalogData__CompactLocation& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__AddressableAssets__ResourceLocators__ContentCatalogData__CompactLocation& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__AddressableAssets__ResourceLocators__ContentCatalogData__CompactLocation& operator=(UnityEngine__AddressableAssets__ResourceLocators__ContentCatalogData__CompactLocation&& o) noexcept = default;
  constexpr UnityEngine__AddressableAssets__ResourceLocators__ContentCatalogData__CompactLocation& operator=(UnityEngine__AddressableAssets__ResourceLocators__ContentCatalogData__CompactLocation const& o) noexcept = default;
                


// Fields

 UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap __declspec(property(get=__get_m_Locator, put=__set_m_Locator))  m_Locator;

constexpr void __set_m_Locator(UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap value) ;

constexpr UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap __get_m_Locator() const;

 ::StringW __declspec(property(get=__get_m_InternalId, put=__set_m_InternalId))  m_InternalId;

constexpr void __set_m_InternalId(::StringW value) ;

constexpr ::StringW __get_m_InternalId() const;

 ::StringW __declspec(property(get=__get_m_ProviderId, put=__set_m_ProviderId))  m_ProviderId;

constexpr void __set_m_ProviderId(::StringW value) ;

constexpr ::StringW __get_m_ProviderId() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get_m_Dependency, put=__set_m_Dependency))  m_Dependency;

constexpr void __set_m_Dependency(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get_m_Dependency() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get_m_Data, put=__set_m_Data))  m_Data;

constexpr void __set_m_Data(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get_m_Data() const;

 int32_t __declspec(property(get=__get_m_HashCode, put=__set_m_HashCode))  m_HashCode;

constexpr void __set_m_HashCode(int32_t value) ;

constexpr int32_t __get_m_HashCode() const;

 int32_t __declspec(property(get=__get_m_DependencyHashCode, put=__set_m_DependencyHashCode))  m_DependencyHashCode;

constexpr void __set_m_DependencyHashCode(int32_t value) ;

constexpr int32_t __get_m_DependencyHashCode() const;

 ::StringW __declspec(property(get=__get_m_PrimaryKey, put=__set_m_PrimaryKey))  m_PrimaryKey;

constexpr void __set_m_PrimaryKey(::StringW value) ;

constexpr ::StringW __get_m_PrimaryKey() const;

 System::Type __declspec(property(get=__get_m_Type, put=__set_m_Type))  m_Type;

constexpr void __set_m_Type(System::Type value) ;

constexpr System::Type __get_m_Type() const;


// Properties

 ::StringW __declspec(property(get=get_InternalId))  InternalId;

 ::StringW __declspec(property(get=get_ProviderId))  ProviderId;

 System::Collections::Generic::IList_1<UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation> __declspec(property(get=get_Dependencies))  Dependencies;

 bool __declspec(property(get=get_HasDependencies))  HasDependencies;

 int32_t __declspec(property(get=get_DependencyHashCode))  DependencyHashCode;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=get_Data))  Data;

 ::StringW __declspec(property(get=get_PrimaryKey, put=set_PrimaryKey))  PrimaryKey;

 System::Type __declspec(property(get=get_ResourceType))  ResourceType;


// Methods

/// @brief Method get_InternalId addr 0x289c360 size 0x8 virtual true final true
 ::StringW get_InternalId() ;

/// @brief Method get_ProviderId addr 0x289c368 size 0x8 virtual true final true
 ::StringW get_ProviderId() ;

/// @brief Method get_Dependencies addr 0x289c370 size 0xb4 virtual true final true
 System::Collections::Generic::IList_1<UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation> get_Dependencies() ;

/// @brief Method get_HasDependencies addr 0x289cc90 size 0x10 virtual true final true
 bool get_HasDependencies() ;

/// @brief Method get_DependencyHashCode addr 0x289cca0 size 0x8 virtual true final true
 int32_t get_DependencyHashCode() ;

/// @brief Method get_Data addr 0x289cca8 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType get_Data() ;

/// @brief Method get_PrimaryKey addr 0x289ccb0 size 0x8 virtual true final true
 ::StringW get_PrimaryKey() ;

/// @brief Method set_PrimaryKey addr 0x289ccb8 size 0x8 virtual false final false
 void set_PrimaryKey(::StringW value) ;

/// @brief Method get_ResourceType addr 0x289ccc0 size 0x8 virtual true final true
 System::Type get_ResourceType() ;

/// @brief Method ToString addr 0x289ccc8 size 0x8 virtual true final false
 ::StringW ToString() ;

/// @brief Method Hash addr 0x289ccd0 size 0x54 virtual true final true
 int32_t Hash(System::Type t) ;

static UnityEngine::AddressableAssets::ResourceLocators::UnityEngine__AddressableAssets__ResourceLocators__ContentCatalogData__CompactLocation New_ctor(UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap locator, ::StringW internalId, ::StringW providerId, ::bs_hook::Il2CppWrapperType dependencyKey, ::bs_hook::Il2CppWrapperType data, int32_t depHash, ::StringW primaryKey, System::Type type) ;

/// @brief Method .ctor addr 0x289c148 size 0x134 virtual false final false
 void _ctor(UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap locator, ::StringW internalId, ::StringW providerId, ::bs_hook::Il2CppWrapperType dependencyKey, ::bs_hook::Il2CppWrapperType data, int32_t depHash, ::StringW primaryKey, System::Type type) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::AddressableAssets::ResourceLocators
// Type: UnityEngine.AddressableAssets.ResourceLocators::ContentCatalogData
namespace UnityEngine::AddressableAssets::ResourceLocators {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14392))
// CS Name: UnityEngine.AddressableAssets.ResourceLocators.ContentCatalogData
class CORDL_TYPE ContentCatalogData : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using CompactLocation = UnityEngine::AddressableAssets::ResourceLocators::UnityEngine__AddressableAssets__ResourceLocators__ContentCatalogData__CompactLocation;

using Bucket = UnityEngine::AddressableAssets::ResourceLocators::UnityEngine__AddressableAssets__ResourceLocators__ContentCatalogData__Bucket;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xd0};

virtual ~ContentCatalogData() = default;

// Ctor Parameters [CppParam { name: "", ty: "ContentCatalogData", modifiers: " const&", def_value: None }]
constexpr ContentCatalogData(ContentCatalogData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ContentCatalogData", modifiers: "&&", def_value: None }]
constexpr ContentCatalogData(ContentCatalogData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ContentCatalogData(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ContentCatalogData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ContentCatalogData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ContentCatalogData& operator=(ContentCatalogData&& o) noexcept = default;
  constexpr ContentCatalogData& operator=(ContentCatalogData const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_localHash, put=__set_localHash))  localHash;

constexpr void __set_localHash(::StringW value) ;

constexpr ::StringW __get_localHash() const;

 UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation __declspec(property(get=__get_location, put=__set_location))  location;

constexpr void __set_location(UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation value) ;

constexpr UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation __get_location() const;

 ::StringW __declspec(property(get=__get_m_LocatorId, put=__set_m_LocatorId))  m_LocatorId;

constexpr void __set_m_LocatorId(::StringW value) ;

constexpr ::StringW __get_m_LocatorId() const;

 UnityEngine::ResourceManagement::Util::ObjectInitializationData __declspec(property(get=__get_m_InstanceProviderData, put=__set_m_InstanceProviderData))  m_InstanceProviderData;

constexpr void __set_m_InstanceProviderData(UnityEngine::ResourceManagement::Util::ObjectInitializationData value) ;

constexpr UnityEngine::ResourceManagement::Util::ObjectInitializationData __get_m_InstanceProviderData() const;

 UnityEngine::ResourceManagement::Util::ObjectInitializationData __declspec(property(get=__get_m_SceneProviderData, put=__set_m_SceneProviderData))  m_SceneProviderData;

constexpr void __set_m_SceneProviderData(UnityEngine::ResourceManagement::Util::ObjectInitializationData value) ;

constexpr UnityEngine::ResourceManagement::Util::ObjectInitializationData __get_m_SceneProviderData() const;

 System::Collections::Generic::List_1<UnityEngine::ResourceManagement::Util::ObjectInitializationData> __declspec(property(get=__get_m_ResourceProviderData, put=__set_m_ResourceProviderData))  m_ResourceProviderData;

constexpr void __set_m_ResourceProviderData(System::Collections::Generic::List_1<UnityEngine::ResourceManagement::Util::ObjectInitializationData> value) ;

constexpr System::Collections::Generic::List_1<UnityEngine::ResourceManagement::Util::ObjectInitializationData> __get_m_ResourceProviderData() const;

 ::ArrayW<::StringW> __declspec(property(get=__get_m_ProviderIds, put=__set_m_ProviderIds))  m_ProviderIds;

constexpr void __set_m_ProviderIds(::ArrayW<::StringW> value) ;

constexpr ::ArrayW<::StringW> __get_m_ProviderIds() const;

 ::ArrayW<::StringW> __declspec(property(get=__get_m_InternalIds, put=__set_m_InternalIds))  m_InternalIds;

constexpr void __set_m_InternalIds(::ArrayW<::StringW> value) ;

constexpr ::ArrayW<::StringW> __get_m_InternalIds() const;

 ::StringW __declspec(property(get=__get_m_KeyDataString, put=__set_m_KeyDataString))  m_KeyDataString;

constexpr void __set_m_KeyDataString(::StringW value) ;

constexpr ::StringW __get_m_KeyDataString() const;

 ::StringW __declspec(property(get=__get_m_BucketDataString, put=__set_m_BucketDataString))  m_BucketDataString;

constexpr void __set_m_BucketDataString(::StringW value) ;

constexpr ::StringW __get_m_BucketDataString() const;

 ::StringW __declspec(property(get=__get_m_EntryDataString, put=__set_m_EntryDataString))  m_EntryDataString;

constexpr void __set_m_EntryDataString(::StringW value) ;

constexpr ::StringW __get_m_EntryDataString() const;

/// @brief Field kBytesPerInt32 offset 0
static constexpr int32_t  kBytesPerInt32{4};

/// @brief Field k_EntryDataItemPerEntry offset 0
static constexpr int32_t  k_EntryDataItemPerEntry{7};

 ::StringW __declspec(property(get=__get_m_ExtraDataString, put=__set_m_ExtraDataString))  m_ExtraDataString;

constexpr void __set_m_ExtraDataString(::StringW value) ;

constexpr ::StringW __get_m_ExtraDataString() const;

 ::ArrayW<UnityEngine::ResourceManagement::Util::SerializedType> __declspec(property(get=__get_m_resourceTypes, put=__set_m_resourceTypes))  m_resourceTypes;

constexpr void __set_m_resourceTypes(::ArrayW<UnityEngine::ResourceManagement::Util::SerializedType> value) ;

constexpr ::ArrayW<UnityEngine::ResourceManagement::Util::SerializedType> __get_m_resourceTypes() const;

 ::ArrayW<::StringW> __declspec(property(get=__get_m_InternalIdPrefixes, put=__set_m_InternalIdPrefixes))  m_InternalIdPrefixes;

constexpr void __set_m_InternalIdPrefixes(::ArrayW<::StringW> value) ;

constexpr ::ArrayW<::StringW> __get_m_InternalIdPrefixes() const;


// Properties

 ::StringW __declspec(property(get=get_ProviderId, put=set_ProviderId))  ProviderId;

 UnityEngine::ResourceManagement::Util::ObjectInitializationData __declspec(property(get=get_InstanceProviderData, put=set_InstanceProviderData))  InstanceProviderData;

 UnityEngine::ResourceManagement::Util::ObjectInitializationData __declspec(property(get=get_SceneProviderData, put=set_SceneProviderData))  SceneProviderData;

 System::Collections::Generic::List_1<UnityEngine::ResourceManagement::Util::ObjectInitializationData> __declspec(property(get=get_ResourceProviderData, put=set_ResourceProviderData))  ResourceProviderData;

 ::ArrayW<::StringW> __declspec(property(get=get_ProviderIds))  ProviderIds;

 ::ArrayW<::StringW> __declspec(property(get=get_InternalIds))  InternalIds;


// Methods

/// @brief Method get_ProviderId addr 0x289b7d8 size 0x8 virtual false final false
 ::StringW get_ProviderId() ;

/// @brief Method set_ProviderId addr 0x289b7e0 size 0x8 virtual false final false
 void set_ProviderId(::StringW value) ;

/// @brief Method get_InstanceProviderData addr 0x289b7e8 size 0x18 virtual false final false
 UnityEngine::ResourceManagement::Util::ObjectInitializationData get_InstanceProviderData() ;

/// @brief Method set_InstanceProviderData addr 0x289b800 size 0x18 virtual false final false
 void set_InstanceProviderData(UnityEngine::ResourceManagement::Util::ObjectInitializationData value) ;

/// @brief Method get_SceneProviderData addr 0x289b818 size 0x18 virtual false final false
 UnityEngine::ResourceManagement::Util::ObjectInitializationData get_SceneProviderData() ;

/// @brief Method set_SceneProviderData addr 0x289b830 size 0x18 virtual false final false
 void set_SceneProviderData(UnityEngine::ResourceManagement::Util::ObjectInitializationData value) ;

/// @brief Method get_ResourceProviderData addr 0x289b848 size 0x8 virtual false final false
 System::Collections::Generic::List_1<UnityEngine::ResourceManagement::Util::ObjectInitializationData> get_ResourceProviderData() ;

/// @brief Method set_ResourceProviderData addr 0x289b850 size 0x8 virtual false final false
 void set_ResourceProviderData(System::Collections::Generic::List_1<UnityEngine::ResourceManagement::Util::ObjectInitializationData> value) ;

/// @brief Method get_ProviderIds addr 0x289b858 size 0x8 virtual false final false
 ::ArrayW<::StringW> get_ProviderIds() ;

/// @brief Method get_InternalIds addr 0x289b860 size 0x8 virtual false final false
 ::ArrayW<::StringW> get_InternalIds() ;

/// @brief Method CleanData addr 0x289a09c size 0x58 virtual false final false
 void CleanData() ;

/// @brief Method CreateCustomLocator addr 0x2894cd4 size 0xc virtual false final false
 UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap CreateCustomLocator(::StringW overrideId, ::StringW providerSuffix) ;

/// @brief Method CreateLocator addr 0x289b868 size 0x780 virtual false final false
 UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap CreateLocator(::StringW providerSuffix) ;

/// @brief Method ExpandInternalId addr 0x289c088 size 0xc0 virtual false final false
static ::StringW ExpandInternalId(::ArrayW<::StringW> internalIdPrefixes, ::StringW v) ;

static UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData New_ctor() ;

/// @brief Method .ctor addr 0x289c2e4 size 0x7c virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::AddressableAssets::ResourceLocators
NEED_NO_BOX(UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData, "UnityEngine.AddressableAssets.ResourceLocators", "ContentCatalogData");
NEED_NO_BOX(UnityEngine::AddressableAssets::ResourceLocators::UnityEngine__AddressableAssets__ResourceLocators__ContentCatalogData__CompactLocation);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::AddressableAssets::ResourceLocators::UnityEngine__AddressableAssets__ResourceLocators__ContentCatalogData__CompactLocation, "UnityEngine.AddressableAssets.ResourceLocators", "ContentCatalogData/CompactLocation");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::AddressableAssets::ResourceLocators::UnityEngine__AddressableAssets__ResourceLocators__ContentCatalogData__Bucket, "UnityEngine.AddressableAssets.ResourceLocators", "ContentCatalogData/Bucket");
