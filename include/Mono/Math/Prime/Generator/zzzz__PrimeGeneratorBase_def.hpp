#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace {
namespace Mono::Math::Prime {
struct ConfidenceFactor;
}
namespace Mono::Math::Prime {
class PrimalityTest;
}
namespace Mono::Math {
class BigInteger;
}
// Forward declare root types
namespace Mono::Math::Prime::Generator {
class PrimeGeneratorBase;
}
// Type: Mono.Math.Prime.Generator::PrimeGeneratorBase
namespace Mono::Math::Prime::Generator {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14022))
// CS Name: Mono.Math.Prime.Generator.PrimeGeneratorBase
class CORDL_TYPE PrimeGeneratorBase : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~PrimeGeneratorBase() = default;

// Ctor Parameters [CppParam { name: "", ty: "PrimeGeneratorBase", modifiers: " const&", def_value: None }]
constexpr PrimeGeneratorBase(PrimeGeneratorBase const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PrimeGeneratorBase", modifiers: "&&", def_value: None }]
constexpr PrimeGeneratorBase(PrimeGeneratorBase&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PrimeGeneratorBase(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr PrimeGeneratorBase& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PrimeGeneratorBase& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PrimeGeneratorBase& operator=(PrimeGeneratorBase&& o) noexcept = default;
  constexpr PrimeGeneratorBase& operator=(PrimeGeneratorBase const& o) noexcept = default;
                


// Properties

 ::Mono::Math::Prime::ConfidenceFactor __declspec(property(get=get_Confidence))  Confidence;

 ::Mono::Math::Prime::PrimalityTest __declspec(property(get=get_PrimalityTest))  PrimalityTest;

 int32_t __declspec(property(get=get_TrialDivisionBounds))  TrialDivisionBounds;


// Methods

/// @brief Method get_Confidence addr 0x22a2d64 size 0x8 virtual true final false
 ::Mono::Math::Prime::ConfidenceFactor get_Confidence() ;

/// @brief Method get_PrimalityTest addr 0x22a2d6c size 0x74 virtual true final false
 ::Mono::Math::Prime::PrimalityTest get_PrimalityTest() ;

/// @brief Method get_TrialDivisionBounds addr 0x22a2de0 size 0x8 virtual true final false
 int32_t get_TrialDivisionBounds() ;

/// @brief Method GenerateNewPrime addr 0x0 size 0xffffffffffffffff virtual true final false
 ::Mono::Math::BigInteger GenerateNewPrime(int32_t bits) ;

// Ctor Parameters []
explicit PrimeGeneratorBase() ;

/// @brief Method .ctor addr 0x22a2de8 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Mono::Math::Prime::Generator
} // end anonymous namespace
NEED_NO_BOX(::Mono::Math::Prime::Generator::PrimeGeneratorBase);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Math::Prime::Generator::PrimeGeneratorBase, "Mono.Math.Prime.Generator", "PrimeGeneratorBase");
