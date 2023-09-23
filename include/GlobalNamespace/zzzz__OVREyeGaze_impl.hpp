#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__OVREyeGaze_def.hpp"
#include "GlobalNamespace/zzzz__OVRPermissionsRequester_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__OVREyeGaze__EyeId::GlobalNamespace__OVREyeGaze__EyeId(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void GlobalNamespace::GlobalNamespace__OVREyeGaze__EyeId::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__OVREyeGaze__EyeId::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr GlobalNamespace::GlobalNamespace__OVREyeGaze__EyeId  GlobalNamespace::GlobalNamespace__OVREyeGaze__EyeId::Left{0};
constexpr GlobalNamespace::GlobalNamespace__OVREyeGaze__EyeId  GlobalNamespace::GlobalNamespace__OVREyeGaze__EyeId::Right{1};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__OVREyeGaze__EyeTrackingMode::GlobalNamespace__OVREyeGaze__EyeTrackingMode(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void GlobalNamespace::GlobalNamespace__OVREyeGaze__EyeTrackingMode::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__OVREyeGaze__EyeTrackingMode::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr GlobalNamespace::GlobalNamespace__OVREyeGaze__EyeTrackingMode  GlobalNamespace::GlobalNamespace__OVREyeGaze__EyeTrackingMode::HeadSpace{0};
constexpr GlobalNamespace::GlobalNamespace__OVREyeGaze__EyeTrackingMode  GlobalNamespace::GlobalNamespace__OVREyeGaze__EyeTrackingMode::WorldSpace{1};
constexpr GlobalNamespace::GlobalNamespace__OVREyeGaze__EyeTrackingMode  GlobalNamespace::GlobalNamespace__OVREyeGaze__EyeTrackingMode::TrackingSpace{2};
//  Writing Method size for method: GlobalNamespace::OVREyeGaze.get_EyeTrackingEnabled
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::OVREyeGaze::*)()>(&GlobalNamespace::OVREyeGaze::get_EyeTrackingEnabled)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x25af474;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVREyeGaze>::get(),
                            "get_EyeTrackingEnabled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVREyeGaze.get_Confidence
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (GlobalNamespace::OVREyeGaze::*)()>(&GlobalNamespace::OVREyeGaze::get_Confidence)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25af4c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVREyeGaze>::get(),
                            "get_Confidence",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVREyeGaze.set_Confidence
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVREyeGaze::*)(float_t)>(&GlobalNamespace::OVREyeGaze::set_Confidence)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25af4cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVREyeGaze>::get(),
                            "set_Confidence",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVREyeGaze.Awake
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVREyeGaze::*)()>(&GlobalNamespace::OVREyeGaze::Awake)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x25af4d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVREyeGaze>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVREyeGaze.Start
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVREyeGaze::*)()>(&GlobalNamespace::OVREyeGaze::Start)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x25af550;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVREyeGaze>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVREyeGaze.OnEnable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVREyeGaze::*)()>(&GlobalNamespace::OVREyeGaze::OnEnable)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x25af7d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVREyeGaze>::get(),
                            "OnEnable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVREyeGaze.OnPermissionGranted
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVREyeGaze::*)(::StringW)>(&GlobalNamespace::OVREyeGaze::OnPermissionGranted)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x25af928;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVREyeGaze>::get(),
                            "OnPermissionGranted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVREyeGaze.StartEyeTracking
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::OVREyeGaze::*)()>(&GlobalNamespace::OVREyeGaze::StartEyeTracking)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x25af850;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVREyeGaze>::get(),
                            "StartEyeTracking",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVREyeGaze.OnDisable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVREyeGaze::*)()>(&GlobalNamespace::OVREyeGaze::OnDisable)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x25af988;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVREyeGaze>::get(),
                            "OnDisable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVREyeGaze.OnDestroy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVREyeGaze::*)()>(&GlobalNamespace::OVREyeGaze::OnDestroy)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x25afa10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVREyeGaze>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVREyeGaze.Update
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVREyeGaze::*)()>(&GlobalNamespace::OVREyeGaze::Update)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x25afa1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVREyeGaze>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVREyeGaze.CalculateEyeRotation
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Quaternion (GlobalNamespace::OVREyeGaze::*)(UnityEngine::Quaternion)>(&GlobalNamespace::OVREyeGaze::CalculateEyeRotation)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x25afc1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVREyeGaze>::get(),
                            "CalculateEyeRotation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Quaternion>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVREyeGaze.PrepareHeadDirection
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVREyeGaze::*)()>(&GlobalNamespace::OVREyeGaze::PrepareHeadDirection)> {
  constexpr static std::size_t size = 0x284;
  constexpr static std::size_t addrs = 0x25af554;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVREyeGaze>::get(),
                            "PrepareHeadDirection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVREyeGaze._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVREyeGaze::*)()>(&GlobalNamespace::OVREyeGaze::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x25afddc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVREyeGaze>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::OVREyeGaze::__set_Eye(GlobalNamespace::GlobalNamespace__OVREyeGaze__EyeId value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__OVREyeGaze__EyeId, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__OVREyeGaze__EyeId>(value));
}
constexpr GlobalNamespace::GlobalNamespace__OVREyeGaze__EyeId GlobalNamespace::OVREyeGaze::__get_Eye() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__OVREyeGaze__EyeId, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OVREyeGaze::__set__Confidence_k__BackingField(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::OVREyeGaze::__get__Confidence_k__BackingField() const {
return ::cordl_internals::getInstanceField<float_t, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OVREyeGaze::__set_ConfidenceThreshold(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::OVREyeGaze::__get_ConfidenceThreshold() const {
return ::cordl_internals::getInstanceField<float_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OVREyeGaze::__set_ApplyPosition(bool value)  {
::cordl_internals::setInstanceField<bool, 0x24>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::OVREyeGaze::__get_ApplyPosition() const {
return ::cordl_internals::getInstanceField<bool, 0x24>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OVREyeGaze::__set_ApplyRotation(bool value)  {
::cordl_internals::setInstanceField<bool, 0x25>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::OVREyeGaze::__get_ApplyRotation() const {
return ::cordl_internals::getInstanceField<bool, 0x25>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OVREyeGaze::__set__currentEyeGazesState(GlobalNamespace::GlobalNamespace__OVRPlugin__EyeGazesState value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__OVRPlugin__EyeGazesState, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__OVRPlugin__EyeGazesState>(value));
}
constexpr GlobalNamespace::GlobalNamespace__OVRPlugin__EyeGazesState GlobalNamespace::OVREyeGaze::__get__currentEyeGazesState() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__OVRPlugin__EyeGazesState, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OVREyeGaze::__set_ReferenceFrame(UnityEngine::Transform value)  {
::cordl_internals::setInstanceField<UnityEngine::Transform, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Transform>(value));
}
constexpr UnityEngine::Transform GlobalNamespace::OVREyeGaze::__get_ReferenceFrame() const {
return ::cordl_internals::getInstanceField<UnityEngine::Transform, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OVREyeGaze::__set_TrackingMode(GlobalNamespace::GlobalNamespace__OVREyeGaze__EyeTrackingMode value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__OVREyeGaze__EyeTrackingMode, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__OVREyeGaze__EyeTrackingMode>(value));
}
constexpr GlobalNamespace::GlobalNamespace__OVREyeGaze__EyeTrackingMode GlobalNamespace::OVREyeGaze::__get_TrackingMode() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__OVREyeGaze__EyeTrackingMode, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OVREyeGaze::__set__initialRotationOffset(UnityEngine::Quaternion value)  {
::cordl_internals::setInstanceField<UnityEngine::Quaternion, 0x44>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Quaternion>(value));
}
constexpr UnityEngine::Quaternion GlobalNamespace::OVREyeGaze::__get__initialRotationOffset() const {
return ::cordl_internals::getInstanceField<UnityEngine::Quaternion, 0x44>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OVREyeGaze::__set__viewTransform(UnityEngine::Transform value)  {
::cordl_internals::setInstanceField<UnityEngine::Transform, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Transform>(value));
}
constexpr UnityEngine::Transform GlobalNamespace::OVREyeGaze::__get__viewTransform() const {
return ::cordl_internals::getInstanceField<UnityEngine::Transform, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr GlobalNamespace::GlobalNamespace__OVRPermissionsRequester__Permission  GlobalNamespace::OVREyeGaze::EyeTrackingPermission{2};
constexpr void GlobalNamespace::OVREyeGaze::__set__onPermissionGranted(System::Action_1<::StringW> value)  {
::cordl_internals::setInstanceField<System::Action_1<::StringW>, 0x60>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_1<::StringW>>(value));
}
constexpr System::Action_1<::StringW> GlobalNamespace::OVREyeGaze::__get__onPermissionGranted() const {
return ::cordl_internals::getInstanceField<System::Action_1<::StringW>, 0x60>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void GlobalNamespace::OVREyeGaze::__set__trackingInstanceCount(int32_t value)  {
::cordl_internals::setStaticField<int32_t, "_trackingInstanceCount", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVREyeGaze>::get>(std::forward<int32_t>(value));
}
 int32_t GlobalNamespace::OVREyeGaze::__get__trackingInstanceCount()  {
return ::cordl_internals::getStaticField<int32_t, "_trackingInstanceCount", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVREyeGaze>::get>();
}
 bool GlobalNamespace::OVREyeGaze::get_EyeTrackingEnabled()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVREyeGaze>::get(),
                            "get_EyeTrackingEnabled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 float_t GlobalNamespace::OVREyeGaze::get_Confidence()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVREyeGaze>::get(),
                            "get_Confidence",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::OVREyeGaze::set_Confidence(float_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVREyeGaze>::get(),
                            "set_Confidence",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::OVREyeGaze::Awake()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVREyeGaze>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::OVREyeGaze::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVREyeGaze>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::OVREyeGaze::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVREyeGaze>::get(),
                            "OnEnable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::OVREyeGaze::OnPermissionGranted(::StringW permissionId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVREyeGaze>::get(),
                            "OnPermissionGranted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, permissionId);
}
 bool GlobalNamespace::OVREyeGaze::StartEyeTracking()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVREyeGaze>::get(),
                            "StartEyeTracking",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::OVREyeGaze::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVREyeGaze>::get(),
                            "OnDisable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::OVREyeGaze::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVREyeGaze>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::OVREyeGaze::Update()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVREyeGaze>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::Quaternion GlobalNamespace::OVREyeGaze::CalculateEyeRotation(UnityEngine::Quaternion eyeRotation)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVREyeGaze>::get(),
                            "CalculateEyeRotation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Quaternion>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Quaternion, false>(const_cast<void*>(instance), ___internal_method, eyeRotation);
}
 void GlobalNamespace::OVREyeGaze::PrepareHeadDirection()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVREyeGaze>::get(),
                            "PrepareHeadDirection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 GlobalNamespace::OVREyeGaze::OVREyeGaze()  : UnityEngine::MonoBehaviour(THROW_UNLESS(::il2cpp_utils::New<OVREyeGaze>())) {}
 void GlobalNamespace::OVREyeGaze::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVREyeGaze>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
