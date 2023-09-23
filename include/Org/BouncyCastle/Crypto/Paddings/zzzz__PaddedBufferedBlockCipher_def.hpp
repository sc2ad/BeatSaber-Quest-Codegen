#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__BufferedBlockCipher_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
namespace Org::BouncyCastle::Crypto::Paddings {
class IBlockCipherPadding;
}
namespace Org::BouncyCastle::Crypto {
class IBlockCipher;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Paddings {
class PaddedBufferedBlockCipher;
}
// Type: Org.BouncyCastle.Crypto.Paddings::PaddedBufferedBlockCipher
namespace Org::BouncyCastle::Crypto::Paddings {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(966))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1008))
// CS Name: Org.BouncyCastle.Crypto.Paddings.PaddedBufferedBlockCipher
class CORDL_TYPE PaddedBufferedBlockCipher : public Org::BouncyCastle::Crypto::BufferedBlockCipher {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~PaddedBufferedBlockCipher() = default;

// Ctor Parameters [CppParam { name: "", ty: "PaddedBufferedBlockCipher", modifiers: " const&", def_value: None }]
constexpr PaddedBufferedBlockCipher(PaddedBufferedBlockCipher const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PaddedBufferedBlockCipher", modifiers: "&&", def_value: None }]
constexpr PaddedBufferedBlockCipher(PaddedBufferedBlockCipher&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PaddedBufferedBlockCipher(void* ptr) noexcept : Org::BouncyCastle::Crypto::BufferedBlockCipher(ptr) {
}


  constexpr PaddedBufferedBlockCipher& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PaddedBufferedBlockCipher& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PaddedBufferedBlockCipher& operator=(PaddedBufferedBlockCipher&& o) noexcept = default;
  constexpr PaddedBufferedBlockCipher& operator=(PaddedBufferedBlockCipher const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Crypto::Paddings::IBlockCipherPadding __declspec(property(get=__get_padding, put=__set_padding))  padding;

constexpr void __set_padding(Org::BouncyCastle::Crypto::Paddings::IBlockCipherPadding value) ;

constexpr Org::BouncyCastle::Crypto::Paddings::IBlockCipherPadding __get_padding() const;


// Methods

// Ctor Parameters [CppParam { name: "cipher", ty: "Org::BouncyCastle::Crypto::IBlockCipher", modifiers: "", def_value: None }, CppParam { name: "padding", ty: "Org::BouncyCastle::Crypto::Paddings::IBlockCipherPadding", modifiers: "", def_value: None }]
explicit PaddedBufferedBlockCipher(Org::BouncyCastle::Crypto::IBlockCipher cipher, Org::BouncyCastle::Crypto::Paddings::IBlockCipherPadding padding) ;

/// @brief Method .ctor addr 0xea131c size 0xf0 virtual false final false
 void _ctor(Org::BouncyCastle::Crypto::IBlockCipher cipher, Org::BouncyCastle::Crypto::Paddings::IBlockCipherPadding padding) ;

// Ctor Parameters [CppParam { name: "cipher", ty: "Org::BouncyCastle::Crypto::IBlockCipher", modifiers: "", def_value: None }]
explicit PaddedBufferedBlockCipher(Org::BouncyCastle::Crypto::IBlockCipher cipher) ;

/// @brief Method .ctor addr 0xea140c size 0x74 virtual false final false
 void _ctor(Org::BouncyCastle::Crypto::IBlockCipher cipher) ;

/// @brief Method Init addr 0xea1488 size 0x1a4 virtual true final false
 void Init(bool forEncryption, Org::BouncyCastle::Crypto::ICipherParameters parameters) ;

/// @brief Method GetOutputSize addr 0xea162c size 0x4c virtual true final false
 int32_t GetOutputSize(int32_t length) ;

/// @brief Method GetUpdateOutputSize addr 0xea1678 size 0x38 virtual true final false
 int32_t GetUpdateOutputSize(int32_t length) ;

/// @brief Method ProcessByte addr 0xea16b0 size 0x128 virtual true final false
 int32_t ProcessByte(uint8_t input, ::ArrayW<uint8_t> output, int32_t outOff) ;

/// @brief Method ProcessBytes addr 0xea17d8 size 0x2b4 virtual true final false
 int32_t ProcessBytes(::ArrayW<uint8_t> input, int32_t inOff, int32_t length, ::ArrayW<uint8_t> output, int32_t outOff) ;

/// @brief Method DoFinal addr 0xea1a8c size 0x4e4 virtual true final false
 int32_t DoFinal(::ArrayW<uint8_t> output, int32_t outOff) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Paddings
NEED_NO_BOX(Org::BouncyCastle::Crypto::Paddings::PaddedBufferedBlockCipher);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Paddings::PaddedBufferedBlockCipher, "Org.BouncyCastle.Crypto.Paddings", "PaddedBufferedBlockCipher");
