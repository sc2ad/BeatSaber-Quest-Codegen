#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__OVRTrackedKeyboardHands_def.hpp"
#include "UnityEngine/zzzz__SkinnedMeshRenderer_def.hpp"
#include "GlobalNamespace/zzzz__OVRSkeleton_def.hpp"
#include "GlobalNamespace/zzzz__OVRHand_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "GlobalNamespace/zzzz__OVRTrackedKeyboard_def.hpp"
#include "GlobalNamespace/zzzz__OVRTrackedKeyboard_def.hpp"
#include "GlobalNamespace/zzzz__OVRMeshRenderer_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "GlobalNamespace/zzzz__OVRSkeletonRenderer_def.hpp"
#include "GlobalNamespace/zzzz__OVRCameraRig_def.hpp"
#include "GlobalNamespace/zzzz__OVRTrackedKeyboard_def.hpp"
#include "GlobalNamespace/zzzz__OVRSkeleton_def.hpp"
// Ctor Parameters [CppParam { name: "LeftHandTransform", ty: "UnityEngine::Transform", modifiers: "", def_value: Some("csnull") }, CppParam { name: "LeftPresenceTransform", ty: "UnityEngine::Transform", modifiers: "", def_value: Some("csnull") }, CppParam { name: "RightHandTransform", ty: "UnityEngine::Transform", modifiers: "", def_value: Some("csnull") }, CppParam { name: "RightPresenceTransform", ty: "UnityEngine::Transform", modifiers: "", def_value: Some("csnull") }, CppParam { name: "BoneName", ty: "GlobalNamespace::GlobalNamespace__OVRSkeleton__BoneId", modifiers: "", def_value: Some("{}") }, CppParam { name: "HandPresenceLeftBoneName", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "HandPresenceRightBoneName", ty: "::StringW", modifiers: "", def_value: Some("csnull") }]
constexpr GlobalNamespace::GlobalNamespace__OVRTrackedKeyboardHands__HandBoneMapping::GlobalNamespace__OVRTrackedKeyboardHands__HandBoneMapping(UnityEngine::Transform LeftHandTransform, UnityEngine::Transform LeftPresenceTransform, UnityEngine::Transform RightHandTransform, UnityEngine::Transform RightPresenceTransform, GlobalNamespace::GlobalNamespace__OVRSkeleton__BoneId BoneName, ::StringW HandPresenceLeftBoneName, ::StringW HandPresenceRightBoneName) noexcept : ::bs_hook::ValueTypeWrapper() {this->LeftHandTransform = LeftHandTransform;
this->LeftPresenceTransform = LeftPresenceTransform;
this->RightHandTransform = RightHandTransform;
this->RightPresenceTransform = RightPresenceTransform;
this->BoneName = BoneName;
this->HandPresenceLeftBoneName = HandPresenceLeftBoneName;
this->HandPresenceRightBoneName = HandPresenceRightBoneName;
}
constexpr void GlobalNamespace::GlobalNamespace__OVRTrackedKeyboardHands__HandBoneMapping::__set_LeftHandTransform(UnityEngine::Transform value)  {
::cordl_internals::setInstanceField<UnityEngine::Transform, 0x0>(this->__instance, std::forward<UnityEngine::Transform>(value));
}
constexpr UnityEngine::Transform GlobalNamespace::GlobalNamespace__OVRTrackedKeyboardHands__HandBoneMapping::__get_LeftHandTransform() const {
return ::cordl_internals::getInstanceField<UnityEngine::Transform, 0x0>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OVRTrackedKeyboardHands__HandBoneMapping::__set_LeftPresenceTransform(UnityEngine::Transform value)  {
::cordl_internals::setInstanceField<UnityEngine::Transform, 0x8>(this->__instance, std::forward<UnityEngine::Transform>(value));
}
constexpr UnityEngine::Transform GlobalNamespace::GlobalNamespace__OVRTrackedKeyboardHands__HandBoneMapping::__get_LeftPresenceTransform() const {
return ::cordl_internals::getInstanceField<UnityEngine::Transform, 0x8>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OVRTrackedKeyboardHands__HandBoneMapping::__set_RightHandTransform(UnityEngine::Transform value)  {
::cordl_internals::setInstanceField<UnityEngine::Transform, 0x10>(this->__instance, std::forward<UnityEngine::Transform>(value));
}
constexpr UnityEngine::Transform GlobalNamespace::GlobalNamespace__OVRTrackedKeyboardHands__HandBoneMapping::__get_RightHandTransform() const {
return ::cordl_internals::getInstanceField<UnityEngine::Transform, 0x10>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OVRTrackedKeyboardHands__HandBoneMapping::__set_RightPresenceTransform(UnityEngine::Transform value)  {
::cordl_internals::setInstanceField<UnityEngine::Transform, 0x18>(this->__instance, std::forward<UnityEngine::Transform>(value));
}
constexpr UnityEngine::Transform GlobalNamespace::GlobalNamespace__OVRTrackedKeyboardHands__HandBoneMapping::__get_RightPresenceTransform() const {
return ::cordl_internals::getInstanceField<UnityEngine::Transform, 0x18>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OVRTrackedKeyboardHands__HandBoneMapping::__set_BoneName(GlobalNamespace::GlobalNamespace__OVRSkeleton__BoneId value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__OVRSkeleton__BoneId, 0x20>(this->__instance, std::forward<GlobalNamespace::GlobalNamespace__OVRSkeleton__BoneId>(value));
}
constexpr GlobalNamespace::GlobalNamespace__OVRSkeleton__BoneId GlobalNamespace::GlobalNamespace__OVRTrackedKeyboardHands__HandBoneMapping::__get_BoneName() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__OVRSkeleton__BoneId, 0x20>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OVRTrackedKeyboardHands__HandBoneMapping::__set_HandPresenceLeftBoneName(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x28>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW GlobalNamespace::GlobalNamespace__OVRTrackedKeyboardHands__HandBoneMapping::__get_HandPresenceLeftBoneName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x28>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OVRTrackedKeyboardHands__HandBoneMapping::__set_HandPresenceRightBoneName(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x30>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW GlobalNamespace::GlobalNamespace__OVRTrackedKeyboardHands__HandBoneMapping::__get_HandPresenceRightBoneName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x30>(this->__instance);
}
// Ctor Parameters [CppParam { name: "leftVisible", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "rightVisible", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__OVRTrackedKeyboardHands__TrackedKeyboardHandsVisibilityChangedEvent::GlobalNamespace__OVRTrackedKeyboardHands__TrackedKeyboardHandsVisibilityChangedEvent(bool leftVisible, bool rightVisible) noexcept : ::bs_hook::ValueTypeWrapper() {this->leftVisible = leftVisible;
this->rightVisible = rightVisible;
}
constexpr void GlobalNamespace::GlobalNamespace__OVRTrackedKeyboardHands__TrackedKeyboardHandsVisibilityChangedEvent::__set_leftVisible(bool value)  {
::cordl_internals::setInstanceField<bool, 0x0>(this->__instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::GlobalNamespace__OVRTrackedKeyboardHands__TrackedKeyboardHandsVisibilityChangedEvent::__get_leftVisible() const {
return ::cordl_internals::getInstanceField<bool, 0x0>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OVRTrackedKeyboardHands__TrackedKeyboardHandsVisibilityChangedEvent::__set_rightVisible(bool value)  {
::cordl_internals::setInstanceField<bool, 0x1>(this->__instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::GlobalNamespace__OVRTrackedKeyboardHands__TrackedKeyboardHandsVisibilityChangedEvent::__get_rightVisible() const {
return ::cordl_internals::getInstanceField<bool, 0x1>(this->__instance);
}
//  Writing Method size for method: GlobalNamespace::OVRTrackedKeyboardHands.get_RightHandOverKeyboard
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::OVRTrackedKeyboardHands::*)()>(&GlobalNamespace::OVRTrackedKeyboardHands::get_RightHandOverKeyboard)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26160e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRTrackedKeyboardHands>::get(),
                            "get_RightHandOverKeyboard",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRTrackedKeyboardHands.set_RightHandOverKeyboard
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRTrackedKeyboardHands::*)(bool)>(&GlobalNamespace::OVRTrackedKeyboardHands::set_RightHandOverKeyboard)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x26160f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRTrackedKeyboardHands>::get(),
                            "set_RightHandOverKeyboard",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRTrackedKeyboardHands.get_LeftHandOverKeyboard
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::OVRTrackedKeyboardHands::*)()>(&GlobalNamespace::OVRTrackedKeyboardHands::get_LeftHandOverKeyboard)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26160fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRTrackedKeyboardHands>::get(),
                            "get_LeftHandOverKeyboard",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRTrackedKeyboardHands.set_LeftHandOverKeyboard
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRTrackedKeyboardHands::*)(bool)>(&GlobalNamespace::OVRTrackedKeyboardHands::set_LeftHandOverKeyboard)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2616104;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRTrackedKeyboardHands>::get(),
                            "set_LeftHandOverKeyboard",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRTrackedKeyboardHands.Awake
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRTrackedKeyboardHands::*)()>(&GlobalNamespace::OVRTrackedKeyboardHands::Awake)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x2616110;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRTrackedKeyboardHands>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRTrackedKeyboardHands.Start
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRTrackedKeyboardHands::*)()>(&GlobalNamespace::OVRTrackedKeyboardHands::Start)> {
  constexpr static std::size_t size = 0x290;
  constexpr static std::size_t addrs = 0x26162f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRTrackedKeyboardHands>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRTrackedKeyboardHands.get_AreControllersActive
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::OVRTrackedKeyboardHands::*)()>(&GlobalNamespace::OVRTrackedKeyboardHands::get_AreControllersActive)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x26166f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRTrackedKeyboardHands>::get(),
                            "get_AreControllersActive",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRTrackedKeyboardHands.LateUpdate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRTrackedKeyboardHands::*)()>(&GlobalNamespace::OVRTrackedKeyboardHands::LateUpdate)> {
  constexpr static std::size_t size = 0x7e0;
  constexpr static std::size_t addrs = 0x2616730;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRTrackedKeyboardHands>::get(),
                            "LateUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRTrackedKeyboardHands.ShouldEnablePassthrough
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::OVRTrackedKeyboardHands::*)(float_t)>(&GlobalNamespace::OVRTrackedKeyboardHands::ShouldEnablePassthrough)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x26172d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRTrackedKeyboardHands>::get(),
                            "ShouldEnablePassthrough",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRTrackedKeyboardHands.ShouldEnableModel
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::OVRTrackedKeyboardHands::*)(float_t)>(&GlobalNamespace::OVRTrackedKeyboardHands::ShouldEnableModel)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2617344;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRTrackedKeyboardHands>::get(),
                            "ShouldEnableModel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRTrackedKeyboardHands.GetHandDistanceToKeyboard
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (GlobalNamespace::OVRTrackedKeyboardHands::*)(GlobalNamespace::OVRSkeleton)>(&GlobalNamespace::OVRTrackedKeyboardHands::GetHandDistanceToKeyboard)> {
  constexpr static std::size_t size = 0x2dc;
  constexpr static std::size_t addrs = 0x2616ffc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRTrackedKeyboardHands>::get(),
                            "GetHandDistanceToKeyboard",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::OVRSkeleton>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRTrackedKeyboardHands.ComputeOpacity
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (GlobalNamespace::OVRTrackedKeyboardHands::*)(float_t, float_t, float_t)>(&GlobalNamespace::OVRTrackedKeyboardHands::ComputeOpacity)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x26175b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRTrackedKeyboardHands>::get(),
                            "ComputeOpacity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRTrackedKeyboardHands.SetHandModelsEnabled
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRTrackedKeyboardHands::*)(bool, bool)>(&GlobalNamespace::OVRTrackedKeyboardHands::SetHandModelsEnabled)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0x26173b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRTrackedKeyboardHands>::get(),
                            "SetHandModelsEnabled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRTrackedKeyboardHands.RetargetHandTrackingToHandPresence
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRTrackedKeyboardHands::*)()>(&GlobalNamespace::OVRTrackedKeyboardHands::RetargetHandTrackingToHandPresence)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x2616584;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRTrackedKeyboardHands>::get(),
                            "RetargetHandTrackingToHandPresence",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRTrackedKeyboardHands.StopHandPresence
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRTrackedKeyboardHands::*)()>(&GlobalNamespace::OVRTrackedKeyboardHands::StopHandPresence)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x26175dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRTrackedKeyboardHands>::get(),
                            "StopHandPresence",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRTrackedKeyboardHands.DisableHandObjects
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRTrackedKeyboardHands::*)()>(&GlobalNamespace::OVRTrackedKeyboardHands::DisableHandObjects)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x2616f10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRTrackedKeyboardHands>::get(),
                            "DisableHandObjects",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRTrackedKeyboardHands.TrackedKeyboardActiveUpdated
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRTrackedKeyboardHands::*)(GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard__TrackedKeyboardSetActiveEvent)>(&GlobalNamespace::OVRTrackedKeyboardHands::TrackedKeyboardActiveUpdated)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x261760c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRTrackedKeyboardHands>::get(),
                            "TrackedKeyboardActiveUpdated",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard__TrackedKeyboardSetActiveEvent>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRTrackedKeyboardHands.TrackedKeyboardVisibilityChanged
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRTrackedKeyboardHands::*)(GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard__TrackedKeyboardVisibilityChangedEvent)>(&GlobalNamespace::OVRTrackedKeyboardHands::TrackedKeyboardVisibilityChanged)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x2617618;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRTrackedKeyboardHands>::get(),
                            "TrackedKeyboardVisibilityChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard__TrackedKeyboardVisibilityChangedEvent>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRTrackedKeyboardHands._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRTrackedKeyboardHands::*)()>(&GlobalNamespace::OVRTrackedKeyboardHands::_ctor)> {
  constexpr static std::size_t size = 0x750;
  constexpr static std::size_t addrs = 0x26177c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRTrackedKeyboardHands>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::OVRTrackedKeyboardHands::__set_LeftHandPresence(UnityEngine::GameObject value)  {
::cordl_internals::setInstanceField<UnityEngine::GameObject, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::GameObject>(value));
}
constexpr UnityEngine::GameObject GlobalNamespace::OVRTrackedKeyboardHands::__get_LeftHandPresence() const {
return ::cordl_internals::getInstanceField<UnityEngine::GameObject, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OVRTrackedKeyboardHands::__set_RightHandPresence(UnityEngine::GameObject value)  {
::cordl_internals::setInstanceField<UnityEngine::GameObject, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::GameObject>(value));
}
constexpr UnityEngine::GameObject GlobalNamespace::OVRTrackedKeyboardHands::__get_RightHandPresence() const {
return ::cordl_internals::getInstanceField<UnityEngine::GameObject, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OVRTrackedKeyboardHands::__set_handPresenceInitialized_(bool value)  {
::cordl_internals::setInstanceField<bool, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::OVRTrackedKeyboardHands::__get_handPresenceInitialized_() const {
return ::cordl_internals::getInstanceField<bool, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OVRTrackedKeyboardHands::__set_leftHandRoot_(UnityEngine::Transform value)  {
::cordl_internals::setInstanceField<UnityEngine::Transform, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Transform>(value));
}
constexpr UnityEngine::Transform GlobalNamespace::OVRTrackedKeyboardHands::__get_leftHandRoot_() const {
return ::cordl_internals::getInstanceField<UnityEngine::Transform, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OVRTrackedKeyboardHands::__set_rightHandRoot_(UnityEngine::Transform value)  {
::cordl_internals::setInstanceField<UnityEngine::Transform, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Transform>(value));
}
constexpr UnityEngine::Transform GlobalNamespace::OVRTrackedKeyboardHands::__get_rightHandRoot_() const {
return ::cordl_internals::getInstanceField<UnityEngine::Transform, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OVRTrackedKeyboardHands::__set_KeyboardTracker(GlobalNamespace::OVRTrackedKeyboard value)  {
::cordl_internals::setInstanceField<GlobalNamespace::OVRTrackedKeyboard, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::OVRTrackedKeyboard>(value));
}
constexpr GlobalNamespace::OVRTrackedKeyboard GlobalNamespace::OVRTrackedKeyboardHands::__get_KeyboardTracker() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::OVRTrackedKeyboard, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OVRTrackedKeyboardHands::__set_cameraRig_(GlobalNamespace::OVRCameraRig value)  {
::cordl_internals::setInstanceField<GlobalNamespace::OVRCameraRig, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::OVRCameraRig>(value));
}
constexpr GlobalNamespace::OVRCameraRig GlobalNamespace::OVRTrackedKeyboardHands::__get_cameraRig_() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::OVRCameraRig, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OVRTrackedKeyboardHands::__set_leftHand_(GlobalNamespace::OVRHand value)  {
::cordl_internals::setInstanceField<GlobalNamespace::OVRHand, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::OVRHand>(value));
}
constexpr GlobalNamespace::OVRHand GlobalNamespace::OVRTrackedKeyboardHands::__get_leftHand_() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::OVRHand, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OVRTrackedKeyboardHands::__set_leftHandSkeleton_(GlobalNamespace::OVRSkeleton value)  {
::cordl_internals::setInstanceField<GlobalNamespace::OVRSkeleton, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::OVRSkeleton>(value));
}
constexpr GlobalNamespace::OVRSkeleton GlobalNamespace::OVRTrackedKeyboardHands::__get_leftHandSkeleton_() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::OVRSkeleton, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OVRTrackedKeyboardHands::__set_leftHandSkeletonRenderer_(GlobalNamespace::OVRSkeletonRenderer value)  {
::cordl_internals::setInstanceField<GlobalNamespace::OVRSkeletonRenderer, 0x60>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::OVRSkeletonRenderer>(value));
}
constexpr GlobalNamespace::OVRSkeletonRenderer GlobalNamespace::OVRTrackedKeyboardHands::__get_leftHandSkeletonRenderer_() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::OVRSkeletonRenderer, 0x60>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OVRTrackedKeyboardHands::__set_leftHandSkeletonRendererGO_(UnityEngine::GameObject value)  {
::cordl_internals::setInstanceField<UnityEngine::GameObject, 0x68>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::GameObject>(value));
}
constexpr UnityEngine::GameObject GlobalNamespace::OVRTrackedKeyboardHands::__get_leftHandSkeletonRendererGO_() const {
return ::cordl_internals::getInstanceField<UnityEngine::GameObject, 0x68>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OVRTrackedKeyboardHands::__set_leftHandSkinnedMeshRenderer_(UnityEngine::SkinnedMeshRenderer value)  {
::cordl_internals::setInstanceField<UnityEngine::SkinnedMeshRenderer, 0x70>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::SkinnedMeshRenderer>(value));
}
constexpr UnityEngine::SkinnedMeshRenderer GlobalNamespace::OVRTrackedKeyboardHands::__get_leftHandSkinnedMeshRenderer_() const {
return ::cordl_internals::getInstanceField<UnityEngine::SkinnedMeshRenderer, 0x70>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OVRTrackedKeyboardHands::__set_leftHandMeshRenderer_(GlobalNamespace::OVRMeshRenderer value)  {
::cordl_internals::setInstanceField<GlobalNamespace::OVRMeshRenderer, 0x78>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::OVRMeshRenderer>(value));
}
constexpr GlobalNamespace::OVRMeshRenderer GlobalNamespace::OVRTrackedKeyboardHands::__get_leftHandMeshRenderer_() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::OVRMeshRenderer, 0x78>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OVRTrackedKeyboardHands::__set_rightHand_(GlobalNamespace::OVRHand value)  {
::cordl_internals::setInstanceField<GlobalNamespace::OVRHand, 0x80>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::OVRHand>(value));
}
constexpr GlobalNamespace::OVRHand GlobalNamespace::OVRTrackedKeyboardHands::__get_rightHand_() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::OVRHand, 0x80>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OVRTrackedKeyboardHands::__set_rightHandSkeleton_(GlobalNamespace::OVRSkeleton value)  {
::cordl_internals::setInstanceField<GlobalNamespace::OVRSkeleton, 0x88>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::OVRSkeleton>(value));
}
constexpr GlobalNamespace::OVRSkeleton GlobalNamespace::OVRTrackedKeyboardHands::__get_rightHandSkeleton_() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::OVRSkeleton, 0x88>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OVRTrackedKeyboardHands::__set_rightHandSkeletonRenderer_(GlobalNamespace::OVRSkeletonRenderer value)  {
::cordl_internals::setInstanceField<GlobalNamespace::OVRSkeletonRenderer, 0x90>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::OVRSkeletonRenderer>(value));
}
constexpr GlobalNamespace::OVRSkeletonRenderer GlobalNamespace::OVRTrackedKeyboardHands::__get_rightHandSkeletonRenderer_() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::OVRSkeletonRenderer, 0x90>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OVRTrackedKeyboardHands::__set_rightHandSkeletonRendererGO_(UnityEngine::GameObject value)  {
::cordl_internals::setInstanceField<UnityEngine::GameObject, 0x98>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::GameObject>(value));
}
constexpr UnityEngine::GameObject GlobalNamespace::OVRTrackedKeyboardHands::__get_rightHandSkeletonRendererGO_() const {
return ::cordl_internals::getInstanceField<UnityEngine::GameObject, 0x98>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OVRTrackedKeyboardHands::__set_rightHandMeshRenderer_(GlobalNamespace::OVRMeshRenderer value)  {
::cordl_internals::setInstanceField<GlobalNamespace::OVRMeshRenderer, 0xa0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::OVRMeshRenderer>(value));
}
constexpr GlobalNamespace::OVRMeshRenderer GlobalNamespace::OVRTrackedKeyboardHands::__get_rightHandMeshRenderer_() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::OVRMeshRenderer, 0xa0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OVRTrackedKeyboardHands::__set_rightHandSkinnedMeshRenderer_(UnityEngine::SkinnedMeshRenderer value)  {
::cordl_internals::setInstanceField<UnityEngine::SkinnedMeshRenderer, 0xa8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::SkinnedMeshRenderer>(value));
}
constexpr UnityEngine::SkinnedMeshRenderer GlobalNamespace::OVRTrackedKeyboardHands::__get_rightHandSkinnedMeshRenderer_() const {
return ::cordl_internals::getInstanceField<UnityEngine::SkinnedMeshRenderer, 0xa8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OVRTrackedKeyboardHands::__set__RightHandOverKeyboard_k__BackingField(bool value)  {
::cordl_internals::setInstanceField<bool, 0xb0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::OVRTrackedKeyboardHands::__get__RightHandOverKeyboard_k__BackingField() const {
return ::cordl_internals::getInstanceField<bool, 0xb0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OVRTrackedKeyboardHands::__set__LeftHandOverKeyboard_k__BackingField(bool value)  {
::cordl_internals::setInstanceField<bool, 0xb1>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::OVRTrackedKeyboardHands::__get__LeftHandOverKeyboard_k__BackingField() const {
return ::cordl_internals::getInstanceField<bool, 0xb1>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void GlobalNamespace::OVRTrackedKeyboardHands::__set_handInnerAlphaThreshold_(float_t value)  {
::cordl_internals::setStaticField<float_t, "handInnerAlphaThreshold_", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRTrackedKeyboardHands>::get>(std::forward<float_t>(value));
}
 float_t GlobalNamespace::OVRTrackedKeyboardHands::__get_handInnerAlphaThreshold_()  {
return ::cordl_internals::getStaticField<float_t, "handInnerAlphaThreshold_", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRTrackedKeyboardHands>::get>();
}
 void GlobalNamespace::OVRTrackedKeyboardHands::__set_handOuterAlphaThreshold_(float_t value)  {
::cordl_internals::setStaticField<float_t, "handOuterAlphaThreshold_", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRTrackedKeyboardHands>::get>(std::forward<float_t>(value));
}
 float_t GlobalNamespace::OVRTrackedKeyboardHands::__get_handOuterAlphaThreshold_()  {
return ::cordl_internals::getStaticField<float_t, "handOuterAlphaThreshold_", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRTrackedKeyboardHands>::get>();
}
 void GlobalNamespace::OVRTrackedKeyboardHands::__set_maximumPassthroughHandsDistance_(float_t value)  {
::cordl_internals::setStaticField<float_t, "maximumPassthroughHandsDistance_", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRTrackedKeyboardHands>::get>(std::forward<float_t>(value));
}
 float_t GlobalNamespace::OVRTrackedKeyboardHands::__get_maximumPassthroughHandsDistance_()  {
return ::cordl_internals::getStaticField<float_t, "maximumPassthroughHandsDistance_", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRTrackedKeyboardHands>::get>();
}
 void GlobalNamespace::OVRTrackedKeyboardHands::__set_minimumModelHandsDistance_(float_t value)  {
::cordl_internals::setStaticField<float_t, "minimumModelHandsDistance_", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRTrackedKeyboardHands>::get>(std::forward<float_t>(value));
}
 float_t GlobalNamespace::OVRTrackedKeyboardHands::__get_minimumModelHandsDistance_()  {
return ::cordl_internals::getStaticField<float_t, "minimumModelHandsDistance_", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRTrackedKeyboardHands>::get>();
}
constexpr void GlobalNamespace::OVRTrackedKeyboardHands::__set_lastVisibilityEvent_(System::Nullable_1<GlobalNamespace::GlobalNamespace__OVRTrackedKeyboardHands__TrackedKeyboardHandsVisibilityChangedEvent> value)  {
::cordl_internals::setInstanceField<System::Nullable_1<GlobalNamespace::GlobalNamespace__OVRTrackedKeyboardHands__TrackedKeyboardHandsVisibilityChangedEvent>, 0xb2>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Nullable_1<GlobalNamespace::GlobalNamespace__OVRTrackedKeyboardHands__TrackedKeyboardHandsVisibilityChangedEvent>>(value));
}
constexpr System::Nullable_1<GlobalNamespace::GlobalNamespace__OVRTrackedKeyboardHands__TrackedKeyboardHandsVisibilityChangedEvent> GlobalNamespace::OVRTrackedKeyboardHands::__get_lastVisibilityEvent_() const {
return ::cordl_internals::getInstanceField<System::Nullable_1<GlobalNamespace::GlobalNamespace__OVRTrackedKeyboardHands__TrackedKeyboardHandsVisibilityChangedEvent>, 0xb2>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OVRTrackedKeyboardHands::__set_boneMappings_(::ArrayW<GlobalNamespace::GlobalNamespace__OVRTrackedKeyboardHands__HandBoneMapping> value)  {
::cordl_internals::setInstanceField<::ArrayW<GlobalNamespace::GlobalNamespace__OVRTrackedKeyboardHands__HandBoneMapping>, 0xb8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<GlobalNamespace::GlobalNamespace__OVRTrackedKeyboardHands__HandBoneMapping>>(value));
}
constexpr ::ArrayW<GlobalNamespace::GlobalNamespace__OVRTrackedKeyboardHands__HandBoneMapping> GlobalNamespace::OVRTrackedKeyboardHands::__get_boneMappings_() const {
return ::cordl_internals::getInstanceField<::ArrayW<GlobalNamespace::GlobalNamespace__OVRTrackedKeyboardHands__HandBoneMapping>, 0xb8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OVRTrackedKeyboardHands::__set_HandsMaterial(UnityEngine::Material value)  {
::cordl_internals::setInstanceField<UnityEngine::Material, 0xc0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Material>(value));
}
constexpr UnityEngine::Material GlobalNamespace::OVRTrackedKeyboardHands::__get_HandsMaterial() const {
return ::cordl_internals::getInstanceField<UnityEngine::Material, 0xc0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OVRTrackedKeyboardHands::__set_keyboardPositionID_(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0xc8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::OVRTrackedKeyboardHands::__get_keyboardPositionID_() const {
return ::cordl_internals::getInstanceField<int32_t, 0xc8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OVRTrackedKeyboardHands::__set_keyboardRotationID_(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0xcc>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::OVRTrackedKeyboardHands::__get_keyboardRotationID_() const {
return ::cordl_internals::getInstanceField<int32_t, 0xcc>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OVRTrackedKeyboardHands::__set_keyboardScaleID_(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0xd0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::OVRTrackedKeyboardHands::__get_keyboardScaleID_() const {
return ::cordl_internals::getInstanceField<int32_t, 0xd0>(this->::bs_hook::Il2CppWrapperType::instance);
}
 bool GlobalNamespace::OVRTrackedKeyboardHands::get_RightHandOverKeyboard()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRTrackedKeyboardHands>::get(),
                            "get_RightHandOverKeyboard",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::OVRTrackedKeyboardHands::set_RightHandOverKeyboard(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRTrackedKeyboardHands>::get(),
                            "set_RightHandOverKeyboard",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 bool GlobalNamespace::OVRTrackedKeyboardHands::get_LeftHandOverKeyboard()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRTrackedKeyboardHands>::get(),
                            "get_LeftHandOverKeyboard",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::OVRTrackedKeyboardHands::set_LeftHandOverKeyboard(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRTrackedKeyboardHands>::get(),
                            "set_LeftHandOverKeyboard",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::OVRTrackedKeyboardHands::Awake()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRTrackedKeyboardHands>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::OVRTrackedKeyboardHands::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRTrackedKeyboardHands>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool GlobalNamespace::OVRTrackedKeyboardHands::get_AreControllersActive()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRTrackedKeyboardHands>::get(),
                            "get_AreControllersActive",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::OVRTrackedKeyboardHands::LateUpdate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRTrackedKeyboardHands>::get(),
                            "LateUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool GlobalNamespace::OVRTrackedKeyboardHands::ShouldEnablePassthrough(float_t distance)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRTrackedKeyboardHands>::get(),
                            "ShouldEnablePassthrough",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, distance);
}
 bool GlobalNamespace::OVRTrackedKeyboardHands::ShouldEnableModel(float_t distance)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRTrackedKeyboardHands>::get(),
                            "ShouldEnableModel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, distance);
}
 float_t GlobalNamespace::OVRTrackedKeyboardHands::GetHandDistanceToKeyboard(GlobalNamespace::OVRSkeleton handSkeleton)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRTrackedKeyboardHands>::get(),
                            "GetHandDistanceToKeyboard",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::OVRSkeleton>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method, handSkeleton);
}
 float_t GlobalNamespace::OVRTrackedKeyboardHands::ComputeOpacity(float_t distance, float_t innerThreshold, float_t outerThreshold)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRTrackedKeyboardHands>::get(),
                            "ComputeOpacity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method, distance, innerThreshold, outerThreshold);
}
 void GlobalNamespace::OVRTrackedKeyboardHands::SetHandModelsEnabled(bool enableLeftModel, bool enableRightModel)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRTrackedKeyboardHands>::get(),
                            "SetHandModelsEnabled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, enableLeftModel, enableRightModel);
}
 void GlobalNamespace::OVRTrackedKeyboardHands::RetargetHandTrackingToHandPresence()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRTrackedKeyboardHands>::get(),
                            "RetargetHandTrackingToHandPresence",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::OVRTrackedKeyboardHands::StopHandPresence()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRTrackedKeyboardHands>::get(),
                            "StopHandPresence",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::OVRTrackedKeyboardHands::DisableHandObjects()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRTrackedKeyboardHands>::get(),
                            "DisableHandObjects",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::OVRTrackedKeyboardHands::TrackedKeyboardActiveUpdated(GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard__TrackedKeyboardSetActiveEvent e)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRTrackedKeyboardHands>::get(),
                            "TrackedKeyboardActiveUpdated",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard__TrackedKeyboardSetActiveEvent>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, e);
}
 void GlobalNamespace::OVRTrackedKeyboardHands::TrackedKeyboardVisibilityChanged(GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard__TrackedKeyboardVisibilityChangedEvent e)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRTrackedKeyboardHands>::get(),
                            "TrackedKeyboardVisibilityChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard__TrackedKeyboardVisibilityChangedEvent>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, e);
}
// Ctor Parameters []
 GlobalNamespace::OVRTrackedKeyboardHands::OVRTrackedKeyboardHands()  : UnityEngine::MonoBehaviour(THROW_UNLESS(::il2cpp_utils::New<OVRTrackedKeyboardHands>())) {}
 void GlobalNamespace::OVRTrackedKeyboardHands::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRTrackedKeyboardHands>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
