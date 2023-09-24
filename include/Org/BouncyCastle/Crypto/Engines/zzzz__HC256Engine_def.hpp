#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Crypto {
class IStreamCipher;
}
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Engines {
class HC256Engine;
}
// Type: Org.BouncyCastle.Crypto.Engines::HC256Engine
namespace Org::BouncyCastle::Crypto::Engines {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(847))
// CS Name: Org.BouncyCastle.Crypto.Engines.HC256Engine
class CORDL_TYPE HC256Engine : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to Org::BouncyCastle::Crypto::IStreamCipher
constexpr operator  Org::BouncyCastle::Crypto::IStreamCipher() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~HC256Engine() = default;

// Ctor Parameters [CppParam { name: "", ty: "HC256Engine", modifiers: " const&", def_value: None }]
constexpr HC256Engine(HC256Engine const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HC256Engine", modifiers: "&&", def_value: None }]
constexpr HC256Engine(HC256Engine&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HC256Engine(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr HC256Engine& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HC256Engine& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HC256Engine& operator=(HC256Engine&& o) noexcept = default;
  constexpr HC256Engine& operator=(HC256Engine const& o) noexcept = default;
                


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

/// @brief Method Step addr 0xe469ec size 0x274 virtual false final false
 uint32_t Step() ;

/// @brief Method Init addr 0xe46c68 size 0x384 virtual false final false
 void Init() ;

/// @brief Method get_AlgorithmName addr 0xe46fec size 0x40 virtual true final false
 ::StringW get_AlgorithmName() ;

/// @brief Method Init addr 0xe4702c size 0x1d4 virtual true final false
 void Init(bool forEncryption, Org::BouncyCastle::Crypto::ICipherParameters parameters) ;

/// @brief Method GetByte addr 0xe47200 size 0x60 virtual false final false
 uint8_t GetByte() ;

/// @brief Method ProcessBytes addr 0xe47260 size 0x19c virtual true final false
 void ProcessBytes(::ArrayW<uint8_t> input, int32_t inOff, int32_t len, ::ArrayW<uint8_t> output, int32_t outOff) ;

/// @brief Method Reset addr 0xe473fc size 0x4 virtual true final false
 void Reset() ;

/// @brief Method ReturnByte addr 0xe47400 size 0x18 virtual true final false
 uint8_t ReturnByte(uint8_t input) ;

/// @brief Method RotateRight addr 0xe46c60 size 0x8 virtual false final false
static uint32_t RotateRight(uint32_t x, int32_t bits) ;

static Org::BouncyCastle::Crypto::Engines::HC256Engine New_ctor() ;

/// @brief Method .ctor addr 0xe47418 size 0x9c virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Engines
NEED_NO_BOX(Org::BouncyCastle::Crypto::Engines::HC256Engine);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Engines::HC256Engine, "Org.BouncyCastle.Crypto.Engines", "HC256Engine");
