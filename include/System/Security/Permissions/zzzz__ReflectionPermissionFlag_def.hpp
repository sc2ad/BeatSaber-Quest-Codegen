#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace System::Security::Permissions {
struct ReflectionPermissionFlag;
}
// Type: System.Security.Permissions::ReflectionPermissionFlag
namespace System::Security::Permissions {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2899))
// CS Name: System.Security.Permissions.ReflectionPermissionFlag
struct CORDL_TYPE ReflectionPermissionFlag : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ReflectionPermissionFlag(int32_t value__) noexcept;


                    constexpr ReflectionPermissionFlag(ReflectionPermissionFlag const&) = default;
                    constexpr ReflectionPermissionFlag(ReflectionPermissionFlag&&) = default;
                    constexpr ReflectionPermissionFlag& operator=(ReflectionPermissionFlag const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ReflectionPermissionFlag& operator=(ReflectionPermissionFlag&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ReflectionPermissionFlag(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __ReflectionPermissionFlag_Unwrapped : int32_t {
__AllFlags = 7,
__MemberAccess = 2,
__NoFlags = 0,
__ReflectionEmit = 4,
__RestrictedMemberAccess = 8,
__TypeInformation = 1,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ReflectionPermissionFlag_Unwrapped () const noexcept {
return std::bit_cast<__ReflectionPermissionFlag_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field AllFlags offset 0
static System::Security::Permissions::ReflectionPermissionFlag const AllFlags;

/// @brief Field MemberAccess offset 0
static System::Security::Permissions::ReflectionPermissionFlag const MemberAccess;

/// @brief Field NoFlags offset 0
static System::Security::Permissions::ReflectionPermissionFlag const NoFlags;

/// @brief Field ReflectionEmit offset 0
static System::Security::Permissions::ReflectionPermissionFlag const ReflectionEmit;

/// @brief Field RestrictedMemberAccess offset 0
static System::Security::Permissions::ReflectionPermissionFlag const RestrictedMemberAccess;

/// @brief Field TypeInformation offset 0
static System::Security::Permissions::ReflectionPermissionFlag const TypeInformation;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Security::Permissions
DEFINE_IL2CPP_ARG_TYPE(System::Security::Permissions::ReflectionPermissionFlag, "System.Security.Permissions", "ReflectionPermissionFlag");
