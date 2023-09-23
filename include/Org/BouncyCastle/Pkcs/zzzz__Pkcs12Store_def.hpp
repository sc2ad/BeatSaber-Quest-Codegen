#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Crypto {
class AsymmetricKeyParameter;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Collections {
class ICollection;
}
namespace System::Collections {
class IDictionary;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::IO {
class Stream;
}
namespace Org::BouncyCastle::Pkcs {
class X509CertificateEntry;
}
namespace Org::BouncyCastle::Asn1::X509 {
class SubjectKeyIdentifier;
}
namespace Org::BouncyCastle::Pkcs {
class AsymmetricKeyEntry;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace Org::BouncyCastle::X509 {
class X509Certificate;
}
namespace Org::BouncyCastle::Asn1::Pkcs {
class PrivateKeyInfo;
}
namespace System {
class Type;
}
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
namespace Org::BouncyCastle::Asn1::Pkcs {
class EncryptedPrivateKeyInfo;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Set;
}
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
// Forward declare root types
namespace Org::BouncyCastle::Pkcs {
class Org__BouncyCastle__Pkcs__Pkcs12Store__CertId;
}
namespace Org::BouncyCastle::Pkcs {
class Org__BouncyCastle__Pkcs__Pkcs12Store__IgnoresCaseHashtable;
}
namespace Org::BouncyCastle::Pkcs {
class Pkcs12Store;
}
// Type: ::CertId
namespace Org::BouncyCastle::Pkcs {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1698))
// CS Name: Org.BouncyCastle.Pkcs.Pkcs12Store::CertId
class CORDL_TYPE Org__BouncyCastle__Pkcs__Pkcs12Store__CertId : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~Org__BouncyCastle__Pkcs__Pkcs12Store__CertId() = default;

// Ctor Parameters [CppParam { name: "", ty: "Org__BouncyCastle__Pkcs__Pkcs12Store__CertId", modifiers: " const&", def_value: None }]
constexpr Org__BouncyCastle__Pkcs__Pkcs12Store__CertId(Org__BouncyCastle__Pkcs__Pkcs12Store__CertId const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Org__BouncyCastle__Pkcs__Pkcs12Store__CertId", modifiers: "&&", def_value: None }]
constexpr Org__BouncyCastle__Pkcs__Pkcs12Store__CertId(Org__BouncyCastle__Pkcs__Pkcs12Store__CertId&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Org__BouncyCastle__Pkcs__Pkcs12Store__CertId(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Org__BouncyCastle__Pkcs__Pkcs12Store__CertId& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Org__BouncyCastle__Pkcs__Pkcs12Store__CertId& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Org__BouncyCastle__Pkcs__Pkcs12Store__CertId& operator=(Org__BouncyCastle__Pkcs__Pkcs12Store__CertId&& o) noexcept = default;
  constexpr Org__BouncyCastle__Pkcs__Pkcs12Store__CertId& operator=(Org__BouncyCastle__Pkcs__Pkcs12Store__CertId const& o) noexcept = default;
                


// Fields

 ::ArrayW<uint8_t> __declspec(property(get=__get_id, put=__set_id))  id;

constexpr void __set_id(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_id() const;


// Properties

 ::ArrayW<uint8_t> __declspec(property(get=get_Id))  Id;


// Methods

// Ctor Parameters [CppParam { name: "pubKey", ty: "Org::BouncyCastle::Crypto::AsymmetricKeyParameter", modifiers: "", def_value: None }]
explicit Org__BouncyCastle__Pkcs__Pkcs12Store__CertId(Org::BouncyCastle::Crypto::AsymmetricKeyParameter pubKey) ;

/// @brief Method .ctor addr 0x10593e8 size 0x44 virtual false final false
 void _ctor(Org::BouncyCastle::Crypto::AsymmetricKeyParameter pubKey) ;

// Ctor Parameters [CppParam { name: "id", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
explicit Org__BouncyCastle__Pkcs__Pkcs12Store__CertId(::ArrayW<uint8_t> id) ;

/// @brief Method .ctor addr 0x105942c size 0x28 virtual false final false
 void _ctor(::ArrayW<uint8_t> id) ;

/// @brief Method get_Id addr 0x1059454 size 0x8 virtual false final false
 ::ArrayW<uint8_t> get_Id() ;

/// @brief Method GetHashCode addr 0x105945c size 0x5c virtual true final false
 int32_t GetHashCode() ;

/// @brief Method Equals addr 0x10594b8 size 0xd8 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Pkcs
// Type: ::IgnoresCaseHashtable
namespace Org::BouncyCastle::Pkcs {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1699))
// CS Name: Org.BouncyCastle.Pkcs.Pkcs12Store::IgnoresCaseHashtable
class CORDL_TYPE Org__BouncyCastle__Pkcs__Pkcs12Store__IgnoresCaseHashtable : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Collections::IEnumerable
constexpr operator  System::Collections::IEnumerable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~Org__BouncyCastle__Pkcs__Pkcs12Store__IgnoresCaseHashtable() = default;

// Ctor Parameters [CppParam { name: "", ty: "Org__BouncyCastle__Pkcs__Pkcs12Store__IgnoresCaseHashtable", modifiers: " const&", def_value: None }]
constexpr Org__BouncyCastle__Pkcs__Pkcs12Store__IgnoresCaseHashtable(Org__BouncyCastle__Pkcs__Pkcs12Store__IgnoresCaseHashtable const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Org__BouncyCastle__Pkcs__Pkcs12Store__IgnoresCaseHashtable", modifiers: "&&", def_value: None }]
constexpr Org__BouncyCastle__Pkcs__Pkcs12Store__IgnoresCaseHashtable(Org__BouncyCastle__Pkcs__Pkcs12Store__IgnoresCaseHashtable&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Org__BouncyCastle__Pkcs__Pkcs12Store__IgnoresCaseHashtable(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Org__BouncyCastle__Pkcs__Pkcs12Store__IgnoresCaseHashtable& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Org__BouncyCastle__Pkcs__Pkcs12Store__IgnoresCaseHashtable& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Org__BouncyCastle__Pkcs__Pkcs12Store__IgnoresCaseHashtable& operator=(Org__BouncyCastle__Pkcs__Pkcs12Store__IgnoresCaseHashtable&& o) noexcept = default;
  constexpr Org__BouncyCastle__Pkcs__Pkcs12Store__IgnoresCaseHashtable& operator=(Org__BouncyCastle__Pkcs__Pkcs12Store__IgnoresCaseHashtable const& o) noexcept = default;
                


// Fields

 System::Collections::IDictionary __declspec(property(get=__get_orig, put=__set_orig))  orig;

constexpr void __set_orig(System::Collections::IDictionary value) ;

constexpr System::Collections::IDictionary __get_orig() const;

 System::Collections::IDictionary __declspec(property(get=__get_keys, put=__set_keys))  keys;

constexpr void __set_keys(System::Collections::IDictionary value) ;

constexpr System::Collections::IDictionary __get_keys() const;


// Properties

 System::Collections::ICollection __declspec(property(get=get_Keys))  Keys;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=get_Item, put=set_Item))  Item;

 System::Collections::ICollection __declspec(property(get=get_Values))  Values;

 int32_t __declspec(property(get=get_Count))  Count;


// Methods

/// @brief Method Clear addr 0x1059590 size 0x108 virtual false final false
 void Clear() ;

/// @brief Method GetEnumerator addr 0x1059698 size 0xa4 virtual true final true
 System::Collections::IEnumerator GetEnumerator() ;

/// @brief Method get_Keys addr 0x105973c size 0xa4 virtual false final false
 System::Collections::ICollection get_Keys() ;

/// @brief Method Remove addr 0x10597e0 size 0x260 virtual false final false
 ::bs_hook::Il2CppWrapperType Remove(::StringW alias) ;

/// @brief Method get_Item addr 0x1059a40 size 0x18c virtual false final false
 ::bs_hook::Il2CppWrapperType get_Item(::StringW alias) ;

/// @brief Method set_Item addr 0x1059bcc size 0x264 virtual false final false
 void set_Item(::StringW alias, ::bs_hook::Il2CppWrapperType value) ;

/// @brief Method get_Values addr 0x1059e30 size 0xa4 virtual false final false
 System::Collections::ICollection get_Values() ;

/// @brief Method get_Count addr 0x1059ed4 size 0xa4 virtual false final false
 int32_t get_Count() ;

// Ctor Parameters []
explicit Org__BouncyCastle__Pkcs__Pkcs12Store__IgnoresCaseHashtable() ;

/// @brief Method .ctor addr 0x1059f78 size 0x70 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Pkcs
// Type: Org.BouncyCastle.Pkcs::Pkcs12Store
namespace Org::BouncyCastle::Pkcs {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1700))
// CS Name: Org.BouncyCastle.Pkcs.Pkcs12Store
class CORDL_TYPE Pkcs12Store : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using IgnoresCaseHashtable = Org::BouncyCastle::Pkcs::Org__BouncyCastle__Pkcs__Pkcs12Store__IgnoresCaseHashtable;

using CertId = Org::BouncyCastle::Pkcs::Org__BouncyCastle__Pkcs__Pkcs12Store__CertId;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x68};

virtual ~Pkcs12Store() = default;

// Ctor Parameters [CppParam { name: "", ty: "Pkcs12Store", modifiers: " const&", def_value: None }]
constexpr Pkcs12Store(Pkcs12Store const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Pkcs12Store", modifiers: "&&", def_value: None }]
constexpr Pkcs12Store(Pkcs12Store&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Pkcs12Store(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Pkcs12Store& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Pkcs12Store& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Pkcs12Store& operator=(Pkcs12Store&& o) noexcept = default;
  constexpr Pkcs12Store& operator=(Pkcs12Store const& o) noexcept = default;
                


// Fields

/// @brief Field IgnoreUselessPasswordProperty offset 0
static constexpr ::ConstString  IgnoreUselessPasswordProperty{u"Org.BouncyCastle.Pkcs12.IgnoreUselessPassword"};

/// @brief Field MinIterations offset 0
static constexpr int32_t  MinIterations{1024};

/// @brief Field SaltSize offset 0
static constexpr int32_t  SaltSize{20};

 Org::BouncyCastle::Pkcs::Org__BouncyCastle__Pkcs__Pkcs12Store__IgnoresCaseHashtable __declspec(property(get=__get_keys, put=__set_keys))  keys;

constexpr void __set_keys(Org::BouncyCastle::Pkcs::Org__BouncyCastle__Pkcs__Pkcs12Store__IgnoresCaseHashtable value) ;

constexpr Org::BouncyCastle::Pkcs::Org__BouncyCastle__Pkcs__Pkcs12Store__IgnoresCaseHashtable __get_keys() const;

 System::Collections::IDictionary __declspec(property(get=__get_localIds, put=__set_localIds))  localIds;

constexpr void __set_localIds(System::Collections::IDictionary value) ;

constexpr System::Collections::IDictionary __get_localIds() const;

 Org::BouncyCastle::Pkcs::Org__BouncyCastle__Pkcs__Pkcs12Store__IgnoresCaseHashtable __declspec(property(get=__get_certs, put=__set_certs))  certs;

constexpr void __set_certs(Org::BouncyCastle::Pkcs::Org__BouncyCastle__Pkcs__Pkcs12Store__IgnoresCaseHashtable value) ;

constexpr Org::BouncyCastle::Pkcs::Org__BouncyCastle__Pkcs__Pkcs12Store__IgnoresCaseHashtable __get_certs() const;

 System::Collections::IDictionary __declspec(property(get=__get_chainCerts, put=__set_chainCerts))  chainCerts;

constexpr void __set_chainCerts(System::Collections::IDictionary value) ;

constexpr System::Collections::IDictionary __get_chainCerts() const;

 System::Collections::IDictionary __declspec(property(get=__get_keyCerts, put=__set_keyCerts))  keyCerts;

constexpr void __set_keyCerts(System::Collections::IDictionary value) ;

constexpr System::Collections::IDictionary __get_keyCerts() const;

 Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_keyAlgorithm, put=__set_keyAlgorithm))  keyAlgorithm;

constexpr void __set_keyAlgorithm(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

constexpr Org::BouncyCastle::Asn1::DerObjectIdentifier __get_keyAlgorithm() const;

 Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_keyPrfAlgorithm, put=__set_keyPrfAlgorithm))  keyPrfAlgorithm;

constexpr void __set_keyPrfAlgorithm(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

constexpr Org::BouncyCastle::Asn1::DerObjectIdentifier __get_keyPrfAlgorithm() const;

 Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_certAlgorithm, put=__set_certAlgorithm))  certAlgorithm;

constexpr void __set_certAlgorithm(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

constexpr Org::BouncyCastle::Asn1::DerObjectIdentifier __get_certAlgorithm() const;

 Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_certPrfAlgorithm, put=__set_certPrfAlgorithm))  certPrfAlgorithm;

constexpr void __set_certPrfAlgorithm(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

constexpr Org::BouncyCastle::Asn1::DerObjectIdentifier __get_certPrfAlgorithm() const;

 bool __declspec(property(get=__get_useDerEncoding, put=__set_useDerEncoding))  useDerEncoding;

constexpr void __set_useDerEncoding(bool value) ;

constexpr bool __get_useDerEncoding() const;

 Org::BouncyCastle::Pkcs::AsymmetricKeyEntry __declspec(property(get=__get_unmarkedKeyEntry, put=__set_unmarkedKeyEntry))  unmarkedKeyEntry;

constexpr void __set_unmarkedKeyEntry(Org::BouncyCastle::Pkcs::AsymmetricKeyEntry value) ;

constexpr Org::BouncyCastle::Pkcs::AsymmetricKeyEntry __get_unmarkedKeyEntry() const;


// Properties

 System::Collections::IEnumerable __declspec(property(get=get_Aliases))  Aliases;

 int32_t __declspec(property(get=get_Count))  Count;


// Methods

/// @brief Method CreateSubjectKeyID addr 0x104f41c size 0x78 virtual false final false
static Org::BouncyCastle::Asn1::X509::SubjectKeyIdentifier CreateSubjectKeyID(Org::BouncyCastle::Crypto::AsymmetricKeyParameter pubKey) ;

// Ctor Parameters [CppParam { name: "keyAlgorithm", ty: "Org::BouncyCastle::Asn1::DerObjectIdentifier", modifiers: "", def_value: None }, CppParam { name: "certAlgorithm", ty: "Org::BouncyCastle::Asn1::DerObjectIdentifier", modifiers: "", def_value: None }, CppParam { name: "useDerEncoding", ty: "bool", modifiers: "", def_value: None }]
explicit Pkcs12Store(Org::BouncyCastle::Asn1::DerObjectIdentifier keyAlgorithm, Org::BouncyCastle::Asn1::DerObjectIdentifier certAlgorithm, bool useDerEncoding) ;

/// @brief Method .ctor addr 0x104f494 size 0x100 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::DerObjectIdentifier keyAlgorithm, Org::BouncyCastle::Asn1::DerObjectIdentifier certAlgorithm, bool useDerEncoding) ;

// Ctor Parameters [CppParam { name: "keyAlgorithm", ty: "Org::BouncyCastle::Asn1::DerObjectIdentifier", modifiers: "", def_value: None }, CppParam { name: "keyPrfAlgorithm", ty: "Org::BouncyCastle::Asn1::DerObjectIdentifier", modifiers: "", def_value: None }, CppParam { name: "certAlgorithm", ty: "Org::BouncyCastle::Asn1::DerObjectIdentifier", modifiers: "", def_value: None }, CppParam { name: "certPrfAlgorithm", ty: "Org::BouncyCastle::Asn1::DerObjectIdentifier", modifiers: "", def_value: None }, CppParam { name: "useDerEncoding", ty: "bool", modifiers: "", def_value: None }]
explicit Pkcs12Store(Org::BouncyCastle::Asn1::DerObjectIdentifier keyAlgorithm, Org::BouncyCastle::Asn1::DerObjectIdentifier keyPrfAlgorithm, Org::BouncyCastle::Asn1::DerObjectIdentifier certAlgorithm, Org::BouncyCastle::Asn1::DerObjectIdentifier certPrfAlgorithm, bool useDerEncoding) ;

/// @brief Method .ctor addr 0x104f594 size 0x110 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::DerObjectIdentifier keyAlgorithm, Org::BouncyCastle::Asn1::DerObjectIdentifier keyPrfAlgorithm, Org::BouncyCastle::Asn1::DerObjectIdentifier certAlgorithm, Org::BouncyCastle::Asn1::DerObjectIdentifier certPrfAlgorithm, bool useDerEncoding) ;

// Ctor Parameters []
explicit Pkcs12Store() ;

/// @brief Method .ctor addr 0x104f6a4 size 0x68 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "input", ty: "System::IO::Stream", modifiers: "", def_value: None }, CppParam { name: "password", ty: "::ArrayW<char16_t>", modifiers: "", def_value: None }]
explicit Pkcs12Store(System::IO::Stream input, ::ArrayW<char16_t> password) ;

/// @brief Method .ctor addr 0x104f70c size 0x30 virtual false final false
 void _ctor(System::IO::Stream input, ::ArrayW<char16_t> password) ;

/// @brief Method LoadKeyBag addr 0x10511a8 size 0x8f0 virtual true final false
 void LoadKeyBag(Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo privKeyInfo, Org::BouncyCastle::Asn1::Asn1Set bagAttributes) ;

/// @brief Method LoadPkcs8ShroudedKeyBag addr 0x1051a98 size 0x4c virtual true final false
 void LoadPkcs8ShroudedKeyBag(Org::BouncyCastle::Asn1::Pkcs::EncryptedPrivateKeyInfo encPrivKeyInfo, Org::BouncyCastle::Asn1::Asn1Set bagAttributes, ::ArrayW<char16_t> password, bool wrongPkcs12Zero) ;

/// @brief Method Load addr 0x104f73c size 0x1a6c virtual false final false
 void Load(System::IO::Stream input, ::ArrayW<char16_t> password) ;

/// @brief Method GetKey addr 0x1051ebc size 0xe0 virtual false final false
 Org::BouncyCastle::Pkcs::AsymmetricKeyEntry GetKey(::StringW alias) ;

/// @brief Method IsCertificateEntry addr 0x1051f9c size 0xa0 virtual false final false
 bool IsCertificateEntry(::StringW alias) ;

/// @brief Method IsKeyEntry addr 0x105203c size 0x78 virtual false final false
 bool IsKeyEntry(::StringW alias) ;

/// @brief Method GetAliasesTable addr 0x10520b4 size 0x78c virtual false final false
 System::Collections::IDictionary GetAliasesTable() ;

/// @brief Method get_Aliases addr 0x1052840 size 0xec virtual false final false
 System::Collections::IEnumerable get_Aliases() ;

/// @brief Method ContainsAlias addr 0x105292c size 0x58 virtual false final false
 bool ContainsAlias(::StringW alias) ;

/// @brief Method GetCertificate addr 0x1052984 size 0x250 virtual false final false
 Org::BouncyCastle::Pkcs::X509CertificateEntry GetCertificate(::StringW alias) ;

/// @brief Method GetCertificateAlias addr 0x1052bd4 size 0x76c virtual false final false
 ::StringW GetCertificateAlias(Org::BouncyCastle::X509::X509Certificate cert) ;

/// @brief Method GetCertificateChain addr 0x1053340 size 0xabc virtual false final false
 ::ArrayW<Org::BouncyCastle::Pkcs::X509CertificateEntry> GetCertificateChain(::StringW alias) ;

/// @brief Method SetCertificateEntry addr 0x1053dfc size 0x228 virtual false final false
 void SetCertificateEntry(::StringW alias, Org::BouncyCastle::Pkcs::X509CertificateEntry certEntry) ;

/// @brief Method SetKeyEntry addr 0x1054024 size 0x28c virtual false final false
 void SetKeyEntry(::StringW alias, Org::BouncyCastle::Pkcs::AsymmetricKeyEntry keyEntry, ::ArrayW<Org::BouncyCastle::Pkcs::X509CertificateEntry> chain) ;

/// @brief Method DeleteEntry addr 0x10542b0 size 0x574 virtual false final false
 void DeleteEntry(::StringW alias) ;

/// @brief Method IsEntryOfType addr 0x1054824 size 0x118 virtual false final false
 bool IsEntryOfType(::StringW alias, System::Type entryType) ;

/// @brief Method Size addr 0x105493c size 0x4 virtual false final false
 int32_t Size() ;

/// @brief Method get_Count addr 0x1054940 size 0xac virtual false final false
 int32_t get_Count() ;

/// @brief Method Save addr 0x10549ec size 0x49fc virtual false final false
 void Save(System::IO::Stream stream, ::ArrayW<char16_t> password, Org::BouncyCastle::Security::SecureRandom random) ;

/// @brief Method CalculatePbeMac addr 0x1051ae4 size 0x184 virtual false final false
static ::ArrayW<uint8_t> CalculatePbeMac(Org::BouncyCastle::Asn1::DerObjectIdentifier oid, ::ArrayW<uint8_t> salt, int32_t itCount, ::ArrayW<char16_t> password, bool wrongPkcs12Zero, ::ArrayW<uint8_t> data) ;

/// @brief Method CryptPbeData addr 0x1051c68 size 0x254 virtual false final false
static ::ArrayW<uint8_t> CryptPbeData(bool forEncryption, Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier algId, ::ArrayW<char16_t> password, bool wrongPkcs12Zero, ::ArrayW<uint8_t> data) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Pkcs
NEED_NO_BOX(Org::BouncyCastle::Pkcs::Org__BouncyCastle__Pkcs__Pkcs12Store__CertId);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Pkcs::Org__BouncyCastle__Pkcs__Pkcs12Store__CertId, "Org.BouncyCastle.Pkcs", "Pkcs12Store/CertId");
NEED_NO_BOX(Org::BouncyCastle::Pkcs::Org__BouncyCastle__Pkcs__Pkcs12Store__IgnoresCaseHashtable);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Pkcs::Org__BouncyCastle__Pkcs__Pkcs12Store__IgnoresCaseHashtable, "Org.BouncyCastle.Pkcs", "Pkcs12Store/IgnoresCaseHashtable");
NEED_NO_BOX(Org::BouncyCastle::Pkcs::Pkcs12Store);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Pkcs::Pkcs12Store, "Org.BouncyCastle.Pkcs", "Pkcs12Store");
