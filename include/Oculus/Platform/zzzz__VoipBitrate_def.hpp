#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace Oculus::Platform {
struct VoipBitrate;
}
// Type: Oculus.Platform::VoipBitrate
namespace Oculus::Platform {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13371))
// CS Name: Oculus.Platform.VoipBitrate
struct CORDL_TYPE VoipBitrate : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr VoipBitrate(int32_t value__) noexcept;


                    constexpr VoipBitrate(VoipBitrate const&) = default;
                    constexpr VoipBitrate(VoipBitrate&&) = default;
                    constexpr VoipBitrate& operator=(VoipBitrate const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr VoipBitrate& operator=(VoipBitrate&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit VoipBitrate(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __VoipBitrate_Unwrapped : int32_t {
__Unknown = 0,
__B16000 = 1,
__B24000 = 2,
__B32000 = 3,
__B64000 = 4,
__B96000 = 5,
__B128000 = 6,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __VoipBitrate_Unwrapped () const noexcept {
return std::bit_cast<__VoipBitrate_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Unknown offset 0
static ::Oculus::Platform::VoipBitrate const Unknown;

/// @brief Field B16000 offset 0
static ::Oculus::Platform::VoipBitrate const B16000;

/// @brief Field B24000 offset 0
static ::Oculus::Platform::VoipBitrate const B24000;

/// @brief Field B32000 offset 0
static ::Oculus::Platform::VoipBitrate const B32000;

/// @brief Field B64000 offset 0
static ::Oculus::Platform::VoipBitrate const B64000;

/// @brief Field B96000 offset 0
static ::Oculus::Platform::VoipBitrate const B96000;

/// @brief Field B128000 offset 0
static ::Oculus::Platform::VoipBitrate const B128000;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Oculus::Platform
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::VoipBitrate, "Oculus.Platform", "VoipBitrate");
