#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace TMPro {
struct FontWeight;
}
// Type: TMPro::FontWeight
namespace TMPro {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12381))
// CS Name: TMPro.FontWeight
struct CORDL_TYPE FontWeight : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr FontWeight(int32_t value__) noexcept;


                    constexpr FontWeight(FontWeight const&) = default;
                    constexpr FontWeight(FontWeight&&) = default;
                    constexpr FontWeight& operator=(FontWeight const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr FontWeight& operator=(FontWeight&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit FontWeight(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __FontWeight_Unwrapped : int32_t {
__Thin = 100,
__ExtraLight = 200,
__Light = 300,
__Regular = 400,
__Medium = 500,
__SemiBold = 600,
__Bold = 700,
__Heavy = 800,
__Black = 900,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __FontWeight_Unwrapped () const noexcept {
return std::bit_cast<__FontWeight_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Thin offset 0
static TMPro::FontWeight const Thin;

/// @brief Field ExtraLight offset 0
static TMPro::FontWeight const ExtraLight;

/// @brief Field Light offset 0
static TMPro::FontWeight const Light;

/// @brief Field Regular offset 0
static TMPro::FontWeight const Regular;

/// @brief Field Medium offset 0
static TMPro::FontWeight const Medium;

/// @brief Field SemiBold offset 0
static TMPro::FontWeight const SemiBold;

/// @brief Field Bold offset 0
static TMPro::FontWeight const Bold;

/// @brief Field Heavy offset 0
static TMPro::FontWeight const Heavy;

/// @brief Field Black offset 0
static TMPro::FontWeight const Black;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def TMPro
DEFINE_IL2CPP_ARG_TYPE(TMPro::FontWeight, "TMPro", "FontWeight");
