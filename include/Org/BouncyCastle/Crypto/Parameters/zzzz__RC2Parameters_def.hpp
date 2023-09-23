#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__KeyParameter_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Parameters {
class RC2Parameters;
}
// Type: Org.BouncyCastle.Crypto.Parameters::RC2Parameters
namespace Org::BouncyCastle::Crypto::Parameters {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1015))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1076))
// CS Name: Org.BouncyCastle.Crypto.Parameters.RC2Parameters
class CORDL_TYPE RC2Parameters : public Org::BouncyCastle::Crypto::Parameters::KeyParameter {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~RC2Parameters() = default;

// Ctor Parameters [CppParam { name: "", ty: "RC2Parameters", modifiers: " const&", def_value: None }]
constexpr RC2Parameters(RC2Parameters const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RC2Parameters", modifiers: "&&", def_value: None }]
constexpr RC2Parameters(RC2Parameters&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RC2Parameters(void* ptr) noexcept : Org::BouncyCastle::Crypto::Parameters::KeyParameter(ptr) {
}


  constexpr RC2Parameters& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RC2Parameters& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RC2Parameters& operator=(RC2Parameters&& o) noexcept = default;
  constexpr RC2Parameters& operator=(RC2Parameters const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get_bits, put=__set_bits))  bits;

constexpr void __set_bits(int32_t value) ;

constexpr int32_t __get_bits() const;


// Properties

 int32_t __declspec(property(get=get_EffectiveKeyBits))  EffectiveKeyBits;


// Methods

// Ctor Parameters [CppParam { name: "key", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
explicit RC2Parameters(::ArrayW<uint8_t> key) ;

/// @brief Method .ctor addr 0xeab268 size 0x40 virtual false final false
 void _ctor(::ArrayW<uint8_t> key) ;

// Ctor Parameters [CppParam { name: "key", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "keyOff", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "keyLen", ty: "int32_t", modifiers: "", def_value: None }]
explicit RC2Parameters(::ArrayW<uint8_t> key, int32_t keyOff, int32_t keyLen) ;

/// @brief Method .ctor addr 0xeab2d0 size 0x34 virtual false final false
 void _ctor(::ArrayW<uint8_t> key, int32_t keyOff, int32_t keyLen) ;

// Ctor Parameters [CppParam { name: "key", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "bits", ty: "int32_t", modifiers: "", def_value: None }]
explicit RC2Parameters(::ArrayW<uint8_t> key, int32_t bits) ;

/// @brief Method .ctor addr 0xeab2a8 size 0x28 virtual false final false
 void _ctor(::ArrayW<uint8_t> key, int32_t bits) ;

// Ctor Parameters [CppParam { name: "key", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "keyOff", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "keyLen", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "bits", ty: "int32_t", modifiers: "", def_value: None }]
explicit RC2Parameters(::ArrayW<uint8_t> key, int32_t keyOff, int32_t keyLen, int32_t bits) ;

/// @brief Method .ctor addr 0xeab304 size 0x28 virtual false final false
 void _ctor(::ArrayW<uint8_t> key, int32_t keyOff, int32_t keyLen, int32_t bits) ;

/// @brief Method get_EffectiveKeyBits addr 0xeab32c size 0x8 virtual false final false
 int32_t get_EffectiveKeyBits() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Parameters
NEED_NO_BOX(Org::BouncyCastle::Crypto::Parameters::RC2Parameters);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Parameters::RC2Parameters, "Org.BouncyCastle.Crypto.Parameters", "RC2Parameters");
