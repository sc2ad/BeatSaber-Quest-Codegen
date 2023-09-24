#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509ChainImpl_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace Mono::Security::X509 {
class X509Crl;
}
namespace System::Security::Cryptography {
class AsymmetricAlgorithm;
}
namespace System::Security::Cryptography::X509Certificates {
class X509ChainElementCollection;
}
namespace System::Security::Cryptography::X509Certificates {
class X509Certificate2;
}
namespace System::Security::Cryptography::X509Certificates {
class X509ChainElement;
}
namespace Mono::Security::X509 {
class X509Extension;
}
namespace System::Security::Cryptography::X509Certificates {
class X500DistinguishedName;
}
namespace Mono::Security::X509 {
class Mono__Security__X509__X509Crl__X509CrlEntry;
}
namespace System::Security::Cryptography::X509Certificates {
struct StoreLocation;
}
namespace Mono::Security::X509 {
class X509Store;
}
namespace System::Security::Cryptography::X509Certificates {
class X509Certificate2Collection;
}
namespace System::Security::Cryptography::X509Certificates {
class X509ChainPolicy;
}
namespace System::Security::Cryptography::X509Certificates {
class X509Store;
}
namespace System::Security::Cryptography::X509Certificates {
struct X509ChainStatus;
}
namespace System::Security::Cryptography::X509Certificates {
struct X509ChainStatusFlags;
}
// Forward declare root types
namespace System::Security::Cryptography::X509Certificates {
class X509ChainImplMono;
}
// Type: System.Security.Cryptography.X509Certificates::X509ChainImplMono
namespace System::Security::Cryptography::X509Certificates {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7857))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7858))
// CS Name: System.Security.Cryptography.X509Certificates.X509ChainImplMono
class CORDL_TYPE X509ChainImplMono : public System::Security::Cryptography::X509Certificates::X509ChainImpl {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x88};

virtual ~X509ChainImplMono() = default;

