#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Crypto::Parameters {
class KeyParameter;
}
namespace Org::BouncyCastle::Crypto {
class IBlockCipher;
}
namespace Org::BouncyCastle::Crypto::Prng {
class X931SecureRandom;
}
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
namespace Org::BouncyCastle::Crypto {
class IEntropySourceProvider;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Prng {
class X931SecureRandomBuilder;
}
// Type: Org.BouncyCastle.Crypto.Prng::X931SecureRandomBuilder
namespace Org::BouncyCastle::Crypto::Prng {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1122))
// CS Name: Org.BouncyCastle.Crypto.Prng.X931SecureRandomBuilder
class CORDL_TYPE X931SecureRandomBuilder : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~X931SecureRandomBuilder() = default;

// Ctor Parameters [CppParam { name: "", ty: "X931SecureRandomBuilder", modifiers: " const&", def_value: None }]
constexpr X931SecureRandomBuilder(X931SecureRandomBuilder const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "X931SecureRandomBuilder", modifiers: "&&", def_value: None }]
constexpr X931SecureRandomBuilder(X931SecureRandomBuilder&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit X931SecureRandomBuilder(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr X931SecureRandomBuilder& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr X931SecureRandomBuilder& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr X931SecureRandomBuilder& operator=(X931SecureRandomBuilder&& o) noexcept = default;
  constexpr X931SecureRandomBuilder& operator=(X931SecureRandomBuilder const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Security::SecureRandom __declspec(property(get=__get_mRandom, put=__set_mRandom))  mRandom;

constexpr void __set_mRandom(Org::BouncyCastle::Security::SecureRandom value) ;

constexpr Org::BouncyCastle::Security::SecureRandom __get_mRandom() const;

 Org::BouncyCastle::Crypto::IEntropySourceProvider __declspec(property(get=__get_mEntropySourceProvider, put=__set_mEntropySourceProvider))  mEntropySourceProvider;

constexpr void __set_mEntropySourceProvider(Org::BouncyCastle::Crypto::IEntropySourceProvider value) ;

constexpr Org::BouncyCastle::Crypto::IEntropySourceProvider __get_mEntropySourceProvider() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_mDateTimeVector, put=__set_mDateTimeVector))  mDateTimeVector;

constexpr void __set_mDateTimeVector(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_mDateTimeVector() const;


// Methods

// Ctor Parameters []
explicit X931SecureRandomBuilder() ;

/// @brief Method .ctor addr 0xeb7f7c size 0x64 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "entropySource", ty: "Org::BouncyCastle::Security::SecureRandom", modifiers: "", def_value: None }, CppParam { name: "predictionResistant", ty: "bool", modifiers: "", def_value: None }]
explicit X931SecureRandomBuilder(Org::BouncyCastle::Security::SecureRandom entropySource, bool predictionResistant) ;

/// @brief Method .ctor addr 0xeb7fe0 size 0x8c virtual false final false
 void _ctor(Org::BouncyCastle::Security::SecureRandom entropySource, bool predictionResistant) ;

// Ctor Parameters [CppParam { name: "entropySourceProvider", ty: "Org::BouncyCastle::Crypto::IEntropySourceProvider", modifiers: "", def_value: None }]
explicit X931SecureRandomBuilder(Org::BouncyCastle::Crypto::IEntropySourceProvider entropySourceProvider) ;

/// @brief Method .ctor addr 0xeb806c size 0x28 virtual false final false
 void _ctor(Org::BouncyCastle::Crypto::IEntropySourceProvider entropySourceProvider) ;

/// @brief Method SetDateTimeVector addr 0xeb8094 size 0x8 virtual false final false
 Org::BouncyCastle::Crypto::Prng::X931SecureRandomBuilder SetDateTimeVector(::ArrayW<uint8_t> dateTimeVector) ;

/// @brief Method Build addr 0xeb809c size 0x2e4 virtual false final false
 Org::BouncyCastle::Crypto::Prng::X931SecureRandom Build(Org::BouncyCastle::Crypto::IBlockCipher engine, Org::BouncyCastle::Crypto::Parameters::KeyParameter key, bool predictionResistant) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Prng
NEED_NO_BOX(Org::BouncyCastle::Crypto::Prng::X931SecureRandomBuilder);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Prng::X931SecureRandomBuilder, "Org.BouncyCastle.Crypto.Prng", "X931SecureRandomBuilder");
