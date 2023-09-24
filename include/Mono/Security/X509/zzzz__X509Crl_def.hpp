#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace Mono::Security {
class ASN1;
}
namespace System {
struct DateTime;
}
namespace Mono::Security::X509 {
class X509ExtensionCollection;
}
namespace Mono::Security::X509 {
class Mono__Security__X509__X509Crl__X509CrlEntry;
}
namespace System::Security::Cryptography {
class RSA;
}
namespace System::Collections {
class ArrayList;
}
namespace System::Security::Cryptography {
class AsymmetricAlgorithm;
}
namespace Mono::Security::X509 {
class X509Certificate;
}
namespace System::Security::Cryptography {
class DSA;
}
// Forward declare root types
namespace Mono::Security::X509 {
class Mono__Security__X509__X509Crl__X509CrlEntry;
}
namespace Mono::Security::X509 {
class X509Crl;
}
// Type: ::X509CrlEntry
namespace Mono::Security::X509 {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13960))
// CS Name: Mono.Security.X509.X509Crl::X509CrlEntry
class CORDL_TYPE Mono__Security__X509__X509Crl__X509CrlEntry : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~Mono__Security__X509__X509Crl__X509CrlEntry() = default;

// Ctor Parameters [CppParam { name: "", ty: "Mono__Security__X509__X509Crl__X509CrlEntry", modifiers: " const&", def_value: None }]
constexpr Mono__Security__X509__X509Crl__X509CrlEntry(Mono__Security__X509__X509Crl__X509CrlEntry const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Mono__Security__X509__X509Crl__X509CrlEntry", modifiers: "&&", def_value: None }]
constexpr Mono__Security__X509__X509Crl__X509CrlEntry(Mono__Security__X509__X509Crl__X509CrlEntry&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Mono__Security__X509__X509Crl__X509CrlEntry(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Mono__Security__X509__X509Crl__X509CrlEntry& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Mono__Security__X509__X509Crl__X509CrlEntry& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Mono__Security__X509__X509Crl__X509CrlEntry& operator=(Mono__Security__X509__X509Crl__X509CrlEntry&& o) noexcept = default;
  constexpr Mono__Security__X509__X509Crl__X509CrlEntry& operator=(Mono__Security__X509__X509Crl__X509CrlEntry const& o) noexcept = default;
                


// Fields

 ::ArrayW<uint8_t> __declspec(property(get=__get_sn, put=__set_sn))  sn;

constexpr void __set_sn(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_sn() const;

 System::DateTime __declspec(property(get=__get_revocationDate, put=__set_revocationDate))  revocationDate;

constexpr void __set_revocationDate(System::DateTime value) ;

constexpr System::DateTime __get_revocationDate() const;

 Mono::Security::X509::X509ExtensionCollection __declspec(property(get=__get_extensions, put=__set_extensions))  extensions;

constexpr void __set_extensions(Mono::Security::X509::X509ExtensionCollection value) ;

constexpr Mono::Security::X509::X509ExtensionCollection __get_extensions() const;


// Properties

 ::ArrayW<uint8_t> __declspec(property(get=get_SerialNumber))  SerialNumber;

 System::DateTime __declspec(property(get=get_RevocationDate))  RevocationDate;

 Mono::Security::X509::X509ExtensionCollection __declspec(property(get=get_Extensions))  Extensions;


// Methods

static Mono::Security::X509::Mono__Security__X509__X509Crl__X509CrlEntry New_ctor(Mono::Security::ASN1 entry) ;

/// @brief Method .ctor addr 0x228ba2c size 0xd8 virtual false final false
 void _ctor(Mono::Security::ASN1 entry) ;

/// @brief Method get_SerialNumber addr 0x228c0b0 size 0x78 virtual false final false
 ::ArrayW<uint8_t> get_SerialNumber() ;

/// @brief Method get_RevocationDate addr 0x228c654 size 0x8 virtual false final false
 System::DateTime get_RevocationDate() ;

/// @brief Method get_Extensions addr 0x228c65c size 0x8 virtual false final false
 Mono::Security::X509::X509ExtensionCollection get_Extensions() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Mono::Security::X509
// Type: Mono.Security.X509::X509Crl
namespace Mono::Security::X509 {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13961))
// CS Name: Mono.Security.X509.X509Crl
class CORDL_TYPE X509Crl : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using X509CrlEntry = Mono::Security::X509::Mono__Security__X509__X509Crl__X509CrlEntry;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x60};

virtual ~X509Crl() = default;

// Ctor Parameters [CppParam { name: "", ty: "X509Crl", modifiers: " const&", def_value: None }]
constexpr X509Crl(X509Crl const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "X509Crl", modifiers: "&&", def_value: None }]
constexpr X509Crl(X509Crl&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit X509Crl(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
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

 ::StringW __declspec(property(get=__get_issuer, put=__set_issuer))  issuer;

constexpr void __set_issuer(::StringW value) ;

constexpr ::StringW __get_issuer() const;

 uint8_t __declspec(property(get=__get_version, put=__set_version))  version;

constexpr void __set_version(uint8_t value) ;

constexpr uint8_t __get_version() const;

 System::DateTime __declspec(property(get=__get_thisUpdate, put=__set_thisUpdate))  thisUpdate;

constexpr void __set_thisUpdate(System::DateTime value) ;

constexpr System::DateTime __get_thisUpdate() const;

 System::DateTime __declspec(property(get=__get_nextUpdate, put=__set_nextUpdate))  nextUpdate;

constexpr void __set_nextUpdate(System::DateTime value) ;

constexpr System::DateTime __get_nextUpdate() const;

 System::Collections::ArrayList __declspec(property(get=__get_entries, put=__set_entries))  entries;

constexpr void __set_entries(System::Collections::ArrayList value) ;

constexpr System::Collections::ArrayList __get_entries() const;

 ::StringW __declspec(property(get=__get_signatureOID, put=__set_signatureOID))  signatureOID;

constexpr void __set_signatureOID(::StringW value) ;

constexpr ::StringW __get_signatureOID() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_signature, put=__set_signature))  signature;

constexpr void __set_signature(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_signature() const;

 Mono::Security::X509::X509ExtensionCollection __declspec(property(get=__get_extensions, put=__set_extensions))  extensions;

constexpr void __set_extensions(Mono::Security::X509::X509ExtensionCollection value) ;

constexpr Mono::Security::X509::X509ExtensionCollection __get_extensions() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_encoded, put=__set_encoded))  encoded;

