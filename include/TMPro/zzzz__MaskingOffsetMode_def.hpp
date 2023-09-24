#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace TMPro {
struct MaskingOffsetMode;
}
// Type: TMPro::MaskingOffsetMode
namespace TMPro {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12378))
// CS Name: TMPro.MaskingOffsetMode
struct CORDL_TYPE MaskingOffsetMode : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr MaskingOffsetMode(int32_t value__) noexcept;


                    constexpr MaskingOffsetMode(MaskingOffsetMode const&) = default;
                    constexpr MaskingOffsetMode(MaskingOffsetMode&&) = default;
                    constexpr MaskingOffsetMode& operator=(MaskingOffsetMode const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr MaskingOffsetMode& operator=(MaskingOffsetMode&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit MaskingOffsetMode(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __MaskingOffsetMode_Unwrapped : int32_t {
__Percentage = 0,
__Pixel = 1,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __MaskingOffsetMode_Unwrapped () const noexcept {
return std::bit_cast<__MaskingOffsetMode_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Percentage offset 0
static TMPro::MaskingOffsetMode const Percentage;

/// @brief Field Pixel offset 0
static TMPro::MaskingOffsetMode const Pixel;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def TMPro
DEFINE_IL2CPP_ARG_TYPE(TMPro::MaskingOffsetMode, "TMPro", "MaskingOffsetMode");
