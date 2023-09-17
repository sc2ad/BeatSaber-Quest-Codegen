#pragma once
namespace {
#include "RootMotion/FinalIK/zzzz__VRIKCalibrator_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "RootMotion/FinalIK/zzzz__IKSolverVR_def.hpp"
#include "RootMotion/FinalIK/zzzz__VRIK_def.hpp"
//  Writing Method size for method: ::RootMotion::FinalIK::____RootMotion__FinalIK__VRIKCalibrator__Settings._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::____RootMotion__FinalIK__VRIKCalibrator__Settings::*)()>(&::RootMotion::FinalIK::____RootMotion__FinalIK__VRIKCalibrator__Settings::_ctor)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x1210168;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::____RootMotion__FinalIK__VRIKCalibrator__Settings>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::RootMotion::FinalIK::____RootMotion__FinalIK__VRIKCalibrator__Settings::__set_scaleMlp(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::RootMotion::FinalIK::____RootMotion__FinalIK__VRIKCalibrator__Settings::__get_scaleMlp() const {
return ::cordl_internals::getInstanceField<float_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::RootMotion::FinalIK::____RootMotion__FinalIK__VRIKCalibrator__Settings::__set_headTrackerForward(::UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0x14>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3 ::RootMotion::FinalIK::____RootMotion__FinalIK__VRIKCalibrator__Settings::__get_headTrackerForward() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x14>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::RootMotion::FinalIK::____RootMotion__FinalIK__VRIKCalibrator__Settings::__set_headTrackerUp(::UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3 ::RootMotion::FinalIK::____RootMotion__FinalIK__VRIKCalibrator__Settings::__get_headTrackerUp() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::RootMotion::FinalIK::____RootMotion__FinalIK__VRIKCalibrator__Settings::__set_bodyTrackerForward(::UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0x2c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3 ::RootMotion::FinalIK::____RootMotion__FinalIK__VRIKCalibrator__Settings::__get_bodyTrackerForward() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x2c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::RootMotion::FinalIK::____RootMotion__FinalIK__VRIKCalibrator__Settings::__set_bodyTrackerUp(::UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3 ::RootMotion::FinalIK::____RootMotion__FinalIK__VRIKCalibrator__Settings::__get_bodyTrackerUp() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::RootMotion::FinalIK::____RootMotion__FinalIK__VRIKCalibrator__Settings::__set_handTrackerForward(::UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0x44>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3 ::RootMotion::FinalIK::____RootMotion__FinalIK__VRIKCalibrator__Settings::__get_handTrackerForward() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x44>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::RootMotion::FinalIK::____RootMotion__FinalIK__VRIKCalibrator__Settings::__set_handTrackerUp(::UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3 ::RootMotion::FinalIK::____RootMotion__FinalIK__VRIKCalibrator__Settings::__get_handTrackerUp() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::RootMotion::FinalIK::____RootMotion__FinalIK__VRIKCalibrator__Settings::__set_footTrackerForward(::UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0x5c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3 ::RootMotion::FinalIK::____RootMotion__FinalIK__VRIKCalibrator__Settings::__get_footTrackerForward() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x5c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::RootMotion::FinalIK::____RootMotion__FinalIK__VRIKCalibrator__Settings::__set_footTrackerUp(::UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0x68>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3 ::RootMotion::FinalIK::____RootMotion__FinalIK__VRIKCalibrator__Settings::__get_footTrackerUp() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x68>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::RootMotion::FinalIK::____RootMotion__FinalIK__VRIKCalibrator__Settings::__set_headOffset(::UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0x74>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3 ::RootMotion::FinalIK::____RootMotion__FinalIK__VRIKCalibrator__Settings::__get_headOffset() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x74>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::RootMotion::FinalIK::____RootMotion__FinalIK__VRIKCalibrator__Settings::__set_handOffset(::UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0x80>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3 ::RootMotion::FinalIK::____RootMotion__FinalIK__VRIKCalibrator__Settings::__get_handOffset() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x80>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::RootMotion::FinalIK::____RootMotion__FinalIK__VRIKCalibrator__Settings::__set_footForwardOffset(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x8c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::RootMotion::FinalIK::____RootMotion__FinalIK__VRIKCalibrator__Settings::__get_footForwardOffset() const {
return ::cordl_internals::getInstanceField<float_t, 0x8c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::RootMotion::FinalIK::____RootMotion__FinalIK__VRIKCalibrator__Settings::__set_footInwardOffset(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x90>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::RootMotion::FinalIK::____RootMotion__FinalIK__VRIKCalibrator__Settings::__get_footInwardOffset() const {
return ::cordl_internals::getInstanceField<float_t, 0x90>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::RootMotion::FinalIK::____RootMotion__FinalIK__VRIKCalibrator__Settings::__set_footHeadingOffset(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x94>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::RootMotion::FinalIK::____RootMotion__FinalIK__VRIKCalibrator__Settings::__get_footHeadingOffset() const {
return ::cordl_internals::getInstanceField<float_t, 0x94>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::RootMotion::FinalIK::____RootMotion__FinalIK__VRIKCalibrator__Settings::__set_pelvisPositionWeight(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x98>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::RootMotion::FinalIK::____RootMotion__FinalIK__VRIKCalibrator__Settings::__get_pelvisPositionWeight() const {
return ::cordl_internals::getInstanceField<float_t, 0x98>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::RootMotion::FinalIK::____RootMotion__FinalIK__VRIKCalibrator__Settings::__set_pelvisRotationWeight(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x9c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::RootMotion::FinalIK::____RootMotion__FinalIK__VRIKCalibrator__Settings::__get_pelvisRotationWeight() const {
return ::cordl_internals::getInstanceField<float_t, 0x9c>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 ::RootMotion::FinalIK::____RootMotion__FinalIK__VRIKCalibrator__Settings::____RootMotion__FinalIK__VRIKCalibrator__Settings()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<____RootMotion__FinalIK__VRIKCalibrator__Settings>())) {}
 void ::RootMotion::FinalIK::____RootMotion__FinalIK__VRIKCalibrator__Settings::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::____RootMotion__FinalIK__VRIKCalibrator__Settings>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: ::GlobalNamespace::______RootMotion__FinalIK__VRIKCalibrator__CalibrationData__Target._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::______RootMotion__FinalIK__VRIKCalibrator__CalibrationData__Target::*)(::UnityEngine::Transform)>(&::GlobalNamespace::______RootMotion__FinalIK__VRIKCalibrator__CalibrationData__Target::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x120f3c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::______RootMotion__FinalIK__VRIKCalibrator__CalibrationData__Target>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::______RootMotion__FinalIK__VRIKCalibrator__CalibrationData__Target.SetTo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::______RootMotion__FinalIK__VRIKCalibrator__CalibrationData__Target::*)(::UnityEngine::Transform)>(&::GlobalNamespace::______RootMotion__FinalIK__VRIKCalibrator__CalibrationData__Target::SetTo)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x120fd68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::______RootMotion__FinalIK__VRIKCalibrator__CalibrationData__Target>::get(),
                            "SetTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void ::GlobalNamespace::______RootMotion__FinalIK__VRIKCalibrator__CalibrationData__Target::__set_used(bool value)  {
::cordl_internals::setInstanceField<bool, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::GlobalNamespace::______RootMotion__FinalIK__VRIKCalibrator__CalibrationData__Target::__get_used() const {
return ::cordl_internals::getInstanceField<bool, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::______RootMotion__FinalIK__VRIKCalibrator__CalibrationData__Target::__set_localPosition(::UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0x14>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3 ::GlobalNamespace::______RootMotion__FinalIK__VRIKCalibrator__CalibrationData__Target::__get_localPosition() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x14>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::______RootMotion__FinalIK__VRIKCalibrator__CalibrationData__Target::__set_localRotation(::UnityEngine::Quaternion value)  {
::cordl_internals::setInstanceField<::UnityEngine::Quaternion, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Quaternion>(value));
}
constexpr ::UnityEngine::Quaternion ::GlobalNamespace::______RootMotion__FinalIK__VRIKCalibrator__CalibrationData__Target::__get_localRotation() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Quaternion, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "t", ty: "::UnityEngine::Transform", modifiers: "", def_value: None }]
 ::GlobalNamespace::______RootMotion__FinalIK__VRIKCalibrator__CalibrationData__Target::______RootMotion__FinalIK__VRIKCalibrator__CalibrationData__Target(::UnityEngine::Transform t)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<______RootMotion__FinalIK__VRIKCalibrator__CalibrationData__Target>(t))) {}
 void ::GlobalNamespace::______RootMotion__FinalIK__VRIKCalibrator__CalibrationData__Target::_ctor(::UnityEngine::Transform t)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::______RootMotion__FinalIK__VRIKCalibrator__CalibrationData__Target>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, t);
}
 void ::GlobalNamespace::______RootMotion__FinalIK__VRIKCalibrator__CalibrationData__Target::SetTo(::UnityEngine::Transform t)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::______RootMotion__FinalIK__VRIKCalibrator__CalibrationData__Target>::get(),
                            "SetTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, t);
}
//  Writing Method size for method: ::RootMotion::FinalIK::____RootMotion__FinalIK__VRIKCalibrator__CalibrationData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::____RootMotion__FinalIK__VRIKCalibrator__CalibrationData::*)()>(&::RootMotion::FinalIK::____RootMotion__FinalIK__VRIKCalibrator__CalibrationData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x120eb40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::____RootMotion__FinalIK__VRIKCalibrator__CalibrationData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::RootMotion::FinalIK::____RootMotion__FinalIK__VRIKCalibrator__CalibrationData::__set_scale(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::RootMotion::FinalIK::____RootMotion__FinalIK__VRIKCalibrator__CalibrationData::__get_scale() const {
return ::cordl_internals::getInstanceField<float_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::RootMotion::FinalIK::____RootMotion__FinalIK__VRIKCalibrator__CalibrationData::__set_head(::GlobalNamespace::______RootMotion__FinalIK__VRIKCalibrator__CalibrationData__Target value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::______RootMotion__FinalIK__VRIKCalibrator__CalibrationData__Target, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::______RootMotion__FinalIK__VRIKCalibrator__CalibrationData__Target>(value));
}
constexpr ::GlobalNamespace::______RootMotion__FinalIK__VRIKCalibrator__CalibrationData__Target ::RootMotion::FinalIK::____RootMotion__FinalIK__VRIKCalibrator__CalibrationData::__get_head() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::______RootMotion__FinalIK__VRIKCalibrator__CalibrationData__Target, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::RootMotion::FinalIK::____RootMotion__FinalIK__VRIKCalibrator__CalibrationData::__set_leftHand(::GlobalNamespace::______RootMotion__FinalIK__VRIKCalibrator__CalibrationData__Target value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::______RootMotion__FinalIK__VRIKCalibrator__CalibrationData__Target, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::______RootMotion__FinalIK__VRIKCalibrator__CalibrationData__Target>(value));
}
constexpr ::GlobalNamespace::______RootMotion__FinalIK__VRIKCalibrator__CalibrationData__Target ::RootMotion::FinalIK::____RootMotion__FinalIK__VRIKCalibrator__CalibrationData::__get_leftHand() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::______RootMotion__FinalIK__VRIKCalibrator__CalibrationData__Target, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::RootMotion::FinalIK::____RootMotion__FinalIK__VRIKCalibrator__CalibrationData::__set_rightHand(::GlobalNamespace::______RootMotion__FinalIK__VRIKCalibrator__CalibrationData__Target value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::______RootMotion__FinalIK__VRIKCalibrator__CalibrationData__Target, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::______RootMotion__FinalIK__VRIKCalibrator__CalibrationData__Target>(value));
}
constexpr ::GlobalNamespace::______RootMotion__FinalIK__VRIKCalibrator__CalibrationData__Target ::RootMotion::FinalIK::____RootMotion__FinalIK__VRIKCalibrator__CalibrationData::__get_rightHand() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::______RootMotion__FinalIK__VRIKCalibrator__CalibrationData__Target, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::RootMotion::FinalIK::____RootMotion__FinalIK__VRIKCalibrator__CalibrationData::__set_pelvis(::GlobalNamespace::______RootMotion__FinalIK__VRIKCalibrator__CalibrationData__Target value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::______RootMotion__FinalIK__VRIKCalibrator__CalibrationData__Target, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::______RootMotion__FinalIK__VRIKCalibrator__CalibrationData__Target>(value));
}
constexpr ::GlobalNamespace::______RootMotion__FinalIK__VRIKCalibrator__CalibrationData__Target ::RootMotion::FinalIK::____RootMotion__FinalIK__VRIKCalibrator__CalibrationData::__get_pelvis() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::______RootMotion__FinalIK__VRIKCalibrator__CalibrationData__Target, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::RootMotion::FinalIK::____RootMotion__FinalIK__VRIKCalibrator__CalibrationData::__set_leftFoot(::GlobalNamespace::______RootMotion__FinalIK__VRIKCalibrator__CalibrationData__Target value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::______RootMotion__FinalIK__VRIKCalibrator__CalibrationData__Target, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::______RootMotion__FinalIK__VRIKCalibrator__CalibrationData__Target>(value));
}
constexpr ::GlobalNamespace::______RootMotion__FinalIK__VRIKCalibrator__CalibrationData__Target ::RootMotion::FinalIK::____RootMotion__FinalIK__VRIKCalibrator__CalibrationData::__get_leftFoot() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::______RootMotion__FinalIK__VRIKCalibrator__CalibrationData__Target, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::RootMotion::FinalIK::____RootMotion__FinalIK__VRIKCalibrator__CalibrationData::__set_rightFoot(::GlobalNamespace::______RootMotion__FinalIK__VRIKCalibrator__CalibrationData__Target value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::______RootMotion__FinalIK__VRIKCalibrator__CalibrationData__Target, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::______RootMotion__FinalIK__VRIKCalibrator__CalibrationData__Target>(value));
}
constexpr ::GlobalNamespace::______RootMotion__FinalIK__VRIKCalibrator__CalibrationData__Target ::RootMotion::FinalIK::____RootMotion__FinalIK__VRIKCalibrator__CalibrationData::__get_rightFoot() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::______RootMotion__FinalIK__VRIKCalibrator__CalibrationData__Target, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::RootMotion::FinalIK::____RootMotion__FinalIK__VRIKCalibrator__CalibrationData::__set_leftLegGoal(::GlobalNamespace::______RootMotion__FinalIK__VRIKCalibrator__CalibrationData__Target value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::______RootMotion__FinalIK__VRIKCalibrator__CalibrationData__Target, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::______RootMotion__FinalIK__VRIKCalibrator__CalibrationData__Target>(value));
}
constexpr ::GlobalNamespace::______RootMotion__FinalIK__VRIKCalibrator__CalibrationData__Target ::RootMotion::FinalIK::____RootMotion__FinalIK__VRIKCalibrator__CalibrationData::__get_leftLegGoal() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::______RootMotion__FinalIK__VRIKCalibrator__CalibrationData__Target, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::RootMotion::FinalIK::____RootMotion__FinalIK__VRIKCalibrator__CalibrationData::__set_rightLegGoal(::GlobalNamespace::______RootMotion__FinalIK__VRIKCalibrator__CalibrationData__Target value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::______RootMotion__FinalIK__VRIKCalibrator__CalibrationData__Target, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::______RootMotion__FinalIK__VRIKCalibrator__CalibrationData__Target>(value));
}
constexpr ::GlobalNamespace::______RootMotion__FinalIK__VRIKCalibrator__CalibrationData__Target ::RootMotion::FinalIK::____RootMotion__FinalIK__VRIKCalibrator__CalibrationData::__get_rightLegGoal() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::______RootMotion__FinalIK__VRIKCalibrator__CalibrationData__Target, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::RootMotion::FinalIK::____RootMotion__FinalIK__VRIKCalibrator__CalibrationData::__set_pelvisTargetRight(::UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3 ::RootMotion::FinalIK::____RootMotion__FinalIK__VRIKCalibrator__CalibrationData::__get_pelvisTargetRight() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::RootMotion::FinalIK::____RootMotion__FinalIK__VRIKCalibrator__CalibrationData::__set_pelvisPositionWeight(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x64>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::RootMotion::FinalIK::____RootMotion__FinalIK__VRIKCalibrator__CalibrationData::__get_pelvisPositionWeight() const {
return ::cordl_internals::getInstanceField<float_t, 0x64>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::RootMotion::FinalIK::____RootMotion__FinalIK__VRIKCalibrator__CalibrationData::__set_pelvisRotationWeight(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x68>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::RootMotion::FinalIK::____RootMotion__FinalIK__VRIKCalibrator__CalibrationData::__get_pelvisRotationWeight() const {
return ::cordl_internals::getInstanceField<float_t, 0x68>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 ::RootMotion::FinalIK::____RootMotion__FinalIK__VRIKCalibrator__CalibrationData::____RootMotion__FinalIK__VRIKCalibrator__CalibrationData()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<____RootMotion__FinalIK__VRIKCalibrator__CalibrationData>())) {}
 void ::RootMotion::FinalIK::____RootMotion__FinalIK__VRIKCalibrator__CalibrationData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::____RootMotion__FinalIK__VRIKCalibrator__CalibrationData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: ::RootMotion::FinalIK::VRIKCalibrator.RecalibrateScale
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::RootMotion::FinalIK::VRIK, ::RootMotion::FinalIK::____RootMotion__FinalIK__VRIKCalibrator__Settings)>(&::RootMotion::FinalIK::VRIKCalibrator::RecalibrateScale)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x120d810;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::VRIKCalibrator>::get(),
                            "RecalibrateScale",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::VRIK>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::____RootMotion__FinalIK__VRIKCalibrator__Settings>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::VRIKCalibrator.Calibrate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::RootMotion::FinalIK::____RootMotion__FinalIK__VRIKCalibrator__CalibrationData (*)(::RootMotion::FinalIK::VRIK, ::RootMotion::FinalIK::____RootMotion__FinalIK__VRIKCalibrator__Settings, ::UnityEngine::Transform, ::UnityEngine::Transform, ::UnityEngine::Transform, ::UnityEngine::Transform, ::UnityEngine::Transform, ::UnityEngine::Transform)>(&::RootMotion::FinalIK::VRIKCalibrator::Calibrate)> {
  constexpr static std::size_t size = 0x123c;
  constexpr static std::size_t addrs = 0x120d904;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::VRIKCalibrator>::get(),
                            "Calibrate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::VRIK>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::____RootMotion__FinalIK__VRIKCalibrator__Settings>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::VRIKCalibrator.CalibrateLeg
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::RootMotion::FinalIK::____RootMotion__FinalIK__VRIKCalibrator__Settings, ::UnityEngine::Transform, ::RootMotion::FinalIK::____RootMotion__FinalIK__IKSolverVR__Leg, ::UnityEngine::Transform, ::UnityEngine::Vector3, bool)>(&::RootMotion::FinalIK::VRIKCalibrator::CalibrateLeg)> {
  constexpr static std::size_t size = 0x6b8;
  constexpr static std::size_t addrs = 0x120eb48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::VRIKCalibrator>::get(),
                            "CalibrateLeg",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::____RootMotion__FinalIK__VRIKCalibrator__Settings>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::____RootMotion__FinalIK__IKSolverVR__Leg>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::VRIKCalibrator.Calibrate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::RootMotion::FinalIK::VRIK, ::RootMotion::FinalIK::____RootMotion__FinalIK__VRIKCalibrator__CalibrationData, ::UnityEngine::Transform, ::UnityEngine::Transform, ::UnityEngine::Transform, ::UnityEngine::Transform, ::UnityEngine::Transform, ::UnityEngine::Transform)>(&::RootMotion::FinalIK::VRIKCalibrator::Calibrate)> {
  constexpr static std::size_t size = 0x8f4;
  constexpr static std::size_t addrs = 0x120f474;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::VRIKCalibrator>::get(),
                            "Calibrate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::VRIK>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::____RootMotion__FinalIK__VRIKCalibrator__CalibrationData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::VRIKCalibrator.CalibrateLeg
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::RootMotion::FinalIK::____RootMotion__FinalIK__VRIKCalibrator__CalibrationData, ::UnityEngine::Transform, ::RootMotion::FinalIK::____RootMotion__FinalIK__IKSolverVR__Leg, ::UnityEngine::Transform, ::UnityEngine::Vector3, bool)>(&::RootMotion::FinalIK::VRIKCalibrator::CalibrateLeg)> {
  constexpr static std::size_t size = 0x24c;
  constexpr static std::size_t addrs = 0x120fdc4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::VRIKCalibrator>::get(),
                            "CalibrateLeg",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::____RootMotion__FinalIK__VRIKCalibrator__CalibrationData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::____RootMotion__FinalIK__IKSolverVR__Leg>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
 void ::RootMotion::FinalIK::VRIKCalibrator::RecalibrateScale(::RootMotion::FinalIK::VRIK ik, ::RootMotion::FinalIK::____RootMotion__FinalIK__VRIKCalibrator__Settings settings)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::VRIKCalibrator>::get(),
                            "RecalibrateScale",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::VRIK>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::____RootMotion__FinalIK__VRIKCalibrator__Settings>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, ik, settings);
}
/// @param bodyTracker: ::UnityEngine::Transform (default: csnull)
/// @param leftHandTracker: ::UnityEngine::Transform (default: csnull)
/// @param rightHandTracker: ::UnityEngine::Transform (default: csnull)
/// @param leftFootTracker: ::UnityEngine::Transform (default: csnull)
/// @param rightFootTracker: ::UnityEngine::Transform (default: csnull)
 ::RootMotion::FinalIK::____RootMotion__FinalIK__VRIKCalibrator__CalibrationData ::RootMotion::FinalIK::VRIKCalibrator::Calibrate(::RootMotion::FinalIK::VRIK ik, ::RootMotion::FinalIK::____RootMotion__FinalIK__VRIKCalibrator__Settings settings, ::UnityEngine::Transform headTracker, ::UnityEngine::Transform bodyTracker, ::UnityEngine::Transform leftHandTracker, ::UnityEngine::Transform rightHandTracker, ::UnityEngine::Transform leftFootTracker, ::UnityEngine::Transform rightFootTracker)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::VRIKCalibrator>::get(),
                            "Calibrate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::VRIK>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::____RootMotion__FinalIK__VRIKCalibrator__Settings>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::RootMotion::FinalIK::____RootMotion__FinalIK__VRIKCalibrator__CalibrationData, false>(nullptr, ___internal_method, ik, settings, headTracker, bodyTracker, leftHandTracker, rightHandTracker, leftFootTracker, rightFootTracker);
}
 void ::RootMotion::FinalIK::VRIKCalibrator::CalibrateLeg(::RootMotion::FinalIK::____RootMotion__FinalIK__VRIKCalibrator__Settings settings, ::UnityEngine::Transform tracker, ::RootMotion::FinalIK::____RootMotion__FinalIK__IKSolverVR__Leg leg, ::UnityEngine::Transform lastBone, ::UnityEngine::Vector3 rootForward, bool isLeft)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::VRIKCalibrator>::get(),
                            "CalibrateLeg",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::____RootMotion__FinalIK__VRIKCalibrator__Settings>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::____RootMotion__FinalIK__IKSolverVR__Leg>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, settings, tracker, leg, lastBone, rootForward, isLeft);
}
/// @param bodyTracker: ::UnityEngine::Transform (default: csnull)
/// @param leftHandTracker: ::UnityEngine::Transform (default: csnull)
/// @param rightHandTracker: ::UnityEngine::Transform (default: csnull)
/// @param leftFootTracker: ::UnityEngine::Transform (default: csnull)
/// @param rightFootTracker: ::UnityEngine::Transform (default: csnull)
 void ::RootMotion::FinalIK::VRIKCalibrator::Calibrate(::RootMotion::FinalIK::VRIK ik, ::RootMotion::FinalIK::____RootMotion__FinalIK__VRIKCalibrator__CalibrationData data, ::UnityEngine::Transform headTracker, ::UnityEngine::Transform bodyTracker, ::UnityEngine::Transform leftHandTracker, ::UnityEngine::Transform rightHandTracker, ::UnityEngine::Transform leftFootTracker, ::UnityEngine::Transform rightFootTracker)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::VRIKCalibrator>::get(),
                            "Calibrate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::VRIK>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::____RootMotion__FinalIK__VRIKCalibrator__CalibrationData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, ik, data, headTracker, bodyTracker, leftHandTracker, rightHandTracker, leftFootTracker, rightFootTracker);
}
 void ::RootMotion::FinalIK::VRIKCalibrator::CalibrateLeg(::RootMotion::FinalIK::____RootMotion__FinalIK__VRIKCalibrator__CalibrationData data, ::UnityEngine::Transform tracker, ::RootMotion::FinalIK::____RootMotion__FinalIK__IKSolverVR__Leg leg, ::UnityEngine::Transform lastBone, ::UnityEngine::Vector3 rootForward, bool isLeft)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::VRIKCalibrator>::get(),
                            "CalibrateLeg",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::____RootMotion__FinalIK__VRIKCalibrator__CalibrationData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::____RootMotion__FinalIK__IKSolverVR__Leg>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, data, tracker, leg, lastBone, rootForward, isLeft);
}
} // end anonymous namespace
