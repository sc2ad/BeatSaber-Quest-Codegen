#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class RsaKeyParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Parameters {
class RsaBlindingParameters;
}
// Type: Org.BouncyCastle.Crypto.Parameters::RsaBlindingParameters
namespace Org::BouncyCastle::Crypto::Parameters {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1078))
// CS Name: Org.BouncyCastle.Crypto.Parameters.RsaBlindingParameters
class CORDL_TYPE RsaBlindingParameters : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::Org::BouncyCastle::Crypto::ICipherParameters
constexpr operator  ::Org::BouncyCastle::Crypto::ICipherParameters() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~RsaBlindingParameters() = default;

// Ctor Parameters [CppParam { name: "", ty: "RsaBlindingParameters", modifiers: " const&", def_value: None }]
constexpr RsaBlindingParameters(RsaBlindingParameters const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RsaBlindingParameters", modifiers: "&&", def_value: None }]
constexpr RsaBlindingParameters(RsaBlindingParameters&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RsaBlindingParameters(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr RsaBlindingParameters& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RsaBlindingParameters& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RsaBlindingParameters& operator=(RsaBlindingParameters&& o) noexcept = default;
  constexpr RsaBlindingParameters& operator=(RsaBlindingParameters const& o) noexcept = default;
                


// Fields

 ::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters __declspec(property(get=__get_publicKey, put=__set_publicKey))  publicKey;

constexpr void __set_publicKey(::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters value) ;

constexpr ::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters __get_publicKey() const;

 ::Org::BouncyCastle::Math::BigInteger __declspec(property(get=__get_blindingFactor, put=__set_blindingFactor))  blindingFactor;

constexpr void __set_blindingFactor(::Org::BouncyCastle::Math::BigInteger value) ;

constexpr ::Org::BouncyCastle::Math::BigInteger __get_blindingFactor() const;


// Properties

 ::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters __declspec(property(get=get_PublicKey))  PublicKey;

 ::Org::BouncyCastle::Math::BigInteger __declspec(property(get=get_BlindingFactor))  BlindingFactor;


// Methods

// Ctor Parameters [CppParam { name: "publicKey", ty: "::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters", modifiers: "", def_value: None }, CppParam { name: "blindingFactor", ty: "::Org::BouncyCastle::Math::BigInteger", modifiers: "", def_value: None }]
explicit RsaBlindingParameters(::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters publicKey, ::Org::BouncyCastle::Math::BigInteger blindingFactor) ;

/// @brief Method .ctor addr 0xeab3c8 size 0x88 virtual false final false
 void _ctor(::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters publicKey, ::Org::BouncyCastle::Math::BigInteger blindingFactor) ;

/// @brief Method get_PublicKey addr 0xeab450 size 0x8 virtual false final false
 ::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters get_PublicKey() ;

/// @brief Method get_BlindingFactor addr 0xeab458 size 0x8 virtual false final false
 ::Org::BouncyCastle::Math::BigInteger get_BlindingFactor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Parameters
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Parameters::RsaBlindingParameters);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Parameters::RsaBlindingParameters, "Org.BouncyCastle.Crypto.Parameters", "RsaBlindingParameters");
