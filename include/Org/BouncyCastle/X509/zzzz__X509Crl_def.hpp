#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/X509/zzzz__X509ExtensionBase_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Asn1::X509 {
class X509Name;
}
namespace Org::BouncyCastle::Utilities::Date {
class DateTimeObject;
}
namespace Org::BouncyCastle::Crypto {
class IVerifierFactory;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::Asn1::X509 {
class X509Extensions;
}
namespace System {
struct DateTime;
}
namespace Org::BouncyCastle::Utilities::Collections {
class ISet;
}
namespace Org::BouncyCastle::X509 {
class X509CrlEntry;
}
namespace Org::BouncyCastle::X509 {
class X509Certificate;
}
namespace Org::BouncyCastle::Crypto {
class IVerifierFactoryProvider;
}
namespace Org::BouncyCastle::Crypto {
class AsymmetricKeyParameter;
}
namespace Org::BouncyCastle::Asn1::X509 {
class CertificateList;
}
// Forward declare root types
namespace Org::BouncyCastle::X509 {
class X509Crl;
}
// Type: Org.BouncyCastle.X509::X509Crl
namespace Org::BouncyCastle::X509 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1606))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1864))
// CS Name: Org.BouncyCastle.X509.X509Crl
class CORDL_TYPE X509Crl : public Org::BouncyCastle::X509::X509ExtensionBase {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~X509Crl() = default;

// Ctor Parameters [CppParam { name: "", ty: "X509Crl", modifiers: " const&", def_value: None }]
constexpr X509Crl(X509Crl const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "X509Crl", modifiers: "&&", def_value: None }]
constexpr X509Crl(X509Crl&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit X509Crl(void* ptr) noexcept : Org::BouncyCastle::X509::X509ExtensionBase(ptr) {
}


  constexpr X509Crl& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr X509Crl& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr X509Crl& operator=(X509Crl&& o) noexcept = default;
  constexpr X509Crl& operator=(X509Crl const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Asn1::X509::CertificateList __declspec(property(get=__get_c, put=__set_c))  c;

constexpr void __set_c(Org::BouncyCastle::Asn1::X509::CertificateList value) ;

constexpr Org::BouncyCastle::Asn1::X509::CertificateList __get_c() const;

 ::StringW __declspec(property(get=__get_sigAlgName, put=__set_sigAlgName))  sigAlgName;

constexpr void __set_sigAlgName(::StringW value) ;

constexpr ::StringW __get_sigAlgName() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_sigAlgParams, put=__set_sigAlgParams))  sigAlgParams;

