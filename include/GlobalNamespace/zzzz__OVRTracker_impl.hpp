#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "GlobalNamespace/zzzz__OVRTracker_def.hpp"
#include "GlobalNamespace/zzzz__OVRPose_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
// Ctor Parameters [CppParam { name: "nearZ", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "farZ", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "fov", ty: "UnityEngine::Vector2", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__OVRTracker__Frustum::GlobalNamespace__OVRTracker__Frustum(float_t nearZ, float_t farZ, UnityEngine::Vector2 fov) noexcept : ::bs_hook::ValueTypeWrapper() {this->nearZ = nearZ;
this->farZ = farZ;
this->fov = fov;
}
constexpr void GlobalNamespace::GlobalNamespace__OVRTracker__Frustum::__set_nearZ(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x0>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::GlobalNamespace__OVRTracker__Frustum::__get_nearZ() const {
return ::cordl_internals::getInstanceField<float_t, 0x0>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OVRTracker__Frustum::__set_farZ(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x4>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::GlobalNamespace__OVRTracker__Frustum::__get_farZ() const {
return ::cordl_internals::getInstanceField<float_t, 0x4>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OVRTracker__Frustum::__set_fov(UnityEngine::Vector2 value)  {
::cordl_internals::setInstanceField<UnityEngine::Vector2, 0x8>(this->__instance, std::forward<UnityEngine::Vector2>(value));
}
constexpr UnityEngine::Vector2 GlobalNamespace::GlobalNamespace__OVRTracker__Frustum::__get_fov() const {
return ::cordl_internals::getInstanceField<UnityEngine::Vector2, 0x8>(this->__instance);
}
//  Writing Method size for method: GlobalNamespace::OVRTracker.get_isPresent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::OVRTracker::*)()>(&GlobalNamespace::OVRTracker::get_isPresent)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x261868c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRTracker>::get(),
                            "get_isPresent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRTracker.get_isPositionTracked
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::OVRTracker::*)()>(&GlobalNamespace::OVRTracker::get_isPositionTracked)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x261871c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRTracker>::get(),
                            "get_isPositionTracked",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRTracker.get_isEnabled
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::OVRTracker::*)()>(&GlobalNamespace::OVRTracker::get_isEnabled)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x261876c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRTracker>::get(),
                            "get_isEnabled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRTracker.set_isEnabled
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRTracker::*)(bool)>(&GlobalNamespace::OVRTracker::set_isEnabled)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x26187fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRTracker>::get(),
                            "set_isEnabled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRTracker.get_count
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (GlobalNamespace::OVRTracker::*)()>(&GlobalNamespace::OVRTracker::get_count)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2618890;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRTracker>::get(),
                            "get_count",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRTracker.GetFrustum
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::GlobalNamespace__OVRTracker__Frustum (GlobalNamespace::OVRTracker::*)(int32_t)>(&GlobalNamespace::OVRTracker::GetFrustum)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x26189d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRTracker>::get(),
                            "GetFrustum",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRTracker.GetPose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::OVRPose (GlobalNamespace::OVRTracker::*)(int32_t)>(&GlobalNamespace::OVRTracker::GetPose)> {
  constexpr static std::size_t size = 0x2b0;
  constexpr static std::size_t addrs = 0x2618a74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRTracker>::get(),
                            "GetPose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRTracker.GetPoseValid
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::OVRTracker::*)(int32_t)>(&GlobalNamespace::OVRTracker::GetPoseValid)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x2618d24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRTracker>::get(),
                            "GetPoseValid",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRTracker.GetPresent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::OVRTracker::*)(int32_t)>(&GlobalNamespace::OVRTracker::GetPresent)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x26188cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRTracker>::get(),
                            "GetPresent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRTracker._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRTracker::*)()>(&GlobalNamespace::OVRTracker::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2618e28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRTracker>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 bool GlobalNamespace::OVRTracker::get_isPresent()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRTracker>::get(),
                            "get_isPresent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool GlobalNamespace::OVRTracker::get_isPositionTracked()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRTracker>::get(),
                            "get_isPositionTracked",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool GlobalNamespace::OVRTracker::get_isEnabled()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRTracker>::get(),
                            "get_isEnabled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::OVRTracker::set_isEnabled(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRTracker>::get(),
                            "set_isEnabled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 int32_t GlobalNamespace::OVRTracker::get_count()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRTracker>::get(),
                            "get_count",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
/// @param tracker: int32_t (default: 0)
 GlobalNamespace::GlobalNamespace__OVRTracker__Frustum GlobalNamespace::OVRTracker::GetFrustum(int32_t tracker)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRTracker>::get(),
                            "GetFrustum",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::GlobalNamespace__OVRTracker__Frustum, false>(const_cast<void*>(instance), ___internal_method, tracker);
}
/// @param tracker: int32_t (default: 0)
 GlobalNamespace::OVRPose GlobalNamespace::OVRTracker::GetPose(int32_t tracker)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRTracker>::get(),
                            "GetPose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::OVRPose, false>(const_cast<void*>(instance), ___internal_method, tracker);
}
/// @param tracker: int32_t (default: 0)
 bool GlobalNamespace::OVRTracker::GetPoseValid(int32_t tracker)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRTracker>::get(),
                            "GetPoseValid",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, tracker);
}
/// @param tracker: int32_t (default: 0)
 bool GlobalNamespace::OVRTracker::GetPresent(int32_t tracker)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRTracker>::get(),
                            "GetPresent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, tracker);
}
// Ctor Parameters []
 GlobalNamespace::OVRTracker::OVRTracker()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<OVRTracker>())) {}
 void GlobalNamespace::OVRTracker::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRTracker>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
