#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace UnityEngine::XR {
struct XRNode;
}
namespace System {
class Action;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace GlobalNamespace {
class OVRDisplay;
}
namespace GlobalNamespace {
struct GlobalNamespace__OVRDisplay__EyeFov;
}
namespace GlobalNamespace {
struct GlobalNamespace__OVRDisplay__EyeRenderDesc;
}
namespace GlobalNamespace {
struct GlobalNamespace__OVRDisplay__LatencyData;
}
// Type: ::EyeFov
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8457))
// CS Name: OVRDisplay::EyeFov
struct CORDL_TYPE GlobalNamespace__OVRDisplay__EyeFov : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "UpFov", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "DownFov", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "LeftFov", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "RightFov", ty: "float_t", modifiers: "", def_value: None }]
constexpr GlobalNamespace__OVRDisplay__EyeFov(float_t UpFov, float_t DownFov, float_t LeftFov, float_t RightFov) noexcept;


                    constexpr GlobalNamespace__OVRDisplay__EyeFov(GlobalNamespace__OVRDisplay__EyeFov const&) = default;
                    constexpr GlobalNamespace__OVRDisplay__EyeFov(GlobalNamespace__OVRDisplay__EyeFov&&) = default;
                    constexpr GlobalNamespace__OVRDisplay__EyeFov& operator=(GlobalNamespace__OVRDisplay__EyeFov const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__OVRDisplay__EyeFov& operator=(GlobalNamespace__OVRDisplay__EyeFov&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__OVRDisplay__EyeFov(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 float_t __declspec(property(get=__get_UpFov, put=__set_UpFov))  UpFov;

constexpr void __set_UpFov(float_t value) ;

constexpr float_t __get_UpFov() const;

 float_t __declspec(property(get=__get_DownFov, put=__set_DownFov))  DownFov;

constexpr void __set_DownFov(float_t value) ;

constexpr float_t __get_DownFov() const;

 float_t __declspec(property(get=__get_LeftFov, put=__set_LeftFov))  LeftFov;

constexpr void __set_LeftFov(float_t value) ;

constexpr float_t __get_LeftFov() const;

 float_t __declspec(property(get=__get_RightFov, put=__set_RightFov))  RightFov;

constexpr void __set_RightFov(float_t value) ;

constexpr float_t __get_RightFov() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::EyeRenderDesc
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8458))
// CS Name: OVRDisplay::EyeRenderDesc
struct CORDL_TYPE GlobalNamespace__OVRDisplay__EyeRenderDesc : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "resolution", ty: "UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "fov", ty: "UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "fullFov", ty: "GlobalNamespace::GlobalNamespace__OVRDisplay__EyeFov", modifiers: "", def_value: None }]
constexpr GlobalNamespace__OVRDisplay__EyeRenderDesc(UnityEngine::Vector2 resolution, UnityEngine::Vector2 fov, GlobalNamespace::GlobalNamespace__OVRDisplay__EyeFov fullFov) noexcept;


                    constexpr GlobalNamespace__OVRDisplay__EyeRenderDesc(GlobalNamespace__OVRDisplay__EyeRenderDesc const&) = default;
                    constexpr GlobalNamespace__OVRDisplay__EyeRenderDesc(GlobalNamespace__OVRDisplay__EyeRenderDesc&&) = default;
                    constexpr GlobalNamespace__OVRDisplay__EyeRenderDesc& operator=(GlobalNamespace__OVRDisplay__EyeRenderDesc const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__OVRDisplay__EyeRenderDesc& operator=(GlobalNamespace__OVRDisplay__EyeRenderDesc&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x20};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__OVRDisplay__EyeRenderDesc(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 UnityEngine::Vector2 __declspec(property(get=__get_resolution, put=__set_resolution))  resolution;

constexpr void __set_resolution(UnityEngine::Vector2 value) ;

constexpr UnityEngine::Vector2 __get_resolution() const;

 UnityEngine::Vector2 __declspec(property(get=__get_fov, put=__set_fov))  fov;

constexpr void __set_fov(UnityEngine::Vector2 value) ;

constexpr UnityEngine::Vector2 __get_fov() const;

 GlobalNamespace::GlobalNamespace__OVRDisplay__EyeFov __declspec(property(get=__get_fullFov, put=__set_fullFov))  fullFov;

constexpr void __set_fullFov(GlobalNamespace::GlobalNamespace__OVRDisplay__EyeFov value) ;

constexpr GlobalNamespace::GlobalNamespace__OVRDisplay__EyeFov __get_fullFov() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::LatencyData
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8459))
// CS Name: OVRDisplay::LatencyData
struct CORDL_TYPE GlobalNamespace__OVRDisplay__LatencyData : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "render", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "timeWarp", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "postPresent", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "renderError", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "timeWarpError", ty: "float_t", modifiers: "", def_value: None }]
constexpr GlobalNamespace__OVRDisplay__LatencyData(float_t render, float_t timeWarp, float_t postPresent, float_t renderError, float_t timeWarpError) noexcept;


                    constexpr GlobalNamespace__OVRDisplay__LatencyData(GlobalNamespace__OVRDisplay__LatencyData const&) = default;
                    constexpr GlobalNamespace__OVRDisplay__LatencyData(GlobalNamespace__OVRDisplay__LatencyData&&) = default;
                    constexpr GlobalNamespace__OVRDisplay__LatencyData& operator=(GlobalNamespace__OVRDisplay__LatencyData const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__OVRDisplay__LatencyData& operator=(GlobalNamespace__OVRDisplay__LatencyData&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x14};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__OVRDisplay__LatencyData(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 float_t __declspec(property(get=__get_render, put=__set_render))  render;

constexpr void __set_render(float_t value) ;

constexpr float_t __get_render() const;

 float_t __declspec(property(get=__get_timeWarp, put=__set_timeWarp))  timeWarp;

constexpr void __set_timeWarp(float_t value) ;

constexpr float_t __get_timeWarp() const;

 float_t __declspec(property(get=__get_postPresent, put=__set_postPresent))  postPresent;

constexpr void __set_postPresent(float_t value) ;

constexpr float_t __get_postPresent() const;

 float_t __declspec(property(get=__get_renderError, put=__set_renderError))  renderError;

constexpr void __set_renderError(float_t value) ;

constexpr float_t __get_renderError() const;

 float_t __declspec(property(get=__get_timeWarpError, put=__set_timeWarpError))  timeWarpError;

constexpr void __set_timeWarpError(float_t value) ;

constexpr float_t __get_timeWarpError() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::OVRDisplay
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8460))
// CS Name: OVRDisplay
class CORDL_TYPE OVRDisplay : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using LatencyData = GlobalNamespace::GlobalNamespace__OVRDisplay__LatencyData;

