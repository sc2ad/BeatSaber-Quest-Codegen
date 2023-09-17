#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace {
// Forward declare root types
namespace System::Numerics {
class NumericsHelpers;
}
// Type: System.Numerics::NumericsHelpers
namespace System::Numerics {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15628))
// CS Name: System.Numerics.NumericsHelpers
class CORDL_TYPE NumericsHelpers : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~NumericsHelpers() = default;

// Ctor Parameters [CppParam { name: "", ty: "NumericsHelpers", modifiers: " const&", def_value: None }]
constexpr NumericsHelpers(NumericsHelpers const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "NumericsHelpers", modifiers: "&&", def_value: None }]
constexpr NumericsHelpers(NumericsHelpers&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit NumericsHelpers(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr NumericsHelpers& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr NumericsHelpers& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr NumericsHelpers& operator=(NumericsHelpers&& o) noexcept = default;
  constexpr NumericsHelpers& operator=(NumericsHelpers const& o) noexcept = default;
                


// Methods

/// @brief Method DangerousMakeTwosComplement addr 0x26b3338 size 0xbc virtual false final false
static void DangerousMakeTwosComplement(::ArrayW<uint32_t> d) ;

/// @brief Method MakeUlong addr 0x26b68b8 size 0x10 virtual false final false
static uint64_t MakeUlong(uint32_t uHi, uint32_t uLo) ;

/// @brief Method Abs addr 0x26b41d4 size 0xc virtual false final false
static uint32_t Abs(int32_t a) ;

/// @brief Method CombineHash addr 0x26b6a08 size 0x8 virtual false final false
static uint32_t CombineHash(uint32_t u1, uint32_t u2) ;

/// @brief Method CombineHash addr 0x26b3648 size 0x8 virtual false final false
static int32_t CombineHash(int32_t n1, int32_t n2) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Numerics
} // end anonymous namespace
NEED_NO_BOX(::System::Numerics::NumericsHelpers);
DEFINE_IL2CPP_ARG_TYPE(::System::Numerics::NumericsHelpers, "System.Numerics", "NumericsHelpers");
