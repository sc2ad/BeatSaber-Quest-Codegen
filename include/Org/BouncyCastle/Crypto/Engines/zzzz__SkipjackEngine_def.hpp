#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
namespace Org::BouncyCastle::Crypto {
class IBlockCipher;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Engines {
class SkipjackEngine;
}
// Type: Org.BouncyCastle.Crypto.Engines::SkipjackEngine
namespace Org::BouncyCastle::Crypto::Engines {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(871))
// CS Name: Org.BouncyCastle.Crypto.Engines.SkipjackEngine
class CORDL_TYPE SkipjackEngine : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::Org::BouncyCastle::Crypto::IBlockCipher
constexpr operator  ::Org::BouncyCastle::Crypto::IBlockCipher() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~SkipjackEngine() = default;

// Ctor Parameters [CppParam { name: "", ty: "SkipjackEngine", modifiers: " const&", def_value: None }]
constexpr SkipjackEngine(SkipjackEngine const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SkipjackEngine", modifiers: "&&", def_value: None }]
constexpr SkipjackEngine(SkipjackEngine&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SkipjackEngine(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr SkipjackEngine& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SkipjackEngine& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SkipjackEngine& operator=(SkipjackEngine&& o) noexcept = default;
  constexpr SkipjackEngine& operator=(SkipjackEngine const& o) noexcept = default;
                


// Fields

/// @brief Field BLOCK_SIZE offset 0
static constexpr int32_t  BLOCK_SIZE{8};

static ::ArrayW<int16_t> __declspec(property(get=__get_ftable, put=__set_ftable))  ftable;

static void __set_ftable(::ArrayW<int16_t> value) ;

static ::ArrayW<int16_t> __get_ftable() ;

 ::ArrayW<int32_t> __declspec(property(get=__get_key0, put=__set_key0))  key0;

constexpr void __set_key0(::ArrayW<int32_t> value) ;

constexpr ::ArrayW<int32_t> __get_key0() const;

 ::ArrayW<int32_t> __declspec(property(get=__get_key1, put=__set_key1))  key1;

constexpr void __set_key1(::ArrayW<int32_t> value) ;

constexpr ::ArrayW<int32_t> __get_key1() const;

 ::ArrayW<int32_t> __declspec(property(get=__get_key2, put=__set_key2))  key2;

constexpr void __set_key2(::ArrayW<int32_t> value) ;

constexpr ::ArrayW<int32_t> __get_key2() const;

 ::ArrayW<int32_t> __declspec(property(get=__get_key3, put=__set_key3))  key3;

constexpr void __set_key3(::ArrayW<int32_t> value) ;

constexpr ::ArrayW<int32_t> __get_key3() const;

 bool __declspec(property(get=__get_encrypting, put=__set_encrypting))  encrypting;

constexpr void __set_encrypting(bool value) ;

constexpr bool __get_encrypting() const;


// Properties

 ::StringW __declspec(property(get=get_AlgorithmName))  AlgorithmName;

 bool __declspec(property(get=get_IsPartialBlockOkay))  IsPartialBlockOkay;


// Methods

/// @brief Method Init addr 0xe5b5a4 size 0x304 virtual true final false
 void Init(bool forEncryption, ::Org::BouncyCastle::Crypto::ICipherParameters parameters) ;

/// @brief Method get_AlgorithmName addr 0xe5b8a8 size 0x40 virtual true final false
 ::StringW get_AlgorithmName() ;

/// @brief Method get_IsPartialBlockOkay addr 0xe5b8e8 size 0x8 virtual true final false
 bool get_IsPartialBlockOkay() ;

/// @brief Method GetBlockSize addr 0xe5b8f0 size 0x8 virtual true final false
 int32_t GetBlockSize() ;

/// @brief Method ProcessBlock addr 0xe5b8f8 size 0x134 virtual true final false
 int32_t ProcessBlock(::ArrayW<uint8_t> input, int32_t inOff, ::ArrayW<uint8_t> output, int32_t outOff) ;

/// @brief Method Reset addr 0xe5ba2c size 0x4 virtual true final false
 void Reset() ;

/// @brief Method G addr 0xe5ba30 size 0x15c virtual false final false
 int32_t G(int32_t k, int32_t w) ;

/// @brief Method EncryptBlock addr 0xe5bb8c size 0x24c virtual true final false
 int32_t EncryptBlock(::ArrayW<uint8_t> input, int32_t inOff, ::ArrayW<uint8_t> outBytes, int32_t outOff) ;

/// @brief Method H addr 0xe5bdd8 size 0x15c virtual false final false
 int32_t H(int32_t k, int32_t w) ;

/// @brief Method DecryptBlock addr 0xe5bf34 size 0x260 virtual true final false
 int32_t DecryptBlock(::ArrayW<uint8_t> input, int32_t inOff, ::ArrayW<uint8_t> outBytes, int32_t outOff) ;

// Ctor Parameters []
explicit SkipjackEngine() ;

/// @brief Method .ctor addr 0xe5c228 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Engines
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Engines::SkipjackEngine);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Engines::SkipjackEngine, "Org.BouncyCastle.Crypto.Engines", "SkipjackEngine");
