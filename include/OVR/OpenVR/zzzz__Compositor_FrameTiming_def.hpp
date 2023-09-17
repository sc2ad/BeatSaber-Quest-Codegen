#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace {
namespace OVR::OpenVR {
struct TrackedDevicePose_t;
}
// Forward declare root types
namespace OVR::OpenVR {
struct Compositor_FrameTiming;
}
// Type: OVR.OpenVR::Compositor_FrameTiming
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9487))
// CS Name: OVR.OpenVR.Compositor_FrameTiming
struct CORDL_TYPE Compositor_FrameTiming : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "m_nSize", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "m_nFrameIndex", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "m_nNumFramePresents", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "m_nNumMisPresented", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "m_nNumDroppedFrames", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "m_nReprojectionFlags", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "m_flSystemTimeInSeconds", ty: "double_t", modifiers: "", def_value: None }, CppParam { name: "m_flPreSubmitGpuMs", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_flPostSubmitGpuMs", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_flTotalRenderGpuMs", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_flCompositorRenderGpuMs", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_flCompositorRenderCpuMs", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_flCompositorIdleCpuMs", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_flClientFrameIntervalMs", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_flPresentCallCpuMs", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_flWaitForPresentCpuMs", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_flSubmitFrameMs", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_flWaitGetPosesCalledMs", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_flNewPosesReadyMs", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_flNewFrameReadyMs", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_flCompositorUpdateStartMs", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_flCompositorUpdateEndMs", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_flCompositorRenderStartMs", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_HmdPose", ty: "::OVR::OpenVR::TrackedDevicePose_t", modifiers: "", def_value: None }]
constexpr Compositor_FrameTiming(uint32_t m_nSize, uint32_t m_nFrameIndex, uint32_t m_nNumFramePresents, uint32_t m_nNumMisPresented, uint32_t m_nNumDroppedFrames, uint32_t m_nReprojectionFlags, double_t m_flSystemTimeInSeconds, float_t m_flPreSubmitGpuMs, float_t m_flPostSubmitGpuMs, float_t m_flTotalRenderGpuMs, float_t m_flCompositorRenderGpuMs, float_t m_flCompositorRenderCpuMs, float_t m_flCompositorIdleCpuMs, float_t m_flClientFrameIntervalMs, float_t m_flPresentCallCpuMs, float_t m_flWaitForPresentCpuMs, float_t m_flSubmitFrameMs, float_t m_flWaitGetPosesCalledMs, float_t m_flNewPosesReadyMs, float_t m_flNewFrameReadyMs, float_t m_flCompositorUpdateStartMs, float_t m_flCompositorUpdateEndMs, float_t m_flCompositorRenderStartMs, ::OVR::OpenVR::TrackedDevicePose_t m_HmdPose) noexcept;


                    constexpr Compositor_FrameTiming(Compositor_FrameTiming const&) = default;
                    constexpr Compositor_FrameTiming(Compositor_FrameTiming&&) = default;
                    constexpr Compositor_FrameTiming& operator=(Compositor_FrameTiming const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Compositor_FrameTiming& operator=(Compositor_FrameTiming&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0xb0};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Compositor_FrameTiming(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 uint32_t __declspec(property(get=__get_m_nSize, put=__set_m_nSize))  m_nSize;

constexpr void __set_m_nSize(uint32_t value) ;

constexpr uint32_t __get_m_nSize() const;

 uint32_t __declspec(property(get=__get_m_nFrameIndex, put=__set_m_nFrameIndex))  m_nFrameIndex;

constexpr void __set_m_nFrameIndex(uint32_t value) ;

constexpr uint32_t __get_m_nFrameIndex() const;

 uint32_t __declspec(property(get=__get_m_nNumFramePresents, put=__set_m_nNumFramePresents))  m_nNumFramePresents;

constexpr void __set_m_nNumFramePresents(uint32_t value) ;

constexpr uint32_t __get_m_nNumFramePresents() const;

 uint32_t __declspec(property(get=__get_m_nNumMisPresented, put=__set_m_nNumMisPresented))  m_nNumMisPresented;

constexpr void __set_m_nNumMisPresented(uint32_t value) ;

constexpr uint32_t __get_m_nNumMisPresented() const;

 uint32_t __declspec(property(get=__get_m_nNumDroppedFrames, put=__set_m_nNumDroppedFrames))  m_nNumDroppedFrames;

constexpr void __set_m_nNumDroppedFrames(uint32_t value) ;

constexpr uint32_t __get_m_nNumDroppedFrames() const;

 uint32_t __declspec(property(get=__get_m_nReprojectionFlags, put=__set_m_nReprojectionFlags))  m_nReprojectionFlags;

constexpr void __set_m_nReprojectionFlags(uint32_t value) ;

constexpr uint32_t __get_m_nReprojectionFlags() const;

 double_t __declspec(property(get=__get_m_flSystemTimeInSeconds, put=__set_m_flSystemTimeInSeconds))  m_flSystemTimeInSeconds;

constexpr void __set_m_flSystemTimeInSeconds(double_t value) ;

constexpr double_t __get_m_flSystemTimeInSeconds() const;

 float_t __declspec(property(get=__get_m_flPreSubmitGpuMs, put=__set_m_flPreSubmitGpuMs))  m_flPreSubmitGpuMs;

constexpr void __set_m_flPreSubmitGpuMs(float_t value) ;

constexpr float_t __get_m_flPreSubmitGpuMs() const;

 float_t __declspec(property(get=__get_m_flPostSubmitGpuMs, put=__set_m_flPostSubmitGpuMs))  m_flPostSubmitGpuMs;

constexpr void __set_m_flPostSubmitGpuMs(float_t value) ;

constexpr float_t __get_m_flPostSubmitGpuMs() const;

 float_t __declspec(property(get=__get_m_flTotalRenderGpuMs, put=__set_m_flTotalRenderGpuMs))  m_flTotalRenderGpuMs;

constexpr void __set_m_flTotalRenderGpuMs(float_t value) ;

constexpr float_t __get_m_flTotalRenderGpuMs() const;

 float_t __declspec(property(get=__get_m_flCompositorRenderGpuMs, put=__set_m_flCompositorRenderGpuMs))  m_flCompositorRenderGpuMs;

constexpr void __set_m_flCompositorRenderGpuMs(float_t value) ;

constexpr float_t __get_m_flCompositorRenderGpuMs() const;

 float_t __declspec(property(get=__get_m_flCompositorRenderCpuMs, put=__set_m_flCompositorRenderCpuMs))  m_flCompositorRenderCpuMs;

constexpr void __set_m_flCompositorRenderCpuMs(float_t value) ;

constexpr float_t __get_m_flCompositorRenderCpuMs() const;

 float_t __declspec(property(get=__get_m_flCompositorIdleCpuMs, put=__set_m_flCompositorIdleCpuMs))  m_flCompositorIdleCpuMs;

constexpr void __set_m_flCompositorIdleCpuMs(float_t value) ;

constexpr float_t __get_m_flCompositorIdleCpuMs() const;

 float_t __declspec(property(get=__get_m_flClientFrameIntervalMs, put=__set_m_flClientFrameIntervalMs))  m_flClientFrameIntervalMs;

constexpr void __set_m_flClientFrameIntervalMs(float_t value) ;

constexpr float_t __get_m_flClientFrameIntervalMs() const;

 float_t __declspec(property(get=__get_m_flPresentCallCpuMs, put=__set_m_flPresentCallCpuMs))  m_flPresentCallCpuMs;

constexpr void __set_m_flPresentCallCpuMs(float_t value) ;

constexpr float_t __get_m_flPresentCallCpuMs() const;

 float_t __declspec(property(get=__get_m_flWaitForPresentCpuMs, put=__set_m_flWaitForPresentCpuMs))  m_flWaitForPresentCpuMs;

constexpr void __set_m_flWaitForPresentCpuMs(float_t value) ;

constexpr float_t __get_m_flWaitForPresentCpuMs() const;

 float_t __declspec(property(get=__get_m_flSubmitFrameMs, put=__set_m_flSubmitFrameMs))  m_flSubmitFrameMs;

constexpr void __set_m_flSubmitFrameMs(float_t value) ;

constexpr float_t __get_m_flSubmitFrameMs() const;

 float_t __declspec(property(get=__get_m_flWaitGetPosesCalledMs, put=__set_m_flWaitGetPosesCalledMs))  m_flWaitGetPosesCalledMs;

constexpr void __set_m_flWaitGetPosesCalledMs(float_t value) ;

constexpr float_t __get_m_flWaitGetPosesCalledMs() const;

 float_t __declspec(property(get=__get_m_flNewPosesReadyMs, put=__set_m_flNewPosesReadyMs))  m_flNewPosesReadyMs;

constexpr void __set_m_flNewPosesReadyMs(float_t value) ;

constexpr float_t __get_m_flNewPosesReadyMs() const;

 float_t __declspec(property(get=__get_m_flNewFrameReadyMs, put=__set_m_flNewFrameReadyMs))  m_flNewFrameReadyMs;

constexpr void __set_m_flNewFrameReadyMs(float_t value) ;

constexpr float_t __get_m_flNewFrameReadyMs() const;

 float_t __declspec(property(get=__get_m_flCompositorUpdateStartMs, put=__set_m_flCompositorUpdateStartMs))  m_flCompositorUpdateStartMs;

constexpr void __set_m_flCompositorUpdateStartMs(float_t value) ;

constexpr float_t __get_m_flCompositorUpdateStartMs() const;

 float_t __declspec(property(get=__get_m_flCompositorUpdateEndMs, put=__set_m_flCompositorUpdateEndMs))  m_flCompositorUpdateEndMs;

constexpr void __set_m_flCompositorUpdateEndMs(float_t value) ;

constexpr float_t __get_m_flCompositorUpdateEndMs() const;

 float_t __declspec(property(get=__get_m_flCompositorRenderStartMs, put=__set_m_flCompositorRenderStartMs))  m_flCompositorRenderStartMs;

constexpr void __set_m_flCompositorRenderStartMs(float_t value) ;

constexpr float_t __get_m_flCompositorRenderStartMs() const;

 ::OVR::OpenVR::TrackedDevicePose_t __declspec(property(get=__get_m_HmdPose, put=__set_m_HmdPose))  m_HmdPose;

constexpr void __set_m_HmdPose(::OVR::OpenVR::TrackedDevicePose_t value) ;

constexpr ::OVR::OpenVR::TrackedDevicePose_t __get_m_HmdPose() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::Compositor_FrameTiming, "OVR.OpenVR", "Compositor_FrameTiming");
