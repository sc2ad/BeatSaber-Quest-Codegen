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
class NoekeonEngine;
}
// Type: Org.BouncyCastle.Crypto.Engines::NoekeonEngine
namespace Org::BouncyCastle::Crypto::Engines {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(852))
// CS Name: Org.BouncyCastle.Crypto.Engines.NoekeonEngine
class CORDL_TYPE NoekeonEngine : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to Org::BouncyCastle::Crypto::IBlockCipher
constexpr operator  Org::BouncyCastle::Crypto::IBlockCipher() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~NoekeonEngine() = default;

// Ctor Parameters [CppParam { name: "", ty: "NoekeonEngine", modifiers: " const&", def_value: None }]
constexpr NoekeonEngine(NoekeonEngine const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "NoekeonEngine", modifiers: "&&", def_value: None }]
constexpr NoekeonEngine(NoekeonEngine&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit NoekeonEngine(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr NoekeonEngine& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr NoekeonEngine& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr NoekeonEngine& operator=(NoekeonEngine&& o) noexcept = default;
  constexpr NoekeonEngine& operator=(NoekeonEngine const& o) noexcept = default;
                


// Fields

/// @brief Field Size offset 0
static constexpr int32_t  Size{16};

static ::ArrayW<uint8_t> __declspec(property(get=__get_RoundConstants, put=__set_RoundConstants))  RoundConstants;

static void __set_RoundConstants(::ArrayW<uint8_t> value) ;

static ::ArrayW<uint8_t> __get_RoundConstants() ;

 ::ArrayW<uint32_t> __declspec(property(get=__get_k, put=__set_k))  k;

constexpr void __set_k(::ArrayW<uint32_t> value) ;

constexpr ::ArrayW<uint32_t> __get_k() const;

 bool __declspec(property(get=__get__initialised, put=__set__initialised))  _initialised;

constexpr void __set__initialised(bool value) ;

constexpr bool __get__initialised() const;

 bool __declspec(property(get=__get__forEncryption, put=__set__forEncryption))  _forEncryption;

constexpr void __set__forEncryption(bool value) ;

constexpr bool __get__forEncryption() const;


// Properties

 ::StringW __declspec(property(get=get_AlgorithmName))  AlgorithmName;

 bool __declspec(property(get=get_IsPartialBlockOkay))  IsPartialBlockOkay;


// Methods

static Org::BouncyCastle::Crypto::Engines::NoekeonEngine New_ctor() ;

/// @brief Method .ctor addr 0xe4b844 size 0x60 virtual false final false
 void _ctor() ;

/// @brief Method get_AlgorithmName addr 0xe4b8a4 size 0x40 virtual true final false
 ::StringW get_AlgorithmName() ;

/// @brief Method get_IsPartialBlockOkay addr 0xe4b8e4 size 0x8 virtual true final false
 bool get_IsPartialBlockOkay() ;

/// @brief Method GetBlockSize addr 0xe4b8ec size 0x8 virtual true final false
 int32_t GetBlockSize() ;

/// @brief Method Init addr 0xe4b8f4 size 0x268 virtual true final false
 void Init(bool forEncryption, Org::BouncyCastle::Crypto::ICipherParameters parameters) ;

/// @brief Method ProcessBlock addr 0xe4bb5c size 0x160 virtual true final false
 int32_t ProcessBlock(::ArrayW<uint8_t> input, int32_t inOff, ::ArrayW<uint8_t> output, int32_t outOff) ;

/// @brief Method Reset addr 0xe4c2ac size 0x4 virtual true final false
 void Reset() ;

/// @brief Method EncryptBlock addr 0xe4bfd4 size 0x2d8 virtual false final false
 int32_t EncryptBlock(::ArrayW<uint8_t> input, int32_t inOff, ::ArrayW<uint8_t> output, int32_t outOff) ;

/// @brief Method DecryptBlock addr 0xe4bcbc size 0x318 virtual false final false
 int32_t DecryptBlock(::ArrayW<uint8_t> input, int32_t inOff, ::ArrayW<uint8_t> output, int32_t outOff) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Engines
NEED_NO_BOX(Org::BouncyCastle::Crypto::Engines::NoekeonEngine);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Engines::NoekeonEngine, "Org.BouncyCastle.Crypto.Engines", "NoekeonEngine");
