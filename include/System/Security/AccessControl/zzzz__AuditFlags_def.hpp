#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace System::Security::AccessControl {
struct AuditFlags;
}
// Type: System.Security.AccessControl::AuditFlags
namespace System::Security::AccessControl {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3016))
// CS Name: System.Security.AccessControl.AuditFlags
struct CORDL_TYPE AuditFlags : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr AuditFlags(int32_t value__) noexcept;


                    constexpr AuditFlags(AuditFlags const&) = default;
                    constexpr AuditFlags(AuditFlags&&) = default;
                    constexpr AuditFlags& operator=(AuditFlags const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr AuditFlags& operator=(AuditFlags&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit AuditFlags(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __AuditFlags_Unwrapped : int32_t {
__None = 0,
__Success = 1,
__Failure = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __AuditFlags_Unwrapped () const noexcept {
return std::bit_cast<__AuditFlags_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static System::Security::AccessControl::AuditFlags const None;

/// @brief Field Success offset 0
static System::Security::AccessControl::AuditFlags const Success;

/// @brief Field Failure offset 0
static System::Security::AccessControl::AuditFlags const Failure;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Security::AccessControl
DEFINE_IL2CPP_ARG_TYPE(System::Security::AccessControl::AuditFlags, "System.Security.AccessControl", "AuditFlags");
