#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "RootMotion/FinalIK/zzzz__OffsetPose_def.hpp"
#include "RootMotion/FinalIK/zzzz__IKSolverFullBodyBiped_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "RootMotion/FinalIK/zzzz__FullBodyBipedEffector_def.hpp"
//  Writing Method size for method: RootMotion::FinalIK::RootMotion__FinalIK__OffsetPose__EffectorLink.Apply
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::RootMotion__FinalIK__OffsetPose__EffectorLink::*)(RootMotion::FinalIK::IKSolverFullBodyBiped, float_t, UnityEngine::Quaternion)>(&RootMotion::FinalIK::RootMotion__FinalIK__OffsetPose__EffectorLink::Apply)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x120b3f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__OffsetPose__EffectorLink>::get(),
                            "Apply",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<RootMotion::FinalIK::IKSolverFullBodyBiped>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Quaternion>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::FinalIK::RootMotion__FinalIK__OffsetPose__EffectorLink._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::RootMotion__FinalIK__OffsetPose__EffectorLink::*)()>(&RootMotion::FinalIK::RootMotion__FinalIK__OffsetPose__EffectorLink::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x120b73c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__OffsetPose__EffectorLink>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void RootMotion::FinalIK::RootMotion__FinalIK__OffsetPose__EffectorLink::__set_effector(RootMotion::FinalIK::FullBodyBipedEffector value)  {
::cordl_internals::setInstanceField<RootMotion::FinalIK::FullBodyBipedEffector, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<RootMotion::FinalIK::FullBodyBipedEffector>(value));
}
constexpr RootMotion::FinalIK::FullBodyBipedEffector RootMotion::FinalIK::RootMotion__FinalIK__OffsetPose__EffectorLink::__get_effector() const {
return ::cordl_internals::getInstanceField<RootMotion::FinalIK::FullBodyBipedEffector, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::RootMotion__FinalIK__OffsetPose__EffectorLink::__set_offset(UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<UnityEngine::Vector3, 0x14>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Vector3>(value));
}
constexpr UnityEngine::Vector3 RootMotion::FinalIK::RootMotion__FinalIK__OffsetPose__EffectorLink::__get_offset() const {
return ::cordl_internals::getInstanceField<UnityEngine::Vector3, 0x14>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::RootMotion__FinalIK__OffsetPose__EffectorLink::__set_pin(UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<UnityEngine::Vector3, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Vector3>(value));
}
constexpr UnityEngine::Vector3 RootMotion::FinalIK::RootMotion__FinalIK__OffsetPose__EffectorLink::__get_pin() const {
return ::cordl_internals::getInstanceField<UnityEngine::Vector3, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::RootMotion__FinalIK__OffsetPose__EffectorLink::__set_pinWeight(UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<UnityEngine::Vector3, 0x2c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Vector3>(value));
}
constexpr UnityEngine::Vector3 RootMotion::FinalIK::RootMotion__FinalIK__OffsetPose__EffectorLink::__get_pinWeight() const {
return ::cordl_internals::getInstanceField<UnityEngine::Vector3, 0x2c>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void RootMotion::FinalIK::RootMotion__FinalIK__OffsetPose__EffectorLink::Apply(RootMotion::FinalIK::IKSolverFullBodyBiped solver, float_t weight, UnityEngine::Quaternion rotation)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__OffsetPose__EffectorLink>::get(),
                            "Apply",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<RootMotion::FinalIK::IKSolverFullBodyBiped>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Quaternion>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, solver, weight, rotation);
}
// Ctor Parameters []
 RootMotion::FinalIK::RootMotion__FinalIK__OffsetPose__EffectorLink::RootMotion__FinalIK__OffsetPose__EffectorLink()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<RootMotion__FinalIK__OffsetPose__EffectorLink>())) {}
 void RootMotion::FinalIK::RootMotion__FinalIK__OffsetPose__EffectorLink::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__OffsetPose__EffectorLink>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: RootMotion::FinalIK::OffsetPose.Apply
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::OffsetPose::*)(RootMotion::FinalIK::IKSolverFullBodyBiped, float_t)>(&RootMotion::FinalIK::OffsetPose::Apply)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x12079f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::OffsetPose>::get(),
                            "Apply",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<RootMotion::FinalIK::IKSolverFullBodyBiped>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::FinalIK::OffsetPose.Apply
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::OffsetPose::*)(RootMotion::FinalIK::IKSolverFullBodyBiped, float_t, UnityEngine::Quaternion)>(&RootMotion::FinalIK::OffsetPose::Apply)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x120b640;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::OffsetPose>::get(),
                            "Apply",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<RootMotion::FinalIK::IKSolverFullBodyBiped>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Quaternion>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::FinalIK::OffsetPose._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::OffsetPose::*)()>(&RootMotion::FinalIK::OffsetPose::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x120b6e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::OffsetPose>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void RootMotion::FinalIK::OffsetPose::__set_effectorLinks(::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__OffsetPose__EffectorLink> value)  {
::cordl_internals::setInstanceField<::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__OffsetPose__EffectorLink>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__OffsetPose__EffectorLink>>(value));
}
constexpr ::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__OffsetPose__EffectorLink> RootMotion::FinalIK::OffsetPose::__get_effectorLinks() const {
return ::cordl_internals::getInstanceField<::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__OffsetPose__EffectorLink>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void RootMotion::FinalIK::OffsetPose::Apply(RootMotion::FinalIK::IKSolverFullBodyBiped solver, float_t weight)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::OffsetPose>::get(),
                            "Apply",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<RootMotion::FinalIK::IKSolverFullBodyBiped>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, solver, weight);
}
 void RootMotion::FinalIK::OffsetPose::Apply(RootMotion::FinalIK::IKSolverFullBodyBiped solver, float_t weight, UnityEngine::Quaternion rotation)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::OffsetPose>::get(),
                            "Apply",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<RootMotion::FinalIK::IKSolverFullBodyBiped>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Quaternion>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, solver, weight, rotation);
}
// Ctor Parameters []
 RootMotion::FinalIK::OffsetPose::OffsetPose()  : UnityEngine::MonoBehaviour(THROW_UNLESS(::il2cpp_utils::New<OffsetPose>())) {}
 void RootMotion::FinalIK::OffsetPose::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::OffsetPose>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
