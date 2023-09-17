#pragma once
#include "GlobalNamespace/zzzz__PersistentScriptableObject_impl.hpp"
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "GlobalNamespace/zzzz__MainSettingsModelSO_def.hpp"
#include "GlobalNamespace/zzzz__IntSO_def.hpp"
#include "GlobalNamespace/zzzz__FloatSO_def.hpp"
#include "GlobalNamespace/zzzz__ISaveData_def.hpp"
#include "GlobalNamespace/zzzz__Vector2IntSO_def.hpp"
#include "GlobalNamespace/zzzz__Vector3SO_def.hpp"
#include "GlobalNamespace/zzzz__StringSO_def.hpp"
#include "GlobalNamespace/zzzz__BoolSO_def.hpp"
#include "GlobalNamespace/zzzz__LanguageSO_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::____GlobalNamespace__MainSettingsModelSO__WindowMode::____GlobalNamespace__MainSettingsModelSO__WindowMode(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::GlobalNamespace::____GlobalNamespace__MainSettingsModelSO__WindowMode::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::____GlobalNamespace__MainSettingsModelSO__WindowMode::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::GlobalNamespace::____GlobalNamespace__MainSettingsModelSO__WindowMode  ::GlobalNamespace::____GlobalNamespace__MainSettingsModelSO__WindowMode::Windowed{0};
constexpr ::GlobalNamespace::____GlobalNamespace__MainSettingsModelSO__WindowMode  ::GlobalNamespace::____GlobalNamespace__MainSettingsModelSO__WindowMode::Fullscreen{1};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__MainSettingsModelSO__Config._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__MainSettingsModelSO__Config::*)()>(&::GlobalNamespace::____GlobalNamespace__MainSettingsModelSO__Config::_ctor)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x21f0700;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__MainSettingsModelSO__Config>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::GlobalNamespace::____GlobalNamespace__MainSettingsModelSO__Config::__set_version(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::GlobalNamespace::____GlobalNamespace__MainSettingsModelSO__Config::__get_version() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__MainSettingsModelSO__Config::__set_windowResolutionWidth(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::____GlobalNamespace__MainSettingsModelSO__Config::__get_windowResolutionWidth() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__MainSettingsModelSO__Config::__set_windowResolutionHeight(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::____GlobalNamespace__MainSettingsModelSO__Config::__get_windowResolutionHeight() const {
return ::cordl_internals::getInstanceField<int32_t, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__MainSettingsModelSO__Config::__set_editorResolutionWidth(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::____GlobalNamespace__MainSettingsModelSO__Config::__get_editorResolutionWidth() const {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__MainSettingsModelSO__Config::__set_editorResolutionHeight(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x24>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::____GlobalNamespace__MainSettingsModelSO__Config::__get_editorResolutionHeight() const {
return ::cordl_internals::getInstanceField<int32_t, 0x24>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__MainSettingsModelSO__Config::__set_windowMode(::GlobalNamespace::____GlobalNamespace__MainSettingsModelSO__WindowMode value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::____GlobalNamespace__MainSettingsModelSO__WindowMode, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::____GlobalNamespace__MainSettingsModelSO__WindowMode>(value));
}
constexpr ::GlobalNamespace::____GlobalNamespace__MainSettingsModelSO__WindowMode ::GlobalNamespace::____GlobalNamespace__MainSettingsModelSO__Config::__get_windowMode() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::____GlobalNamespace__MainSettingsModelSO__WindowMode, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__MainSettingsModelSO__Config::__set_vrResolutionScale(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x2c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::GlobalNamespace::____GlobalNamespace__MainSettingsModelSO__Config::__get_vrResolutionScale() const {
return ::cordl_internals::getInstanceField<float_t, 0x2c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__MainSettingsModelSO__Config::__set_menuVRResolutionScaleMultiplier(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::GlobalNamespace::____GlobalNamespace__MainSettingsModelSO__Config::__get_menuVRResolutionScaleMultiplier() const {
return ::cordl_internals::getInstanceField<float_t, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__MainSettingsModelSO__Config::__set_useFixedFoveatedRenderingDuringGameplay(bool value)  {
::cordl_internals::setInstanceField<bool, 0x34>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::GlobalNamespace::____GlobalNamespace__MainSettingsModelSO__Config::__get_useFixedFoveatedRenderingDuringGameplay() const {
return ::cordl_internals::getInstanceField<bool, 0x34>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__MainSettingsModelSO__Config::__set_antiAliasingLevel(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::____GlobalNamespace__MainSettingsModelSO__Config::__get_antiAliasingLevel() const {
return ::cordl_internals::getInstanceField<int32_t, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__MainSettingsModelSO__Config::__set_mirrorGraphicsSettings(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x3c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::____GlobalNamespace__MainSettingsModelSO__Config::__get_mirrorGraphicsSettings() const {
return ::cordl_internals::getInstanceField<int32_t, 0x3c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__MainSettingsModelSO__Config::__set_mainEffectGraphicsSettings(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::____GlobalNamespace__MainSettingsModelSO__Config::__get_mainEffectGraphicsSettings() const {
return ::cordl_internals::getInstanceField<int32_t, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__MainSettingsModelSO__Config::__set_bloomGraphicsSettings(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x44>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::____GlobalNamespace__MainSettingsModelSO__Config::__get_bloomGraphicsSettings() const {
return ::cordl_internals::getInstanceField<int32_t, 0x44>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__MainSettingsModelSO__Config::__set_smokeGraphicsSettings(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::____GlobalNamespace__MainSettingsModelSO__Config::__get_smokeGraphicsSettings() const {
return ::cordl_internals::getInstanceField<int32_t, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__MainSettingsModelSO__Config::__set_burnMarkTrailsEnabled(bool value)  {
::cordl_internals::setInstanceField<bool, 0x4c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::GlobalNamespace::____GlobalNamespace__MainSettingsModelSO__Config::__get_burnMarkTrailsEnabled() const {
return ::cordl_internals::getInstanceField<bool, 0x4c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__MainSettingsModelSO__Config::__set_screenDisplacementEffectsEnabled(bool value)  {
::cordl_internals::setInstanceField<bool, 0x4d>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::GlobalNamespace::____GlobalNamespace__MainSettingsModelSO__Config::__get_screenDisplacementEffectsEnabled() const {
return ::cordl_internals::getInstanceField<bool, 0x4d>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__MainSettingsModelSO__Config::__set_roomCenterX(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::GlobalNamespace::____GlobalNamespace__MainSettingsModelSO__Config::__get_roomCenterX() const {
return ::cordl_internals::getInstanceField<float_t, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__MainSettingsModelSO__Config::__set_roomCenterY(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x54>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::GlobalNamespace::____GlobalNamespace__MainSettingsModelSO__Config::__get_roomCenterY() const {
return ::cordl_internals::getInstanceField<float_t, 0x54>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__MainSettingsModelSO__Config::__set_roomCenterZ(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::GlobalNamespace::____GlobalNamespace__MainSettingsModelSO__Config::__get_roomCenterZ() const {
return ::cordl_internals::getInstanceField<float_t, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__MainSettingsModelSO__Config::__set_roomRotation(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x5c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::GlobalNamespace::____GlobalNamespace__MainSettingsModelSO__Config::__get_roomRotation() const {
return ::cordl_internals::getInstanceField<float_t, 0x5c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__MainSettingsModelSO__Config::__set_controllerPositionX(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x60>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::GlobalNamespace::____GlobalNamespace__MainSettingsModelSO__Config::__get_controllerPositionX() const {
return ::cordl_internals::getInstanceField<float_t, 0x60>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__MainSettingsModelSO__Config::__set_controllerPositionY(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x64>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::GlobalNamespace::____GlobalNamespace__MainSettingsModelSO__Config::__get_controllerPositionY() const {
return ::cordl_internals::getInstanceField<float_t, 0x64>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__MainSettingsModelSO__Config::__set_controllerPositionZ(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x68>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::GlobalNamespace::____GlobalNamespace__MainSettingsModelSO__Config::__get_controllerPositionZ() const {
return ::cordl_internals::getInstanceField<float_t, 0x68>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__MainSettingsModelSO__Config::__set_controllerRotationX(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x6c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::GlobalNamespace::____GlobalNamespace__MainSettingsModelSO__Config::__get_controllerRotationX() const {
return ::cordl_internals::getInstanceField<float_t, 0x6c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__MainSettingsModelSO__Config::__set_controllerRotationY(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x70>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::GlobalNamespace::____GlobalNamespace__MainSettingsModelSO__Config::__get_controllerRotationY() const {
return ::cordl_internals::getInstanceField<float_t, 0x70>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__MainSettingsModelSO__Config::__set_controllerRotationZ(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x74>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::GlobalNamespace::____GlobalNamespace__MainSettingsModelSO__Config::__get_controllerRotationZ() const {
return ::cordl_internals::getInstanceField<float_t, 0x74>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__MainSettingsModelSO__Config::__set_smoothCameraEnabled(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x78>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::____GlobalNamespace__MainSettingsModelSO__Config::__get_smoothCameraEnabled() const {
return ::cordl_internals::getInstanceField<int32_t, 0x78>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__MainSettingsModelSO__Config::__set_smoothCameraFieldOfView(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x7c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::GlobalNamespace::____GlobalNamespace__MainSettingsModelSO__Config::__get_smoothCameraFieldOfView() const {
return ::cordl_internals::getInstanceField<float_t, 0x7c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__MainSettingsModelSO__Config::__set_smoothCameraThirdPersonPositionX(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x80>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::GlobalNamespace::____GlobalNamespace__MainSettingsModelSO__Config::__get_smoothCameraThirdPersonPositionX() const {
return ::cordl_internals::getInstanceField<float_t, 0x80>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__MainSettingsModelSO__Config::__set_smoothCameraThirdPersonPositionY(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x84>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::GlobalNamespace::____GlobalNamespace__MainSettingsModelSO__Config::__get_smoothCameraThirdPersonPositionY() const {
return ::cordl_internals::getInstanceField<float_t, 0x84>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__MainSettingsModelSO__Config::__set_smoothCameraThirdPersonPositionZ(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x88>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::GlobalNamespace::____GlobalNamespace__MainSettingsModelSO__Config::__get_smoothCameraThirdPersonPositionZ() const {
return ::cordl_internals::getInstanceField<float_t, 0x88>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__MainSettingsModelSO__Config::__set_smoothCameraThirdPersonEulerAnglesX(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x8c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::GlobalNamespace::____GlobalNamespace__MainSettingsModelSO__Config::__get_smoothCameraThirdPersonEulerAnglesX() const {
return ::cordl_internals::getInstanceField<float_t, 0x8c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__MainSettingsModelSO__Config::__set_smoothCameraThirdPersonEulerAnglesY(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x90>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::GlobalNamespace::____GlobalNamespace__MainSettingsModelSO__Config::__get_smoothCameraThirdPersonEulerAnglesY() const {
return ::cordl_internals::getInstanceField<float_t, 0x90>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__MainSettingsModelSO__Config::__set_smoothCameraThirdPersonEulerAnglesZ(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x94>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::GlobalNamespace::____GlobalNamespace__MainSettingsModelSO__Config::__get_smoothCameraThirdPersonEulerAnglesZ() const {
return ::cordl_internals::getInstanceField<float_t, 0x94>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__MainSettingsModelSO__Config::__set_smoothCameraThirdPersonEnabled(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x98>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::____GlobalNamespace__MainSettingsModelSO__Config::__get_smoothCameraThirdPersonEnabled() const {
return ::cordl_internals::getInstanceField<int32_t, 0x98>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__MainSettingsModelSO__Config::__set_smoothCameraRotationSmooth(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x9c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::GlobalNamespace::____GlobalNamespace__MainSettingsModelSO__Config::__get_smoothCameraRotationSmooth() const {
return ::cordl_internals::getInstanceField<float_t, 0x9c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__MainSettingsModelSO__Config::__set_smoothCameraPositionSmooth(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0xa0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::GlobalNamespace::____GlobalNamespace__MainSettingsModelSO__Config::__get_smoothCameraPositionSmooth() const {
return ::cordl_internals::getInstanceField<float_t, 0xa0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__MainSettingsModelSO__Config::__set_useCustomServerEnvironment(bool value)  {
::cordl_internals::setInstanceField<bool, 0xa4>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::GlobalNamespace::____GlobalNamespace__MainSettingsModelSO__Config::__get_useCustomServerEnvironment() const {
return ::cordl_internals::getInstanceField<bool, 0xa4>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__MainSettingsModelSO__Config::__set_forceGameLiftServerEnvironment(bool value)  {
::cordl_internals::setInstanceField<bool, 0xa5>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::GlobalNamespace::____GlobalNamespace__MainSettingsModelSO__Config::__get_forceGameLiftServerEnvironment() const {
return ::cordl_internals::getInstanceField<bool, 0xa5>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__MainSettingsModelSO__Config::__set_customServerHostName(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0xa8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::GlobalNamespace::____GlobalNamespace__MainSettingsModelSO__Config::__get_customServerHostName() const {
return ::cordl_internals::getInstanceField<::StringW, 0xa8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__MainSettingsModelSO__Config::__set_volume(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0xb0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::GlobalNamespace::____GlobalNamespace__MainSettingsModelSO__Config::__get_volume() const {
return ::cordl_internals::getInstanceField<float_t, 0xb0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__MainSettingsModelSO__Config::__set_ambientVolumeScale(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0xb4>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::GlobalNamespace::____GlobalNamespace__MainSettingsModelSO__Config::__get_ambientVolumeScale() const {
return ::cordl_internals::getInstanceField<float_t, 0xb4>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__MainSettingsModelSO__Config::__set_controllersRumbleEnabled(bool value)  {
::cordl_internals::setInstanceField<bool, 0xb8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::GlobalNamespace::____GlobalNamespace__MainSettingsModelSO__Config::__get_controllersRumbleEnabled() const {
return ::cordl_internals::getInstanceField<bool, 0xb8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__MainSettingsModelSO__Config::__set_enableAlphaFeatures(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0xbc>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::____GlobalNamespace__MainSettingsModelSO__Config::__get_enableAlphaFeatures() const {
return ::cordl_internals::getInstanceField<int32_t, 0xbc>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__MainSettingsModelSO__Config::__set_pauseButtonPressDurationLevel(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0xc0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::____GlobalNamespace__MainSettingsModelSO__Config::__get_pauseButtonPressDurationLevel() const {
return ::cordl_internals::getInstanceField<int32_t, 0xc0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__MainSettingsModelSO__Config::__set_maxShockwaveParticles(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0xc4>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::____GlobalNamespace__MainSettingsModelSO__Config::__get_maxShockwaveParticles() const {
return ::cordl_internals::getInstanceField<int32_t, 0xc4>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__MainSettingsModelSO__Config::__set_overrideAudioLatency(bool value)  {
::cordl_internals::setInstanceField<bool, 0xc8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::GlobalNamespace::____GlobalNamespace__MainSettingsModelSO__Config::__get_overrideAudioLatency() const {
return ::cordl_internals::getInstanceField<bool, 0xc8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__MainSettingsModelSO__Config::__set_audioLatency(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0xcc>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::GlobalNamespace::____GlobalNamespace__MainSettingsModelSO__Config::__get_audioLatency() const {
return ::cordl_internals::getInstanceField<float_t, 0xcc>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__MainSettingsModelSO__Config::__set_maxNumberOfCutSoundEffects(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0xd0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::____GlobalNamespace__MainSettingsModelSO__Config::__get_maxNumberOfCutSoundEffects() const {
return ::cordl_internals::getInstanceField<int32_t, 0xd0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__MainSettingsModelSO__Config::__set_language(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0xd8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::GlobalNamespace::____GlobalNamespace__MainSettingsModelSO__Config::__get_language() const {
return ::cordl_internals::getInstanceField<::StringW, 0xd8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__MainSettingsModelSO__Config::__set_enableFPSCounter(bool value)  {
::cordl_internals::setInstanceField<bool, 0xe0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::GlobalNamespace::____GlobalNamespace__MainSettingsModelSO__Config::__get_enableFPSCounter() const {
return ::cordl_internals::getInstanceField<bool, 0xe0>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 ::GlobalNamespace::____GlobalNamespace__MainSettingsModelSO__Config::____GlobalNamespace__MainSettingsModelSO__Config()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<____GlobalNamespace__MainSettingsModelSO__Config>())) {}
 void ::GlobalNamespace::____GlobalNamespace__MainSettingsModelSO__Config::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__MainSettingsModelSO__Config>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: ::GlobalNamespace::MainSettingsModelSO.get_createScreenshotDuringTheGame
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::MainSettingsModelSO::*)()>(&::GlobalNamespace::MainSettingsModelSO::get_createScreenshotDuringTheGame)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21ef9bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainSettingsModelSO>::get(),
                            "get_createScreenshotDuringTheGame",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainSettingsModelSO.set_createScreenshotDuringTheGame
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MainSettingsModelSO::*)(bool)>(&::GlobalNamespace::MainSettingsModelSO::set_createScreenshotDuringTheGame)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x21ef9c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainSettingsModelSO>::get(),
                            "set_createScreenshotDuringTheGame",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainSettingsModelSO.get_playingForTheFirstTime
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::MainSettingsModelSO::*)()>(&::GlobalNamespace::MainSettingsModelSO::get_playingForTheFirstTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21ef9d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainSettingsModelSO>::get(),
                            "get_playingForTheFirstTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainSettingsModelSO.set_playingForTheFirstTime
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MainSettingsModelSO::*)(bool)>(&::GlobalNamespace::MainSettingsModelSO::set_playingForTheFirstTime)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x21ef9d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainSettingsModelSO>::get(),
                            "set_playingForTheFirstTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainSettingsModelSO.Initialize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MainSettingsModelSO::*)(::GlobalNamespace::ISaveData)>(&::GlobalNamespace::MainSettingsModelSO::Initialize)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x21ef9e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainSettingsModelSO>::get(),
                            "Initialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ISaveData>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainSettingsModelSO.Save
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MainSettingsModelSO::*)(::GlobalNamespace::ISaveData)>(&::GlobalNamespace::MainSettingsModelSO::Save)> {
  constexpr static std::size_t size = 0x47c;
  constexpr static std::size_t addrs = 0x21f013c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainSettingsModelSO>::get(),
                            "Save",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ISaveData>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainSettingsModelSO.Load
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MainSettingsModelSO::*)(::GlobalNamespace::ISaveData, bool)>(&::GlobalNamespace::MainSettingsModelSO::Load)> {
  constexpr static std::size_t size = 0x658;
  constexpr static std::size_t addrs = 0x21efae4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainSettingsModelSO>::get(),
                            "Load",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ISaveData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainSettingsModelSO.__DeleteSettingsFiles
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MainSettingsModelSO::*)()>(&::GlobalNamespace::MainSettingsModelSO::__DeleteSettingsFiles)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x21f05b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainSettingsModelSO>::get(),
                            "__DeleteSettingsFiles",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainSettingsModelSO._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MainSettingsModelSO::*)()>(&::GlobalNamespace::MainSettingsModelSO::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21f06f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainSettingsModelSO>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::GlobalNamespace::MainSettingsModelSO::__set_vrResolutionScale(::GlobalNamespace::FloatSO value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::FloatSO, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::FloatSO>(value));
}
constexpr ::GlobalNamespace::FloatSO ::GlobalNamespace::MainSettingsModelSO::__get_vrResolutionScale() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::FloatSO, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::MainSettingsModelSO::__set_menuVRResolutionScaleMultiplier(::GlobalNamespace::FloatSO value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::FloatSO, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::FloatSO>(value));
}
constexpr ::GlobalNamespace::FloatSO ::GlobalNamespace::MainSettingsModelSO::__get_menuVRResolutionScaleMultiplier() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::FloatSO, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::MainSettingsModelSO::__set_useFixedFoveatedRenderingDuringGameplay(::GlobalNamespace::BoolSO value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BoolSO, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::BoolSO>(value));
}
constexpr ::GlobalNamespace::BoolSO ::GlobalNamespace::MainSettingsModelSO::__get_useFixedFoveatedRenderingDuringGameplay() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BoolSO, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::MainSettingsModelSO::__set_windowResolution(::GlobalNamespace::Vector2IntSO value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::Vector2IntSO, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::Vector2IntSO>(value));
}
constexpr ::GlobalNamespace::Vector2IntSO ::GlobalNamespace::MainSettingsModelSO::__get_windowResolution() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::Vector2IntSO, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::MainSettingsModelSO::__set_editorWindowResolution(::GlobalNamespace::Vector2IntSO value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::Vector2IntSO, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::Vector2IntSO>(value));
}
constexpr ::GlobalNamespace::Vector2IntSO ::GlobalNamespace::MainSettingsModelSO::__get_editorWindowResolution() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::Vector2IntSO, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::MainSettingsModelSO::__set_fullscreen(::GlobalNamespace::BoolSO value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BoolSO, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::BoolSO>(value));
}
constexpr ::GlobalNamespace::BoolSO ::GlobalNamespace::MainSettingsModelSO::__get_fullscreen() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BoolSO, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::MainSettingsModelSO::__set_antiAliasingLevel(::GlobalNamespace::IntSO value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::IntSO, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::IntSO>(value));
}
constexpr ::GlobalNamespace::IntSO ::GlobalNamespace::MainSettingsModelSO::__get_antiAliasingLevel() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IntSO, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::MainSettingsModelSO::__set_volume(::GlobalNamespace::FloatSO value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::FloatSO, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::FloatSO>(value));
}
constexpr ::GlobalNamespace::FloatSO ::GlobalNamespace::MainSettingsModelSO::__get_volume() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::FloatSO, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::MainSettingsModelSO::__set_ambientVolumeScale(::GlobalNamespace::FloatSO value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::FloatSO, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::FloatSO>(value));
}
constexpr ::GlobalNamespace::FloatSO ::GlobalNamespace::MainSettingsModelSO::__get_ambientVolumeScale() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::FloatSO, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::MainSettingsModelSO::__set_controllersRumbleEnabled(::GlobalNamespace::BoolSO value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BoolSO, 0x60>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::BoolSO>(value));
}
constexpr ::GlobalNamespace::BoolSO ::GlobalNamespace::MainSettingsModelSO::__get_controllersRumbleEnabled() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BoolSO, 0x60>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::MainSettingsModelSO::__set_roomCenter(::GlobalNamespace::Vector3SO value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::Vector3SO, 0x68>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::Vector3SO>(value));
}
constexpr ::GlobalNamespace::Vector3SO ::GlobalNamespace::MainSettingsModelSO::__get_roomCenter() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::Vector3SO, 0x68>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::MainSettingsModelSO::__set_roomRotation(::GlobalNamespace::FloatSO value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::FloatSO, 0x70>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::FloatSO>(value));
}
constexpr ::GlobalNamespace::FloatSO ::GlobalNamespace::MainSettingsModelSO::__get_roomRotation() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::FloatSO, 0x70>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::MainSettingsModelSO::__set_controllerPosition(::GlobalNamespace::Vector3SO value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::Vector3SO, 0x78>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::Vector3SO>(value));
}
constexpr ::GlobalNamespace::Vector3SO ::GlobalNamespace::MainSettingsModelSO::__get_controllerPosition() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::Vector3SO, 0x78>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::MainSettingsModelSO::__set_controllerRotation(::GlobalNamespace::Vector3SO value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::Vector3SO, 0x80>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::Vector3SO>(value));
}
constexpr ::GlobalNamespace::Vector3SO ::GlobalNamespace::MainSettingsModelSO::__get_controllerRotation() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::Vector3SO, 0x80>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::MainSettingsModelSO::__set_mirrorGraphicsSettings(::GlobalNamespace::IntSO value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::IntSO, 0x88>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::IntSO>(value));
}
constexpr ::GlobalNamespace::IntSO ::GlobalNamespace::MainSettingsModelSO::__get_mirrorGraphicsSettings() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IntSO, 0x88>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::MainSettingsModelSO::__set_mainEffectGraphicsSettings(::GlobalNamespace::IntSO value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::IntSO, 0x90>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::IntSO>(value));
}
constexpr ::GlobalNamespace::IntSO ::GlobalNamespace::MainSettingsModelSO::__get_mainEffectGraphicsSettings() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IntSO, 0x90>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::MainSettingsModelSO::__set_bloomPrePassGraphicsSettings(::GlobalNamespace::IntSO value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::IntSO, 0x98>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::IntSO>(value));
}
constexpr ::GlobalNamespace::IntSO ::GlobalNamespace::MainSettingsModelSO::__get_bloomPrePassGraphicsSettings() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IntSO, 0x98>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::MainSettingsModelSO::__set_smokeGraphicsSettings(::GlobalNamespace::BoolSO value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BoolSO, 0xa0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::BoolSO>(value));
}
constexpr ::GlobalNamespace::BoolSO ::GlobalNamespace::MainSettingsModelSO::__get_smokeGraphicsSettings() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BoolSO, 0xa0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::MainSettingsModelSO::__set_enableAlphaFeatures(::GlobalNamespace::BoolSO value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BoolSO, 0xa8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::BoolSO>(value));
}
constexpr ::GlobalNamespace::BoolSO ::GlobalNamespace::MainSettingsModelSO::__get_enableAlphaFeatures() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BoolSO, 0xa8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::MainSettingsModelSO::__set_pauseButtonPressDurationLevel(::GlobalNamespace::IntSO value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::IntSO, 0xb0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::IntSO>(value));
}
constexpr ::GlobalNamespace::IntSO ::GlobalNamespace::MainSettingsModelSO::__get_pauseButtonPressDurationLevel() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IntSO, 0xb0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::MainSettingsModelSO::__set_burnMarkTrailsEnabled(::GlobalNamespace::BoolSO value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BoolSO, 0xb8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::BoolSO>(value));
}
constexpr ::GlobalNamespace::BoolSO ::GlobalNamespace::MainSettingsModelSO::__get_burnMarkTrailsEnabled() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BoolSO, 0xb8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::MainSettingsModelSO::__set_screenDisplacementEffectsEnabled(::GlobalNamespace::BoolSO value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BoolSO, 0xc0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::BoolSO>(value));
}
constexpr ::GlobalNamespace::BoolSO ::GlobalNamespace::MainSettingsModelSO::__get_screenDisplacementEffectsEnabled() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BoolSO, 0xc0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::MainSettingsModelSO::__set_smoothCameraEnabled(::GlobalNamespace::BoolSO value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BoolSO, 0xc8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::BoolSO>(value));
}
constexpr ::GlobalNamespace::BoolSO ::GlobalNamespace::MainSettingsModelSO::__get_smoothCameraEnabled() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BoolSO, 0xc8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::MainSettingsModelSO::__set_smoothCameraFieldOfView(::GlobalNamespace::FloatSO value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::FloatSO, 0xd0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::FloatSO>(value));
}
constexpr ::GlobalNamespace::FloatSO ::GlobalNamespace::MainSettingsModelSO::__get_smoothCameraFieldOfView() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::FloatSO, 0xd0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::MainSettingsModelSO::__set_smoothCameraThirdPersonPosition(::GlobalNamespace::Vector3SO value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::Vector3SO, 0xd8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::Vector3SO>(value));
}
constexpr ::GlobalNamespace::Vector3SO ::GlobalNamespace::MainSettingsModelSO::__get_smoothCameraThirdPersonPosition() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::Vector3SO, 0xd8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::MainSettingsModelSO::__set_smoothCameraThirdPersonEulerAngles(::GlobalNamespace::Vector3SO value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::Vector3SO, 0xe0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::Vector3SO>(value));
}
constexpr ::GlobalNamespace::Vector3SO ::GlobalNamespace::MainSettingsModelSO::__get_smoothCameraThirdPersonEulerAngles() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::Vector3SO, 0xe0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::MainSettingsModelSO::__set_smoothCameraThirdPersonEnabled(::GlobalNamespace::BoolSO value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BoolSO, 0xe8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::BoolSO>(value));
}
constexpr ::GlobalNamespace::BoolSO ::GlobalNamespace::MainSettingsModelSO::__get_smoothCameraThirdPersonEnabled() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BoolSO, 0xe8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::MainSettingsModelSO::__set_smoothCameraRotationSmooth(::GlobalNamespace::FloatSO value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::FloatSO, 0xf0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::FloatSO>(value));
}
constexpr ::GlobalNamespace::FloatSO ::GlobalNamespace::MainSettingsModelSO::__get_smoothCameraRotationSmooth() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::FloatSO, 0xf0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::MainSettingsModelSO::__set_smoothCameraPositionSmooth(::GlobalNamespace::FloatSO value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::FloatSO, 0xf8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::FloatSO>(value));
}
constexpr ::GlobalNamespace::FloatSO ::GlobalNamespace::MainSettingsModelSO::__get_smoothCameraPositionSmooth() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::FloatSO, 0xf8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::MainSettingsModelSO::__set_overrideAudioLatency(::GlobalNamespace::BoolSO value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BoolSO, 0x100>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::BoolSO>(value));
}
constexpr ::GlobalNamespace::BoolSO ::GlobalNamespace::MainSettingsModelSO::__get_overrideAudioLatency() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BoolSO, 0x100>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::MainSettingsModelSO::__set_audioLatency(::GlobalNamespace::FloatSO value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::FloatSO, 0x108>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::FloatSO>(value));
}
constexpr ::GlobalNamespace::FloatSO ::GlobalNamespace::MainSettingsModelSO::__get_audioLatency() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::FloatSO, 0x108>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::MainSettingsModelSO::__set_maxShockwaveParticles(::GlobalNamespace::IntSO value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::IntSO, 0x110>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::IntSO>(value));
}
constexpr ::GlobalNamespace::IntSO ::GlobalNamespace::MainSettingsModelSO::__get_maxShockwaveParticles() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IntSO, 0x110>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::MainSettingsModelSO::__set_maxNumberOfCutSoundEffects(::GlobalNamespace::IntSO value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::IntSO, 0x118>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::IntSO>(value));
}
constexpr ::GlobalNamespace::IntSO ::GlobalNamespace::MainSettingsModelSO::__get_maxNumberOfCutSoundEffects() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IntSO, 0x118>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::MainSettingsModelSO::__set_language(::GlobalNamespace::LanguageSO value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::LanguageSO, 0x120>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::LanguageSO>(value));
}
constexpr ::GlobalNamespace::LanguageSO ::GlobalNamespace::MainSettingsModelSO::__get_language() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::LanguageSO, 0x120>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::MainSettingsModelSO::__set_useCustomServerEnvironment(::GlobalNamespace::BoolSO value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BoolSO, 0x128>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::BoolSO>(value));
}
constexpr ::GlobalNamespace::BoolSO ::GlobalNamespace::MainSettingsModelSO::__get_useCustomServerEnvironment() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BoolSO, 0x128>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::MainSettingsModelSO::__set_forceGameLiftServerEnvironment(::GlobalNamespace::BoolSO value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BoolSO, 0x130>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::BoolSO>(value));
}
constexpr ::GlobalNamespace::BoolSO ::GlobalNamespace::MainSettingsModelSO::__get_forceGameLiftServerEnvironment() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BoolSO, 0x130>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::MainSettingsModelSO::__set_customServerHostName(::GlobalNamespace::StringSO value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::StringSO, 0x138>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::StringSO>(value));
}
constexpr ::GlobalNamespace::StringSO ::GlobalNamespace::MainSettingsModelSO::__get_customServerHostName() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::StringSO, 0x138>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::MainSettingsModelSO::__set_enableFPSCounter(::GlobalNamespace::BoolSO value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BoolSO, 0x140>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::BoolSO>(value));
}
constexpr ::GlobalNamespace::BoolSO ::GlobalNamespace::MainSettingsModelSO::__get_enableFPSCounter() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BoolSO, 0x140>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::MainSettingsModelSO::__set_depthTextureEnabled(::GlobalNamespace::BoolSO value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BoolSO, 0x148>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::BoolSO>(value));
}
constexpr ::GlobalNamespace::BoolSO ::GlobalNamespace::MainSettingsModelSO::__get_depthTextureEnabled() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BoolSO, 0x148>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::MainSettingsModelSO::__set__createScreenshotDuringTheGame_k__BackingField(bool value)  {
::cordl_internals::setInstanceField<bool, 0x150>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::GlobalNamespace::MainSettingsModelSO::__get__createScreenshotDuringTheGame_k__BackingField() const {
return ::cordl_internals::getInstanceField<bool, 0x150>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::MainSettingsModelSO::__set__playingForTheFirstTime_k__BackingField(bool value)  {
::cordl_internals::setInstanceField<bool, 0x151>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::GlobalNamespace::MainSettingsModelSO::__get__playingForTheFirstTime_k__BackingField() const {
return ::cordl_internals::getInstanceField<bool, 0x151>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::MainSettingsModelSO::__set__playingForTheFirstTimeChecked(bool value)  {
::cordl_internals::setInstanceField<bool, 0x152>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::GlobalNamespace::MainSettingsModelSO::__get__playingForTheFirstTimeChecked() const {
return ::cordl_internals::getInstanceField<bool, 0x152>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::MainSettingsModelSO::__set__isLoaded(bool value)  {
::cordl_internals::setInstanceField<bool, 0x153>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::GlobalNamespace::MainSettingsModelSO::__get__isLoaded() const {
return ::cordl_internals::getInstanceField<bool, 0x153>(this->::bs_hook::Il2CppWrapperType::instance);
}
 bool ::GlobalNamespace::MainSettingsModelSO::get_createScreenshotDuringTheGame()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainSettingsModelSO>::get(),
                            "get_createScreenshotDuringTheGame",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::MainSettingsModelSO::set_createScreenshotDuringTheGame(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainSettingsModelSO>::get(),
                            "set_createScreenshotDuringTheGame",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 bool ::GlobalNamespace::MainSettingsModelSO::get_playingForTheFirstTime()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainSettingsModelSO>::get(),
                            "get_playingForTheFirstTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::MainSettingsModelSO::set_playingForTheFirstTime(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainSettingsModelSO>::get(),
                            "set_playingForTheFirstTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void ::GlobalNamespace::MainSettingsModelSO::Initialize(::GlobalNamespace::ISaveData saveData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainSettingsModelSO>::get(),
                            "Initialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ISaveData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, saveData);
}
 void ::GlobalNamespace::MainSettingsModelSO::Save(::GlobalNamespace::ISaveData saveData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainSettingsModelSO>::get(),
                            "Save",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ISaveData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, saveData);
}
 void ::GlobalNamespace::MainSettingsModelSO::Load(::GlobalNamespace::ISaveData saveData, bool forced)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainSettingsModelSO>::get(),
                            "Load",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ISaveData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, saveData, forced);
}
 void ::GlobalNamespace::MainSettingsModelSO::__DeleteSettingsFiles()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainSettingsModelSO>::get(),
                            "__DeleteSettingsFiles",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 ::GlobalNamespace::MainSettingsModelSO::MainSettingsModelSO()  : ::GlobalNamespace::PersistentScriptableObject(THROW_UNLESS(::il2cpp_utils::New<MainSettingsModelSO>())) {}
 void ::GlobalNamespace::MainSettingsModelSO::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainSettingsModelSO>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
