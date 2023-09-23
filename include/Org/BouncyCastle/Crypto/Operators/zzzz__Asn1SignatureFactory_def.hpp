#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
namespace System::Collections {
class IEnumerable;
}
namespace Org::BouncyCastle::Crypto {
class IStreamCalculator;
}
namespace Org::BouncyCastle::Crypto {
class AsymmetricKeyParameter;
}
namespace Org::BouncyCastle::Crypto {
class ISignatureFactory;
}
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Operators {
class Asn1SignatureFactory;
}
// Type: Org.BouncyCastle.Crypto.Operators::Asn1SignatureFactory
namespace Org::BouncyCastle::Crypto::Operators {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(992))
// CS Name: Org.BouncyCastle.Crypto.Operators.Asn1SignatureFactory
class CORDL_TYPE Asn1SignatureFactory : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to Org::BouncyCastle::Crypto::ISignatureFactory
constexpr operator  Org::BouncyCastle::Crypto::ISignatureFactory() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~Asn1SignatureFactory() = default;

// Ctor Parameters [CppParam { name: "", ty: "Asn1SignatureFactory", modifiers: " const&", def_value: None }]
constexpr Asn1SignatureFactory(Asn1SignatureFactory const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Asn1SignatureFactory", modifiers: "&&", def_value: None }]
constexpr Asn1SignatureFactory(Asn1SignatureFactory&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Asn1SignatureFactory(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Asn1SignatureFactory& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Asn1SignatureFactory& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Asn1SignatureFactory& operator=(Asn1SignatureFactory&& o) noexcept = default;
  constexpr Asn1SignatureFactory& operator=(Asn1SignatureFactory const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier __declspec(property(get=__get_algID, put=__set_algID))  algID;

constexpr void __set_algID(Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier value) ;

constexpr Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier __get_algID() const;

 ::StringW __declspec(property(get=__get_algorithm, put=__set_algorithm))  algorithm;

constexpr void __set_algorithm(::StringW value) ;

constexpr ::StringW __get_algorithm() const;

 Org::BouncyCastle::Crypto::AsymmetricKeyParameter __declspec(property(get=__get_privateKey, put=__set_privateKey))  privateKey;

constexpr void __set_privateKey(Org::BouncyCastle::Crypto::AsymmetricKeyParameter value) ;

constexpr Org::BouncyCastle::Crypto::AsymmetricKeyParameter __get_privateKey() const;

 Org::BouncyCastle::Security::SecureRandom __declspec(property(get=__get_random, put=__set_random))  random;

constexpr void __set_random(Org::BouncyCastle::Security::SecureRandom value) ;

constexpr Org::BouncyCastle::Security::SecureRandom __get_random() const;


// Properties

 ::bs_hook::Il2CppWrapperType __declspec(property(get=get_AlgorithmDetails))  AlgorithmDetails;

static System::Collections::IEnumerable __declspec(property(get=get_SignatureAlgNames))  SignatureAlgNames;


// Methods

// Ctor Parameters [CppParam { name: "algorithm", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "privateKey", ty: "Org::BouncyCastle::Crypto::AsymmetricKeyParameter", modifiers: "", def_value: None }]
explicit Asn1SignatureFactory(::StringW algorithm, Org::BouncyCastle::Crypto::AsymmetricKeyParameter privateKey) ;

/// @brief Method .ctor addr 0xe9f950 size 0x8 virtual false final false
 void _ctor(::StringW algorithm, Org::BouncyCastle::Crypto::AsymmetricKeyParameter privateKey) ;

// Ctor Parameters [CppParam { name: "algorithm", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "privateKey", ty: "Org::BouncyCastle::Crypto::AsymmetricKeyParameter", modifiers: "", def_value: None }, CppParam { name: "random", ty: "Org::BouncyCastle::Security::SecureRandom", modifiers: "", def_value: None }]
explicit Asn1SignatureFactory(::StringW algorithm, Org::BouncyCastle::Crypto::AsymmetricKeyParameter privateKey, Org::BouncyCastle::Security::SecureRandom random) ;

/// @brief Method .ctor addr 0xe9f958 size 0x158 virtual false final false
 void _ctor(::StringW algorithm, Org::BouncyCastle::Crypto::AsymmetricKeyParameter privateKey, Org::BouncyCastle::Security::SecureRandom random) ;

/// @brief Method get_AlgorithmDetails addr 0xe9fab0 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType get_AlgorithmDetails() ;

/// @brief Method CreateCalculator addr 0xe9fab8 size 0xb4 virtual true final true
 Org::BouncyCastle::Crypto::IStreamCalculator CreateCalculator() ;

/// @brief Method get_SignatureAlgNames addr 0xe9fbe8 size 0x4c virtual false final false
static System::Collections::IEnumerable get_SignatureAlgNames() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Operators
NEED_NO_BOX(Org::BouncyCastle::Crypto::Operators::Asn1SignatureFactory);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Operators::Asn1SignatureFactory, "Org.BouncyCastle.Crypto.Operators", "Asn1SignatureFactory");
