#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace Org::BouncyCastle::X509 {
class X509Certificate;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace Org::BouncyCastle::Asn1::X509 {
class SubjectPublicKeyInfo;
}
namespace Org::BouncyCastle::Utilities::Collections {
class ISet;
}
namespace Org::BouncyCastle::Asn1::X509 {
class X509Name;
}
namespace Org::BouncyCastle::X509::Store {
class IX509Selector;
}
namespace Org::BouncyCastle::Utilities::Date {
class DateTimeObject;
}
namespace System {
class ICloneable;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
// Forward declare root types
namespace Org::BouncyCastle::X509::Store {
class X509CertStoreSelector;
}
// Type: Org.BouncyCastle.X509.Store::X509CertStoreSelector
namespace Org::BouncyCastle::X509::Store {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(678))
// CS Name: Org.BouncyCastle.X509.Store.X509CertStoreSelector
class CORDL_TYPE X509CertStoreSelector : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to Org::BouncyCastle::X509::Store::IX509Selector
constexpr operator  Org::BouncyCastle::X509::Store::IX509Selector() const noexcept;

/// @brief Convert operator to System::ICloneable
constexpr operator  System::ICloneable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x88};

virtual ~X509CertStoreSelector() = default;

// Ctor Parameters [CppParam { name: "", ty: "X509CertStoreSelector", modifiers: " const&", def_value: None }]
constexpr X509CertStoreSelector(X509CertStoreSelector const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "X509CertStoreSelector", modifiers: "&&", def_value: None }]
constexpr X509CertStoreSelector(X509CertStoreSelector&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit X509CertStoreSelector(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr X509CertStoreSelector& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr X509CertStoreSelector& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr X509CertStoreSelector& operator=(X509CertStoreSelector&& o) noexcept = default;
  constexpr X509CertStoreSelector& operator=(X509CertStoreSelector const& o) noexcept = default;
                


// Fields

 ::ArrayW<uint8_t> __declspec(property(get=__get_authorityKeyIdentifier, put=__set_authorityKeyIdentifier))  authorityKeyIdentifier;

constexpr void __set_authorityKeyIdentifier(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_authorityKeyIdentifier() const;

 int32_t __declspec(property(get=__get_basicConstraints, put=__set_basicConstraints))  basicConstraints;

constexpr void __set_basicConstraints(int32_t value) ;

constexpr int32_t __get_basicConstraints() const;

 Org::BouncyCastle::X509::X509Certificate __declspec(property(get=__get_certificate, put=__set_certificate))  certificate;

constexpr void __set_certificate(Org::BouncyCastle::X509::X509Certificate value) ;

constexpr Org::BouncyCastle::X509::X509Certificate __get_certificate() const;

 Org::BouncyCastle::Utilities::Date::DateTimeObject __declspec(property(get=__get_certificateValid, put=__set_certificateValid))  certificateValid;

constexpr void __set_certificateValid(Org::BouncyCastle::Utilities::Date::DateTimeObject value) ;

constexpr Org::BouncyCastle::Utilities::Date::DateTimeObject __get_certificateValid() const;

 Org::BouncyCastle::Utilities::Collections::ISet __declspec(property(get=__get_extendedKeyUsage, put=__set_extendedKeyUsage))  extendedKeyUsage;

constexpr void __set_extendedKeyUsage(Org::BouncyCastle::Utilities::Collections::ISet value) ;

constexpr Org::BouncyCastle::Utilities::Collections::ISet __get_extendedKeyUsage() const;

 bool __declspec(property(get=__get_ignoreX509NameOrdering, put=__set_ignoreX509NameOrdering))  ignoreX509NameOrdering;

constexpr void __set_ignoreX509NameOrdering(bool value) ;

constexpr bool __get_ignoreX509NameOrdering() const;

 Org::BouncyCastle::Asn1::X509::X509Name __declspec(property(get=__get_issuer, put=__set_issuer))  issuer;

constexpr void __set_issuer(Org::BouncyCastle::Asn1::X509::X509Name value) ;

constexpr Org::BouncyCastle::Asn1::X509::X509Name __get_issuer() const;

 ::ArrayW<bool> __declspec(property(get=__get_keyUsage, put=__set_keyUsage))  keyUsage;

constexpr void __set_keyUsage(::ArrayW<bool> value) ;

constexpr ::ArrayW<bool> __get_keyUsage() const;

 Org::BouncyCastle::Utilities::Collections::ISet __declspec(property(get=__get_policy, put=__set_policy))  policy;

constexpr void __set_policy(Org::BouncyCastle::Utilities::Collections::ISet value) ;

constexpr Org::BouncyCastle::Utilities::Collections::ISet __get_policy() const;

 Org::BouncyCastle::Utilities::Date::DateTimeObject __declspec(property(get=__get_privateKeyValid, put=__set_privateKeyValid))  privateKeyValid;

constexpr void __set_privateKeyValid(Org::BouncyCastle::Utilities::Date::DateTimeObject value) ;

constexpr Org::BouncyCastle::Utilities::Date::DateTimeObject __get_privateKeyValid() const;

 Org::BouncyCastle::Math::BigInteger __declspec(property(get=__get_serialNumber, put=__set_serialNumber))  serialNumber;

constexpr void __set_serialNumber(Org::BouncyCastle::Math::BigInteger value) ;

constexpr Org::BouncyCastle::Math::BigInteger __get_serialNumber() const;

 Org::BouncyCastle::Asn1::X509::X509Name __declspec(property(get=__get_subject, put=__set_subject))  subject;

constexpr void __set_subject(Org::BouncyCastle::Asn1::X509::X509Name value) ;

constexpr Org::BouncyCastle::Asn1::X509::X509Name __get_subject() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_subjectKeyIdentifier, put=__set_subjectKeyIdentifier))  subjectKeyIdentifier;

constexpr void __set_subjectKeyIdentifier(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_subjectKeyIdentifier() const;

 Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo __declspec(property(get=__get_subjectPublicKey, put=__set_subjectPublicKey))  subjectPublicKey;

constexpr void __set_subjectPublicKey(Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo value) ;

constexpr Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo __get_subjectPublicKey() const;

 Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_subjectPublicKeyAlgID, put=__set_subjectPublicKeyAlgID))  subjectPublicKeyAlgID;

