#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace System::Net {
struct WebExceptionStatus;
}
// Type: System.Net::WebExceptionStatus
namespace System::Net {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7938))
// CS Name: System.Net.WebExceptionStatus
struct CORDL_TYPE WebExceptionStatus : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr WebExceptionStatus(int32_t value__) noexcept;


                    constexpr WebExceptionStatus(WebExceptionStatus const&) = default;
                    constexpr WebExceptionStatus(WebExceptionStatus&&) = default;
                    constexpr WebExceptionStatus& operator=(WebExceptionStatus const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr WebExceptionStatus& operator=(WebExceptionStatus&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit WebExceptionStatus(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __WebExceptionStatus_Unwrapped : int32_t {
__Success = 0,
__NameResolutionFailure = 1,
__ConnectFailure = 2,
__ReceiveFailure = 3,
__SendFailure = 4,
__PipelineFailure = 5,
__RequestCanceled = 6,
__ProtocolError = 7,
__ConnectionClosed = 8,
__TrustFailure = 9,
__SecureChannelFailure = 10,
__ServerProtocolViolation = 11,
__KeepAliveFailure = 12,
__Pending = 13,
__Timeout = 14,
__ProxyNameResolutionFailure = 15,
__UnknownError = 16,
__MessageLengthLimitExceeded = 17,
__CacheEntryNotFound = 18,
__RequestProhibitedByCachePolicy = 19,
__RequestProhibitedByProxy = 20,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __WebExceptionStatus_Unwrapped () const noexcept {
return std::bit_cast<__WebExceptionStatus_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Success offset 0
static System::Net::WebExceptionStatus const Success;

/// @brief Field NameResolutionFailure offset 0
static System::Net::WebExceptionStatus const NameResolutionFailure;

/// @brief Field ConnectFailure offset 0
static System::Net::WebExceptionStatus const ConnectFailure;

/// @brief Field ReceiveFailure offset 0
static System::Net::WebExceptionStatus const ReceiveFailure;

/// @brief Field SendFailure offset 0
static System::Net::WebExceptionStatus const SendFailure;

/// @brief Field PipelineFailure offset 0
static System::Net::WebExceptionStatus const PipelineFailure;

/// @brief Field RequestCanceled offset 0
static System::Net::WebExceptionStatus const RequestCanceled;

/// @brief Field ProtocolError offset 0
static System::Net::WebExceptionStatus const ProtocolError;

/// @brief Field ConnectionClosed offset 0
static System::Net::WebExceptionStatus const ConnectionClosed;

/// @brief Field TrustFailure offset 0
static System::Net::WebExceptionStatus const TrustFailure;

/// @brief Field SecureChannelFailure offset 0
static System::Net::WebExceptionStatus const SecureChannelFailure;

/// @brief Field ServerProtocolViolation offset 0
static System::Net::WebExceptionStatus const ServerProtocolViolation;

/// @brief Field KeepAliveFailure offset 0
static System::Net::WebExceptionStatus const KeepAliveFailure;

/// @brief Field Pending offset 0
static System::Net::WebExceptionStatus const Pending;

/// @brief Field Timeout offset 0
static System::Net::WebExceptionStatus const Timeout;

/// @brief Field ProxyNameResolutionFailure offset 0
static System::Net::WebExceptionStatus const ProxyNameResolutionFailure;

/// @brief Field UnknownError offset 0
static System::Net::WebExceptionStatus const UnknownError;

/// @brief Field MessageLengthLimitExceeded offset 0
static System::Net::WebExceptionStatus const MessageLengthLimitExceeded;

/// @brief Field CacheEntryNotFound offset 0
static System::Net::WebExceptionStatus const CacheEntryNotFound;

/// @brief Field RequestProhibitedByCachePolicy offset 0
static System::Net::WebExceptionStatus const RequestProhibitedByCachePolicy;

/// @brief Field RequestProhibitedByProxy offset 0
static System::Net::WebExceptionStatus const RequestProhibitedByProxy;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Net
DEFINE_IL2CPP_ARG_TYPE(System::Net::WebExceptionStatus, "System.Net", "WebExceptionStatus");
