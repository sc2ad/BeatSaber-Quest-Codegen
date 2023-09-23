#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
namespace OVR::OpenVR {
struct VREvent_PerformanceTest_t;
}
namespace OVR::OpenVR {
struct VREvent_Property_t;
}
namespace OVR::OpenVR {
struct VREvent_MessageOverlay_t;
}
namespace OVR::OpenVR {
struct VREvent_DualAnalog_t;
}
namespace OVR::OpenVR {
struct VREvent_Reserved_t;
}
namespace OVR::OpenVR {
struct VREvent_EditingCameraSurface_t;
}
namespace OVR::OpenVR {
struct VREvent_InputBindingLoad_t;
}
namespace OVR::OpenVR {
struct VREvent_Overlay_t;
}
namespace OVR::OpenVR {
struct VREvent_WebConsole_t;
}
namespace OVR::OpenVR {
struct VREvent_Process_t;
}
namespace OVR::OpenVR {
struct VREvent_ScreenshotProgress_t;
}
namespace OVR::OpenVR {
struct VREvent_Scroll_t;
}
namespace OVR::OpenVR {
struct VREvent_ApplicationLaunch_t;
}
namespace OVR::OpenVR {
struct VREvent_Notification_t;
}
namespace OVR::OpenVR {
struct VREvent_Status_t;
}
namespace OVR::OpenVR {
struct VREvent_SpatialAnchor_t;
}
namespace OVR::OpenVR {
struct VREvent_Controller_t;
}
namespace OVR::OpenVR {
struct VREvent_SeatedZeroPoseReset_t;
}
namespace OVR::OpenVR {
struct VREvent_TouchPadMove_t;
}
namespace OVR::OpenVR {
struct VREvent_Ipd_t;
}
namespace OVR::OpenVR {
struct VREvent_HapticVibration_t;
}
namespace OVR::OpenVR {
struct VREvent_Keyboard_t;
}
namespace OVR::OpenVR {
struct VREvent_Chaperone_t;
}
namespace OVR::OpenVR {
struct VREvent_Screenshot_t;
}
namespace OVR::OpenVR {
struct VREvent_Mouse_t;
}
// Forward declare root types
namespace OVR::OpenVR {
struct VREvent_Data_t;
}
// Type: OVR.OpenVR::VREvent_Data_t
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9425))
// CS Name: OVR.OpenVR.VREvent_Data_t
struct CORDL_TYPE VREvent_Data_t : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "reserved", ty: "OVR::OpenVR::VREvent_Reserved_t", modifiers: "", def_value: None }, CppParam { name: "controller", ty: "OVR::OpenVR::VREvent_Controller_t", modifiers: "", def_value: None }, CppParam { name: "mouse", ty: "OVR::OpenVR::VREvent_Mouse_t", modifiers: "", def_value: None }, CppParam { name: "scroll", ty: "OVR::OpenVR::VREvent_Scroll_t", modifiers: "", def_value: None }, CppParam { name: "process", ty: "OVR::OpenVR::VREvent_Process_t", modifiers: "", def_value: None }, CppParam { name: "notification", ty: "OVR::OpenVR::VREvent_Notification_t", modifiers: "", def_value: None }, CppParam { name: "overlay", ty: "OVR::OpenVR::VREvent_Overlay_t", modifiers: "", def_value: None }, CppParam { name: "status", ty: "OVR::OpenVR::VREvent_Status_t", modifiers: "", def_value: None }, CppParam { name: "ipd", ty: "OVR::OpenVR::VREvent_Ipd_t", modifiers: "", def_value: None }, CppParam { name: "chaperone", ty: "OVR::OpenVR::VREvent_Chaperone_t", modifiers: "", def_value: None }, CppParam { name: "performanceTest", ty: "OVR::OpenVR::VREvent_PerformanceTest_t", modifiers: "", def_value: None }, CppParam { name: "touchPadMove", ty: "OVR::OpenVR::VREvent_TouchPadMove_t", modifiers: "", def_value: None }, CppParam { name: "seatedZeroPoseReset", ty: "OVR::OpenVR::VREvent_SeatedZeroPoseReset_t", modifiers: "", def_value: None }, CppParam { name: "screenshot", ty: "OVR::OpenVR::VREvent_Screenshot_t", modifiers: "", def_value: None }, CppParam { name: "screenshotProgress", ty: "OVR::OpenVR::VREvent_ScreenshotProgress_t", modifiers: "", def_value: None }, CppParam { name: "applicationLaunch", ty: "OVR::OpenVR::VREvent_ApplicationLaunch_t", modifiers: "", def_value: None }, CppParam { name: "cameraSurface", ty: "OVR::OpenVR::VREvent_EditingCameraSurface_t", modifiers: "", def_value: None }, CppParam { name: "messageOverlay", ty: "OVR::OpenVR::VREvent_MessageOverlay_t", modifiers: "", def_value: None }, CppParam { name: "property", ty: "OVR::OpenVR::VREvent_Property_t", modifiers: "", def_value: None }, CppParam { name: "dualAnalog", ty: "OVR::OpenVR::VREvent_DualAnalog_t", modifiers: "", def_value: None }, CppParam { name: "hapticVibration", ty: "OVR::OpenVR::VREvent_HapticVibration_t", modifiers: "", def_value: None }, CppParam { name: "webConsole", ty: "OVR::OpenVR::VREvent_WebConsole_t", modifiers: "", def_value: None }, CppParam { name: "inputBinding", ty: "OVR::OpenVR::VREvent_InputBindingLoad_t", modifiers: "", def_value: None }, CppParam { name: "spatialAnchor", ty: "OVR::OpenVR::VREvent_SpatialAnchor_t", modifiers: "", def_value: None }, CppParam { name: "keyboard", ty: "OVR::OpenVR::VREvent_Keyboard_t", modifiers: "", def_value: None }]
constexpr VREvent_Data_t(OVR::OpenVR::VREvent_Reserved_t reserved, OVR::OpenVR::VREvent_Controller_t controller, OVR::OpenVR::VREvent_Mouse_t mouse, OVR::OpenVR::VREvent_Scroll_t scroll, OVR::OpenVR::VREvent_Process_t process, OVR::OpenVR::VREvent_Notification_t notification, OVR::OpenVR::VREvent_Overlay_t overlay, OVR::OpenVR::VREvent_Status_t status, OVR::OpenVR::VREvent_Ipd_t ipd, OVR::OpenVR::VREvent_Chaperone_t chaperone, OVR::OpenVR::VREvent_PerformanceTest_t performanceTest, OVR::OpenVR::VREvent_TouchPadMove_t touchPadMove, OVR::OpenVR::VREvent_SeatedZeroPoseReset_t seatedZeroPoseReset, OVR::OpenVR::VREvent_Screenshot_t screenshot, OVR::OpenVR::VREvent_ScreenshotProgress_t screenshotProgress, OVR::OpenVR::VREvent_ApplicationLaunch_t applicationLaunch, OVR::OpenVR::VREvent_EditingCameraSurface_t cameraSurface, OVR::OpenVR::VREvent_MessageOverlay_t messageOverlay, OVR::OpenVR::VREvent_Property_t property, OVR::OpenVR::VREvent_DualAnalog_t dualAnalog, OVR::OpenVR::VREvent_HapticVibration_t hapticVibration, OVR::OpenVR::VREvent_WebConsole_t webConsole, OVR::OpenVR::VREvent_InputBindingLoad_t inputBinding, OVR::OpenVR::VREvent_SpatialAnchor_t spatialAnchor, OVR::OpenVR::VREvent_Keyboard_t keyboard) noexcept;


                    constexpr VREvent_Data_t(VREvent_Data_t const&) = default;
                    constexpr VREvent_Data_t(VREvent_Data_t&&) = default;
                    constexpr VREvent_Data_t& operator=(VREvent_Data_t const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr VREvent_Data_t& operator=(VREvent_Data_t&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x20};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit VREvent_Data_t(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 OVR::OpenVR::VREvent_Reserved_t __declspec(property(get=__get_reserved, put=__set_reserved))  reserved;

constexpr void __set_reserved(OVR::OpenVR::VREvent_Reserved_t value) ;

constexpr OVR::OpenVR::VREvent_Reserved_t __get_reserved() const;

 OVR::OpenVR::VREvent_Controller_t __declspec(property(get=__get_controller, put=__set_controller))  controller;

constexpr void __set_controller(OVR::OpenVR::VREvent_Controller_t value) ;

constexpr OVR::OpenVR::VREvent_Controller_t __get_controller() const;

 OVR::OpenVR::VREvent_Mouse_t __declspec(property(get=__get_mouse, put=__set_mouse))  mouse;

constexpr void __set_mouse(OVR::OpenVR::VREvent_Mouse_t value) ;

constexpr OVR::OpenVR::VREvent_Mouse_t __get_mouse() const;

 OVR::OpenVR::VREvent_Scroll_t __declspec(property(get=__get_scroll, put=__set_scroll))  scroll;

constexpr void __set_scroll(OVR::OpenVR::VREvent_Scroll_t value) ;

constexpr OVR::OpenVR::VREvent_Scroll_t __get_scroll() const;

 OVR::OpenVR::VREvent_Process_t __declspec(property(get=__get_process, put=__set_process))  process;

constexpr void __set_process(OVR::OpenVR::VREvent_Process_t value) ;

constexpr OVR::OpenVR::VREvent_Process_t __get_process() const;

 OVR::OpenVR::VREvent_Notification_t __declspec(property(get=__get_notification, put=__set_notification))  notification;

constexpr void __set_notification(OVR::OpenVR::VREvent_Notification_t value) ;

constexpr OVR::OpenVR::VREvent_Notification_t __get_notification() const;

 OVR::OpenVR::VREvent_Overlay_t __declspec(property(get=__get_overlay, put=__set_overlay))  overlay;

constexpr void __set_overlay(OVR::OpenVR::VREvent_Overlay_t value) ;

constexpr OVR::OpenVR::VREvent_Overlay_t __get_overlay() const;

 OVR::OpenVR::VREvent_Status_t __declspec(property(get=__get_status, put=__set_status))  status;

constexpr void __set_status(OVR::OpenVR::VREvent_Status_t value) ;

constexpr OVR::OpenVR::VREvent_Status_t __get_status() const;

 OVR::OpenVR::VREvent_Ipd_t __declspec(property(get=__get_ipd, put=__set_ipd))  ipd;

constexpr void __set_ipd(OVR::OpenVR::VREvent_Ipd_t value) ;

constexpr OVR::OpenVR::VREvent_Ipd_t __get_ipd() const;

 OVR::OpenVR::VREvent_Chaperone_t __declspec(property(get=__get_chaperone, put=__set_chaperone))  chaperone;

constexpr void __set_chaperone(OVR::OpenVR::VREvent_Chaperone_t value) ;

constexpr OVR::OpenVR::VREvent_Chaperone_t __get_chaperone() const;

 OVR::OpenVR::VREvent_PerformanceTest_t __declspec(property(get=__get_performanceTest, put=__set_performanceTest))  performanceTest;

constexpr void __set_performanceTest(OVR::OpenVR::VREvent_PerformanceTest_t value) ;

constexpr OVR::OpenVR::VREvent_PerformanceTest_t __get_performanceTest() const;

 OVR::OpenVR::VREvent_TouchPadMove_t __declspec(property(get=__get_touchPadMove, put=__set_touchPadMove))  touchPadMove;

constexpr void __set_touchPadMove(OVR::OpenVR::VREvent_TouchPadMove_t value) ;

constexpr OVR::OpenVR::VREvent_TouchPadMove_t __get_touchPadMove() const;

 OVR::OpenVR::VREvent_SeatedZeroPoseReset_t __declspec(property(get=__get_seatedZeroPoseReset, put=__set_seatedZeroPoseReset))  seatedZeroPoseReset;

constexpr void __set_seatedZeroPoseReset(OVR::OpenVR::VREvent_SeatedZeroPoseReset_t value) ;

constexpr OVR::OpenVR::VREvent_SeatedZeroPoseReset_t __get_seatedZeroPoseReset() const;

 OVR::OpenVR::VREvent_Screenshot_t __declspec(property(get=__get_screenshot, put=__set_screenshot))  screenshot;

constexpr void __set_screenshot(OVR::OpenVR::VREvent_Screenshot_t value) ;

constexpr OVR::OpenVR::VREvent_Screenshot_t __get_screenshot() const;

 OVR::OpenVR::VREvent_ScreenshotProgress_t __declspec(property(get=__get_screenshotProgress, put=__set_screenshotProgress))  screenshotProgress;

constexpr void __set_screenshotProgress(OVR::OpenVR::VREvent_ScreenshotProgress_t value) ;

constexpr OVR::OpenVR::VREvent_ScreenshotProgress_t __get_screenshotProgress() const;

 OVR::OpenVR::VREvent_ApplicationLaunch_t __declspec(property(get=__get_applicationLaunch, put=__set_applicationLaunch))  applicationLaunch;

constexpr void __set_applicationLaunch(OVR::OpenVR::VREvent_ApplicationLaunch_t value) ;

constexpr OVR::OpenVR::VREvent_ApplicationLaunch_t __get_applicationLaunch() const;

 OVR::OpenVR::VREvent_EditingCameraSurface_t __declspec(property(get=__get_cameraSurface, put=__set_cameraSurface))  cameraSurface;

constexpr void __set_cameraSurface(OVR::OpenVR::VREvent_EditingCameraSurface_t value) ;

constexpr OVR::OpenVR::VREvent_EditingCameraSurface_t __get_cameraSurface() const;

 OVR::OpenVR::VREvent_MessageOverlay_t __declspec(property(get=__get_messageOverlay, put=__set_messageOverlay))  messageOverlay;

constexpr void __set_messageOverlay(OVR::OpenVR::VREvent_MessageOverlay_t value) ;

constexpr OVR::OpenVR::VREvent_MessageOverlay_t __get_messageOverlay() const;

 OVR::OpenVR::VREvent_Property_t __declspec(property(get=__get_property, put=__set_property))  property;

constexpr void __set_property(OVR::OpenVR::VREvent_Property_t value) ;

constexpr OVR::OpenVR::VREvent_Property_t __get_property() const;

 OVR::OpenVR::VREvent_DualAnalog_t __declspec(property(get=__get_dualAnalog, put=__set_dualAnalog))  dualAnalog;

constexpr void __set_dualAnalog(OVR::OpenVR::VREvent_DualAnalog_t value) ;

constexpr OVR::OpenVR::VREvent_DualAnalog_t __get_dualAnalog() const;

 OVR::OpenVR::VREvent_HapticVibration_t __declspec(property(get=__get_hapticVibration, put=__set_hapticVibration))  hapticVibration;

constexpr void __set_hapticVibration(OVR::OpenVR::VREvent_HapticVibration_t value) ;

constexpr OVR::OpenVR::VREvent_HapticVibration_t __get_hapticVibration() const;

 OVR::OpenVR::VREvent_WebConsole_t __declspec(property(get=__get_webConsole, put=__set_webConsole))  webConsole;

constexpr void __set_webConsole(OVR::OpenVR::VREvent_WebConsole_t value) ;

constexpr OVR::OpenVR::VREvent_WebConsole_t __get_webConsole() const;

 OVR::OpenVR::VREvent_InputBindingLoad_t __declspec(property(get=__get_inputBinding, put=__set_inputBinding))  inputBinding;

constexpr void __set_inputBinding(OVR::OpenVR::VREvent_InputBindingLoad_t value) ;

constexpr OVR::OpenVR::VREvent_InputBindingLoad_t __get_inputBinding() const;

 OVR::OpenVR::VREvent_SpatialAnchor_t __declspec(property(get=__get_spatialAnchor, put=__set_spatialAnchor))  spatialAnchor;

constexpr void __set_spatialAnchor(OVR::OpenVR::VREvent_SpatialAnchor_t value) ;

constexpr OVR::OpenVR::VREvent_SpatialAnchor_t __get_spatialAnchor() const;

 OVR::OpenVR::VREvent_Keyboard_t __declspec(property(get=__get_keyboard, put=__set_keyboard))  keyboard;

constexpr void __set_keyboard(OVR::OpenVR::VREvent_Keyboard_t value) ;

constexpr OVR::OpenVR::VREvent_Keyboard_t __get_keyboard() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::VREvent_Data_t, "OVR.OpenVR", "VREvent_Data_t");
