#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Crypto {
class IBlockCipher;
}
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Engines {
class IdeaEngine;
}
// Type: Org.BouncyCastle.Crypto.Engines::IdeaEngine
namespace Org::BouncyCastle::Crypto::Engines {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(848))
// CS Name: Org.BouncyCastle.Crypto.Engines.IdeaEngine
class CORDL_TYPE IdeaEngine : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to Org::BouncyCastle::Crypto::IBlockCipher
constexpr operator  Org::BouncyCastle::Crypto::IBlockCipher() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~IdeaEngine() = default;

// Ctor Parameters [CppParam { name: "", ty: "IdeaEngine", modifiers: " const&", def_value: None }]
constexpr IdeaEngine(IdeaEngine const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "IdeaEngine", modifiers: "&&", def_value: None }]
constexpr IdeaEngine(IdeaEngine&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IdeaEngine(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr IdeaEngine& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr IdeaEngine& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr IdeaEngine& operator=(IdeaEngine&& o) noexcept = default;
  constexpr IdeaEngine& operator=(IdeaEngine const& o) noexcept = default;
                


// Fields

/// @brief Field BLOCK_SIZE offset 0
static constexpr int32_t  BLOCK_SIZE{8};

 ::ArrayW<int32_t> __declspec(property(get=__get_workingKey, put=__set_workingKey))  workingKey;

constexpr void __set_workingKey(::ArrayW<int32_t> value) ;

constexpr ::ArrayW<int32_t> __get_workingKey() const;

static int32_t __declspec(property(get=__get_MASK, put=__set_MASK))  MASK;

static void __set_MASK(int32_t value) ;

static int32_t __get_MASK() ;

static int32_t __declspec(property(get=__get_BASE, put=__set_BASE))  BASE;

static void __set_BASE(int32_t value) ;

static int32_t __get_BASE() ;


// Properties

 ::StringW __declspec(property(get=get_AlgorithmName))  AlgorithmName;

 bool __declspec(property(get=get_IsPartialBlockOkay))  IsPartialBlockOkay;


// Methods

// Ctor Parameters []
explicit IdeaEngine() ;

/// @brief Method .ctor addr 0xe474b4 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method Init addr 0xe474bc size 0x120 virtual true final false
 void Init(bool forEncryption, Org::BouncyCastle::Crypto::ICipherParameters parameters) ;

/// @brief Method get_AlgorithmName addr 0xe47604 size 0x40 virtual true final false
 ::StringW get_AlgorithmName() ;

/// @brief Method get_IsPartialBlockOkay addr 0xe47644 size 0x8 virtual true final false
 bool get_IsPartialBlockOkay() ;

/// @brief Method GetBlockSize addr 0xe4764c size 0x8 virtual true final false
 int32_t GetBlockSize() ;

/// @brief Method ProcessBlock addr 0xe47654 size 0x118 virtual true final false
 int32_t ProcessBlock(::ArrayW<uint8_t> input, int32_t inOff, ::ArrayW<uint8_t> output, int32_t outOff) ;

/// @brief Method Reset addr 0xe47a04 size 0x4 virtual true final false
 void Reset() ;

/// @brief Method BytesToWord addr 0xe47a08 size 0x40 virtual false final false
 int32_t BytesToWord(::ArrayW<uint8_t> input, int32_t inOff) ;

/// @brief Method WordToBytes addr 0xe47a48 size 0x48 virtual false final false
 void WordToBytes(int32_t word, ::ArrayW<uint8_t> outBytes, int32_t outOff) ;

/// @brief Method Mul addr 0xe47a90 size 0xdc virtual false final false
 int32_t Mul(int32_t x, int32_t y) ;

/// @brief Method IdeaFunc addr 0xe4776c size 0x298 virtual false final false
 void IdeaFunc(::ArrayW<int32_t> workingKey, ::ArrayW<uint8_t> input, int32_t inOff, ::ArrayW<uint8_t> outBytes, int32_t outOff) ;

/// @brief Method ExpandKey addr 0xe47b6c size 0x1f8 virtual false final false
 ::ArrayW<int32_t> ExpandKey(::ArrayW<uint8_t> uKey) ;

/// @brief Method MulInv addr 0xe47d64 size 0x118 virtual false final false
 int32_t MulInv(int32_t x) ;

/// @brief Method AddInv addr 0xe47e7c size 0x64 virtual false final false
 int32_t AddInv(int32_t x) ;

/// @brief Method InvertKey addr 0xe47ee0 size 0x288 virtual false final false
 ::ArrayW<int32_t> InvertKey(::ArrayW<int32_t> inKey) ;

/// @brief Method GenerateWorkingKey addr 0xe475dc size 0x28 virtual false final false
 ::ArrayW<int32_t> GenerateWorkingKey(bool forEncryption, ::ArrayW<uint8_t> userKey) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Engines
NEED_NO_BOX(Org::BouncyCastle::Crypto::Engines::IdeaEngine);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Engines::IdeaEngine, "Org.BouncyCastle.Crypto.Engines", "IdeaEngine");
