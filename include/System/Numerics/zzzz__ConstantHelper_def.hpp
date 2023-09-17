#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
#include <cstdint>
namespace {
// Forward declare root types
namespace System::Numerics {
class ConstantHelper;
}
// Type: System.Numerics::ConstantHelper
namespace System::Numerics {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3542))
// CS Name: System.Numerics.ConstantHelper
class CORDL_TYPE ConstantHelper : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~ConstantHelper() = default;

// Ctor Parameters [CppParam { name: "", ty: "ConstantHelper", modifiers: " const&", def_value: None }]
constexpr ConstantHelper(ConstantHelper const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ConstantHelper", modifiers: "&&", def_value: None }]
constexpr ConstantHelper(ConstantHelper&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ConstantHelper(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ConstantHelper& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ConstantHelper& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ConstantHelper& operator=(ConstantHelper&& o) noexcept = default;
  constexpr ConstantHelper& operator=(ConstantHelper const& o) noexcept = default;
                


// Methods

/// @brief Method GetByteWithAllBitsSet addr 0x238ebd8 size 0x8 virtual false final false
static uint8_t GetByteWithAllBitsSet() ;

/// @brief Method GetSByteWithAllBitsSet addr 0x238ebe0 size 0x8 virtual false final false
static int8_t GetSByteWithAllBitsSet() ;

/// @brief Method GetUInt16WithAllBitsSet addr 0x238ebe8 size 0x8 virtual false final false
static uint16_t GetUInt16WithAllBitsSet() ;

/// @brief Method GetInt16WithAllBitsSet addr 0x238ebf0 size 0x8 virtual false final false
static int16_t GetInt16WithAllBitsSet() ;

/// @brief Method GetUInt32WithAllBitsSet addr 0x238ebf8 size 0x8 virtual false final false
static uint32_t GetUInt32WithAllBitsSet() ;

/// @brief Method GetInt32WithAllBitsSet addr 0x238ec00 size 0x8 virtual false final false
static int32_t GetInt32WithAllBitsSet() ;

/// @brief Method GetUInt64WithAllBitsSet addr 0x238ec08 size 0x8 virtual false final false
static uint64_t GetUInt64WithAllBitsSet() ;

/// @brief Method GetInt64WithAllBitsSet addr 0x238ec10 size 0x8 virtual false final false
static int64_t GetInt64WithAllBitsSet() ;

/// @brief Method GetSingleWithAllBitsSet addr 0x238ec18 size 0xc virtual false final false
static float_t GetSingleWithAllBitsSet() ;

/// @brief Method GetDoubleWithAllBitsSet addr 0x238ec24 size 0x8 virtual false final false
static double_t GetDoubleWithAllBitsSet() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Numerics
} // end anonymous namespace
NEED_NO_BOX(::System::Numerics::ConstantHelper);
DEFINE_IL2CPP_ARG_TYPE(::System::Numerics::ConstantHelper, "System.Numerics", "ConstantHelper");
