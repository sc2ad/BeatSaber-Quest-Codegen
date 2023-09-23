#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace Mono::Math::Prime {
struct ConfidenceFactor;
}
namespace Mono::Math {
class BigInteger;
}
// Forward declare root types
namespace Mono::Math::Prime {
class PrimalityTests;
}
// Type: Mono.Math.Prime::PrimalityTests
namespace Mono::Math::Prime {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14021))
// CS Name: Mono.Math.Prime.PrimalityTests
class CORDL_TYPE PrimalityTests : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~PrimalityTests() = default;

// Ctor Parameters [CppParam { name: "", ty: "PrimalityTests", modifiers: " const&", def_value: None }]
constexpr PrimalityTests(PrimalityTests const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PrimalityTests", modifiers: "&&", def_value: None }]
constexpr PrimalityTests(PrimalityTests&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PrimalityTests(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr PrimalityTests& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PrimalityTests& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PrimalityTests& operator=(PrimalityTests&& o) noexcept = default;
  constexpr PrimalityTests& operator=(PrimalityTests const& o) noexcept = default;
                


// Methods

/// @brief Method GetSPPRounds addr 0x22a2940 size 0x194 virtual false final false
static int32_t GetSPPRounds(Mono::Math::BigInteger bi, Mono::Math::Prime::ConfidenceFactor confidence) ;

/// @brief Method RabinMillerTest addr 0x22a2ad4 size 0x290 virtual false final false
static bool RabinMillerTest(Mono::Math::BigInteger n, Mono::Math::Prime::ConfidenceFactor confidence) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Mono::Math::Prime
NEED_NO_BOX(Mono::Math::Prime::PrimalityTests);
DEFINE_IL2CPP_ARG_TYPE(Mono::Math::Prime::PrimalityTests, "Mono.Math.Prime", "PrimalityTests");
