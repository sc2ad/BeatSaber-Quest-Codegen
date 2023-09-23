#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace OVR::OpenVR {
struct VREvent_Data_t;
}
// Forward declare root types
namespace OVR::OpenVR {
struct VREvent_t;
}
// Type: OVR.OpenVR::VREvent_t
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9475))
// CS Name: OVR.OpenVR.VREvent_t
struct CORDL_TYPE VREvent_t : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "eventType", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "trackedDeviceIndex", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "eventAgeSeconds", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "data", ty: "OVR::OpenVR::VREvent_Data_t", modifiers: "", def_value: None }]
constexpr VREvent_t(uint32_t eventType, uint32_t trackedDeviceIndex, float_t eventAgeSeconds, OVR::OpenVR::VREvent_Data_t data) noexcept;


                    constexpr VREvent_t(VREvent_t const&) = default;
                    constexpr VREvent_t(VREvent_t&&) = default;
                    constexpr VREvent_t& operator=(VREvent_t const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr VREvent_t& operator=(VREvent_t&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x30};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit VREvent_t(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 uint32_t __declspec(property(get=__get_eventType, put=__set_eventType))  eventType;

constexpr void __set_eventType(uint32_t value) ;

constexpr uint32_t __get_eventType() const;

 uint32_t __declspec(property(get=__get_trackedDeviceIndex, put=__set_trackedDeviceIndex))  trackedDeviceIndex;

constexpr void __set_trackedDeviceIndex(uint32_t value) ;

constexpr uint32_t __get_trackedDeviceIndex() const;

 float_t __declspec(property(get=__get_eventAgeSeconds, put=__set_eventAgeSeconds))  eventAgeSeconds;

constexpr void __set_eventAgeSeconds(float_t value) ;

constexpr float_t __get_eventAgeSeconds() const;

 OVR::OpenVR::VREvent_Data_t __declspec(property(get=__get_data, put=__set_data))  data;

constexpr void __set_data(OVR::OpenVR::VREvent_Data_t value) ;

constexpr OVR::OpenVR::VREvent_Data_t __get_data() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::VREvent_t, "OVR.OpenVR", "VREvent_t");
