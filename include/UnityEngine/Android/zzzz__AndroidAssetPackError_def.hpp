#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace UnityEngine::Android {
struct AndroidAssetPackError;
}
// Type: UnityEngine.Android::AndroidAssetPackError
namespace UnityEngine::Android {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14889))
// CS Name: UnityEngine.Android.AndroidAssetPackError
struct CORDL_TYPE AndroidAssetPackError : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr AndroidAssetPackError(int32_t value__) noexcept;


                    constexpr AndroidAssetPackError(AndroidAssetPackError const&) = default;
                    constexpr AndroidAssetPackError(AndroidAssetPackError&&) = default;
                    constexpr AndroidAssetPackError& operator=(AndroidAssetPackError const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr AndroidAssetPackError& operator=(AndroidAssetPackError&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit AndroidAssetPackError(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __AndroidAssetPackError_Unwrapped : int32_t {
__NoError = 0,
__AppUnavailable = -1,
__PackUnavailable = -2,
__InvalidRequest = -3,
__DownloadNotFound = -4,
__ApiNotAvailable = -5,
__NetworkError = -6,
__AccessDenied = -7,
__InsufficientStorage = -10,
__PlayStoreNotFound = -11,
__NetworkUnrestricted = -12,
__AppNotOwned = -13,
__InternalError = -100,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __AndroidAssetPackError_Unwrapped () const noexcept {
return std::bit_cast<__AndroidAssetPackError_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field NoError offset 0
static ::UnityEngine::Android::AndroidAssetPackError const NoError;

/// @brief Field AppUnavailable offset 0
static ::UnityEngine::Android::AndroidAssetPackError const AppUnavailable;

/// @brief Field PackUnavailable offset 0
static ::UnityEngine::Android::AndroidAssetPackError const PackUnavailable;

/// @brief Field InvalidRequest offset 0
static ::UnityEngine::Android::AndroidAssetPackError const InvalidRequest;

/// @brief Field DownloadNotFound offset 0
static ::UnityEngine::Android::AndroidAssetPackError const DownloadNotFound;

/// @brief Field ApiNotAvailable offset 0
static ::UnityEngine::Android::AndroidAssetPackError const ApiNotAvailable;

/// @brief Field NetworkError offset 0
static ::UnityEngine::Android::AndroidAssetPackError const NetworkError;

/// @brief Field AccessDenied offset 0
static ::UnityEngine::Android::AndroidAssetPackError const AccessDenied;

/// @brief Field InsufficientStorage offset 0
static ::UnityEngine::Android::AndroidAssetPackError const InsufficientStorage;

/// @brief Field PlayStoreNotFound offset 0
static ::UnityEngine::Android::AndroidAssetPackError const PlayStoreNotFound;

/// @brief Field NetworkUnrestricted offset 0
static ::UnityEngine::Android::AndroidAssetPackError const NetworkUnrestricted;

/// @brief Field AppNotOwned offset 0
static ::UnityEngine::Android::AndroidAssetPackError const AppNotOwned;

/// @brief Field InternalError offset 0
static ::UnityEngine::Android::AndroidAssetPackError const InternalError;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::Android
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Android::AndroidAssetPackError, "UnityEngine.Android", "AndroidAssetPackError");
