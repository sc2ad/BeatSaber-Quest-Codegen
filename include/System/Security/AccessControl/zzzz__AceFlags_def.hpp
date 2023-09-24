#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace System::Security::AccessControl {
struct AceFlags;
}
// Type: System.Security.AccessControl::AceFlags
namespace System::Security::AccessControl {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3013))
// CS Name: System.Security.AccessControl.AceFlags
struct CORDL_TYPE AceFlags : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None }]
constexpr AceFlags(uint8_t value__) noexcept;


                    constexpr AceFlags(AceFlags const&) = default;
                    constexpr AceFlags(AceFlags&&) = default;
                    constexpr AceFlags& operator=(AceFlags const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr AceFlags& operator=(AceFlags&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x1};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit AceFlags(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __AceFlags_Unwrapped : uint8_t {
__None = 0u,
__ObjectInherit = 1u,
__ContainerInherit = 2u,
__NoPropagateInherit = 4u,
__InheritOnly = 8u,
__InheritanceFlags = 15u,
__Inherited = 16u,
__SuccessfulAccess = 64u,
__FailedAccess = 128u,
__AuditFlags = 192u,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __AceFlags_Unwrapped () const noexcept {
return std::bit_cast<__AceFlags_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = uint8_t;


// Fields

 uint8_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(uint8_t value) ;

constexpr uint8_t __get_value__() const;

/// @brief Field None offset 0
static System::Security::AccessControl::AceFlags const None;

/// @brief Field ObjectInherit offset 0
static System::Security::AccessControl::AceFlags const ObjectInherit;

/// @brief Field ContainerInherit offset 0
static System::Security::AccessControl::AceFlags const ContainerInherit;

/// @brief Field NoPropagateInherit offset 0
static System::Security::AccessControl::AceFlags const NoPropagateInherit;

/// @brief Field InheritOnly offset 0
static System::Security::AccessControl::AceFlags const InheritOnly;

/// @brief Field InheritanceFlags offset 0
static System::Security::AccessControl::AceFlags const InheritanceFlags;

/// @brief Field Inherited offset 0
static System::Security::AccessControl::AceFlags const Inherited;

/// @brief Field SuccessfulAccess offset 0
static System::Security::AccessControl::AceFlags const SuccessfulAccess;

/// @brief Field FailedAccess offset 0
static System::Security::AccessControl::AceFlags const FailedAccess;

/// @brief Field AuditFlags offset 0
static System::Security::AccessControl::AceFlags const AuditFlags;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Security::AccessControl
DEFINE_IL2CPP_ARG_TYPE(System::Security::AccessControl::AceFlags, "System.Security.AccessControl", "AceFlags");
