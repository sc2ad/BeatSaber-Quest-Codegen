#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace TMPro {
struct HorizontalAlignmentOptions;
}
// Type: TMPro::HorizontalAlignmentOptions
namespace TMPro {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12372))
// CS Name: TMPro.HorizontalAlignmentOptions
struct CORDL_TYPE HorizontalAlignmentOptions : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr HorizontalAlignmentOptions(int32_t value__) noexcept;


                    constexpr HorizontalAlignmentOptions(HorizontalAlignmentOptions const&) = default;
                    constexpr HorizontalAlignmentOptions(HorizontalAlignmentOptions&&) = default;
                    constexpr HorizontalAlignmentOptions& operator=(HorizontalAlignmentOptions const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr HorizontalAlignmentOptions& operator=(HorizontalAlignmentOptions&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit HorizontalAlignmentOptions(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __HorizontalAlignmentOptions_Unwrapped : int32_t {
__Left = 1,
__Center = 2,
__Right = 4,
__Justified = 8,
__Flush = 16,
__Geometry = 32,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __HorizontalAlignmentOptions_Unwrapped () const noexcept {
return std::bit_cast<__HorizontalAlignmentOptions_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Left offset 0
static TMPro::HorizontalAlignmentOptions const Left;

/// @brief Field Center offset 0
static TMPro::HorizontalAlignmentOptions const Center;

/// @brief Field Right offset 0
static TMPro::HorizontalAlignmentOptions const Right;

/// @brief Field Justified offset 0
static TMPro::HorizontalAlignmentOptions const Justified;

/// @brief Field Flush offset 0
static TMPro::HorizontalAlignmentOptions const Flush;

/// @brief Field Geometry offset 0
static TMPro::HorizontalAlignmentOptions const Geometry;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def TMPro
DEFINE_IL2CPP_ARG_TYPE(TMPro::HorizontalAlignmentOptions, "TMPro", "HorizontalAlignmentOptions");
