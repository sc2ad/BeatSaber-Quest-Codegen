#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace UnityEngine::XR {
struct TrackingSpaceType;
}
namespace UnityEngine {
class Camera;
}
namespace System {
template<typename T>
class Action_1;
}
// Forward declare root types
namespace UnityEngine::XR {
class XRDevice;
}
// Type: UnityEngine.XR::XRDevice
namespace UnityEngine::XR {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15970))
// CS Name: UnityEngine.XR.XRDevice
class CORDL_TYPE XRDevice : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~XRDevice() = default;

// Ctor Parameters [CppParam { name: "", ty: "XRDevice", modifiers: " const&", def_value: None }]
constexpr XRDevice(XRDevice const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "XRDevice", modifiers: "&&", def_value: None }]
constexpr XRDevice(XRDevice&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit XRDevice(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr XRDevice& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr XRDevice& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr XRDevice& operator=(XRDevice&& o) noexcept = default;
  constexpr XRDevice& operator=(XRDevice const& o) noexcept = default;
                


// Fields

static System::Action_1<::StringW> __declspec(property(get=__get_deviceLoaded, put=__set_deviceLoaded))  deviceLoaded;

static void __set_deviceLoaded(System::Action_1<::StringW> value) ;

static System::Action_1<::StringW> __get_deviceLoaded() ;


// Methods

/// @brief Method SetTrackingSpaceType addr 0x2d389fc size 0x3c virtual false final false
static bool SetTrackingSpaceType(UnityEngine::XR::TrackingSpaceType trackingSpaceType) ;

/// @brief Method DisableAutoXRCameraTracking addr 0x2d38a38 size 0x44 virtual false final false
static void DisableAutoXRCameraTracking(UnityEngine::Camera camera, bool disabled) ;

/// @brief Method InvokeDeviceLoaded addr 0x2d38a7c size 0x6c virtual false final false
static void InvokeDeviceLoaded(::StringW loadedDeviceName) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::XR
NEED_NO_BOX(UnityEngine::XR::XRDevice);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::XR::XRDevice, "UnityEngine.XR", "XRDevice");
