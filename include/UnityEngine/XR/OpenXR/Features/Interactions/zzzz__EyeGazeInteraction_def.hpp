#pragma once
#include "../../../../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/XR/OpenXR/Features/zzzz__OpenXRInteractionFeature_def.hpp"
#include "UnityEngine/XR/OpenXR/Input/zzzz__OpenXRDevice_def.hpp"
#include <cstdint>
namespace UnityEngine::XR::OpenXR::Features::Interactions {
class UnityEngine__XR__OpenXR__Features__Interactions__EyeGazeInteraction__EyeGazeDevice;
}
namespace UnityEngine::XR::OpenXR::Input {
class PoseControl;
}
// Forward declare root types
namespace UnityEngine::XR::OpenXR::Features::Interactions {
class EyeGazeInteraction;
}
namespace UnityEngine::XR::OpenXR::Features::Interactions {
class UnityEngine__XR__OpenXR__Features__Interactions__EyeGazeInteraction__EyeGazeDevice;
}
// Type: ::EyeGazeDevice
namespace UnityEngine::XR::OpenXR::Features::Interactions {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14189))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14209))
// CS Name: UnityEngine.XR.OpenXR.Features.Interactions.EyeGazeInteraction::EyeGazeDevice
class CORDL_TYPE UnityEngine__XR__OpenXR__Features__Interactions__EyeGazeInteraction__EyeGazeDevice : public UnityEngine::XR::OpenXR::Input::OpenXRDevice {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x160};

