#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace UnityOpus {
struct NumChannels;
}
// Type: UnityOpus::NumChannels
namespace UnityOpus {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6154))
// CS Name: UnityOpus.NumChannels
struct CORDL_TYPE NumChannels : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr NumChannels(int32_t value__) noexcept;


                    constexpr NumChannels(NumChannels const&) = default;
                    constexpr NumChannels(NumChannels&&) = default;
                    constexpr NumChannels& operator=(NumChannels const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr NumChannels& operator=(NumChannels&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit NumChannels(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __NumChannels_Unwrapped : int32_t {
__Mono = 1,
__Stereo = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __NumChannels_Unwrapped () const noexcept {
return std::bit_cast<__NumChannels_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Mono offset 0
static UnityOpus::NumChannels const Mono;

/// @brief Field Stereo offset 0
static UnityOpus::NumChannels const Stereo;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityOpus
DEFINE_IL2CPP_ARG_TYPE(UnityOpus::NumChannels, "UnityOpus", "NumChannels");
