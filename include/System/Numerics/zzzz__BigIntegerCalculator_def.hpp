#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace {
// Forward declare root types
namespace System::Numerics {
class BigIntegerCalculator;
}
// Type: System.Numerics::BigIntegerCalculator
namespace System::Numerics {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15626))
// CS Name: System.Numerics.BigIntegerCalculator
class CORDL_TYPE BigIntegerCalculator : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~BigIntegerCalculator() = default;

// Ctor Parameters [CppParam { name: "", ty: "BigIntegerCalculator", modifiers: " const&", def_value: None }]
constexpr BigIntegerCalculator(BigIntegerCalculator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BigIntegerCalculator", modifiers: "&&", def_value: None }]
constexpr BigIntegerCalculator(BigIntegerCalculator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BigIntegerCalculator(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr BigIntegerCalculator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BigIntegerCalculator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BigIntegerCalculator& operator=(BigIntegerCalculator&& o) noexcept = default;
  constexpr BigIntegerCalculator& operator=(BigIntegerCalculator const& o) noexcept = default;
                


// Fields

static int32_t __declspec(property(get=__get_ReducerThreshold, put=__set_ReducerThreshold))  ReducerThreshold;

static void __set_ReducerThreshold(int32_t value) ;

static int32_t __get_ReducerThreshold() ;

static int32_t __declspec(property(get=__get_SquareThreshold, put=__set_SquareThreshold))  SquareThreshold;

static void __set_SquareThreshold(int32_t value) ;

static int32_t __get_SquareThreshold() ;

static int32_t __declspec(property(get=__get_AllocationThreshold, put=__set_AllocationThreshold))  AllocationThreshold;

static void __set_AllocationThreshold(int32_t value) ;

static int32_t __get_AllocationThreshold() ;

static int32_t __declspec(property(get=__get_MultiplyThreshold, put=__set_MultiplyThreshold))  MultiplyThreshold;

static void __set_MultiplyThreshold(int32_t value) ;

static int32_t __get_MultiplyThreshold() ;


// Methods

/// @brief Method Add addr 0x26b41e0 size 0xd8 virtual false final false
static ::ArrayW<uint32_t> Add(::ArrayW<uint32_t> left, uint32_t right) ;

/// @brief Method Add addr 0x26b42b8 size 0xf8 virtual false final false
static ::ArrayW<uint32_t> Add(::ArrayW<uint32_t> left, ::ArrayW<uint32_t> right) ;

/// @brief Method Add addr 0x26b5090 size 0x88 virtual false final false
static void Add(void* left, int32_t leftLength, void* right, int32_t rightLength, void* bits, int32_t bitsLength) ;

/// @brief Method Subtract addr 0x26b4530 size 0xb8 virtual false final false
static ::ArrayW<uint32_t> Subtract(::ArrayW<uint32_t> left, uint32_t right) ;

/// @brief Method Subtract addr 0x26b4668 size 0x100 virtual false final false
static ::ArrayW<uint32_t> Subtract(::ArrayW<uint32_t> left, ::ArrayW<uint32_t> right) ;

/// @brief Method Subtract addr 0x26b5118 size 0x78 virtual false final false
static void Subtract(void* left, int32_t leftLength, void* right, int32_t rightLength, void* bits, int32_t bitsLength) ;

/// @brief Method Compare addr 0x26b45e8 size 0x80 virtual false final false
static int32_t Compare(::ArrayW<uint32_t> left, ::ArrayW<uint32_t> right) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Numerics
} // end anonymous namespace
NEED_NO_BOX(::System::Numerics::BigIntegerCalculator);
DEFINE_IL2CPP_ARG_TYPE(::System::Numerics::BigIntegerCalculator, "System.Numerics", "BigIntegerCalculator");
