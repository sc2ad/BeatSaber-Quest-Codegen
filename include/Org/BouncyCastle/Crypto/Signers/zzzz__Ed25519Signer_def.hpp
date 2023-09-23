#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "System/IO/zzzz__MemoryStream_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Crypto {
class ISigner;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class Ed25519PublicKeyParameters;
}
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class Ed25519PrivateKeyParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Signers {
class Ed25519Signer;
}
namespace Org::BouncyCastle::Crypto::Signers {
class Org__BouncyCastle__Crypto__Signers__Ed25519Signer__Buffer;
}
// Type: ::Buffer
namespace Org::BouncyCastle::Crypto::Signers {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1134))
// CS Name: Org.BouncyCastle.Crypto.Signers.Ed25519Signer::Buffer
class CORDL_TYPE Org__BouncyCastle__Crypto__Signers__Ed25519Signer__Buffer : public System::IO::MemoryStream {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~Org__BouncyCastle__Crypto__Signers__Ed25519Signer__Buffer() = default;

// Ctor Parameters [CppParam { name: "", ty: "Org__BouncyCastle__Crypto__Signers__Ed25519Signer__Buffer", modifiers: " const&", def_value: None }]
constexpr Org__BouncyCastle__Crypto__Signers__Ed25519Signer__Buffer(Org__BouncyCastle__Crypto__Signers__Ed25519Signer__Buffer const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Org__BouncyCastle__Crypto__Signers__Ed25519Signer__Buffer", modifiers: "&&", def_value: None }]
constexpr Org__BouncyCastle__Crypto__Signers__Ed25519Signer__Buffer(Org__BouncyCastle__Crypto__Signers__Ed25519Signer__Buffer&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Org__BouncyCastle__Crypto__Signers__Ed25519Signer__Buffer(void* ptr) noexcept : System::IO::MemoryStream(ptr) {
}


  constexpr Org__BouncyCastle__Crypto__Signers__Ed25519Signer__Buffer& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Org__BouncyCastle__Crypto__Signers__Ed25519Signer__Buffer& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Org__BouncyCastle__Crypto__Signers__Ed25519Signer__Buffer& operator=(Org__BouncyCastle__Crypto__Signers__Ed25519Signer__Buffer&& o) noexcept = default;
  constexpr Org__BouncyCastle__Crypto__Signers__Ed25519Signer__Buffer& operator=(Org__BouncyCastle__Crypto__Signers__Ed25519Signer__Buffer const& o) noexcept = default;
                


// Methods

/// @brief Method GenerateSignature addr 0xebce3c size 0x184 virtual false final false
 ::ArrayW<uint8_t> GenerateSignature(Org::BouncyCastle::Crypto::Parameters::Ed25519PrivateKeyParameters privateKey) ;

/// @brief Method VerifySignature addr 0xebd038 size 0x1b0 virtual false final false
 bool VerifySignature(Org::BouncyCastle::Crypto::Parameters::Ed25519PublicKeyParameters publicKey, ::ArrayW<uint8_t> signature) ;

/// @brief Method Reset addr 0xebd200 size 0xf0 virtual false final false
 void Reset() ;

// Ctor Parameters []
explicit Org__BouncyCastle__Crypto__Signers__Ed25519Signer__Buffer() ;

/// @brief Method .ctor addr 0xebcc58 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Signers
// Type: Org.BouncyCastle.Crypto.Signers::Ed25519Signer
namespace Org::BouncyCastle::Crypto::Signers {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1135))
// CS Name: Org.BouncyCastle.Crypto.Signers.Ed25519Signer
class CORDL_TYPE Ed25519Signer : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using Buffer = Org::BouncyCastle::Crypto::Signers::Org__BouncyCastle__Crypto__Signers__Ed25519Signer__Buffer;

/// @brief Convert operator to Org::BouncyCastle::Crypto::ISigner
constexpr operator  Org::BouncyCastle::Crypto::ISigner() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~Ed25519Signer() = default;

// Ctor Parameters [CppParam { name: "", ty: "Ed25519Signer", modifiers: " const&", def_value: None }]
constexpr Ed25519Signer(Ed25519Signer const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Ed25519Signer", modifiers: "&&", def_value: None }]
constexpr Ed25519Signer(Ed25519Signer&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Ed25519Signer(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Ed25519Signer& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Ed25519Signer& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Ed25519Signer& operator=(Ed25519Signer&& o) noexcept = default;
  constexpr Ed25519Signer& operator=(Ed25519Signer const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Crypto::Signers::Org__BouncyCastle__Crypto__Signers__Ed25519Signer__Buffer __declspec(property(get=__get_buffer, put=__set_buffer))  buffer;

constexpr void __set_buffer(Org::BouncyCastle::Crypto::Signers::Org__BouncyCastle__Crypto__Signers__Ed25519Signer__Buffer value) ;

constexpr Org::BouncyCastle::Crypto::Signers::Org__BouncyCastle__Crypto__Signers__Ed25519Signer__Buffer __get_buffer() const;

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

// Ctor Parameters []
explicit Ed25519Signer() ;

/// @brief Method .ctor addr 0xebcbf0 size 0x68 virtual false final false
 void _ctor() ;

/// @brief Method get_AlgorithmName addr 0xebcc60 size 0x40 virtual true final false
 ::StringW get_AlgorithmName() ;

/// @brief Method Init addr 0xebcca0 size 0xe0 virtual true final false
 void Init(bool forSigning, Org::BouncyCastle::Crypto::ICipherParameters parameters) ;

/// @brief Method Update addr 0xebcd80 size 0x24 virtual true final false
 void Update(uint8_t b) ;

/// @brief Method BlockUpdate addr 0xebcda4 size 0x24 virtual true final false
 void BlockUpdate(::ArrayW<uint8_t> buf, int32_t off, int32_t len) ;

/// @brief Method GenerateSignature addr 0xebcdc8 size 0x74 virtual true final false
 ::ArrayW<uint8_t> GenerateSignature() ;

/// @brief Method VerifySignature addr 0xebcfc0 size 0x78 virtual true final false
 bool VerifySignature(::ArrayW<uint8_t> signature) ;

/// @brief Method Reset addr 0xebd1e8 size 0x18 virtual true final false
 void Reset() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Signers
NEED_NO_BOX(Org::BouncyCastle::Crypto::Signers::Ed25519Signer);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Signers::Ed25519Signer, "Org.BouncyCastle.Crypto.Signers", "Ed25519Signer");
NEED_NO_BOX(Org::BouncyCastle::Crypto::Signers::Org__BouncyCastle__Crypto__Signers__Ed25519Signer__Buffer);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Signers::Org__BouncyCastle__Crypto__Signers__Ed25519Signer__Buffer, "Org.BouncyCastle.Crypto.Signers", "Ed25519Signer/Buffer");
