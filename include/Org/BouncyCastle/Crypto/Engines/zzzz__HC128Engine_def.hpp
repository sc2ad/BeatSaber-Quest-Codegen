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
class IStreamCipher;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Engines {
class HC128Engine;
}
// Type: Org.BouncyCastle.Crypto.Engines::HC128Engine
namespace Org::BouncyCastle::Crypto::Engines {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(846))
// CS Name: Org.BouncyCastle.Crypto.Engines.HC128Engine
class CORDL_TYPE HC128Engine : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to Org::BouncyCastle::Crypto::IStreamCipher
constexpr operator  Org::BouncyCastle::Crypto::IStreamCipher() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~HC128Engine() = default;

// Ctor Parameters [CppParam { name: "", ty: "HC128Engine", modifiers: " const&", def_value: None }]
constexpr HC128Engine(HC128Engine const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HC128Engine", modifiers: "&&", def_value: None }]
constexpr HC128Engine(HC128Engine&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HC128Engine(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr HC128Engine& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HC128Engine& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HC128Engine& operator=(HC128Engine&& o) noexcept = default;
  constexpr HC128Engine& operator=(HC128Engine const& o) noexcept = default;
                


// Fields

 ::ArrayW<uint32_t> __declspec(property(get=__get_p, put=__set_p))  p;

constexpr void __set_p(::ArrayW<uint32_t> value) ;

constexpr ::ArrayW<uint32_t> __get_p() const;

 ::ArrayW<uint32_t> __declspec(property(get=__get_q, put=__set_q))  q;

constexpr void __set_q(::ArrayW<uint32_t> value) ;

constexpr ::ArrayW<uint32_t> __get_q() const;

 uint32_t __declspec(property(get=__get_cnt, put=__set_cnt))  cnt;

constexpr void __set_cnt(uint32_t value) ;

constexpr uint32_t __get_cnt() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_key, put=__set_key))  key;

constexpr void __set_key(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_key() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_iv, put=__set_iv))  iv;

constexpr void __set_iv(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_iv() const;

 bool __declspec(property(get=__get_initialised, put=__set_initialised))  initialised;

constexpr void __set_initialised(bool value) ;

constexpr bool __get_initialised() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_buf, put=__set_buf))  buf;

constexpr void __set_buf(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_buf() const;

 int32_t __declspec(property(get=__get_idx, put=__set_idx))  idx;

constexpr void __set_idx(int32_t value) ;

constexpr int32_t __get_idx() const;


// Properties

 ::StringW __declspec(property(get=get_AlgorithmName))  AlgorithmName;


// Methods

/// @brief Method F1 addr 0xe45f6c size 0x10 virtual false final false
static uint32_t F1(uint32_t x) ;

/// @brief Method F2 addr 0xe45f84 size 0x10 virtual false final false
static uint32_t F2(uint32_t x) ;

/// @brief Method G1 addr 0xe45f94 size 0x14 virtual false final false
 uint32_t G1(uint32_t x, uint32_t y, uint32_t z) ;

/// @brief Method G2 addr 0xe45fa8 size 0x14 virtual false final false
 uint32_t G2(uint32_t x, uint32_t y, uint32_t z) ;

/// @brief Method RotateLeft addr 0xe45fbc size 0xc virtual false final false
static uint32_t RotateLeft(uint32_t x, int32_t bits) ;

/// @brief Method RotateRight addr 0xe45f7c size 0x8 virtual false final false
static uint32_t RotateRight(uint32_t x, int32_t bits) ;

/// @brief Method H1 addr 0xe45fc8 size 0x4c virtual false final false
 uint32_t H1(uint32_t x) ;

/// @brief Method H2 addr 0xe46014 size 0x4c virtual false final false
 uint32_t H2(uint32_t x) ;

/// @brief Method Mod1024 addr 0xe46060 size 0x8 virtual false final false
static uint32_t Mod1024(uint32_t x) ;

/// @brief Method Mod512 addr 0xe46068 size 0x8 virtual false final false
static uint32_t Mod512(uint32_t x) ;

/// @brief Method Dim addr 0xe46070 size 0xc virtual false final false
static uint32_t Dim(uint32_t x, uint32_t y) ;

/// @brief Method Step addr 0xe4607c size 0x1a8 virtual false final false
 uint32_t Step() ;

/// @brief Method Init addr 0xe46224 size 0x300 virtual false final false
 void Init() ;

/// @brief Method get_AlgorithmName addr 0xe46524 size 0x40 virtual true final false
 ::StringW get_AlgorithmName() ;

/// @brief Method Init addr 0xe46564 size 0x1d4 virtual true final false
 void Init(bool forEncryption, Org::BouncyCastle::Crypto::ICipherParameters parameters) ;

/// @brief Method GetByte addr 0xe46738 size 0x60 virtual false final false
 uint8_t GetByte() ;

/// @brief Method ProcessBytes addr 0xe46798 size 0x19c virtual true final false
 void ProcessBytes(::ArrayW<uint8_t> input, int32_t inOff, int32_t len, ::ArrayW<uint8_t> output, int32_t outOff) ;

/// @brief Method Reset addr 0xe46934 size 0x4 virtual true final false
 void Reset() ;

/// @brief Method ReturnByte addr 0xe46938 size 0x18 virtual true final false
 uint8_t ReturnByte(uint8_t input) ;

static Org::BouncyCastle::Crypto::Engines::HC128Engine New_ctor() ;

/// @brief Method .ctor addr 0xe46950 size 0x9c virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Engines
NEED_NO_BOX(Org::BouncyCastle::Crypto::Engines::HC128Engine);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Engines::HC128Engine, "Org.BouncyCastle.Crypto.Engines", "HC128Engine");
