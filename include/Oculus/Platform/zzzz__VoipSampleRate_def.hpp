#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace Oculus::Platform {
struct VoipSampleRate;
}
// Type: Oculus.Platform::VoipSampleRate
namespace Oculus::Platform {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13376))
// CS Name: Oculus.Platform.VoipSampleRate
struct CORDL_TYPE VoipSampleRate : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr VoipSampleRate(int32_t value__) noexcept;


                    constexpr VoipSampleRate(VoipSampleRate const&) = default;
                    constexpr VoipSampleRate(VoipSampleRate&&) = default;
                    constexpr VoipSampleRate& operator=(VoipSampleRate const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr VoipSampleRate& operator=(VoipSampleRate&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit VoipSampleRate(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __VoipSampleRate_Unwrapped : int32_t {
__Unknown = 0,
__HZ24000 = 1,
__HZ44100 = 2,
__HZ48000 = 3,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __VoipSampleRate_Unwrapped () const noexcept {
return std::bit_cast<__VoipSampleRate_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Unknown offset 0
static Oculus::Platform::VoipSampleRate const Unknown;

/// @brief Field HZ24000 offset 0
static Oculus::Platform::VoipSampleRate const HZ24000;

/// @brief Field HZ44100 offset 0
static Oculus::Platform::VoipSampleRate const HZ44100;

/// @brief Field HZ48000 offset 0
static Oculus::Platform::VoipSampleRate const HZ48000;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Oculus::Platform
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::VoipSampleRate, "Oculus.Platform", "VoipSampleRate");
