#pragma once
#include "RootMotion/FinalIK/zzzz__IKSolver_impl.hpp"
#include "RootMotion/FinalIK/zzzz__IKSolverTrigonometric_def.hpp"
#include "RootMotion/FinalIK/zzzz__IKSolver_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "RootMotion/FinalIK/zzzz__IKSolverTrigonometric_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: RootMotion::FinalIK::RootMotion__FinalIK__IKSolverTrigonometric__TrigonometricBone.Initiate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::RootMotion__FinalIK__IKSolverTrigonometric__TrigonometricBone::*)(UnityEngine::Vector3, UnityEngine::Vector3)>(&RootMotion::FinalIK::RootMotion__FinalIK__IKSolverTrigonometric__TrigonometricBone::Initiate)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x11e5230;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverTrigonometric__TrigonometricBone>::get(),
                            "Initiate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::FinalIK::RootMotion__FinalIK__IKSolverTrigonometric__TrigonometricBone.GetRotation
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Quaternion (RootMotion::FinalIK::RootMotion__FinalIK__IKSolverTrigonometric__TrigonometricBone::*)(UnityEngine::Vector3, UnityEngine::Vector3)>(&RootMotion::FinalIK::RootMotion__FinalIK__IKSolverTrigonometric__TrigonometricBone::GetRotation)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x11e5ad8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverTrigonometric__TrigonometricBone>::get(),
                            "GetRotation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::FinalIK::RootMotion__FinalIK__IKSolverTrigonometric__TrigonometricBone.GetBendNormalFromCurrentRotation
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (RootMotion::FinalIK::RootMotion__FinalIK__IKSolverTrigonometric__TrigonometricBone::*)()>(&RootMotion::FinalIK::RootMotion__FinalIK__IKSolverTrigonometric__TrigonometricBone::GetBendNormalFromCurrentRotation)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x11e080c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverTrigonometric__TrigonometricBone>::get(),
                            "GetBendNormalFromCurrentRotation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::FinalIK::RootMotion__FinalIK__IKSolverTrigonometric__TrigonometricBone._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::RootMotion__FinalIK__IKSolverTrigonometric__TrigonometricBone::*)()>(&RootMotion::FinalIK::RootMotion__FinalIK__IKSolverTrigonometric__TrigonometricBone::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x11e5b74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverTrigonometric__TrigonometricBone>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverTrigonometric__TrigonometricBone::__set_targetToLocalSpace(UnityEngine::Quaternion value)  {
