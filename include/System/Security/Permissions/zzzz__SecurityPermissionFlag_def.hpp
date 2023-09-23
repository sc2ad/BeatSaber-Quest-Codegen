#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace System::Security::Permissions {
struct SecurityPermissionFlag;
}
// Type: System.Security.Permissions::SecurityPermissionFlag
namespace System::Security::Permissions {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2903))
// CS Name: System.Security.Permissions.SecurityPermissionFlag
struct CORDL_TYPE SecurityPermissionFlag : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr SecurityPermissionFlag(int32_t value__) noexcept;


                    constexpr SecurityPermissionFlag(SecurityPermissionFlag const&) = default;
                    constexpr SecurityPermissionFlag(SecurityPermissionFlag&&) = default;
                    constexpr SecurityPermissionFlag& operator=(SecurityPermissionFlag const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr SecurityPermissionFlag& operator=(SecurityPermissionFlag&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit SecurityPermissionFlag(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __SecurityPermissionFlag_Unwrapped : int32_t {
__NoFlags = 0,
__Assertion = 1,
__UnmanagedCode = 2,
__SkipVerification = 4,
__Execution = 8,
__ControlThread = 16,
__ControlEvidence = 32,
__ControlPolicy = 64,
__SerializationFormatter = 128,
__ControlDomainPolicy = 256,
__ControlPrincipal = 512,
__ControlAppDomain = 1024,
__RemotingConfiguration = 2048,
__Infrastructure = 4096,
__BindingRedirects = 8192,
__AllFlags = 16383,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __SecurityPermissionFlag_Unwrapped () const noexcept {
return std::bit_cast<__SecurityPermissionFlag_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field NoFlags offset 0
static System::Security::Permissions::SecurityPermissionFlag const NoFlags;

/// @brief Field Assertion offset 0
static System::Security::Permissions::SecurityPermissionFlag const Assertion;

/// @brief Field UnmanagedCode offset 0
static System::Security::Permissions::SecurityPermissionFlag const UnmanagedCode;

/// @brief Field SkipVerification offset 0
static System::Security::Permissions::SecurityPermissionFlag const SkipVerification;

/// @brief Field Execution offset 0
static System::Security::Permissions::SecurityPermissionFlag const Execution;

/// @brief Field ControlThread offset 0
static System::Security::Permissions::SecurityPermissionFlag const ControlThread;

/// @brief Field ControlEvidence offset 0
static System::Security::Permissions::SecurityPermissionFlag const ControlEvidence;

/// @brief Field ControlPolicy offset 0
static System::Security::Permissions::SecurityPermissionFlag const ControlPolicy;

/// @brief Field SerializationFormatter offset 0
static System::Security::Permissions::SecurityPermissionFlag const SerializationFormatter;

/// @brief Field ControlDomainPolicy offset 0
static System::Security::Permissions::SecurityPermissionFlag const ControlDomainPolicy;

/// @brief Field ControlPrincipal offset 0
static System::Security::Permissions::SecurityPermissionFlag const ControlPrincipal;

/// @brief Field ControlAppDomain offset 0
static System::Security::Permissions::SecurityPermissionFlag const ControlAppDomain;

/// @brief Field RemotingConfiguration offset 0
static System::Security::Permissions::SecurityPermissionFlag const RemotingConfiguration;

/// @brief Field Infrastructure offset 0
static System::Security::Permissions::SecurityPermissionFlag const Infrastructure;

/// @brief Field BindingRedirects offset 0
static System::Security::Permissions::SecurityPermissionFlag const BindingRedirects;

/// @brief Field AllFlags offset 0
static System::Security::Permissions::SecurityPermissionFlag const AllFlags;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Security::Permissions
DEFINE_IL2CPP_ARG_TYPE(System::Security::Permissions::SecurityPermissionFlag, "System.Security.Permissions", "SecurityPermissionFlag");
