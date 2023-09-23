#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Crypto {
class IWrapper;
}
namespace Org::BouncyCastle::Crypto::Engines {
class Dstu7624Engine;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class KeyParameter;
}
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Engines {
class Dstu7624WrapEngine;
}
// Type: Org.BouncyCastle.Crypto.Engines::Dstu7624WrapEngine
namespace Org::BouncyCastle::Crypto::Engines {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(843))
// CS Name: Org.BouncyCastle.Crypto.Engines.Dstu7624WrapEngine
class CORDL_TYPE Dstu7624WrapEngine : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to Org::BouncyCastle::Crypto::IWrapper
constexpr operator  Org::BouncyCastle::Crypto::IWrapper() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~Dstu7624WrapEngine() = default;

// Ctor Parameters [CppParam { name: "", ty: "Dstu7624WrapEngine", modifiers: " const&", def_value: None }]
constexpr Dstu7624WrapEngine(Dstu7624WrapEngine const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Dstu7624WrapEngine", modifiers: "&&", def_value: None }]
constexpr Dstu7624WrapEngine(Dstu7624WrapEngine&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Dstu7624WrapEngine(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Dstu7624WrapEngine& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Dstu7624WrapEngine& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Dstu7624WrapEngine& operator=(Dstu7624WrapEngine&& o) noexcept = default;
  constexpr Dstu7624WrapEngine& operator=(Dstu7624WrapEngine const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Crypto::Parameters::KeyParameter __declspec(property(get=__get_param, put=__set_param))  param;

constexpr void __set_param(Org::BouncyCastle::Crypto::Parameters::KeyParameter value) ;

constexpr Org::BouncyCastle::Crypto::Parameters::KeyParameter __get_param() const;

 Org::BouncyCastle::Crypto::Engines::Dstu7624Engine __declspec(property(get=__get_engine, put=__set_engine))  engine;

constexpr void __set_engine(Org::BouncyCastle::Crypto::Engines::Dstu7624Engine value) ;

constexpr Org::BouncyCastle::Crypto::Engines::Dstu7624Engine __get_engine() const;

 bool __declspec(property(get=__get_forWrapping, put=__set_forWrapping))  forWrapping;

constexpr void __set_forWrapping(bool value) ;

constexpr bool __get_forWrapping() const;

 int32_t __declspec(property(get=__get_blockSize, put=__set_blockSize))  blockSize;

constexpr void __set_blockSize(int32_t value) ;

constexpr int32_t __get_blockSize() const;


// Properties

 ::StringW __declspec(property(get=get_AlgorithmName))  AlgorithmName;


// Methods

// Ctor Parameters [CppParam { name: "blockSizeBits", ty: "int32_t", modifiers: "", def_value: None }]
explicit Dstu7624WrapEngine(int32_t blockSizeBits) ;

/// @brief Method .ctor addr 0xe42f10 size 0x90 virtual false final false
 void _ctor(int32_t blockSizeBits) ;

/// @brief Method get_AlgorithmName addr 0xe42fa0 size 0x40 virtual true final true
 ::StringW get_AlgorithmName() ;

/// @brief Method Init addr 0xe42fe0 size 0x11c virtual true final true
 void Init(bool forWrapping, Org::BouncyCastle::Crypto::ICipherParameters parameters) ;

/// @brief Method Wrap addr 0xe430fc size 0x7b4 virtual true final true
 ::ArrayW<uint8_t> Wrap(::ArrayW<uint8_t> input, int32_t inOff, int32_t length) ;

/// @brief Method Unwrap addr 0xe438b0 size 0x890 virtual true final true
 ::ArrayW<uint8_t> Unwrap(::ArrayW<uint8_t> input, int32_t inOff, int32_t length) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Engines
NEED_NO_BOX(Org::BouncyCastle::Crypto::Engines::Dstu7624WrapEngine);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Engines::Dstu7624WrapEngine, "Org.BouncyCastle.Crypto.Engines", "Dstu7624WrapEngine");
