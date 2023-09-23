#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Parameters {
class DHValidationParameters;
}
// Type: Org.BouncyCastle.Crypto.Parameters::DHValidationParameters
namespace Org::BouncyCastle::Crypto::Parameters {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1025))
// CS Name: Org.BouncyCastle.Crypto.Parameters.DHValidationParameters
class CORDL_TYPE DHValidationParameters : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~DHValidationParameters() = default;

// Ctor Parameters [CppParam { name: "", ty: "DHValidationParameters", modifiers: " const&", def_value: None }]
constexpr DHValidationParameters(DHValidationParameters const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DHValidationParameters", modifiers: "&&", def_value: None }]
constexpr DHValidationParameters(DHValidationParameters&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DHValidationParameters(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr DHValidationParameters& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DHValidationParameters& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DHValidationParameters& operator=(DHValidationParameters&& o) noexcept = default;
  constexpr DHValidationParameters& operator=(DHValidationParameters const& o) noexcept = default;
                


// Fields

 ::ArrayW<uint8_t> __declspec(property(get=__get_seed, put=__set_seed))  seed;

constexpr void __set_seed(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_seed() const;

 int32_t __declspec(property(get=__get_counter, put=__set_counter))  counter;

constexpr void __set_counter(int32_t value) ;

constexpr int32_t __get_counter() const;


// Properties

 int32_t __declspec(property(get=get_Counter))  Counter;


// Methods

// Ctor Parameters [CppParam { name: "seed", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "counter", ty: "int32_t", modifiers: "", def_value: None }]
explicit DHValidationParameters(::ArrayW<uint8_t> seed, int32_t counter) ;

/// @brief Method .ctor addr 0xea4440 size 0xfc virtual false final false
 void _ctor(::ArrayW<uint8_t> seed, int32_t counter) ;

/// @brief Method GetSeed addr 0xea453c size 0x78 virtual false final false
 ::ArrayW<uint8_t> GetSeed() ;

/// @brief Method get_Counter addr 0xea45b4 size 0x8 virtual false final false
 int32_t get_Counter() ;

/// @brief Method Equals addr 0xea45bc size 0x9c virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method Equals addr 0xea4658 size 0x90 virtual false final false
 bool Equals(Org::BouncyCastle::Crypto::Parameters::DHValidationParameters other) ;

/// @brief Method GetHashCode addr 0xea46e8 size 0x88 virtual true final false
 int32_t GetHashCode() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Parameters
NEED_NO_BOX(Org::BouncyCastle::Crypto::Parameters::DHValidationParameters);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Parameters::DHValidationParameters, "Org.BouncyCastle.Crypto.Parameters", "DHValidationParameters");
