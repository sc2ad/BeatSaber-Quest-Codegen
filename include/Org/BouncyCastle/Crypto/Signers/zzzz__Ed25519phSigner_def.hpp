#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Crypto::Parameters {
class Ed25519PublicKeyParameters;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class Ed25519PrivateKeyParameters;
}
namespace Org::BouncyCastle::Crypto {
class IDigest;
}
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
namespace Org::BouncyCastle::Crypto {
class ISigner;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Signers {
class Ed25519phSigner;
}
// Type: Org.BouncyCastle.Crypto.Signers::Ed25519phSigner
namespace Org::BouncyCastle::Crypto::Signers {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1133))
// CS Name: Org.BouncyCastle.Crypto.Signers.Ed25519phSigner
class CORDL_TYPE Ed25519phSigner : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to Org::BouncyCastle::Crypto::ISigner
constexpr operator  Org::BouncyCastle::Crypto::ISigner() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~Ed25519phSigner() = default;

// Ctor Parameters [CppParam { name: "", ty: "Ed25519phSigner", modifiers: " const&", def_value: None }]
constexpr Ed25519phSigner(Ed25519phSigner const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Ed25519phSigner", modifiers: "&&", def_value: None }]
constexpr Ed25519phSigner(Ed25519phSigner&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Ed25519phSigner(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Ed25519phSigner& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Ed25519phSigner& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Ed25519phSigner& operator=(Ed25519phSigner&& o) noexcept = default;
  constexpr Ed25519phSigner& operator=(Ed25519phSigner const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Crypto::IDigest __declspec(property(get=__get_prehash, put=__set_prehash))  prehash;

constexpr void __set_prehash(Org::BouncyCastle::Crypto::IDigest value) ;

constexpr Org::BouncyCastle::Crypto::IDigest __get_prehash() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_context, put=__set_context))  context;

constexpr void __set_context(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_context() const;

 bool __declspec(property(get=__get_forSigning, put=__set_forSigning))  forSigning;

constexpr void __set_forSigning(bool value) ;

constexpr bool __get_forSigning() const;

 Org::BouncyCastle::Crypto::Parameters::Ed25519PrivateKeyParameters __declspec(property(get=__get_privateKey, put=__set_privateKey))  privateKey;

constexpr void __set_privateKey(Org::BouncyCastle::Crypto::Parameters::Ed25519PrivateKeyParameters value) ;

constexpr Org::BouncyCastle::Crypto::Parameters::Ed25519PrivateKeyParameters __get_privateKey() const;

 Org::BouncyCastle::Crypto::Parameters::Ed25519PublicKeyParameters __declspec(property(get=__get_publicKey, put=__set_publicKey))  publicKey;

constexpr void __set_publicKey(Org::BouncyCastle::Crypto::Parameters::Ed25519PublicKeyParameters value) ;

constexpr Org::BouncyCastle::Crypto::Parameters::Ed25519PublicKeyParameters __get_publicKey() const;


// Properties

 ::StringW __declspec(property(get=get_AlgorithmName))  AlgorithmName;


// Methods

static Org::BouncyCastle::Crypto::Signers::Ed25519phSigner New_ctor(::ArrayW<uint8_t> context) ;

/// @brief Method .ctor addr 0xebc438 size 0xa8 virtual false final false
 void _ctor(::ArrayW<uint8_t> context) ;

/// @brief Method get_AlgorithmName addr 0xebc4e0 size 0x40 virtual true final false
 ::StringW get_AlgorithmName() ;

/// @brief Method Init addr 0xebc520 size 0xd4 virtual true final false
 void Init(bool forSigning, Org::BouncyCastle::Crypto::ICipherParameters parameters) ;

/// @brief Method Update addr 0xebc698 size 0xac virtual true final false
 void Update(uint8_t b) ;

/// @brief Method BlockUpdate addr 0xebc744 size 0xc4 virtual true final false
 void BlockUpdate(::ArrayW<uint8_t> buf, int32_t off, int32_t len) ;

/// @brief Method GenerateSignature addr 0xebc808 size 0x23c virtual true final false
 ::ArrayW<uint8_t> GenerateSignature() ;

/// @brief Method VerifySignature addr 0xebca44 size 0x1ac virtual true final false
 bool VerifySignature(::ArrayW<uint8_t> signature) ;

/// @brief Method Reset addr 0xebc5f4 size 0xa4 virtual true final true
 void Reset() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Signers
NEED_NO_BOX(Org::BouncyCastle::Crypto::Signers::Ed25519phSigner);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Signers::Ed25519phSigner, "Org.BouncyCastle.Crypto.Signers", "Ed25519phSigner");
