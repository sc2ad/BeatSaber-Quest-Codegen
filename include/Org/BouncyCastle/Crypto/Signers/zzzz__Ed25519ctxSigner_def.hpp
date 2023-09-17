#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "System/IO/zzzz__MemoryStream_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace Org::BouncyCastle::Crypto::Parameters {
class Ed25519PrivateKeyParameters;
}
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
namespace Org::BouncyCastle::Crypto {
class ISigner;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class Ed25519PublicKeyParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Signers {
class Ed25519ctxSigner;
}
namespace Org::BouncyCastle::Crypto::Signers {
class ____Org__BouncyCastle__Crypto__Signers__Ed25519ctxSigner__Buffer;
}
// Type: ::Buffer
namespace Org::BouncyCastle::Crypto::Signers {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1131))
// CS Name: Org.BouncyCastle.Crypto.Signers.Ed25519ctxSigner::Buffer
class CORDL_TYPE ____Org__BouncyCastle__Crypto__Signers__Ed25519ctxSigner__Buffer : public ::System::IO::MemoryStream {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~____Org__BouncyCastle__Crypto__Signers__Ed25519ctxSigner__Buffer() = default;

// Ctor Parameters [CppParam { name: "", ty: "____Org__BouncyCastle__Crypto__Signers__Ed25519ctxSigner__Buffer", modifiers: " const&", def_value: None }]
constexpr ____Org__BouncyCastle__Crypto__Signers__Ed25519ctxSigner__Buffer(____Org__BouncyCastle__Crypto__Signers__Ed25519ctxSigner__Buffer const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____Org__BouncyCastle__Crypto__Signers__Ed25519ctxSigner__Buffer", modifiers: "&&", def_value: None }]
constexpr ____Org__BouncyCastle__Crypto__Signers__Ed25519ctxSigner__Buffer(____Org__BouncyCastle__Crypto__Signers__Ed25519ctxSigner__Buffer&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____Org__BouncyCastle__Crypto__Signers__Ed25519ctxSigner__Buffer(void* ptr) noexcept : ::System::IO::MemoryStream(ptr) {
}


  constexpr ____Org__BouncyCastle__Crypto__Signers__Ed25519ctxSigner__Buffer& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____Org__BouncyCastle__Crypto__Signers__Ed25519ctxSigner__Buffer& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____Org__BouncyCastle__Crypto__Signers__Ed25519ctxSigner__Buffer& operator=(____Org__BouncyCastle__Crypto__Signers__Ed25519ctxSigner__Buffer&& o) noexcept = default;
  constexpr ____Org__BouncyCastle__Crypto__Signers__Ed25519ctxSigner__Buffer& operator=(____Org__BouncyCastle__Crypto__Signers__Ed25519ctxSigner__Buffer const& o) noexcept = default;
                


// Methods

/// @brief Method GenerateSignature addr 0xebbf60 size 0x190 virtual false final false
 ::ArrayW<uint8_t> GenerateSignature(::Org::BouncyCastle::Crypto::Parameters::Ed25519PrivateKeyParameters privateKey, ::ArrayW<uint8_t> ctx) ;

/// @brief Method VerifySignature addr 0xebc170 size 0x1c0 virtual false final false
 bool VerifySignature(::Org::BouncyCastle::Crypto::Parameters::Ed25519PublicKeyParameters publicKey, ::ArrayW<uint8_t> ctx, ::ArrayW<uint8_t> signature) ;

/// @brief Method Reset addr 0xebc348 size 0xf0 virtual false final false
 void Reset() ;

// Ctor Parameters []
explicit ____Org__BouncyCastle__Crypto__Signers__Ed25519ctxSigner__Buffer() ;

/// @brief Method .ctor addr 0xebbd74 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Signers
// Type: Org.BouncyCastle.Crypto.Signers::Ed25519ctxSigner
namespace Org::BouncyCastle::Crypto::Signers {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1132))
// CS Name: Org.BouncyCastle.Crypto.Signers.Ed25519ctxSigner
class CORDL_TYPE Ed25519ctxSigner : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using Buffer = ::Org::BouncyCastle::Crypto::Signers::____Org__BouncyCastle__Crypto__Signers__Ed25519ctxSigner__Buffer;

/// @brief Convert operator to ::Org::BouncyCastle::Crypto::ISigner
constexpr operator  ::Org::BouncyCastle::Crypto::ISigner() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~Ed25519ctxSigner() = default;

// Ctor Parameters [CppParam { name: "", ty: "Ed25519ctxSigner", modifiers: " const&", def_value: None }]
constexpr Ed25519ctxSigner(Ed25519ctxSigner const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Ed25519ctxSigner", modifiers: "&&", def_value: None }]
constexpr Ed25519ctxSigner(Ed25519ctxSigner&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Ed25519ctxSigner(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Ed25519ctxSigner& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Ed25519ctxSigner& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Ed25519ctxSigner& operator=(Ed25519ctxSigner&& o) noexcept = default;
  constexpr Ed25519ctxSigner& operator=(Ed25519ctxSigner const& o) noexcept = default;
                


// Fields

 ::Org::BouncyCastle::Crypto::Signers::____Org__BouncyCastle__Crypto__Signers__Ed25519ctxSigner__Buffer __declspec(property(get=__get_buffer, put=__set_buffer))  buffer;

constexpr void __set_buffer(::Org::BouncyCastle::Crypto::Signers::____Org__BouncyCastle__Crypto__Signers__Ed25519ctxSigner__Buffer value) ;

constexpr ::Org::BouncyCastle::Crypto::Signers::____Org__BouncyCastle__Crypto__Signers__Ed25519ctxSigner__Buffer __get_buffer() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_context, put=__set_context))  context;

constexpr void __set_context(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_context() const;

 bool __declspec(property(get=__get_forSigning, put=__set_forSigning))  forSigning;

constexpr void __set_forSigning(bool value) ;

constexpr bool __get_forSigning() const;

 ::Org::BouncyCastle::Crypto::Parameters::Ed25519PrivateKeyParameters __declspec(property(get=__get_privateKey, put=__set_privateKey))  privateKey;

constexpr void __set_privateKey(::Org::BouncyCastle::Crypto::Parameters::Ed25519PrivateKeyParameters value) ;

constexpr ::Org::BouncyCastle::Crypto::Parameters::Ed25519PrivateKeyParameters __get_privateKey() const;

 ::Org::BouncyCastle::Crypto::Parameters::Ed25519PublicKeyParameters __declspec(property(get=__get_publicKey, put=__set_publicKey))  publicKey;

constexpr void __set_publicKey(::Org::BouncyCastle::Crypto::Parameters::Ed25519PublicKeyParameters value) ;

constexpr ::Org::BouncyCastle::Crypto::Parameters::Ed25519PublicKeyParameters __get_publicKey() const;


// Properties

 ::StringW __declspec(property(get=get_AlgorithmName))  AlgorithmName;


// Methods

// Ctor Parameters [CppParam { name: "context", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
explicit Ed25519ctxSigner(::ArrayW<uint8_t> context) ;

/// @brief Method .ctor addr 0xebbcc8 size 0xac virtual false final false
 void _ctor(::ArrayW<uint8_t> context) ;

/// @brief Method get_AlgorithmName addr 0xebbd7c size 0x40 virtual true final false
 ::StringW get_AlgorithmName() ;

/// @brief Method Init addr 0xebbdbc size 0xe0 virtual true final false
 void Init(bool forSigning, ::Org::BouncyCastle::Crypto::ICipherParameters parameters) ;

/// @brief Method Update addr 0xebbe9c size 0x24 virtual true final false
 void Update(uint8_t b) ;

/// @brief Method BlockUpdate addr 0xebbec0 size 0x24 virtual true final false
 void BlockUpdate(::ArrayW<uint8_t> buf, int32_t off, int32_t len) ;

/// @brief Method GenerateSignature addr 0xebbee4 size 0x7c virtual true final false
 ::ArrayW<uint8_t> GenerateSignature() ;

/// @brief Method VerifySignature addr 0xebc0f0 size 0x80 virtual true final false
 bool VerifySignature(::ArrayW<uint8_t> signature) ;

/// @brief Method Reset addr 0xebc330 size 0x18 virtual true final false
 void Reset() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Signers
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Signers::Ed25519ctxSigner);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Signers::Ed25519ctxSigner, "Org.BouncyCastle.Crypto.Signers", "Ed25519ctxSigner");
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Signers::____Org__BouncyCastle__Crypto__Signers__Ed25519ctxSigner__Buffer);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Signers::____Org__BouncyCastle__Crypto__Signers__Ed25519ctxSigner__Buffer, "Org.BouncyCastle.Crypto.Signers", "Ed25519ctxSigner/Buffer");
