#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace Org::BouncyCastle::Crypto {
class IStreamCipher;
}
namespace Org::BouncyCastle::Crypto {
class IBlockCipher;
}
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto {
class StreamBlockCipher;
}
// Type: Org.BouncyCastle.Crypto::StreamBlockCipher
namespace Org::BouncyCastle::Crypto {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1355))
// CS Name: Org.BouncyCastle.Crypto.StreamBlockCipher
class CORDL_TYPE StreamBlockCipher : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::Org::BouncyCastle::Crypto::IStreamCipher
constexpr operator  ::Org::BouncyCastle::Crypto::IStreamCipher() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~StreamBlockCipher() = default;

// Ctor Parameters [CppParam { name: "", ty: "StreamBlockCipher", modifiers: " const&", def_value: None }]
constexpr StreamBlockCipher(StreamBlockCipher const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "StreamBlockCipher", modifiers: "&&", def_value: None }]
constexpr StreamBlockCipher(StreamBlockCipher&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit StreamBlockCipher(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr StreamBlockCipher& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr StreamBlockCipher& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr StreamBlockCipher& operator=(StreamBlockCipher&& o) noexcept = default;
  constexpr StreamBlockCipher& operator=(StreamBlockCipher const& o) noexcept = default;
                


// Fields

 ::Org::BouncyCastle::Crypto::IBlockCipher __declspec(property(get=__get_cipher, put=__set_cipher))  cipher;

constexpr void __set_cipher(::Org::BouncyCastle::Crypto::IBlockCipher value) ;

constexpr ::Org::BouncyCastle::Crypto::IBlockCipher __get_cipher() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_oneByte, put=__set_oneByte))  oneByte;

constexpr void __set_oneByte(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_oneByte() const;


// Properties

 ::StringW __declspec(property(get=get_AlgorithmName))  AlgorithmName;


// Methods

// Ctor Parameters [CppParam { name: "cipher", ty: "::Org::BouncyCastle::Crypto::IBlockCipher", modifiers: "", def_value: None }]
explicit StreamBlockCipher(::Org::BouncyCastle::Crypto::IBlockCipher cipher) ;

/// @brief Method .ctor addr 0xf38ee4 size 0x180 virtual false final false
 void _ctor(::Org::BouncyCastle::Crypto::IBlockCipher cipher) ;

/// @brief Method Init addr 0xf39064 size 0xbc virtual true final true
 void Init(bool forEncryption, ::Org::BouncyCastle::Crypto::ICipherParameters parameters) ;

/// @brief Method get_AlgorithmName addr 0xf39120 size 0xa0 virtual true final true
 ::StringW get_AlgorithmName() ;

/// @brief Method ReturnByte addr 0xf391c0 size 0xec virtual true final true
 uint8_t ReturnByte(uint8_t input) ;

/// @brief Method ProcessBytes addr 0xf392ac size 0x164 virtual true final true
 void ProcessBytes(::ArrayW<uint8_t> input, int32_t inOff, int32_t length, ::ArrayW<uint8_t> output, int32_t outOff) ;

/// @brief Method Reset addr 0xf39410 size 0xa4 virtual true final true
 void Reset() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Crypto::StreamBlockCipher);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::StreamBlockCipher, "Org.BouncyCastle.Crypto", "StreamBlockCipher");
