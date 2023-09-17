#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace GlobalNamespace {
struct ConnectionFailedReason;
}
// Type: ::ConnectionFailedReason
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12650))
// CS Name: ConnectionFailedReason
struct CORDL_TYPE ConnectionFailedReason : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ConnectionFailedReason(int32_t value__) noexcept;


                    constexpr ConnectionFailedReason(ConnectionFailedReason const&) = default;
                    constexpr ConnectionFailedReason(ConnectionFailedReason&&) = default;
                    constexpr ConnectionFailedReason& operator=(ConnectionFailedReason const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ConnectionFailedReason& operator=(ConnectionFailedReason&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ConnectionFailedReason(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __ConnectionFailedReason_Unwrapped : int32_t {
__None = 0,
__Unknown = 1,
__ConnectionCanceled = 2,
__ServerUnreachable = 3,
__ServerAlreadyExists = 4,
__ServerDoesNotExist = 5,
__ServerAtCapacity = 6,
__VersionMismatch = 7,
__InvalidPassword = 8,
__MultiplayerApiUnreachable = 9,
__AuthenticationFailed = 10,
__NetworkNotConnected = 11,
__CertificateValidationFailed = 12,
__ServerIsTerminating = 13,
__Timeout = 14,
__FailedToFindMatch = 15,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ConnectionFailedReason_Unwrapped () const noexcept {
return std::bit_cast<__ConnectionFailedReason_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static ::GlobalNamespace::ConnectionFailedReason const None;

/// @brief Field Unknown offset 0
static ::GlobalNamespace::ConnectionFailedReason const Unknown;

/// @brief Field ConnectionCanceled offset 0
static ::GlobalNamespace::ConnectionFailedReason const ConnectionCanceled;

/// @brief Field ServerUnreachable offset 0
static ::GlobalNamespace::ConnectionFailedReason const ServerUnreachable;

/// @brief Field ServerAlreadyExists offset 0
static ::GlobalNamespace::ConnectionFailedReason const ServerAlreadyExists;

/// @brief Field ServerDoesNotExist offset 0
static ::GlobalNamespace::ConnectionFailedReason const ServerDoesNotExist;

/// @brief Field ServerAtCapacity offset 0
static ::GlobalNamespace::ConnectionFailedReason const ServerAtCapacity;

/// @brief Field VersionMismatch offset 0
static ::GlobalNamespace::ConnectionFailedReason const VersionMismatch;

/// @brief Field InvalidPassword offset 0
static ::GlobalNamespace::ConnectionFailedReason const InvalidPassword;

/// @brief Field MultiplayerApiUnreachable offset 0
static ::GlobalNamespace::ConnectionFailedReason const MultiplayerApiUnreachable;

/// @brief Field AuthenticationFailed offset 0
static ::GlobalNamespace::ConnectionFailedReason const AuthenticationFailed;

/// @brief Field NetworkNotConnected offset 0
static ::GlobalNamespace::ConnectionFailedReason const NetworkNotConnected;

/// @brief Field CertificateValidationFailed offset 0
static ::GlobalNamespace::ConnectionFailedReason const CertificateValidationFailed;

/// @brief Field ServerIsTerminating offset 0
static ::GlobalNamespace::ConnectionFailedReason const ServerIsTerminating;

/// @brief Field Timeout offset 0
static ::GlobalNamespace::ConnectionFailedReason const Timeout;

/// @brief Field FailedToFindMatch offset 0
static ::GlobalNamespace::ConnectionFailedReason const FailedToFindMatch;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ConnectionFailedReason, "", "ConnectionFailedReason");