::cordl_internals::setInstanceField<UnityEngine::Quaternion, 0x74>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Quaternion>(value));
}
constexpr UnityEngine::Quaternion RootMotion::FinalIK::RootMotion__FinalIK__IKSolverTrigonometric__TrigonometricBone::__get_targetToLocalSpace() const {
return ::cordl_internals::getInstanceField<UnityEngine::Quaternion, 0x74>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverTrigonometric__TrigonometricBone::__set_defaultLocalBendNormal(UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<UnityEngine::Vector3, 0x84>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Vector3>(value));
}
constexpr UnityEngine::Vector3 RootMotion::FinalIK::RootMotion__FinalIK__IKSolverTrigonometric__TrigonometricBone::__get_defaultLocalBendNormal() const {
return ::cordl_internals::getInstanceField<UnityEngine::Vector3, 0x84>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverTrigonometric__TrigonometricBone::Initiate(UnityEngine::Vector3 childPosition, UnityEngine::Vector3 bendNormal)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverTrigonometric__TrigonometricBone>::get(),
                            "Initiate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, childPosition, bendNormal);
}
 UnityEngine::Quaternion RootMotion::FinalIK::RootMotion__FinalIK__IKSolverTrigonometric__TrigonometricBone::GetRotation(UnityEngine::Vector3 direction, UnityEngine::Vector3 bendNormal)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverTrigonometric__TrigonometricBone>::get(),
                            "GetRotation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Quaternion, false>(const_cast<void*>(instance), ___internal_method, direction, bendNormal);
}
 UnityEngine::Vector3 RootMotion::FinalIK::RootMotion__FinalIK__IKSolverTrigonometric__TrigonometricBone::GetBendNormalFromCurrentRotation()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverTrigonometric__TrigonometricBone>::get(),
                            "GetBendNormalFromCurrentRotation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Vector3, false>(const_cast<void*>(instance), ___internal_method);
}
 RootMotion::FinalIK::RootMotion__FinalIK__IKSolverTrigonometric__TrigonometricBone RootMotion::FinalIK::RootMotion__FinalIK__IKSolverTrigonometric__TrigonometricBone::New_ctor()  {
RootMotion::FinalIK::RootMotion__FinalIK__IKSolverTrigonometric__TrigonometricBone o{THROW_UNLESS(::il2cpp_utils::New<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverTrigonometric__TrigonometricBone>())};
return o;
}
 void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverTrigonometric__TrigonometricBone::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverTrigonometric__TrigonometricBone>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: RootMotion::FinalIK::IKSolverTrigonometric.SetBendGoalPosition
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverTrigonometric::*)(UnityEngine::Vector3, float_t)>(&RootMotion::FinalIK::IKSolverTrigonometric::SetBendGoalPosition)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x11e3f94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::IKSolverTrigonometric>::get(),
                            "SetBendGoalPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::FinalIK::IKSolverTrigonometric.SetBendPlaneToCurrent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverTrigonometric::*)()>(&RootMotion::FinalIK::IKSolverTrigonometric::SetBendPlaneToCurrent)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x11e4128;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::IKSolverTrigonometric>::get(),
                            "SetBendPlaneToCurrent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::FinalIK::IKSolverTrigonometric.SetIKRotation
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverTrigonometric::*)(UnityEngine::Quaternion)>(&RootMotion::FinalIK::IKSolverTrigonometric::SetIKRotation)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x11e42a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::IKSolverTrigonometric>::get(),
                            "SetIKRotation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Quaternion>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::FinalIK::IKSolverTrigonometric.SetIKRotationWeight
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverTrigonometric::*)(float_t)>(&RootMotion::FinalIK::IKSolverTrigonometric::SetIKRotationWeight)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x11e42b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::IKSolverTrigonometric>::get(),
                            "SetIKRotationWeight",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::FinalIK::IKSolverTrigonometric.GetIKRotation
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Quaternion (RootMotion::FinalIK::IKSolverTrigonometric::*)()>(&RootMotion::FinalIK::IKSolverTrigonometric::GetIKRotation)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x11e42d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::IKSolverTrigonometric>::get(),
                            "GetIKRotation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::FinalIK::IKSolverTrigonometric.GetIKRotationWeight
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (RootMotion::FinalIK::IKSolverTrigonometric::*)()>(&RootMotion::FinalIK::IKSolverTrigonometric::GetIKRotationWeight)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x11e42dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::IKSolverTrigonometric>::get(),
                            "GetIKRotationWeight",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::FinalIK::IKSolverTrigonometric.GetPoints
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__IKSolver__Point> (RootMotion::FinalIK::IKSolverTrigonometric::*)()>(&RootMotion::FinalIK::IKSolverTrigonometric::GetPoints)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x11e42e4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(RootMotion::FinalIK::IKSolverTrigonometric),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::IKSolverTrigonometric>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::FinalIK::IKSolverTrigonometric.GetPoint
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<RootMotion::FinalIK::RootMotion__FinalIK__IKSolver__Point (RootMotion::FinalIK::IKSolverTrigonometric::*)(UnityEngine::Transform)>(&RootMotion::FinalIK::IKSolverTrigonometric::GetPoint)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x11e43d0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(RootMotion::FinalIK::IKSolverTrigonometric),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::IKSolverTrigonometric>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::FinalIK::IKSolverTrigonometric.StoreDefaultLocalState
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverTrigonometric::*)()>(&RootMotion::FinalIK::IKSolverTrigonometric::StoreDefaultLocalState)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x11e44c8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(RootMotion::FinalIK::IKSolverTrigonometric),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::IKSolverTrigonometric>::get(),
                                  9
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::FinalIK::IKSolverTrigonometric.FixTransforms
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverTrigonometric::*)()>(&RootMotion::FinalIK::IKSolverTrigonometric::FixTransforms)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x11e4508;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(RootMotion::FinalIK::IKSolverTrigonometric),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::IKSolverTrigonometric>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::FinalIK::IKSolverTrigonometric.IsValid
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (RootMotion::FinalIK::IKSolverTrigonometric::*)(ByRef<::StringW>)>(&RootMotion::FinalIK::IKSolverTrigonometric::IsValid)> {
  constexpr static std::size_t size = 0x3a4;
  constexpr static std::size_t addrs = 0x11e4558;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(RootMotion::FinalIK::IKSolverTrigonometric),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::IKSolverTrigonometric>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::FinalIK::IKSolverTrigonometric.SetChain
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (RootMotion::FinalIK::IKSolverTrigonometric::*)(UnityEngine::Transform, UnityEngine::Transform, UnityEngine::Transform, UnityEngine::Transform)>(&RootMotion::FinalIK::IKSolverTrigonometric::SetChain)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x11e48fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::IKSolverTrigonometric>::get(),
                            "SetChain",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Transform>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Transform>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Transform>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Transform>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::FinalIK::IKSolverTrigonometric.Solve
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::Transform, UnityEngine::Transform, UnityEngine::Transform, UnityEngine::Vector3, UnityEngine::Vector3, float_t)>(&RootMotion::FinalIK::IKSolverTrigonometric::Solve)> {
  constexpr static std::size_t size = 0x4f4;
  constexpr static std::size_t addrs = 0x11e4948;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::IKSolverTrigonometric>::get(),
                            "Solve",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Transform>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Transform>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Transform>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::FinalIK::IKSolverTrigonometric.GetDirectionToBendPoint
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (*)(UnityEngine::Vector3, float_t, UnityEngine::Vector3, float_t, float_t)>(&RootMotion::FinalIK::IKSolverTrigonometric::GetDirectionToBendPoint)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x11e4e3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::IKSolverTrigonometric>::get(),
                            "GetDirectionToBendPoint",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::FinalIK::IKSolverTrigonometric.OnInitiate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverTrigonometric::*)()>(&RootMotion::FinalIK::IKSolverTrigonometric::OnInitiate)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x11e4f94;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(RootMotion::FinalIK::IKSolverTrigonometric),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::IKSolverTrigonometric>::get(),
                                  10
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::FinalIK::IKSolverTrigonometric.IsDirectHierarchy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (RootMotion::FinalIK::IKSolverTrigonometric::*)()>(&RootMotion::FinalIK::IKSolverTrigonometric::IsDirectHierarchy)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x11e5140;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::IKSolverTrigonometric>::get(),
                            "IsDirectHierarchy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::FinalIK::IKSolverTrigonometric.InitiateBones
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverTrigonometric::*)()>(&RootMotion::FinalIK::IKSolverTrigonometric::InitiateBones)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x11e50c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::IKSolverTrigonometric>::get(),
                            "InitiateBones",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::FinalIK::IKSolverTrigonometric.OnUpdate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverTrigonometric::*)()>(&RootMotion::FinalIK::IKSolverTrigonometric::OnUpdate)> {
  constexpr static std::size_t size = 0x5f8;
  constexpr static std::size_t addrs = 0x11e5320;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(RootMotion::FinalIK::IKSolverTrigonometric),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::IKSolverTrigonometric>::get(),
                                  11
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::FinalIK::IKSolverTrigonometric.OnInitiateVirtual
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverTrigonometric::*)()>(&RootMotion::FinalIK::IKSolverTrigonometric::OnInitiateVirtual)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x11e5b68;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(RootMotion::FinalIK::IKSolverTrigonometric),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::IKSolverTrigonometric>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::FinalIK::IKSolverTrigonometric.OnUpdateVirtual
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverTrigonometric::*)()>(&RootMotion::FinalIK::IKSolverTrigonometric::OnUpdateVirtual)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x11e5b6c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(RootMotion::FinalIK::IKSolverTrigonometric),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::IKSolverTrigonometric>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::FinalIK::IKSolverTrigonometric.OnPostSolveVirtual
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverTrigonometric::*)()>(&RootMotion::FinalIK::IKSolverTrigonometric::OnPostSolveVirtual)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x11e5b70;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(RootMotion::FinalIK::IKSolverTrigonometric),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::IKSolverTrigonometric>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::FinalIK::IKSolverTrigonometric.GetBendDirection
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (RootMotion::FinalIK::IKSolverTrigonometric::*)(UnityEngine::Vector3, UnityEngine::Vector3)>(&RootMotion::FinalIK::IKSolverTrigonometric::GetBendDirection)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x11e5918;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::IKSolverTrigonometric>::get(),
                            "GetBendDirection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::FinalIK::IKSolverTrigonometric._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverTrigonometric::*)()>(&RootMotion::FinalIK::IKSolverTrigonometric::_ctor)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x11e19b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::IKSolverTrigonometric>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void RootMotion::FinalIK::IKSolverTrigonometric::__set_target(UnityEngine::Transform value)  {
