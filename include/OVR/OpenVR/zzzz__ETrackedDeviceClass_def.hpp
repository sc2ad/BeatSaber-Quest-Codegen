#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace OVR::OpenVR {
struct ETrackedDeviceClass;
}
// Type: OVR.OpenVR::ETrackedDeviceClass
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9367))
// CS Name: OVR.OpenVR.ETrackedDeviceClass
struct CORDL_TYPE ETrackedDeviceClass : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ETrackedDeviceClass(int32_t value__) noexcept;


                    constexpr ETrackedDeviceClass(ETrackedDeviceClass const&) = default;
                    constexpr ETrackedDeviceClass(ETrackedDeviceClass&&) = default;
                    constexpr ETrackedDeviceClass& operator=(ETrackedDeviceClass const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ETrackedDeviceClass& operator=(ETrackedDeviceClass&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ETrackedDeviceClass(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __ETrackedDeviceClass_Unwrapped : int32_t {
__Invalid = 0,
__HMD = 1,
__Controller = 2,
__GenericTracker = 3,
__TrackingReference = 4,
__DisplayRedirect = 5,
__Max = 6,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ETrackedDeviceClass_Unwrapped () const noexcept {
return std::bit_cast<__ETrackedDeviceClass_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Invalid offset 0
static ::OVR::OpenVR::ETrackedDeviceClass const Invalid;

/// @brief Field HMD offset 0
static ::OVR::OpenVR::ETrackedDeviceClass const HMD;

/// @brief Field Controller offset 0
static ::OVR::OpenVR::ETrackedDeviceClass const Controller;

/// @brief Field GenericTracker offset 0
static ::OVR::OpenVR::ETrackedDeviceClass const GenericTracker;

/// @brief Field TrackingReference offset 0
static ::OVR::OpenVR::ETrackedDeviceClass const TrackingReference;

/// @brief Field DisplayRedirect offset 0
static ::OVR::OpenVR::ETrackedDeviceClass const DisplayRedirect;

/// @brief Field Max offset 0
static ::OVR::OpenVR::ETrackedDeviceClass const Max;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::ETrackedDeviceClass, "OVR.OpenVR", "ETrackedDeviceClass");
