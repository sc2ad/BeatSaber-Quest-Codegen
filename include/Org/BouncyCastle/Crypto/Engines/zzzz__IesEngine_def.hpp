#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Crypto {
class IDerivationFunction;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class KdfParameters;
}
namespace Org::BouncyCastle::Crypto {
class BufferedBlockCipher;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class IesParameters;
}
namespace Org::BouncyCastle::Crypto {
class IBasicAgreement;
}
namespace Org::BouncyCastle::Crypto {
class IMac;
}
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Engines {
class IesEngine;
}
// Type: Org.BouncyCastle.Crypto.Engines::IesEngine
namespace Org::BouncyCastle::Crypto::Engines {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(849))
// CS Name: Org.BouncyCastle.Crypto.Engines.IesEngine
class CORDL_TYPE IesEngine : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x58};

virtual ~IesEngine() = default;

// Ctor Parameters [CppParam { name: "", ty: "IesEngine", modifiers: " const&", def_value: None }]
constexpr IesEngine(IesEngine const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "IesEngine", modifiers: "&&", def_value: None }]
constexpr IesEngine(IesEngine&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IesEngine(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr IesEngine& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr IesEngine& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr IesEngine& operator=(IesEngine&& o) noexcept = default;
  constexpr IesEngine& operator=(IesEngine const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Crypto::IBasicAgreement __declspec(property(get=__get_agree, put=__set_agree))  agree;

constexpr void __set_agree(Org::BouncyCastle::Crypto::IBasicAgreement value) ;

constexpr Org::BouncyCastle::Crypto::IBasicAgreement __get_agree() const;

 Org::BouncyCastle::Crypto::IDerivationFunction __declspec(property(get=__get_kdf, put=__set_kdf))  kdf;

constexpr void __set_kdf(Org::BouncyCastle::Crypto::IDerivationFunction value) ;

constexpr Org::BouncyCastle::Crypto::IDerivationFunction __get_kdf() const;

 Org::BouncyCastle::Crypto::IMac __declspec(property(get=__get_mac, put=__set_mac))  mac;

constexpr void __set_mac(Org::BouncyCastle::Crypto::IMac value) ;

constexpr Org::BouncyCastle::Crypto::IMac __get_mac() const;

 Org::BouncyCastle::Crypto::BufferedBlockCipher __declspec(property(get=__get_cipher, put=__set_cipher))  cipher;

constexpr void __set_cipher(Org::BouncyCastle::Crypto::BufferedBlockCipher value) ;

constexpr Org::BouncyCastle::Crypto::BufferedBlockCipher __get_cipher() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_macBuf, put=__set_macBuf))  macBuf;

constexpr void __set_macBuf(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_macBuf() const;

 bool __declspec(property(get=__get_forEncryption, put=__set_forEncryption))  forEncryption;

constexpr void __set_forEncryption(bool value) ;

constexpr bool __get_forEncryption() const;

 Org::BouncyCastle::Crypto::ICipherParameters __declspec(property(get=__get_privParam, put=__set_privParam))  privParam;

constexpr void __set_privParam(Org::BouncyCastle::Crypto::ICipherParameters value) ;

constexpr Org::BouncyCastle::Crypto::ICipherParameters __get_privParam() const;

 Org::BouncyCastle::Crypto::ICipherParameters __declspec(property(get=__get_pubParam, put=__set_pubParam))  pubParam;

constexpr void __set_pubParam(Org::BouncyCastle::Crypto::ICipherParameters value) ;

constexpr Org::BouncyCastle::Crypto::ICipherParameters __get_pubParam() const;

 Org::BouncyCastle::Crypto::Parameters::IesParameters __declspec(property(get=__get_param, put=__set_param))  param;

constexpr void __set_param(Org::BouncyCastle::Crypto::Parameters::IesParameters value) ;

constexpr Org::BouncyCastle::Crypto::Parameters::IesParameters __get_param() const;


// Methods

// Ctor Parameters [CppParam { name: "agree", ty: "Org::BouncyCastle::Crypto::IBasicAgreement", modifiers: "", def_value: None }, CppParam { name: "kdf", ty: "Org::BouncyCastle::Crypto::IDerivationFunction", modifiers: "", def_value: None }, CppParam { name: "mac", ty: "Org::BouncyCastle::Crypto::IMac", modifiers: "", def_value: None }]
explicit IesEngine(Org::BouncyCastle::Crypto::IBasicAgreement agree, Org::BouncyCastle::Crypto::IDerivationFunction kdf, Org::BouncyCastle::Crypto::IMac mac) ;

/// @brief Method .ctor addr 0xe481b8 size 0xf4 virtual false final false
 void _ctor(Org::BouncyCastle::Crypto::IBasicAgreement agree, Org::BouncyCastle::Crypto::IDerivationFunction kdf, Org::BouncyCastle::Crypto::IMac mac) ;

// Ctor Parameters [CppParam { name: "agree", ty: "Org::BouncyCastle::Crypto::IBasicAgreement", modifiers: "", def_value: None }, CppParam { name: "kdf", ty: "Org::BouncyCastle::Crypto::IDerivationFunction", modifiers: "", def_value: None }, CppParam { name: "mac", ty: "Org::BouncyCastle::Crypto::IMac", modifiers: "", def_value: None }, CppParam { name: "cipher", ty: "Org::BouncyCastle::Crypto::BufferedBlockCipher", modifiers: "", def_value: None }]
explicit IesEngine(Org::BouncyCastle::Crypto::IBasicAgreement agree, Org::BouncyCastle::Crypto::IDerivationFunction kdf, Org::BouncyCastle::Crypto::IMac mac, Org::BouncyCastle::Crypto::BufferedBlockCipher cipher) ;

/// @brief Method .ctor addr 0xe482ac size 0x100 virtual false final false
 void _ctor(Org::BouncyCastle::Crypto::IBasicAgreement agree, Org::BouncyCastle::Crypto::IDerivationFunction kdf, Org::BouncyCastle::Crypto::IMac mac, Org::BouncyCastle::Crypto::BufferedBlockCipher cipher) ;

/// @brief Method Init addr 0xe483ac size 0xc8 virtual true final false
 void Init(bool forEncryption, Org::BouncyCastle::Crypto::ICipherParameters privParameters, Org::BouncyCastle::Crypto::ICipherParameters pubParameters, Org::BouncyCastle::Crypto::ICipherParameters iesParameters) ;

/// @brief Method DecryptBlock addr 0xe48474 size 0x6ac virtual false final false
 ::ArrayW<uint8_t> DecryptBlock(::ArrayW<uint8_t> in_enc, int32_t inOff, int32_t inLen, ::ArrayW<uint8_t> z) ;

/// @brief Method EncryptBlock addr 0xe48c78 size 0x5ec virtual false final false
 ::ArrayW<uint8_t> EncryptBlock(::ArrayW<uint8_t> input, int32_t inOff, int32_t inLen, ::ArrayW<uint8_t> z) ;

/// @brief Method GenerateKdfBytes addr 0xe48b20 size 0x158 virtual false final false
 ::ArrayW<uint8_t> GenerateKdfBytes(Org::BouncyCastle::Crypto::Parameters::KdfParameters kParam, int32_t length) ;

/// @brief Method ProcessBlock addr 0xe49264 size 0x284 virtual true final false
 ::ArrayW<uint8_t> ProcessBlock(::ArrayW<uint8_t> input, int32_t inOff, int32_t inLen) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Engines
NEED_NO_BOX(Org::BouncyCastle::Crypto::Engines::IesEngine);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Engines::IesEngine, "Org.BouncyCastle.Crypto.Engines", "IesEngine");
