#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/X509/zzzz__X509ExtensionBase_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Crypto {
class AsymmetricKeyParameter;
}
namespace System::Collections {
class IList;
}
namespace Org::BouncyCastle::Asn1 {
class DerBitString;
}
namespace Org::BouncyCastle::Asn1::X509 {
class X509Extensions;
}
namespace Org::BouncyCastle::Asn1::X509 {
class X509CertificateStructure;
}
namespace Org::BouncyCastle::Asn1::X509 {
class BasicConstraints;
}
namespace Org::BouncyCastle::Crypto {
class IVerifierFactory;
}
namespace System {
struct DateTime;
}
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
namespace Org::BouncyCastle::Asn1::X509 {
class X509Name;
}
namespace System::Collections {
class ICollection;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::Crypto {
class IVerifierFactoryProvider;
}
// Forward declare root types
namespace Org::BouncyCastle::X509 {
class X509Certificate;
}
// Type: Org.BouncyCastle.X509::X509Certificate
namespace Org::BouncyCastle::X509 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1606))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1860))
// CS Name: Org.BouncyCastle.X509.X509Certificate
class CORDL_TYPE X509Certificate : public Org::BouncyCastle::X509::X509ExtensionBase {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~X509Certificate() = default;

// Ctor Parameters [CppParam { name: "", ty: "X509Certificate", modifiers: " const&", def_value: None }]
constexpr X509Certificate(X509Certificate const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "X509Certificate", modifiers: "&&", def_value: None }]
constexpr X509Certificate(X509Certificate&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit X509Certificate(void* ptr) noexcept : Org::BouncyCastle::X509::X509ExtensionBase(ptr) {
}


  constexpr X509Certificate& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr X509Certificate& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr X509Certificate& operator=(X509Certificate&& o) noexcept = default;
  constexpr X509Certificate& operator=(X509Certificate const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Asn1::X509::X509CertificateStructure __declspec(property(get=__get_c, put=__set_c))  c;

constexpr void __set_c(Org::BouncyCastle::Asn1::X509::X509CertificateStructure value) ;

constexpr Org::BouncyCastle::Asn1::X509::X509CertificateStructure __get_c() const;

 ::StringW __declspec(property(get=__get_sigAlgName, put=__set_sigAlgName))  sigAlgName;

constexpr void __set_sigAlgName(::StringW value) ;

constexpr ::StringW __get_sigAlgName() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_sigAlgParams, put=__set_sigAlgParams))  sigAlgParams;

constexpr void __set_sigAlgParams(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_sigAlgParams() const;

 Org::BouncyCastle::Asn1::X509::BasicConstraints __declspec(property(get=__get_basicConstraints, put=__set_basicConstraints))  basicConstraints;

constexpr void __set_basicConstraints(Org::BouncyCastle::Asn1::X509::BasicConstraints value) ;

constexpr Org::BouncyCastle::Asn1::X509::BasicConstraints __get_basicConstraints() const;

 ::ArrayW<bool> __declspec(property(get=__get_keyUsage, put=__set_keyUsage))  keyUsage;

constexpr void __set_keyUsage(::ArrayW<bool> value) ;

constexpr ::ArrayW<bool> __get_keyUsage() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get_cacheLock, put=__set_cacheLock))  cacheLock;

