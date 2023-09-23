#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace Oculus::Platform {
struct UserPresenceStatus;
}
// Type: Oculus.Platform::UserPresenceStatus
namespace Oculus::Platform {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13368))
// CS Name: Oculus.Platform.UserPresenceStatus
struct CORDL_TYPE UserPresenceStatus : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr UserPresenceStatus(int32_t value__) noexcept;


                    constexpr UserPresenceStatus(UserPresenceStatus const&) = default;
                    constexpr UserPresenceStatus(UserPresenceStatus&&) = default;
                    constexpr UserPresenceStatus& operator=(UserPresenceStatus const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UserPresenceStatus& operator=(UserPresenceStatus&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UserPresenceStatus(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __UserPresenceStatus_Unwrapped : int32_t {
__Unknown = 0,
__Online = 1,
__Offline = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __UserPresenceStatus_Unwrapped () const noexcept {
return std::bit_cast<__UserPresenceStatus_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Unknown offset 0
static Oculus::Platform::UserPresenceStatus const Unknown;

/// @brief Field Online offset 0
static Oculus::Platform::UserPresenceStatus const Online;

/// @brief Field Offline offset 0
static Oculus::Platform::UserPresenceStatus const Offline;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Oculus::Platform
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::UserPresenceStatus, "Oculus.Platform", "UserPresenceStatus");
