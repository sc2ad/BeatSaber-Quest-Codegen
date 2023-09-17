#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__AsymmetricKeyParameter_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace {
namespace Org::BouncyCastle::Crypto::Parameters {
class X25519PublicKeyParameters;
}
namespace System::IO {
class Stream;
}
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Parameters {
class X25519PrivateKeyParameters;
}
// Type: Org.BouncyCastle.Crypto.Parameters::X25519PrivateKeyParameters
namespace Org::BouncyCastle::Crypto::Parameters {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1020))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1089))
// CS Name: Org.BouncyCastle.Crypto.Parameters.X25519PrivateKeyParameters
class CORDL_TYPE X25519PrivateKeyParameters : public ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~X25519PrivateKeyParameters() = default;

// Ctor Parameters [CppParam { name: "", ty: "X25519PrivateKeyParameters", modifiers: " const&", def_value: None }]
constexpr X25519PrivateKeyParameters(X25519PrivateKeyParameters const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "X25519PrivateKeyParameters", modifiers: "&&", def_value: None }]
constexpr X25519PrivateKeyParameters(X25519PrivateKeyParameters&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit X25519PrivateKeyParameters(void* ptr) noexcept : ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter(ptr) {
}


  constexpr X25519PrivateKeyParameters& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr X25519PrivateKeyParameters& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr X25519PrivateKeyParameters& operator=(X25519PrivateKeyParameters&& o) noexcept = default;
  constexpr X25519PrivateKeyParameters& operator=(X25519PrivateKeyParameters const& o) noexcept = default;
                


// Fields

static int32_t __declspec(property(get=__get_KeySize, put=__set_KeySize))  KeySize;

static void __set_KeySize(int32_t value) ;

static int32_t __get_KeySize() ;

static int32_t __declspec(property(get=__get_SecretSize, put=__set_SecretSize))  SecretSize;

static void __set_SecretSize(int32_t value) ;

static int32_t __get_SecretSize() ;

 ::ArrayW<uint8_t> __declspec(property(get=__get_data, put=__set_data))  data;

constexpr void __set_data(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_data() const;


// Methods

// Ctor Parameters [CppParam { name: "random", ty: "::Org::BouncyCastle::Security::SecureRandom", modifiers: "", def_value: None }]
explicit X25519PrivateKeyParameters(::Org::BouncyCastle::Security::SecureRandom random) ;

/// @brief Method .ctor addr 0xead7d0 size 0xa4 virtual false final false
 void _ctor(::Org::BouncyCastle::Security::SecureRandom random) ;

// Ctor Parameters [CppParam { name: "buf", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "off", ty: "int32_t", modifiers: "", def_value: None }]
explicit X25519PrivateKeyParameters(::ArrayW<uint8_t> buf, int32_t off) ;

/// @brief Method .ctor addr 0xead874 size 0xbc virtual false final false
 void _ctor(::ArrayW<uint8_t> buf, int32_t off) ;

// Ctor Parameters [CppParam { name: "input", ty: "::System::IO::Stream", modifiers: "", def_value: None }]
explicit X25519PrivateKeyParameters(::System::IO::Stream input) ;

/// @brief Method .ctor addr 0xead930 size 0x108 virtual false final false
 void _ctor(::System::IO::Stream input) ;

/// @brief Method Encode addr 0xeada38 size 0x84 virtual false final false
 void Encode(::ArrayW<uint8_t> buf, int32_t off) ;

/// @brief Method GetEncoded addr 0xeadabc size 0x5c virtual false final false
 ::ArrayW<uint8_t> GetEncoded() ;

/// @brief Method GeneratePublicKey addr 0xeadb18 size 0xac virtual false final false
 ::Org::BouncyCastle::Crypto::Parameters::X25519PublicKeyParameters GeneratePublicKey() ;

/// @brief Method GenerateSecret addr 0xeadc80 size 0xf4 virtual false final false
 void GenerateSecret(::Org::BouncyCastle::Crypto::Parameters::X25519PublicKeyParameters publicKey, ::ArrayW<uint8_t> buf, int32_t off) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Parameters
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Parameters::X25519PrivateKeyParameters);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Parameters::X25519PrivateKeyParameters, "Org.BouncyCastle.Crypto.Parameters", "X25519PrivateKeyParameters");
