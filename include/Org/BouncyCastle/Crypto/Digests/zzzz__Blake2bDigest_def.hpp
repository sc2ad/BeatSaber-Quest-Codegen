#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace Org::BouncyCastle::Crypto {
class IDigest;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Digests {
class Blake2bDigest;
}
// Type: Org.BouncyCastle.Crypto.Digests::Blake2bDigest
namespace Org::BouncyCastle::Crypto::Digests {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(746))
// CS Name: Org.BouncyCastle.Crypto.Digests.Blake2bDigest
class CORDL_TYPE Blake2bDigest : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::Org::BouncyCastle::Crypto::IDigest
constexpr operator  ::Org::BouncyCastle::Crypto::IDigest() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x68};

virtual ~Blake2bDigest() = default;

// Ctor Parameters [CppParam { name: "", ty: "Blake2bDigest", modifiers: " const&", def_value: None }]
constexpr Blake2bDigest(Blake2bDigest const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Blake2bDigest", modifiers: "&&", def_value: None }]
constexpr Blake2bDigest(Blake2bDigest&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Blake2bDigest(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Blake2bDigest& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Blake2bDigest& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Blake2bDigest& operator=(Blake2bDigest&& o) noexcept = default;
  constexpr Blake2bDigest& operator=(Blake2bDigest const& o) noexcept = default;
                


// Fields

/// @brief Field ROUNDS offset 0
static constexpr int32_t  ROUNDS{12};

/// @brief Field BLOCK_LENGTH_BYTES offset 0
static constexpr int32_t  BLOCK_LENGTH_BYTES{128};

static ::ArrayW<uint64_t> __declspec(property(get=__get_blake2b_IV, put=__set_blake2b_IV))  blake2b_IV;

static void __set_blake2b_IV(::ArrayW<uint64_t> value) ;

static ::ArrayW<uint64_t> __get_blake2b_IV() ;

static /* UNKNOWN TYPE! Il2CppType { data: ArrayType, attrs: 49, ty: Array, byref: false, pinned: false, valuetype: false } */ __declspec(property(get=__get_blake2b_sigma, put=__set_blake2b_sigma))  blake2b_sigma;

static void __set_blake2b_sigma(/* UNKNOWN TYPE! Il2CppType { data: ArrayType, attrs: 49, ty: Array, byref: false, pinned: false, valuetype: false } */ value) ;

static /* UNKNOWN TYPE! Il2CppType { data: ArrayType, attrs: 49, ty: Array, byref: false, pinned: false, valuetype: false } */ __get_blake2b_sigma() ;

 int32_t __declspec(property(get=__get_digestLength, put=__set_digestLength))  digestLength;

constexpr void __set_digestLength(int32_t value) ;

constexpr int32_t __get_digestLength() const;

 int32_t __declspec(property(get=__get_keyLength, put=__set_keyLength))  keyLength;

constexpr void __set_keyLength(int32_t value) ;

constexpr int32_t __get_keyLength() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_salt, put=__set_salt))  salt;

constexpr void __set_salt(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_salt() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_personalization, put=__set_personalization))  personalization;

constexpr void __set_personalization(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_personalization() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_key, put=__set_key))  key;

constexpr void __set_key(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_key() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_buffer, put=__set_buffer))  buffer;

