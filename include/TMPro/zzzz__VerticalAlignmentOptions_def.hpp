#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace TMPro {
struct VerticalAlignmentOptions;
}
// Type: TMPro::VerticalAlignmentOptions
namespace TMPro {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12373))
// CS Name: TMPro.VerticalAlignmentOptions
struct CORDL_TYPE VerticalAlignmentOptions : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr VerticalAlignmentOptions(int32_t value__) noexcept;


                    constexpr VerticalAlignmentOptions(VerticalAlignmentOptions const&) = default;
                    constexpr VerticalAlignmentOptions(VerticalAlignmentOptions&&) = default;
                    constexpr VerticalAlignmentOptions& operator=(VerticalAlignmentOptions const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr VerticalAlignmentOptions& operator=(VerticalAlignmentOptions&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit VerticalAlignmentOptions(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __VerticalAlignmentOptions_Unwrapped : int32_t {
__Top = 256,
__Middle = 512,
__Bottom = 1024,
__Baseline = 2048,
__Geometry = 4096,
__Capline = 8192,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __VerticalAlignmentOptions_Unwrapped () const noexcept {
return std::bit_cast<__VerticalAlignmentOptions_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Top offset 0
static ::TMPro::VerticalAlignmentOptions const Top;

/// @brief Field Middle offset 0
static ::TMPro::VerticalAlignmentOptions const Middle;

/// @brief Field Bottom offset 0
static ::TMPro::VerticalAlignmentOptions const Bottom;

/// @brief Field Baseline offset 0
static ::TMPro::VerticalAlignmentOptions const Baseline;

/// @brief Field Geometry offset 0
static ::TMPro::VerticalAlignmentOptions const Geometry;

/// @brief Field Capline offset 0
static ::TMPro::VerticalAlignmentOptions const Capline;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def TMPro
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::TMPro::VerticalAlignmentOptions, "TMPro", "VerticalAlignmentOptions");
