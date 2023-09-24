#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace System::Security::Authentication::ExtendedProtection {
struct PolicyEnforcement;
}
// Type: System.Security.Authentication.ExtendedProtection::PolicyEnforcement
namespace System::Security::Authentication::ExtendedProtection {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7819))
// CS Name: System.Security.Authentication.ExtendedProtection.PolicyEnforcement
struct CORDL_TYPE PolicyEnforcement : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr PolicyEnforcement(int32_t value__) noexcept;


                    constexpr PolicyEnforcement(PolicyEnforcement const&) = default;
                    constexpr PolicyEnforcement(PolicyEnforcement&&) = default;
                    constexpr PolicyEnforcement& operator=(PolicyEnforcement const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr PolicyEnforcement& operator=(PolicyEnforcement&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit PolicyEnforcement(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __PolicyEnforcement_Unwrapped : int32_t {
__Never = 0,
__WhenSupported = 1,
__Always = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __PolicyEnforcement_Unwrapped () const noexcept {
return std::bit_cast<__PolicyEnforcement_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Never offset 0
static System::Security::Authentication::ExtendedProtection::PolicyEnforcement const Never;

/// @brief Field WhenSupported offset 0
static System::Security::Authentication::ExtendedProtection::PolicyEnforcement const WhenSupported;

/// @brief Field Always offset 0
static System::Security::Authentication::ExtendedProtection::PolicyEnforcement const Always;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Security::Authentication::ExtendedProtection
DEFINE_IL2CPP_ARG_TYPE(System::Security::Authentication::ExtendedProtection::PolicyEnforcement, "System.Security.Authentication.ExtendedProtection", "PolicyEnforcement");
