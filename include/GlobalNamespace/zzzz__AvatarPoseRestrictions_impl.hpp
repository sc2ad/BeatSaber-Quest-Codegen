#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__AvatarPoseRestrictions_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "GlobalNamespace/zzzz__AvatarPoseController_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
//  Writing Method size for method: GlobalNamespace::AvatarPoseRestrictions.Start
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AvatarPoseRestrictions::*)()>(&GlobalNamespace::AvatarPoseRestrictions::Start)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x20c04d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::AvatarPoseRestrictions>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::AvatarPoseRestrictions.HandleAvatarPoseControllerPositionsWillBeSet
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AvatarPoseRestrictions::*)(UnityEngine::Quaternion, UnityEngine::Vector3, UnityEngine::Vector3, UnityEngine::Vector3, ByRef<UnityEngine::Vector3>, ByRef<UnityEngine::Vector3>, ByRef<UnityEngine::Vector3>)>(&GlobalNamespace::AvatarPoseRestrictions::HandleAvatarPoseControllerPositionsWillBeSet)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x20c0554;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::AvatarPoseRestrictions>::get(),
                            "HandleAvatarPoseControllerPositionsWillBeSet",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Quaternion>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::Vector3>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::Vector3>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::Vector3>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::AvatarPoseRestrictions.LimitHandPositionRelativeToHead
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (GlobalNamespace::AvatarPoseRestrictions::*)(UnityEngine::Vector3, UnityEngine::Vector3)>(&GlobalNamespace::AvatarPoseRestrictions::LimitHandPositionRelativeToHead)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x20c0730;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::AvatarPoseRestrictions>::get(),
                            "LimitHandPositionRelativeToHead",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::AvatarPoseRestrictions._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AvatarPoseRestrictions::*)()>(&GlobalNamespace::AvatarPoseRestrictions::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x20c07c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::AvatarPoseRestrictions>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::AvatarPoseRestrictions::__set__maxHeadSquareDistanceFromCenter(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::AvatarPoseRestrictions::__get__maxHeadSquareDistanceFromCenter() const {
return ::cordl_internals::getInstanceField<float_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::AvatarPoseRestrictions::__set__minHeadYPos(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::AvatarPoseRestrictions::__get__minHeadYPos() const {
return ::cordl_internals::getInstanceField<float_t, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::AvatarPoseRestrictions::__set__maxHeadYPos(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::AvatarPoseRestrictions::__get__maxHeadYPos() const {
return ::cordl_internals::getInstanceField<float_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::AvatarPoseRestrictions::__set__minHandXZSquareDistanceFromHeadCenter(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x24>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::AvatarPoseRestrictions::__get__minHandXZSquareDistanceFromHeadCenter() const {
return ::cordl_internals::getInstanceField<float_t, 0x24>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::AvatarPoseRestrictions::__set__maxHandXZSquareDistanceFromHeadCenter(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::AvatarPoseRestrictions::__get__maxHandXZSquareDistanceFromHeadCenter() const {
return ::cordl_internals::getInstanceField<float_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::AvatarPoseRestrictions::__set__minHandYDistanceFromHeadCenter(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x2c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::AvatarPoseRestrictions::__get__minHandYDistanceFromHeadCenter() const {
return ::cordl_internals::getInstanceField<float_t, 0x2c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::AvatarPoseRestrictions::__set__maxHandYDistanceFromHeadCenter(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::AvatarPoseRestrictions::__get__maxHandYDistanceFromHeadCenter() const {
return ::cordl_internals::getInstanceField<float_t, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::AvatarPoseRestrictions::__set__forceHeadPosition(bool value)  {
::cordl_internals::setInstanceField<bool, 0x34>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::AvatarPoseRestrictions::__get__forceHeadPosition() const {
return ::cordl_internals::getInstanceField<bool, 0x34>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::AvatarPoseRestrictions::__set__centerHeadOffset(UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<UnityEngine::Vector3, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Vector3>(value));
}
constexpr UnityEngine::Vector3 GlobalNamespace::AvatarPoseRestrictions::__get__centerHeadOffset() const {
return ::cordl_internals::getInstanceField<UnityEngine::Vector3, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::AvatarPoseRestrictions::__set__avatarPoseController(GlobalNamespace::AvatarPoseController value)  {
::cordl_internals::setInstanceField<GlobalNamespace::AvatarPoseController, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::AvatarPoseController>(value));
}
constexpr GlobalNamespace::AvatarPoseController GlobalNamespace::AvatarPoseRestrictions::__get__avatarPoseController() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::AvatarPoseController, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void GlobalNamespace::AvatarPoseRestrictions::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::AvatarPoseRestrictions>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::AvatarPoseRestrictions::HandleAvatarPoseControllerPositionsWillBeSet(UnityEngine::Quaternion headRotation, UnityEngine::Vector3 headPosition, UnityEngine::Vector3 leftHandPosition, UnityEngine::Vector3 rightHandPosition, ByRef<UnityEngine::Vector3> newHeadPosition, ByRef<UnityEngine::Vector3> newLeftHandPosition, ByRef<UnityEngine::Vector3> newRightHandPosition)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::AvatarPoseRestrictions>::get(),
                            "HandleAvatarPoseControllerPositionsWillBeSet",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Quaternion>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::Vector3>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::Vector3>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::Vector3>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, headRotation, headPosition, leftHandPosition, rightHandPosition, newHeadPosition, newLeftHandPosition, newRightHandPosition);
}
 UnityEngine::Vector3 GlobalNamespace::AvatarPoseRestrictions::LimitHandPositionRelativeToHead(UnityEngine::Vector3 handPosition, UnityEngine::Vector3 headCenter)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::AvatarPoseRestrictions>::get(),
                            "LimitHandPositionRelativeToHead",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Vector3, false>(const_cast<void*>(instance), ___internal_method, handPosition, headCenter);
}
// Ctor Parameters []
 GlobalNamespace::AvatarPoseRestrictions::AvatarPoseRestrictions()  : UnityEngine::MonoBehaviour(THROW_UNLESS(::il2cpp_utils::New<AvatarPoseRestrictions>())) {}
 void GlobalNamespace::AvatarPoseRestrictions::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::AvatarPoseRestrictions>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
