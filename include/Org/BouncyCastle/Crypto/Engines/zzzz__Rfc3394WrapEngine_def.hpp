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
class IWrapper;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class KeyParameter;
}
namespace Org::BouncyCastle::Crypto {
class IBlockCipher;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Engines {
class Rfc3394WrapEngine;
}
// Type: Org.BouncyCastle.Crypto.Engines::Rfc3394WrapEngine
namespace Org::BouncyCastle::Crypto::Engines {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(827))
// CS Name: Org.BouncyCastle.Crypto.Engines.Rfc3394WrapEngine
class CORDL_TYPE Rfc3394WrapEngine : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::Org::BouncyCastle::Crypto::IWrapper
constexpr operator  ::Org::BouncyCastle::Crypto::IWrapper() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~Rfc3394WrapEngine() = default;

// Ctor Parameters [CppParam { name: "", ty: "Rfc3394WrapEngine", modifiers: " const&", def_value: None }]
constexpr Rfc3394WrapEngine(Rfc3394WrapEngine const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Rfc3394WrapEngine", modifiers: "&&", def_value: None }]
constexpr Rfc3394WrapEngine(Rfc3394WrapEngine&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Rfc3394WrapEngine(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Rfc3394WrapEngine& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Rfc3394WrapEngine& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Rfc3394WrapEngine& operator=(Rfc3394WrapEngine&& o) noexcept = default;
  constexpr Rfc3394WrapEngine& operator=(Rfc3394WrapEngine const& o) noexcept = default;
                


// Fields

 ::Org::BouncyCastle::Crypto::IBlockCipher __declspec(property(get=__get_engine, put=__set_engine))  engine;

constexpr void __set_engine(::Org::BouncyCastle::Crypto::IBlockCipher value) ;

constexpr ::Org::BouncyCastle::Crypto::IBlockCipher __get_engine() const;

 ::Org::BouncyCastle::Crypto::Parameters::KeyParameter __declspec(property(get=__get_param, put=__set_param))  param;

constexpr void __set_param(::Org::BouncyCastle::Crypto::Parameters::KeyParameter value) ;

constexpr ::Org::BouncyCastle::Crypto::Parameters::KeyParameter __get_param() const;

 bool __declspec(property(get=__get_forWrapping, put=__set_forWrapping))  forWrapping;

constexpr void __set_forWrapping(bool value) ;

constexpr bool __get_forWrapping() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_iv, put=__set_iv))  iv;

constexpr void __set_iv(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_iv() const;


// Properties

 ::StringW __declspec(property(get=get_AlgorithmName))  AlgorithmName;


// Methods

// Ctor Parameters [CppParam { name: "engine", ty: "::Org::BouncyCastle::Crypto::IBlockCipher", modifiers: "", def_value: None }]
explicit Rfc3394WrapEngine(::Org::BouncyCastle::Crypto::IBlockCipher engine) ;

/// @brief Method .ctor addr 0xe2fb48 size 0x90 virtual false final false
 void _ctor(::Org::BouncyCastle::Crypto::IBlockCipher engine) ;

/// @brief Method Init addr 0xe2fbd8 size 0x214 virtual true final false
 void Init(bool forWrapping, ::Org::BouncyCastle::Crypto::ICipherParameters parameters) ;

/// @brief Method get_AlgorithmName addr 0xe2fdec size 0xa0 virtual true final false
 ::StringW get_AlgorithmName() ;

/// @brief Method Wrap addr 0xe2fe8c size 0x3a0 virtual true final false
 ::ArrayW<uint8_t> Wrap(::ArrayW<uint8_t> input, int32_t inOff, int32_t inLen) ;

/// @brief Method Unwrap addr 0xe3022c size 0x1438 virtual true final false
 ::ArrayW<uint8_t> Unwrap(::ArrayW<uint8_t> input, int32_t inOff, int32_t inLen) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Engines
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Engines::Rfc3394WrapEngine);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Engines::Rfc3394WrapEngine, "Org.BouncyCastle.Crypto.Engines", "Rfc3394WrapEngine");