constexpr void __set_subjectPublicKeyAlgID(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

constexpr Org::BouncyCastle::Asn1::DerObjectIdentifier __get_subjectPublicKeyAlgID() const;


// Properties

 ::ArrayW<uint8_t> __declspec(property(get=get_AuthorityKeyIdentifier, put=set_AuthorityKeyIdentifier))  AuthorityKeyIdentifier;

 int32_t __declspec(property(get=get_BasicConstraints, put=set_BasicConstraints))  BasicConstraints;

 Org::BouncyCastle::X509::X509Certificate __declspec(property(get=get_Certificate, put=set_Certificate))  Certificate;

 Org::BouncyCastle::Utilities::Date::DateTimeObject __declspec(property(get=get_CertificateValid, put=set_CertificateValid))  CertificateValid;

 Org::BouncyCastle::Utilities::Collections::ISet __declspec(property(get=get_ExtendedKeyUsage, put=set_ExtendedKeyUsage))  ExtendedKeyUsage;

 bool __declspec(property(get=get_IgnoreX509NameOrdering, put=set_IgnoreX509NameOrdering))  IgnoreX509NameOrdering;

 Org::BouncyCastle::Asn1::X509::X509Name __declspec(property(get=get_Issuer, put=set_Issuer))  Issuer;

 ::StringW __declspec(property(get=get_IssuerAsString))  IssuerAsString;

 ::ArrayW<bool> __declspec(property(get=get_KeyUsage, put=set_KeyUsage))  KeyUsage;

 Org::BouncyCastle::Utilities::Collections::ISet __declspec(property(get=get_Policy, put=set_Policy))  Policy;

 Org::BouncyCastle::Utilities::Date::DateTimeObject __declspec(property(get=get_PrivateKeyValid, put=set_PrivateKeyValid))  PrivateKeyValid;

 Org::BouncyCastle::Math::BigInteger __declspec(property(get=get_SerialNumber, put=set_SerialNumber))  SerialNumber;

 Org::BouncyCastle::Asn1::X509::X509Name __declspec(property(get=get_Subject, put=set_Subject))  Subject;

 ::StringW __declspec(property(get=get_SubjectAsString))  SubjectAsString;

 ::ArrayW<uint8_t> __declspec(property(get=get_SubjectKeyIdentifier, put=set_SubjectKeyIdentifier))  SubjectKeyIdentifier;

 Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo __declspec(property(get=get_SubjectPublicKey, put=set_SubjectPublicKey))  SubjectPublicKey;

 Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=get_SubjectPublicKeyAlgID, put=set_SubjectPublicKeyAlgID))  SubjectPublicKeyAlgID;