virtual ~UnityEngine__XR__OpenXR__Features__Interactions__EyeGazeInteraction__EyeGazeDevice() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__XR__OpenXR__Features__Interactions__EyeGazeInteraction__EyeGazeDevice", modifiers: " const&", def_value: None }]
constexpr UnityEngine__XR__OpenXR__Features__Interactions__EyeGazeInteraction__EyeGazeDevice(UnityEngine__XR__OpenXR__Features__Interactions__EyeGazeInteraction__EyeGazeDevice const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__XR__OpenXR__Features__Interactions__EyeGazeInteraction__EyeGazeDevice", modifiers: "&&", def_value: None }]
constexpr UnityEngine__XR__OpenXR__Features__Interactions__EyeGazeInteraction__EyeGazeDevice(UnityEngine__XR__OpenXR__Features__Interactions__EyeGazeInteraction__EyeGazeDevice&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__XR__OpenXR__Features__Interactions__EyeGazeInteraction__EyeGazeDevice(void* ptr) noexcept : UnityEngine::XR::OpenXR::Input::OpenXRDevice(ptr) {
}


  constexpr UnityEngine__XR__OpenXR__Features__Interactions__EyeGazeInteraction__EyeGazeDevice& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__XR__OpenXR__Features__Interactions__EyeGazeInteraction__EyeGazeDevice& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__XR__OpenXR__Features__Interactions__EyeGazeInteraction__EyeGazeDevice& operator=(UnityEngine__XR__OpenXR__Features__Interactions__EyeGazeInteraction__EyeGazeDevice&& o) noexcept = default;
  constexpr UnityEngine__XR__OpenXR__Features__Interactions__EyeGazeInteraction__EyeGazeDevice& operator=(UnityEngine__XR__OpenXR__Features__Interactions__EyeGazeInteraction__EyeGazeDevice const& o) noexcept = default;
                


// Fields

 UnityEngine::XR::OpenXR::Input::PoseControl __declspec(property(get=__get__pose_k__BackingField, put=__set__pose_k__BackingField))  _pose_k__BackingField;

constexpr void __set__pose_k__BackingField(UnityEngine::XR::OpenXR::Input::PoseControl value) ;

constexpr UnityEngine::XR::OpenXR::Input::PoseControl __get__pose_k__BackingField() const;


// Properties

 UnityEngine::XR::OpenXR::Input::PoseControl __declspec(property(get=get_pose, put=set_pose))  pose;


// Methods

/// @brief Method get_pose addr 0x2af1288 size 0x8 virtual false final false
 UnityEngine::XR::OpenXR::Input::PoseControl get_pose() ;

/// @brief Method set_pose addr 0x2af1290 size 0x8 virtual false final false
 void set_pose(UnityEngine::XR::OpenXR::Input::PoseControl value) ;

/// @brief Method FinishSetup addr 0x2af1298 size 0x78 virtual true final false
 void FinishSetup() ;

static UnityEngine::XR::OpenXR::Features::Interactions::UnityEngine__XR__OpenXR__Features__Interactions__EyeGazeInteraction__EyeGazeDevice New_ctor() ;

/// @brief Method .ctor addr 0x2af1310 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::XR::OpenXR::Features::Interactions
// Type: UnityEngine.XR.OpenXR.Features.Interactions::EyeGazeInteraction
namespace UnityEngine::XR::OpenXR::Features::Interactions {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14208))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14210))
// CS Name: UnityEngine.XR.OpenXR.Features.Interactions.EyeGazeInteraction
class CORDL_TYPE EyeGazeInteraction : public UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature {
public:
// Declarations
using EyeGazeDevice = UnityEngine::XR::OpenXR::Features::Interactions::UnityEngine__XR__OpenXR__Features__Interactions__EyeGazeInteraction__EyeGazeDevice;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~EyeGazeInteraction() = default;

// Ctor Parameters [CppParam { name: "", ty: "EyeGazeInteraction", modifiers: " const&", def_value: None }]
constexpr EyeGazeInteraction(EyeGazeInteraction const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "EyeGazeInteraction", modifiers: "&&", def_value: None }]
constexpr EyeGazeInteraction(EyeGazeInteraction&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit EyeGazeInteraction(void* ptr) noexcept : UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature(ptr) {
}


  constexpr EyeGazeInteraction& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr EyeGazeInteraction& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr EyeGazeInteraction& operator=(EyeGazeInteraction&& o) noexcept = default;
  constexpr EyeGazeInteraction& operator=(EyeGazeInteraction const& o) noexcept = default;
                


// Fields

/// @brief Field featureId offset 0
static constexpr ::ConstString  featureId{u"com.unity.openxr.feature.input.eyetracking"};

/// @brief Field userPath offset 0
static constexpr ::ConstString  userPath{u"/user/eyes_ext"};

/// @brief Field profile offset 0
static constexpr ::ConstString  profile{u"/interaction_profiles/ext/eye_gaze_interaction"};

/// @brief Field pose offset 0
static constexpr ::ConstString  pose{u"/input/gaze_ext/pose"};

/// @brief Field kDeviceLocalizedName offset 0
static constexpr ::ConstString  kDeviceLocalizedName{u"Eye Tracking OpenXR"};

/// @brief Field extensionString offset 0
static constexpr ::ConstString  extensionString{u"XR_EXT_eye_gaze_interaction"};


// Methods

/// @brief Method OnInstanceCreate addr 0x2af0b24 size 0x6c virtual true final false
 bool OnInstanceCreate(uint64_t instance) ;

/// @brief Method RegisterDeviceLayout addr 0x2af0b90 size 0x15c virtual true final false
 void RegisterDeviceLayout() ;

/// @brief Method UnregisterDeviceLayout addr 0x2af0cec size 0x68 virtual true final false
 void UnregisterDeviceLayout() ;

/// @brief Method RegisterActionMapsWithRuntime addr 0x2af0d54 size 0x52c virtual true final false
 void RegisterActionMapsWithRuntime() ;

static UnityEngine::XR::OpenXR::Features::Interactions::EyeGazeInteraction New_ctor() ;

/// @brief Method .ctor addr 0x2af1280 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::XR::OpenXR::Features::Interactions
NEED_NO_BOX(UnityEngine::XR::OpenXR::Features::Interactions::EyeGazeInteraction);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::XR::OpenXR::Features::Interactions::EyeGazeInteraction, "UnityEngine.XR.OpenXR.Features.Interactions", "EyeGazeInteraction");
NEED_NO_BOX(UnityEngine::XR::OpenXR::Features::Interactions::UnityEngine__XR__OpenXR__Features__Interactions__EyeGazeInteraction__EyeGazeDevice);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::XR::OpenXR::Features::Interactions::UnityEngine__XR__OpenXR__Features__Interactions__EyeGazeInteraction__EyeGazeDevice, "UnityEngine.XR.OpenXR.Features.Interactions", "EyeGazeInteraction/EyeGazeDevice");