constexpr void __set_encoded(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_encoded() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_hash_value, put=__set_hash_value))  hash_value;

constexpr void __set_hash_value(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_hash_value() const;


// Properties

 Mono::Security::X509::X509ExtensionCollection __declspec(property(get=get_Extensions))  Extensions;

 ::ArrayW<uint8_t> __declspec(property(get=get_Hash))  Hash;

 ::StringW __declspec(property(get=get_IssuerName))  IssuerName;

 System::DateTime __declspec(property(get=get_NextUpdate))  NextUpdate;


// Methods

static Mono::Security::X509::X509Crl New_ctor(::ArrayW<uint8_t> crl) ;

/// @brief Method .ctor addr 0x228b284 size 0xf8 virtual false final false
 void _ctor(::ArrayW<uint8_t> crl) ;

/// @brief Method Parse addr 0x228b37c size 0x6b0 virtual false final false
 void Parse(::ArrayW<uint8_t> crl) ;

/// @brief Method get_Extensions addr 0x228bc40 size 0x8 virtual false final false
 Mono::Security::X509::X509ExtensionCollection get_Extensions() ;

/// @brief Method get_Hash addr 0x228bc48 size 0x214 virtual false final false
 ::ArrayW<uint8_t> get_Hash() ;

/// @brief Method get_IssuerName addr 0x228be5c size 0x8 virtual false final false
 ::StringW get_IssuerName() ;

/// @brief Method get_NextUpdate addr 0x228be64 size 0x8 virtual false final false
 System::DateTime get_NextUpdate() ;

/// @brief Method Compare addr 0x228be6c size 0x7c virtual false final false
 bool Compare(::ArrayW<uint8_t> array1, ::ArrayW<uint8_t> array2) ;

/// @brief Method GetCrlEntry addr 0x228bee8 size 0x80 virtual false final false
 Mono::Security::X509::Mono__Security__X509__X509Crl__X509CrlEntry GetCrlEntry(Mono::Security::X509::X509Certificate x509) ;

/// @brief Method GetCrlEntry addr 0x228bf68 size 0x148 virtual false final false
 Mono::Security::X509::Mono__Security__X509__X509Crl__X509CrlEntry GetCrlEntry(::ArrayW<uint8_t> serialNumber) ;

/// @brief Method VerifySignature addr 0x228c128 size 0x2cc virtual false final false
 bool VerifySignature(System::Security::Cryptography::DSA dsa) ;

/// @brief Method VerifySignature addr 0x228c3f4 size 0xd4 virtual false final false
 bool VerifySignature(System::Security::Cryptography::RSA rsa) ;

/// @brief Method VerifySignature addr 0x228c4c8 size 0x18c virtual false final false
 bool VerifySignature(System::Security::Cryptography::AsymmetricAlgorithm aa) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Mono::Security::X509
NEED_NO_BOX(Mono::Security::X509::Mono__Security__X509__X509Crl__X509CrlEntry);
DEFINE_IL2CPP_ARG_TYPE(Mono::Security::X509::Mono__Security__X509__X509Crl__X509CrlEntry, "Mono.Security.X509", "X509Crl/X509CrlEntry");
NEED_NO_BOX(Mono::Security::X509::X509Crl);
DEFINE_IL2CPP_ARG_TYPE(Mono::Security::X509::X509Crl, "Mono.Security.X509", "X509Crl");
