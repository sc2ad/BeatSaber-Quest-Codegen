#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace UnityEngine::ResourceManagement::Util {
struct SerializedType;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::AddressableAssets::ResourceLocators {
class ResourceLocationData;
}
namespace UnityEngine::ResourceManagement::Util {
struct ObjectInitializationData;
}
namespace System {
class Type;
}
// Forward declare root types
namespace UnityEngine::AddressableAssets::Initialization {
class ResourceManagerRuntimeData;
}
// Type: UnityEngine.AddressableAssets.Initialization::ResourceManagerRuntimeData
namespace UnityEngine::AddressableAssets::Initialization {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14406))
// CS Name: UnityEngine.AddressableAssets.Initialization.ResourceManagerRuntimeData
class CORDL_TYPE ResourceManagerRuntimeData : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x70};

virtual ~ResourceManagerRuntimeData() = default;

// Ctor Parameters [CppParam { name: "", ty: "ResourceManagerRuntimeData", modifiers: " const&", def_value: None }]
constexpr ResourceManagerRuntimeData(ResourceManagerRuntimeData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ResourceManagerRuntimeData", modifiers: "&&", def_value: None }]
constexpr ResourceManagerRuntimeData(ResourceManagerRuntimeData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ResourceManagerRuntimeData(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ResourceManagerRuntimeData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ResourceManagerRuntimeData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ResourceManagerRuntimeData& operator=(ResourceManagerRuntimeData&& o) noexcept = default;
  constexpr ResourceManagerRuntimeData& operator=(ResourceManagerRuntimeData const& o) noexcept = default;
                


// Fields

/// @brief Field kCatalogAddress offset 0
static constexpr ::ConstString  kCatalogAddress{u"AddressablesMainContentCatalog"};

 ::StringW __declspec(property(get=__get_m_buildTarget, put=__set_m_buildTarget))  m_buildTarget;

constexpr void __set_m_buildTarget(::StringW value) ;

constexpr ::StringW __get_m_buildTarget() const;

 ::StringW __declspec(property(get=__get_m_SettingsHash, put=__set_m_SettingsHash))  m_SettingsHash;

constexpr void __set_m_SettingsHash(::StringW value) ;

constexpr ::StringW __get_m_SettingsHash() const;

 System::Collections::Generic::List_1<UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationData> __declspec(property(get=__get_m_CatalogLocations, put=__set_m_CatalogLocations))  m_CatalogLocations;

constexpr void __set_m_CatalogLocations(System::Collections::Generic::List_1<UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationData> value) ;

constexpr System::Collections::Generic::List_1<UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationData> __get_m_CatalogLocations() const;

 bool __declspec(property(get=__get_m_ProfileEvents, put=__set_m_ProfileEvents))  m_ProfileEvents;

constexpr void __set_m_ProfileEvents(bool value) ;

constexpr bool __get_m_ProfileEvents() const;

 bool __declspec(property(get=__get_m_LogResourceManagerExceptions, put=__set_m_LogResourceManagerExceptions))  m_LogResourceManagerExceptions;

constexpr void __set_m_LogResourceManagerExceptions(bool value) ;

constexpr bool __get_m_LogResourceManagerExceptions() const;

 System::Collections::Generic::List_1<UnityEngine::ResourceManagement::Util::ObjectInitializationData> __declspec(property(get=__get_m_ExtraInitializationData, put=__set_m_ExtraInitializationData))  m_ExtraInitializationData;

constexpr void __set_m_ExtraInitializationData(System::Collections::Generic::List_1<UnityEngine::ResourceManagement::Util::ObjectInitializationData> value) ;

constexpr System::Collections::Generic::List_1<UnityEngine::ResourceManagement::Util::ObjectInitializationData> __get_m_ExtraInitializationData() const;

 bool __declspec(property(get=__get_m_DisableCatalogUpdateOnStart, put=__set_m_DisableCatalogUpdateOnStart))  m_DisableCatalogUpdateOnStart;

constexpr void __set_m_DisableCatalogUpdateOnStart(bool value) ;

constexpr bool __get_m_DisableCatalogUpdateOnStart() const;

 bool __declspec(property(get=__get_m_IsLocalCatalogInBundle, put=__set_m_IsLocalCatalogInBundle))  m_IsLocalCatalogInBundle;

constexpr void __set_m_IsLocalCatalogInBundle(bool value) ;

constexpr bool __get_m_IsLocalCatalogInBundle() const;

 UnityEngine::ResourceManagement::Util::SerializedType __declspec(property(get=__get_m_CertificateHandlerType, put=__set_m_CertificateHandlerType))  m_CertificateHandlerType;

constexpr void __set_m_CertificateHandlerType(UnityEngine::ResourceManagement::Util::SerializedType value) ;

constexpr UnityEngine::ResourceManagement::Util::SerializedType __get_m_CertificateHandlerType() const;

 ::StringW __declspec(property(get=__get_m_AddressablesVersion, put=__set_m_AddressablesVersion))  m_AddressablesVersion;

constexpr void __set_m_AddressablesVersion(::StringW value) ;

constexpr ::StringW __get_m_AddressablesVersion() const;

 int32_t __declspec(property(get=__get_m_maxConcurrentWebRequests, put=__set_m_maxConcurrentWebRequests))  m_maxConcurrentWebRequests;

constexpr void __set_m_maxConcurrentWebRequests(int32_t value) ;

constexpr int32_t __get_m_maxConcurrentWebRequests() const;

 int32_t __declspec(property(get=__get_m_CatalogRequestsTimeout, put=__set_m_CatalogRequestsTimeout))  m_CatalogRequestsTimeout;

constexpr void __set_m_CatalogRequestsTimeout(int32_t value) ;

constexpr int32_t __get_m_CatalogRequestsTimeout() const;


// Properties

 ::StringW __declspec(property(get=get_BuildTarget, put=set_BuildTarget))  BuildTarget;

 ::StringW __declspec(property(get=get_SettingsHash, put=set_SettingsHash))  SettingsHash;

 System::Collections::Generic::List_1<UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationData> __declspec(property(get=get_CatalogLocations))  CatalogLocations;

 bool __declspec(property(get=get_ProfileEvents, put=set_ProfileEvents))  ProfileEvents;

 bool __declspec(property(get=get_LogResourceManagerExceptions, put=set_LogResourceManagerExceptions))  LogResourceManagerExceptions;

 System::Collections::Generic::List_1<UnityEngine::ResourceManagement::Util::ObjectInitializationData> __declspec(property(get=get_InitializationObjects))  InitializationObjects;

 bool __declspec(property(get=get_DisableCatalogUpdateOnStartup, put=set_DisableCatalogUpdateOnStartup))  DisableCatalogUpdateOnStartup;

 bool __declspec(property(get=get_IsLocalCatalogInBundle, put=set_IsLocalCatalogInBundle))  IsLocalCatalogInBundle;

 System::Type __declspec(property(get=get_CertificateHandlerType, put=set_CertificateHandlerType))  CertificateHandlerType;

 ::StringW __declspec(property(get=get_AddressablesVersion, put=set_AddressablesVersion))  AddressablesVersion;

 int32_t __declspec(property(get=get_MaxConcurrentWebRequests, put=set_MaxConcurrentWebRequests))  MaxConcurrentWebRequests;

 int32_t __declspec(property(get=get_CatalogRequestsTimeout, put=set_CatalogRequestsTimeout))  CatalogRequestsTimeout;


// Methods

/// @brief Method get_BuildTarget addr 0x28a21ec size 0x8 virtual false final false
 ::StringW get_BuildTarget() ;

/// @brief Method set_BuildTarget addr 0x28a21f4 size 0x8 virtual false final false
 void set_BuildTarget(::StringW value) ;

/// @brief Method get_SettingsHash addr 0x28a21fc size 0x8 virtual false final false
 ::StringW get_SettingsHash() ;

/// @brief Method set_SettingsHash addr 0x28a2204 size 0x8 virtual false final false
 void set_SettingsHash(::StringW value) ;

/// @brief Method get_CatalogLocations addr 0x28a220c size 0x8 virtual false final false
 System::Collections::Generic::List_1<UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationData> get_CatalogLocations() ;

/// @brief Method get_ProfileEvents addr 0x28a2214 size 0x8 virtual false final false
 bool get_ProfileEvents() ;

/// @brief Method set_ProfileEvents addr 0x28a221c size 0xc virtual false final false
 void set_ProfileEvents(bool value) ;

/// @brief Method get_LogResourceManagerExceptions addr 0x28a2228 size 0x8 virtual false final false
 bool get_LogResourceManagerExceptions() ;

/// @brief Method set_LogResourceManagerExceptions addr 0x28a2230 size 0xc virtual false final false
 void set_LogResourceManagerExceptions(bool value) ;

/// @brief Method get_InitializationObjects addr 0x28a223c size 0x8 virtual false final false
 System::Collections::Generic::List_1<UnityEngine::ResourceManagement::Util::ObjectInitializationData> get_InitializationObjects() ;

/// @brief Method get_DisableCatalogUpdateOnStartup addr 0x28a2244 size 0x8 virtual false final false
 bool get_DisableCatalogUpdateOnStartup() ;

/// @brief Method set_DisableCatalogUpdateOnStartup addr 0x28a224c size 0xc virtual false final false
 void set_DisableCatalogUpdateOnStartup(bool value) ;

/// @brief Method get_IsLocalCatalogInBundle addr 0x28a2258 size 0x8 virtual false final false
 bool get_IsLocalCatalogInBundle() ;

/// @brief Method set_IsLocalCatalogInBundle addr 0x28a2260 size 0xc virtual false final false
 void set_IsLocalCatalogInBundle(bool value) ;

/// @brief Method get_CertificateHandlerType addr 0x28a226c size 0xc virtual false final false
 System::Type get_CertificateHandlerType() ;

/// @brief Method set_CertificateHandlerType addr 0x28a2278 size 0xc virtual false final false
 void set_CertificateHandlerType(System::Type value) ;

/// @brief Method get_AddressablesVersion addr 0x28a2284 size 0x8 virtual false final false
 ::StringW get_AddressablesVersion() ;

/// @brief Method set_AddressablesVersion addr 0x28a228c size 0x8 virtual false final false
 void set_AddressablesVersion(::StringW value) ;

/// @brief Method get_MaxConcurrentWebRequests addr 0x28a2294 size 0x8 virtual false final false
 int32_t get_MaxConcurrentWebRequests() ;

/// @brief Method set_MaxConcurrentWebRequests addr 0x28a229c size 0x1c virtual false final false
 void set_MaxConcurrentWebRequests(int32_t value) ;

/// @brief Method get_CatalogRequestsTimeout addr 0x28a22b8 size 0x8 virtual false final false
 int32_t get_CatalogRequestsTimeout() ;

/// @brief Method set_CatalogRequestsTimeout addr 0x28a22c0 size 0x1c virtual false final false
 void set_CatalogRequestsTimeout(int32_t value) ;

// Ctor Parameters []
explicit ResourceManagerRuntimeData() ;

/// @brief Method .ctor addr 0x28a22dc size 0xd0 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::AddressableAssets::Initialization
NEED_NO_BOX(UnityEngine::AddressableAssets::Initialization::ResourceManagerRuntimeData);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::AddressableAssets::Initialization::ResourceManagerRuntimeData, "UnityEngine.AddressableAssets.Initialization", "ResourceManagerRuntimeData");
