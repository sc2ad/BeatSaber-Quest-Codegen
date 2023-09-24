#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__BufferedBlockCipher_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Crypto {
class IBlockCipher;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Modes {
class CtsBlockCipher;
}
// Type: Org.BouncyCastle.Crypto.Modes::CtsBlockCipher
namespace Org::BouncyCastle::Crypto::Modes {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(966))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(967))
// CS Name: Org.BouncyCastle.Crypto.Modes.CtsBlockCipher
class CORDL_TYPE CtsBlockCipher : public Org::BouncyCastle::Crypto::BufferedBlockCipher {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~CtsBlockCipher() = default;

// Ctor Parameters [CppParam { name: "", ty: "CtsBlockCipher", modifiers: " const&", def_value: None }]
constexpr CtsBlockCipher(CtsBlockCipher const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CtsBlockCipher", modifiers: "&&", def_value: None }]
constexpr CtsBlockCipher(CtsBlockCipher&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CtsBlockCipher(void* ptr) noexcept : Org::BouncyCastle::Crypto::BufferedBlockCipher(ptr) {
}


  constexpr CtsBlockCipher& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CtsBlockCipher& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CtsBlockCipher& operator=(CtsBlockCipher&& o) noexcept = default;
  constexpr CtsBlockCipher& operator=(CtsBlockCipher const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get_blockSize, put=__set_blockSize))  blockSize;

constexpr void __set_blockSize(int32_t value) ;

constexpr int32_t __get_blockSize() const;


// Methods

static Org::BouncyCastle::Crypto::Modes::CtsBlockCipher New_ctor(Org::BouncyCastle::Crypto::IBlockCipher cipher) ;

/// @brief Method .ctor addr 0xe8f014 size 0x1ac virtual false final false
 void _ctor(Org::BouncyCastle::Crypto::IBlockCipher cipher) ;

/// @brief Method GetUpdateOutputSize addr 0xe8f1c0 size 0x38 virtual true final false
 int32_t GetUpdateOutputSize(int32_t length) ;

/// @brief Method GetOutputSize addr 0xe8f1f8 size 0xc virtual true final false
 int32_t GetOutputSize(int32_t length) ;

/// @brief Method ProcessByte addr 0xe8f204 size 0x14c virtual true final false
 int32_t ProcessByte(uint8_t input, ::ArrayW<uint8_t> output, int32_t outOff) ;

/// @brief Method ProcessBytes addr 0xe8f350 size 0x340 virtual true final false
 int32_t ProcessBytes(::ArrayW<uint8_t> input, int32_t inOff, int32_t length, ::ArrayW<uint8_t> output, int32_t outOff) ;

/// @brief Method DoFinal addr 0xe8f690 size 0x5a8 virtual true final false
 int32_t DoFinal(::ArrayW<uint8_t> output, int32_t outOff) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Modes
NEED_NO_BOX(Org::BouncyCastle::Crypto::Modes::CtsBlockCipher);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Modes::CtsBlockCipher, "Org.BouncyCastle.Crypto.Modes", "CtsBlockCipher");
