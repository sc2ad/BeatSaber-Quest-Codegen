#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace UnityEngine::Android {
struct AndroidAssetPackStatus;
}
// Type: UnityEngine.Android::AndroidAssetPackStatus
namespace UnityEngine::Android {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14888))
// CS Name: UnityEngine.Android.AndroidAssetPackStatus
struct CORDL_TYPE AndroidAssetPackStatus : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr AndroidAssetPackStatus(int32_t value__) noexcept;


                    constexpr AndroidAssetPackStatus(AndroidAssetPackStatus const&) = default;
                    constexpr AndroidAssetPackStatus(AndroidAssetPackStatus&&) = default;
                    constexpr AndroidAssetPackStatus& operator=(AndroidAssetPackStatus const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr AndroidAssetPackStatus& operator=(AndroidAssetPackStatus&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit AndroidAssetPackStatus(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __AndroidAssetPackStatus_Unwrapped : int32_t {
__Unknown = 0,
__Pending = 1,
__Downloading = 2,
__Transferring = 3,
__Completed = 4,
__Failed = 5,
__Canceled = 6,
__WaitingForWifi = 7,
__NotInstalled = 8,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __AndroidAssetPackStatus_Unwrapped () const noexcept {
return std::bit_cast<__AndroidAssetPackStatus_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Unknown offset 0
static UnityEngine::Android::AndroidAssetPackStatus const Unknown;

/// @brief Field Pending offset 0
static UnityEngine::Android::AndroidAssetPackStatus const Pending;

/// @brief Field Downloading offset 0
static UnityEngine::Android::AndroidAssetPackStatus const Downloading;

/// @brief Field Transferring offset 0
static UnityEngine::Android::AndroidAssetPackStatus const Transferring;

/// @brief Field Completed offset 0
static UnityEngine::Android::AndroidAssetPackStatus const Completed;

/// @brief Field Failed offset 0
static UnityEngine::Android::AndroidAssetPackStatus const Failed;

/// @brief Field Canceled offset 0
static UnityEngine::Android::AndroidAssetPackStatus const Canceled;

/// @brief Field WaitingForWifi offset 0
static UnityEngine::Android::AndroidAssetPackStatus const WaitingForWifi;

/// @brief Field NotInstalled offset 0
static UnityEngine::Android::AndroidAssetPackStatus const NotInstalled;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::Android
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Android::AndroidAssetPackStatus, "UnityEngine.Android", "AndroidAssetPackStatus");
