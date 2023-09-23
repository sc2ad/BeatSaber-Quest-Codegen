#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Crypto {
class AsymmetricKeyParameter;
}
namespace Org::BouncyCastle::Asn1::X509 {
class X509Name;
}
namespace Org::BouncyCastle::X509 {
class X509Certificate;
}
namespace Org::BouncyCastle::Asn1::X509 {
class NameConstraints;
}
// Forward declare root types
namespace Org::BouncyCastle::Pkix {
class TrustAnchor;
}
// Type: Org.BouncyCastle.Pkix::TrustAnchor
namespace Org::BouncyCastle::Pkix {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1732))
// CS Name: Org.BouncyCastle.Pkix.TrustAnchor
class CORDL_TYPE TrustAnchor : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~TrustAnchor() = default;

// Ctor Parameters [CppParam { name: "", ty: "TrustAnchor", modifiers: " const&", def_value: None }]
constexpr TrustAnchor(TrustAnchor const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TrustAnchor", modifiers: "&&", def_value: None }]
constexpr TrustAnchor(TrustAnchor&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TrustAnchor(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr TrustAnchor& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TrustAnchor& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TrustAnchor& operator=(TrustAnchor&& o) noexcept = default;
  constexpr TrustAnchor& operator=(TrustAnchor const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Crypto::AsymmetricKeyParameter __declspec(property(get=__get_pubKey, put=__set_pubKey))  pubKey;

constexpr void __set_pubKey(Org::BouncyCastle::Crypto::AsymmetricKeyParameter value) ;

constexpr Org::BouncyCastle::Crypto::AsymmetricKeyParameter __get_pubKey() const;

 ::StringW __declspec(property(get=__get_caName, put=__set_caName))  caName;

constexpr void __set_caName(::StringW value) ;

constexpr ::StringW __get_caName() const;

 Org::BouncyCastle::Asn1::X509::X509Name __declspec(property(get=__get_caPrincipal, put=__set_caPrincipal))  caPrincipal;

constexpr void __set_caPrincipal(Org::BouncyCastle::Asn1::X509::X509Name value) ;

constexpr Org::BouncyCastle::Asn1::X509::X509Name __get_caPrincipal() const;

 Org::BouncyCastle::X509::X509Certificate __declspec(property(get=__get_trustedCert, put=__set_trustedCert))  trustedCert;

constexpr void __set_trustedCert(Org::BouncyCastle::X509::X509Certificate value) ;

constexpr Org::BouncyCastle::X509::X509Certificate __get_trustedCert() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_ncBytes, put=__set_ncBytes))  ncBytes;

constexpr void __set_ncBytes(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_ncBytes() const;

 Org::BouncyCastle::Asn1::X509::NameConstraints __declspec(property(get=__get_nc, put=__set_nc))  nc;

constexpr void __set_nc(Org::BouncyCastle::Asn1::X509::NameConstraints value) ;

constexpr Org::BouncyCastle::Asn1::X509::NameConstraints __get_nc() const;


// Properties

 Org::BouncyCastle::X509::X509Certificate __declspec(property(get=get_TrustedCert))  TrustedCert;

 Org::BouncyCastle::Asn1::X509::X509Name __declspec(property(get=get_CA))  CA;

 ::StringW __declspec(property(get=get_CAName))  CAName;

 Org::BouncyCastle::Crypto::AsymmetricKeyParameter __declspec(property(get=get_CAPublicKey))  CAPublicKey;

 ::ArrayW<uint8_t> __declspec(property(get=get_GetNameConstraints))  GetNameConstraints;


// Methods

// Ctor Parameters [CppParam { name: "trustedCert", ty: "Org::BouncyCastle::X509::X509Certificate", modifiers: "", def_value: None }, CppParam { name: "nameConstraints", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
explicit TrustAnchor(Org::BouncyCastle::X509::X509Certificate trustedCert, ::ArrayW<uint8_t> nameConstraints) ;

/// @brief Method .ctor addr 0x109122c size 0x88 virtual false final false
 void _ctor(Org::BouncyCastle::X509::X509Certificate trustedCert, ::ArrayW<uint8_t> nameConstraints) ;

// Ctor Parameters [CppParam { name: "caPrincipal", ty: "Org::BouncyCastle::Asn1::X509::X509Name", modifiers: "", def_value: None }, CppParam { name: "pubKey", ty: "Org::BouncyCastle::Crypto::AsymmetricKeyParameter", modifiers: "", def_value: None }, CppParam { name: "nameConstraints", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
explicit TrustAnchor(Org::BouncyCastle::Asn1::X509::X509Name caPrincipal, Org::BouncyCastle::Crypto::AsymmetricKeyParameter pubKey, ::ArrayW<uint8_t> nameConstraints) ;

/// @brief Method .ctor addr 0x1091370 size 0xcc virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::X509::X509Name caPrincipal, Org::BouncyCastle::Crypto::AsymmetricKeyParameter pubKey, ::ArrayW<uint8_t> nameConstraints) ;

// Ctor Parameters [CppParam { name: "caName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "pubKey", ty: "Org::BouncyCastle::Crypto::AsymmetricKeyParameter", modifiers: "", def_value: None }, CppParam { name: "nameConstraints", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
explicit TrustAnchor(::StringW caName, Org::BouncyCastle::Crypto::AsymmetricKeyParameter pubKey, ::ArrayW<uint8_t> nameConstraints) ;

/// @brief Method .ctor addr 0x109143c size 0x148 virtual false final false
 void _ctor(::StringW caName, Org::BouncyCastle::Crypto::AsymmetricKeyParameter pubKey, ::ArrayW<uint8_t> nameConstraints) ;

/// @brief Method get_TrustedCert addr 0x1091584 size 0x8 virtual false final false
 Org::BouncyCastle::X509::X509Certificate get_TrustedCert() ;

/// @brief Method get_CA addr 0x109158c size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::X509::X509Name get_CA() ;

/// @brief Method get_CAName addr 0x1091594 size 0x8 virtual false final false
 ::StringW get_CAName() ;

/// @brief Method get_CAPublicKey addr 0x109159c size 0x8 virtual false final false
 Org::BouncyCastle::Crypto::AsymmetricKeyParameter get_CAPublicKey() ;

/// @brief Method setNameConstraints addr 0x10912b4 size 0xbc virtual false final false
 void setNameConstraints(::ArrayW<uint8_t> bytes) ;

/// @brief Method get_GetNameConstraints addr 0x10915a4 size 0x5c virtual false final false
 ::ArrayW<uint8_t> get_GetNameConstraints() ;

/// @brief Method ToString addr 0x1091600 size 0x1e8 virtual true final false
 ::StringW ToString() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Pkix
NEED_NO_BOX(Org::BouncyCastle::Pkix::TrustAnchor);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Pkix::TrustAnchor, "Org.BouncyCastle.Pkix", "TrustAnchor");
