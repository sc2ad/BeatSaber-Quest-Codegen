#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace System::Xml::Schema {
struct RestrictionFlags;
}
// Type: System.Xml.Schema::RestrictionFlags
namespace System::Xml::Schema {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11559))
// CS Name: System.Xml.Schema.RestrictionFlags
struct CORDL_TYPE RestrictionFlags : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr RestrictionFlags(int32_t value__) noexcept;


                    constexpr RestrictionFlags(RestrictionFlags const&) = default;
                    constexpr RestrictionFlags(RestrictionFlags&&) = default;
                    constexpr RestrictionFlags& operator=(RestrictionFlags const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr RestrictionFlags& operator=(RestrictionFlags&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit RestrictionFlags(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __RestrictionFlags_Unwrapped : int32_t {
__Length = 1,
__MinLength = 2,
__MaxLength = 4,
__Pattern = 8,
__Enumeration = 16,
__WhiteSpace = 32,
__MaxInclusive = 64,
__MaxExclusive = 128,
__MinInclusive = 256,
__MinExclusive = 512,
__TotalDigits = 1024,
__FractionDigits = 2048,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __RestrictionFlags_Unwrapped () const noexcept {
return std::bit_cast<__RestrictionFlags_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Length offset 0
static ::System::Xml::Schema::RestrictionFlags const Length;

/// @brief Field MinLength offset 0
static ::System::Xml::Schema::RestrictionFlags const MinLength;

/// @brief Field MaxLength offset 0
static ::System::Xml::Schema::RestrictionFlags const MaxLength;

/// @brief Field Pattern offset 0
static ::System::Xml::Schema::RestrictionFlags const Pattern;

/// @brief Field Enumeration offset 0
static ::System::Xml::Schema::RestrictionFlags const Enumeration;

/// @brief Field WhiteSpace offset 0
static ::System::Xml::Schema::RestrictionFlags const WhiteSpace;

/// @brief Field MaxInclusive offset 0
static ::System::Xml::Schema::RestrictionFlags const MaxInclusive;

/// @brief Field MaxExclusive offset 0
static ::System::Xml::Schema::RestrictionFlags const MaxExclusive;

/// @brief Field MinInclusive offset 0
static ::System::Xml::Schema::RestrictionFlags const MinInclusive;

/// @brief Field MinExclusive offset 0
static ::System::Xml::Schema::RestrictionFlags const MinExclusive;

/// @brief Field TotalDigits offset 0
static ::System::Xml::Schema::RestrictionFlags const TotalDigits;

/// @brief Field FractionDigits offset 0
static ::System::Xml::Schema::RestrictionFlags const FractionDigits;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Xml::Schema
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::RestrictionFlags, "System.Xml.Schema", "RestrictionFlags");
