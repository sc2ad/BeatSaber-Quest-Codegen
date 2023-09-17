#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace UnityOpus {
struct SamplingFrequency;
}
// Type: UnityOpus::SamplingFrequency
namespace UnityOpus {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6153))
// CS Name: UnityOpus.SamplingFrequency
struct CORDL_TYPE SamplingFrequency : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr SamplingFrequency(int32_t value__) noexcept;


                    constexpr SamplingFrequency(SamplingFrequency const&) = default;
                    constexpr SamplingFrequency(SamplingFrequency&&) = default;
                    constexpr SamplingFrequency& operator=(SamplingFrequency const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr SamplingFrequency& operator=(SamplingFrequency&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit SamplingFrequency(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __SamplingFrequency_Unwrapped : int32_t {
__Frequency_8000 = 8000,
__Frequency_12000 = 12000,
__Frequency_16000 = 16000,
__Frequency_24000 = 24000,
__Frequency_48000 = 48000,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __SamplingFrequency_Unwrapped () const noexcept {
return std::bit_cast<__SamplingFrequency_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Frequency_8000 offset 0
static ::UnityOpus::SamplingFrequency const Frequency_8000;

/// @brief Field Frequency_12000 offset 0
static ::UnityOpus::SamplingFrequency const Frequency_12000;

/// @brief Field Frequency_16000 offset 0
static ::UnityOpus::SamplingFrequency const Frequency_16000;

/// @brief Field Frequency_24000 offset 0
static ::UnityOpus::SamplingFrequency const Frequency_24000;

/// @brief Field Frequency_48000 offset 0
static ::UnityOpus::SamplingFrequency const Frequency_48000;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityOpus
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityOpus::SamplingFrequency, "UnityOpus", "SamplingFrequency");
