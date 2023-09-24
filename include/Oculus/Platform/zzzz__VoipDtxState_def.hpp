#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace Oculus::Platform {
struct VoipDtxState;
}
// Type: Oculus.Platform::VoipDtxState
namespace Oculus::Platform {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13372))
// CS Name: Oculus.Platform.VoipDtxState
struct CORDL_TYPE VoipDtxState : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr VoipDtxState(int32_t value__) noexcept;


                    constexpr VoipDtxState(VoipDtxState const&) = default;
                    constexpr VoipDtxState(VoipDtxState&&) = default;
                    constexpr VoipDtxState& operator=(VoipDtxState const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr VoipDtxState& operator=(VoipDtxState&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit VoipDtxState(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __VoipDtxState_Unwrapped : int32_t {
__Unknown = 0,
__Enabled = 1,
__Disabled = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __VoipDtxState_Unwrapped () const noexcept {
return std::bit_cast<__VoipDtxState_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Unknown offset 0
static Oculus::Platform::VoipDtxState const Unknown;

/// @brief Field Enabled offset 0
static Oculus::Platform::VoipDtxState const Enabled;

/// @brief Field Disabled offset 0
static Oculus::Platform::VoipDtxState const Disabled;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Oculus::Platform
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::VoipDtxState, "Oculus.Platform", "VoipDtxState");