::cordl_internals::setInstanceField<UnityEngine::Transform, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Transform>(value));
}
constexpr UnityEngine::Transform RootMotion::FinalIK::IKSolverTrigonometric::__get_target() const {
return ::cordl_internals::getInstanceField<UnityEngine::Transform, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::IKSolverTrigonometric::__set_IKRotationWeight(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x60>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t RootMotion::FinalIK::IKSolverTrigonometric::__get_IKRotationWeight() const {
return ::cordl_internals::getInstanceField<float_t, 0x60>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::IKSolverTrigonometric::__set_IKRotation(UnityEngine::Quaternion value)  {
::cordl_internals::setInstanceField<UnityEngine::Quaternion, 0x64>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Quaternion>(value));
}
constexpr UnityEngine::Quaternion RootMotion::FinalIK::IKSolverTrigonometric::__get_IKRotation() const {
return ::cordl_internals::getInstanceField<UnityEngine::Quaternion, 0x64>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::IKSolverTrigonometric::__set_bendNormal(UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<UnityEngine::Vector3, 0x74>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Vector3>(value));
}
constexpr UnityEngine::Vector3 RootMotion::FinalIK::IKSolverTrigonometric::__get_bendNormal() const {
return ::cordl_internals::getInstanceField<UnityEngine::Vector3, 0x74>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::IKSolverTrigonometric::__set_bone1(RootMotion::FinalIK::RootMotion__FinalIK__IKSolverTrigonometric__TrigonometricBone value)  {
::cordl_internals::setInstanceField<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverTrigonometric__TrigonometricBone, 0x80>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverTrigonometric__TrigonometricBone>(value));
}
constexpr RootMotion::FinalIK::RootMotion__FinalIK__IKSolverTrigonometric__TrigonometricBone RootMotion::FinalIK::IKSolverTrigonometric::__get_bone1() const {
return ::cordl_internals::getInstanceField<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverTrigonometric__TrigonometricBone, 0x80>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::IKSolverTrigonometric::__set_bone2(RootMotion::FinalIK::RootMotion__FinalIK__IKSolverTrigonometric__TrigonometricBone value)  {
::cordl_internals::setInstanceField<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverTrigonometric__TrigonometricBone, 0x88>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverTrigonometric__TrigonometricBone>(value));
}
constexpr RootMotion::FinalIK::RootMotion__FinalIK__IKSolverTrigonometric__TrigonometricBone RootMotion::FinalIK::IKSolverTrigonometric::__get_bone2() const {
return ::cordl_internals::getInstanceField<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverTrigonometric__TrigonometricBone, 0x88>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::IKSolverTrigonometric::__set_bone3(RootMotion::FinalIK::RootMotion__FinalIK__IKSolverTrigonometric__TrigonometricBone value)  {
::cordl_internals::setInstanceField<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverTrigonometric__TrigonometricBone, 0x90>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverTrigonometric__TrigonometricBone>(value));
}
constexpr RootMotion::FinalIK::RootMotion__FinalIK__IKSolverTrigonometric__TrigonometricBone RootMotion::FinalIK::IKSolverTrigonometric::__get_bone3() const {
return ::cordl_internals::getInstanceField<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverTrigonometric__TrigonometricBone, 0x90>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::IKSolverTrigonometric::__set_weightIKPosition(UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<UnityEngine::Vector3, 0x98>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Vector3>(value));
}
constexpr UnityEngine::Vector3 RootMotion::FinalIK::IKSolverTrigonometric::__get_weightIKPosition() const {
return ::cordl_internals::getInstanceField<UnityEngine::Vector3, 0x98>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::IKSolverTrigonometric::__set_directHierarchy(bool value)  {
::cordl_internals::setInstanceField<bool, 0xa4>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool RootMotion::FinalIK::IKSolverTrigonometric::__get_directHierarchy() const {
return ::cordl_internals::getInstanceField<bool, 0xa4>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void RootMotion::FinalIK::IKSolverTrigonometric::SetBendGoalPosition(UnityEngine::Vector3 goalPosition, float_t weight)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::IKSolverTrigonometric>::get(),
                            "SetBendGoalPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, goalPosition, weight);
}
 void RootMotion::FinalIK::IKSolverTrigonometric::SetBendPlaneToCurrent()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::IKSolverTrigonometric>::get(),
                            "SetBendPlaneToCurrent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void RootMotion::FinalIK::IKSolverTrigonometric::SetIKRotation(UnityEngine::Quaternion rotation)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::IKSolverTrigonometric>::get(),
                            "SetIKRotation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Quaternion>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, rotation);
}
 void RootMotion::FinalIK::IKSolverTrigonometric::SetIKRotationWeight(float_t weight)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::IKSolverTrigonometric>::get(),
                            "SetIKRotationWeight",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, weight);
}
 UnityEngine::Quaternion RootMotion::FinalIK::IKSolverTrigonometric::GetIKRotation()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::IKSolverTrigonometric>::get(),
                            "GetIKRotation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Quaternion, false>(const_cast<void*>(instance), ___internal_method);
}
 float_t RootMotion::FinalIK::IKSolverTrigonometric::GetIKRotationWeight()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::IKSolverTrigonometric>::get(),
                            "GetIKRotationWeight",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 ::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__IKSolver__Point> RootMotion::FinalIK::IKSolverTrigonometric::GetPoints()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::IKSolverTrigonometric>::get(),
                            "GetPoints",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__IKSolver__Point>, false>(const_cast<void*>(instance), ___internal_method);
}
 RootMotion::FinalIK::RootMotion__FinalIK__IKSolver__Point RootMotion::FinalIK::IKSolverTrigonometric::GetPoint(UnityEngine::Transform transform)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::IKSolverTrigonometric>::get(),
                            "GetPoint",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Transform>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<RootMotion::FinalIK::RootMotion__FinalIK__IKSolver__Point, false>(const_cast<void*>(instance), ___internal_method, transform);
}
 void RootMotion::FinalIK::IKSolverTrigonometric::StoreDefaultLocalState()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::IKSolverTrigonometric>::get(),
                            "StoreDefaultLocalState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void RootMotion::FinalIK::IKSolverTrigonometric::FixTransforms()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::IKSolverTrigonometric>::get(),
                            "FixTransforms",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool RootMotion::FinalIK::IKSolverTrigonometric::IsValid(ByRef<::StringW> message)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::IKSolverTrigonometric>::get(),
                            "IsValid",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, message);
}
 bool RootMotion::FinalIK::IKSolverTrigonometric::SetChain(UnityEngine::Transform bone1, UnityEngine::Transform bone2, UnityEngine::Transform bone3, UnityEngine::Transform root)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::IKSolverTrigonometric>::get(),
                            "SetChain",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Transform>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Transform>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Transform>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Transform>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, bone1, bone2, bone3, root);
}
 void RootMotion::FinalIK::IKSolverTrigonometric::Solve(UnityEngine::Transform bone1, UnityEngine::Transform bone2, UnityEngine::Transform bone3, UnityEngine::Vector3 targetPosition, UnityEngine::Vector3 bendNormal, float_t weight)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::IKSolverTrigonometric>::get(),
                            "Solve",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Transform>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Transform>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Transform>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, bone1, bone2, bone3, targetPosition, bendNormal, weight);
}
 UnityEngine::Vector3 RootMotion::FinalIK::IKSolverTrigonometric::GetDirectionToBendPoint(UnityEngine::Vector3 direction, float_t directionMag, UnityEngine::Vector3 bendDirection, float_t sqrMag1, float_t sqrMag2)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::IKSolverTrigonometric>::get(),
                            "GetDirectionToBendPoint",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Vector3, false>(nullptr, ___internal_method, direction, directionMag, bendDirection, sqrMag1, sqrMag2);
}
 void RootMotion::FinalIK::IKSolverTrigonometric::OnInitiate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::IKSolverTrigonometric>::get(),
                            "OnInitiate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool RootMotion::FinalIK::IKSolverTrigonometric::IsDirectHierarchy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::IKSolverTrigonometric>::get(),
                            "IsDirectHierarchy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void RootMotion::FinalIK::IKSolverTrigonometric::InitiateBones()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::IKSolverTrigonometric>::get(),
                            "InitiateBones",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void RootMotion::FinalIK::IKSolverTrigonometric::OnUpdate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::IKSolverTrigonometric>::get(),
                            "OnUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void RootMotion::FinalIK::IKSolverTrigonometric::OnInitiateVirtual()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::IKSolverTrigonometric>::get(),
                            "OnInitiateVirtual",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void RootMotion::FinalIK::IKSolverTrigonometric::OnUpdateVirtual()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::IKSolverTrigonometric>::get(),
                            "OnUpdateVirtual",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void RootMotion::FinalIK::IKSolverTrigonometric::OnPostSolveVirtual()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::IKSolverTrigonometric>::get(),
                            "OnPostSolveVirtual",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::Vector3 RootMotion::FinalIK::IKSolverTrigonometric::GetBendDirection(UnityEngine::Vector3 IKPosition, UnityEngine::Vector3 bendNormal)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::IKSolverTrigonometric>::get(),
                            "GetBendDirection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Vector3, false>(const_cast<void*>(instance), ___internal_method, IKPosition, bendNormal);
}
 RootMotion::FinalIK::IKSolverTrigonometric RootMotion::FinalIK::IKSolverTrigonometric::New_ctor()  {
RootMotion::FinalIK::IKSolverTrigonometric o{THROW_UNLESS(::il2cpp_utils::New<RootMotion::FinalIK::IKSolverTrigonometric>())};
return o;
}
 void RootMotion::FinalIK::IKSolverTrigonometric::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::IKSolverTrigonometric>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
