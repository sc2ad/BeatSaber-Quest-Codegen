#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
namespace Org::BouncyCastle::Crypto {
class IBufferedCipher;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto {
class BufferedCipherBase;
}
// Type: Org.BouncyCastle.Crypto::BufferedCipherBase
namespace Org::BouncyCastle::Crypto {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(965))
// CS Name: Org.BouncyCastle.Crypto.BufferedCipherBase
class CORDL_TYPE BufferedCipherBase : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to Org::BouncyCastle::Crypto::IBufferedCipher
constexpr operator  Org::BouncyCastle::Crypto::IBufferedCipher() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~BufferedCipherBase() = default;

// Ctor Parameters [CppParam { name: "", ty: "BufferedCipherBase", modifiers: " const&", def_value: None }]
constexpr BufferedCipherBase(BufferedCipherBase const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BufferedCipherBase", modifiers: "&&", def_value: None }]
constexpr BufferedCipherBase(BufferedCipherBase&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BufferedCipherBase(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr BufferedCipherBase& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BufferedCipherBase& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BufferedCipherBase& operator=(BufferedCipherBase&& o) noexcept = default;
  constexpr BufferedCipherBase& operator=(BufferedCipherBase const& o) noexcept = default;
                


// Fields

static ::ArrayW<uint8_t> __declspec(property(get=__get_EmptyBuffer, put=__set_EmptyBuffer))  EmptyBuffer;

static void __set_EmptyBuffer(::ArrayW<uint8_t> value) ;

static ::ArrayW<uint8_t> __get_EmptyBuffer() ;


// Properties

 ::StringW __declspec(property(get=get_AlgorithmName))  AlgorithmName;


// Methods

/// @brief Method get_AlgorithmName addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW get_AlgorithmName() ;

/// @brief Method Init addr 0x0 size 0xffffffffffffffff virtual true final false
 void Init(bool forEncryption, Org::BouncyCastle::Crypto::ICipherParameters parameters) ;

/// @brief Method GetBlockSize addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetBlockSize() ;

/// @brief Method GetOutputSize addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetOutputSize(int32_t inputLen) ;

/// @brief Method GetUpdateOutputSize addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetUpdateOutputSize(int32_t inputLen) ;

/// @brief Method ProcessByte addr 0x0 size 0xffffffffffffffff virtual true final false
 ::ArrayW<uint8_t> ProcessByte(uint8_t input) ;

/// @brief Method ProcessByte addr 0xe8daf0 size 0xb4 virtual true final false
 int32_t ProcessByte(uint8_t input, ::ArrayW<uint8_t> output, int32_t outOff) ;

/// @brief Method ProcessBytes addr 0xe8dba4 size 0x28 virtual true final false
 ::ArrayW<uint8_t> ProcessBytes(::ArrayW<uint8_t> input) ;

/// @brief Method ProcessBytes addr 0x0 size 0xffffffffffffffff virtual true final false
 ::ArrayW<uint8_t> ProcessBytes(::ArrayW<uint8_t> input, int32_t inOff, int32_t length) ;

/// @brief Method ProcessBytes addr 0xe8dbcc size 0x30 virtual true final false
 int32_t ProcessBytes(::ArrayW<uint8_t> input, ::ArrayW<uint8_t> output, int32_t outOff) ;

/// @brief Method ProcessBytes addr 0xe8dbfc size 0xb4 virtual true final false
 int32_t ProcessBytes(::ArrayW<uint8_t> input, int32_t inOff, int32_t length, ::ArrayW<uint8_t> output, int32_t outOff) ;

/// @brief Method DoFinal addr 0x0 size 0xffffffffffffffff virtual true final false
 ::ArrayW<uint8_t> DoFinal() ;

/// @brief Method DoFinal addr 0xe8dcb0 size 0x28 virtual true final false
 ::ArrayW<uint8_t> DoFinal(::ArrayW<uint8_t> input) ;

/// @brief Method DoFinal addr 0x0 size 0xffffffffffffffff virtual true final false
 ::ArrayW<uint8_t> DoFinal(::ArrayW<uint8_t> input, int32_t inOff, int32_t length) ;

/// @brief Method DoFinal addr 0xe8dcd8 size 0xb8 virtual true final false
 int32_t DoFinal(::ArrayW<uint8_t> output, int32_t outOff) ;

/// @brief Method DoFinal addr 0xe8dd90 size 0x30 virtual true final false
 int32_t DoFinal(::ArrayW<uint8_t> input, ::ArrayW<uint8_t> output, int32_t outOff) ;

/// @brief Method DoFinal addr 0xe8ddc0 size 0x5c virtual true final false
 int32_t DoFinal(::ArrayW<uint8_t> input, int32_t inOff, int32_t length, ::ArrayW<uint8_t> output, int32_t outOff) ;

/// @brief Method Reset addr 0x0 size 0xffffffffffffffff virtual true final false
 void Reset() ;

static Org::BouncyCastle::Crypto::BufferedCipherBase New_ctor() ;

/// @brief Method .ctor addr 0xe8de84 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto
NEED_NO_BOX(Org::BouncyCastle::Crypto::BufferedCipherBase);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::BufferedCipherBase, "Org.BouncyCastle.Crypto", "BufferedCipherBase");
