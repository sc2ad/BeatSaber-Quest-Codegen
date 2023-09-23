#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
namespace Org::BouncyCastle::Crypto {
class AsymmetricKeyParameter;
}
namespace Org::BouncyCastle::Crypto {
class IVerifierFactory;
}
namespace Org::BouncyCastle::Crypto {
class IStreamCalculator;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Operators {
class Asn1VerifierFactory;
}
// Type: Org.BouncyCastle.Crypto.Operators::Asn1VerifierFactory
namespace Org::BouncyCastle::Crypto::Operators {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(994))
// CS Name: Org.BouncyCastle.Crypto.Operators.Asn1VerifierFactory
class CORDL_TYPE Asn1VerifierFactory : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to Org::BouncyCastle::Crypto::IVerifierFactory
constexpr operator  Org::BouncyCastle::Crypto::IVerifierFactory() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~Asn1VerifierFactory() = default;

// Ctor Parameters [CppParam { name: "", ty: "Asn1VerifierFactory", modifiers: " const&", def_value: None }]
constexpr Asn1VerifierFactory(Asn1VerifierFactory const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Asn1VerifierFactory", modifiers: "&&", def_value: None }]
constexpr Asn1VerifierFactory(Asn1VerifierFactory&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Asn1VerifierFactory(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Asn1VerifierFactory& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Asn1VerifierFactory& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Asn1VerifierFactory& operator=(Asn1VerifierFactory&& o) noexcept = default;
  constexpr Asn1VerifierFactory& operator=(Asn1VerifierFactory const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier __declspec(property(get=__get_algID, put=__set_algID))  algID;

constexpr void __set_algID(Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier value) ;

constexpr Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier __get_algID() const;

 Org::BouncyCastle::Crypto::AsymmetricKeyParameter __declspec(property(get=__get_publicKey, put=__set_publicKey))  publicKey;

constexpr void __set_publicKey(Org::BouncyCastle::Crypto::AsymmetricKeyParameter value) ;

constexpr Org::BouncyCastle::Crypto::AsymmetricKeyParameter __get_publicKey() const;


// Properties

 ::bs_hook::Il2CppWrapperType __declspec(property(get=get_AlgorithmDetails))  AlgorithmDetails;


// Methods

// Ctor Parameters [CppParam { name: "algorithm", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "publicKey", ty: "Org::BouncyCastle::Crypto::AsymmetricKeyParameter", modifiers: "", def_value: None }]
explicit Asn1VerifierFactory(::StringW algorithm, Org::BouncyCastle::Crypto::AsymmetricKeyParameter publicKey) ;

/// @brief Method .ctor addr 0xe9fc34 size 0x150 virtual false final false
 void _ctor(::StringW algorithm, Org::BouncyCastle::Crypto::AsymmetricKeyParameter publicKey) ;

// Ctor Parameters [CppParam { name: "algorithm", ty: "Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier", modifiers: "", def_value: None }, CppParam { name: "publicKey", ty: "Org::BouncyCastle::Crypto::AsymmetricKeyParameter", modifiers: "", def_value: None }]
explicit Asn1VerifierFactory(Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier algorithm, Org::BouncyCastle::Crypto::AsymmetricKeyParameter publicKey) ;

/// @brief Method .ctor addr 0xe9fd84 size 0x2c virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier algorithm, Org::BouncyCastle::Crypto::AsymmetricKeyParameter publicKey) ;

/// @brief Method get_AlgorithmDetails addr 0xe9fdb0 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType get_AlgorithmDetails() ;

/// @brief Method CreateCalculator addr 0xe9fdb8 size 0xe8 virtual true final true
 Org::BouncyCastle::Crypto::IStreamCalculator CreateCalculator() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Operators
NEED_NO_BOX(Org::BouncyCastle::Crypto::Operators::Asn1VerifierFactory);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Operators::Asn1VerifierFactory, "Org.BouncyCastle.Crypto.Operators", "Asn1VerifierFactory");
