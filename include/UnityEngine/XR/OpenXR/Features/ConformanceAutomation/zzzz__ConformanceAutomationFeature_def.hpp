#pragma once
#include "../../../../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/XR/OpenXR/Features/zzzz__OpenXRFeature_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
namespace UnityEngine::XR::OpenXR::NativeTypes {
struct XrVector2f;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine::XR::OpenXR::NativeTypes {
struct XrPosef;
}
namespace UnityEngine::XR::OpenXR::NativeTypes {
struct XrVector3f;
}
// Forward declare root types
namespace UnityEngine::XR::OpenXR::Features::ConformanceAutomation {
class ConformanceAutomationFeature;
}
// Type: UnityEngine.XR.OpenXR.Features.ConformanceAutomation::ConformanceAutomationFeature
namespace UnityEngine::XR::OpenXR::Features::ConformanceAutomation {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14201))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16049))
// CS Name: UnityEngine.XR.OpenXR.Features.ConformanceAutomation.ConformanceAutomationFeature
class CORDL_TYPE ConformanceAutomationFeature : public UnityEngine::XR::OpenXR::Features::OpenXRFeature {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~ConformanceAutomationFeature() = default;

// Ctor Parameters [CppParam { name: "", ty: "ConformanceAutomationFeature", modifiers: " const&", def_value: None }]
constexpr ConformanceAutomationFeature(ConformanceAutomationFeature const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ConformanceAutomationFeature", modifiers: "&&", def_value: None }]
constexpr ConformanceAutomationFeature(ConformanceAutomationFeature&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ConformanceAutomationFeature(void* ptr) noexcept : UnityEngine::XR::OpenXR::Features::OpenXRFeature(ptr) {
}


  constexpr ConformanceAutomationFeature& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ConformanceAutomationFeature& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ConformanceAutomationFeature& operator=(ConformanceAutomationFeature&& o) noexcept = default;
  constexpr ConformanceAutomationFeature& operator=(ConformanceAutomationFeature const& o) noexcept = default;
                


// Fields

/// @brief Field featureId offset 0
static constexpr ::ConstString  featureId{u"com.unity.openxr.feature.conformance"};

static uint64_t __declspec(property(get=__get_xrInstance, put=__set_xrInstance))  xrInstance;

static void __set_xrInstance(uint64_t value) ;

static uint64_t __get_xrInstance() ;

static uint64_t __declspec(property(get=__get_xrSession, put=__set_xrSession))  xrSession;

static void __set_xrSession(uint64_t value) ;

static uint64_t __get_xrSession() ;

/// @brief Field ExtLib offset 0
static constexpr ::ConstString  ExtLib{u"ConformanceAutomationExt"};


// Methods

/// @brief Method OnInstanceCreate addr 0x2b04400 size 0xd8 virtual true final false
 bool OnInstanceCreate(uint64_t instance) ;

/// @brief Method OnInstanceDestroy addr 0x2b0455c size 0x68 virtual true final false
 void OnInstanceDestroy(uint64_t xrInstance) ;

/// @brief Method OnSessionCreate addr 0x2b045c4 size 0x64 virtual true final false
 void OnSessionCreate(uint64_t xrSessionId) ;

/// @brief Method OnSessionDestroy addr 0x2b04628 size 0x68 virtual true final false
 void OnSessionDestroy(uint64_t xrSessionId) ;

/// @brief Method ConformanceAutomationSetActive addr 0x2b04690 size 0x88 virtual false final false
static bool ConformanceAutomationSetActive(::StringW interactionProfile, ::StringW topLevelPath, bool isActive) ;

/// @brief Method ConformanceAutomationSetBool addr 0x2b047bc size 0x88 virtual false final false
static bool ConformanceAutomationSetBool(::StringW topLevelPath, ::StringW inputSourcePath, bool state) ;

/// @brief Method ConformanceAutomationSetFloat addr 0x2b048e8 size 0x90 virtual false final false
static bool ConformanceAutomationSetFloat(::StringW topLevelPath, ::StringW inputSourcePath, float_t state) ;

/// @brief Method ConformanceAutomationSetVec2 addr 0x2b04a24 size 0xb8 virtual false final false
static bool ConformanceAutomationSetVec2(::StringW topLevelPath, ::StringW inputSourcePath, UnityEngine::Vector2 state) ;

/// @brief Method ConformanceAutomationSetPose addr 0x2b04b90 size 0x128 virtual false final false
static bool ConformanceAutomationSetPose(::StringW topLevelPath, ::StringW inputSourcePath, UnityEngine::Vector3 position, UnityEngine::Quaternion orientation) ;

/// @brief Method ConformanceAutomationSetVelocity addr 0x2b04d7c size 0x12c virtual false final false
static bool ConformanceAutomationSetVelocity(::StringW topLevelPath, ::StringW inputSourcePath, bool linearValid, UnityEngine::Vector3 linear, bool angularValid, UnityEngine::Vector3 angular) ;

/// @brief Method initialize addr 0x2b044d8 size 0x84 virtual false final false
static void initialize(::cordl_internals::intptr_t xrGetInstanceProcAddr, uint64_t xrInstance) ;

/// @brief Method xrSetInputDeviceActiveEXT addr 0x2b04718 size 0xa4 virtual false final false
static bool xrSetInputDeviceActiveEXT(uint64_t xrSession, uint64_t interactionProfile, uint64_t topLevelPath, bool isActive) ;

/// @brief Method xrSetInputDeviceStateBoolEXT addr 0x2b04844 size 0xa4 virtual false final false
static bool xrSetInputDeviceStateBoolEXT(uint64_t xrSession, uint64_t topLevelPath, uint64_t inputSourcePath, bool state) ;

/// @brief Method xrSetInputDeviceStateFloatEXT addr 0x2b04978 size 0xac virtual false final false
static bool xrSetInputDeviceStateFloatEXT(uint64_t xrSession, uint64_t topLevelPath, uint64_t inputSourcePath, float_t state) ;

/// @brief Method xrSetInputDeviceStateVector2fEXT addr 0x2b04adc size 0xb4 virtual false final false
static bool xrSetInputDeviceStateVector2fEXT(uint64_t xrSession, uint64_t topLevelPath, uint64_t inputSourcePath, UnityEngine::XR::OpenXR::NativeTypes::XrVector2f state) ;

/// @brief Method xrSetInputDeviceLocationEXT addr 0x2b04cb8 size 0xc4 virtual false final false
static bool xrSetInputDeviceLocationEXT(uint64_t xrSession, uint64_t topLevelPath, uint64_t inputSourcePath, uint64_t space, UnityEngine::XR::OpenXR::NativeTypes::XrPosef pose) ;

/// @brief Method xrSetInputDeviceVelocityUNITY addr 0x2b04ea8 size 0xfc virtual false final false
static bool xrSetInputDeviceVelocityUNITY(uint64_t xrSession, uint64_t topLevelPath, uint64_t inputSourcePath, bool linearValid, UnityEngine::XR::OpenXR::NativeTypes::XrVector3f linear, bool angularValid, UnityEngine::XR::OpenXR::NativeTypes::XrVector3f angular) ;

static UnityEngine::XR::OpenXR::Features::ConformanceAutomation::ConformanceAutomationFeature New_ctor() ;

/// @brief Method .ctor addr 0x2b04fa4 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::XR::OpenXR::Features::ConformanceAutomation
NEED_NO_BOX(UnityEngine::XR::OpenXR::Features::ConformanceAutomation::ConformanceAutomationFeature);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::XR::OpenXR::Features::ConformanceAutomation::ConformanceAutomationFeature, "UnityEngine.XR.OpenXR.Features.ConformanceAutomation", "ConformanceAutomationFeature");
