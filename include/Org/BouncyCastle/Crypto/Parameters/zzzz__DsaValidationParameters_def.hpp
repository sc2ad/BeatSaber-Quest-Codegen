#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace {
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Parameters {
class DsaValidationParameters;
}
// Type: Org.BouncyCastle.Crypto.Parameters::DsaValidationParameters
namespace Org::BouncyCastle::Crypto::Parameters {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1032))
// CS Name: Org.BouncyCastle.Crypto.Parameters.DsaValidationParameters
class CORDL_TYPE DsaValidationParameters : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~DsaValidationParameters() = default;

// Ctor Parameters [CppParam { name: "", ty: "DsaValidationParameters", modifiers: " const&", def_value: None }]
constexpr DsaValidationParameters(DsaValidationParameters const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DsaValidationParameters", modifiers: "&&", def_value: None }]
constexpr DsaValidationParameters(DsaValidationParameters&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DsaValidationParameters(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr DsaValidationParameters& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DsaValidationParameters& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DsaValidationParameters& operator=(DsaValidationParameters&& o) noexcept = default;
  constexpr DsaValidationParameters& operator=(DsaValidationParameters const& o) noexcept = default;
                


// Fields

 ::ArrayW<uint8_t> __declspec(property(get=__get_seed, put=__set_seed))  seed;

constexpr void __set_seed(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_seed() const;

 int32_t __declspec(property(get=__get_counter, put=__set_counter))  counter;

constexpr void __set_counter(int32_t value) ;

constexpr int32_t __get_counter() const;

 int32_t __declspec(property(get=__get_usageIndex, put=__set_usageIndex))  usageIndex;

constexpr void __set_usageIndex(int32_t value) ;

constexpr int32_t __get_usageIndex() const;


// Properties

 int32_t __declspec(property(get=get_Counter))  Counter;

 int32_t __declspec(property(get=get_UsageIndex))  UsageIndex;


// Methods

// Ctor Parameters [CppParam { name: "seed", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "counter", ty: "int32_t", modifiers: "", def_value: None }]
explicit DsaValidationParameters(::ArrayW<uint8_t> seed, int32_t counter) ;

/// @brief Method .ctor addr 0xea518c size 0x8 virtual false final false
 void _ctor(::ArrayW<uint8_t> seed, int32_t counter) ;

// Ctor Parameters [CppParam { name: "seed", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "counter", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "usageIndex", ty: "int32_t", modifiers: "", def_value: None }]
explicit DsaValidationParameters(::ArrayW<uint8_t> seed, int32_t counter, int32_t usageIndex) ;

/// @brief Method .ctor addr 0xea5194 size 0x108 virtual false final false
 void _ctor(::ArrayW<uint8_t> seed, int32_t counter, int32_t usageIndex) ;

/// @brief Method GetSeed addr 0xea529c size 0x78 virtual true final false
 ::ArrayW<uint8_t> GetSeed() ;

/// @brief Method get_Counter addr 0xea5314 size 0x8 virtual true final false
 int32_t get_Counter() ;

/// @brief Method get_UsageIndex addr 0xea531c size 0x8 virtual true final false
 int32_t get_UsageIndex() ;

/// @brief Method Equals addr 0xea5324 size 0xa4 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method Equals addr 0xea53c8 size 0x90 virtual true final false
 bool Equals(::Org::BouncyCastle::Crypto::Parameters::DsaValidationParameters other) ;

/// @brief Method GetHashCode addr 0xea5458 size 0x88 virtual true final false
 int32_t GetHashCode() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Parameters
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Parameters::DsaValidationParameters);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Parameters::DsaValidationParameters, "Org.BouncyCastle.Crypto.Parameters", "DsaValidationParameters");
