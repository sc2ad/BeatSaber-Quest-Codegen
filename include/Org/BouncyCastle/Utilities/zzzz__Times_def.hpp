#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace {
// Forward declare root types
namespace Org::BouncyCastle::Utilities {
class Times;
}
// Type: Org.BouncyCastle.Utilities::Times
namespace Org::BouncyCastle::Utilities {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1838))
// CS Name: Org.BouncyCastle.Utilities.Times
class CORDL_TYPE Times : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~Times() = default;

// Ctor Parameters [CppParam { name: "", ty: "Times", modifiers: " const&", def_value: None }]
constexpr Times(Times const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Times", modifiers: "&&", def_value: None }]
constexpr Times(Times&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Times(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Times& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Times& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Times& operator=(Times&& o) noexcept = default;
  constexpr Times& operator=(Times const& o) noexcept = default;
                


// Fields

static int64_t __declspec(property(get=__get_NanosecondsPerTick, put=__set_NanosecondsPerTick))  NanosecondsPerTick;

static void __set_NanosecondsPerTick(int64_t value) ;

static int64_t __get_NanosecondsPerTick() ;


// Methods

/// @brief Method NanoTime addr 0x10e3a3c size 0xa4 virtual false final false
static int64_t NanoTime() ;

// Ctor Parameters []
explicit Times() ;

/// @brief Method .ctor addr 0x10e3b2c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Utilities
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Utilities::Times);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Utilities::Times, "Org.BouncyCastle.Utilities", "Times");
