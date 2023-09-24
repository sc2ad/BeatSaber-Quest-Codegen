#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace Oculus::Platform {
struct SystemVoipStatus;
}
// Type: Oculus.Platform::SystemVoipStatus
namespace Oculus::Platform {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13364))
// CS Name: Oculus.Platform.SystemVoipStatus
struct CORDL_TYPE SystemVoipStatus : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr SystemVoipStatus(int32_t value__) noexcept;


                    constexpr SystemVoipStatus(SystemVoipStatus const&) = default;
                    constexpr SystemVoipStatus(SystemVoipStatus&&) = default;
                    constexpr SystemVoipStatus& operator=(SystemVoipStatus const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr SystemVoipStatus& operator=(SystemVoipStatus&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit SystemVoipStatus(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __SystemVoipStatus_Unwrapped : int32_t {
__Unknown = 0,
__Unavailable = 1,
__Suppressed = 2,
__Active = 3,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __SystemVoipStatus_Unwrapped () const noexcept {
return std::bit_cast<__SystemVoipStatus_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Unknown offset 0
static Oculus::Platform::SystemVoipStatus const Unknown;

/// @brief Field Unavailable offset 0
static Oculus::Platform::SystemVoipStatus const Unavailable;

/// @brief Field Suppressed offset 0
static Oculus::Platform::SystemVoipStatus const Suppressed;

/// @brief Field Active offset 0
static Oculus::Platform::SystemVoipStatus const Active;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Oculus::Platform
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::SystemVoipStatus, "Oculus.Platform", "SystemVoipStatus");
