#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace System::Security::Cryptography::X509Certificates {
class X509CertificateCollection;
}
namespace System::Security::Cryptography::X509Certificates {
struct X509RevocationFlag;
}
namespace System::Security::Cryptography::X509Certificates {
struct X509VerificationFlags;
}
namespace System {
struct TimeSpan;
}
namespace System::Security::Cryptography::X509Certificates {
struct X509RevocationMode;
}
namespace System {
struct DateTime;
}
namespace System::Security::Cryptography::X509Certificates {
class X509Certificate2Collection;
}
namespace System::Security::Cryptography {
class OidCollection;
}
// Forward declare root types
namespace System::Security::Cryptography::X509Certificates {
class X509ChainPolicy;
}
// Type: System.Security.Cryptography.X509Certificates::X509ChainPolicy
namespace System::Security::Cryptography::X509Certificates {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7859))
// CS Name: System.Security.Cryptography.X509Certificates.X509ChainPolicy
class CORDL_TYPE X509ChainPolicy : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~X509ChainPolicy() = default;

// Ctor Parameters [CppParam { name: "", ty: "X509ChainPolicy", modifiers: " const&", def_value: None }]
constexpr X509ChainPolicy(X509ChainPolicy const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "X509ChainPolicy", modifiers: "&&", def_value: None }]
constexpr X509ChainPolicy(X509ChainPolicy&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit X509ChainPolicy(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr X509ChainPolicy& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr X509ChainPolicy& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr X509ChainPolicy& operator=(X509ChainPolicy&& o) noexcept = default;
  constexpr X509ChainPolicy& operator=(X509ChainPolicy const& o) noexcept = default;
                


// Fields

 System::Security::Cryptography::OidCollection __declspec(property(get=__get_apps, put=__set_apps))  apps;

constexpr void __set_apps(System::Security::Cryptography::OidCollection value) ;

constexpr System::Security::Cryptography::OidCollection __get_apps() const;

 System::Security::Cryptography::OidCollection __declspec(property(get=__get_cert, put=__set_cert))  cert;

constexpr void __set_cert(System::Security::Cryptography::OidCollection value) ;

constexpr System::Security::Cryptography::OidCollection __get_cert() const;

 System::Security::Cryptography::X509Certificates::X509CertificateCollection __declspec(property(get=__get_store, put=__set_store))  store;

constexpr void __set_store(System::Security::Cryptography::X509Certificates::X509CertificateCollection value) ;

constexpr System::Security::Cryptography::X509Certificates::X509CertificateCollection __get_store() const;

 System::Security::Cryptography::X509Certificates::X509Certificate2Collection __declspec(property(get=__get_store2, put=__set_store2))  store2;

constexpr void __set_store2(System::Security::Cryptography::X509Certificates::X509Certificate2Collection value) ;

constexpr System::Security::Cryptography::X509Certificates::X509Certificate2Collection __get_store2() const;

 System::Security::Cryptography::X509Certificates::X509RevocationFlag __declspec(property(get=__get_rflag, put=__set_rflag))  rflag;

constexpr void __set_rflag(System::Security::Cryptography::X509Certificates::X509RevocationFlag value) ;

constexpr System::Security::Cryptography::X509Certificates::X509RevocationFlag __get_rflag() const;

 System::Security::Cryptography::X509Certificates::X509RevocationMode __declspec(property(get=__get_mode, put=__set_mode))  mode;

constexpr void __set_mode(System::Security::Cryptography::X509Certificates::X509RevocationMode value) ;

constexpr System::Security::Cryptography::X509Certificates::X509RevocationMode __get_mode() const;

 System::TimeSpan __declspec(property(get=__get_timeout, put=__set_timeout))  timeout;

constexpr void __set_timeout(System::TimeSpan value) ;

constexpr System::TimeSpan __get_timeout() const;

 System::Security::Cryptography::X509Certificates::X509VerificationFlags __declspec(property(get=__get_vflags, put=__set_vflags))  vflags;

constexpr void __set_vflags(System::Security::Cryptography::X509Certificates::X509VerificationFlags value) ;

constexpr System::Security::Cryptography::X509Certificates::X509VerificationFlags __get_vflags() const;

 System::DateTime __declspec(property(get=__get_vtime, put=__set_vtime))  vtime;

constexpr void __set_vtime(System::DateTime value) ;

constexpr System::DateTime __get_vtime() const;


// Properties

 System::Security::Cryptography::X509Certificates::X509Certificate2Collection __declspec(property(get=get_ExtraStore))  ExtraStore;

 System::Security::Cryptography::X509Certificates::X509RevocationFlag __declspec(property(get=get_RevocationFlag, put=set_RevocationFlag))  RevocationFlag;

 System::Security::Cryptography::X509Certificates::X509RevocationMode __declspec(property(get=get_RevocationMode, put=set_RevocationMode))  RevocationMode;

 System::TimeSpan __declspec(property(put=set_UrlRetrievalTimeout))  UrlRetrievalTimeout;

 System::Security::Cryptography::X509Certificates::X509VerificationFlags __declspec(property(get=get_VerificationFlags, put=set_VerificationFlags))  VerificationFlags;

 System::DateTime __declspec(property(get=get_VerificationTime, put=set_VerificationTime))  VerificationTime;


// Methods

static System::Security::Cryptography::X509Certificates::X509ChainPolicy New_ctor() ;

/// @brief Method .ctor addr 0x27ee3c8 size 0x1c virtual false final false
 void _ctor() ;

/// @brief Method get_ExtraStore addr 0x27ef320 size 0x26c virtual false final false
 System::Security::Cryptography::X509Certificates::X509Certificate2Collection get_ExtraStore() ;

/// @brief Method get_RevocationFlag addr 0x27f142c size 0x8 virtual false final false
 System::Security::Cryptography::X509Certificates::X509RevocationFlag get_RevocationFlag() ;

/// @brief Method set_RevocationFlag addr 0x27f1434 size 0x64 virtual false final false
 void set_RevocationFlag(System::Security::Cryptography::X509Certificates::X509RevocationFlag value) ;

/// @brief Method get_RevocationMode addr 0x27f1498 size 0x8 virtual false final false
 System::Security::Cryptography::X509Certificates::X509RevocationMode get_RevocationMode() ;

/// @brief Method set_RevocationMode addr 0x27f14a0 size 0x64 virtual false final false
 void set_RevocationMode(System::Security::Cryptography::X509Certificates::X509RevocationMode value) ;

/// @brief Method set_UrlRetrievalTimeout addr 0x27f1504 size 0x8 virtual false final false
 void set_UrlRetrievalTimeout(System::TimeSpan value) ;

/// @brief Method get_VerificationFlags addr 0x27f150c size 0x8 virtual false final false
 System::Security::Cryptography::X509Certificates::X509VerificationFlags get_VerificationFlags() ;

/// @brief Method set_VerificationFlags addr 0x27f1514 size 0x64 virtual false final false
 void set_VerificationFlags(System::Security::Cryptography::X509Certificates::X509VerificationFlags value) ;

/// @brief Method get_VerificationTime addr 0x27f1578 size 0x8 virtual false final false
 System::DateTime get_VerificationTime() ;

/// @brief Method set_VerificationTime addr 0x27f1580 size 0x8 virtual false final false
 void set_VerificationTime(System::DateTime value) ;

/// @brief Method Reset addr 0x27f1338 size 0xf4 virtual false final false
 void Reset() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Security::Cryptography::X509Certificates
NEED_NO_BOX(System::Security::Cryptography::X509Certificates::X509ChainPolicy);
DEFINE_IL2CPP_ARG_TYPE(System::Security::Cryptography::X509Certificates::X509ChainPolicy, "System.Security.Cryptography.X509Certificates", "X509ChainPolicy");
