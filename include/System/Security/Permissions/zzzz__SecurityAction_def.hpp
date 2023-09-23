#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace System::Security::Permissions {
struct SecurityAction;
}
// Type: System.Security.Permissions::SecurityAction
namespace System::Security::Permissions {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2901))
// CS Name: System.Security.Permissions.SecurityAction
struct CORDL_TYPE SecurityAction : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr SecurityAction(int32_t value__) noexcept;


                    constexpr SecurityAction(SecurityAction const&) = default;
                    constexpr SecurityAction(SecurityAction&&) = default;
                    constexpr SecurityAction& operator=(SecurityAction const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr SecurityAction& operator=(SecurityAction&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit SecurityAction(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __SecurityAction_Unwrapped : int32_t {
__Demand = 2,
__Assert = 3,
__Deny = 4,
__PermitOnly = 5,
__LinkDemand = 6,
__InheritanceDemand = 7,
__RequestMinimum = 8,
__RequestOptional = 9,
__RequestRefuse = 10,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __SecurityAction_Unwrapped () const noexcept {
return std::bit_cast<__SecurityAction_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Demand offset 0
static System::Security::Permissions::SecurityAction const Demand;

/// @brief Field Assert offset 0
static System::Security::Permissions::SecurityAction const Assert;

/// @brief Field Deny offset 0
static System::Security::Permissions::SecurityAction const Deny;

/// @brief Field PermitOnly offset 0
static System::Security::Permissions::SecurityAction const PermitOnly;

/// @brief Field LinkDemand offset 0
static System::Security::Permissions::SecurityAction const LinkDemand;

/// @brief Field InheritanceDemand offset 0
static System::Security::Permissions::SecurityAction const InheritanceDemand;

/// @brief Field RequestMinimum offset 0
static System::Security::Permissions::SecurityAction const RequestMinimum;

/// @brief Field RequestOptional offset 0
static System::Security::Permissions::SecurityAction const RequestOptional;

/// @brief Field RequestRefuse offset 0
static System::Security::Permissions::SecurityAction const RequestRefuse;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Security::Permissions
DEFINE_IL2CPP_ARG_TYPE(System::Security::Permissions::SecurityAction, "System.Security.Permissions", "SecurityAction");
