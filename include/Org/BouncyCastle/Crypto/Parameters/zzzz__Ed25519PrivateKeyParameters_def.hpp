#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__AsymmetricKeyParameter_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace {
namespace System::IO {
class Stream;
}
namespace Org::BouncyCastle::Math::EC::Rfc8032 {
struct ____Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__Algorithm;
}
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class Ed25519PublicKeyParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Parameters {
class Ed25519PrivateKeyParameters;
}
// Type: Org.BouncyCastle.Crypto.Parameters::Ed25519PrivateKeyParameters
namespace Org::BouncyCastle::Crypto::Parameters {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1020))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1041))
// CS Name: Org.BouncyCastle.Crypto.Parameters.Ed25519PrivateKeyParameters
class CORDL_TYPE Ed25519PrivateKeyParameters : public ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~Ed25519PrivateKeyParameters() = default;

// Ctor Parameters [CppParam { name: "", ty: "Ed25519PrivateKeyParameters", modifiers: " const&", def_value: None }]
constexpr Ed25519PrivateKeyParameters(Ed25519PrivateKeyParameters const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Ed25519PrivateKeyParameters", modifiers: "&&", def_value: None }]
constexpr Ed25519PrivateKeyParameters(Ed25519PrivateKeyParameters&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Ed25519PrivateKeyParameters(void* ptr) noexcept : ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter(ptr) {
}


  constexpr Ed25519PrivateKeyParameters& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Ed25519PrivateKeyParameters& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Ed25519PrivateKeyParameters& operator=(Ed25519PrivateKeyParameters&& o) noexcept = default;
  constexpr Ed25519PrivateKeyParameters& operator=(Ed25519PrivateKeyParameters const& o) noexcept = default;
                


// Fields

static int32_t __declspec(property(get=__get_KeySize, put=__set_KeySize))  KeySize;

static void __set_KeySize(int32_t value) ;

static int32_t __get_KeySize() ;

static int32_t __declspec(property(get=__get_SignatureSize, put=__set_SignatureSize))  SignatureSize;

static void __set_SignatureSize(int32_t value) ;

static int32_t __get_SignatureSize() ;

 ::ArrayW<uint8_t> __declspec(property(get=__get_data, put=__set_data))  data;

constexpr void __set_data(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_data() const;

 ::Org::BouncyCastle::Crypto::Parameters::Ed25519PublicKeyParameters __declspec(property(get=__get_cachedPublicKey, put=__set_cachedPublicKey))  cachedPublicKey;

constexpr void __set_cachedPublicKey(::Org::BouncyCastle::Crypto::Parameters::Ed25519PublicKeyParameters value) ;

constexpr ::Org::BouncyCastle::Crypto::Parameters::Ed25519PublicKeyParameters __get_cachedPublicKey() const;


// Methods

// Ctor Parameters [CppParam { name: "random", ty: "::Org::BouncyCastle::Security::SecureRandom", modifiers: "", def_value: None }]
explicit Ed25519PrivateKeyParameters(::Org::BouncyCastle::Security::SecureRandom random) ;

/// @brief Method .ctor addr 0xea6e9c size 0xd0 virtual false final false
 void _ctor(::Org::BouncyCastle::Security::SecureRandom random) ;

// Ctor Parameters [CppParam { name: "buf", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "off", ty: "int32_t", modifiers: "", def_value: None }]
explicit Ed25519PrivateKeyParameters(::ArrayW<uint8_t> buf, int32_t off) ;

/// @brief Method .ctor addr 0xea6f6c size 0xc0 virtual false final false
 void _ctor(::ArrayW<uint8_t> buf, int32_t off) ;

// Ctor Parameters [CppParam { name: "input", ty: "::System::IO::Stream", modifiers: "", def_value: None }]
explicit Ed25519PrivateKeyParameters(::System::IO::Stream input) ;

/// @brief Method .ctor addr 0xea702c size 0x10c virtual false final false
 void _ctor(::System::IO::Stream input) ;

/// @brief Method Encode addr 0xea7138 size 0x84 virtual false final false
 void Encode(::ArrayW<uint8_t> buf, int32_t off) ;

/// @brief Method GetEncoded addr 0xea71bc size 0x5c virtual false final false
 ::ArrayW<uint8_t> GetEncoded() ;

/// @brief Method GeneratePublicKey addr 0xea7218 size 0x174 virtual false final false
 ::Org::BouncyCastle::Crypto::Parameters::Ed25519PublicKeyParameters GeneratePublicKey() ;

/// @brief Method Sign addr 0xea7448 size 0x20 virtual false final false
 void Sign(::Org::BouncyCastle::Math::EC::Rfc8032::____Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__Algorithm algorithm, ::Org::BouncyCastle::Crypto::Parameters::Ed25519PublicKeyParameters publicKey, ::ArrayW<uint8_t> ctx, ::ArrayW<uint8_t> msg, int32_t msgOff, int32_t msgLen, ::ArrayW<uint8_t> sig, int32_t sigOff) ;

/// @brief Method Sign addr 0xea7468 size 0x280 virtual false final false
 void Sign(::Org::BouncyCastle::Math::EC::Rfc8032::____Org__BouncyCastle__Math__EC__Rfc8032__Ed25519__Algorithm algorithm, ::ArrayW<uint8_t> ctx, ::ArrayW<uint8_t> msg, int32_t msgOff, int32_t msgLen, ::ArrayW<uint8_t> sig, int32_t sigOff) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Parameters
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Parameters::Ed25519PrivateKeyParameters);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Parameters::Ed25519PrivateKeyParameters, "Org.BouncyCastle.Crypto.Parameters", "Ed25519PrivateKeyParameters");