constexpr void __set_sigAlgParams(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_sigAlgParams() const;

 bool __declspec(property(get=__get_isIndirect, put=__set_isIndirect))  isIndirect;

constexpr void __set_isIndirect(bool value) ;

constexpr bool __get_isIndirect() const;

 bool __declspec(property(get=__get_hashValueSet, put=__set_hashValueSet))  hashValueSet;

constexpr void __set_hashValueSet(bool value) ;

constexpr bool __get_hashValueSet() const;

 int32_t __declspec(property(get=__get_hashValue, put=__set_hashValue))  hashValue;

constexpr void __set_hashValue(int32_t value) ;

constexpr int32_t __get_hashValue() const;


// Properties

 int32_t __declspec(property(get=get_Version))  Version;

 Org::BouncyCastle::Asn1::X509::X509Name __declspec(property(get=get_IssuerDN))  IssuerDN;

 System::DateTime __declspec(property(get=get_ThisUpdate))  ThisUpdate;

 Org::BouncyCastle::Utilities::Date::DateTimeObject __declspec(property(get=get_NextUpdate))  NextUpdate;

 ::StringW __declspec(property(get=get_SigAlgName))  SigAlgName;

 ::StringW __declspec(property(get=get_SigAlgOid))  SigAlgOid;

 bool __declspec(property(get=get_IsIndirectCrl))  IsIndirectCrl;


// Methods

static Org::BouncyCastle::X509::X509Crl New_ctor(Org::BouncyCastle::Asn1::X509::CertificateList c) ;

/// @brief Method .ctor addr 0x10f0e7c size 0x1bc virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::X509::CertificateList c) ;

/// @brief Method GetX509Extensions addr 0x10f1038 size 0x44 virtual true final false
 Org::BouncyCastle::Asn1::X509::X509Extensions GetX509Extensions() ;

/// @brief Method GetEncoded addr 0x10f107c size 0xf8 virtual true final false
 ::ArrayW<uint8_t> GetEncoded() ;

/// @brief Method Verify addr 0x10f1174 size 0x80 virtual true final false
 void Verify(Org::BouncyCastle::Crypto::AsymmetricKeyParameter publicKey) ;

/// @brief Method Verify addr 0x10f11f4 size 0xc8 virtual true final false
 void Verify(Org::BouncyCastle::Crypto::IVerifierFactoryProvider verifierProvider) ;

/// @brief Method CheckSignature addr 0x10f12bc size 0x3ec virtual true final false
 void CheckSignature(Org::BouncyCastle::Crypto::IVerifierFactory verifier) ;

/// @brief Method get_Version addr 0x10f16a8 size 0x1c virtual true final false
 int32_t get_Version() ;

/// @brief Method get_IssuerDN addr 0x10f16c4 size 0x1c virtual true final false
 Org::BouncyCastle::Asn1::X509::X509Name get_IssuerDN() ;

/// @brief Method get_ThisUpdate addr 0x10f16e0 size 0x28 virtual true final false
 System::DateTime get_ThisUpdate() ;

/// @brief Method get_NextUpdate addr 0x10f1708 size 0xa4 virtual true final false
 Org::BouncyCastle::Utilities::Date::DateTimeObject get_NextUpdate() ;

/// @brief Method LoadCrlEntries addr 0x10f17ac size 0x46c virtual false final false
 Org::BouncyCastle::Utilities::Collections::ISet LoadCrlEntries() ;

/// @brief Method GetRevokedCertificate addr 0x10f1c64 size 0x438 virtual true final false
 Org::BouncyCastle::X509::X509CrlEntry GetRevokedCertificate(Org::BouncyCastle::Math::BigInteger serialNumber) ;

/// @brief Method GetRevokedCertificates addr 0x10f209c size 0xb8 virtual true final false
 Org::BouncyCastle::Utilities::Collections::ISet GetRevokedCertificates() ;

/// @brief Method GetTbsCertList addr 0x10f2154 size 0x108 virtual true final false
 ::ArrayW<uint8_t> GetTbsCertList() ;

/// @brief Method GetSignature addr 0x10f225c size 0x1c virtual true final false
 ::ArrayW<uint8_t> GetSignature() ;

/// @brief Method get_SigAlgName addr 0x10f2278 size 0x8 virtual true final false
 ::StringW get_SigAlgName() ;

/// @brief Method get_SigAlgOid addr 0x10f2280 size 0x34 virtual true final false
 ::StringW get_SigAlgOid() ;

/// @brief Method GetSigAlgParams addr 0x10f22b4 size 0x5c virtual true final false
 ::ArrayW<uint8_t> GetSigAlgParams() ;

/// @brief Method Equals addr 0x10f2310 size 0x118 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType other) ;

/// @brief Method GetHashCode addr 0x10f2428 size 0x5c virtual true final false
 int32_t GetHashCode() ;

/// @brief Method ToString addr 0x10f2484 size 0xfe0 virtual true final false
 ::StringW ToString() ;

/// @brief Method IsRevoked addr 0x10f3464 size 0xc4 virtual true final false
 bool IsRevoked(Org::BouncyCastle::X509::X509Certificate cert) ;

/// @brief Method get_IsIndirectCrl addr 0x10f3528 size 0x164 virtual true final false
 bool get_IsIndirectCrl() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::X509
NEED_NO_BOX(Org::BouncyCastle::X509::X509Crl);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::X509::X509Crl, "Org.BouncyCastle.X509", "X509Crl");
