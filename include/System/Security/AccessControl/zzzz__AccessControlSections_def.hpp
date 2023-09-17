#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace System::Security::AccessControl {
struct AccessControlSections;
}
// Type: System.Security.AccessControl::AccessControlSections
namespace System::Security::AccessControl {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3009))
// CS Name: System.Security.AccessControl.AccessControlSections
struct CORDL_TYPE AccessControlSections : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr AccessControlSections(int32_t value__) noexcept;


                    constexpr AccessControlSections(AccessControlSections const&) = default;
                    constexpr AccessControlSections(AccessControlSections&&) = default;
                    constexpr AccessControlSections& operator=(AccessControlSections const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr AccessControlSections& operator=(AccessControlSections&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit AccessControlSections(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __AccessControlSections_Unwrapped : int32_t {
__None = 0,
__Audit = 1,
__Access = 2,
__Owner = 4,
__Group = 8,
__All = 15,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __AccessControlSections_Unwrapped () const noexcept {
return std::bit_cast<__AccessControlSections_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static ::System::Security::AccessControl::AccessControlSections const None;

/// @brief Field Audit offset 0
static ::System::Security::AccessControl::AccessControlSections const Audit;

/// @brief Field Access offset 0
static ::System::Security::AccessControl::AccessControlSections const Access;

/// @brief Field Owner offset 0
static ::System::Security::AccessControl::AccessControlSections const Owner;

/// @brief Field Group offset 0
static ::System::Security::AccessControl::AccessControlSections const Group;

/// @brief Field All offset 0
static ::System::Security::AccessControl::AccessControlSections const All;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Security::AccessControl
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::System::Security::AccessControl::AccessControlSections, "System.Security.AccessControl", "AccessControlSections");
