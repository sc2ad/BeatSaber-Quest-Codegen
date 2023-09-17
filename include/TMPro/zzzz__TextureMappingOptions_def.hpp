#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace TMPro {
struct TextureMappingOptions;
}
// Type: TMPro::TextureMappingOptions
namespace TMPro {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12379))
// CS Name: TMPro.TextureMappingOptions
struct CORDL_TYPE TextureMappingOptions : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr TextureMappingOptions(int32_t value__) noexcept;


                    constexpr TextureMappingOptions(TextureMappingOptions const&) = default;
                    constexpr TextureMappingOptions(TextureMappingOptions&&) = default;
                    constexpr TextureMappingOptions& operator=(TextureMappingOptions const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr TextureMappingOptions& operator=(TextureMappingOptions&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit TextureMappingOptions(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __TextureMappingOptions_Unwrapped : int32_t {
__Character = 0,
__Line = 1,
__Paragraph = 2,
__MatchAspect = 3,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __TextureMappingOptions_Unwrapped () const noexcept {
return std::bit_cast<__TextureMappingOptions_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Character offset 0
static ::TMPro::TextureMappingOptions const Character;

/// @brief Field Line offset 0
static ::TMPro::TextureMappingOptions const Line;

/// @brief Field Paragraph offset 0
static ::TMPro::TextureMappingOptions const Paragraph;

/// @brief Field MatchAspect offset 0
static ::TMPro::TextureMappingOptions const MatchAspect;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def TMPro
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::TMPro::TextureMappingOptions, "TMPro", "TextureMappingOptions");
