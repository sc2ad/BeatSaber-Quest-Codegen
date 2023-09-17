#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace {
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class KeyParameter;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Parameters {
class TweakableBlockCipherParameters;
}
// Type: Org.BouncyCastle.Crypto.Parameters::TweakableBlockCipherParameters
namespace Org::BouncyCastle::Crypto::Parameters {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1087))
// CS Name: Org.BouncyCastle.Crypto.Parameters.TweakableBlockCipherParameters
class CORDL_TYPE TweakableBlockCipherParameters : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::Org::BouncyCastle::Crypto::ICipherParameters
constexpr operator  ::Org::BouncyCastle::Crypto::ICipherParameters() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~TweakableBlockCipherParameters() = default;

// Ctor Parameters [CppParam { name: "", ty: "TweakableBlockCipherParameters", modifiers: " const&", def_value: None }]
constexpr TweakableBlockCipherParameters(TweakableBlockCipherParameters const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TweakableBlockCipherParameters", modifiers: "&&", def_value: None }]
constexpr TweakableBlockCipherParameters(TweakableBlockCipherParameters&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TweakableBlockCipherParameters(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr TweakableBlockCipherParameters& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TweakableBlockCipherParameters& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TweakableBlockCipherParameters& operator=(TweakableBlockCipherParameters&& o) noexcept = default;
  constexpr TweakableBlockCipherParameters& operator=(TweakableBlockCipherParameters const& o) noexcept = default;
                


// Fields

 ::ArrayW<uint8_t> __declspec(property(get=__get_tweak, put=__set_tweak))  tweak;

constexpr void __set_tweak(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_tweak() const;

 ::Org::BouncyCastle::Crypto::Parameters::KeyParameter __declspec(property(get=__get_key, put=__set_key))  key;

constexpr void __set_key(::Org::BouncyCastle::Crypto::Parameters::KeyParameter value) ;

constexpr ::Org::BouncyCastle::Crypto::Parameters::KeyParameter __get_key() const;


// Properties

 ::Org::BouncyCastle::Crypto::Parameters::KeyParameter __declspec(property(get=get_Key))  Key;

 ::ArrayW<uint8_t> __declspec(property(get=get_Tweak))  Tweak;


// Methods

// Ctor Parameters [CppParam { name: "key", ty: "::Org::BouncyCastle::Crypto::Parameters::KeyParameter", modifiers: "", def_value: None }, CppParam { name: "tweak", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
explicit TweakableBlockCipherParameters(::Org::BouncyCastle::Crypto::Parameters::KeyParameter key, ::ArrayW<uint8_t> tweak) ;

/// @brief Method .ctor addr 0xead734 size 0x80 virtual false final false
 void _ctor(::Org::BouncyCastle::Crypto::Parameters::KeyParameter key, ::ArrayW<uint8_t> tweak) ;

/// @brief Method get_Key addr 0xead7b4 size 0x8 virtual false final false
 ::Org::BouncyCastle::Crypto::Parameters::KeyParameter get_Key() ;

/// @brief Method get_Tweak addr 0xead7bc size 0x8 virtual false final false
 ::ArrayW<uint8_t> get_Tweak() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Parameters
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Parameters::TweakableBlockCipherParameters);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Parameters::TweakableBlockCipherParameters, "Org.BouncyCastle.Crypto.Parameters", "TweakableBlockCipherParameters");
