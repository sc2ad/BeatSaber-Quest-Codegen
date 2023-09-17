#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace Org::BouncyCastle::Crypto::Parameters {
class Ed448PrivateKeyParameters;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class Ed448PublicKeyParameters;
}
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
namespace Org::BouncyCastle::Crypto {
class ISigner;
}
namespace Org::BouncyCastle::Crypto {
class IXof;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Signers {
class Ed448phSigner;
}
// Type: Org.BouncyCastle.Crypto.Signers::Ed448phSigner
namespace Org::BouncyCastle::Crypto::Signers {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1136))
// CS Name: Org.BouncyCastle.Crypto.Signers.Ed448phSigner
class CORDL_TYPE Ed448phSigner : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::Org::BouncyCastle::Crypto::ISigner
constexpr operator  ::Org::BouncyCastle::Crypto::ISigner() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~Ed448phSigner() = default;

// Ctor Parameters [CppParam { name: "", ty: "Ed448phSigner", modifiers: " const&", def_value: None }]
constexpr Ed448phSigner(Ed448phSigner const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Ed448phSigner", modifiers: "&&", def_value: None }]
constexpr Ed448phSigner(Ed448phSigner&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Ed448phSigner(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Ed448phSigner& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Ed448phSigner& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Ed448phSigner& operator=(Ed448phSigner&& o) noexcept = default;
  constexpr Ed448phSigner& operator=(Ed448phSigner const& o) noexcept = default;
                


// Fields

 ::Org::BouncyCastle::Crypto::IXof __declspec(property(get=__get_prehash, put=__set_prehash))  prehash;

constexpr void __set_prehash(::Org::BouncyCastle::Crypto::IXof value) ;

constexpr ::Org::BouncyCastle::Crypto::IXof __get_prehash() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_context, put=__set_context))  context;

constexpr void __set_context(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_context() const;

 bool __declspec(property(get=__get_forSigning, put=__set_forSigning))  forSigning;

constexpr void __set_forSigning(bool value) ;

constexpr bool __get_forSigning() const;

 ::Org::BouncyCastle::Crypto::Parameters::Ed448PrivateKeyParameters __declspec(property(get=__get_privateKey, put=__set_privateKey))  privateKey;

constexpr void __set_privateKey(::Org::BouncyCastle::Crypto::Parameters::Ed448PrivateKeyParameters value) ;

constexpr ::Org::BouncyCastle::Crypto::Parameters::Ed448PrivateKeyParameters __get_privateKey() const;

 ::Org::BouncyCastle::Crypto::Parameters::Ed448PublicKeyParameters __declspec(property(get=__get_publicKey, put=__set_publicKey))  publicKey;

constexpr void __set_publicKey(::Org::BouncyCastle::Crypto::Parameters::Ed448PublicKeyParameters value) ;

constexpr ::Org::BouncyCastle::Crypto::Parameters::Ed448PublicKeyParameters __get_publicKey() const;


// Properties

 ::StringW __declspec(property(get=get_AlgorithmName))  AlgorithmName;


// Methods

// Ctor Parameters [CppParam { name: "context", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
explicit Ed448phSigner(::ArrayW<uint8_t> context) ;

/// @brief Method .ctor addr 0xebd2f0 size 0xa8 virtual false final false
 void _ctor(::ArrayW<uint8_t> context) ;

/// @brief Method get_AlgorithmName addr 0xebd398 size 0x40 virtual true final false
 ::StringW get_AlgorithmName() ;

/// @brief Method Init addr 0xebd3d8 size 0xd4 virtual true final false
 void Init(bool forSigning, ::Org::BouncyCastle::Crypto::ICipherParameters parameters) ;

/// @brief Method Update addr 0xebd550 size 0xac virtual true final false
 void Update(uint8_t b) ;

/// @brief Method BlockUpdate addr 0xebd5fc size 0xc4 virtual true final false
 void BlockUpdate(::ArrayW<uint8_t> buf, int32_t off, int32_t len) ;

/// @brief Method GenerateSignature addr 0xebd6c0 size 0x23c virtual true final false
 ::ArrayW<uint8_t> GenerateSignature() ;

/// @brief Method VerifySignature addr 0xebd8fc size 0x1ac virtual true final false
 bool VerifySignature(::ArrayW<uint8_t> signature) ;

/// @brief Method Reset addr 0xebd4ac size 0xa4 virtual true final true
 void Reset() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Signers
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Signers::Ed448phSigner);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Signers::Ed448phSigner, "Org.BouncyCastle.Crypto.Signers", "Ed448phSigner");