// Ctor Parameters [CppParam { name: "", ty: "X509ChainImplMono", modifiers: " const&", def_value: None }]
constexpr X509ChainImplMono(X509ChainImplMono const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "X509ChainImplMono", modifiers: "&&", def_value: None }]
constexpr X509ChainImplMono(X509ChainImplMono&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit X509ChainImplMono(void* ptr) noexcept : System::Security::Cryptography::X509Certificates::X509ChainImpl(ptr) {
}


  constexpr X509ChainImplMono& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr X509ChainImplMono& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr X509ChainImplMono& operator=(X509ChainImplMono&& o) noexcept = default;
  constexpr X509ChainImplMono& operator=(X509ChainImplMono const& o) noexcept = default;
                


// Fields

 System::Security::Cryptography::X509Certificates::StoreLocation __declspec(property(get=__get_location, put=__set_location))  location;

constexpr void __set_location(System::Security::Cryptography::X509Certificates::StoreLocation value) ;

constexpr System::Security::Cryptography::X509Certificates::StoreLocation __get_location() const;

 System::Security::Cryptography::X509Certificates::X509ChainElementCollection __declspec(property(get=__get_elements, put=__set_elements))  elements;

constexpr void __set_elements(System::Security::Cryptography::X509Certificates::X509ChainElementCollection value) ;

constexpr System::Security::Cryptography::X509Certificates::X509ChainElementCollection __get_elements() const;

 System::Security::Cryptography::X509Certificates::X509ChainPolicy __declspec(property(get=__get_policy, put=__set_policy))  policy;

constexpr void __set_policy(System::Security::Cryptography::X509Certificates::X509ChainPolicy value) ;

constexpr System::Security::Cryptography::X509Certificates::X509ChainPolicy __get_policy() const;

 ::ArrayW<System::Security::Cryptography::X509Certificates::X509ChainStatus> __declspec(property(get=__get_status, put=__set_status))  status;

constexpr void __set_status(::ArrayW<System::Security::Cryptography::X509Certificates::X509ChainStatus> value) ;

constexpr ::ArrayW<System::Security::Cryptography::X509Certificates::X509ChainStatus> __get_status() const;

static ::ArrayW<System::Security::Cryptography::X509Certificates::X509ChainStatus> __declspec(property(get=__get_Empty, put=__set_Empty))  Empty;

static void __set_Empty(::ArrayW<System::Security::Cryptography::X509Certificates::X509ChainStatus> value) ;

static ::ArrayW<System::Security::Cryptography::X509Certificates::X509ChainStatus> __get_Empty() ;

 int32_t __declspec(property(get=__get_max_path_length, put=__set_max_path_length))  max_path_length;

constexpr void __set_max_path_length(int32_t value) ;

constexpr int32_t __get_max_path_length() const;

 System::Security::Cryptography::X509Certificates::X500DistinguishedName __declspec(property(get=__get_working_issuer_name, put=__set_working_issuer_name))  working_issuer_name;

constexpr void __set_working_issuer_name(System::Security::Cryptography::X509Certificates::X500DistinguishedName value) ;

constexpr System::Security::Cryptography::X509Certificates::X500DistinguishedName __get_working_issuer_name() const;

 System::Security::Cryptography::AsymmetricAlgorithm __declspec(property(get=__get_working_public_key, put=__set_working_public_key))  working_public_key;

constexpr void __set_working_public_key(System::Security::Cryptography::AsymmetricAlgorithm value) ;

constexpr System::Security::Cryptography::AsymmetricAlgorithm __get_working_public_key() const;

 System::Security::Cryptography::X509Certificates::X509ChainElement __declspec(property(get=__get_bce_restriction, put=__set_bce_restriction))  bce_restriction;

constexpr void __set_bce_restriction(System::Security::Cryptography::X509Certificates::X509ChainElement value) ;

constexpr System::Security::Cryptography::X509Certificates::X509ChainElement __get_bce_restriction() const;

 System::Security::Cryptography::X509Certificates::X509Certificate2Collection __declspec(property(get=__get_roots, put=__set_roots))  roots;

constexpr void __set_roots(System::Security::Cryptography::X509Certificates::X509Certificate2Collection value) ;

constexpr System::Security::Cryptography::X509Certificates::X509Certificate2Collection __get_roots() const;

 System::Security::Cryptography::X509Certificates::X509Certificate2Collection __declspec(property(get=__get_cas, put=__set_cas))  cas;

constexpr void __set_cas(System::Security::Cryptography::X509Certificates::X509Certificate2Collection value) ;

constexpr System::Security::Cryptography::X509Certificates::X509Certificate2Collection __get_cas() const;

 System::Security::Cryptography::X509Certificates::X509Store __declspec(property(get=__get_root_store, put=__set_root_store))  root_store;

constexpr void __set_root_store(System::Security::Cryptography::X509Certificates::X509Store value) ;

constexpr System::Security::Cryptography::X509Certificates::X509Store __get_root_store() const;

 System::Security::Cryptography::X509Certificates::X509Store __declspec(property(get=__get_ca_store, put=__set_ca_store))  ca_store;

constexpr void __set_ca_store(System::Security::Cryptography::X509Certificates::X509Store value) ;

constexpr System::Security::Cryptography::X509Certificates::X509Store __get_ca_store() const;

 System::Security::Cryptography::X509Certificates::X509Store __declspec(property(get=__get_user_root_store, put=__set_user_root_store))  user_root_store;

constexpr void __set_user_root_store(System::Security::Cryptography::X509Certificates::X509Store value) ;

constexpr System::Security::Cryptography::X509Certificates::X509Store __get_user_root_store() const;

 System::Security::Cryptography::X509Certificates::X509Store __declspec(property(get=__get_user_ca_store, put=__set_user_ca_store))  user_ca_store;

constexpr void __set_user_ca_store(System::Security::Cryptography::X509Certificates::X509Store value) ;

constexpr System::Security::Cryptography::X509Certificates::X509Store __get_user_ca_store() const;

 System::Security::Cryptography::X509Certificates::X509Certificate2Collection __declspec(property(get=__get_collection, put=__set_collection))  collection;

constexpr void __set_collection(System::Security::Cryptography::X509Certificates::X509Certificate2Collection value) ;

constexpr System::Security::Cryptography::X509Certificates::X509Certificate2Collection __get_collection() const;


// Properties

 bool __declspec(property(get=get_IsValid))  IsValid;

 System::Security::Cryptography::X509Certificates::X509ChainElementCollection __declspec(property(get=get_ChainElements))  ChainElements;

 System::Security::Cryptography::X509Certificates::X509ChainPolicy __declspec(property(get=get_ChainPolicy))  ChainPolicy;

 ::ArrayW<System::Security::Cryptography::X509Certificates::X509ChainStatus> __declspec(property(get=get_ChainStatus))  ChainStatus;

 System::Security::Cryptography::X509Certificates::X509Certificate2Collection __declspec(property(get=get_Roots))  Roots;

 System::Security::Cryptography::X509Certificates::X509Certificate2Collection __declspec(property(get=get_CertificateAuthorities))  CertificateAuthorities;

 System::Security::Cryptography::X509Certificates::X509Store __declspec(property(get=get_LMRootStore))  LMRootStore;

 System::Security::Cryptography::X509Certificates::X509Store __declspec(property(get=get_UserRootStore))  UserRootStore;

 System::Security::Cryptography::X509Certificates::X509Store __declspec(property(get=get_LMCAStore))  LMCAStore;

 System::Security::Cryptography::X509Certificates::X509Store __declspec(property(get=get_UserCAStore))  UserCAStore;

 System::Security::Cryptography::X509Certificates::X509Certificate2Collection __declspec(property(get=get_CertificateCollection))  CertificateCollection;


// Methods

static System::Security::Cryptography::X509Certificates::X509ChainImplMono New_ctor(bool useMachineContext) ;

/// @brief Method .ctor addr 0x27ee310 size 0xb8 virtual false final false
 void _ctor(bool useMachineContext) ;

/// @brief Method get_IsValid addr 0x27ee3e4 size 0x8 virtual true final false
 bool get_IsValid() ;

/// @brief Method get_ChainElements addr 0x27ee3ec size 0x8 virtual true final false
 System::Security::Cryptography::X509Certificates::X509ChainElementCollection get_ChainElements() ;

/// @brief Method get_ChainPolicy addr 0x27ee3f4 size 0x8 virtual true final false
 System::Security::Cryptography::X509Certificates::X509ChainPolicy get_ChainPolicy() ;

/// @brief Method get_ChainStatus addr 0x27ee3fc size 0x64 virtual true final false
 ::ArrayW<System::Security::Cryptography::X509Certificates::X509ChainStatus> get_ChainStatus() ;

/// @brief Method AddStatus addr 0x27ee460 size 0x4 virtual true final false
 void AddStatus(System::Security::Cryptography::X509Certificates::X509ChainStatusFlags error) ;

/// @brief Method Build addr 0x27ee464 size 0x5bc virtual true final false
 bool Build(System::Security::Cryptography::X509Certificates::X509Certificate2 certificate) ;

/// @brief Method Reset addr 0x27eec3c size 0xcc virtual true final false
 void Reset() ;

/// @brief Method get_Roots addr 0x27eed08 size 0xc0 virtual false final false
 System::Security::Cryptography::X509Certificates::X509Certificate2Collection get_Roots() ;

/// @brief Method get_CertificateAuthorities addr 0x27eefb0 size 0xc0 virtual false final false
 System::Security::Cryptography::X509Certificates::X509Certificate2Collection get_CertificateAuthorities() ;

/// @brief Method get_LMRootStore addr 0x27eedc8 size 0xf4 virtual false final false
 System::Security::Cryptography::X509Certificates::X509Store get_LMRootStore() ;

/// @brief Method get_UserRootStore addr 0x27eeebc size 0xf4 virtual false final false
 System::Security::Cryptography::X509Certificates::X509Store get_UserRootStore() ;

/// @brief Method get_LMCAStore addr 0x27ef070 size 0xf4 virtual false final false
 System::Security::Cryptography::X509Certificates::X509Store get_LMCAStore() ;

/// @brief Method get_UserCAStore addr 0x27ef164 size 0xf4 virtual false final false
 System::Security::Cryptography::X509Certificates::X509Store get_UserCAStore() ;

/// @brief Method get_CertificateCollection addr 0x27ef258 size 0xc8 virtual false final false
 System::Security::Cryptography::X509Certificates::X509Certificate2Collection get_CertificateCollection() ;

/// @brief Method BuildChainFrom addr 0x27eea20 size 0xe8 virtual false final false
 System::Security::Cryptography::X509Certificates::X509ChainStatusFlags BuildChainFrom(System::Security::Cryptography::X509Certificates::X509Certificate2 certificate) ;

/// @brief Method SelectBestFromCollection addr 0x27ef768 size 0x18c virtual false final false
 System::Security::Cryptography::X509Certificates::X509Certificate2 SelectBestFromCollection(System::Security::Cryptography::X509Certificates::X509Certificate2 child, System::Security::Cryptography::X509Certificates::X509Certificate2Collection c) ;

/// @brief Method FindParent addr 0x27ef58c size 0x114 virtual false final false
 System::Security::Cryptography::X509Certificates::X509Certificate2 FindParent(System::Security::Cryptography::X509Certificates::X509Certificate2 certificate) ;

/// @brief Method IsChainComplete addr 0x27ef6a0 size 0xc8 virtual false final false
 bool IsChainComplete(System::Security::Cryptography::X509Certificates::X509Certificate2 certificate) ;

/// @brief Method IsSelfIssued addr 0x27efa44 size 0x48 virtual false final false
 bool IsSelfIssued(System::Security::Cryptography::X509Certificates::X509Certificate2 certificate) ;

/// @brief Method ValidateChain addr 0x27eeb08 size 0x114 virtual false final false
 void ValidateChain(System::Security::Cryptography::X509Certificates::X509ChainStatusFlags flag) ;

/// @brief Method Process addr 0x27efa8c size 0x2a8 virtual false final false
 void Process(int32_t n) ;

/// @brief Method PrepareForNextCertificate addr 0x27efd34 size 0x200 virtual false final false
 void PrepareForNextCertificate(int32_t n) ;

/// @brief Method WrapUp addr 0x27f0124 size 0x8c virtual false final false
 void WrapUp() ;

/// @brief Method ProcessCertificateExtensions addr 0x27f01ec size 0xf8 virtual false final false
 void ProcessCertificateExtensions(System::Security::Cryptography::X509Certificates::X509ChainElement element) ;

/// @brief Method IsSignedWith addr 0x27f01b0 size 0x3c virtual false final false
 bool IsSignedWith(System::Security::Cryptography::X509Certificates::X509Certificate2 signed, System::Security::Cryptography::AsymmetricAlgorithm pubkey) ;

/// @brief Method GetSubjectKeyIdentifier addr 0x27ef98c size 0xb8 virtual false final false
 ::StringW GetSubjectKeyIdentifier(System::Security::Cryptography::X509Certificates::X509Certificate2 certificate) ;

/// @brief Method GetAuthorityKeyIdentifier addr 0x27ef8f4 size 0x98 virtual false final false
static ::StringW GetAuthorityKeyIdentifier(System::Security::Cryptography::X509Certificates::X509Certificate2 certificate) ;

/// @brief Method GetAuthorityKeyIdentifier addr 0x27f0440 size 0x8c virtual false final false
static ::StringW GetAuthorityKeyIdentifier(Mono::Security::X509::X509Crl crl) ;

/// @brief Method GetAuthorityKeyIdentifier addr 0x27f02e4 size 0x15c virtual false final false
static ::StringW GetAuthorityKeyIdentifier(Mono::Security::X509::X509Extension ext) ;

/// @brief Method CheckRevocationOnChain addr 0x27eff34 size 0x1f0 virtual false final false
 void CheckRevocationOnChain(System::Security::Cryptography::X509Certificates::X509ChainStatusFlags flag) ;

/// @brief Method CheckRevocation addr 0x27f04cc size 0xcc virtual false final false
 System::Security::Cryptography::X509Certificates::X509ChainStatusFlags CheckRevocation(System::Security::Cryptography::X509Certificates::X509Certificate2 certificate, int32_t ca, bool online) ;

/// @brief Method CheckRevocation addr 0x27f0598 size 0x1d8 virtual false final false
 System::Security::Cryptography::X509Certificates::X509ChainStatusFlags CheckRevocation(System::Security::Cryptography::X509Certificates::X509Certificate2 certificate, System::Security::Cryptography::X509Certificates::X509Certificate2 ca_cert, bool online) ;

/// @brief Method CheckCrls addr 0x27f0f3c size 0x394 virtual false final false
static Mono::Security::X509::X509Crl CheckCrls(::StringW subject, ::StringW ski, Mono::Security::X509::X509Store store) ;

/// @brief Method FindCrl addr 0x27f0770 size 0x174 virtual false final false
 Mono::Security::X509::X509Crl FindCrl(System::Security::Cryptography::X509Certificates::X509Certificate2 caCertificate) ;

/// @brief Method ProcessCrlExtensions addr 0x27f0bf4 size 0x348 virtual false final false
 bool ProcessCrlExtensions(Mono::Security::X509::X509Crl crl) ;

/// @brief Method ProcessCrlEntryExtensions addr 0x27f08e4 size 0x310 virtual false final false
 bool ProcessCrlEntryExtensions(Mono::Security::X509::Mono__Security__X509__X509Crl__X509CrlEntry entry) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Security::Cryptography::X509Certificates
NEED_NO_BOX(System::Security::Cryptography::X509Certificates::X509ChainImplMono);
DEFINE_IL2CPP_ARG_TYPE(System::Security::Cryptography::X509Certificates::X509ChainImplMono, "System.Security.Cryptography.X509Certificates", "X509ChainImplMono");
