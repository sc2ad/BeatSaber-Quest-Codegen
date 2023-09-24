#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace Oculus::Platform {
struct PermissionGrantStatus;
}
// Type: Oculus.Platform::PermissionGrantStatus
namespace Oculus::Platform {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13308))
// CS Name: Oculus.Platform.PermissionGrantStatus
struct CORDL_TYPE PermissionGrantStatus : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr PermissionGrantStatus(int32_t value__) noexcept;


                    constexpr PermissionGrantStatus(PermissionGrantStatus const&) = default;
                    constexpr PermissionGrantStatus(PermissionGrantStatus&&) = default;
                    constexpr PermissionGrantStatus& operator=(PermissionGrantStatus const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr PermissionGrantStatus& operator=(PermissionGrantStatus&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit PermissionGrantStatus(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __PermissionGrantStatus_Unwrapped : int32_t {
__Unknown = 0,
__Granted = 1,
__Denied = 2,
__Blocked = 3,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __PermissionGrantStatus_Unwrapped () const noexcept {
return std::bit_cast<__PermissionGrantStatus_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Unknown offset 0
static Oculus::Platform::PermissionGrantStatus const Unknown;

/// @brief Field Granted offset 0
static Oculus::Platform::PermissionGrantStatus const Granted;

/// @brief Field Denied offset 0
static Oculus::Platform::PermissionGrantStatus const Denied;

/// @brief Field Blocked offset 0
static Oculus::Platform::PermissionGrantStatus const Blocked;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Oculus::Platform
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::PermissionGrantStatus, "Oculus.Platform", "PermissionGrantStatus");
