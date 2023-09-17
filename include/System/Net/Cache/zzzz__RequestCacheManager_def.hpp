#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace System::Net::Cache {
class RequestCacheBinding;
}
namespace System::Net::Cache {
class RequestCachingSectionInternal;
}
// Forward declare root types
namespace System::Net::Cache {
class RequestCacheManager;
}
// Type: System.Net.Cache::RequestCacheManager
namespace System::Net::Cache {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8168))
// CS Name: System.Net.Cache.RequestCacheManager
class CORDL_TYPE RequestCacheManager : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~RequestCacheManager() = default;

// Ctor Parameters [CppParam { name: "", ty: "RequestCacheManager", modifiers: " const&", def_value: None }]
constexpr RequestCacheManager(RequestCacheManager const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RequestCacheManager", modifiers: "&&", def_value: None }]
constexpr RequestCacheManager(RequestCacheManager&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RequestCacheManager(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr RequestCacheManager& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RequestCacheManager& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RequestCacheManager& operator=(RequestCacheManager&& o) noexcept = default;
  constexpr RequestCacheManager& operator=(RequestCacheManager const& o) noexcept = default;
                


// Fields

static ::System::Net::Cache::RequestCachingSectionInternal __declspec(property(get=__get_s_CacheConfigSettings, put=__set_s_CacheConfigSettings))  s_CacheConfigSettings;

static void __set_s_CacheConfigSettings(::System::Net::Cache::RequestCachingSectionInternal value) ;

static ::System::Net::Cache::RequestCachingSectionInternal __get_s_CacheConfigSettings() ;

static ::System::Net::Cache::RequestCacheBinding __declspec(property(get=__get_s_BypassCacheBinding, put=__set_s_BypassCacheBinding))  s_BypassCacheBinding;

static void __set_s_BypassCacheBinding(::System::Net::Cache::RequestCacheBinding value) ;

static ::System::Net::Cache::RequestCacheBinding __get_s_BypassCacheBinding() ;

static ::System::Net::Cache::RequestCacheBinding __declspec(property(get=__get_s_DefaultGlobalBinding, put=__set_s_DefaultGlobalBinding))  s_DefaultGlobalBinding;

static void __set_s_DefaultGlobalBinding(::System::Net::Cache::RequestCacheBinding value) ;

static ::System::Net::Cache::RequestCacheBinding __get_s_DefaultGlobalBinding() ;

static ::System::Net::Cache::RequestCacheBinding __declspec(property(get=__get_s_DefaultHttpBinding, put=__set_s_DefaultHttpBinding))  s_DefaultHttpBinding;

static void __set_s_DefaultHttpBinding(::System::Net::Cache::RequestCacheBinding value) ;

static ::System::Net::Cache::RequestCacheBinding __get_s_DefaultHttpBinding() ;

static ::System::Net::Cache::RequestCacheBinding __declspec(property(get=__get_s_DefaultFtpBinding, put=__set_s_DefaultFtpBinding))  s_DefaultFtpBinding;

static void __set_s_DefaultFtpBinding(::System::Net::Cache::RequestCacheBinding value) ;

static ::System::Net::Cache::RequestCacheBinding __get_s_DefaultFtpBinding() ;


// Methods

/// @brief Method GetBinding addr 0x285e850 size 0x1fc virtual false final false
static ::System::Net::Cache::RequestCacheBinding GetBinding(::StringW internedScheme) ;

/// @brief Method LoadConfigSettings addr 0x285ea4c size 0x184 virtual false final false
static void LoadConfigSettings() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net::Cache
} // end anonymous namespace
NEED_NO_BOX(::System::Net::Cache::RequestCacheManager);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Cache::RequestCacheManager, "System.Net.Cache", "RequestCacheManager");
