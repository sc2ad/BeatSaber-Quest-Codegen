#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
namespace Org::BouncyCastle::Crypto {
class AsymmetricKeyParameter;
}
namespace Org::BouncyCastle::Crypto {
class ISigner;
}
namespace System::Collections {
class IDictionary;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Encodable;
}
namespace System::Collections {
class ICollection;
}
// Forward declare root types
namespace Org::BouncyCastle::Security {
class SignerUtilities;
}
// Type: Org.BouncyCastle.Security::SignerUtilities
namespace Org::BouncyCastle::Security {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1759))
// CS Name: Org.BouncyCastle.Security.SignerUtilities
class CORDL_TYPE SignerUtilities : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~SignerUtilities() = default;

// Ctor Parameters [CppParam { name: "", ty: "SignerUtilities", modifiers: " const&", def_value: None }]
constexpr SignerUtilities(SignerUtilities const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SignerUtilities", modifiers: "&&", def_value: None }]
constexpr SignerUtilities(SignerUtilities&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SignerUtilities(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr SignerUtilities& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SignerUtilities& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SignerUtilities& operator=(SignerUtilities&& o) noexcept = default;
  constexpr SignerUtilities& operator=(SignerUtilities const& o) noexcept = default;
                


// Fields

static System::Collections::IDictionary __declspec(property(get=__get_algorithms, put=__set_algorithms))  algorithms;

static void __set_algorithms(System::Collections::IDictionary value) ;

static System::Collections::IDictionary __get_algorithms() ;

static System::Collections::IDictionary __declspec(property(get=__get_oids, put=__set_oids))  oids;

static void __set_oids(System::Collections::IDictionary value) ;

static System::Collections::IDictionary __get_oids() ;


// Properties

static System::Collections::ICollection __declspec(property(get=get_Algorithms))  Algorithms;


// Methods

static Org::BouncyCastle::Security::SignerUtilities New_ctor() ;

/// @brief Method .ctor addr 0x10b4e38 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method GetObjectIdentifier addr 0x10bff44 size 0x25c virtual false final false
static Org::BouncyCastle::Asn1::DerObjectIdentifier GetObjectIdentifier(::StringW mechanism) ;

/// @brief Method get_Algorithms addr 0x10c01a0 size 0xcc virtual false final false
static System::Collections::ICollection get_Algorithms() ;

/// @brief Method GetDefaultX509Parameters addr 0x10c026c size 0x60 virtual false final false
static Org::BouncyCastle::Asn1::Asn1Encodable GetDefaultX509Parameters(Org::BouncyCastle::Asn1::DerObjectIdentifier id) ;

/// @brief Method GetDefaultX509Parameters addr 0x10c02cc size 0x2a8 virtual false final false
static Org::BouncyCastle::Asn1::Asn1Encodable GetDefaultX509Parameters(::StringW algorithm) ;

/// @brief Method GetPssX509Parameters addr 0x10c0574 size 0x244 virtual false final false
static Org::BouncyCastle::Asn1::Asn1Encodable GetPssX509Parameters(::StringW digestName) ;

/// @brief Method GetSigner addr 0x10c07b8 size 0x60 virtual false final false
static Org::BouncyCastle::Crypto::ISigner GetSigner(Org::BouncyCastle::Asn1::DerObjectIdentifier id) ;

/// @brief Method GetSigner addr 0x10c0818 size 0x103c virtual false final false
static Org::BouncyCastle::Crypto::ISigner GetSigner(::StringW algorithm) ;

/// @brief Method GetEncodingName addr 0x10c1854 size 0x108 virtual false final false
static ::StringW GetEncodingName(Org::BouncyCastle::Asn1::DerObjectIdentifier oid) ;

/// @brief Method InitSigner addr 0x10c195c size 0x80 virtual false final false
static Org::BouncyCastle::Crypto::ISigner InitSigner(Org::BouncyCastle::Asn1::DerObjectIdentifier algorithmOid, bool forSigning, Org::BouncyCastle::Crypto::AsymmetricKeyParameter privateKey, Org::BouncyCastle::Security::SecureRandom random) ;

/// @brief Method InitSigner addr 0x10c19dc size 0x138 virtual false final false
static Org::BouncyCastle::Crypto::ISigner InitSigner(::StringW algorithm, bool forSigning, Org::BouncyCastle::Crypto::AsymmetricKeyParameter privateKey, Org::BouncyCastle::Security::SecureRandom random) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Security
NEED_NO_BOX(Org::BouncyCastle::Security::SignerUtilities);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Security::SignerUtilities, "Org.BouncyCastle.Security", "SignerUtilities");
