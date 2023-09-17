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
class AeadParameters;
}
// Type: Org.BouncyCastle.Crypto.Parameters::AeadParameters
namespace Org::BouncyCastle::Crypto::Parameters {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1013))
// CS Name: Org.BouncyCastle.Crypto.Parameters.AeadParameters
class CORDL_TYPE AeadParameters : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::Org::BouncyCastle::Crypto::ICipherParameters
constexpr operator  ::Org::BouncyCastle::Crypto::ICipherParameters() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~AeadParameters() = default;

// Ctor Parameters [CppParam { name: "", ty: "AeadParameters", modifiers: " const&", def_value: None }]
constexpr AeadParameters(AeadParameters const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AeadParameters", modifiers: "&&", def_value: None }]
constexpr AeadParameters(AeadParameters&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AeadParameters(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr AeadParameters& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AeadParameters& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AeadParameters& operator=(AeadParameters&& o) noexcept = default;
  constexpr AeadParameters& operator=(AeadParameters const& o) noexcept = default;
                


// Fields

 ::ArrayW<uint8_t> __declspec(property(get=__get_associatedText, put=__set_associatedText))  associatedText;

constexpr void __set_associatedText(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_associatedText() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_nonce, put=__set_nonce))  nonce;

constexpr void __set_nonce(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_nonce() const;

 ::Org::BouncyCastle::Crypto::Parameters::KeyParameter __declspec(property(get=__get_key, put=__set_key))  key;

constexpr void __set_key(::Org::BouncyCastle::Crypto::Parameters::KeyParameter value) ;

constexpr ::Org::BouncyCastle::Crypto::Parameters::KeyParameter __get_key() const;

 int32_t __declspec(property(get=__get_macSize, put=__set_macSize))  macSize;

constexpr void __set_macSize(int32_t value) ;

constexpr int32_t __get_macSize() const;


// Properties

 ::Org::BouncyCastle::Crypto::Parameters::KeyParameter __declspec(property(get=get_Key))  Key;

 int32_t __declspec(property(get=get_MacSize))  MacSize;


// Methods

// Ctor Parameters [CppParam { name: "key", ty: "::Org::BouncyCastle::Crypto::Parameters::KeyParameter", modifiers: "", def_value: None }, CppParam { name: "macSize", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "nonce", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
explicit AeadParameters(::Org::BouncyCastle::Crypto::Parameters::KeyParameter key, int32_t macSize, ::ArrayW<uint8_t> nonce) ;

/// @brief Method .ctor addr 0xea2478 size 0x40 virtual false final false
 void _ctor(::Org::BouncyCastle::Crypto::Parameters::KeyParameter key, int32_t macSize, ::ArrayW<uint8_t> nonce) ;

// Ctor Parameters [CppParam { name: "key", ty: "::Org::BouncyCastle::Crypto::Parameters::KeyParameter", modifiers: "", def_value: None }, CppParam { name: "macSize", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "nonce", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "associatedText", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
explicit AeadParameters(::Org::BouncyCastle::Crypto::Parameters::KeyParameter key, int32_t macSize, ::ArrayW<uint8_t> nonce, ::ArrayW<uint8_t> associatedText) ;

/// @brief Method .ctor addr 0xea24b8 size 0x44 virtual false final false
 void _ctor(::Org::BouncyCastle::Crypto::Parameters::KeyParameter key, int32_t macSize, ::ArrayW<uint8_t> nonce, ::ArrayW<uint8_t> associatedText) ;

/// @brief Method get_Key addr 0xea24fc size 0x8 virtual true final false
 ::Org::BouncyCastle::Crypto::Parameters::KeyParameter get_Key() ;

/// @brief Method get_MacSize addr 0xea2504 size 0x8 virtual true final false
 int32_t get_MacSize() ;

/// @brief Method GetAssociatedText addr 0xea250c size 0x8 virtual true final false
 ::ArrayW<uint8_t> GetAssociatedText() ;

/// @brief Method GetNonce addr 0xea2514 size 0x8 virtual true final false
 ::ArrayW<uint8_t> GetNonce() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Parameters
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Parameters::AeadParameters);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Parameters::AeadParameters, "Org.BouncyCastle.Crypto.Parameters", "AeadParameters");
