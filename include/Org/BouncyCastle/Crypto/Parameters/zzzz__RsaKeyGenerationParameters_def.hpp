#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__KeyGenerationParameters_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Parameters {
class RsaKeyGenerationParameters;
}
// Type: Org.BouncyCastle.Crypto.Parameters::RsaKeyGenerationParameters
namespace Org::BouncyCastle::Crypto::Parameters {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1018))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1079))
// CS Name: Org.BouncyCastle.Crypto.Parameters.RsaKeyGenerationParameters
class CORDL_TYPE RsaKeyGenerationParameters : public Org::BouncyCastle::Crypto::KeyGenerationParameters {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~RsaKeyGenerationParameters() = default;

// Ctor Parameters [CppParam { name: "", ty: "RsaKeyGenerationParameters", modifiers: " const&", def_value: None }]
constexpr RsaKeyGenerationParameters(RsaKeyGenerationParameters const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RsaKeyGenerationParameters", modifiers: "&&", def_value: None }]
constexpr RsaKeyGenerationParameters(RsaKeyGenerationParameters&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RsaKeyGenerationParameters(void* ptr) noexcept : Org::BouncyCastle::Crypto::KeyGenerationParameters(ptr) {
}


  constexpr RsaKeyGenerationParameters& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RsaKeyGenerationParameters& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RsaKeyGenerationParameters& operator=(RsaKeyGenerationParameters&& o) noexcept = default;
  constexpr RsaKeyGenerationParameters& operator=(RsaKeyGenerationParameters const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Math::BigInteger __declspec(property(get=__get_publicExponent, put=__set_publicExponent))  publicExponent;

constexpr void __set_publicExponent(Org::BouncyCastle::Math::BigInteger value) ;

constexpr Org::BouncyCastle::Math::BigInteger __get_publicExponent() const;

 int32_t __declspec(property(get=__get_certainty, put=__set_certainty))  certainty;

constexpr void __set_certainty(int32_t value) ;

constexpr int32_t __get_certainty() const;


// Properties

 Org::BouncyCastle::Math::BigInteger __declspec(property(get=get_PublicExponent))  PublicExponent;

 int32_t __declspec(property(get=get_Certainty))  Certainty;


// Methods

static Org::BouncyCastle::Crypto::Parameters::RsaKeyGenerationParameters New_ctor(Org::BouncyCastle::Math::BigInteger publicExponent, Org::BouncyCastle::Security::SecureRandom random, int32_t strength, int32_t certainty) ;

/// @brief Method .ctor addr 0xeab460 size 0x38 virtual false final false
 void _ctor(Org::BouncyCastle::Math::BigInteger publicExponent, Org::BouncyCastle::Security::SecureRandom random, int32_t strength, int32_t certainty) ;

/// @brief Method get_PublicExponent addr 0xeab498 size 0x8 virtual false final false
 Org::BouncyCastle::Math::BigInteger get_PublicExponent() ;

/// @brief Method get_Certainty addr 0xeab4a0 size 0x8 virtual false final false
 int32_t get_Certainty() ;

/// @brief Method Equals addr 0xeab4a8 size 0xb4 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0xeab55c size 0x50 virtual true final false
 int32_t GetHashCode() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Parameters
NEED_NO_BOX(Org::BouncyCastle::Crypto::Parameters::RsaKeyGenerationParameters);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Parameters::RsaKeyGenerationParameters, "Org.BouncyCastle.Crypto.Parameters", "RsaKeyGenerationParameters");
