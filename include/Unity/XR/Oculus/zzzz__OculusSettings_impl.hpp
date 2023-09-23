#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "Unity/XR/Oculus/zzzz__OculusSettings_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr Unity::XR::Oculus::Unity__XR__Oculus__OculusSettings__StereoRenderingModeDesktop::Unity__XR__Oculus__OculusSettings__StereoRenderingModeDesktop(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void Unity::XR::Oculus::Unity__XR__Oculus__OculusSettings__StereoRenderingModeDesktop::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t Unity::XR::Oculus::Unity__XR__Oculus__OculusSettings__StereoRenderingModeDesktop::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr Unity::XR::Oculus::Unity__XR__Oculus__OculusSettings__StereoRenderingModeDesktop  Unity::XR::Oculus::Unity__XR__Oculus__OculusSettings__StereoRenderingModeDesktop::MultiPass{0};
constexpr Unity::XR::Oculus::Unity__XR__Oculus__OculusSettings__StereoRenderingModeDesktop  Unity::XR::Oculus::Unity__XR__Oculus__OculusSettings__StereoRenderingModeDesktop::SinglePassInstanced{1};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr Unity::XR::Oculus::Unity__XR__Oculus__OculusSettings__StereoRenderingModeAndroid::Unity__XR__Oculus__OculusSettings__StereoRenderingModeAndroid(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void Unity::XR::Oculus::Unity__XR__Oculus__OculusSettings__StereoRenderingModeAndroid::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t Unity::XR::Oculus::Unity__XR__Oculus__OculusSettings__StereoRenderingModeAndroid::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr Unity::XR::Oculus::Unity__XR__Oculus__OculusSettings__StereoRenderingModeAndroid  Unity::XR::Oculus::Unity__XR__Oculus__OculusSettings__StereoRenderingModeAndroid::MultiPass{0};
constexpr Unity::XR::Oculus::Unity__XR__Oculus__OculusSettings__StereoRenderingModeAndroid  Unity::XR::Oculus::Unity__XR__Oculus__OculusSettings__StereoRenderingModeAndroid::Multiview{2};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr Unity::XR::Oculus::Unity__XR__Oculus__OculusSettings__FoveationMethod::Unity__XR__Oculus__OculusSettings__FoveationMethod(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void Unity::XR::Oculus::Unity__XR__Oculus__OculusSettings__FoveationMethod::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t Unity::XR::Oculus::Unity__XR__Oculus__OculusSettings__FoveationMethod::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr Unity::XR::Oculus::Unity__XR__Oculus__OculusSettings__FoveationMethod  Unity::XR::Oculus::Unity__XR__Oculus__OculusSettings__FoveationMethod::FixedFoveatedRendering{0};
constexpr Unity::XR::Oculus::Unity__XR__Oculus__OculusSettings__FoveationMethod  Unity::XR::Oculus::Unity__XR__Oculus__OculusSettings__FoveationMethod::EyeTrackedFoveatedRendering{1};
//  Writing Method size for method: Unity::XR::Oculus::OculusSettings.GetStereoRenderingMode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint16_t (Unity::XR::Oculus::OculusSettings::*)()>(&Unity::XR::Oculus::OculusSettings::GetStereoRenderingMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2adfa70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Unity::XR::Oculus::OculusSettings>::get(),
                            "GetStereoRenderingMode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Unity::XR::Oculus::OculusSettings.Awake
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Unity::XR::Oculus::OculusSettings::*)()>(&Unity::XR::Oculus::OculusSettings::Awake)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x2ae3288;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Unity::XR::Oculus::OculusSettings>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Unity::XR::Oculus::OculusSettings._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Unity::XR::Oculus::OculusSettings::*)()>(&Unity::XR::Oculus::OculusSettings::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2ae32d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Unity::XR::Oculus::OculusSettings>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void Unity::XR::Oculus::OculusSettings::__set_m_StereoRenderingModeDesktop(Unity::XR::Oculus::Unity__XR__Oculus__OculusSettings__StereoRenderingModeDesktop value)  {
::cordl_internals::setInstanceField<Unity::XR::Oculus::Unity__XR__Oculus__OculusSettings__StereoRenderingModeDesktop, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Unity::XR::Oculus::Unity__XR__Oculus__OculusSettings__StereoRenderingModeDesktop>(value));
}
constexpr Unity::XR::Oculus::Unity__XR__Oculus__OculusSettings__StereoRenderingModeDesktop Unity::XR::Oculus::OculusSettings::__get_m_StereoRenderingModeDesktop() const {
return ::cordl_internals::getInstanceField<Unity::XR::Oculus::Unity__XR__Oculus__OculusSettings__StereoRenderingModeDesktop, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Unity::XR::Oculus::OculusSettings::__set_m_StereoRenderingModeAndroid(Unity::XR::Oculus::Unity__XR__Oculus__OculusSettings__StereoRenderingModeAndroid value)  {
::cordl_internals::setInstanceField<Unity::XR::Oculus::Unity__XR__Oculus__OculusSettings__StereoRenderingModeAndroid, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Unity::XR::Oculus::Unity__XR__Oculus__OculusSettings__StereoRenderingModeAndroid>(value));
}
constexpr Unity::XR::Oculus::Unity__XR__Oculus__OculusSettings__StereoRenderingModeAndroid Unity::XR::Oculus::OculusSettings::__get_m_StereoRenderingModeAndroid() const {
return ::cordl_internals::getInstanceField<Unity::XR::Oculus::Unity__XR__Oculus__OculusSettings__StereoRenderingModeAndroid, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Unity::XR::Oculus::OculusSettings::__set_SharedDepthBuffer(bool value)  {
::cordl_internals::setInstanceField<bool, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool Unity::XR::Oculus::OculusSettings::__get_SharedDepthBuffer() const {
return ::cordl_internals::getInstanceField<bool, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Unity::XR::Oculus::OculusSettings::__set_DepthSubmission(bool value)  {
::cordl_internals::setInstanceField<bool, 0x21>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool Unity::XR::Oculus::OculusSettings::__get_DepthSubmission() const {
return ::cordl_internals::getInstanceField<bool, 0x21>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Unity::XR::Oculus::OculusSettings::__set_DashSupport(bool value)  {
::cordl_internals::setInstanceField<bool, 0x22>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool Unity::XR::Oculus::OculusSettings::__get_DashSupport() const {
return ::cordl_internals::getInstanceField<bool, 0x22>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Unity::XR::Oculus::OculusSettings::__set_LowOverheadMode(bool value)  {
::cordl_internals::setInstanceField<bool, 0x23>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool Unity::XR::Oculus::OculusSettings::__get_LowOverheadMode() const {
return ::cordl_internals::getInstanceField<bool, 0x23>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Unity::XR::Oculus::OculusSettings::__set_OptimizeBufferDiscards(bool value)  {
::cordl_internals::setInstanceField<bool, 0x24>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool Unity::XR::Oculus::OculusSettings::__get_OptimizeBufferDiscards() const {
return ::cordl_internals::getInstanceField<bool, 0x24>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Unity::XR::Oculus::OculusSettings::__set_PhaseSync(bool value)  {
::cordl_internals::setInstanceField<bool, 0x25>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool Unity::XR::Oculus::OculusSettings::__get_PhaseSync() const {
return ::cordl_internals::getInstanceField<bool, 0x25>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Unity::XR::Oculus::OculusSettings::__set_SymmetricProjection(bool value)  {
::cordl_internals::setInstanceField<bool, 0x26>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool Unity::XR::Oculus::OculusSettings::__get_SymmetricProjection() const {
return ::cordl_internals::getInstanceField<bool, 0x26>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Unity::XR::Oculus::OculusSettings::__set_SubsampledLayout(bool value)  {
::cordl_internals::setInstanceField<bool, 0x27>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool Unity::XR::Oculus::OculusSettings::__get_SubsampledLayout() const {
return ::cordl_internals::getInstanceField<bool, 0x27>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Unity::XR::Oculus::OculusSettings::__set_FoveatedRenderingMethod(Unity::XR::Oculus::Unity__XR__Oculus__OculusSettings__FoveationMethod value)  {
::cordl_internals::setInstanceField<Unity::XR::Oculus::Unity__XR__Oculus__OculusSettings__FoveationMethod, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Unity::XR::Oculus::Unity__XR__Oculus__OculusSettings__FoveationMethod>(value));
}
constexpr Unity::XR::Oculus::Unity__XR__Oculus__OculusSettings__FoveationMethod Unity::XR::Oculus::OculusSettings::__get_FoveatedRenderingMethod() const {
return ::cordl_internals::getInstanceField<Unity::XR::Oculus::Unity__XR__Oculus__OculusSettings__FoveationMethod, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Unity::XR::Oculus::OculusSettings::__set_LateLatching(bool value)  {
::cordl_internals::setInstanceField<bool, 0x2c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool Unity::XR::Oculus::OculusSettings::__get_LateLatching() const {
return ::cordl_internals::getInstanceField<bool, 0x2c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Unity::XR::Oculus::OculusSettings::__set_LateLatchingDebug(bool value)  {
::cordl_internals::setInstanceField<bool, 0x2d>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool Unity::XR::Oculus::OculusSettings::__get_LateLatchingDebug() const {
return ::cordl_internals::getInstanceField<bool, 0x2d>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Unity::XR::Oculus::OculusSettings::__set_EnableTrackingOriginStageMode(bool value)  {
::cordl_internals::setInstanceField<bool, 0x2e>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool Unity::XR::Oculus::OculusSettings::__get_EnableTrackingOriginStageMode() const {
return ::cordl_internals::getInstanceField<bool, 0x2e>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Unity::XR::Oculus::OculusSettings::__set_SpaceWarp(bool value)  {
::cordl_internals::setInstanceField<bool, 0x2f>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool Unity::XR::Oculus::OculusSettings::__get_SpaceWarp() const {
return ::cordl_internals::getInstanceField<bool, 0x2f>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Unity::XR::Oculus::OculusSettings::__set_TargetQuest(bool value)  {
::cordl_internals::setInstanceField<bool, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool Unity::XR::Oculus::OculusSettings::__get_TargetQuest() const {
return ::cordl_internals::getInstanceField<bool, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Unity::XR::Oculus::OculusSettings::__set_TargetQuest2(bool value)  {
::cordl_internals::setInstanceField<bool, 0x31>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool Unity::XR::Oculus::OculusSettings::__get_TargetQuest2() const {
return ::cordl_internals::getInstanceField<bool, 0x31>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Unity::XR::Oculus::OculusSettings::__set_TargetQuestPro(bool value)  {
::cordl_internals::setInstanceField<bool, 0x32>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool Unity::XR::Oculus::OculusSettings::__get_TargetQuestPro() const {
return ::cordl_internals::getInstanceField<bool, 0x32>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Unity::XR::Oculus::OculusSettings::__set_SystemSplashScreen(UnityEngine::Texture2D value)  {
::cordl_internals::setInstanceField<UnityEngine::Texture2D, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Texture2D>(value));
}
constexpr UnityEngine::Texture2D Unity::XR::Oculus::OculusSettings::__get_SystemSplashScreen() const {
return ::cordl_internals::getInstanceField<UnityEngine::Texture2D, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void Unity::XR::Oculus::OculusSettings::__set_s_Settings(Unity::XR::Oculus::OculusSettings value)  {
::cordl_internals::setStaticField<Unity::XR::Oculus::OculusSettings, "s_Settings", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Unity::XR::Oculus::OculusSettings>::get>(std::forward<Unity::XR::Oculus::OculusSettings>(value));
}
 Unity::XR::Oculus::OculusSettings Unity::XR::Oculus::OculusSettings::__get_s_Settings()  {
return ::cordl_internals::getStaticField<Unity::XR::Oculus::OculusSettings, "s_Settings", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Unity::XR::Oculus::OculusSettings>::get>();
}
 uint16_t Unity::XR::Oculus::OculusSettings::GetStereoRenderingMode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Unity::XR::Oculus::OculusSettings>::get(),
                            "GetStereoRenderingMode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<uint16_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void Unity::XR::Oculus::OculusSettings::Awake()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Unity::XR::Oculus::OculusSettings>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 Unity::XR::Oculus::OculusSettings::OculusSettings()  : UnityEngine::ScriptableObject(THROW_UNLESS(::il2cpp_utils::New<OculusSettings>())) {}
 void Unity::XR::Oculus::OculusSettings::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Unity::XR::Oculus::OculusSettings>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
