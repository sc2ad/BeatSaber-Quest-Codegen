#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace Oculus::Platform {
struct LogEventName;
}
// Type: Oculus.Platform::LogEventName
namespace Oculus::Platform {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13196))
// CS Name: Oculus.Platform.LogEventName
struct CORDL_TYPE LogEventName : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr LogEventName(int32_t value__) noexcept;


                    constexpr LogEventName(LogEventName const&) = default;
                    constexpr LogEventName(LogEventName&&) = default;
                    constexpr LogEventName& operator=(LogEventName const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr LogEventName& operator=(LogEventName&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit LogEventName(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __LogEventName_Unwrapped : int32_t {
__Unknown = 0,
__AdClick = 1,
__AdImpression = 2,
__VrCompleteRegistration = 3,
__VrTutorialCompletion = 4,
__Contact = 5,
__CustomizeProduct = 6,
__Donate = 7,
__FindLocation = 8,
__VrRate = 9,
__Schedule = 10,
__VrSearch = 11,
__SmartTrial = 12,
__SubmitApplication = 13,
__Subscribe = 14,
__VrContentView = 15,
__VrSdkInitialize = 16,
__VrSdkBackgroundStatusAvailable = 17,
__VrSdkBackgroundStatusDenied = 18,
__VrSdkBackgroundStatusRestricted = 19,
__VrAddPaymentInfo = 20,
__VrAddToCart = 21,
__VrAddToWishlist = 22,
__VrInitiatedCheckout = 23,
__VrPurchase = 24,
__VrCatalogUpdate = 25,
__VrPurchaseFailed = 26,
__VrPurchaseRestored = 27,
__SubscriptionInitiatedCheckout = 28,
__SubscriptionFailed = 29,
__SubscriptionRestore = 30,
__VrLevelAchieved = 31,
__VrAchievementUnlocked = 32,
__VrSpentCredits = 33,
__VrObtainPushToken = 34,
__VrPushOpened = 35,
__VrActivateApp = 36,
__VrDeactivateApp = 37,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __LogEventName_Unwrapped () const noexcept {
return std::bit_cast<__LogEventName_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Unknown offset 0
static Oculus::Platform::LogEventName const Unknown;

/// @brief Field AdClick offset 0
static Oculus::Platform::LogEventName const AdClick;

/// @brief Field AdImpression offset 0
static Oculus::Platform::LogEventName const AdImpression;

/// @brief Field VrCompleteRegistration offset 0
static Oculus::Platform::LogEventName const VrCompleteRegistration;

/// @brief Field VrTutorialCompletion offset 0
static Oculus::Platform::LogEventName const VrTutorialCompletion;

/// @brief Field Contact offset 0
static Oculus::Platform::LogEventName const Contact;

/// @brief Field CustomizeProduct offset 0
static Oculus::Platform::LogEventName const CustomizeProduct;

/// @brief Field Donate offset 0
static Oculus::Platform::LogEventName const Donate;

/// @brief Field FindLocation offset 0
static Oculus::Platform::LogEventName const FindLocation;

/// @brief Field VrRate offset 0
static Oculus::Platform::LogEventName const VrRate;

/// @brief Field Schedule offset 0
static Oculus::Platform::LogEventName const Schedule;

/// @brief Field VrSearch offset 0
static Oculus::Platform::LogEventName const VrSearch;

/// @brief Field SmartTrial offset 0
static Oculus::Platform::LogEventName const SmartTrial;

/// @brief Field SubmitApplication offset 0
static Oculus::Platform::LogEventName const SubmitApplication;

/// @brief Field Subscribe offset 0
static Oculus::Platform::LogEventName const Subscribe;

/// @brief Field VrContentView offset 0
static Oculus::Platform::LogEventName const VrContentView;

/// @brief Field VrSdkInitialize offset 0
static Oculus::Platform::LogEventName const VrSdkInitialize;

/// @brief Field VrSdkBackgroundStatusAvailable offset 0
static Oculus::Platform::LogEventName const VrSdkBackgroundStatusAvailable;

/// @brief Field VrSdkBackgroundStatusDenied offset 0
static Oculus::Platform::LogEventName const VrSdkBackgroundStatusDenied;

/// @brief Field VrSdkBackgroundStatusRestricted offset 0
static Oculus::Platform::LogEventName const VrSdkBackgroundStatusRestricted;

/// @brief Field VrAddPaymentInfo offset 0
static Oculus::Platform::LogEventName const VrAddPaymentInfo;

/// @brief Field VrAddToCart offset 0
static Oculus::Platform::LogEventName const VrAddToCart;

/// @brief Field VrAddToWishlist offset 0
static Oculus::Platform::LogEventName const VrAddToWishlist;

/// @brief Field VrInitiatedCheckout offset 0
static Oculus::Platform::LogEventName const VrInitiatedCheckout;

/// @brief Field VrPurchase offset 0
static Oculus::Platform::LogEventName const VrPurchase;

/// @brief Field VrCatalogUpdate offset 0
static Oculus::Platform::LogEventName const VrCatalogUpdate;

/// @brief Field VrPurchaseFailed offset 0
static Oculus::Platform::LogEventName const VrPurchaseFailed;

/// @brief Field VrPurchaseRestored offset 0
static Oculus::Platform::LogEventName const VrPurchaseRestored;

/// @brief Field SubscriptionInitiatedCheckout offset 0
static Oculus::Platform::LogEventName const SubscriptionInitiatedCheckout;

/// @brief Field SubscriptionFailed offset 0
static Oculus::Platform::LogEventName const SubscriptionFailed;

/// @brief Field SubscriptionRestore offset 0
static Oculus::Platform::LogEventName const SubscriptionRestore;

/// @brief Field VrLevelAchieved offset 0
static Oculus::Platform::LogEventName const VrLevelAchieved;

/// @brief Field VrAchievementUnlocked offset 0
static Oculus::Platform::LogEventName const VrAchievementUnlocked;

/// @brief Field VrSpentCredits offset 0
static Oculus::Platform::LogEventName const VrSpentCredits;

/// @brief Field VrObtainPushToken offset 0
static Oculus::Platform::LogEventName const VrObtainPushToken;

/// @brief Field VrPushOpened offset 0
static Oculus::Platform::LogEventName const VrPushOpened;

/// @brief Field VrActivateApp offset 0
static Oculus::Platform::LogEventName const VrActivateApp;

/// @brief Field VrDeactivateApp offset 0
static Oculus::Platform::LogEventName const VrDeactivateApp;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Oculus::Platform
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::LogEventName, "Oculus.Platform", "LogEventName");