// Methods

static Org::BouncyCastle::X509::Store::X509CertStoreSelector New_ctor() ;

/// @brief Method .ctor addr 0x117a3fc size 0x10 virtual false final false
 void _ctor() ;

static Org::BouncyCastle::X509::Store::X509CertStoreSelector New_ctor(Org::BouncyCastle::X509::Store::X509CertStoreSelector o) ;

/// @brief Method .ctor addr 0x117a40c size 0xa8 virtual false final false
 void _ctor(Org::BouncyCastle::X509::Store::X509CertStoreSelector o) ;

/// @brief Method Clone addr 0x117a584 size 0x60 virtual true final false
 ::bs_hook::Il2CppWrapperType Clone() ;

/// @brief Method get_AuthorityKeyIdentifier addr 0x117a4b4 size 0x5c virtual false final false
 ::ArrayW<uint8_t> get_AuthorityKeyIdentifier() ;

/// @brief Method set_AuthorityKeyIdentifier addr 0x117a5e4 size 0x6c virtual false final false
 void set_AuthorityKeyIdentifier(::ArrayW<uint8_t> value) ;

/// @brief Method get_BasicConstraints addr 0x117a650 size 0x8 virtual false final false
 int32_t get_BasicConstraints() ;

/// @brief Method set_BasicConstraints addr 0x117a658 size 0x80 virtual false final false
 void set_BasicConstraints(int32_t value) ;

/// @brief Method get_Certificate addr 0x117a6d8 size 0x8 virtual false final false
 Org::BouncyCastle::X509::X509Certificate get_Certificate() ;

/// @brief Method set_Certificate addr 0x117a6e0 size 0x8 virtual false final false
 void set_Certificate(Org::BouncyCastle::X509::X509Certificate value) ;

/// @brief Method get_CertificateValid addr 0x117a6e8 size 0x8 virtual false final false
 Org::BouncyCastle::Utilities::Date::DateTimeObject get_CertificateValid() ;

/// @brief Method set_CertificateValid addr 0x117a6f0 size 0x8 virtual false final false
 void set_CertificateValid(Org::BouncyCastle::Utilities::Date::DateTimeObject value) ;

/// @brief Method get_ExtendedKeyUsage addr 0x117a510 size 0x8 virtual false final false
 Org::BouncyCastle::Utilities::Collections::ISet get_ExtendedKeyUsage() ;

/// @brief Method set_ExtendedKeyUsage addr 0x117a768 size 0x1c virtual false final false
 void set_ExtendedKeyUsage(Org::BouncyCastle::Utilities::Collections::ISet value) ;

/// @brief Method get_IgnoreX509NameOrdering addr 0x117a784 size 0x8 virtual false final false
 bool get_IgnoreX509NameOrdering() ;

/// @brief Method set_IgnoreX509NameOrdering addr 0x117a78c size 0xc virtual false final false
 void set_IgnoreX509NameOrdering(bool value) ;

/// @brief Method get_Issuer addr 0x117a798 size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::X509::X509Name get_Issuer() ;

/// @brief Method set_Issuer addr 0x117a7a0 size 0x8 virtual false final false
 void set_Issuer(Org::BouncyCastle::Asn1::X509::X509Name value) ;

/// @brief Method get_IssuerAsString addr 0x117a7a8 size 0x18 virtual false final false
 ::StringW get_IssuerAsString() ;

/// @brief Method get_KeyUsage addr 0x117a518 size 0x8 virtual false final false
 ::ArrayW<bool> get_KeyUsage() ;