using EyeRenderDesc = GlobalNamespace::GlobalNamespace__OVRDisplay__EyeRenderDesc;

using EyeFov = GlobalNamespace::GlobalNamespace__OVRDisplay__EyeFov;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~OVRDisplay() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVRDisplay", modifiers: " const&", def_value: None }]
constexpr OVRDisplay(OVRDisplay const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVRDisplay", modifiers: "&&", def_value: None }]
constexpr OVRDisplay(OVRDisplay&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVRDisplay(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr OVRDisplay& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVRDisplay& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVRDisplay& operator=(OVRDisplay&& o) noexcept = default;
  constexpr OVRDisplay& operator=(OVRDisplay const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get_needsConfigureTexture, put=__set_needsConfigureTexture))  needsConfigureTexture;

constexpr void __set_needsConfigureTexture(bool value) ;

constexpr bool __get_needsConfigureTexture() const;

 ::ArrayW<GlobalNamespace::GlobalNamespace__OVRDisplay__EyeRenderDesc> __declspec(property(get=__get_eyeDescs, put=__set_eyeDescs))  eyeDescs;

constexpr void __set_eyeDescs(::ArrayW<GlobalNamespace::GlobalNamespace__OVRDisplay__EyeRenderDesc> value) ;

constexpr ::ArrayW<GlobalNamespace::GlobalNamespace__OVRDisplay__EyeRenderDesc> __get_eyeDescs() const;

 bool __declspec(property(get=__get_recenterRequested, put=__set_recenterRequested))  recenterRequested;

constexpr void __set_recenterRequested(bool value) ;

constexpr bool __get_recenterRequested() const;

 int32_t __declspec(property(get=__get_recenterRequestedFrameCount, put=__set_recenterRequestedFrameCount))  recenterRequestedFrameCount;

constexpr void __set_recenterRequestedFrameCount(int32_t value) ;

constexpr int32_t __get_recenterRequestedFrameCount() const;

 int32_t __declspec(property(get=__get_localTrackingSpaceRecenterCount, put=__set_localTrackingSpaceRecenterCount))  localTrackingSpaceRecenterCount;

constexpr void __set_localTrackingSpaceRecenterCount(int32_t value) ;

constexpr int32_t __get_localTrackingSpaceRecenterCount() const;

 System::Action __declspec(property(get=__get_RecenteredPose, put=__set_RecenteredPose))  RecenteredPose;

constexpr void __set_RecenteredPose(System::Action value) ;

constexpr System::Action __get_RecenteredPose() const;


// Properties

 UnityEngine::Vector3 __declspec(property(get=get_acceleration))  acceleration;

 UnityEngine::Vector3 __declspec(property(get=get_angularAcceleration))  angularAcceleration;

 UnityEngine::Vector3 __declspec(property(get=get_velocity))  velocity;

 UnityEngine::Vector3 __declspec(property(get=get_angularVelocity))  angularVelocity;

 GlobalNamespace::GlobalNamespace__OVRDisplay__LatencyData __declspec(property(get=get_latency))  latency;

 float_t __declspec(property(get=get_appFramerate))  appFramerate;

 int32_t __declspec(property(get=get_recommendedMSAALevel))  recommendedMSAALevel;

 ::ArrayW<float_t> __declspec(property(get=get_displayFrequenciesAvailable))  displayFrequenciesAvailable;

 float_t __declspec(property(get=get_displayFrequency, put=set_displayFrequency))  displayFrequency;


// Methods

// Ctor Parameters []
explicit OVRDisplay() ;

/// @brief Method .ctor addr 0x25ae5d0 size 0x78 virtual false final false
 void _ctor() ;

/// @brief Method Update addr 0x25ae668 size 0x184 virtual false final false
 void Update() ;

/// @brief Method add_RecenteredPose addr 0x25ae7ec size 0x9c virtual false final false
 void add_RecenteredPose(System::Action value) ;

/// @brief Method remove_RecenteredPose addr 0x25ae888 size 0x9c virtual false final false
 void remove_RecenteredPose(System::Action value) ;

/// @brief Method RecenterPose addr 0x25ae924 size 0x78 virtual false final false
 void RecenterPose() ;

/// @brief Method get_acceleration addr 0x25ae99c size 0x124 virtual false final false
 UnityEngine::Vector3 get_acceleration() ;

/// @brief Method get_angularAcceleration addr 0x25aeac0 size 0x124 virtual false final false
 UnityEngine::Vector3 get_angularAcceleration() ;

/// @brief Method get_velocity addr 0x25aebe4 size 0x124 virtual false final false
 UnityEngine::Vector3 get_velocity() ;

/// @brief Method get_angularVelocity addr 0x25aed08 size 0x124 virtual false final false
 UnityEngine::Vector3 get_angularVelocity() ;

/// @brief Method GetEyeRenderDesc addr 0x25aee2c size 0x38 virtual false final false
 GlobalNamespace::GlobalNamespace__OVRDisplay__EyeRenderDesc GetEyeRenderDesc(UnityEngine::XR::XRNode eye) ;

/// @brief Method get_latency addr 0x25aee64 size 0x1d0 virtual false final false
 GlobalNamespace::GlobalNamespace__OVRDisplay__LatencyData get_latency() ;

/// @brief Method get_appFramerate addr 0x25af034 size 0x90 virtual false final false
 float_t get_appFramerate() ;

/// @brief Method get_recommendedMSAALevel addr 0x25af0c4 size 0x5c virtual false final false
 int32_t get_recommendedMSAALevel() ;

/// @brief Method get_displayFrequenciesAvailable addr 0x25af120 size 0x50 virtual false final false
 ::ArrayW<float_t> get_displayFrequenciesAvailable() ;

/// @brief Method get_displayFrequency addr 0x25af170 size 0x50 virtual false final false
 float_t get_displayFrequency() ;

/// @brief Method set_displayFrequency addr 0x25af1c0 size 0x60 virtual false final false
 void set_displayFrequency(float_t value) ;

/// @brief Method UpdateTextures addr 0x25ae648 size 0x20 virtual false final false
 void UpdateTextures() ;

/// @brief Method ConfigureEyeDesc addr 0x25af220 size 0x254 virtual false final false
 void ConfigureEyeDesc(UnityEngine::XR::XRNode eye) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::OVRDisplay);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRDisplay, "", "OVRDisplay");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__OVRDisplay__EyeFov, "", "OVRDisplay/EyeFov");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__OVRDisplay__EyeRenderDesc, "", "OVRDisplay/EyeRenderDesc");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__OVRDisplay__LatencyData, "", "OVRDisplay/LatencyData");