constexpr void __set_buffer(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_buffer() const;

 int32_t __declspec(property(get=__get_bufferPos, put=__set_bufferPos))  bufferPos;

constexpr void __set_bufferPos(int32_t value) ;

constexpr int32_t __get_bufferPos() const;

 ::ArrayW<uint64_t> __declspec(property(get=__get_internalState, put=__set_internalState))  internalState;

constexpr void __set_internalState(::ArrayW<uint64_t> value) ;

constexpr ::ArrayW<uint64_t> __get_internalState() const;

 ::ArrayW<uint64_t> __declspec(property(get=__get_chainValue, put=__set_chainValue))  chainValue;

constexpr void __set_chainValue(::ArrayW<uint64_t> value) ;

constexpr ::ArrayW<uint64_t> __get_chainValue() const;

 uint64_t __declspec(property(get=__get_t0, put=__set_t0))  t0;

constexpr void __set_t0(uint64_t value) ;

constexpr uint64_t __get_t0() const;

 uint64_t __declspec(property(get=__get_t1, put=__set_t1))  t1;

constexpr void __set_t1(uint64_t value) ;

constexpr uint64_t __get_t1() const;

 uint64_t __declspec(property(get=__get_f0, put=__set_f0))  f0;

constexpr void __set_f0(uint64_t value) ;

constexpr uint64_t __get_f0() const;


// Properties

 ::StringW __declspec(property(get=get_AlgorithmName))  AlgorithmName;


// Methods

// Ctor Parameters []
explicit Blake2bDigest() ;

/// @brief Method .ctor addr 0x11922fc size 0x8 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "digest", ty: "::Org::BouncyCastle::Crypto::Digests::Blake2bDigest", modifiers: "", def_value: None }]
explicit Blake2bDigest(::Org::BouncyCastle::Crypto::Digests::Blake2bDigest digest) ;

/// @brief Method .ctor addr 0x1192420 size 0x134 virtual false final false
 void _ctor(::Org::BouncyCastle::Crypto::Digests::Blake2bDigest digest) ;

// Ctor Parameters [CppParam { name: "digestSize", ty: "int32_t", modifiers: "", def_value: None }]
explicit Blake2bDigest(int32_t digestSize) ;

/// @brief Method .ctor addr 0x1192304 size 0x11c virtual false final false
 void _ctor(int32_t digestSize) ;

// Ctor Parameters [CppParam { name: "key", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
explicit Blake2bDigest(::ArrayW<uint8_t> key) ;

/// @brief Method .ctor addr 0x1192800 size 0x164 virtual false final false
 void _ctor(::ArrayW<uint8_t> key) ;

// Ctor Parameters [CppParam { name: "key", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "digestLength", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "salt", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "personalization", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
explicit Blake2bDigest(::ArrayW<uint8_t> key, int32_t digestLength, ::ArrayW<uint8_t> salt, ::ArrayW<uint8_t> personalization) ;

/// @brief Method .ctor addr 0x1192964 size 0x268 virtual false final false
 void _ctor(::ArrayW<uint8_t> key, int32_t digestLength, ::ArrayW<uint8_t> salt, ::ArrayW<uint8_t> personalization) ;

/// @brief Method Init addr 0x1192554 size 0x2ac virtual false final false
 void Init() ;

/// @brief Method InitializeInternalState addr 0x1192bcc size 0x148 virtual false final false
 void InitializeInternalState() ;

/// @brief Method Update addr 0x1192d14 size 0xb8 virtual true final false
 void Update(uint8_t b) ;

/// @brief Method BlockUpdate addr 0x1193358 size 0x140 virtual true final false
 void BlockUpdate(::ArrayW<uint8_t> message, int32_t offset, int32_t len) ;

/// @brief Method DoFinal addr 0x1193498 size 0x14c virtual true final false
 int32_t DoFinal(::ArrayW<uint8_t> output, int32_t outOffset) ;

/// @brief Method Reset addr 0x11935e4 size 0x68 virtual true final false
 void Reset() ;

/// @brief Method Compress addr 0x1192dcc size 0x58c virtual false final false
 void Compress(::ArrayW<uint8_t> message, int32_t messagePos) ;

/// @brief Method G addr 0x119364c size 0x208 virtual false final false
 void G(uint64_t m1, uint64_t m2, int32_t posA, int32_t posB, int32_t posC, int32_t posD) ;

/// @brief Method Rotr64 addr 0x1193854 size 0x8 virtual false final false
static uint64_t Rotr64(uint64_t x, int32_t rot) ;

/// @brief Method get_AlgorithmName addr 0x119385c size 0x40 virtual true final false
 ::StringW get_AlgorithmName() ;

/// @brief Method GetDigestSize addr 0x119389c size 0x8 virtual true final false
 int32_t GetDigestSize() ;

/// @brief Method GetByteLength addr 0x11938a4 size 0x8 virtual true final false
 int32_t GetByteLength() ;

/// @brief Method ClearKey addr 0x11938ac size 0x48 virtual true final false
 void ClearKey() ;

/// @brief Method ClearSalt addr 0x11938f4 size 0x1c virtual true final false
 void ClearSalt() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Digests
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Digests::Blake2bDigest);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Digests::Blake2bDigest, "Org.BouncyCastle.Crypto.Digests", "Blake2bDigest");
