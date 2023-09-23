#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "RootMotion/FinalIK/zzzz__LookAtController_def.hpp"
#include "RootMotion/FinalIK/zzzz__LookAtIK_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: RootMotion::FinalIK::LookAtController.Start
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::LookAtController::*)()>(&RootMotion::FinalIK::LookAtController::Start)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x1209f28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::LookAtController>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::FinalIK::LookAtController.LateUpdate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::LookAtController::*)()>(&RootMotion::FinalIK::LookAtController::LateUpdate)> {
  constexpr static std::size_t size = 0x4e8;
  constexpr static std::size_t addrs = 0x120a014;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::LookAtController>::get(),
                            "LateUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::FinalIK::LookAtController.get_pivot
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (RootMotion::FinalIK::LookAtController::*)()>(&RootMotion::FinalIK::LookAtController::get_pivot)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x1209f90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::LookAtController>::get(),
                            "get_pivot",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::FinalIK::LookAtController.ApplyMinDistance
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::LookAtController::*)()>(&RootMotion::FinalIK::LookAtController::ApplyMinDistance)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x120a4fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::LookAtController>::get(),
                            "ApplyMinDistance",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::FinalIK::LookAtController.RootRotation
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::LookAtController::*)()>(&RootMotion::FinalIK::LookAtController::RootRotation)> {
  constexpr static std::size_t size = 0x24c;
  constexpr static std::size_t addrs = 0x120a680;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::LookAtController>::get(),
                            "RootRotation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::FinalIK::LookAtController._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::LookAtController::*)()>(&RootMotion::FinalIK::LookAtController::_ctor)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x120a8cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::LookAtController>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void RootMotion::FinalIK::LookAtController::__set_ik(RootMotion::FinalIK::LookAtIK value)  {
::cordl_internals::setInstanceField<RootMotion::FinalIK::LookAtIK, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<RootMotion::FinalIK::LookAtIK>(value));
}
constexpr RootMotion::FinalIK::LookAtIK RootMotion::FinalIK::LookAtController::__get_ik() const {
return ::cordl_internals::getInstanceField<RootMotion::FinalIK::LookAtIK, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::LookAtController::__set_target(UnityEngine::Transform value)  {
::cordl_internals::setInstanceField<UnityEngine::Transform, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Transform>(value));
}
constexpr UnityEngine::Transform RootMotion::FinalIK::LookAtController::__get_target() const {
return ::cordl_internals::getInstanceField<UnityEngine::Transform, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::LookAtController::__set_weight(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t RootMotion::FinalIK::LookAtController::__get_weight() const {
return ::cordl_internals::getInstanceField<float_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::LookAtController::__set_offset(UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<UnityEngine::Vector3, 0x2c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Vector3>(value));
}
constexpr UnityEngine::Vector3 RootMotion::FinalIK::LookAtController::__get_offset() const {
return ::cordl_internals::getInstanceField<UnityEngine::Vector3, 0x2c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::LookAtController::__set_targetSwitchSmoothTime(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t RootMotion::FinalIK::LookAtController::__get_targetSwitchSmoothTime() const {
return ::cordl_internals::getInstanceField<float_t, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::LookAtController::__set_weightSmoothTime(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x3c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t RootMotion::FinalIK::LookAtController::__get_weightSmoothTime() const {
return ::cordl_internals::getInstanceField<float_t, 0x3c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::LookAtController::__set_smoothTurnTowardsTarget(bool value)  {
::cordl_internals::setInstanceField<bool, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool RootMotion::FinalIK::LookAtController::__get_smoothTurnTowardsTarget() const {
return ::cordl_internals::getInstanceField<bool, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::LookAtController::__set_maxRadiansDelta(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x44>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t RootMotion::FinalIK::LookAtController::__get_maxRadiansDelta() const {
return ::cordl_internals::getInstanceField<float_t, 0x44>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::LookAtController::__set_maxMagnitudeDelta(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t RootMotion::FinalIK::LookAtController::__get_maxMagnitudeDelta() const {
return ::cordl_internals::getInstanceField<float_t, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::LookAtController::__set_slerpSpeed(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x4c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t RootMotion::FinalIK::LookAtController::__get_slerpSpeed() const {
return ::cordl_internals::getInstanceField<float_t, 0x4c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::LookAtController::__set_pivotOffsetFromRoot(UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<UnityEngine::Vector3, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Vector3>(value));
}
constexpr UnityEngine::Vector3 RootMotion::FinalIK::LookAtController::__get_pivotOffsetFromRoot() const {
return ::cordl_internals::getInstanceField<UnityEngine::Vector3, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::LookAtController::__set_minDistance(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x5c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t RootMotion::FinalIK::LookAtController::__get_minDistance() const {
return ::cordl_internals::getInstanceField<float_t, 0x5c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::LookAtController::__set_maxRootAngle(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x60>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t RootMotion::FinalIK::LookAtController::__get_maxRootAngle() const {
return ::cordl_internals::getInstanceField<float_t, 0x60>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::LookAtController::__set_lastTarget(UnityEngine::Transform value)  {
::cordl_internals::setInstanceField<UnityEngine::Transform, 0x68>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Transform>(value));
}
constexpr UnityEngine::Transform RootMotion::FinalIK::LookAtController::__get_lastTarget() const {
return ::cordl_internals::getInstanceField<UnityEngine::Transform, 0x68>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::LookAtController::__set_switchWeight(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x70>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t RootMotion::FinalIK::LookAtController::__get_switchWeight() const {
return ::cordl_internals::getInstanceField<float_t, 0x70>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::LookAtController::__set_switchWeightV(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x74>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t RootMotion::FinalIK::LookAtController::__get_switchWeightV() const {
return ::cordl_internals::getInstanceField<float_t, 0x74>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::LookAtController::__set_weightV(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x78>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t RootMotion::FinalIK::LookAtController::__get_weightV() const {
return ::cordl_internals::getInstanceField<float_t, 0x78>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::LookAtController::__set_lastPosition(UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<UnityEngine::Vector3, 0x7c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Vector3>(value));
}
constexpr UnityEngine::Vector3 RootMotion::FinalIK::LookAtController::__get_lastPosition() const {
return ::cordl_internals::getInstanceField<UnityEngine::Vector3, 0x7c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::LookAtController::__set_dir(UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<UnityEngine::Vector3, 0x88>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Vector3>(value));
}
constexpr UnityEngine::Vector3 RootMotion::FinalIK::LookAtController::__get_dir() const {
return ::cordl_internals::getInstanceField<UnityEngine::Vector3, 0x88>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::LookAtController::__set_lastSmoothTowardsTarget(bool value)  {
::cordl_internals::setInstanceField<bool, 0x94>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool RootMotion::FinalIK::LookAtController::__get_lastSmoothTowardsTarget() const {
return ::cordl_internals::getInstanceField<bool, 0x94>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void RootMotion::FinalIK::LookAtController::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::LookAtController>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void RootMotion::FinalIK::LookAtController::LateUpdate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::LookAtController>::get(),
                            "LateUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::Vector3 RootMotion::FinalIK::LookAtController::get_pivot()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::LookAtController>::get(),
                            "get_pivot",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Vector3, false>(const_cast<void*>(instance), ___internal_method);
}
 void RootMotion::FinalIK::LookAtController::ApplyMinDistance()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::LookAtController>::get(),
                            "ApplyMinDistance",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void RootMotion::FinalIK::LookAtController::RootRotation()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::LookAtController>::get(),
                            "RootRotation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 RootMotion::FinalIK::LookAtController::LookAtController()  : UnityEngine::MonoBehaviour(THROW_UNLESS(::il2cpp_utils::New<LookAtController>())) {}
 void RootMotion::FinalIK::LookAtController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::LookAtController>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
