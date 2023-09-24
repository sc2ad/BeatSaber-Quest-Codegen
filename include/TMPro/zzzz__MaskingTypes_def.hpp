#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace TMPro {
struct MaskingTypes;
}
// Type: TMPro::MaskingTypes
namespace TMPro {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12376))
// CS Name: TMPro.MaskingTypes
struct CORDL_TYPE MaskingTypes : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr MaskingTypes(int32_t value__) noexcept;


                    constexpr MaskingTypes(MaskingTypes const&) = default;
                    constexpr MaskingTypes(MaskingTypes&&) = default;
                    constexpr MaskingTypes& operator=(MaskingTypes const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr MaskingTypes& operator=(MaskingTypes&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit MaskingTypes(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __MaskingTypes_Unwrapped : int32_t {
__MaskOff = 0,
__MaskHard = 1,
__MaskSoft = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __MaskingTypes_Unwrapped () const noexcept {
return std::bit_cast<__MaskingTypes_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field MaskOff offset 0
static TMPro::MaskingTypes const MaskOff;

/// @brief Field MaskHard offset 0
static TMPro::MaskingTypes const MaskHard;

/// @brief Field MaskSoft offset 0
static TMPro::MaskingTypes const MaskSoft;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def TMPro
DEFINE_IL2CPP_ARG_TYPE(TMPro::MaskingTypes, "TMPro", "MaskingTypes");
