#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
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
class PrimalityTest;
}
// Type: Mono.Math.Prime::PrimalityTest
namespace Mono::Math::Prime {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2292))
// CS Name: Mono.Math.Prime.PrimalityTest
class CORDL_TYPE PrimalityTest : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~PrimalityTest() = default;

// Ctor Parameters [CppParam { name: "", ty: "PrimalityTest", modifiers: " const&", def_value: None }]
constexpr PrimalityTest(PrimalityTest const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PrimalityTest", modifiers: "&&", def_value: None }]
constexpr PrimalityTest(PrimalityTest&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PrimalityTest(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr PrimalityTest& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PrimalityTest& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PrimalityTest& operator=(PrimalityTest&& o) noexcept = default;
  constexpr PrimalityTest& operator=(PrimalityTest const& o) noexcept = default;
                


// Methods

static Mono::Math::Prime::PrimalityTest New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x22bdcc0 size 0x130 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x22bddf0 size 0x14 virtual true final false
 bool Invoke(Mono::Math::BigInteger bi, Mono::Math::Prime::ConfidenceFactor confidence) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Mono::Math::Prime
NEED_NO_BOX(Mono::Math::Prime::PrimalityTest);
DEFINE_IL2CPP_ARG_TYPE(Mono::Math::Prime::PrimalityTest, "Mono.Math.Prime", "PrimalityTest");
