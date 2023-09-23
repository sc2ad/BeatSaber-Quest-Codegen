#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace GlobalNamespace {
struct PS4ApplicationCategory;
}
// Type: ::PS4ApplicationCategory
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4641))
// CS Name: PS4ApplicationCategory
struct CORDL_TYPE PS4ApplicationCategory : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr PS4ApplicationCategory(int32_t value__) noexcept;


                    constexpr PS4ApplicationCategory(PS4ApplicationCategory const&) = default;
                    constexpr PS4ApplicationCategory(PS4ApplicationCategory&&) = default;
                    constexpr PS4ApplicationCategory& operator=(PS4ApplicationCategory const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr PS4ApplicationCategory& operator=(PS4ApplicationCategory&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit PS4ApplicationCategory(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __PS4ApplicationCategory_Unwrapped : int32_t {
__Application = 0,
__Patch = 1,
__Remaster = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __PS4ApplicationCategory_Unwrapped () const noexcept {
return std::bit_cast<__PS4ApplicationCategory_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Application offset 0
static GlobalNamespace::PS4ApplicationCategory const Application;

/// @brief Field Patch offset 0
static GlobalNamespace::PS4ApplicationCategory const Patch;

/// @brief Field Remaster offset 0
static GlobalNamespace::PS4ApplicationCategory const Remaster;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PS4ApplicationCategory, "", "PS4ApplicationCategory");
