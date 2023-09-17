#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace {
// Forward declare root types
namespace Org::BouncyCastle::Utilities {
class Integers;
}
// Type: Org.BouncyCastle.Utilities::Integers
namespace Org::BouncyCastle::Utilities {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1834))
// CS Name: Org.BouncyCastle.Utilities.Integers
class CORDL_TYPE Integers : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~Integers() = default;

// Ctor Parameters [CppParam { name: "", ty: "Integers", modifiers: " const&", def_value: None }]
constexpr Integers(Integers const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Integers", modifiers: "&&", def_value: None }]
constexpr Integers(Integers&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Integers(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Integers& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Integers& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Integers& operator=(Integers&& o) noexcept = default;
  constexpr Integers& operator=(Integers const& o) noexcept = default;
                


// Methods

/// @brief Method NumberOfLeadingZeros addr 0x10e2988 size 0x7c virtual false final false
static int32_t NumberOfLeadingZeros(int32_t i) ;

/// @brief Method NumberOfTrailingZeros addr 0x10e2a04 size 0x34 virtual false final false
static int32_t NumberOfTrailingZeros(int32_t i) ;

/// @brief Method RotateLeft addr 0x10e2a38 size 0x14 virtual false final false
static int32_t RotateLeft(int32_t i, int32_t distance) ;

/// @brief Method RotateLeft addr 0x10e2a4c size 0x14 virtual false final false
static uint32_t RotateLeft(uint32_t i, int32_t distance) ;

/// @brief Method RotateRight addr 0x10e2a60 size 0x14 virtual false final false
static int32_t RotateRight(int32_t i, int32_t distance) ;

/// @brief Method RotateRight addr 0x10e2a74 size 0x14 virtual false final false
static uint32_t RotateRight(uint32_t i, int32_t distance) ;

// Ctor Parameters []
explicit Integers() ;

/// @brief Method .ctor addr 0x10e2a88 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Utilities
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Utilities::Integers);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Utilities::Integers, "Org.BouncyCastle.Utilities", "Integers");
