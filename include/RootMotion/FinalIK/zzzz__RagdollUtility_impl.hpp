#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
namespace {
#include "RootMotion/FinalIK/zzzz__RagdollUtility_def.hpp"
#include "UnityEngine/zzzz__Animator_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "UnityEngine/zzzz__AnimatorUpdateMode_def.hpp"
#include "RootMotion/FinalIK/zzzz__IK_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Rigidbody_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__Joint_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::RootMotion::FinalIK::____RootMotion__FinalIK__RagdollUtility__Rigidbone._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::____RootMotion__FinalIK__RagdollUtility__Rigidbone::*)(::UnityEngine::Rigidbody)>(&::RootMotion::FinalIK::____RootMotion__FinalIK__RagdollUtility__Rigidbone::_ctor)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x1201828;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::____RootMotion__FinalIK__RagdollUtility__Rigidbone>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rigidbody>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::____RootMotion__FinalIK__RagdollUtility__Rigidbone.RecordVelocity
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::____RootMotion__FinalIK__RagdollUtility__Rigidbone::*)()>(&::RootMotion::FinalIK::____RootMotion__FinalIK__RagdollUtility__Rigidbone::RecordVelocity)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x1202370;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::____RootMotion__FinalIK__RagdollUtility__Rigidbone>::get(),
                            "RecordVelocity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::____RootMotion__FinalIK__RagdollUtility__Rigidbone.WakeUp
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::____RootMotion__FinalIK__RagdollUtility__Rigidbone::*)(float_t, float_t)>(&::RootMotion::FinalIK::____RootMotion__FinalIK__RagdollUtility__Rigidbone::WakeUp)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x1202130;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::____RootMotion__FinalIK__RagdollUtility__Rigidbone>::get(),
                            "WakeUp",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void ::RootMotion::FinalIK::____RootMotion__FinalIK__RagdollUtility__Rigidbone::__set_r(::UnityEngine::Rigidbody value)  {
::cordl_internals::setInstanceField<::UnityEngine::Rigidbody, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Rigidbody>(value));
}
constexpr ::UnityEngine::Rigidbody ::RootMotion::FinalIK::____RootMotion__FinalIK__RagdollUtility__Rigidbone::__get_r() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Rigidbody, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::RootMotion::FinalIK::____RootMotion__FinalIK__RagdollUtility__Rigidbone::__set_t(::UnityEngine::Transform value)  {
::cordl_internals::setInstanceField<::UnityEngine::Transform, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Transform>(value));
}
constexpr ::UnityEngine::Transform ::RootMotion::FinalIK::____RootMotion__FinalIK__RagdollUtility__Rigidbone::__get_t() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Transform, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::RootMotion::FinalIK::____RootMotion__FinalIK__RagdollUtility__Rigidbone::__set_collider(::UnityEngine::Collider value)  {
::cordl_internals::setInstanceField<::UnityEngine::Collider, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Collider>(value));
}
constexpr ::UnityEngine::Collider ::RootMotion::FinalIK::____RootMotion__FinalIK__RagdollUtility__Rigidbone::__get_collider() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Collider, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::RootMotion::FinalIK::____RootMotion__FinalIK__RagdollUtility__Rigidbone::__set_joint(::UnityEngine::Joint value)  {
::cordl_internals::setInstanceField<::UnityEngine::Joint, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Joint>(value));
}
constexpr ::UnityEngine::Joint ::RootMotion::FinalIK::____RootMotion__FinalIK__RagdollUtility__Rigidbone::__get_joint() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Joint, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::RootMotion::FinalIK::____RootMotion__FinalIK__RagdollUtility__Rigidbone::__set_c(::UnityEngine::Rigidbody value)  {
::cordl_internals::setInstanceField<::UnityEngine::Rigidbody, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Rigidbody>(value));
}
constexpr ::UnityEngine::Rigidbody ::RootMotion::FinalIK::____RootMotion__FinalIK__RagdollUtility__Rigidbone::__get_c() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Rigidbody, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::RootMotion::FinalIK::____RootMotion__FinalIK__RagdollUtility__Rigidbone::__set_updateAnchor(bool value)  {
::cordl_internals::setInstanceField<bool, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::RootMotion::FinalIK::____RootMotion__FinalIK__RagdollUtility__Rigidbone::__get_updateAnchor() const {
return ::cordl_internals::getInstanceField<bool, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::RootMotion::FinalIK::____RootMotion__FinalIK__RagdollUtility__Rigidbone::__set_deltaPosition(::UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0x3c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3 ::RootMotion::FinalIK::____RootMotion__FinalIK__RagdollUtility__Rigidbone::__get_deltaPosition() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x3c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::RootMotion::FinalIK::____RootMotion__FinalIK__RagdollUtility__Rigidbone::__set_deltaRotation(::UnityEngine::Quaternion value)  {
::cordl_internals::setInstanceField<::UnityEngine::Quaternion, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Quaternion>(value));
}
constexpr ::UnityEngine::Quaternion ::RootMotion::FinalIK::____RootMotion__FinalIK__RagdollUtility__Rigidbone::__get_deltaRotation() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Quaternion, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::RootMotion::FinalIK::____RootMotion__FinalIK__RagdollUtility__Rigidbone::__set_deltaTime(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::RootMotion::FinalIK::____RootMotion__FinalIK__RagdollUtility__Rigidbone::__get_deltaTime() const {
return ::cordl_internals::getInstanceField<float_t, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::RootMotion::FinalIK::____RootMotion__FinalIK__RagdollUtility__Rigidbone::__set_lastPosition(::UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0x5c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3 ::RootMotion::FinalIK::____RootMotion__FinalIK__RagdollUtility__Rigidbone::__get_lastPosition() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x5c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::RootMotion::FinalIK::____RootMotion__FinalIK__RagdollUtility__Rigidbone::__set_lastRotation(::UnityEngine::Quaternion value)  {
::cordl_internals::setInstanceField<::UnityEngine::Quaternion, 0x68>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Quaternion>(value));
}
constexpr ::UnityEngine::Quaternion ::RootMotion::FinalIK::____RootMotion__FinalIK__RagdollUtility__Rigidbone::__get_lastRotation() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Quaternion, 0x68>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "r", ty: "::UnityEngine::Rigidbody", modifiers: "", def_value: None }]
 ::RootMotion::FinalIK::____RootMotion__FinalIK__RagdollUtility__Rigidbone::____RootMotion__FinalIK__RagdollUtility__Rigidbone(::UnityEngine::Rigidbody r)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<____RootMotion__FinalIK__RagdollUtility__Rigidbone>(r))) {}
 void ::RootMotion::FinalIK::____RootMotion__FinalIK__RagdollUtility__Rigidbone::_ctor(::UnityEngine::Rigidbody r)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::____RootMotion__FinalIK__RagdollUtility__Rigidbone>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rigidbody>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, r);
}
 void ::RootMotion::FinalIK::____RootMotion__FinalIK__RagdollUtility__Rigidbone::RecordVelocity()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::____RootMotion__FinalIK__RagdollUtility__Rigidbone>::get(),
                            "RecordVelocity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::RootMotion::FinalIK::____RootMotion__FinalIK__RagdollUtility__Rigidbone::WakeUp(float_t velocityWeight, float_t angularVelocityWeight)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::____RootMotion__FinalIK__RagdollUtility__Rigidbone>::get(),
                            "WakeUp",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, velocityWeight, angularVelocityWeight);
}
//  Writing Method size for method: ::RootMotion::FinalIK::____RootMotion__FinalIK__RagdollUtility__Child._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::____RootMotion__FinalIK__RagdollUtility__Child::*)(::UnityEngine::Transform)>(&::RootMotion::FinalIK::____RootMotion__FinalIK__RagdollUtility__Child::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x120197c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::____RootMotion__FinalIK__RagdollUtility__Child>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::____RootMotion__FinalIK__RagdollUtility__Child.FixTransform
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::____RootMotion__FinalIK__RagdollUtility__Child::*)(float_t)>(&::RootMotion::FinalIK::____RootMotion__FinalIK__RagdollUtility__Child::FixTransform)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x1202488;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::____RootMotion__FinalIK__RagdollUtility__Child>::get(),
                            "FixTransform",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::____RootMotion__FinalIK__RagdollUtility__Child.StoreLocalState
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::____RootMotion__FinalIK__RagdollUtility__Child::*)()>(&::RootMotion::FinalIK::____RootMotion__FinalIK__RagdollUtility__Child::StoreLocalState)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x1202444;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::____RootMotion__FinalIK__RagdollUtility__Child>::get(),
                            "StoreLocalState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::RootMotion::FinalIK::____RootMotion__FinalIK__RagdollUtility__Child::__set_t(::UnityEngine::Transform value)  {
