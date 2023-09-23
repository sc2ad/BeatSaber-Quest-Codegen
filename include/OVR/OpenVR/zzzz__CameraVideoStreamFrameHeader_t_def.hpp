#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace OVR::OpenVR {
struct EVRTrackedCameraFrameType;
}
namespace OVR::OpenVR {
struct TrackedDevicePose_t;
}
// Forward declare root types
namespace OVR::OpenVR {
struct CameraVideoStreamFrameHeader_t;
}
// Type: OVR.OpenVR::CameraVideoStreamFrameHeader_t
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9483))
// CS Name: OVR.OpenVR.CameraVideoStreamFrameHeader_t
struct CORDL_TYPE CameraVideoStreamFrameHeader_t : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "eFrameType", ty: "OVR::OpenVR::EVRTrackedCameraFrameType", modifiers: "", def_value: None }, CppParam { name: "nWidth", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "nHeight", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "nBytesPerPixel", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "nFrameSequence", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "standingTrackedDevicePose", ty: "OVR::OpenVR::TrackedDevicePose_t", modifiers: "", def_value: None }]
constexpr CameraVideoStreamFrameHeader_t(OVR::OpenVR::EVRTrackedCameraFrameType eFrameType, uint32_t nWidth, uint32_t nHeight, uint32_t nBytesPerPixel, uint32_t nFrameSequence, OVR::OpenVR::TrackedDevicePose_t standingTrackedDevicePose) noexcept;


                    constexpr CameraVideoStreamFrameHeader_t(CameraVideoStreamFrameHeader_t const&) = default;
                    constexpr CameraVideoStreamFrameHeader_t(CameraVideoStreamFrameHeader_t&&) = default;
                    constexpr CameraVideoStreamFrameHeader_t& operator=(CameraVideoStreamFrameHeader_t const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr CameraVideoStreamFrameHeader_t& operator=(CameraVideoStreamFrameHeader_t&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x64};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit CameraVideoStreamFrameHeader_t(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 OVR::OpenVR::EVRTrackedCameraFrameType __declspec(property(get=__get_eFrameType, put=__set_eFrameType))  eFrameType;

constexpr void __set_eFrameType(OVR::OpenVR::EVRTrackedCameraFrameType value) ;

constexpr OVR::OpenVR::EVRTrackedCameraFrameType __get_eFrameType() const;

 uint32_t __declspec(property(get=__get_nWidth, put=__set_nWidth))  nWidth;

constexpr void __set_nWidth(uint32_t value) ;

constexpr uint32_t __get_nWidth() const;

 uint32_t __declspec(property(get=__get_nHeight, put=__set_nHeight))  nHeight;

constexpr void __set_nHeight(uint32_t value) ;

constexpr uint32_t __get_nHeight() const;

 uint32_t __declspec(property(get=__get_nBytesPerPixel, put=__set_nBytesPerPixel))  nBytesPerPixel;

constexpr void __set_nBytesPerPixel(uint32_t value) ;

constexpr uint32_t __get_nBytesPerPixel() const;

 uint32_t __declspec(property(get=__get_nFrameSequence, put=__set_nFrameSequence))  nFrameSequence;

constexpr void __set_nFrameSequence(uint32_t value) ;

constexpr uint32_t __get_nFrameSequence() const;

 OVR::OpenVR::TrackedDevicePose_t __declspec(property(get=__get_standingTrackedDevicePose, put=__set_standingTrackedDevicePose))  standingTrackedDevicePose;

constexpr void __set_standingTrackedDevicePose(OVR::OpenVR::TrackedDevicePose_t value) ;

constexpr OVR::OpenVR::TrackedDevicePose_t __get_standingTrackedDevicePose() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::CameraVideoStreamFrameHeader_t, "OVR.OpenVR", "CameraVideoStreamFrameHeader_t");
