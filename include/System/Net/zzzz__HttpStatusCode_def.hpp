#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace System::Net {
struct HttpStatusCode;
}
// Type: System.Net::HttpStatusCode
namespace System::Net {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7878))
// CS Name: System.Net.HttpStatusCode
struct CORDL_TYPE HttpStatusCode : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr HttpStatusCode(int32_t value__) noexcept;


                    constexpr HttpStatusCode(HttpStatusCode const&) = default;
                    constexpr HttpStatusCode(HttpStatusCode&&) = default;
                    constexpr HttpStatusCode& operator=(HttpStatusCode const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr HttpStatusCode& operator=(HttpStatusCode&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit HttpStatusCode(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __HttpStatusCode_Unwrapped : int32_t {
__Continue = 100,
__SwitchingProtocols = 101,
__Processing = 102,
__EarlyHints = 103,
__OK = 200,
__Created = 201,
__Accepted = 202,
__NonAuthoritativeInformation = 203,
__NoContent = 204,
__ResetContent = 205,
__PartialContent = 206,
__MultiStatus = 207,
__AlreadyReported = 208,
__IMUsed = 226,
__MultipleChoices = 300,
__Ambiguous = 300,
__MovedPermanently = 301,
__Moved = 301,
__Found = 302,
__Redirect = 302,
__SeeOther = 303,
__RedirectMethod = 303,
__NotModified = 304,
__UseProxy = 305,
__Unused = 306,
__TemporaryRedirect = 307,
__RedirectKeepVerb = 307,
__PermanentRedirect = 308,
__BadRequest = 400,
__Unauthorized = 401,
__PaymentRequired = 402,
__Forbidden = 403,
__NotFound = 404,
__MethodNotAllowed = 405,
__NotAcceptable = 406,
__ProxyAuthenticationRequired = 407,
__RequestTimeout = 408,
__Conflict = 409,
__Gone = 410,
__LengthRequired = 411,
__PreconditionFailed = 412,
__RequestEntityTooLarge = 413,
__RequestUriTooLong = 414,
__UnsupportedMediaType = 415,
__RequestedRangeNotSatisfiable = 416,
__ExpectationFailed = 417,
__MisdirectedRequest = 421,
__UnprocessableEntity = 422,
__Locked = 423,
__FailedDependency = 424,
__UpgradeRequired = 426,
__PreconditionRequired = 428,
__TooManyRequests = 429,
__RequestHeaderFieldsTooLarge = 431,
__UnavailableForLegalReasons = 451,
__InternalServerError = 500,
__NotImplemented = 501,
__BadGateway = 502,
__ServiceUnavailable = 503,
__GatewayTimeout = 504,
__HttpVersionNotSupported = 505,
__VariantAlsoNegotiates = 506,
__InsufficientStorage = 507,
__LoopDetected = 508,
__NotExtended = 510,
__NetworkAuthenticationRequired = 511,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __HttpStatusCode_Unwrapped () const noexcept {
return std::bit_cast<__HttpStatusCode_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Continue offset 0
static ::System::Net::HttpStatusCode const Continue;

/// @brief Field SwitchingProtocols offset 0
static ::System::Net::HttpStatusCode const SwitchingProtocols;

/// @brief Field Processing offset 0
static ::System::Net::HttpStatusCode const Processing;

/// @brief Field EarlyHints offset 0
static ::System::Net::HttpStatusCode const EarlyHints;

/// @brief Field OK offset 0
static ::System::Net::HttpStatusCode const OK;

/// @brief Field Created offset 0
static ::System::Net::HttpStatusCode const Created;

/// @brief Field Accepted offset 0
static ::System::Net::HttpStatusCode const Accepted;

/// @brief Field NonAuthoritativeInformation offset 0
static ::System::Net::HttpStatusCode const NonAuthoritativeInformation;

/// @brief Field NoContent offset 0
static ::System::Net::HttpStatusCode const NoContent;

/// @brief Field ResetContent offset 0
static ::System::Net::HttpStatusCode const ResetContent;

/// @brief Field PartialContent offset 0
static ::System::Net::HttpStatusCode const PartialContent;

/// @brief Field MultiStatus offset 0
static ::System::Net::HttpStatusCode const MultiStatus;

/// @brief Field AlreadyReported offset 0
static ::System::Net::HttpStatusCode const AlreadyReported;

/// @brief Field IMUsed offset 0
static ::System::Net::HttpStatusCode const IMUsed;

/// @brief Field MultipleChoices offset 0
static ::System::Net::HttpStatusCode const MultipleChoices;

/// @brief Field Ambiguous offset 0
static ::System::Net::HttpStatusCode const Ambiguous;

/// @brief Field MovedPermanently offset 0
static ::System::Net::HttpStatusCode const MovedPermanently;

/// @brief Field Moved offset 0
static ::System::Net::HttpStatusCode const Moved;

/// @brief Field Found offset 0
static ::System::Net::HttpStatusCode const Found;

/// @brief Field Redirect offset 0
static ::System::Net::HttpStatusCode const Redirect;

/// @brief Field SeeOther offset 0
static ::System::Net::HttpStatusCode const SeeOther;

/// @brief Field RedirectMethod offset 0
static ::System::Net::HttpStatusCode const RedirectMethod;

/// @brief Field NotModified offset 0
static ::System::Net::HttpStatusCode const NotModified;

/// @brief Field UseProxy offset 0
static ::System::Net::HttpStatusCode const UseProxy;

/// @brief Field Unused offset 0
static ::System::Net::HttpStatusCode const Unused;

/// @brief Field TemporaryRedirect offset 0
static ::System::Net::HttpStatusCode const TemporaryRedirect;

/// @brief Field RedirectKeepVerb offset 0
static ::System::Net::HttpStatusCode const RedirectKeepVerb;

/// @brief Field PermanentRedirect offset 0
static ::System::Net::HttpStatusCode const PermanentRedirect;

/// @brief Field BadRequest offset 0
static ::System::Net::HttpStatusCode const BadRequest;

/// @brief Field Unauthorized offset 0
static ::System::Net::HttpStatusCode const Unauthorized;

/// @brief Field PaymentRequired offset 0
static ::System::Net::HttpStatusCode const PaymentRequired;

/// @brief Field Forbidden offset 0
static ::System::Net::HttpStatusCode const Forbidden;

/// @brief Field NotFound offset 0
static ::System::Net::HttpStatusCode const NotFound;

/// @brief Field MethodNotAllowed offset 0
static ::System::Net::HttpStatusCode const MethodNotAllowed;

/// @brief Field NotAcceptable offset 0
static ::System::Net::HttpStatusCode const NotAcceptable;

/// @brief Field ProxyAuthenticationRequired offset 0
static ::System::Net::HttpStatusCode const ProxyAuthenticationRequired;

/// @brief Field RequestTimeout offset 0
static ::System::Net::HttpStatusCode const RequestTimeout;

/// @brief Field Conflict offset 0
static ::System::Net::HttpStatusCode const Conflict;

/// @brief Field Gone offset 0
static ::System::Net::HttpStatusCode const Gone;

/// @brief Field LengthRequired offset 0
static ::System::Net::HttpStatusCode const LengthRequired;

/// @brief Field PreconditionFailed offset 0
static ::System::Net::HttpStatusCode const PreconditionFailed;

/// @brief Field RequestEntityTooLarge offset 0
static ::System::Net::HttpStatusCode const RequestEntityTooLarge;

/// @brief Field RequestUriTooLong offset 0
static ::System::Net::HttpStatusCode const RequestUriTooLong;

/// @brief Field UnsupportedMediaType offset 0
static ::System::Net::HttpStatusCode const UnsupportedMediaType;

/// @brief Field RequestedRangeNotSatisfiable offset 0
static ::System::Net::HttpStatusCode const RequestedRangeNotSatisfiable;

/// @brief Field ExpectationFailed offset 0
static ::System::Net::HttpStatusCode const ExpectationFailed;

/// @brief Field MisdirectedRequest offset 0
static ::System::Net::HttpStatusCode const MisdirectedRequest;

/// @brief Field UnprocessableEntity offset 0
static ::System::Net::HttpStatusCode const UnprocessableEntity;

/// @brief Field Locked offset 0
static ::System::Net::HttpStatusCode const Locked;

/// @brief Field FailedDependency offset 0
static ::System::Net::HttpStatusCode const FailedDependency;

/// @brief Field UpgradeRequired offset 0
static ::System::Net::HttpStatusCode const UpgradeRequired;

/// @brief Field PreconditionRequired offset 0
static ::System::Net::HttpStatusCode const PreconditionRequired;

/// @brief Field TooManyRequests offset 0
static ::System::Net::HttpStatusCode const TooManyRequests;

/// @brief Field RequestHeaderFieldsTooLarge offset 0
static ::System::Net::HttpStatusCode const RequestHeaderFieldsTooLarge;

/// @brief Field UnavailableForLegalReasons offset 0
static ::System::Net::HttpStatusCode const UnavailableForLegalReasons;

/// @brief Field InternalServerError offset 0
static ::System::Net::HttpStatusCode const InternalServerError;

/// @brief Field NotImplemented offset 0
static ::System::Net::HttpStatusCode const NotImplemented;

/// @brief Field BadGateway offset 0
static ::System::Net::HttpStatusCode const BadGateway;

/// @brief Field ServiceUnavailable offset 0
static ::System::Net::HttpStatusCode const ServiceUnavailable;

/// @brief Field GatewayTimeout offset 0
static ::System::Net::HttpStatusCode const GatewayTimeout;

/// @brief Field HttpVersionNotSupported offset 0
static ::System::Net::HttpStatusCode const HttpVersionNotSupported;

/// @brief Field VariantAlsoNegotiates offset 0
static ::System::Net::HttpStatusCode const VariantAlsoNegotiates;

/// @brief Field InsufficientStorage offset 0
static ::System::Net::HttpStatusCode const InsufficientStorage;

/// @brief Field LoopDetected offset 0
static ::System::Net::HttpStatusCode const LoopDetected;

/// @brief Field NotExtended offset 0
static ::System::Net::HttpStatusCode const NotExtended;

/// @brief Field NetworkAuthenticationRequired offset 0
static ::System::Net::HttpStatusCode const NetworkAuthenticationRequired;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Net
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::System::Net::HttpStatusCode, "System.Net", "HttpStatusCode");