::cordl_internals::setInstanceField<::UnityEngine::Transform, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Transform>(value));
}
constexpr ::UnityEngine::Transform ::RootMotion::FinalIK::____RootMotion__FinalIK__RagdollUtility__Child::__get_t() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Transform, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::RootMotion::FinalIK::____RootMotion__FinalIK__RagdollUtility__Child::__set_localPosition(::UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3 ::RootMotion::FinalIK::____RootMotion__FinalIK__RagdollUtility__Child::__get_localPosition() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::RootMotion::FinalIK::____RootMotion__FinalIK__RagdollUtility__Child::__set_localRotation(::UnityEngine::Quaternion value)  {
::cordl_internals::setInstanceField<::UnityEngine::Quaternion, 0x24>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Quaternion>(value));
}
constexpr ::UnityEngine::Quaternion ::RootMotion::FinalIK::____RootMotion__FinalIK__RagdollUtility__Child::__get_localRotation() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Quaternion, 0x24>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "transform", ty: "::UnityEngine::Transform", modifiers: "", def_value: None }]
 ::RootMotion::FinalIK::____RootMotion__FinalIK__RagdollUtility__Child::____RootMotion__FinalIK__RagdollUtility__Child(::UnityEngine::Transform transform)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<____RootMotion__FinalIK__RagdollUtility__Child>(transform))) {}
 void ::RootMotion::FinalIK::____RootMotion__FinalIK__RagdollUtility__Child::_ctor(::UnityEngine::Transform transform)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::____RootMotion__FinalIK__RagdollUtility__Child>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, transform);
}
 void ::RootMotion::FinalIK::____RootMotion__FinalIK__RagdollUtility__Child::FixTransform(float_t weight)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::____RootMotion__FinalIK__RagdollUtility__Child>::get(),
                            "FixTransform",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, weight);
}
 void ::RootMotion::FinalIK::____RootMotion__FinalIK__RagdollUtility__Child::StoreLocalState()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::____RootMotion__FinalIK__RagdollUtility__Child>::get(),
                            "StoreLocalState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: ::RootMotion::FinalIK::____RootMotion__FinalIK__RagdollUtility___DisableRagdollSmooth_d__21._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::____RootMotion__FinalIK__RagdollUtility___DisableRagdollSmooth_d__21::*)(int32_t)>(&::RootMotion::FinalIK::____RootMotion__FinalIK__RagdollUtility___DisableRagdollSmooth_d__21::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x12019d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::____RootMotion__FinalIK__RagdollUtility___DisableRagdollSmooth_d__21>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::____RootMotion__FinalIK__RagdollUtility___DisableRagdollSmooth_d__21.System_IDisposable_Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::____RootMotion__FinalIK__RagdollUtility___DisableRagdollSmooth_d__21::*)()>(&::RootMotion::FinalIK::____RootMotion__FinalIK__RagdollUtility___DisableRagdollSmooth_d__21::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x12027a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::____RootMotion__FinalIK__RagdollUtility___DisableRagdollSmooth_d__21>::get(),
                            "System.IDisposable.Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::____RootMotion__FinalIK__RagdollUtility___DisableRagdollSmooth_d__21.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::RootMotion::FinalIK::____RootMotion__FinalIK__RagdollUtility___DisableRagdollSmooth_d__21::*)()>(&::RootMotion::FinalIK::____RootMotion__FinalIK__RagdollUtility___DisableRagdollSmooth_d__21::MoveNext)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x12027ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::____RootMotion__FinalIK__RagdollUtility___DisableRagdollSmooth_d__21>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::____RootMotion__FinalIK__RagdollUtility___DisableRagdollSmooth_d__21.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (::RootMotion::FinalIK::____RootMotion__FinalIK__RagdollUtility___DisableRagdollSmooth_d__21::*)()>(&::RootMotion::FinalIK::____RootMotion__FinalIK__RagdollUtility___DisableRagdollSmooth_d__21::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x120298c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::____RootMotion__FinalIK__RagdollUtility___DisableRagdollSmooth_d__21>::get(),
                            "System.Collections.Generic.IEnumerator<System.Object>.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::____RootMotion__FinalIK__RagdollUtility___DisableRagdollSmooth_d__21.System_Collections_IEnumerator_Reset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::____RootMotion__FinalIK__RagdollUtility___DisableRagdollSmooth_d__21::*)()>(&::RootMotion::FinalIK::____RootMotion__FinalIK__RagdollUtility___DisableRagdollSmooth_d__21::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1202994;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::____RootMotion__FinalIK__RagdollUtility___DisableRagdollSmooth_d__21>::get(),
                            "System.Collections.IEnumerator.Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::____RootMotion__FinalIK__RagdollUtility___DisableRagdollSmooth_d__21.System_Collections_IEnumerator_get_Current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (::RootMotion::FinalIK::____RootMotion__FinalIK__RagdollUtility___DisableRagdollSmooth_d__21::*)()>(&::RootMotion::FinalIK::____RootMotion__FinalIK__RagdollUtility___DisableRagdollSmooth_d__21::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x12029d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::____RootMotion__FinalIK__RagdollUtility___DisableRagdollSmooth_d__21>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>
