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
class SM4Engine;
}
// Type: Org.BouncyCastle.Crypto.Engines::SM4Engine
namespace Org::BouncyCastle::Crypto::Engines {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(873))
// CS Name: Org.BouncyCastle.Crypto.Engines.SM4Engine
class CORDL_TYPE SM4Engine : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::Org::BouncyCastle::Crypto::IBlockCipher
constexpr operator  ::Org::BouncyCastle::Crypto::IBlockCipher() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~SM4Engine() = default;

// Ctor Parameters [CppParam { name: "", ty: "SM4Engine", modifiers: " const&", def_value: None }]
constexpr SM4Engine(SM4Engine const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SM4Engine", modifiers: "&&", def_value: None }]
constexpr SM4Engine(SM4Engine&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SM4Engine(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr SM4Engine& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SM4Engine& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SM4Engine& operator=(SM4Engine&& o) noexcept = default;
  constexpr SM4Engine& operator=(SM4Engine const& o) noexcept = default;
                


// Fields

/// @brief Field BlockSize offset 0
static constexpr int32_t  BlockSize{16};

static ::ArrayW<uint8_t> __declspec(property(get=__get_Sbox, put=__set_Sbox))  Sbox;

static void __set_Sbox(::ArrayW<uint8_t> value) ;

static ::ArrayW<uint8_t> __get_Sbox() ;

static ::ArrayW<uint32_t> __declspec(property(get=__get_CK, put=__set_CK))  CK;

static void __set_CK(::ArrayW<uint32_t> value) ;

static ::ArrayW<uint32_t> __get_CK() ;

static ::ArrayW<uint32_t> __declspec(property(get=__get_FK, put=__set_FK))  FK;

static void __set_FK(::ArrayW<uint32_t> value) ;

static ::ArrayW<uint32_t> __get_FK() ;

 ::ArrayW<uint32_t> __declspec(property(get=__get_rk, put=__set_rk))  rk;

constexpr void __set_rk(::ArrayW<uint32_t> value) ;

constexpr ::ArrayW<uint32_t> __get_rk() const;


// Properties

 ::StringW __declspec(property(get=get_AlgorithmName))  AlgorithmName;

 bool __declspec(property(get=get_IsPartialBlockOkay))  IsPartialBlockOkay;


// Methods

/// @brief Method tau addr 0xe5d4a4 size 0xc8 virtual false final false
static uint32_t tau(uint32_t A) ;

/// @brief Method L_ap addr 0xe5d56c size 0x40 virtual false final false
static uint32_t L_ap(uint32_t B) ;

/// @brief Method T_ap addr 0xe5d5ac size 0x84 virtual false final false
 uint32_t T_ap(uint32_t Z) ;

/// @brief Method ExpandKey addr 0xe5d630 size 0x568 virtual false final false
 void ExpandKey(bool forEncryption, ::ArrayW<uint8_t> key) ;

/// @brief Method L addr 0xe5db98 size 0x78 virtual false final false
static uint32_t L(uint32_t B) ;

/// @brief Method T addr 0xe5dc10 size 0x58 virtual false final false
static uint32_t T(uint32_t Z) ;

/// @brief Method Init addr 0xe5dc68 size 0x1c8 virtual true final false
 void Init(bool forEncryption, ::Org::BouncyCastle::Crypto::ICipherParameters parameters) ;

/// @brief Method get_AlgorithmName addr 0xe5de30 size 0x40 virtual true final false
 ::StringW get_AlgorithmName() ;

/// @brief Method get_IsPartialBlockOkay addr 0xe5de70 size 0x8 virtual true final false
 bool get_IsPartialBlockOkay() ;

/// @brief Method GetBlockSize addr 0xe5de78 size 0x8 virtual true final false
 int32_t GetBlockSize() ;

/// @brief Method ProcessBlock addr 0xe5de80 size 0x2b0 virtual true final false
 int32_t ProcessBlock(::ArrayW<uint8_t> input, int32_t inOff, ::ArrayW<uint8_t> output, int32_t outOff) ;

/// @brief Method Reset addr 0xe5e130 size 0x4 virtual true final false
 void Reset() ;

// Ctor Parameters []
explicit SM4Engine() ;

/// @brief Method .ctor addr 0xe5e25c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Engines
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Engines::SM4Engine);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Engines::SM4Engine, "Org.BouncyCastle.Crypto.Engines", "SM4Engine");
