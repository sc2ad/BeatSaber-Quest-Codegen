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
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class Ed448PublicKeyParameters;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class Ed448PrivateKeyParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Signers {
class Ed448Signer;
}
namespace Org::BouncyCastle::Crypto::Signers {
class Org__BouncyCastle__Crypto__Signers__Ed448Signer__Buffer;
}
// Type: ::Buffer
namespace Org::BouncyCastle::Crypto::Signers {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1137))
// CS Name: Org.BouncyCastle.Crypto.Signers.Ed448Signer::Buffer
class CORDL_TYPE Org__BouncyCastle__Crypto__Signers__Ed448Signer__Buffer : public System::IO::MemoryStream {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~Org__BouncyCastle__Crypto__Signers__Ed448Signer__Buffer() = default;

// Ctor Parameters [CppParam { name: "", ty: "Org__BouncyCastle__Crypto__Signers__Ed448Signer__Buffer", modifiers: " const&", def_value: None }]
constexpr Org__BouncyCastle__Crypto__Signers__Ed448Signer__Buffer(Org__BouncyCastle__Crypto__Signers__Ed448Signer__Buffer const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Org__BouncyCastle__Crypto__Signers__Ed448Signer__Buffer", modifiers: "&&", def_value: None }]
constexpr Org__BouncyCastle__Crypto__Signers__Ed448Signer__Buffer(Org__BouncyCastle__Crypto__Signers__Ed448Signer__Buffer&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Org__BouncyCastle__Crypto__Signers__Ed448Signer__Buffer(void* ptr) noexcept : System::IO::MemoryStream(ptr) {
}


  constexpr Org__BouncyCastle__Crypto__Signers__Ed448Signer__Buffer& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Org__BouncyCastle__Crypto__Signers__Ed448Signer__Buffer& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Org__BouncyCastle__Crypto__Signers__Ed448Signer__Buffer& operator=(Org__BouncyCastle__Crypto__Signers__Ed448Signer__Buffer&& o) noexcept = default;
  constexpr Org__BouncyCastle__Crypto__Signers__Ed448Signer__Buffer& operator=(Org__BouncyCastle__Crypto__Signers__Ed448Signer__Buffer const& o) noexcept = default;
                


// Methods

/// @brief Method GenerateSignature addr 0xebdd40 size 0x190 virtual false final false
 ::ArrayW<uint8_t> GenerateSignature(Org::BouncyCastle::Crypto::Parameters::Ed448PrivateKeyParameters privateKey, ::ArrayW<uint8_t> ctx) ;

/// @brief Method VerifySignature addr 0xebdf50 size 0x1c0 virtual false final false
 bool VerifySignature(Org::BouncyCastle::Crypto::Parameters::Ed448PublicKeyParameters publicKey, ::ArrayW<uint8_t> ctx, ::ArrayW<uint8_t> signature) ;

/// @brief Method Reset addr 0xebe128 size 0xf0 virtual false final false
 void Reset() ;

// Ctor Parameters []
explicit Org__BouncyCastle__Crypto__Signers__Ed448Signer__Buffer() ;

/// @brief Method .ctor addr 0xebdb54 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Signers
// Type: Org.BouncyCastle.Crypto.Signers::Ed448Signer
namespace Org::BouncyCastle::Crypto::Signers {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1138))
// CS Name: Org.BouncyCastle.Crypto.Signers.Ed448Signer
class CORDL_TYPE Ed448Signer : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using Buffer = Org::BouncyCastle::Crypto::Signers::Org__BouncyCastle__Crypto__Signers__Ed448Signer__Buffer;

/// @brief Convert operator to Org::BouncyCastle::Crypto::ISigner
constexpr operator  Org::BouncyCastle::Crypto::ISigner() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~Ed448Signer() = default;

// Ctor Parameters [CppParam { name: "", ty: "Ed448Signer", modifiers: " const&", def_value: None }]
constexpr Ed448Signer(Ed448Signer const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Ed448Signer", modifiers: "&&", def_value: None }]
constexpr Ed448Signer(Ed448Signer&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Ed448Signer(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Ed448Signer& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Ed448Signer& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Ed448Signer& operator=(Ed448Signer&& o) noexcept = default;
  constexpr Ed448Signer& operator=(Ed448Signer const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Crypto::Signers::Org__BouncyCastle__Crypto__Signers__Ed448Signer__Buffer __declspec(property(get=__get_buffer, put=__set_buffer))  buffer;

constexpr void __set_buffer(Org::BouncyCastle::Crypto::Signers::Org__BouncyCastle__Crypto__Signers__Ed448Signer__Buffer value) ;

constexpr Org::BouncyCastle::Crypto::Signers::Org__BouncyCastle__Crypto__Signers__Ed448Signer__Buffer __get_buffer() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_context, put=__set_context))  context;

constexpr void __set_context(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_context() const;

 bool __declspec(property(get=__get_forSigning, put=__set_forSigning))  forSigning;

constexpr void __set_forSigning(bool value) ;

constexpr bool __get_forSigning() const;

 Org::BouncyCastle::Crypto::Parameters::Ed448PrivateKeyParameters __declspec(property(get=__get_privateKey, put=__set_privateKey))  privateKey;

constexpr void __set_privateKey(Org::BouncyCastle::Crypto::Parameters::Ed448PrivateKeyParameters value) ;

constexpr Org::BouncyCastle::Crypto::Parameters::Ed448PrivateKeyParameters __get_privateKey() const;

 Org::BouncyCastle::Crypto::Parameters::Ed448PublicKeyParameters __declspec(property(get=__get_publicKey, put=__set_publicKey))  publicKey;

constexpr void __set_publicKey(Org::BouncyCastle::Crypto::Parameters::Ed448PublicKeyParameters value) ;

constexpr Org::BouncyCastle::Crypto::Parameters::Ed448PublicKeyParameters __get_publicKey() const;


// Properties

 ::StringW __declspec(property(get=get_AlgorithmName))  AlgorithmName;


// Methods

// Ctor Parameters [CppParam { name: "context", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
explicit Ed448Signer(::ArrayW<uint8_t> context) ;

/// @brief Method .ctor addr 0xebdaa8 size 0xac virtual false final false
 void _ctor(::ArrayW<uint8_t> context) ;

/// @brief Method get_AlgorithmName addr 0xebdb5c size 0x40 virtual true final false
 ::StringW get_AlgorithmName() ;

/// @brief Method Init addr 0xebdb9c size 0xe0 virtual true final false
 void Init(bool forSigning, Org::BouncyCastle::Crypto::ICipherParameters parameters) ;

/// @brief Method Update addr 0xebdc7c size 0x24 virtual true final false
 void Update(uint8_t b) ;

/// @brief Method BlockUpdate addr 0xebdca0 size 0x24 virtual true final false
 void BlockUpdate(::ArrayW<uint8_t> buf, int32_t off, int32_t len) ;

/// @brief Method GenerateSignature addr 0xebdcc4 size 0x7c virtual true final false
 ::ArrayW<uint8_t> GenerateSignature() ;

/// @brief Method VerifySignature addr 0xebded0 size 0x80 virtual true final false
 bool VerifySignature(::ArrayW<uint8_t> signature) ;

/// @brief Method Reset addr 0xebe110 size 0x18 virtual true final false
 void Reset() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Signers
NEED_NO_BOX(Org::BouncyCastle::Crypto::Signers::Ed448Signer);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Signers::Ed448Signer, "Org.BouncyCastle.Crypto.Signers", "Ed448Signer");
NEED_NO_BOX(Org::BouncyCastle::Crypto::Signers::Org__BouncyCastle__Crypto__Signers__Ed448Signer__Buffer);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Signers::Org__BouncyCastle__Crypto__Signers__Ed448Signer__Buffer, "Org.BouncyCastle.Crypto.Signers", "Ed448Signer/Buffer");