/// @brief Method set_KeyUsage addr 0x117a838 size 0x1c virtual false final false
 void set_KeyUsage(::ArrayW<bool> value) ;

/// @brief Method get_Policy addr 0x117a520 size 0x8 virtual false final false
 Org::BouncyCastle::Utilities::Collections::ISet get_Policy() ;

/// @brief Method set_Policy addr 0x117a854 size 0x1c virtual false final false
 void set_Policy(Org::BouncyCastle::Utilities::Collections::ISet value) ;

/// @brief Method get_PrivateKeyValid addr 0x117a870 size 0x8 virtual false final false
 Org::BouncyCastle::Utilities::Date::DateTimeObject get_PrivateKeyValid() ;

/// @brief Method set_PrivateKeyValid addr 0x117a878 size 0x8 virtual false final false
 void set_PrivateKeyValid(Org::BouncyCastle::Utilities::Date::DateTimeObject value) ;

/// @brief Method get_SerialNumber addr 0x117a880 size 0x8 virtual false final false
 Org::BouncyCastle::Math::BigInteger get_SerialNumber() ;

/// @brief Method set_SerialNumber addr 0x117a888 size 0x8 virtual false final false
 void set_SerialNumber(Org::BouncyCastle::Math::BigInteger value) ;

/// @brief Method get_Subject addr 0x117a890 size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::X509::X509Name get_Subject() ;

/// @brief Method set_Subject addr 0x117a898 size 0x8 virtual false final false
 void set_Subject(Org::BouncyCastle::Asn1::X509::X509Name value) ;

/// @brief Method get_SubjectAsString addr 0x117a8a0 size 0x18 virtual false final false
 ::StringW get_SubjectAsString() ;

/// @brief Method get_SubjectKeyIdentifier addr 0x117a528 size 0x5c virtual false final false
 ::ArrayW<uint8_t> get_SubjectKeyIdentifier() ;

/// @brief Method set_SubjectKeyIdentifier addr 0x1178cdc size 0x6c virtual false final false
 void set_SubjectKeyIdentifier(::ArrayW<uint8_t> value) ;

/// @brief Method get_SubjectPublicKey addr 0x117a8b8 size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo get_SubjectPublicKey() ;

/// @brief Method set_SubjectPublicKey addr 0x117a8c0 size 0x8 virtual false final false
 void set_SubjectPublicKey(Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo value) ;

/// @brief Method get_SubjectPublicKeyAlgID addr 0x117a8c8 size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::DerObjectIdentifier get_SubjectPublicKeyAlgID() ;

/// @brief Method set_SubjectPublicKeyAlgID addr 0x117a8d0 size 0x8 virtual false final false
 void set_SubjectPublicKeyAlgID(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

/// @brief Method Match addr 0x117a8d8 size 0xbd0 virtual true final false
 bool Match(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method IssuersMatch addr 0x117b588 size 0x1c virtual false final false
static bool IssuersMatch(Org::BouncyCastle::Asn1::X509::X509Name a, Org::BouncyCastle::Asn1::X509::X509Name b) ;

/// @brief Method CopyBoolArray addr 0x117a7c0 size 0x78 virtual false final false
static ::ArrayW<bool> CopyBoolArray(::ArrayW<bool> b) ;

/// @brief Method CopySet addr 0x117a6f8 size 0x70 virtual false final false
static Org::BouncyCastle::Utilities::Collections::ISet CopySet(Org::BouncyCastle::Utilities::Collections::ISet s) ;

/// @brief Method GetSubjectPublicKey addr 0x117b560 size 0x28 virtual false final false
static Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo GetSubjectPublicKey(Org::BouncyCastle::X509::X509Certificate c) ;

/// @brief Method MatchExtension addr 0x117b4a8 size 0xb8 virtual false final false
static bool MatchExtension(::ArrayW<uint8_t> b, Org::BouncyCastle::X509::X509Certificate c, Org::BouncyCastle::Asn1::DerObjectIdentifier oid) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::X509::Store
NEED_NO_BOX(Org::BouncyCastle::X509::Store::X509CertStoreSelector);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::X509::Store::X509CertStoreSelector, "Org.BouncyCastle.X509.Store", "X509CertStoreSelector");