constexpr void __set_cacheLock(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get_cacheLock() const;

 Org::BouncyCastle::Crypto::AsymmetricKeyParameter __declspec(property(get=__get_publicKeyValue, put=__set_publicKeyValue))  publicKeyValue;

constexpr void __set_publicKeyValue(Org::BouncyCastle::Crypto::AsymmetricKeyParameter value) ;

constexpr Org::BouncyCastle::Crypto::AsymmetricKeyParameter __get_publicKeyValue() const;

 bool __declspec(property(get=__get_hashValueSet, put=__set_hashValueSet))  hashValueSet;

constexpr void __set_hashValueSet(bool value) ;

constexpr bool __get_hashValueSet() const;

 int32_t __declspec(property(get=__get_hashValue, put=__set_hashValue))  hashValue;

constexpr void __set_hashValue(int32_t value) ;

constexpr int32_t __get_hashValue() const;


// Properties

 Org::BouncyCastle::Asn1::X509::X509CertificateStructure __declspec(property(get=get_CertificateStructure))  CertificateStructure;

 bool __declspec(property(get=get_IsValidNow))  IsValidNow;

 int32_t __declspec(property(get=get_Version))  Version;

 Org::BouncyCastle::Math::BigInteger __declspec(property(get=get_SerialNumber))  SerialNumber;

 Org::BouncyCastle::Asn1::X509::X509Name __declspec(property(get=get_IssuerDN))  IssuerDN;

 Org::BouncyCastle::Asn1::X509::X509Name __declspec(property(get=get_SubjectDN))  SubjectDN;

 System::DateTime __declspec(property(get=get_NotBefore))  NotBefore;

 System::DateTime __declspec(property(get=get_NotAfter))  NotAfter;

 ::StringW __declspec(property(get=get_SigAlgName))  SigAlgName;

 ::StringW __declspec(property(get=get_SigAlgOid))  SigAlgOid;

 Org::BouncyCastle::Asn1::DerBitString __declspec(property(get=get_IssuerUniqueID))  IssuerUniqueID;

 Org::BouncyCastle::Asn1::DerBitString __declspec(property(get=get_SubjectUniqueID))  SubjectUniqueID;


// Methods

// Ctor Parameters []
explicit X509Certificate() ;

/// @brief Method .ctor addr 0x10ece20 size 0x68 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "c", ty: "Org::BouncyCastle::Asn1::X509::X509CertificateStructure", modifiers: "", def_value: None }]
explicit X509Certificate(Org::BouncyCastle::Asn1::X509::X509CertificateStructure c) ;

/// @brief Method .ctor addr 0x10ece88 size 0x530 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::X509::X509CertificateStructure c) ;

/// @brief Method get_CertificateStructure addr 0x10ed69c size 0x8 virtual true final false
 Org::BouncyCastle::Asn1::X509::X509CertificateStructure get_CertificateStructure() ;

/// @brief Method get_IsValidNow addr 0x10ed6a4 size 0x6c virtual true final false
 bool get_IsValidNow() ;

/// @brief Method IsValid addr 0x10ed710 size 0xd0 virtual true final false
 bool IsValid(System::DateTime time) ;

/// @brief Method CheckValidity addr 0x10ed7e0 size 0x6c virtual true final false
 void CheckValidity() ;

/// @brief Method CheckValidity addr 0x10ed84c size 0x1cc virtual true final false
 void CheckValidity(System::DateTime time) ;

/// @brief Method get_Version addr 0x10eda18 size 0x1c virtual true final false
 int32_t get_Version() ;

/// @brief Method get_SerialNumber addr 0x10eda34 size 0x28 virtual true final false
 Org::BouncyCastle::Math::BigInteger get_SerialNumber() ;

/// @brief Method get_IssuerDN addr 0x10eda5c size 0x1c virtual true final false
 Org::BouncyCastle::Asn1::X509::X509Name get_IssuerDN() ;

/// @brief Method get_SubjectDN addr 0x10eda78 size 0x1c virtual true final false
 Org::BouncyCastle::Asn1::X509::X509Name get_SubjectDN() ;

/// @brief Method get_NotBefore addr 0x10eda94 size 0x28 virtual true final false
 System::DateTime get_NotBefore() ;

/// @brief Method get_NotAfter addr 0x10edabc size 0x28 virtual true final false
 System::DateTime get_NotAfter() ;

/// @brief Method GetTbsCertificate addr 0x10edae4 size 0x24 virtual true final false
 ::ArrayW<uint8_t> GetTbsCertificate() ;

/// @brief Method GetSignature addr 0x10edb08 size 0x1c virtual true final false
 ::ArrayW<uint8_t> GetSignature() ;

/// @brief Method get_SigAlgName addr 0x10edb24 size 0x8 virtual true final false
 ::StringW get_SigAlgName() ;

/// @brief Method get_SigAlgOid addr 0x10edb2c size 0x34 virtual true final false
 ::StringW get_SigAlgOid() ;

/// @brief Method GetSigAlgParams addr 0x10edb60 size 0x5c virtual true final false
 ::ArrayW<uint8_t> GetSigAlgParams() ;

/// @brief Method get_IssuerUniqueID addr 0x10edbbc size 0x24 virtual true final false
 Org::BouncyCastle::Asn1::DerBitString get_IssuerUniqueID() ;

/// @brief Method get_SubjectUniqueID addr 0x10edbe0 size 0x24 virtual true final false
 Org::BouncyCastle::Asn1::DerBitString get_SubjectUniqueID() ;

/// @brief Method GetKeyUsage addr 0x10edc04 size 0x5c virtual true final false
 ::ArrayW<bool> GetKeyUsage() ;

/// @brief Method GetExtendedKeyUsage addr 0x10edc60 size 0x4d4 virtual true final false
 System::Collections::IList GetExtendedKeyUsage() ;

/// @brief Method GetBasicConstraints addr 0x10ee134 size 0x68 virtual true final false
 int32_t GetBasicConstraints() ;

/// @brief Method GetSubjectAlternativeNames addr 0x10ee19c size 0x54 virtual true final false
 System::Collections::ICollection GetSubjectAlternativeNames() ;

/// @brief Method GetIssuerAlternativeNames addr 0x10ee1f0 size 0x54 virtual true final false
 System::Collections::ICollection GetIssuerAlternativeNames() ;

/// @brief Method GetAlternativeNames addr 0x10ee244 size 0x2dc virtual true final false
 System::Collections::ICollection GetAlternativeNames(::StringW oid) ;

/// @brief Method GetX509Extensions addr 0x10ee520 size 0x44 virtual true final false
 Org::BouncyCastle::Asn1::X509::X509Extensions GetX509Extensions() ;

/// @brief Method GetPublicKey addr 0x10ee564 size 0x94 virtual true final false
 Org::BouncyCastle::Crypto::AsymmetricKeyParameter GetPublicKey() ;

/// @brief Method GetEncoded addr 0x10ee5f8 size 0x1c virtual true final false
 ::ArrayW<uint8_t> GetEncoded() ;

/// @brief Method Equals addr 0x10ee614 size 0x118 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType other) ;

/// @brief Method GetHashCode addr 0x10ee72c size 0x5c virtual true final false
 int32_t GetHashCode() ;

/// @brief Method ToString addr 0x10ee788 size 0xd48 virtual true final false
 ::StringW ToString() ;

/// @brief Method Verify addr 0x10ef4d0 size 0x90 virtual true final false
 void Verify(Org::BouncyCastle::Crypto::AsymmetricKeyParameter key) ;

/// @brief Method Verify addr 0x10ef560 size 0xc8 virtual true final false
 void Verify(Org::BouncyCastle::Crypto::IVerifierFactoryProvider verifierProvider) ;

/// @brief Method CheckSignature addr 0x10ef628 size 0x3e4 virtual true final false
 void CheckSignature(Org::BouncyCastle::Crypto::IVerifierFactory verifier) ;

/// @brief Method IsAlgIDEqual addr 0x10efa0c size 0x14c virtual false final false
static bool IsAlgIDEqual(Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier id1, Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier id2) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::X509
NEED_NO_BOX(Org::BouncyCastle::X509::X509Certificate);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::X509::X509Certificate, "Org.BouncyCastle.X509", "X509Certificate");
