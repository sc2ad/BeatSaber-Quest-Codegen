#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
namespace Org::BouncyCastle::Crypto {
class IBlockCipher;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Engines {
class XteaEngine;
}
// Type: Org.BouncyCastle.Crypto.Engines::XteaEngine
namespace Org::BouncyCastle::Crypto::Engines {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(885))
// CS Name: Org.BouncyCastle.Crypto.Engines.XteaEngine
class CORDL_TYPE XteaEngine : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to Org::BouncyCastle::Crypto::IBlockCipher
constexpr operator  Org::BouncyCastle::Crypto::IBlockCipher() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~XteaEngine() = default;

// Ctor Parameters [CppParam { name: "", ty: "XteaEngine", modifiers: " const&", def_value: None }]
constexpr XteaEngine(XteaEngine const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "XteaEngine", modifiers: "&&", def_value: None }]
constexpr XteaEngine(XteaEngine&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit XteaEngine(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr XteaEngine& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr XteaEngine& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr XteaEngine& operator=(XteaEngine&& o) noexcept = default;
  constexpr XteaEngine& operator=(XteaEngine const& o) noexcept = default;
                


// Fields

/// @brief Field rounds offset 0
static constexpr int32_t  rounds{32};

/// @brief Field block_size offset 0
static constexpr int32_t  block_size{8};

/// @brief Field delta offset 0
static constexpr int32_t  delta{-1640531527};

 ::ArrayW<uint32_t> __declspec(property(get=__get__S, put=__set__S))  _S;

constexpr void __set__S(::ArrayW<uint32_t> value) ;

constexpr ::ArrayW<uint32_t> __get__S() const;

 ::ArrayW<uint32_t> __declspec(property(get=__get__sum0, put=__set__sum0))  _sum0;

constexpr void __set__sum0(::ArrayW<uint32_t> value) ;

constexpr ::ArrayW<uint32_t> __get__sum0() const;

 ::ArrayW<uint32_t> __declspec(property(get=__get__sum1, put=__set__sum1))  _sum1;

constexpr void __set__sum1(::ArrayW<uint32_t> value) ;

constexpr ::ArrayW<uint32_t> __get__sum1() const;

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

static Org::BouncyCastle::Crypto::Engines::XteaEngine New_ctor() ;

/// @brief Method .ctor addr 0xe68c6c size 0x80 virtual false final false
 void _ctor() ;

/// @brief Method get_AlgorithmName addr 0xe68cec size 0x40 virtual true final false
 ::StringW get_AlgorithmName() ;

/// @brief Method get_IsPartialBlockOkay addr 0xe68d2c size 0x8 virtual true final false
 bool get_IsPartialBlockOkay() ;

/// @brief Method GetBlockSize addr 0xe68d34 size 0x8 virtual true final false
 int32_t GetBlockSize() ;

/// @brief Method Init addr 0xe68d3c size 0x148 virtual true final false
 void Init(bool forEncryption, Org::BouncyCastle::Crypto::ICipherParameters parameters) ;

/// @brief Method ProcessBlock addr 0xe68f8c size 0x160 virtual true final false
 int32_t ProcessBlock(::ArrayW<uint8_t> inBytes, int32_t inOff, ::ArrayW<uint8_t> outBytes, int32_t outOff) ;

/// @brief Method Reset addr 0xe692f0 size 0x4 virtual true final false
 void Reset() ;

/// @brief Method setKey addr 0xe68e84 size 0x108 virtual false final false
 void setKey(::ArrayW<uint8_t> key) ;

/// @brief Method encryptBlock addr 0xe691ec size 0x104 virtual false final false
 int32_t encryptBlock(::ArrayW<uint8_t> inBytes, int32_t inOff, ::ArrayW<uint8_t> outBytes, int32_t outOff) ;

/// @brief Method decryptBlock addr 0xe690ec size 0x100 virtual false final false
 int32_t decryptBlock(::ArrayW<uint8_t> inBytes, int32_t inOff, ::ArrayW<uint8_t> outBytes, int32_t outOff) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Engines
NEED_NO_BOX(Org::BouncyCastle::Crypto::Engines::XteaEngine);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Engines::XteaEngine, "Org.BouncyCastle.Crypto.Engines", "XteaEngine");
