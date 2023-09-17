#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace OVR::OpenVR {
struct VREvent_Notification_t;
}
// Type: OVR.OpenVR::VREvent_Notification_t
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9453))
// CS Name: OVR.OpenVR.VREvent_Notification_t
struct CORDL_TYPE VREvent_Notification_t : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "ulUserValue", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "notificationId", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr VREvent_Notification_t(uint64_t ulUserValue, uint32_t notificationId) noexcept;


                    constexpr VREvent_Notification_t(VREvent_Notification_t const&) = default;
                    constexpr VREvent_Notification_t(VREvent_Notification_t&&) = default;
                    constexpr VREvent_Notification_t& operator=(VREvent_Notification_t const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr VREvent_Notification_t& operator=(VREvent_Notification_t&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit VREvent_Notification_t(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 uint64_t __declspec(property(get=__get_ulUserValue, put=__set_ulUserValue))  ulUserValue;

constexpr void __set_ulUserValue(uint64_t value) ;

constexpr uint64_t __get_ulUserValue() const;

 uint32_t __declspec(property(get=__get_notificationId, put=__set_notificationId))  notificationId;

constexpr void __set_notificationId(uint32_t value) ;

constexpr uint32_t __get_notificationId() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::VREvent_Notification_t, "OVR.OpenVR", "VREvent_Notification_t");
