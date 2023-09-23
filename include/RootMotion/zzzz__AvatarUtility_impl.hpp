#pragma once
#include "RootMotion/zzzz__AvatarUtility_def.hpp"
#include "UnityEngine/zzzz__Avatar_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__HumanBodyBones_def.hpp"
#include "UnityEngine/zzzz__AvatarIKGoal_def.hpp"
#include "RootMotion/zzzz__TQ_def.hpp"
//  Writing Method size for method: RootMotion::AvatarUtility.GetPostRotation
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Quaternion (*)(UnityEngine::Avatar, UnityEngine::AvatarIKGoal)>(&RootMotion::AvatarUtility::GetPostRotation)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x11a7a3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::AvatarUtility>::get(),
                            "GetPostRotation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Avatar>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::AvatarIKGoal>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::AvatarUtility.GetIKGoalTQ
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<RootMotion::TQ (*)(UnityEngine::Avatar, float_t, UnityEngine::AvatarIKGoal, RootMotion::TQ, RootMotion::TQ)>(&RootMotion::AvatarUtility::GetIKGoalTQ)> {
  constexpr static std::size_t size = 0x658;
  constexpr static std::size_t addrs = 0x11a7c8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::AvatarUtility>::get(),
                            "GetIKGoalTQ",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Avatar>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::AvatarIKGoal>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<RootMotion::TQ>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<RootMotion::TQ>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::AvatarUtility.HumanIDFromAvatarIKGoal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::HumanBodyBones (*)(UnityEngine::AvatarIKGoal)>(&RootMotion::AvatarUtility::HumanIDFromAvatarIKGoal)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x11a7c6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::AvatarUtility>::get(),
                            "HumanIDFromAvatarIKGoal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::AvatarIKGoal>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::AvatarUtility._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::AvatarUtility::*)()>(&RootMotion::AvatarUtility::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x11a82e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::AvatarUtility>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 UnityEngine::Quaternion RootMotion::AvatarUtility::GetPostRotation(UnityEngine::Avatar avatar, UnityEngine::AvatarIKGoal avatarIKGoal)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::AvatarUtility>::get(),
                            "GetPostRotation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Avatar>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::AvatarIKGoal>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Quaternion, false>(nullptr, ___internal_method, avatar, avatarIKGoal);
}
 RootMotion::TQ RootMotion::AvatarUtility::GetIKGoalTQ(UnityEngine::Avatar avatar, float_t humanScale, UnityEngine::AvatarIKGoal avatarIKGoal, RootMotion::TQ bodyPositionRotation, RootMotion::TQ boneTQ)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::AvatarUtility>::get(),
                            "GetIKGoalTQ",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Avatar>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::AvatarIKGoal>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<RootMotion::TQ>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<RootMotion::TQ>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<RootMotion::TQ, false>(nullptr, ___internal_method, avatar, humanScale, avatarIKGoal, bodyPositionRotation, boneTQ);
}
 UnityEngine::HumanBodyBones RootMotion::AvatarUtility::HumanIDFromAvatarIKGoal(UnityEngine::AvatarIKGoal avatarIKGoal)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::AvatarUtility>::get(),
                            "HumanIDFromAvatarIKGoal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::AvatarIKGoal>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::HumanBodyBones, false>(nullptr, ___internal_method, avatarIKGoal);
}
// Ctor Parameters []
 RootMotion::AvatarUtility::AvatarUtility()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<AvatarUtility>())) {}
 void RootMotion::AvatarUtility::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::AvatarUtility>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
