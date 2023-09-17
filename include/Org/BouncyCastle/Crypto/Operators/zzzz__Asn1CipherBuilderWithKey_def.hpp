#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace {
namespace Org::BouncyCastle::Crypto {
class ICipherBuilderWithKey;
}
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class KeyParameter;
}
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
namespace System::IO {
class Stream;
}
namespace Org::BouncyCastle::Crypto {
class ICipher;
}
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
namespace Org::BouncyCastle::Crypto {
class ICipherBuilder;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Operators {
class Asn1CipherBuilderWithKey;
}
// Type: Org.BouncyCastle.Crypto.Operators::Asn1CipherBuilderWithKey
namespace Org::BouncyCastle::Crypto::Operators {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(980))
// CS Name: Org.BouncyCastle.Crypto.Operators.Asn1CipherBuilderWithKey
class CORDL_TYPE Asn1CipherBuilderWithKey : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::Org::BouncyCastle::Crypto::ICipherBuilderWithKey
constexpr operator  ::Org::BouncyCastle::Crypto::ICipherBuilderWithKey() const noexcept;

/// @brief Convert operator to ::Org::BouncyCastle::Crypto::ICipherBuilder
constexpr operator  ::Org::BouncyCastle::Crypto::ICipherBuilder() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~Asn1CipherBuilderWithKey() = default;

// Ctor Parameters [CppParam { name: "", ty: "Asn1CipherBuilderWithKey", modifiers: " const&", def_value: None }]
constexpr Asn1CipherBuilderWithKey(Asn1CipherBuilderWithKey const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Asn1CipherBuilderWithKey", modifiers: "&&", def_value: None }]
constexpr Asn1CipherBuilderWithKey(Asn1CipherBuilderWithKey&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Asn1CipherBuilderWithKey(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Asn1CipherBuilderWithKey& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Asn1CipherBuilderWithKey& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Asn1CipherBuilderWithKey& operator=(Asn1CipherBuilderWithKey&& o) noexcept = default;
  constexpr Asn1CipherBuilderWithKey& operator=(Asn1CipherBuilderWithKey const& o) noexcept = default;
                


// Fields

 ::Org::BouncyCastle::Crypto::Parameters::KeyParameter __declspec(property(get=__get_encKey, put=__set_encKey))  encKey;

constexpr void __set_encKey(::Org::BouncyCastle::Crypto::Parameters::KeyParameter value) ;

constexpr ::Org::BouncyCastle::Crypto::Parameters::KeyParameter __get_encKey() const;

 ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier __declspec(property(get=__get_algorithmIdentifier, put=__set_algorithmIdentifier))  algorithmIdentifier;

constexpr void __set_algorithmIdentifier(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier value) ;

constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier __get_algorithmIdentifier() const;


// Properties

 ::bs_hook::Il2CppWrapperType __declspec(property(get=get_AlgorithmDetails))  AlgorithmDetails;

 ::Org::BouncyCastle::Crypto::ICipherParameters __declspec(property(get=get_Key))  Key;


// Methods

// Ctor Parameters [CppParam { name: "encryptionOID", ty: "::Org::BouncyCastle::Asn1::DerObjectIdentifier", modifiers: "", def_value: None }, CppParam { name: "keySize", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "random", ty: "::Org::BouncyCastle::Security::SecureRandom", modifiers: "", def_value: None }]
explicit Asn1CipherBuilderWithKey(::Org::BouncyCastle::Asn1::DerObjectIdentifier encryptionOID, int32_t keySize, ::Org::BouncyCastle::Security::SecureRandom random) ;

/// @brief Method .ctor addr 0xe9b09c size 0x120 virtual false final false
 void _ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier encryptionOID, int32_t keySize, ::Org::BouncyCastle::Security::SecureRandom random) ;

/// @brief Method get_AlgorithmDetails addr 0xe9b2bc size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType get_AlgorithmDetails() ;

/// @brief Method GetMaxOutputSize addr 0xe9b2c4 size 0x40 virtual true final true
 int32_t GetMaxOutputSize(int32_t inputLen) ;

/// @brief Method BuildCipher addr 0xe9b304 size 0x198 virtual true final true
 ::Org::BouncyCastle::Crypto::ICipher BuildCipher(::System::IO::Stream stream) ;

/// @brief Method get_Key addr 0xe9b528 size 0x8 virtual true final true
 ::Org::BouncyCastle::Crypto::ICipherParameters get_Key() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Operators
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Operators::Asn1CipherBuilderWithKey);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Operators::Asn1CipherBuilderWithKey, "Org.BouncyCastle.Crypto.Operators", "Asn1CipherBuilderWithKey");
