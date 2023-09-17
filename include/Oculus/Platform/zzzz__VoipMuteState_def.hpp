#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace Oculus::Platform {
struct VoipMuteState;
}
// Type: Oculus.Platform::VoipMuteState
namespace Oculus::Platform {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13373))
// CS Name: Oculus.Platform.VoipMuteState
struct CORDL_TYPE VoipMuteState : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr VoipMuteState(int32_t value__) noexcept;


                    constexpr VoipMuteState(VoipMuteState const&) = default;
                    constexpr VoipMuteState(VoipMuteState&&) = default;
                    constexpr VoipMuteState& operator=(VoipMuteState const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr VoipMuteState& operator=(VoipMuteState&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit VoipMuteState(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __VoipMuteState_Unwrapped : int32_t {
__Unknown = 0,
__Muted = 1,
__Unmuted = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __VoipMuteState_Unwrapped () const noexcept {
return std::bit_cast<__VoipMuteState_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Unknown offset 0
static ::Oculus::Platform::VoipMuteState const Unknown;

/// @brief Field Muted offset 0
static ::Oculus::Platform::VoipMuteState const Muted;

/// @brief Field Unmuted offset 0
static ::Oculus::Platform::VoipMuteState const Unmuted;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Oculus::Platform
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::VoipMuteState, "Oculus.Platform", "VoipMuteState");
