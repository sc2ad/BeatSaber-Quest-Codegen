#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "OVR/OpenVR/zzzz__VREvent_Data_t_def.hpp"
#include "OVR/OpenVR/zzzz__VREvent_Chaperone_t_def.hpp"
#include "OVR/OpenVR/zzzz__VREvent_Property_t_def.hpp"
#include "OVR/OpenVR/zzzz__VREvent_Overlay_t_def.hpp"
#include "OVR/OpenVR/zzzz__VREvent_Ipd_t_def.hpp"
#include "OVR/OpenVR/zzzz__VREvent_Notification_t_def.hpp"
#include "OVR/OpenVR/zzzz__VREvent_Reserved_t_def.hpp"
#include "OVR/OpenVR/zzzz__VREvent_PerformanceTest_t_def.hpp"
#include "OVR/OpenVR/zzzz__VREvent_WebConsole_t_def.hpp"
#include "OVR/OpenVR/zzzz__VREvent_ApplicationLaunch_t_def.hpp"
#include "OVR/OpenVR/zzzz__VREvent_Scroll_t_def.hpp"
#include "OVR/OpenVR/zzzz__VREvent_InputBindingLoad_t_def.hpp"
#include "OVR/OpenVR/zzzz__VREvent_Screenshot_t_def.hpp"
#include "OVR/OpenVR/zzzz__VREvent_SpatialAnchor_t_def.hpp"
#include "OVR/OpenVR/zzzz__VREvent_Process_t_def.hpp"
#include "OVR/OpenVR/zzzz__VREvent_HapticVibration_t_def.hpp"
#include "OVR/OpenVR/zzzz__VREvent_Keyboard_t_def.hpp"
#include "OVR/OpenVR/zzzz__VREvent_MessageOverlay_t_def.hpp"
#include "OVR/OpenVR/zzzz__VREvent_Controller_t_def.hpp"
#include "OVR/OpenVR/zzzz__VREvent_TouchPadMove_t_def.hpp"
#include "OVR/OpenVR/zzzz__VREvent_Status_t_def.hpp"
#include "OVR/OpenVR/zzzz__VREvent_EditingCameraSurface_t_def.hpp"
#include "OVR/OpenVR/zzzz__VREvent_SeatedZeroPoseReset_t_def.hpp"
#include "OVR/OpenVR/zzzz__VREvent_Mouse_t_def.hpp"
#include "OVR/OpenVR/zzzz__VREvent_DualAnalog_t_def.hpp"
#include "OVR/OpenVR/zzzz__VREvent_ScreenshotProgress_t_def.hpp"
// Ctor Parameters [CppParam { name: "reserved", ty: "OVR::OpenVR::VREvent_Reserved_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "controller", ty: "OVR::OpenVR::VREvent_Controller_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "mouse", ty: "OVR::OpenVR::VREvent_Mouse_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "scroll", ty: "OVR::OpenVR::VREvent_Scroll_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "process", ty: "OVR::OpenVR::VREvent_Process_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "notification", ty: "OVR::OpenVR::VREvent_Notification_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "overlay", ty: "OVR::OpenVR::VREvent_Overlay_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "status", ty: "OVR::OpenVR::VREvent_Status_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "ipd", ty: "OVR::OpenVR::VREvent_Ipd_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "chaperone", ty: "OVR::OpenVR::VREvent_Chaperone_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "performanceTest", ty: "OVR::OpenVR::VREvent_PerformanceTest_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "touchPadMove", ty: "OVR::OpenVR::VREvent_TouchPadMove_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "seatedZeroPoseReset", ty: "OVR::OpenVR::VREvent_SeatedZeroPoseReset_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "screenshot", ty: "OVR::OpenVR::VREvent_Screenshot_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "screenshotProgress", ty: "OVR::OpenVR::VREvent_ScreenshotProgress_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "applicationLaunch", ty: "OVR::OpenVR::VREvent_ApplicationLaunch_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "cameraSurface", ty: "OVR::OpenVR::VREvent_EditingCameraSurface_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "messageOverlay", ty: "OVR::OpenVR::VREvent_MessageOverlay_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "property", ty: "OVR::OpenVR::VREvent_Property_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "dualAnalog", ty: "OVR::OpenVR::VREvent_DualAnalog_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "hapticVibration", ty: "OVR::OpenVR::VREvent_HapticVibration_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "webConsole", ty: "OVR::OpenVR::VREvent_WebConsole_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "inputBinding", ty: "OVR::OpenVR::VREvent_InputBindingLoad_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "spatialAnchor", ty: "OVR::OpenVR::VREvent_SpatialAnchor_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "keyboard", ty: "OVR::OpenVR::VREvent_Keyboard_t", modifiers: "", def_value: Some("{}") }]
constexpr OVR::OpenVR::VREvent_Data_t::VREvent_Data_t(OVR::OpenVR::VREvent_Reserved_t reserved, OVR::OpenVR::VREvent_Controller_t controller, OVR::OpenVR::VREvent_Mouse_t mouse, OVR::OpenVR::VREvent_Scroll_t scroll, OVR::OpenVR::VREvent_Process_t process, OVR::OpenVR::VREvent_Notification_t notification, OVR::OpenVR::VREvent_Overlay_t overlay, OVR::OpenVR::VREvent_Status_t status, OVR::OpenVR::VREvent_Ipd_t ipd, OVR::OpenVR::VREvent_Chaperone_t chaperone, OVR::OpenVR::VREvent_PerformanceTest_t performanceTest, OVR::OpenVR::VREvent_TouchPadMove_t touchPadMove, OVR::OpenVR::VREvent_SeatedZeroPoseReset_t seatedZeroPoseReset, OVR::OpenVR::VREvent_Screenshot_t screenshot, OVR::OpenVR::VREvent_ScreenshotProgress_t screenshotProgress, OVR::OpenVR::VREvent_ApplicationLaunch_t applicationLaunch, OVR::OpenVR::VREvent_EditingCameraSurface_t cameraSurface, OVR::OpenVR::VREvent_MessageOverlay_t messageOverlay, OVR::OpenVR::VREvent_Property_t property, OVR::OpenVR::VREvent_DualAnalog_t dualAnalog, OVR::OpenVR::VREvent_HapticVibration_t hapticVibration, OVR::OpenVR::VREvent_WebConsole_t webConsole, OVR::OpenVR::VREvent_InputBindingLoad_t inputBinding, OVR::OpenVR::VREvent_SpatialAnchor_t spatialAnchor, OVR::OpenVR::VREvent_Keyboard_t keyboard) noexcept : ::bs_hook::ValueTypeWrapper() {this->reserved = reserved;
this->controller = controller;
this->mouse = mouse;
this->scroll = scroll;
this->process = process;
this->notification = notification;
this->overlay = overlay;
this->status = status;
this->ipd = ipd;
this->chaperone = chaperone;
this->performanceTest = performanceTest;
this->touchPadMove = touchPadMove;
this->seatedZeroPoseReset = seatedZeroPoseReset;
this->screenshot = screenshot;
this->screenshotProgress = screenshotProgress;
this->applicationLaunch = applicationLaunch;
this->cameraSurface = cameraSurface;
this->messageOverlay = messageOverlay;
this->property = property;
this->dualAnalog = dualAnalog;
this->hapticVibration = hapticVibration;
this->webConsole = webConsole;
this->inputBinding = inputBinding;
this->spatialAnchor = spatialAnchor;
this->keyboard = keyboard;
}
constexpr void OVR::OpenVR::VREvent_Data_t::__set_reserved(OVR::OpenVR::VREvent_Reserved_t value)  {
::cordl_internals::setInstanceField<OVR::OpenVR::VREvent_Reserved_t, 0x0>(this->__instance, std::forward<OVR::OpenVR::VREvent_Reserved_t>(value));
}
constexpr OVR::OpenVR::VREvent_Reserved_t OVR::OpenVR::VREvent_Data_t::__get_reserved() const {
return ::cordl_internals::getInstanceField<OVR::OpenVR::VREvent_Reserved_t, 0x0>(this->__instance);
}
constexpr void OVR::OpenVR::VREvent_Data_t::__set_controller(OVR::OpenVR::VREvent_Controller_t value)  {
::cordl_internals::setInstanceField<OVR::OpenVR::VREvent_Controller_t, 0x0>(this->__instance, std::forward<OVR::OpenVR::VREvent_Controller_t>(value));
}
constexpr OVR::OpenVR::VREvent_Controller_t OVR::OpenVR::VREvent_Data_t::__get_controller() const {
return ::cordl_internals::getInstanceField<OVR::OpenVR::VREvent_Controller_t, 0x0>(this->__instance);
}
constexpr void OVR::OpenVR::VREvent_Data_t::__set_mouse(OVR::OpenVR::VREvent_Mouse_t value)  {
::cordl_internals::setInstanceField<OVR::OpenVR::VREvent_Mouse_t, 0x0>(this->__instance, std::forward<OVR::OpenVR::VREvent_Mouse_t>(value));
}
constexpr OVR::OpenVR::VREvent_Mouse_t OVR::OpenVR::VREvent_Data_t::__get_mouse() const {
return ::cordl_internals::getInstanceField<OVR::OpenVR::VREvent_Mouse_t, 0x0>(this->__instance);
}
constexpr void OVR::OpenVR::VREvent_Data_t::__set_scroll(OVR::OpenVR::VREvent_Scroll_t value)  {
::cordl_internals::setInstanceField<OVR::OpenVR::VREvent_Scroll_t, 0x0>(this->__instance, std::forward<OVR::OpenVR::VREvent_Scroll_t>(value));
}
constexpr OVR::OpenVR::VREvent_Scroll_t OVR::OpenVR::VREvent_Data_t::__get_scroll() const {
return ::cordl_internals::getInstanceField<OVR::OpenVR::VREvent_Scroll_t, 0x0>(this->__instance);
}
constexpr void OVR::OpenVR::VREvent_Data_t::__set_process(OVR::OpenVR::VREvent_Process_t value)  {
::cordl_internals::setInstanceField<OVR::OpenVR::VREvent_Process_t, 0x0>(this->__instance, std::forward<OVR::OpenVR::VREvent_Process_t>(value));
}
constexpr OVR::OpenVR::VREvent_Process_t OVR::OpenVR::VREvent_Data_t::__get_process() const {
return ::cordl_internals::getInstanceField<OVR::OpenVR::VREvent_Process_t, 0x0>(this->__instance);
}
constexpr void OVR::OpenVR::VREvent_Data_t::__set_notification(OVR::OpenVR::VREvent_Notification_t value)  {
::cordl_internals::setInstanceField<OVR::OpenVR::VREvent_Notification_t, 0x0>(this->__instance, std::forward<OVR::OpenVR::VREvent_Notification_t>(value));
}
constexpr OVR::OpenVR::VREvent_Notification_t OVR::OpenVR::VREvent_Data_t::__get_notification() const {
return ::cordl_internals::getInstanceField<OVR::OpenVR::VREvent_Notification_t, 0x0>(this->__instance);
}
constexpr void OVR::OpenVR::VREvent_Data_t::__set_overlay(OVR::OpenVR::VREvent_Overlay_t value)  {
::cordl_internals::setInstanceField<OVR::OpenVR::VREvent_Overlay_t, 0x0>(this->__instance, std::forward<OVR::OpenVR::VREvent_Overlay_t>(value));
}
constexpr OVR::OpenVR::VREvent_Overlay_t OVR::OpenVR::VREvent_Data_t::__get_overlay() const {
return ::cordl_internals::getInstanceField<OVR::OpenVR::VREvent_Overlay_t, 0x0>(this->__instance);
}
constexpr void OVR::OpenVR::VREvent_Data_t::__set_status(OVR::OpenVR::VREvent_Status_t value)  {
::cordl_internals::setInstanceField<OVR::OpenVR::VREvent_Status_t, 0x0>(this->__instance, std::forward<OVR::OpenVR::VREvent_Status_t>(value));
}
constexpr OVR::OpenVR::VREvent_Status_t OVR::OpenVR::VREvent_Data_t::__get_status() const {
return ::cordl_internals::getInstanceField<OVR::OpenVR::VREvent_Status_t, 0x0>(this->__instance);
}
constexpr void OVR::OpenVR::VREvent_Data_t::__set_ipd(OVR::OpenVR::VREvent_Ipd_t value)  {
::cordl_internals::setInstanceField<OVR::OpenVR::VREvent_Ipd_t, 0x0>(this->__instance, std::forward<OVR::OpenVR::VREvent_Ipd_t>(value));
}
constexpr OVR::OpenVR::VREvent_Ipd_t OVR::OpenVR::VREvent_Data_t::__get_ipd() const {
return ::cordl_internals::getInstanceField<OVR::OpenVR::VREvent_Ipd_t, 0x0>(this->__instance);
}
constexpr void OVR::OpenVR::VREvent_Data_t::__set_chaperone(OVR::OpenVR::VREvent_Chaperone_t value)  {
::cordl_internals::setInstanceField<OVR::OpenVR::VREvent_Chaperone_t, 0x0>(this->__instance, std::forward<OVR::OpenVR::VREvent_Chaperone_t>(value));
}
constexpr OVR::OpenVR::VREvent_Chaperone_t OVR::OpenVR::VREvent_Data_t::__get_chaperone() const {
return ::cordl_internals::getInstanceField<OVR::OpenVR::VREvent_Chaperone_t, 0x0>(this->__instance);
}
constexpr void OVR::OpenVR::VREvent_Data_t::__set_performanceTest(OVR::OpenVR::VREvent_PerformanceTest_t value)  {
::cordl_internals::setInstanceField<OVR::OpenVR::VREvent_PerformanceTest_t, 0x0>(this->__instance, std::forward<OVR::OpenVR::VREvent_PerformanceTest_t>(value));
}
constexpr OVR::OpenVR::VREvent_PerformanceTest_t OVR::OpenVR::VREvent_Data_t::__get_performanceTest() const {
return ::cordl_internals::getInstanceField<OVR::OpenVR::VREvent_PerformanceTest_t, 0x0>(this->__instance);
}
constexpr void OVR::OpenVR::VREvent_Data_t::__set_touchPadMove(OVR::OpenVR::VREvent_TouchPadMove_t value)  {
::cordl_internals::setInstanceField<OVR::OpenVR::VREvent_TouchPadMove_t, 0x0>(this->__instance, std::forward<OVR::OpenVR::VREvent_TouchPadMove_t>(value));
}
constexpr OVR::OpenVR::VREvent_TouchPadMove_t OVR::OpenVR::VREvent_Data_t::__get_touchPadMove() const {
return ::cordl_internals::getInstanceField<OVR::OpenVR::VREvent_TouchPadMove_t, 0x0>(this->__instance);
}
constexpr void OVR::OpenVR::VREvent_Data_t::__set_seatedZeroPoseReset(OVR::OpenVR::VREvent_SeatedZeroPoseReset_t value)  {
::cordl_internals::setInstanceField<OVR::OpenVR::VREvent_SeatedZeroPoseReset_t, 0x0>(this->__instance, std::forward<OVR::OpenVR::VREvent_SeatedZeroPoseReset_t>(value));
}
constexpr OVR::OpenVR::VREvent_SeatedZeroPoseReset_t OVR::OpenVR::VREvent_Data_t::__get_seatedZeroPoseReset() const {
return ::cordl_internals::getInstanceField<OVR::OpenVR::VREvent_SeatedZeroPoseReset_t, 0x0>(this->__instance);
}
constexpr void OVR::OpenVR::VREvent_Data_t::__set_screenshot(OVR::OpenVR::VREvent_Screenshot_t value)  {
::cordl_internals::setInstanceField<OVR::OpenVR::VREvent_Screenshot_t, 0x0>(this->__instance, std::forward<OVR::OpenVR::VREvent_Screenshot_t>(value));
}
constexpr OVR::OpenVR::VREvent_Screenshot_t OVR::OpenVR::VREvent_Data_t::__get_screenshot() const {
return ::cordl_internals::getInstanceField<OVR::OpenVR::VREvent_Screenshot_t, 0x0>(this->__instance);
}
constexpr void OVR::OpenVR::VREvent_Data_t::__set_screenshotProgress(OVR::OpenVR::VREvent_ScreenshotProgress_t value)  {
::cordl_internals::setInstanceField<OVR::OpenVR::VREvent_ScreenshotProgress_t, 0x0>(this->__instance, std::forward<OVR::OpenVR::VREvent_ScreenshotProgress_t>(value));
}
constexpr OVR::OpenVR::VREvent_ScreenshotProgress_t OVR::OpenVR::VREvent_Data_t::__get_screenshotProgress() const {
return ::cordl_internals::getInstanceField<OVR::OpenVR::VREvent_ScreenshotProgress_t, 0x0>(this->__instance);
}
constexpr void OVR::OpenVR::VREvent_Data_t::__set_applicationLaunch(OVR::OpenVR::VREvent_ApplicationLaunch_t value)  {
::cordl_internals::setInstanceField<OVR::OpenVR::VREvent_ApplicationLaunch_t, 0x0>(this->__instance, std::forward<OVR::OpenVR::VREvent_ApplicationLaunch_t>(value));
}
constexpr OVR::OpenVR::VREvent_ApplicationLaunch_t OVR::OpenVR::VREvent_Data_t::__get_applicationLaunch() const {
return ::cordl_internals::getInstanceField<OVR::OpenVR::VREvent_ApplicationLaunch_t, 0x0>(this->__instance);
}
constexpr void OVR::OpenVR::VREvent_Data_t::__set_cameraSurface(OVR::OpenVR::VREvent_EditingCameraSurface_t value)  {
::cordl_internals::setInstanceField<OVR::OpenVR::VREvent_EditingCameraSurface_t, 0x0>(this->__instance, std::forward<OVR::OpenVR::VREvent_EditingCameraSurface_t>(value));
}
constexpr OVR::OpenVR::VREvent_EditingCameraSurface_t OVR::OpenVR::VREvent_Data_t::__get_cameraSurface() const {
return ::cordl_internals::getInstanceField<OVR::OpenVR::VREvent_EditingCameraSurface_t, 0x0>(this->__instance);
}
constexpr void OVR::OpenVR::VREvent_Data_t::__set_messageOverlay(OVR::OpenVR::VREvent_MessageOverlay_t value)  {
::cordl_internals::setInstanceField<OVR::OpenVR::VREvent_MessageOverlay_t, 0x0>(this->__instance, std::forward<OVR::OpenVR::VREvent_MessageOverlay_t>(value));
}
constexpr OVR::OpenVR::VREvent_MessageOverlay_t OVR::OpenVR::VREvent_Data_t::__get_messageOverlay() const {
return ::cordl_internals::getInstanceField<OVR::OpenVR::VREvent_MessageOverlay_t, 0x0>(this->__instance);
}
constexpr void OVR::OpenVR::VREvent_Data_t::__set_property(OVR::OpenVR::VREvent_Property_t value)  {
::cordl_internals::setInstanceField<OVR::OpenVR::VREvent_Property_t, 0x0>(this->__instance, std::forward<OVR::OpenVR::VREvent_Property_t>(value));
}
constexpr OVR::OpenVR::VREvent_Property_t OVR::OpenVR::VREvent_Data_t::__get_property() const {
return ::cordl_internals::getInstanceField<OVR::OpenVR::VREvent_Property_t, 0x0>(this->__instance);
}
constexpr void OVR::OpenVR::VREvent_Data_t::__set_dualAnalog(OVR::OpenVR::VREvent_DualAnalog_t value)  {
::cordl_internals::setInstanceField<OVR::OpenVR::VREvent_DualAnalog_t, 0x0>(this->__instance, std::forward<OVR::OpenVR::VREvent_DualAnalog_t>(value));
}
constexpr OVR::OpenVR::VREvent_DualAnalog_t OVR::OpenVR::VREvent_Data_t::__get_dualAnalog() const {
return ::cordl_internals::getInstanceField<OVR::OpenVR::VREvent_DualAnalog_t, 0x0>(this->__instance);
}
constexpr void OVR::OpenVR::VREvent_Data_t::__set_hapticVibration(OVR::OpenVR::VREvent_HapticVibration_t value)  {
::cordl_internals::setInstanceField<OVR::OpenVR::VREvent_HapticVibration_t, 0x0>(this->__instance, std::forward<OVR::OpenVR::VREvent_HapticVibration_t>(value));
}
constexpr OVR::OpenVR::VREvent_HapticVibration_t OVR::OpenVR::VREvent_Data_t::__get_hapticVibration() const {
return ::cordl_internals::getInstanceField<OVR::OpenVR::VREvent_HapticVibration_t, 0x0>(this->__instance);
}
constexpr void OVR::OpenVR::VREvent_Data_t::__set_webConsole(OVR::OpenVR::VREvent_WebConsole_t value)  {
::cordl_internals::setInstanceField<OVR::OpenVR::VREvent_WebConsole_t, 0x0>(this->__instance, std::forward<OVR::OpenVR::VREvent_WebConsole_t>(value));
}
constexpr OVR::OpenVR::VREvent_WebConsole_t OVR::OpenVR::VREvent_Data_t::__get_webConsole() const {
return ::cordl_internals::getInstanceField<OVR::OpenVR::VREvent_WebConsole_t, 0x0>(this->__instance);
}
constexpr void OVR::OpenVR::VREvent_Data_t::__set_inputBinding(OVR::OpenVR::VREvent_InputBindingLoad_t value)  {
::cordl_internals::setInstanceField<OVR::OpenVR::VREvent_InputBindingLoad_t, 0x0>(this->__instance, std::forward<OVR::OpenVR::VREvent_InputBindingLoad_t>(value));
}
constexpr OVR::OpenVR::VREvent_InputBindingLoad_t OVR::OpenVR::VREvent_Data_t::__get_inputBinding() const {
return ::cordl_internals::getInstanceField<OVR::OpenVR::VREvent_InputBindingLoad_t, 0x0>(this->__instance);
}
constexpr void OVR::OpenVR::VREvent_Data_t::__set_spatialAnchor(OVR::OpenVR::VREvent_SpatialAnchor_t value)  {
::cordl_internals::setInstanceField<OVR::OpenVR::VREvent_SpatialAnchor_t, 0x0>(this->__instance, std::forward<OVR::OpenVR::VREvent_SpatialAnchor_t>(value));
}
constexpr OVR::OpenVR::VREvent_SpatialAnchor_t OVR::OpenVR::VREvent_Data_t::__get_spatialAnchor() const {
return ::cordl_internals::getInstanceField<OVR::OpenVR::VREvent_SpatialAnchor_t, 0x0>(this->__instance);
}
constexpr void OVR::OpenVR::VREvent_Data_t::__set_keyboard(OVR::OpenVR::VREvent_Keyboard_t value)  {
::cordl_internals::setInstanceField<OVR::OpenVR::VREvent_Keyboard_t, 0x0>(this->__instance, std::forward<OVR::OpenVR::VREvent_Keyboard_t>(value));
}
constexpr OVR::OpenVR::VREvent_Keyboard_t OVR::OpenVR::VREvent_Data_t::__get_keyboard() const {
return ::cordl_internals::getInstanceField<OVR::OpenVR::VREvent_Keyboard_t, 0x0>(this->__instance);
}