constexpr  ::RootMotion::FinalIK::____RootMotion__FinalIK__RagdollUtility___DisableRagdollSmooth_d__21::operator ::System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>() const noexcept {
return ::System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to ::System::Collections::IEnumerator
constexpr  ::RootMotion::FinalIK::____RootMotion__FinalIK__RagdollUtility___DisableRagdollSmooth_d__21::operator ::System::Collections::IEnumerator() const noexcept {
return ::System::Collections::IEnumerator(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to ::System::IDisposable
constexpr  ::RootMotion::FinalIK::____RootMotion__FinalIK__RagdollUtility___DisableRagdollSmooth_d__21::operator ::System::IDisposable() const noexcept {
return ::System::IDisposable(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::RootMotion::FinalIK::____RootMotion__FinalIK__RagdollUtility___DisableRagdollSmooth_d__21::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::RootMotion::FinalIK::____RootMotion__FinalIK__RagdollUtility___DisableRagdollSmooth_d__21::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::RootMotion::FinalIK::____RootMotion__FinalIK__RagdollUtility___DisableRagdollSmooth_d__21::__set___2__current(::bs_hook::Il2CppWrapperType value)  {
::cordl_internals::setInstanceField<::bs_hook::Il2CppWrapperType, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::bs_hook::Il2CppWrapperType>(value));
}
constexpr ::bs_hook::Il2CppWrapperType ::RootMotion::FinalIK::____RootMotion__FinalIK__RagdollUtility___DisableRagdollSmooth_d__21::__get___2__current() const {
return ::cordl_internals::getInstanceField<::bs_hook::Il2CppWrapperType, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::RootMotion::FinalIK::____RootMotion__FinalIK__RagdollUtility___DisableRagdollSmooth_d__21::__set___4__this(::RootMotion::FinalIK::RagdollUtility value)  {
::cordl_internals::setInstanceField<::RootMotion::FinalIK::RagdollUtility, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::RootMotion::FinalIK::RagdollUtility>(value));
}
constexpr ::RootMotion::FinalIK::RagdollUtility ::RootMotion::FinalIK::____RootMotion__FinalIK__RagdollUtility___DisableRagdollSmooth_d__21::__get___4__this() const {
return ::cordl_internals::getInstanceField<::RootMotion::FinalIK::RagdollUtility, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }]
 ::RootMotion::FinalIK::____RootMotion__FinalIK__RagdollUtility___DisableRagdollSmooth_d__21::____RootMotion__FinalIK__RagdollUtility___DisableRagdollSmooth_d__21(int32_t __1__state)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<____RootMotion__FinalIK__RagdollUtility___DisableRagdollSmooth_d__21>(__1__state))) {}
 void ::RootMotion::FinalIK::____RootMotion__FinalIK__RagdollUtility___DisableRagdollSmooth_d__21::_ctor(int32_t __1__state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::____RootMotion__FinalIK__RagdollUtility___DisableRagdollSmooth_d__21>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, __1__state);
}
 void ::RootMotion::FinalIK::____RootMotion__FinalIK__RagdollUtility___DisableRagdollSmooth_d__21::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::____RootMotion__FinalIK__RagdollUtility___DisableRagdollSmooth_d__21>::get(),
                            "System.IDisposable.Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::RootMotion::FinalIK::____RootMotion__FinalIK__RagdollUtility___DisableRagdollSmooth_d__21::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::____RootMotion__FinalIK__RagdollUtility___DisableRagdollSmooth_d__21>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 ::bs_hook::Il2CppWrapperType ::RootMotion::FinalIK::____RootMotion__FinalIK__RagdollUtility___DisableRagdollSmooth_d__21::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::____RootMotion__FinalIK__RagdollUtility___DisableRagdollSmooth_d__21>::get(),
                            "System.Collections.Generic.IEnumerator<System.Object>.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::RootMotion::FinalIK::____RootMotion__FinalIK__RagdollUtility___DisableRagdollSmooth_d__21::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::____RootMotion__FinalIK__RagdollUtility___DisableRagdollSmooth_d__21>::get(),
                            "System.Collections.IEnumerator.Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::bs_hook::Il2CppWrapperType ::RootMotion::FinalIK::____RootMotion__FinalIK__RagdollUtility___DisableRagdollSmooth_d__21::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::____RootMotion__FinalIK__RagdollUtility___DisableRagdollSmooth_d__21>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: ::RootMotion::FinalIK::RagdollUtility.EnableRagdoll
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::RagdollUtility::*)()>(&::RootMotion::FinalIK::RagdollUtility::EnableRagdoll)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x1201280;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::RagdollUtility>::get(),
                            "EnableRagdoll",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::RagdollUtility.DisableRagdoll
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::RagdollUtility::*)()>(&::RootMotion::FinalIK::RagdollUtility::DisableRagdoll)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x1201310;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::RagdollUtility>::get(),
                            "DisableRagdoll",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::RagdollUtility.Start
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::RagdollUtility::*)()>(&::RootMotion::FinalIK::RagdollUtility::Start)> {
  constexpr static std::size_t size = 0x40c;
  constexpr static std::size_t addrs = 0x120141c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::RagdollUtility>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::RagdollUtility.DisableRagdollSmooth
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator (::RootMotion::FinalIK::RagdollUtility::*)()>(&::RootMotion::FinalIK::RagdollUtility::DisableRagdollSmooth)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x12013b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::RagdollUtility>::get(),
                            "DisableRagdollSmooth",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::RagdollUtility.Update
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::RagdollUtility::*)()>(&::RootMotion::FinalIK::RagdollUtility::Update)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0x1201a00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::RagdollUtility>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::RagdollUtility.FixedUpdate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::RagdollUtility::*)()>(&::RootMotion::FinalIK::RagdollUtility::FixedUpdate)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x1201c28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::RagdollUtility>::get(),
                            "FixedUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::RagdollUtility.LateUpdate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::RagdollUtility::*)()>(&::RootMotion::FinalIK::RagdollUtility::LateUpdate)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1201cc8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::RagdollUtility>::get(),
                            "LateUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::RagdollUtility.AfterLastIK
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::RagdollUtility::*)()>(&::RootMotion::FinalIK::RagdollUtility::AfterLastIK)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x1201eb8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::RagdollUtility>::get(),
                            "AfterLastIK",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::RagdollUtility.AfterAnimation
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::RagdollUtility::*)()>(&::RootMotion::FinalIK::RagdollUtility::AfterAnimation)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x1201d38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::RagdollUtility>::get(),
                            "AfterAnimation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::RagdollUtility.OnFinalPose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::RagdollUtility::*)()>(&::RootMotion::FinalIK::RagdollUtility::OnFinalPose)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x1201e84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::RagdollUtility>::get(),
                            "OnFinalPose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::RagdollUtility.RagdollEnabler
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::RagdollUtility::*)()>(&::RootMotion::FinalIK::RagdollUtility::RagdollEnabler)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0x1201f38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::RagdollUtility>::get(),
                            "RagdollEnabler",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::RagdollUtility.get_isRagdoll
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::RootMotion::FinalIK::RagdollUtility::*)()>(&::RootMotion::FinalIK::RagdollUtility::get_isRagdoll)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x12012ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::RagdollUtility>::get(),
                            "get_isRagdoll",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::RagdollUtility.RecordVelocities
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::RagdollUtility::*)()>(&::RootMotion::FinalIK::RagdollUtility::RecordVelocities)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x1201edc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::RagdollUtility>::get(),
                            "RecordVelocities",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::RagdollUtility.get_ikUsed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::RootMotion::FinalIK::RagdollUtility::*)()>(&::RootMotion::FinalIK::RagdollUtility::get_ikUsed)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1201d64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::RagdollUtility>::get(),
                            "get_ikUsed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::RagdollUtility.StoreLocalState
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::RagdollUtility::*)()>(&::RootMotion::FinalIK::RagdollUtility::StoreLocalState)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x1201358;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::RagdollUtility>::get(),
                            "StoreLocalState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::RagdollUtility.FixTransforms
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::RagdollUtility::*)(float_t)>(&::RootMotion::FinalIK::RagdollUtility::FixTransforms)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x1201c5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::RagdollUtility>::get(),
                            "FixTransforms",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::RagdollUtility.OnDestroy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::RagdollUtility::*)()>(&::RootMotion::FinalIK::RagdollUtility::OnDestroy)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x1202598;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::RagdollUtility>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::RagdollUtility._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::RagdollUtility::*)()>(&::RootMotion::FinalIK::RagdollUtility::_ctor)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x12026b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::RagdollUtility>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::RootMotion::FinalIK::RagdollUtility::__set_ik(::RootMotion::FinalIK::IK value)  {
::cordl_internals::setInstanceField<::RootMotion::FinalIK::IK, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::RootMotion::FinalIK::IK>(value));
}
constexpr ::RootMotion::FinalIK::IK ::RootMotion::FinalIK::RagdollUtility::__get_ik() const {
return ::cordl_internals::getInstanceField<::RootMotion::FinalIK::IK, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::RootMotion::FinalIK::RagdollUtility::__set_ragdollToAnimationTime(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::RootMotion::FinalIK::RagdollUtility::__get_ragdollToAnimationTime() const {
return ::cordl_internals::getInstanceField<float_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::RootMotion::FinalIK::RagdollUtility::__set_applyIkOnRagdoll(bool value)  {
::cordl_internals::setInstanceField<bool, 0x24>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::RootMotion::FinalIK::RagdollUtility::__get_applyIkOnRagdoll() const {
return ::cordl_internals::getInstanceField<bool, 0x24>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::RootMotion::FinalIK::RagdollUtility::__set_applyVelocity(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::RootMotion::FinalIK::RagdollUtility::__get_applyVelocity() const {
return ::cordl_internals::getInstanceField<float_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::RootMotion::FinalIK::RagdollUtility::__set_applyAngularVelocity(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x2c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::RootMotion::FinalIK::RagdollUtility::__get_applyAngularVelocity() const {
return ::cordl_internals::getInstanceField<float_t, 0x2c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::RootMotion::FinalIK::RagdollUtility::__set_animator(::UnityEngine::Animator value)  {
::cordl_internals::setInstanceField<::UnityEngine::Animator, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Animator>(value));
}
constexpr ::UnityEngine::Animator ::RootMotion::FinalIK::RagdollUtility::__get_animator() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Animator, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::RootMotion::FinalIK::RagdollUtility::__set_rigidbones(::ArrayW<::RootMotion::FinalIK::____RootMotion__FinalIK__RagdollUtility__Rigidbone> value)  {
::cordl_internals::setInstanceField<::ArrayW<::RootMotion::FinalIK::____RootMotion__FinalIK__RagdollUtility__Rigidbone>, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::RootMotion::FinalIK::____RootMotion__FinalIK__RagdollUtility__Rigidbone>>(value));
}
constexpr ::ArrayW<::RootMotion::FinalIK::____RootMotion__FinalIK__RagdollUtility__Rigidbone> ::RootMotion::FinalIK::RagdollUtility::__get_rigidbones() const {
return ::cordl_internals::getInstanceField<::ArrayW<::RootMotion::FinalIK::____RootMotion__FinalIK__RagdollUtility__Rigidbone>, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::RootMotion::FinalIK::RagdollUtility::__set_children(::ArrayW<::RootMotion::FinalIK::____RootMotion__FinalIK__RagdollUtility__Child> value)  {
::cordl_internals::setInstanceField<::ArrayW<::RootMotion::FinalIK::____RootMotion__FinalIK__RagdollUtility__Child>, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::RootMotion::FinalIK::____RootMotion__FinalIK__RagdollUtility__Child>>(value));
}
constexpr ::ArrayW<::RootMotion::FinalIK::____RootMotion__FinalIK__RagdollUtility__Child> ::RootMotion::FinalIK::RagdollUtility::__get_children() const {
return ::cordl_internals::getInstanceField<::ArrayW<::RootMotion::FinalIK::____RootMotion__FinalIK__RagdollUtility__Child>, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::RootMotion::FinalIK::RagdollUtility::__set_enableRagdollFlag(bool value)  {
::cordl_internals::setInstanceField<bool, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::RootMotion::FinalIK::RagdollUtility::__get_enableRagdollFlag() const {
return ::cordl_internals::getInstanceField<bool, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::RootMotion::FinalIK::RagdollUtility::__set_animatorUpdateMode(::UnityEngine::AnimatorUpdateMode value)  {
::cordl_internals::setInstanceField<::UnityEngine::AnimatorUpdateMode, 0x4c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::AnimatorUpdateMode>(value));
}
constexpr ::UnityEngine::AnimatorUpdateMode ::RootMotion::FinalIK::RagdollUtility::__get_animatorUpdateMode() const {
return ::cordl_internals::getInstanceField<::UnityEngine::AnimatorUpdateMode, 0x4c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::RootMotion::FinalIK::RagdollUtility::__set_allIKComponents(::ArrayW<::RootMotion::FinalIK::IK> value)  {
::cordl_internals::setInstanceField<::ArrayW<::RootMotion::FinalIK::IK>, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::RootMotion::FinalIK::IK>>(value));
}
constexpr ::ArrayW<::RootMotion::FinalIK::IK> ::RootMotion::FinalIK::RagdollUtility::__get_allIKComponents() const {
return ::cordl_internals::getInstanceField<::ArrayW<::RootMotion::FinalIK::IK>, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::RootMotion::FinalIK::RagdollUtility::__set_fixTransforms(::ArrayW<bool> value)  {
::cordl_internals::setInstanceField<::ArrayW<bool>, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<bool>>(value));
}
constexpr ::ArrayW<bool> ::RootMotion::FinalIK::RagdollUtility::__get_fixTransforms() const {
return ::cordl_internals::getInstanceField<::ArrayW<bool>, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::RootMotion::FinalIK::RagdollUtility::__set_ragdollWeight(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x60>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::RootMotion::FinalIK::RagdollUtility::__get_ragdollWeight() const {
return ::cordl_internals::getInstanceField<float_t, 0x60>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::RootMotion::FinalIK::RagdollUtility::__set_ragdollWeightV(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x64>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::RootMotion::FinalIK::RagdollUtility::__get_ragdollWeightV() const {
return ::cordl_internals::getInstanceField<float_t, 0x64>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::RootMotion::FinalIK::RagdollUtility::__set_fixedFrame(bool value)  {
::cordl_internals::setInstanceField<bool, 0x68>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::RootMotion::FinalIK::RagdollUtility::__get_fixedFrame() const {
return ::cordl_internals::getInstanceField<bool, 0x68>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::RootMotion::FinalIK::RagdollUtility::__set_disabledIKComponents(::ArrayW<bool> value)  {
::cordl_internals::setInstanceField<::ArrayW<bool>, 0x70>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<bool>>(value));
}
constexpr ::ArrayW<bool> ::RootMotion::FinalIK::RagdollUtility::__get_disabledIKComponents() const {
return ::cordl_internals::getInstanceField<::ArrayW<bool>, 0x70>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void ::RootMotion::FinalIK::RagdollUtility::EnableRagdoll()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::RagdollUtility>::get(),
                            "EnableRagdoll",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::RootMotion::FinalIK::RagdollUtility::DisableRagdoll()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::RagdollUtility>::get(),
                            "DisableRagdoll",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::RootMotion::FinalIK::RagdollUtility::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::RagdollUtility>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::Collections::IEnumerator ::RootMotion::FinalIK::RagdollUtility::DisableRagdollSmooth()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::RagdollUtility>::get(),
                            "DisableRagdollSmooth",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::RootMotion::FinalIK::RagdollUtility::Update()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::RagdollUtility>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::RootMotion::FinalIK::RagdollUtility::FixedUpdate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::RagdollUtility>::get(),
                            "FixedUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::RootMotion::FinalIK::RagdollUtility::LateUpdate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::RagdollUtility>::get(),
                            "LateUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::RootMotion::FinalIK::RagdollUtility::AfterLastIK()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::RagdollUtility>::get(),
                            "AfterLastIK",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::RootMotion::FinalIK::RagdollUtility::AfterAnimation()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::RagdollUtility>::get(),
                            "AfterAnimation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::RootMotion::FinalIK::RagdollUtility::OnFinalPose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::RagdollUtility>::get(),
                            "OnFinalPose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::RootMotion::FinalIK::RagdollUtility::RagdollEnabler()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::RagdollUtility>::get(),
                            "RagdollEnabler",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::RootMotion::FinalIK::RagdollUtility::get_isRagdoll()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::RagdollUtility>::get(),
                            "get_isRagdoll",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::RootMotion::FinalIK::RagdollUtility::RecordVelocities()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::RagdollUtility>::get(),
                            "RecordVelocities",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::RootMotion::FinalIK::RagdollUtility::get_ikUsed()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::RagdollUtility>::get(),
                            "get_ikUsed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::RootMotion::FinalIK::RagdollUtility::StoreLocalState()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::RagdollUtility>::get(),
                            "StoreLocalState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::RootMotion::FinalIK::RagdollUtility::FixTransforms(float_t weight)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::RagdollUtility>::get(),
                            "FixTransforms",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, weight);
}
 void ::RootMotion::FinalIK::RagdollUtility::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::RagdollUtility>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 ::RootMotion::FinalIK::RagdollUtility::RagdollUtility()  : ::UnityEngine::MonoBehaviour(THROW_UNLESS(::il2cpp_utils::New<RagdollUtility>())) {}
 void ::RootMotion::FinalIK::RagdollUtility::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::RagdollUtility>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
