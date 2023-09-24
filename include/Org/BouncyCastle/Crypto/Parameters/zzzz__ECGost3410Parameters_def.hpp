#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__ECNamedDomainParameters_def.hpp"
namespace Org::BouncyCastle::Crypto::Parameters {
class ECDomainParameters;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class ECNamedDomainParameters;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Parameters {
class ECGost3410Parameters;
}
// Type: Org.BouncyCastle.Crypto.Parameters::ECGost3410Parameters
namespace Org::BouncyCastle::Crypto::Parameters {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1034))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1035))
// CS Name: Org.BouncyCastle.Crypto.Parameters.ECGost3410Parameters
class CORDL_TYPE ECGost3410Parameters : public Org::BouncyCastle::Crypto::Parameters::ECNamedDomainParameters {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x60};

virtual ~ECGost3410Parameters() = default;

// Ctor Parameters [CppParam { name: "", ty: "ECGost3410Parameters", modifiers: " const&", def_value: None }]
constexpr ECGost3410Parameters(ECGost3410Parameters const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ECGost3410Parameters", modifiers: "&&", def_value: None }]
constexpr ECGost3410Parameters(ECGost3410Parameters&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ECGost3410Parameters(void* ptr) noexcept : Org::BouncyCastle::Crypto::Parameters::ECNamedDomainParameters(ptr) {
}


  constexpr ECGost3410Parameters& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ECGost3410Parameters& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ECGost3410Parameters& operator=(ECGost3410Parameters&& o) noexcept = default;
  constexpr ECGost3410Parameters& operator=(ECGost3410Parameters const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get__publicKeyParamSet, put=__set__publicKeyParamSet))  _publicKeyParamSet;

constexpr void __set__publicKeyParamSet(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

constexpr Org::BouncyCastle::Asn1::DerObjectIdentifier __get__publicKeyParamSet() const;

 Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get__digestParamSet, put=__set__digestParamSet))  _digestParamSet;

constexpr void __set__digestParamSet(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

constexpr Org::BouncyCastle::Asn1::DerObjectIdentifier __get__digestParamSet() const;

 Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get__encryptionParamSet, put=__set__encryptionParamSet))  _encryptionParamSet;

constexpr void __set__encryptionParamSet(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

constexpr Org::BouncyCastle::Asn1::DerObjectIdentifier __get__encryptionParamSet() const;


// Properties

 Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=get_PublicKeyParamSet))  PublicKeyParamSet;

 Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=get_DigestParamSet))  DigestParamSet;

 Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=get_EncryptionParamSet))  EncryptionParamSet;


// Methods

/// @brief Method get_PublicKeyParamSet addr 0xea5d94 size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::DerObjectIdentifier get_PublicKeyParamSet() ;

/// @brief Method get_DigestParamSet addr 0xea5d9c size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::DerObjectIdentifier get_DigestParamSet() ;

/// @brief Method get_EncryptionParamSet addr 0xea5da4 size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::DerObjectIdentifier get_EncryptionParamSet() ;

static Org::BouncyCastle::Crypto::Parameters::ECGost3410Parameters New_ctor(Org::BouncyCastle::Crypto::Parameters::ECNamedDomainParameters dp, Org::BouncyCastle::Asn1::DerObjectIdentifier publicKeyParamSet, Org::BouncyCastle::Asn1::DerObjectIdentifier digestParamSet, Org::BouncyCastle::Asn1::DerObjectIdentifier encryptionParamSet) ;

/// @brief Method .ctor addr 0xea5dac size 0x80 virtual false final false
 void _ctor(Org::BouncyCastle::Crypto::Parameters::ECNamedDomainParameters dp, Org::BouncyCastle::Asn1::DerObjectIdentifier publicKeyParamSet, Org::BouncyCastle::Asn1::DerObjectIdentifier digestParamSet, Org::BouncyCastle::Asn1::DerObjectIdentifier encryptionParamSet) ;

static Org::BouncyCastle::Crypto::Parameters::ECGost3410Parameters New_ctor(Org::BouncyCastle::Crypto::Parameters::ECDomainParameters dp, Org::BouncyCastle::Asn1::DerObjectIdentifier publicKeyParamSet, Org::BouncyCastle::Asn1::DerObjectIdentifier digestParamSet, Org::BouncyCastle::Asn1::DerObjectIdentifier encryptionParamSet) ;

/// @brief Method .ctor addr 0xea5e2c size 0x7c virtual false final false
 void _ctor(Org::BouncyCastle::Crypto::Parameters::ECDomainParameters dp, Org::BouncyCastle::Asn1::DerObjectIdentifier publicKeyParamSet, Org::BouncyCastle::Asn1::DerObjectIdentifier digestParamSet, Org::BouncyCastle::Asn1::DerObjectIdentifier encryptionParamSet) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Parameters
NEED_NO_BOX(Org::BouncyCastle::Crypto::Parameters::ECGost3410Parameters);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Parameters::ECGost3410Parameters, "Org.BouncyCastle.Crypto.Parameters", "ECGost3410Parameters");
