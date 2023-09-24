#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Mono/Math/Prime/Generator/zzzz__PrimeGeneratorBase_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace Mono::Math {
class BigInteger;
}
// Forward declare root types
namespace Mono::Math::Prime::Generator {
class SequentialSearchPrimeGeneratorBase;
}
// Type: Mono.Math.Prime.Generator::SequentialSearchPrimeGeneratorBase
namespace Mono::Math::Prime::Generator {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2294))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2295))
// CS Name: Mono.Math.Prime.Generator.SequentialSearchPrimeGeneratorBase
class CORDL_TYPE SequentialSearchPrimeGeneratorBase : public Mono::Math::Prime::Generator::PrimeGeneratorBase {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~SequentialSearchPrimeGeneratorBase() = default;

// Ctor Parameters [CppParam { name: "", ty: "SequentialSearchPrimeGeneratorBase", modifiers: " const&", def_value: None }]
constexpr SequentialSearchPrimeGeneratorBase(SequentialSearchPrimeGeneratorBase const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SequentialSearchPrimeGeneratorBase", modifiers: "&&", def_value: None }]
constexpr SequentialSearchPrimeGeneratorBase(SequentialSearchPrimeGeneratorBase&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SequentialSearchPrimeGeneratorBase(void* ptr) noexcept : Mono::Math::Prime::Generator::PrimeGeneratorBase(ptr) {
}


  constexpr SequentialSearchPrimeGeneratorBase& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SequentialSearchPrimeGeneratorBase& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SequentialSearchPrimeGeneratorBase& operator=(SequentialSearchPrimeGeneratorBase&& o) noexcept = default;
  constexpr SequentialSearchPrimeGeneratorBase& operator=(SequentialSearchPrimeGeneratorBase const& o) noexcept = default;
                


// Methods

/// @brief Method GenerateSearchBase addr 0x22be480 size 0x74 virtual true final false
 Mono::Math::BigInteger GenerateSearchBase(int32_t bits, ::bs_hook::Il2CppWrapperType context) ;

/// @brief Method GenerateNewPrime addr 0x22be4f4 size 0x10 virtual true final false
 Mono::Math::BigInteger GenerateNewPrime(int32_t bits) ;

/// @brief Method GenerateNewPrime addr 0x22be504 size 0x2e4 virtual true final false
 Mono::Math::BigInteger GenerateNewPrime(int32_t bits, ::bs_hook::Il2CppWrapperType context) ;

/// @brief Method IsPrimeAcceptable addr 0x22be7e8 size 0x8 virtual true final false
 bool IsPrimeAcceptable(Mono::Math::BigInteger bi, ::bs_hook::Il2CppWrapperType context) ;

static Mono::Math::Prime::Generator::SequentialSearchPrimeGeneratorBase New_ctor() ;

/// @brief Method .ctor addr 0x22bcf9c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Mono::Math::Prime::Generator
NEED_NO_BOX(Mono::Math::Prime::Generator::SequentialSearchPrimeGeneratorBase);
DEFINE_IL2CPP_ARG_TYPE(Mono::Math::Prime::Generator::SequentialSearchPrimeGeneratorBase, "Mono.Math.Prime.Generator", "SequentialSearchPrimeGeneratorBase");
