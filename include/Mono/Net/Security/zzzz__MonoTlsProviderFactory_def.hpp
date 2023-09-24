#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System {
template<typename T1,typename T2>
class Tuple_2;
}
namespace System {
struct Guid;
}
namespace Mono::Net::Security {
class MobileTlsProvider;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
// Forward declare root types
namespace Mono::Net::Security {
class MonoTlsProviderFactory;
}
// Type: Mono.Net.Security::MonoTlsProviderFactory
namespace Mono::Net::Security {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7693))
// CS Name: Mono.Net.Security.MonoTlsProviderFactory
class CORDL_TYPE MonoTlsProviderFactory : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~MonoTlsProviderFactory() = default;

// Ctor Parameters [CppParam { name: "", ty: "MonoTlsProviderFactory", modifiers: " const&", def_value: None }]
constexpr MonoTlsProviderFactory(MonoTlsProviderFactory const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MonoTlsProviderFactory", modifiers: "&&", def_value: None }]
constexpr MonoTlsProviderFactory(MonoTlsProviderFactory&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MonoTlsProviderFactory(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr MonoTlsProviderFactory& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MonoTlsProviderFactory& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MonoTlsProviderFactory& operator=(MonoTlsProviderFactory&& o) noexcept = default;
  constexpr MonoTlsProviderFactory& operator=(MonoTlsProviderFactory const& o) noexcept = default;
                


// Fields

static ::bs_hook::Il2CppWrapperType __declspec(property(get=__get_locker, put=__set_locker))  locker;

static void __set_locker(::bs_hook::Il2CppWrapperType value) ;

static ::bs_hook::Il2CppWrapperType __get_locker() ;

static bool __declspec(property(get=__get_initialized, put=__set_initialized))  initialized;

static void __set_initialized(bool value) ;

static bool __get_initialized() ;

static Mono::Net::Security::MobileTlsProvider __declspec(property(get=__get_defaultProvider, put=__set_defaultProvider))  defaultProvider;

static void __set_defaultProvider(Mono::Net::Security::MobileTlsProvider value) ;

static Mono::Net::Security::MobileTlsProvider __get_defaultProvider() ;

static System::Collections::Generic::Dictionary_2<::StringW,System::Tuple_2<System::Guid,::StringW>> __declspec(property(get=__get_providerRegistration, put=__set_providerRegistration))  providerRegistration;

static void __set_providerRegistration(System::Collections::Generic::Dictionary_2<::StringW,System::Tuple_2<System::Guid,::StringW>> value) ;

static System::Collections::Generic::Dictionary_2<::StringW,System::Tuple_2<System::Guid,::StringW>> __get_providerRegistration() ;

static System::Collections::Generic::Dictionary_2<System::Guid,Mono::Net::Security::MobileTlsProvider> __declspec(property(get=__get_providerCache, put=__set_providerCache))  providerCache;

static void __set_providerCache(System::Collections::Generic::Dictionary_2<System::Guid,Mono::Net::Security::MobileTlsProvider> value) ;

static System::Collections::Generic::Dictionary_2<System::Guid,Mono::Net::Security::MobileTlsProvider> __get_providerCache() ;

static System::Guid __declspec(property(get=__get_UnityTlsId, put=__set_UnityTlsId))  UnityTlsId;

static void __set_UnityTlsId(System::Guid value) ;

static System::Guid __get_UnityTlsId() ;

static System::Guid __declspec(property(get=__get_AppleTlsId, put=__set_AppleTlsId))  AppleTlsId;

static void __set_AppleTlsId(System::Guid value) ;

static System::Guid __get_AppleTlsId() ;

static System::Guid __declspec(property(get=__get_BtlsId, put=__set_BtlsId))  BtlsId;

static void __set_BtlsId(System::Guid value) ;

static System::Guid __get_BtlsId() ;


// Methods

/// @brief Method GetProviderInternal addr 0x268e9ac size 0x11c virtual false final false
static Mono::Net::Security::MobileTlsProvider GetProviderInternal() ;

/// @brief Method InitializeInternal addr 0x2692a20 size 0x3ac virtual false final false
static void InitializeInternal() ;

/// @brief Method LookupProvider addr 0x269316c size 0x594 virtual false final false
static Mono::Net::Security::MobileTlsProvider LookupProvider(::StringW name, bool throwOnError) ;

/// @brief Method InitializeProviderRegistration addr 0x2692dcc size 0x20c virtual false final false
static void InitializeProviderRegistration() ;

/// @brief Method PopulateUnityProviders addr 0x2693700 size 0x13c virtual false final false
static void PopulateUnityProviders() ;

/// @brief Method PopulateProviders addr 0x269383c size 0x50 virtual false final false
static void PopulateProviders() ;

/// @brief Method CreateDefaultProviderImpl addr 0x2692fd8 size 0x194 virtual false final false
static Mono::Net::Security::MobileTlsProvider CreateDefaultProviderImpl() ;

/// @brief Method GetProvider addr 0x269388c size 0x4c virtual false final false
static Mono::Net::Security::MobileTlsProvider GetProvider() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Mono::Net::Security
NEED_NO_BOX(Mono::Net::Security::MonoTlsProviderFactory);
DEFINE_IL2CPP_ARG_TYPE(Mono::Net::Security::MonoTlsProviderFactory, "Mono.Net.Security", "MonoTlsProviderFactory");
