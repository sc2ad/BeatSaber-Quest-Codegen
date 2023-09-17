#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace Org::BouncyCastle::Crypto {
class IBlockCipher;
}
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Engines {
class TeaEngine;
}
// Type: Org.BouncyCastle.Crypto.Engines::TeaEngine
namespace Org::BouncyCastle::Crypto::Engines {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(874))
// CS Name: Org.BouncyCastle.Crypto.Engines.TeaEngine
class CORDL_TYPE TeaEngine : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::Org::BouncyCastle::Crypto::IBlockCipher
constexpr operator  ::Org::BouncyCastle::Crypto::IBlockCipher() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~TeaEngine() = default;

// Ctor Parameters [CppParam { name: "", ty: "TeaEngine", modifiers: " const&", def_value: None }]
constexpr TeaEngine(TeaEngine const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TeaEngine", modifiers: "&&", def_value: None }]
constexpr TeaEngine(TeaEngine&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TeaEngine(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr TeaEngine& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TeaEngine& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TeaEngine& operator=(TeaEngine&& o) noexcept = default;
  constexpr TeaEngine& operator=(TeaEngine const& o) noexcept = default;
                


// Fields

/// @brief Field rounds offset 0
static constexpr int32_t  rounds{32};

/// @brief Field block_size offset 0
static constexpr int32_t  block_size{8};

/// @brief Field delta offset 0
static constexpr uint32_t  delta{2654435769u};

/// @brief Field d_sum offset 0
static constexpr uint32_t  d_sum{3337565984u};

 uint32_t __declspec(property(get=__get__a, put=__set__a))  _a;

constexpr void __set__a(uint32_t value) ;

constexpr uint32_t __get__a() const;

 uint32_t __declspec(property(get=__get__b, put=__set__b))  _b;

constexpr void __set__b(uint32_t value) ;

constexpr uint32_t __get__b() const;

 uint32_t __declspec(property(get=__get__c, put=__set__c))  _c;

constexpr void __set__c(uint32_t value) ;

constexpr uint32_t __get__c() const;

 uint32_t __declspec(property(get=__get__d, put=__set__d))  _d;

constexpr void __set__d(uint32_t value) ;

constexpr uint32_t __get__d() const;

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

// Ctor Parameters []
explicit TeaEngine() ;

/// @brief Method .ctor addr 0xe5e264 size 0x1c virtual false final false
 void _ctor() ;

/// @brief Method get_AlgorithmName addr 0xe5e280 size 0x40 virtual true final false
 ::StringW get_AlgorithmName() ;

/// @brief Method get_IsPartialBlockOkay addr 0xe5e2c0 size 0x8 virtual true final false
 bool get_IsPartialBlockOkay() ;

/// @brief Method GetBlockSize addr 0xe5e2c8 size 0x8 virtual true final false
 int32_t GetBlockSize() ;

/// @brief Method Init addr 0xe5e2d0 size 0x148 virtual true final false
 void Init(bool forEncryption, ::Org::BouncyCastle::Crypto::ICipherParameters parameters) ;

/// @brief Method ProcessBlock addr 0xe5e484 size 0x160 virtual true final false
 int32_t ProcessBlock(::ArrayW<uint8_t> inBytes, int32_t inOff, ::ArrayW<uint8_t> outBytes, int32_t outOff) ;

/// @brief Method Reset addr 0xe5e7ac size 0x4 virtual true final false
 void Reset() ;

/// @brief Method setKey addr 0xe5e418 size 0x6c virtual false final false
 void setKey(::ArrayW<uint8_t> key) ;

/// @brief Method encryptBlock addr 0xe5e6c8 size 0xe4 virtual false final false
 int32_t encryptBlock(::ArrayW<uint8_t> inBytes, int32_t inOff, ::ArrayW<uint8_t> outBytes, int32_t outOff) ;

/// @brief Method decryptBlock addr 0xe5e5e4 size 0xe4 virtual false final false
 int32_t decryptBlock(::ArrayW<uint8_t> inBytes, int32_t inOff, ::ArrayW<uint8_t> outBytes, int32_t outOff) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Engines
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Engines::TeaEngine);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Engines::TeaEngine, "Org.BouncyCastle.Crypto.Engines", "TeaEngine");
