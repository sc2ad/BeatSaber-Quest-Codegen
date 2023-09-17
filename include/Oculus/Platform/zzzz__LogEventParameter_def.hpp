#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace Oculus::Platform {
struct LogEventParameter;
}
// Type: Oculus.Platform::LogEventParameter
namespace Oculus::Platform {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13197))
// CS Name: Oculus.Platform.LogEventParameter
struct CORDL_TYPE LogEventParameter : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr LogEventParameter(int32_t value__) noexcept;


                    constexpr LogEventParameter(LogEventParameter const&) = default;
                    constexpr LogEventParameter(LogEventParameter&&) = default;
                    constexpr LogEventParameter& operator=(LogEventParameter const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr LogEventParameter& operator=(LogEventParameter&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit LogEventParameter(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __LogEventParameter_Unwrapped : int32_t {
__Unknown = 0,
__VrCurrency = 1,
__VrRegistrationMethod = 2,
__VrContentType = 3,
__VrContent = 4,
__VrContentId = 5,
__VrSearchString = 6,
__VrSuccess = 7,
__VrMaxRatingValue = 8,
__VrPaymentInfoAvailable = 9,
__VrNumItems = 10,
__VrLevel = 11,
__VrDescription = 12,
__AdType = 13,
__VrOrderId = 14,
__EventName = 15,
__LogTime = 16,
__ImplicitlyLogged = 17,
__InBackground = 18,
__VrPushCampaign = 19,
__VrPushAction = 20,
__VrIapProductType = 21,
__VrContentTitle = 22,
__VrTransactionId = 23,
__VrTransactionDate = 24,
__VrIapSubsPeriod = 25,
__VrIapIsStartTrial = 26,
__VrIapHasFreeTrial = 27,
__VrIapTrialPeriod = 28,
__VrIapTrialPrice = 29,
__SessionId = 30,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __LogEventParameter_Unwrapped () const noexcept {
return std::bit_cast<__LogEventParameter_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Unknown offset 0
static ::Oculus::Platform::LogEventParameter const Unknown;

/// @brief Field VrCurrency offset 0
static ::Oculus::Platform::LogEventParameter const VrCurrency;

/// @brief Field VrRegistrationMethod offset 0
static ::Oculus::Platform::LogEventParameter const VrRegistrationMethod;

/// @brief Field VrContentType offset 0
static ::Oculus::Platform::LogEventParameter const VrContentType;

/// @brief Field VrContent offset 0
static ::Oculus::Platform::LogEventParameter const VrContent;

/// @brief Field VrContentId offset 0
static ::Oculus::Platform::LogEventParameter const VrContentId;

/// @brief Field VrSearchString offset 0
static ::Oculus::Platform::LogEventParameter const VrSearchString;

/// @brief Field VrSuccess offset 0
static ::Oculus::Platform::LogEventParameter const VrSuccess;

/// @brief Field VrMaxRatingValue offset 0
static ::Oculus::Platform::LogEventParameter const VrMaxRatingValue;

/// @brief Field VrPaymentInfoAvailable offset 0
static ::Oculus::Platform::LogEventParameter const VrPaymentInfoAvailable;

/// @brief Field VrNumItems offset 0
static ::Oculus::Platform::LogEventParameter const VrNumItems;

/// @brief Field VrLevel offset 0
static ::Oculus::Platform::LogEventParameter const VrLevel;

/// @brief Field VrDescription offset 0
static ::Oculus::Platform::LogEventParameter const VrDescription;

/// @brief Field AdType offset 0
static ::Oculus::Platform::LogEventParameter const AdType;

/// @brief Field VrOrderId offset 0
static ::Oculus::Platform::LogEventParameter const VrOrderId;

/// @brief Field EventName offset 0
static ::Oculus::Platform::LogEventParameter const EventName;

/// @brief Field LogTime offset 0
static ::Oculus::Platform::LogEventParameter const LogTime;

/// @brief Field ImplicitlyLogged offset 0
static ::Oculus::Platform::LogEventParameter const ImplicitlyLogged;

/// @brief Field InBackground offset 0
static ::Oculus::Platform::LogEventParameter const InBackground;

/// @brief Field VrPushCampaign offset 0
static ::Oculus::Platform::LogEventParameter const VrPushCampaign;

/// @brief Field VrPushAction offset 0
static ::Oculus::Platform::LogEventParameter const VrPushAction;

/// @brief Field VrIapProductType offset 0
static ::Oculus::Platform::LogEventParameter const VrIapProductType;

/// @brief Field VrContentTitle offset 0
static ::Oculus::Platform::LogEventParameter const VrContentTitle;

/// @brief Field VrTransactionId offset 0
static ::Oculus::Platform::LogEventParameter const VrTransactionId;

/// @brief Field VrTransactionDate offset 0
static ::Oculus::Platform::LogEventParameter const VrTransactionDate;

/// @brief Field VrIapSubsPeriod offset 0
static ::Oculus::Platform::LogEventParameter const VrIapSubsPeriod;

/// @brief Field VrIapIsStartTrial offset 0
static ::Oculus::Platform::LogEventParameter const VrIapIsStartTrial;

/// @brief Field VrIapHasFreeTrial offset 0
static ::Oculus::Platform::LogEventParameter const VrIapHasFreeTrial;

/// @brief Field VrIapTrialPeriod offset 0
static ::Oculus::Platform::LogEventParameter const VrIapTrialPeriod;

/// @brief Field VrIapTrialPrice offset 0
static ::Oculus::Platform::LogEventParameter const VrIapTrialPrice;

/// @brief Field SessionId offset 0
static ::Oculus::Platform::LogEventParameter const SessionId;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Oculus::Platform
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::LogEventParameter, "Oculus.Platform", "LogEventParameter");
