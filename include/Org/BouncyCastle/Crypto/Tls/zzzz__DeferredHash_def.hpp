#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace Org::BouncyCastle::Crypto::Tls {
class TlsHandshakeHash;
}
namespace Org::BouncyCastle::Crypto {
class IDigest;
}
namespace System::Collections {
class IDictionary;
}
namespace Org::BouncyCastle::Crypto::Tls {
class DigestInputBuffer;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsContext;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class DeferredHash;
}
// Type: Org.BouncyCastle.Crypto.Tls::DeferredHash
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1218))
// CS Name: Org.BouncyCastle.Crypto.Tls.DeferredHash
class CORDL_TYPE DeferredHash : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::Org::BouncyCastle::Crypto::Tls::TlsHandshakeHash
constexpr operator  ::Org::BouncyCastle::Crypto::Tls::TlsHandshakeHash() const noexcept;

/// @brief Convert operator to ::Org::BouncyCastle::Crypto::IDigest
constexpr operator  ::Org::BouncyCastle::Crypto::IDigest() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~DeferredHash() = default;

// Ctor Parameters [CppParam { name: "", ty: "DeferredHash", modifiers: " const&", def_value: None }]
constexpr DeferredHash(DeferredHash const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DeferredHash", modifiers: "&&", def_value: None }]
constexpr DeferredHash(DeferredHash&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DeferredHash(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr DeferredHash& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DeferredHash& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DeferredHash& operator=(DeferredHash&& o) noexcept = default;
  constexpr DeferredHash& operator=(DeferredHash const& o) noexcept = default;
                


// Fields

/// @brief Field BUFFERING_HASH_LIMIT offset 0
static constexpr int32_t  BUFFERING_HASH_LIMIT{4};

 ::Org::BouncyCastle::Crypto::Tls::TlsContext __declspec(property(get=__get_mContext, put=__set_mContext))  mContext;

constexpr void __set_mContext(::Org::BouncyCastle::Crypto::Tls::TlsContext value) ;

constexpr ::Org::BouncyCastle::Crypto::Tls::TlsContext __get_mContext() const;

 ::Org::BouncyCastle::Crypto::Tls::DigestInputBuffer __declspec(property(get=__get_mBuf, put=__set_mBuf))  mBuf;

constexpr void __set_mBuf(::Org::BouncyCastle::Crypto::Tls::DigestInputBuffer value) ;

constexpr ::Org::BouncyCastle::Crypto::Tls::DigestInputBuffer __get_mBuf() const;

 ::System::Collections::IDictionary __declspec(property(get=__get_mHashes, put=__set_mHashes))  mHashes;

constexpr void __set_mHashes(::System::Collections::IDictionary value) ;

constexpr ::System::Collections::IDictionary __get_mHashes() const;

 int32_t __declspec(property(get=__get_mPrfHashAlgorithm, put=__set_mPrfHashAlgorithm))  mPrfHashAlgorithm;

constexpr void __set_mPrfHashAlgorithm(int32_t value) ;

constexpr int32_t __get_mPrfHashAlgorithm() const;


// Properties

 ::StringW __declspec(property(get=get_AlgorithmName))  AlgorithmName;


// Methods

// Ctor Parameters []
explicit DeferredHash() ;

/// @brief Method .ctor addr 0xed77f8 size 0xa4 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "prfHashAlgorithm", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "prfHash", ty: "::Org::BouncyCastle::Crypto::IDigest", modifiers: "", def_value: None }]
explicit DeferredHash(uint8_t prfHashAlgorithm, ::Org::BouncyCastle::Crypto::IDigest prfHash) ;

/// @brief Method .ctor addr 0xed78a4 size 0x138 virtual false final false
 void _ctor(uint8_t prfHashAlgorithm, ::Org::BouncyCastle::Crypto::IDigest prfHash) ;

/// @brief Method Init addr 0xed79dc size 0x8 virtual true final false
 void Init(::Org::BouncyCastle::Crypto::Tls::TlsContext context) ;

/// @brief Method NotifyPrfDetermined addr 0xed79e4 size 0x180 virtual true final false
 ::Org::BouncyCastle::Crypto::Tls::TlsHandshakeHash NotifyPrfDetermined() ;

/// @brief Method TrackHashAlgorithm addr 0xed7bdc size 0x6c virtual true final false
 void TrackHashAlgorithm(uint8_t hashAlgorithm) ;

/// @brief Method SealHashAlgorithms addr 0xed7c48 size 0x10 virtual true final false
 void SealHashAlgorithms() ;

/// @brief Method StopTracking addr 0xed7c58 size 0x1c4 virtual true final false
 ::Org::BouncyCastle::Crypto::Tls::TlsHandshakeHash StopTracking() ;

/// @brief Method ForkPrfHash addr 0xed7e1c size 0x1b4 virtual true final false
 ::Org::BouncyCastle::Crypto::IDigest ForkPrfHash() ;

/// @brief Method GetFinalHash addr 0xed7fd0 size 0x220 virtual true final false
 ::ArrayW<uint8_t> GetFinalHash(uint8_t hashAlgorithm) ;

/// @brief Method get_AlgorithmName addr 0xed81f0 size 0x50 virtual true final false
 ::StringW get_AlgorithmName() ;

/// @brief Method GetByteLength addr 0xed8240 size 0x50 virtual true final false
 int32_t GetByteLength() ;

/// @brief Method GetDigestSize addr 0xed8290 size 0x50 virtual true final false
 int32_t GetDigestSize() ;

/// @brief Method Update addr 0xed82e0 size 0x43c virtual true final false
 void Update(uint8_t input) ;

/// @brief Method BlockUpdate addr 0xed871c size 0x460 virtual true final false
 void BlockUpdate(::ArrayW<uint8_t> input, int32_t inOff, int32_t len) ;

/// @brief Method DoFinal addr 0xed8b7c size 0x50 virtual true final false
 int32_t DoFinal(::ArrayW<uint8_t> output, int32_t outOff) ;

/// @brief Method Reset addr 0xed8bcc size 0x428 virtual true final false
 void Reset() ;

/// @brief Method CheckStopBuffering addr 0xed8ff4 size 0x454 virtual true final false
 void CheckStopBuffering() ;

/// @brief Method CheckTrackingHash addr 0xed9448 size 0x1a0 virtual true final false
 void CheckTrackingHash(uint8_t hashAlgorithm) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Tls
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::DeferredHash);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::DeferredHash, "Org.BouncyCastle.Crypto.Tls", "DeferredHash");
