#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace OVR::OpenVR {
struct EVRNotificationError;
}
// Type: OVR.OpenVR::EVRNotificationError
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9388))
// CS Name: OVR.OpenVR.EVRNotificationError
struct CORDL_TYPE EVRNotificationError : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr EVRNotificationError(int32_t value__) noexcept;


                    constexpr EVRNotificationError(EVRNotificationError const&) = default;
                    constexpr EVRNotificationError(EVRNotificationError&&) = default;
                    constexpr EVRNotificationError& operator=(EVRNotificationError const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr EVRNotificationError& operator=(EVRNotificationError&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit EVRNotificationError(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __EVRNotificationError_Unwrapped : int32_t {
__OK = 0,
__InvalidNotificationId = 100,
__NotificationQueueFull = 101,
__InvalidOverlayHandle = 102,
__SystemWithUserValueAlreadyExists = 103,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __EVRNotificationError_Unwrapped () const noexcept {
return std::bit_cast<__EVRNotificationError_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field OK offset 0
static OVR::OpenVR::EVRNotificationError const OK;

/// @brief Field InvalidNotificationId offset 0
static OVR::OpenVR::EVRNotificationError const InvalidNotificationId;

/// @brief Field NotificationQueueFull offset 0
static OVR::OpenVR::EVRNotificationError const NotificationQueueFull;

/// @brief Field InvalidOverlayHandle offset 0
static OVR::OpenVR::EVRNotificationError const InvalidOverlayHandle;

/// @brief Field SystemWithUserValueAlreadyExists offset 0
static OVR::OpenVR::EVRNotificationError const SystemWithUserValueAlreadyExists;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::EVRNotificationError, "OVR.OpenVR", "EVRNotificationError");
