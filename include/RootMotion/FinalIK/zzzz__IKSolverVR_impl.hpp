#pragma once
#include "RootMotion/FinalIK/zzzz__IKSolverVR_impl.hpp"
#include "RootMotion/FinalIK/zzzz__IKSolver_impl.hpp"
#include "System/zzzz__Enum_impl.hpp"
#include "RootMotion/FinalIK/zzzz__IKSolverVR_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "RootMotion/FinalIK/zzzz__VRIK_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "RootMotion/FinalIK/zzzz__IKSolver_def.hpp"
#include "UnityEngine/zzzz__Keyframe_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_def.hpp"
#include "RootMotion/zzzz__InterpolationMode_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::RootMotion__FinalIK__IKSolverVR__Arm__ShoulderRotationMode::RootMotion__FinalIK__IKSolverVR__Arm__ShoulderRotationMode(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void GlobalNamespace::RootMotion__FinalIK__IKSolverVR__Arm__ShoulderRotationMode::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::RootMotion__FinalIK__IKSolverVR__Arm__ShoulderRotationMode::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr GlobalNamespace::RootMotion__FinalIK__IKSolverVR__Arm__ShoulderRotationMode  GlobalNamespace::RootMotion__FinalIK__IKSolverVR__Arm__ShoulderRotationMode::YawPitch{0};
constexpr GlobalNamespace::RootMotion__FinalIK__IKSolverVR__Arm__ShoulderRotationMode  GlobalNamespace::RootMotion__FinalIK__IKSolverVR__Arm__ShoulderRotationMode::FromTo{1};
//  Writing Method size for method: RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__BodyPart.OnRead
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__BodyPart::*)(::ArrayW<UnityEngine::Vector3>, ::ArrayW<UnityEngine::Quaternion>, bool, bool, bool, bool, bool, int32_t, int32_t)>(&RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__BodyPart::OnRead)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__BodyPart),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__BodyPart>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__BodyPart.PreSolve
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__BodyPart::*)()>(&RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__BodyPart::PreSolve)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__BodyPart),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__BodyPart>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__BodyPart.Write
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__BodyPart::*)(ByRef<::ArrayW<UnityEngine::Vector3>>, ByRef<::ArrayW<UnityEngine::Quaternion>>)>(&RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__BodyPart::Write)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__BodyPart),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__BodyPart>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__BodyPart.ApplyOffsets
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__BodyPart::*)()>(&RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__BodyPart::ApplyOffsets)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__BodyPart),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__BodyPart>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__BodyPart.ResetOffsets
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__BodyPart::*)()>(&RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__BodyPart::ResetOffsets)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__BodyPart),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__BodyPart>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__BodyPart.get_sqrMag
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__BodyPart::*)()>(&RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__BodyPart::get_sqrMag)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x11ef03c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__BodyPart>::get(),
                            "get_sqrMag",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__BodyPart.set_sqrMag
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__BodyPart::*)(float_t)>(&RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__BodyPart::set_sqrMag)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x11ef044;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__BodyPart>::get(),
                            "set_sqrMag",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__BodyPart.get_mag
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__BodyPart::*)()>(&RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__BodyPart::get_mag)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x11ef04c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__BodyPart>::get(),
                            "get_mag",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__BodyPart.set_mag
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__BodyPart::*)(float_t)>(&RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__BodyPart::set_mag)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x11ef054;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__BodyPart>::get(),
                            "set_mag",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__BodyPart.SetLOD
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__BodyPart::*)(int32_t)>(&RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__BodyPart::SetLOD)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x11ef05c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__BodyPart>::get(),
                            "SetLOD",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__BodyPart.Read
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__BodyPart::*)(::ArrayW<UnityEngine::Vector3>, ::ArrayW<UnityEngine::Quaternion>, bool, bool, bool, bool, bool, int32_t, int32_t)>(&RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__BodyPart::Read)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x11e045c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__BodyPart>::get(),
                            "Read",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<UnityEngine::Vector3>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<UnityEngine::Quaternion>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__BodyPart.MovePosition
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__BodyPart::*)(UnityEngine::Vector3)>(&RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__BodyPart::MovePosition)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x11ef064;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__BodyPart>::get(),
                            "MovePosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__BodyPart.MoveRotation
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__BodyPart::*)(UnityEngine::Quaternion)>(&RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__BodyPart::MoveRotation)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x11ef0ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__BodyPart>::get(),
                            "MoveRotation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Quaternion>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__BodyPart.Translate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__BodyPart::*)(UnityEngine::Vector3, UnityEngine::Quaternion)>(&RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__BodyPart::Translate)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x11ef184;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__BodyPart>::get(),
                            "Translate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Quaternion>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__BodyPart.TranslateRoot
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__BodyPart::*)(UnityEngine::Vector3, UnityEngine::Quaternion)>(&RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__BodyPart::TranslateRoot)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x11eb32c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__BodyPart>::get(),
                            "TranslateRoot",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Quaternion>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__BodyPart.RotateTo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__BodyPart::*)(RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone, UnityEngine::Quaternion, float_t)>(&RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__BodyPart::RotateTo)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x11eeac0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__BodyPart>::get(),
                            "RotateTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Quaternion>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__BodyPart.Visualize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__BodyPart::*)(UnityEngine::Color)>(&RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__BodyPart::Visualize)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x11ef1cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__BodyPart>::get(),
                            "Visualize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Color>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__BodyPart.Visualize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__BodyPart::*)()>(&RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__BodyPart::Visualize)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x11ef2f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__BodyPart>::get(),
                            "Visualize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__BodyPart._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__BodyPart::*)()>(&RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__BodyPart::_ctor)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x11eefa4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__BodyPart>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__BodyPart::__set__sqrMag_k__BackingField(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__BodyPart::__get__sqrMag_k__BackingField() const {
return ::cordl_internals::getInstanceField<float_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__BodyPart::__set__mag_k__BackingField(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x14>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__BodyPart::__get__mag_k__BackingField() const {
return ::cordl_internals::getInstanceField<float_t, 0x14>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__BodyPart::__set_bones(::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone> value)  {
::cordl_internals::setInstanceField<::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone>>(value));
}
constexpr ::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone> RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__BodyPart::__get_bones() const {
return ::cordl_internals::getInstanceField<::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__BodyPart::__set_initiated(bool value)  {
::cordl_internals::setInstanceField<bool, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__BodyPart::__get_initiated() const {
return ::cordl_internals::getInstanceField<bool, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__BodyPart::__set_rootPosition(UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<UnityEngine::Vector3, 0x24>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Vector3>(value));
}
constexpr UnityEngine::Vector3 RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__BodyPart::__get_rootPosition() const {
return ::cordl_internals::getInstanceField<UnityEngine::Vector3, 0x24>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__BodyPart::__set_rootRotation(UnityEngine::Quaternion value)  {
::cordl_internals::setInstanceField<UnityEngine::Quaternion, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Quaternion>(value));
}
constexpr UnityEngine::Quaternion RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__BodyPart::__get_rootRotation() const {
return ::cordl_internals::getInstanceField<UnityEngine::Quaternion, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__BodyPart::__set_index(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__BodyPart::__get_index() const {
return ::cordl_internals::getInstanceField<int32_t, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__BodyPart::__set_LOD(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x44>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__BodyPart::__get_LOD() const {
return ::cordl_internals::getInstanceField<int32_t, 0x44>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__BodyPart::OnRead(::ArrayW<UnityEngine::Vector3> positions, ::ArrayW<UnityEngine::Quaternion> rotations, bool hasChest, bool hasNeck, bool hasShoulders, bool hasToes, bool hasLegs, int32_t rootIndex, int32_t index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__BodyPart>::get(),
                            "OnRead",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<UnityEngine::Vector3>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<UnityEngine::Quaternion>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, positions, rotations, hasChest, hasNeck, hasShoulders, hasToes, hasLegs, rootIndex, index);
}
 void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__BodyPart::PreSolve()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__BodyPart>::get(),
                            "PreSolve",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__BodyPart::Write(ByRef<::ArrayW<UnityEngine::Vector3>> solvedPositions, ByRef<::ArrayW<UnityEngine::Quaternion>> solvedRotations)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__BodyPart>::get(),
                            "Write",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<UnityEngine::Vector3>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<UnityEngine::Quaternion>>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, solvedPositions, solvedRotations);
}
 void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__BodyPart::ApplyOffsets()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__BodyPart>::get(),
                            "ApplyOffsets",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__BodyPart::ResetOffsets()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__BodyPart>::get(),
                            "ResetOffsets",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 float_t RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__BodyPart::get_sqrMag()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__BodyPart>::get(),
                            "get_sqrMag",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__BodyPart::set_sqrMag(float_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__BodyPart>::get(),
                            "set_sqrMag",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 float_t RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__BodyPart::get_mag()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__BodyPart>::get(),
                            "get_mag",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__BodyPart::set_mag(float_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__BodyPart>::get(),
                            "set_mag",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__BodyPart::SetLOD(int32_t LOD)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__BodyPart>::get(),
                            "SetLOD",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, LOD);
}
 void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__BodyPart::Read(::ArrayW<UnityEngine::Vector3> positions, ::ArrayW<UnityEngine::Quaternion> rotations, bool hasChest, bool hasNeck, bool hasShoulders, bool hasToes, bool hasLegs, int32_t rootIndex, int32_t index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__BodyPart>::get(),
                            "Read",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<UnityEngine::Vector3>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<UnityEngine::Quaternion>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, positions, rotations, hasChest, hasNeck, hasShoulders, hasToes, hasLegs, rootIndex, index);
}
 void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__BodyPart::MovePosition(UnityEngine::Vector3 position)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__BodyPart>::get(),
                            "MovePosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, position);
}
 void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__BodyPart::MoveRotation(UnityEngine::Quaternion rotation)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__BodyPart>::get(),
                            "MoveRotation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Quaternion>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, rotation);
}
 void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__BodyPart::Translate(UnityEngine::Vector3 position, UnityEngine::Quaternion rotation)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__BodyPart>::get(),
                            "Translate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Quaternion>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, position, rotation);
}
 void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__BodyPart::TranslateRoot(UnityEngine::Vector3 newRootPos, UnityEngine::Quaternion newRootRot)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__BodyPart>::get(),
                            "TranslateRoot",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Quaternion>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, newRootPos, newRootRot);
}
/// @param weight: float_t (default: 1)
 void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__BodyPart::RotateTo(RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone bone, UnityEngine::Quaternion rotation, float_t weight)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__BodyPart>::get(),
                            "RotateTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Quaternion>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, bone, rotation, weight);
}
 void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__BodyPart::Visualize(UnityEngine::Color color)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__BodyPart>::get(),
                            "Visualize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Color>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, color);
}
 void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__BodyPart::Visualize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__BodyPart>::get(),
                            "Visualize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__BodyPart::RootMotion__FinalIK__IKSolverVR__BodyPart()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<RootMotion__FinalIK__IKSolverVR__BodyPart>())) {}
 void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__BodyPart::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__BodyPart>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Arm.get_position
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Arm::*)()>(&RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Arm::get_position)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x11ed5d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Arm>::get(),
                            "get_position",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Arm.set_position
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Arm::*)(UnityEngine::Vector3)>(&RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Arm::set_position)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x11ed5e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Arm>::get(),
                            "set_position",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Arm.get_rotation
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Quaternion (RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Arm::*)()>(&RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Arm::get_rotation)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x11ed5ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Arm>::get(),
                            "get_rotation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Arm.set_rotation
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Arm::*)(UnityEngine::Quaternion)>(&RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Arm::set_rotation)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x11ed5f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Arm>::get(),
                            "set_rotation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Quaternion>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Arm.get_shoulder
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone (RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Arm::*)()>(&RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Arm::get_shoulder)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x11ed604;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Arm>::get(),
                            "get_shoulder",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Arm.get_upperArm
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone (RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Arm::*)()>(&RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Arm::get_upperArm)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x11ed62c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Arm>::get(),
                            "get_upperArm",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Arm.get_forearm
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone (RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Arm::*)()>(&RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Arm::get_forearm)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x11ed660;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Arm>::get(),
                            "get_forearm",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Arm.get_hand
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone (RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Arm::*)()>(&RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Arm::get_hand)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x11ed6a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Arm>::get(),
                            "get_hand",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Arm.OnRead
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Arm::*)(::ArrayW<UnityEngine::Vector3>, ::ArrayW<UnityEngine::Quaternion>, bool, bool, bool, bool, bool, int32_t, int32_t)>(&RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Arm::OnRead)> {
  constexpr static std::size_t size = 0x844;
  constexpr static std::size_t addrs = 0x11ed6e0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Arm),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Arm>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Arm.PreSolve
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Arm::*)()>(&RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Arm::PreSolve)> {
  constexpr static std::size_t size = 0x2ac;
  constexpr static std::size_t addrs = 0x11edf24;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Arm),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Arm>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Arm.ApplyOffsets
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Arm::*)()>(&RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Arm::ApplyOffsets)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x11ee1d0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Arm),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Arm>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Arm.Stretching
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Arm::*)()>(&RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Arm::Stretching)> {
  constexpr static std::size_t size = 0x350;
  constexpr static std::size_t addrs = 0x11ee1f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Arm>::get(),
                            "Stretching",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Arm.Solve
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Arm::*)(bool)>(&RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Arm::Solve)> {
  constexpr static std::size_t size = 0x15e4;
  constexpr static std::size_t addrs = 0x11eb454;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Arm>::get(),
                            "Solve",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Arm.ResetOffsets
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Arm::*)()>(&RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Arm::ResetOffsets)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x11eec28;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Arm),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Arm>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Arm.Write
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Arm::*)(ByRef<::ArrayW<UnityEngine::Vector3>>, ByRef<::ArrayW<UnityEngine::Quaternion>>)>(&RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Arm::Write)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x11eec80;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Arm),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Arm>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Arm.DamperValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Arm::*)(float_t, float_t, float_t, float_t)>(&RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Arm::DamperValue)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x11ee544;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Arm>::get(),
                            "DamperValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Arm.GetBendNormal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Arm::*)(UnityEngine::Vector3)>(&RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Arm::GetBendNormal)> {
  constexpr static std::size_t size = 0x4fc;
  constexpr static std::size_t addrs = 0x11ee5c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Arm>::get(),
                            "GetBendNormal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Arm.Visualize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Arm::*)(RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone, RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone, RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone, UnityEngine::Color)>(&RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Arm::Visualize)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x11eee8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Arm>::get(),
                            "Visualize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Color>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Arm._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Arm::*)()>(&RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Arm::_ctor)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x11ed35c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Arm>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Arm::__set_target(UnityEngine::Transform value)  {
::cordl_internals::setInstanceField<UnityEngine::Transform, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Transform>(value));
}
constexpr UnityEngine::Transform RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Arm::__get_target() const {
return ::cordl_internals::getInstanceField<UnityEngine::Transform, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Arm::__set_bendGoal(UnityEngine::Transform value)  {
::cordl_internals::setInstanceField<UnityEngine::Transform, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Transform>(value));
}
constexpr UnityEngine::Transform RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Arm::__get_bendGoal() const {
return ::cordl_internals::getInstanceField<UnityEngine::Transform, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Arm::__set_positionWeight(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Arm::__get_positionWeight() const {
return ::cordl_internals::getInstanceField<float_t, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Arm::__set_rotationWeight(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x5c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Arm::__get_rotationWeight() const {
return ::cordl_internals::getInstanceField<float_t, 0x5c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Arm::__set_shoulderRotationMode(GlobalNamespace::RootMotion__FinalIK__IKSolverVR__Arm__ShoulderRotationMode value)  {
::cordl_internals::setInstanceField<GlobalNamespace::RootMotion__FinalIK__IKSolverVR__Arm__ShoulderRotationMode, 0x60>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::RootMotion__FinalIK__IKSolverVR__Arm__ShoulderRotationMode>(value));
}
constexpr GlobalNamespace::RootMotion__FinalIK__IKSolverVR__Arm__ShoulderRotationMode RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Arm::__get_shoulderRotationMode() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::RootMotion__FinalIK__IKSolverVR__Arm__ShoulderRotationMode, 0x60>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Arm::__set_shoulderRotationWeight(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x64>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Arm::__get_shoulderRotationWeight() const {
return ::cordl_internals::getInstanceField<float_t, 0x64>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Arm::__set_shoulderTwistWeight(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x68>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Arm::__get_shoulderTwistWeight() const {
return ::cordl_internals::getInstanceField<float_t, 0x68>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Arm::__set_bendGoalWeight(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x6c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Arm::__get_bendGoalWeight() const {
return ::cordl_internals::getInstanceField<float_t, 0x6c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Arm::__set_swivelOffset(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x70>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Arm::__get_swivelOffset() const {
return ::cordl_internals::getInstanceField<float_t, 0x70>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Arm::__set_wristToPalmAxis(UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<UnityEngine::Vector3, 0x74>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Vector3>(value));
}
constexpr UnityEngine::Vector3 RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Arm::__get_wristToPalmAxis() const {
return ::cordl_internals::getInstanceField<UnityEngine::Vector3, 0x74>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Arm::__set_palmToThumbAxis(UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<UnityEngine::Vector3, 0x80>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Vector3>(value));
}
constexpr UnityEngine::Vector3 RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Arm::__get_palmToThumbAxis() const {
return ::cordl_internals::getInstanceField<UnityEngine::Vector3, 0x80>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Arm::__set_armLengthMlp(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x8c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Arm::__get_armLengthMlp() const {
return ::cordl_internals::getInstanceField<float_t, 0x8c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Arm::__set_stretchCurve(UnityEngine::AnimationCurve value)  {
::cordl_internals::setInstanceField<UnityEngine::AnimationCurve, 0x90>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::AnimationCurve>(value));
}
constexpr UnityEngine::AnimationCurve RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Arm::__get_stretchCurve() const {
return ::cordl_internals::getInstanceField<UnityEngine::AnimationCurve, 0x90>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Arm::__set_IKPosition(UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<UnityEngine::Vector3, 0x98>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Vector3>(value));
}
constexpr UnityEngine::Vector3 RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Arm::__get_IKPosition() const {
return ::cordl_internals::getInstanceField<UnityEngine::Vector3, 0x98>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Arm::__set_IKRotation(UnityEngine::Quaternion value)  {
::cordl_internals::setInstanceField<UnityEngine::Quaternion, 0xa4>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Quaternion>(value));
}
constexpr UnityEngine::Quaternion RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Arm::__get_IKRotation() const {
return ::cordl_internals::getInstanceField<UnityEngine::Quaternion, 0xa4>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Arm::__set_bendDirection(UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<UnityEngine::Vector3, 0xb4>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Vector3>(value));
}
constexpr UnityEngine::Vector3 RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Arm::__get_bendDirection() const {
return ::cordl_internals::getInstanceField<UnityEngine::Vector3, 0xb4>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Arm::__set_handPositionOffset(UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<UnityEngine::Vector3, 0xc0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Vector3>(value));
}
constexpr UnityEngine::Vector3 RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Arm::__get_handPositionOffset() const {
return ::cordl_internals::getInstanceField<UnityEngine::Vector3, 0xc0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Arm::__set__position_k__BackingField(UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<UnityEngine::Vector3, 0xcc>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Vector3>(value));
}
constexpr UnityEngine::Vector3 RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Arm::__get__position_k__BackingField() const {
return ::cordl_internals::getInstanceField<UnityEngine::Vector3, 0xcc>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Arm::__set__rotation_k__BackingField(UnityEngine::Quaternion value)  {
::cordl_internals::setInstanceField<UnityEngine::Quaternion, 0xd8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Quaternion>(value));
}
constexpr UnityEngine::Quaternion RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Arm::__get__rotation_k__BackingField() const {
return ::cordl_internals::getInstanceField<UnityEngine::Quaternion, 0xd8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Arm::__set_hasShoulder(bool value)  {
::cordl_internals::setInstanceField<bool, 0xe8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Arm::__get_hasShoulder() const {
return ::cordl_internals::getInstanceField<bool, 0xe8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Arm::__set_chestForwardAxis(UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<UnityEngine::Vector3, 0xec>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Vector3>(value));
}
constexpr UnityEngine::Vector3 RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Arm::__get_chestForwardAxis() const {
return ::cordl_internals::getInstanceField<UnityEngine::Vector3, 0xec>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Arm::__set_chestUpAxis(UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<UnityEngine::Vector3, 0xf8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Vector3>(value));
}
constexpr UnityEngine::Vector3 RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Arm::__get_chestUpAxis() const {
return ::cordl_internals::getInstanceField<UnityEngine::Vector3, 0xf8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Arm::__set_chestRotation(UnityEngine::Quaternion value)  {
::cordl_internals::setInstanceField<UnityEngine::Quaternion, 0x104>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Quaternion>(value));
}
constexpr UnityEngine::Quaternion RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Arm::__get_chestRotation() const {
return ::cordl_internals::getInstanceField<UnityEngine::Quaternion, 0x104>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Arm::__set_chestForward(UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<UnityEngine::Vector3, 0x114>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Vector3>(value));
}
constexpr UnityEngine::Vector3 RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Arm::__get_chestForward() const {
return ::cordl_internals::getInstanceField<UnityEngine::Vector3, 0x114>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Arm::__set_chestUp(UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<UnityEngine::Vector3, 0x120>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Vector3>(value));
}
constexpr UnityEngine::Vector3 RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Arm::__get_chestUp() const {
return ::cordl_internals::getInstanceField<UnityEngine::Vector3, 0x120>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Arm::__set_forearmRelToUpperArm(UnityEngine::Quaternion value)  {
::cordl_internals::setInstanceField<UnityEngine::Quaternion, 0x12c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Quaternion>(value));
}
constexpr UnityEngine::Quaternion RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Arm::__get_forearmRelToUpperArm() const {
return ::cordl_internals::getInstanceField<UnityEngine::Quaternion, 0x12c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Arm::__set_upperArmBendAxis(UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<UnityEngine::Vector3, 0x13c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Vector3>(value));
}
constexpr UnityEngine::Vector3 RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Arm::__get_upperArmBendAxis() const {
return ::cordl_internals::getInstanceField<UnityEngine::Vector3, 0x13c>(this->::bs_hook::Il2CppWrapperType::instance);
}
 UnityEngine::Vector3 RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Arm::get_position()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Arm>::get(),
                            "get_position",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Vector3, false>(const_cast<void*>(instance), ___internal_method);
}
 void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Arm::set_position(UnityEngine::Vector3 value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Arm>::get(),
                            "set_position",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 UnityEngine::Quaternion RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Arm::get_rotation()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Arm>::get(),
                            "get_rotation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Quaternion, false>(const_cast<void*>(instance), ___internal_method);
}
 void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Arm::set_rotation(UnityEngine::Quaternion value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Arm>::get(),
                            "set_rotation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Quaternion>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Arm::get_shoulder()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Arm>::get(),
                            "get_shoulder",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone, false>(const_cast<void*>(instance), ___internal_method);
}
 RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Arm::get_upperArm()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Arm>::get(),
                            "get_upperArm",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone, false>(const_cast<void*>(instance), ___internal_method);
}
 RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Arm::get_forearm()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Arm>::get(),
                            "get_forearm",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone, false>(const_cast<void*>(instance), ___internal_method);
}
 RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Arm::get_hand()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Arm>::get(),
                            "get_hand",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone, false>(const_cast<void*>(instance), ___internal_method);
}
 void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Arm::OnRead(::ArrayW<UnityEngine::Vector3> positions, ::ArrayW<UnityEngine::Quaternion> rotations, bool hasChest, bool hasNeck, bool hasShoulders, bool hasToes, bool hasLegs, int32_t rootIndex, int32_t index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Arm>::get(),
                            "OnRead",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<UnityEngine::Vector3>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<UnityEngine::Quaternion>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, positions, rotations, hasChest, hasNeck, hasShoulders, hasToes, hasLegs, rootIndex, index);
}
 void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Arm::PreSolve()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Arm>::get(),
                            "PreSolve",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Arm::ApplyOffsets()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Arm>::get(),
                            "ApplyOffsets",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Arm::Stretching()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Arm>::get(),
                            "Stretching",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Arm::Solve(bool isLeft)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Arm>::get(),
                            "Solve",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, isLeft);
}
 void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Arm::ResetOffsets()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Arm>::get(),
                            "ResetOffsets",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Arm::Write(ByRef<::ArrayW<UnityEngine::Vector3>> solvedPositions, ByRef<::ArrayW<UnityEngine::Quaternion>> solvedRotations)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Arm>::get(),
                            "Write",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<UnityEngine::Vector3>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<UnityEngine::Quaternion>>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, solvedPositions, solvedRotations);
}
/// @param weight: float_t (default: 1)
 float_t RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Arm::DamperValue(float_t value, float_t min, float_t max, float_t weight)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Arm>::get(),
                            "DamperValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method, value, min, max, weight);
}
 UnityEngine::Vector3 RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Arm::GetBendNormal(UnityEngine::Vector3 dir)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Arm>::get(),
                            "GetBendNormal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Vector3, false>(const_cast<void*>(instance), ___internal_method, dir);
}
 void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Arm::Visualize(RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone bone1, RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone bone2, RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone bone3, UnityEngine::Color color)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Arm>::get(),
                            "Visualize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Color>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, bone1, bone2, bone3, color);
}
// Ctor Parameters []
 RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Arm::RootMotion__FinalIK__IKSolverVR__Arm()  : RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__BodyPart(THROW_UNLESS(::il2cpp_utils::New<RootMotion__FinalIK__IKSolverVR__Arm>())) {}
 void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Arm::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Arm>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Footstep.get_isStepping
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Footstep::*)()>(&RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Footstep::get_isStepping)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x11ef304;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Footstep>::get(),
                            "get_isStepping",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Footstep.get_stepProgress
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Footstep::*)()>(&RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Footstep::get_stepProgress)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x11ef318;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Footstep>::get(),
                            "get_stepProgress",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Footstep.set_stepProgress
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Footstep::*)(float_t)>(&RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Footstep::set_stepProgress)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x11ef320;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Footstep>::get(),
                            "set_stepProgress",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Footstep._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Footstep::*)(UnityEngine::Quaternion, UnityEngine::Vector3, UnityEngine::Quaternion, UnityEngine::Vector3)>(&RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Footstep::_ctor)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x11ef328;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Footstep>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Quaternion>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Quaternion>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Footstep.Reset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Footstep::*)(UnityEngine::Quaternion, UnityEngine::Vector3, UnityEngine::Quaternion)>(&RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Footstep::Reset)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x11ef4ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Footstep>::get(),
                            "Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Quaternion>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Quaternion>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Footstep.StepTo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Footstep::*)(UnityEngine::Vector3, UnityEngine::Quaternion, float_t)>(&RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Footstep::StepTo)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0x11ef534;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Footstep>::get(),
                            "StepTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Quaternion>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Footstep.UpdateStepping
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Footstep::*)(UnityEngine::Vector3, UnityEngine::Quaternion, float_t)>(&RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Footstep::UpdateStepping)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0x11ef758;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Footstep>::get(),
                            "UpdateStepping",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Quaternion>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Footstep.UpdateStanding
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Footstep::*)(UnityEngine::Quaternion, float_t, float_t)>(&RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Footstep::UpdateStanding)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x11ef960;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Footstep>::get(),
                            "UpdateStanding",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Quaternion>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Footstep.Update
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Footstep::*)(RootMotion::InterpolationMode, UnityEngine::Events::UnityEvent)>(&RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Footstep::Update)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x11efb44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Footstep>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<RootMotion::InterpolationMode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Events::UnityEvent>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Footstep::__set_stepSpeed(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Footstep::__get_stepSpeed() const {
return ::cordl_internals::getInstanceField<float_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Footstep::__set_characterSpaceOffset(UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<UnityEngine::Vector3, 0x14>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Vector3>(value));
}
constexpr UnityEngine::Vector3 RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Footstep::__get_characterSpaceOffset() const {
return ::cordl_internals::getInstanceField<UnityEngine::Vector3, 0x14>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Footstep::__set_position(UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<UnityEngine::Vector3, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Vector3>(value));
}
constexpr UnityEngine::Vector3 RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Footstep::__get_position() const {
return ::cordl_internals::getInstanceField<UnityEngine::Vector3, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Footstep::__set_rotation(UnityEngine::Quaternion value)  {
::cordl_internals::setInstanceField<UnityEngine::Quaternion, 0x2c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Quaternion>(value));
}
constexpr UnityEngine::Quaternion RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Footstep::__get_rotation() const {
return ::cordl_internals::getInstanceField<UnityEngine::Quaternion, 0x2c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Footstep::__set_stepToRootRot(UnityEngine::Quaternion value)  {
::cordl_internals::setInstanceField<UnityEngine::Quaternion, 0x3c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Quaternion>(value));
}
constexpr UnityEngine::Quaternion RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Footstep::__get_stepToRootRot() const {
return ::cordl_internals::getInstanceField<UnityEngine::Quaternion, 0x3c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Footstep::__set_isSupportLeg(bool value)  {
::cordl_internals::setInstanceField<bool, 0x4c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Footstep::__get_isSupportLeg() const {
return ::cordl_internals::getInstanceField<bool, 0x4c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Footstep::__set__stepProgress_k__BackingField(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Footstep::__get__stepProgress_k__BackingField() const {
return ::cordl_internals::getInstanceField<float_t, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Footstep::__set_stepFrom(UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<UnityEngine::Vector3, 0x54>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Vector3>(value));
}
constexpr UnityEngine::Vector3 RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Footstep::__get_stepFrom() const {
return ::cordl_internals::getInstanceField<UnityEngine::Vector3, 0x54>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Footstep::__set_stepTo(UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<UnityEngine::Vector3, 0x60>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Vector3>(value));
}
constexpr UnityEngine::Vector3 RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Footstep::__get_stepTo() const {
return ::cordl_internals::getInstanceField<UnityEngine::Vector3, 0x60>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Footstep::__set_stepFromRot(UnityEngine::Quaternion value)  {
::cordl_internals::setInstanceField<UnityEngine::Quaternion, 0x6c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Quaternion>(value));
}
constexpr UnityEngine::Quaternion RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Footstep::__get_stepFromRot() const {
return ::cordl_internals::getInstanceField<UnityEngine::Quaternion, 0x6c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Footstep::__set_stepToRot(UnityEngine::Quaternion value)  {
::cordl_internals::setInstanceField<UnityEngine::Quaternion, 0x7c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Quaternion>(value));
}
constexpr UnityEngine::Quaternion RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Footstep::__get_stepToRot() const {
return ::cordl_internals::getInstanceField<UnityEngine::Quaternion, 0x7c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Footstep::__set_footRelativeToRoot(UnityEngine::Quaternion value)  {
::cordl_internals::setInstanceField<UnityEngine::Quaternion, 0x8c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Quaternion>(value));
}
constexpr UnityEngine::Quaternion RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Footstep::__get_footRelativeToRoot() const {
return ::cordl_internals::getInstanceField<UnityEngine::Quaternion, 0x8c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Footstep::__set_supportLegW(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x9c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Footstep::__get_supportLegW() const {
return ::cordl_internals::getInstanceField<float_t, 0x9c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Footstep::__set_supportLegWV(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0xa0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Footstep::__get_supportLegWV() const {
return ::cordl_internals::getInstanceField<float_t, 0xa0>(this->::bs_hook::Il2CppWrapperType::instance);
}
 bool RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Footstep::get_isStepping()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Footstep>::get(),
                            "get_isStepping",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 float_t RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Footstep::get_stepProgress()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Footstep>::get(),
                            "get_stepProgress",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Footstep::set_stepProgress(float_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Footstep>::get(),
                            "set_stepProgress",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "rootRotation", ty: "UnityEngine::Quaternion", modifiers: "", def_value: None }, CppParam { name: "footPosition", ty: "UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "footRotation", ty: "UnityEngine::Quaternion", modifiers: "", def_value: None }, CppParam { name: "characterSpaceOffset", ty: "UnityEngine::Vector3", modifiers: "", def_value: None }]
 RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Footstep::RootMotion__FinalIK__IKSolverVR__Footstep(UnityEngine::Quaternion rootRotation, UnityEngine::Vector3 footPosition, UnityEngine::Quaternion footRotation, UnityEngine::Vector3 characterSpaceOffset)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<RootMotion__FinalIK__IKSolverVR__Footstep>(rootRotation, footPosition, footRotation, characterSpaceOffset))) {}
 void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Footstep::_ctor(UnityEngine::Quaternion rootRotation, UnityEngine::Vector3 footPosition, UnityEngine::Quaternion footRotation, UnityEngine::Vector3 characterSpaceOffset)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Footstep>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Quaternion>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Quaternion>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, rootRotation, footPosition, footRotation, characterSpaceOffset);
}
 void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Footstep::Reset(UnityEngine::Quaternion rootRotation, UnityEngine::Vector3 footPosition, UnityEngine::Quaternion footRotation)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Footstep>::get(),
                            "Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Quaternion>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Quaternion>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, rootRotation, footPosition, footRotation);
}
 void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Footstep::StepTo(UnityEngine::Vector3 p, UnityEngine::Quaternion rootRotation, float_t stepThreshold)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Footstep>::get(),
                            "StepTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Quaternion>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, p, rootRotation, stepThreshold);
}
 void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Footstep::UpdateStepping(UnityEngine::Vector3 p, UnityEngine::Quaternion rootRotation, float_t speed)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Footstep>::get(),
                            "UpdateStepping",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Quaternion>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, p, rootRotation, speed);
}
 void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Footstep::UpdateStanding(UnityEngine::Quaternion rootRotation, float_t minAngle, float_t speed)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Footstep>::get(),
                            "UpdateStanding",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Quaternion>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, rootRotation, minAngle, speed);
}
 void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Footstep::Update(RootMotion::InterpolationMode interpolation, UnityEngine::Events::UnityEvent onStep)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Footstep>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<RootMotion::InterpolationMode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Events::UnityEvent>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, interpolation, onStep);
}
//  Writing Method size for method: RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg.get_position
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg::*)()>(&RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg::get_position)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x11efcb8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg>::get(),
                            "get_position",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg.set_position
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg::*)(UnityEngine::Vector3)>(&RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg::set_position)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x11efcc4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg>::get(),
                            "set_position",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg.get_rotation
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Quaternion (RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg::*)()>(&RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg::get_rotation)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x11efcd0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg>::get(),
                            "get_rotation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg.set_rotation
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg::*)(UnityEngine::Quaternion)>(&RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg::set_rotation)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x11efcdc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg>::get(),
                            "set_rotation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Quaternion>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg.get_hasToes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg::*)()>(&RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg::get_hasToes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x11efce8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg>::get(),
                            "get_hasToes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg.set_hasToes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg::*)(bool)>(&RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg::set_hasToes)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x11efcf0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg>::get(),
                            "set_hasToes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg.get_thigh
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone (RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg::*)()>(&RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg::get_thigh)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x11efcfc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg>::get(),
                            "get_thigh",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg.get_calf
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone (RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg::*)()>(&RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg::get_calf)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x11efd24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg>::get(),
                            "get_calf",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg.get_foot
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone (RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg::*)()>(&RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg::get_foot)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x11efd50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg>::get(),
                            "get_foot",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg.get_toes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone (RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg::*)()>(&RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg::get_toes)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x11efd7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg>::get(),
                            "get_toes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg.get_lastBone
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone (RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg::*)()>(&RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg::get_lastBone)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x11eb2f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg>::get(),
                            "get_lastBone",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg.get_thighRelativeToPelvis
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg::*)()>(&RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg::get_thighRelativeToPelvis)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x11efda8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg>::get(),
                            "get_thighRelativeToPelvis",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg.set_thighRelativeToPelvis
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg::*)(UnityEngine::Vector3)>(&RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg::set_thighRelativeToPelvis)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x11efdb4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg>::get(),
                            "set_thighRelativeToPelvis",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg.OnRead
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg::*)(::ArrayW<UnityEngine::Vector3>, ::ArrayW<UnityEngine::Quaternion>, bool, bool, bool, bool, bool, int32_t, int32_t)>(&RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg::OnRead)> {
  constexpr static std::size_t size = 0x568;
  constexpr static std::size_t addrs = 0x11efdc0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg.PreSolve
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg::*)()>(&RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg::PreSolve)> {
  constexpr static std::size_t size = 0x4d4;
  constexpr static std::size_t addrs = 0x11f0328;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg.ApplyOffsets
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg::*)()>(&RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg::ApplyOffsets)> {
  constexpr static std::size_t size = 0x4dc;
  constexpr static std::size_t addrs = 0x11f0a98;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg.ApplyPositionOffset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg::*)(UnityEngine::Vector3, float_t)>(&RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg::ApplyPositionOffset)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x11f0a48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg>::get(),
                            "ApplyPositionOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg.ApplyRotationOffset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg::*)(UnityEngine::Quaternion, float_t)>(&RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg::ApplyRotationOffset)> {
  constexpr static std::size_t size = 0x24c;
  constexpr static std::size_t addrs = 0x11f07fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg>::get(),
                            "ApplyRotationOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Quaternion>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg.Solve
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg::*)(bool)>(&RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg::Solve)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x11e02b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg>::get(),
                            "Solve",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg.FixTwistRotations
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg::*)()>(&RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg::FixTwistRotations)> {
  constexpr static std::size_t size = 0x458;
  constexpr static std::size_t addrs = 0x11f1350;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg>::get(),
                            "FixTwistRotations",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg.Stretching
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg::*)()>(&RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg::Stretching)> {
  constexpr static std::size_t size = 0x3dc;
  constexpr static std::size_t addrs = 0x11f0f74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg>::get(),
                            "Stretching",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg.Write
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg::*)(ByRef<::ArrayW<UnityEngine::Vector3>>, ByRef<::ArrayW<UnityEngine::Quaternion>>)>(&RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg::Write)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0x11f17a8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg.ResetOffsets
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg::*)()>(&RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg::ResetOffsets)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x11f19b0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg::*)()>(&RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg::_ctor)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x11e06b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg::__set_target(UnityEngine::Transform value)  {
::cordl_internals::setInstanceField<UnityEngine::Transform, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Transform>(value));
}
constexpr UnityEngine::Transform RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg::__get_target() const {
return ::cordl_internals::getInstanceField<UnityEngine::Transform, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg::__set_bendGoal(UnityEngine::Transform value)  {
::cordl_internals::setInstanceField<UnityEngine::Transform, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Transform>(value));
}
constexpr UnityEngine::Transform RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg::__get_bendGoal() const {
return ::cordl_internals::getInstanceField<UnityEngine::Transform, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg::__set_positionWeight(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg::__get_positionWeight() const {
return ::cordl_internals::getInstanceField<float_t, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg::__set_rotationWeight(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x5c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg::__get_rotationWeight() const {
return ::cordl_internals::getInstanceField<float_t, 0x5c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg::__set_bendGoalWeight(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x60>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg::__get_bendGoalWeight() const {
return ::cordl_internals::getInstanceField<float_t, 0x60>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg::__set_swivelOffset(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x64>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg::__get_swivelOffset() const {
return ::cordl_internals::getInstanceField<float_t, 0x64>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg::__set_bendToTargetWeight(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x68>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg::__get_bendToTargetWeight() const {
return ::cordl_internals::getInstanceField<float_t, 0x68>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg::__set_legLengthMlp(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x6c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg::__get_legLengthMlp() const {
return ::cordl_internals::getInstanceField<float_t, 0x6c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg::__set_stretchCurve(UnityEngine::AnimationCurve value)  {
::cordl_internals::setInstanceField<UnityEngine::AnimationCurve, 0x70>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::AnimationCurve>(value));
}
constexpr UnityEngine::AnimationCurve RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg::__get_stretchCurve() const {
return ::cordl_internals::getInstanceField<UnityEngine::AnimationCurve, 0x70>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg::__set_IKPosition(UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<UnityEngine::Vector3, 0x78>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Vector3>(value));
}
constexpr UnityEngine::Vector3 RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg::__get_IKPosition() const {
return ::cordl_internals::getInstanceField<UnityEngine::Vector3, 0x78>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg::__set_IKRotation(UnityEngine::Quaternion value)  {
::cordl_internals::setInstanceField<UnityEngine::Quaternion, 0x84>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Quaternion>(value));
}
constexpr UnityEngine::Quaternion RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg::__get_IKRotation() const {
return ::cordl_internals::getInstanceField<UnityEngine::Quaternion, 0x84>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg::__set_footPositionOffset(UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<UnityEngine::Vector3, 0x94>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Vector3>(value));
}
constexpr UnityEngine::Vector3 RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg::__get_footPositionOffset() const {
return ::cordl_internals::getInstanceField<UnityEngine::Vector3, 0x94>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg::__set_heelPositionOffset(UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<UnityEngine::Vector3, 0xa0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Vector3>(value));
}
constexpr UnityEngine::Vector3 RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg::__get_heelPositionOffset() const {
return ::cordl_internals::getInstanceField<UnityEngine::Vector3, 0xa0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg::__set_footRotationOffset(UnityEngine::Quaternion value)  {
::cordl_internals::setInstanceField<UnityEngine::Quaternion, 0xac>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Quaternion>(value));
}
constexpr UnityEngine::Quaternion RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg::__get_footRotationOffset() const {
return ::cordl_internals::getInstanceField<UnityEngine::Quaternion, 0xac>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg::__set_currentMag(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0xbc>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg::__get_currentMag() const {
return ::cordl_internals::getInstanceField<float_t, 0xbc>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg::__set_useAnimatedBendNormal(bool value)  {
::cordl_internals::setInstanceField<bool, 0xc0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg::__get_useAnimatedBendNormal() const {
return ::cordl_internals::getInstanceField<bool, 0xc0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg::__set__position_k__BackingField(UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<UnityEngine::Vector3, 0xc4>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Vector3>(value));
}
constexpr UnityEngine::Vector3 RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg::__get__position_k__BackingField() const {
return ::cordl_internals::getInstanceField<UnityEngine::Vector3, 0xc4>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg::__set__rotation_k__BackingField(UnityEngine::Quaternion value)  {
::cordl_internals::setInstanceField<UnityEngine::Quaternion, 0xd0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Quaternion>(value));
}
constexpr UnityEngine::Quaternion RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg::__get__rotation_k__BackingField() const {
return ::cordl_internals::getInstanceField<UnityEngine::Quaternion, 0xd0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg::__set__hasToes_k__BackingField(bool value)  {
::cordl_internals::setInstanceField<bool, 0xe0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg::__get__hasToes_k__BackingField() const {
return ::cordl_internals::getInstanceField<bool, 0xe0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg::__set__thighRelativeToPelvis_k__BackingField(UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<UnityEngine::Vector3, 0xe4>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Vector3>(value));
}
constexpr UnityEngine::Vector3 RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg::__get__thighRelativeToPelvis_k__BackingField() const {
return ::cordl_internals::getInstanceField<UnityEngine::Vector3, 0xe4>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg::__set_footPosition(UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<UnityEngine::Vector3, 0xf0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Vector3>(value));
}
constexpr UnityEngine::Vector3 RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg::__get_footPosition() const {
return ::cordl_internals::getInstanceField<UnityEngine::Vector3, 0xf0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg::__set_footRotation(UnityEngine::Quaternion value)  {
::cordl_internals::setInstanceField<UnityEngine::Quaternion, 0xfc>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Quaternion>(value));
}
constexpr UnityEngine::Quaternion RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg::__get_footRotation() const {
return ::cordl_internals::getInstanceField<UnityEngine::Quaternion, 0xfc>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg::__set_bendNormal(UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<UnityEngine::Vector3, 0x10c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Vector3>(value));
}
constexpr UnityEngine::Vector3 RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg::__get_bendNormal() const {
return ::cordl_internals::getInstanceField<UnityEngine::Vector3, 0x10c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg::__set_calfRelToThigh(UnityEngine::Quaternion value)  {
::cordl_internals::setInstanceField<UnityEngine::Quaternion, 0x118>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Quaternion>(value));
}
constexpr UnityEngine::Quaternion RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg::__get_calfRelToThigh() const {
return ::cordl_internals::getInstanceField<UnityEngine::Quaternion, 0x118>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg::__set_thighRelToFoot(UnityEngine::Quaternion value)  {
::cordl_internals::setInstanceField<UnityEngine::Quaternion, 0x128>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Quaternion>(value));
}
constexpr UnityEngine::Quaternion RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg::__get_thighRelToFoot() const {
return ::cordl_internals::getInstanceField<UnityEngine::Quaternion, 0x128>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg::__set_bendNormalRelToPelvis(UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<UnityEngine::Vector3, 0x138>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Vector3>(value));
}
constexpr UnityEngine::Vector3 RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg::__get_bendNormalRelToPelvis() const {
return ::cordl_internals::getInstanceField<UnityEngine::Vector3, 0x138>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg::__set_bendNormalRelToTarget(UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<UnityEngine::Vector3, 0x144>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Vector3>(value));
}
constexpr UnityEngine::Vector3 RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg::__get_bendNormalRelToTarget() const {
return ::cordl_internals::getInstanceField<UnityEngine::Vector3, 0x144>(this->::bs_hook::Il2CppWrapperType::instance);
}
 UnityEngine::Vector3 RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg::get_position()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg>::get(),
                            "get_position",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Vector3, false>(const_cast<void*>(instance), ___internal_method);
}
 void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg::set_position(UnityEngine::Vector3 value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg>::get(),
                            "set_position",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 UnityEngine::Quaternion RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg::get_rotation()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg>::get(),
                            "get_rotation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Quaternion, false>(const_cast<void*>(instance), ___internal_method);
}
 void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg::set_rotation(UnityEngine::Quaternion value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg>::get(),
                            "set_rotation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Quaternion>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 bool RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg::get_hasToes()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg>::get(),
                            "get_hasToes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg::set_hasToes(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg>::get(),
                            "set_hasToes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg::get_thigh()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg>::get(),
                            "get_thigh",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone, false>(const_cast<void*>(instance), ___internal_method);
}
 RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg::get_calf()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg>::get(),
                            "get_calf",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone, false>(const_cast<void*>(instance), ___internal_method);
}
 RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg::get_foot()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg>::get(),
                            "get_foot",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone, false>(const_cast<void*>(instance), ___internal_method);
}
 RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg::get_toes()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg>::get(),
                            "get_toes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone, false>(const_cast<void*>(instance), ___internal_method);
}
 RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg::get_lastBone()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg>::get(),
                            "get_lastBone",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::Vector3 RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg::get_thighRelativeToPelvis()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg>::get(),
                            "get_thighRelativeToPelvis",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Vector3, false>(const_cast<void*>(instance), ___internal_method);
}
 void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg::set_thighRelativeToPelvis(UnityEngine::Vector3 value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg>::get(),
                            "set_thighRelativeToPelvis",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg::OnRead(::ArrayW<UnityEngine::Vector3> positions, ::ArrayW<UnityEngine::Quaternion> rotations, bool hasChest, bool hasNeck, bool hasShoulders, bool hasToes, bool hasLegs, int32_t rootIndex, int32_t index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg>::get(),
                            "OnRead",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<UnityEngine::Vector3>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<UnityEngine::Quaternion>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, positions, rotations, hasChest, hasNeck, hasShoulders, hasToes, hasLegs, rootIndex, index);
}
 void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg::PreSolve()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg>::get(),
                            "PreSolve",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg::ApplyOffsets()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg>::get(),
                            "ApplyOffsets",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg::ApplyPositionOffset(UnityEngine::Vector3 offset, float_t weight)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg>::get(),
                            "ApplyPositionOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, offset, weight);
}
 void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg::ApplyRotationOffset(UnityEngine::Quaternion offset, float_t weight)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg>::get(),
                            "ApplyRotationOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Quaternion>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, offset, weight);
}
 void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg::Solve(bool stretch)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg>::get(),
                            "Solve",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, stretch);
}
 void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg::FixTwistRotations()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg>::get(),
                            "FixTwistRotations",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg::Stretching()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg>::get(),
                            "Stretching",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg::Write(ByRef<::ArrayW<UnityEngine::Vector3>> solvedPositions, ByRef<::ArrayW<UnityEngine::Quaternion>> solvedRotations)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg>::get(),
                            "Write",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<UnityEngine::Vector3>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<UnityEngine::Quaternion>>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, solvedPositions, solvedRotations);
}
 void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg::ResetOffsets()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg>::get(),
                            "ResetOffsets",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg::RootMotion__FinalIK__IKSolverVR__Leg()  : RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__BodyPart(THROW_UNLESS(::il2cpp_utils::New<RootMotion__FinalIK__IKSolverVR__Leg>())) {}
 void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Locomotion.get_centerOfMass
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Locomotion::*)()>(&RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Locomotion::get_centerOfMass)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x11f1a90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Locomotion>::get(),
                            "get_centerOfMass",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Locomotion.set_centerOfMass
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Locomotion::*)(UnityEngine::Vector3)>(&RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Locomotion::set_centerOfMass)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x11f1a9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Locomotion>::get(),
                            "set_centerOfMass",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Locomotion.Initiate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Locomotion::*)(::ArrayW<UnityEngine::Vector3>, ::ArrayW<UnityEngine::Quaternion>, bool)>(&RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Locomotion::Initiate)> {
  constexpr static std::size_t size = 0x2f4;
  constexpr static std::size_t addrs = 0x11e9c34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Locomotion>::get(),
                            "Initiate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<UnityEngine::Vector3>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<UnityEngine::Quaternion>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Locomotion.Reset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Locomotion::*)(::ArrayW<UnityEngine::Vector3>, ::ArrayW<UnityEngine::Quaternion>)>(&RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Locomotion::Reset)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x11e7734;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Locomotion>::get(),
                            "Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<UnityEngine::Vector3>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<UnityEngine::Quaternion>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Locomotion.AddDeltaRotation
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Locomotion::*)(UnityEngine::Quaternion, UnityEngine::Vector3)>(&RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Locomotion::AddDeltaRotation)> {
  constexpr static std::size_t size = 0x3c8;
  constexpr static std::size_t addrs = 0x11e6c00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Locomotion>::get(),
                            "AddDeltaRotation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Quaternion>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Locomotion.AddDeltaPosition
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Locomotion::*)(UnityEngine::Vector3)>(&RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Locomotion::AddDeltaPosition)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x11e6b48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Locomotion>::get(),
                            "AddDeltaPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Locomotion.Solve
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Locomotion::*)(RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone, RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine, RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg, RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg, RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Arm, RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Arm, int32_t, ByRef<UnityEngine::Vector3>, ByRef<UnityEngine::Vector3>, ByRef<UnityEngine::Quaternion>, ByRef<UnityEngine::Quaternion>, ByRef<float_t>, ByRef<float_t>, ByRef<float_t>, ByRef<float_t>)>(&RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Locomotion::Solve)> {
  constexpr static std::size_t size = 0x13d0;
  constexpr static std::size_t addrs = 0x11e9f28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Locomotion>::get(),
                            "Solve",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Arm>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Arm>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::Vector3>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::Vector3>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::Quaternion>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::Quaternion>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<float_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<float_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<float_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<float_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Locomotion.get_leftFootstepPosition
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Locomotion::*)()>(&RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Locomotion::get_leftFootstepPosition)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x11f1e78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Locomotion>::get(),
                            "get_leftFootstepPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Locomotion.get_rightFootstepPosition
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Locomotion::*)()>(&RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Locomotion::get_rightFootstepPosition)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x11f1eac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Locomotion>::get(),
                            "get_rightFootstepPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Locomotion.get_leftFootstepRotation
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Quaternion (RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Locomotion::*)()>(&RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Locomotion::get_leftFootstepRotation)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x11f1ee4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Locomotion>::get(),
                            "get_leftFootstepRotation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Locomotion.get_rightFootstepRotation
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Quaternion (RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Locomotion::*)()>(&RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Locomotion::get_rightFootstepRotation)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x11f1f18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Locomotion>::get(),
                            "get_rightFootstepRotation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Locomotion.StepBlocked
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Locomotion::*)(UnityEngine::Vector3, UnityEngine::Vector3, UnityEngine::Vector3)>(&RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Locomotion::StepBlocked)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x11f1aa8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Locomotion>::get(),
                            "StepBlocked",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Locomotion.CanStep
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Locomotion::*)()>(&RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Locomotion::CanStep)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x11f1c5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Locomotion>::get(),
                            "CanStep",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Locomotion.GetLineSphereCollision
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(UnityEngine::Vector3, UnityEngine::Vector3, UnityEngine::Vector3, float_t)>(&RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Locomotion::GetLineSphereCollision)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x11f1cc8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Locomotion>::get(),
                            "GetLineSphereCollision",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Locomotion._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Locomotion::*)()>(&RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Locomotion::_ctor)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x11ed4e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Locomotion>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Locomotion::__set_weight(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Locomotion::__get_weight() const {
return ::cordl_internals::getInstanceField<float_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Locomotion::__set_footDistance(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x14>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Locomotion::__get_footDistance() const {
return ::cordl_internals::getInstanceField<float_t, 0x14>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Locomotion::__set_stepThreshold(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Locomotion::__get_stepThreshold() const {
return ::cordl_internals::getInstanceField<float_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Locomotion::__set_angleThreshold(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Locomotion::__get_angleThreshold() const {
return ::cordl_internals::getInstanceField<float_t, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Locomotion::__set_comAngleMlp(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Locomotion::__get_comAngleMlp() const {
return ::cordl_internals::getInstanceField<float_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Locomotion::__set_maxVelocity(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x24>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Locomotion::__get_maxVelocity() const {
return ::cordl_internals::getInstanceField<float_t, 0x24>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Locomotion::__set_velocityFactor(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Locomotion::__get_velocityFactor() const {
return ::cordl_internals::getInstanceField<float_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Locomotion::__set_maxLegStretch(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x2c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Locomotion::__get_maxLegStretch() const {
return ::cordl_internals::getInstanceField<float_t, 0x2c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Locomotion::__set_rootSpeed(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Locomotion::__get_rootSpeed() const {
return ::cordl_internals::getInstanceField<float_t, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Locomotion::__set_stepSpeed(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x34>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Locomotion::__get_stepSpeed() const {
return ::cordl_internals::getInstanceField<float_t, 0x34>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Locomotion::__set_stepHeight(UnityEngine::AnimationCurve value)  {
::cordl_internals::setInstanceField<UnityEngine::AnimationCurve, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::AnimationCurve>(value));
}
constexpr UnityEngine::AnimationCurve RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Locomotion::__get_stepHeight() const {
return ::cordl_internals::getInstanceField<UnityEngine::AnimationCurve, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Locomotion::__set_heelHeight(UnityEngine::AnimationCurve value)  {
::cordl_internals::setInstanceField<UnityEngine::AnimationCurve, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::AnimationCurve>(value));
}
constexpr UnityEngine::AnimationCurve RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Locomotion::__get_heelHeight() const {
return ::cordl_internals::getInstanceField<UnityEngine::AnimationCurve, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Locomotion::__set_relaxLegTwistMinAngle(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Locomotion::__get_relaxLegTwistMinAngle() const {
return ::cordl_internals::getInstanceField<float_t, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Locomotion::__set_relaxLegTwistSpeed(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x4c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Locomotion::__get_relaxLegTwistSpeed() const {
return ::cordl_internals::getInstanceField<float_t, 0x4c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Locomotion::__set_stepInterpolation(RootMotion::InterpolationMode value)  {
::cordl_internals::setInstanceField<RootMotion::InterpolationMode, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<RootMotion::InterpolationMode>(value));
}
constexpr RootMotion::InterpolationMode RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Locomotion::__get_stepInterpolation() const {
return ::cordl_internals::getInstanceField<RootMotion::InterpolationMode, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Locomotion::__set_offset(UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<UnityEngine::Vector3, 0x54>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Vector3>(value));
}
constexpr UnityEngine::Vector3 RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Locomotion::__get_offset() const {
return ::cordl_internals::getInstanceField<UnityEngine::Vector3, 0x54>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Locomotion::__set_blockingEnabled(bool value)  {
::cordl_internals::setInstanceField<bool, 0x60>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Locomotion::__get_blockingEnabled() const {
return ::cordl_internals::getInstanceField<bool, 0x60>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Locomotion::__set_blockingLayers(UnityEngine::LayerMask value)  {
::cordl_internals::setInstanceField<UnityEngine::LayerMask, 0x64>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::LayerMask>(value));
}
constexpr UnityEngine::LayerMask RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Locomotion::__get_blockingLayers() const {
return ::cordl_internals::getInstanceField<UnityEngine::LayerMask, 0x64>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Locomotion::__set_raycastRadius(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x68>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Locomotion::__get_raycastRadius() const {
return ::cordl_internals::getInstanceField<float_t, 0x68>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Locomotion::__set_raycastHeight(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x6c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Locomotion::__get_raycastHeight() const {
return ::cordl_internals::getInstanceField<float_t, 0x6c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Locomotion::__set_onLeftFootstep(UnityEngine::Events::UnityEvent value)  {
::cordl_internals::setInstanceField<UnityEngine::Events::UnityEvent, 0x70>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Events::UnityEvent>(value));
}
constexpr UnityEngine::Events::UnityEvent RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Locomotion::__get_onLeftFootstep() const {
return ::cordl_internals::getInstanceField<UnityEngine::Events::UnityEvent, 0x70>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Locomotion::__set_onRightFootstep(UnityEngine::Events::UnityEvent value)  {
::cordl_internals::setInstanceField<UnityEngine::Events::UnityEvent, 0x78>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Events::UnityEvent>(value));
}
constexpr UnityEngine::Events::UnityEvent RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Locomotion::__get_onRightFootstep() const {
return ::cordl_internals::getInstanceField<UnityEngine::Events::UnityEvent, 0x78>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Locomotion::__set__centerOfMass_k__BackingField(UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<UnityEngine::Vector3, 0x80>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Vector3>(value));
}
constexpr UnityEngine::Vector3 RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Locomotion::__get__centerOfMass_k__BackingField() const {
return ::cordl_internals::getInstanceField<UnityEngine::Vector3, 0x80>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Locomotion::__set_footsteps(::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Footstep> value)  {
::cordl_internals::setInstanceField<::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Footstep>, 0x90>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Footstep>>(value));
}
constexpr ::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Footstep> RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Locomotion::__get_footsteps() const {
return ::cordl_internals::getInstanceField<::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Footstep>, 0x90>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Locomotion::__set_lastComPosition(UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<UnityEngine::Vector3, 0x98>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Vector3>(value));
}
constexpr UnityEngine::Vector3 RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Locomotion::__get_lastComPosition() const {
return ::cordl_internals::getInstanceField<UnityEngine::Vector3, 0x98>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Locomotion::__set_comVelocity(UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<UnityEngine::Vector3, 0xa4>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Vector3>(value));
}
constexpr UnityEngine::Vector3 RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Locomotion::__get_comVelocity() const {
return ::cordl_internals::getInstanceField<UnityEngine::Vector3, 0xa4>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Locomotion::__set_leftFootIndex(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0xb0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Locomotion::__get_leftFootIndex() const {
return ::cordl_internals::getInstanceField<int32_t, 0xb0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Locomotion::__set_rightFootIndex(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0xb4>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Locomotion::__get_rightFootIndex() const {
return ::cordl_internals::getInstanceField<int32_t, 0xb4>(this->::bs_hook::Il2CppWrapperType::instance);
}
 UnityEngine::Vector3 RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Locomotion::get_centerOfMass()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Locomotion>::get(),
                            "get_centerOfMass",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Vector3, false>(const_cast<void*>(instance), ___internal_method);
}
 void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Locomotion::set_centerOfMass(UnityEngine::Vector3 value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Locomotion>::get(),
                            "set_centerOfMass",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Locomotion::Initiate(::ArrayW<UnityEngine::Vector3> positions, ::ArrayW<UnityEngine::Quaternion> rotations, bool hasToes)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Locomotion>::get(),
                            "Initiate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<UnityEngine::Vector3>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<UnityEngine::Quaternion>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, positions, rotations, hasToes);
}
 void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Locomotion::Reset(::ArrayW<UnityEngine::Vector3> positions, ::ArrayW<UnityEngine::Quaternion> rotations)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Locomotion>::get(),
                            "Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<UnityEngine::Vector3>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<UnityEngine::Quaternion>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, positions, rotations);
}
 void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Locomotion::AddDeltaRotation(UnityEngine::Quaternion delta, UnityEngine::Vector3 pivot)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Locomotion>::get(),
                            "AddDeltaRotation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Quaternion>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, delta, pivot);
}
 void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Locomotion::AddDeltaPosition(UnityEngine::Vector3 delta)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Locomotion>::get(),
                            "AddDeltaPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, delta);
}
 void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Locomotion::Solve(RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone rootBone, RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine spine, RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg leftLeg, RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg rightLeg, RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Arm leftArm, RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Arm rightArm, int32_t supportLegIndex, ByRef<UnityEngine::Vector3> leftFootPosition, ByRef<UnityEngine::Vector3> rightFootPosition, ByRef<UnityEngine::Quaternion> leftFootRotation, ByRef<UnityEngine::Quaternion> rightFootRotation, ByRef<float_t> leftFootOffset, ByRef<float_t> rightFootOffset, ByRef<float_t> leftHeelOffset, ByRef<float_t> rightHeelOffset)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Locomotion>::get(),
                            "Solve",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Arm>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Arm>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::Vector3>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::Vector3>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::Quaternion>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::Quaternion>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<float_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<float_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<float_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<float_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, rootBone, spine, leftLeg, rightLeg, leftArm, rightArm, supportLegIndex, leftFootPosition, rightFootPosition, leftFootRotation, rightFootRotation, leftFootOffset, rightFootOffset, leftHeelOffset, rightHeelOffset);
}
 UnityEngine::Vector3 RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Locomotion::get_leftFootstepPosition()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Locomotion>::get(),
                            "get_leftFootstepPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Vector3, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::Vector3 RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Locomotion::get_rightFootstepPosition()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Locomotion>::get(),
                            "get_rightFootstepPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Vector3, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::Quaternion RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Locomotion::get_leftFootstepRotation()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Locomotion>::get(),
                            "get_leftFootstepRotation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Quaternion, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::Quaternion RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Locomotion::get_rightFootstepRotation()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Locomotion>::get(),
                            "get_rightFootstepRotation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Quaternion, false>(const_cast<void*>(instance), ___internal_method);
}
 bool RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Locomotion::StepBlocked(UnityEngine::Vector3 fromPosition, UnityEngine::Vector3 toPosition, UnityEngine::Vector3 rootPosition)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Locomotion>::get(),
                            "StepBlocked",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, fromPosition, toPosition, rootPosition);
}
 bool RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Locomotion::CanStep()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Locomotion>::get(),
                            "CanStep",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Locomotion::GetLineSphereCollision(UnityEngine::Vector3 lineStart, UnityEngine::Vector3 lineEnd, UnityEngine::Vector3 sphereCenter, float_t sphereRadius)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Locomotion>::get(),
                            "GetLineSphereCollision",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, lineStart, lineEnd, sphereCenter, sphereRadius);
}
// Ctor Parameters []
 RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Locomotion::RootMotion__FinalIK__IKSolverVR__Locomotion()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<RootMotion__FinalIK__IKSolverVR__Locomotion>())) {}
 void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Locomotion::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Locomotion>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine.get_pelvis
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone (RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine::*)()>(&RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine::get_pelvis)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x11f1f50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine>::get(),
                            "get_pelvis",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine.get_firstSpineBone
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone (RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine::*)()>(&RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine::get_firstSpineBone)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x11f1f84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine>::get(),
                            "get_firstSpineBone",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine.get_chest
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone (RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine::*)()>(&RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine::get_chest)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x11f1fb8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine>::get(),
                            "get_chest",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine.get_neck
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone (RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine::*)()>(&RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine::get_neck)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x11f2000;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine>::get(),
                            "get_neck",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine.get_head
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone (RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine::*)()>(&RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine::get_head)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x11f2034;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine>::get(),
                            "get_head",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine.get_anchorRotation
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Quaternion (RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine::*)()>(&RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine::get_anchorRotation)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x11f2068;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine>::get(),
                            "get_anchorRotation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine.set_anchorRotation
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine::*)(UnityEngine::Quaternion)>(&RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine::set_anchorRotation)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x11f207c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine>::get(),
                            "set_anchorRotation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Quaternion>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine.get_anchorRelativeToHead
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Quaternion (RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine::*)()>(&RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine::get_anchorRelativeToHead)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x11f2090;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine>::get(),
                            "get_anchorRelativeToHead",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine.set_anchorRelativeToHead
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine::*)(UnityEngine::Quaternion)>(&RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine::set_anchorRelativeToHead)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x11f20a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine>::get(),
                            "set_anchorRelativeToHead",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Quaternion>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine.OnRead
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine::*)(::ArrayW<UnityEngine::Vector3>, ::ArrayW<UnityEngine::Quaternion>, bool, bool, bool, bool, bool, int32_t, int32_t)>(&RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine::OnRead)> {
  constexpr static std::size_t size = 0xc60;
  constexpr static std::size_t addrs = 0x11f20b8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine.PreSolve
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine::*)()>(&RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine::PreSolve)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x11f2da8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine.ApplyOffsets
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine::*)()>(&RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine::ApplyOffsets)> {
  constexpr static std::size_t size = 0x794;
  constexpr static std::size_t addrs = 0x11f2f90;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine.CalculateChestTargetRotation
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine::*)(RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone, ::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Arm>)>(&RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine::CalculateChestTargetRotation)> {
  constexpr static std::size_t size = 0x244;
  constexpr static std::size_t addrs = 0x11f3724;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine>::get(),
                            "CalculateChestTargetRotation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Arm>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine.Solve
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine::*)(RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone, ::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg>, ::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Arm>)>(&RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine::Solve)> {
  constexpr static std::size_t size = 0x53c;
  constexpr static std::size_t addrs = 0x11f3d60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine>::get(),
                            "Solve",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Arm>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine.FABRIKPass
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine::*)(UnityEngine::Vector3, UnityEngine::Vector3, float_t)>(&RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine::FABRIKPass)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x11f46ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine>::get(),
                            "FABRIKPass",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine.SolvePelvis
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine::*)()>(&RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine::SolvePelvis)> {
  constexpr static std::size_t size = 0x290;
  constexpr static std::size_t addrs = 0x11f4e54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine>::get(),
                            "SolvePelvis",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine.Write
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine::*)(ByRef<::ArrayW<UnityEngine::Vector3>>, ByRef<::ArrayW<UnityEngine::Quaternion>>)>(&RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine::Write)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x11f5894;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine.ResetOffsets
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine::*)()>(&RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine::ResetOffsets)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x11f5a64;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine.AdjustChestByHands
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine::*)(ByRef<UnityEngine::Quaternion>, ::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Arm>)>(&RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine::AdjustChestByHands)> {
  constexpr static std::size_t size = 0x3f8;
  constexpr static std::size_t addrs = 0x11f3968;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine>::get(),
                            "AdjustChestByHands",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::Quaternion>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Arm>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine.InverseTranslateToHead
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine::*)(::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg>, bool, bool, UnityEngine::Vector3, float_t)>(&RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine::InverseTranslateToHead)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x11f4b7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine>::get(),
                            "InverseTranslateToHead",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine.TranslatePelvis
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine::*)(::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg>, UnityEngine::Vector3, UnityEngine::Quaternion)>(&RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine::TranslatePelvis)> {
  constexpr static std::size_t size = 0x410;
  constexpr static std::size_t addrs = 0x11f429c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine>::get(),
                            "TranslatePelvis",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Quaternion>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine.LimitPelvisPosition
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine::*)(::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg>, UnityEngine::Vector3, bool, int32_t)>(&RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine::LimitPelvisPosition)> {
  constexpr static std::size_t size = 0x2a8;
  constexpr static std::size_t addrs = 0x11f5b38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine>::get(),
                            "LimitPelvisPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine.Bend
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine::*)(::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone>, int32_t, int32_t, UnityEngine::Quaternion, float_t, bool, float_t)>(&RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine::Bend)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x11f4c58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine>::get(),
                            "Bend",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Quaternion>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine.Bend
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine::*)(::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone>, int32_t, int32_t, UnityEngine::Quaternion, UnityEngine::Quaternion, float_t, bool, float_t)>(&RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine::Bend)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x11f490c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine>::get(),
                            "Bend",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Quaternion>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Quaternion>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine::*)()>(&RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine::_ctor)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x11f5f50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine::__set_headTarget(UnityEngine::Transform value)  {
::cordl_internals::setInstanceField<UnityEngine::Transform, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Transform>(value));
}
constexpr UnityEngine::Transform RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine::__get_headTarget() const {
return ::cordl_internals::getInstanceField<UnityEngine::Transform, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine::__set_pelvisTarget(UnityEngine::Transform value)  {
::cordl_internals::setInstanceField<UnityEngine::Transform, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Transform>(value));
}
constexpr UnityEngine::Transform RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine::__get_pelvisTarget() const {
return ::cordl_internals::getInstanceField<UnityEngine::Transform, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine::__set_positionWeight(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine::__get_positionWeight() const {
return ::cordl_internals::getInstanceField<float_t, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine::__set_rotationWeight(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x5c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine::__get_rotationWeight() const {
return ::cordl_internals::getInstanceField<float_t, 0x5c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine::__set_pelvisPositionWeight(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x60>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine::__get_pelvisPositionWeight() const {
return ::cordl_internals::getInstanceField<float_t, 0x60>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine::__set_pelvisRotationWeight(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x64>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine::__get_pelvisRotationWeight() const {
return ::cordl_internals::getInstanceField<float_t, 0x64>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine::__set_chestGoal(UnityEngine::Transform value)  {
::cordl_internals::setInstanceField<UnityEngine::Transform, 0x68>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Transform>(value));
}
constexpr UnityEngine::Transform RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine::__get_chestGoal() const {
return ::cordl_internals::getInstanceField<UnityEngine::Transform, 0x68>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine::__set_chestGoalWeight(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x70>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine::__get_chestGoalWeight() const {
return ::cordl_internals::getInstanceField<float_t, 0x70>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine::__set_minHeadHeight(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x74>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine::__get_minHeadHeight() const {
return ::cordl_internals::getInstanceField<float_t, 0x74>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine::__set_bodyPosStiffness(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x78>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine::__get_bodyPosStiffness() const {
return ::cordl_internals::getInstanceField<float_t, 0x78>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine::__set_bodyRotStiffness(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x7c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine::__get_bodyRotStiffness() const {
return ::cordl_internals::getInstanceField<float_t, 0x7c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine::__set_neckStiffness(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x80>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine::__get_neckStiffness() const {
return ::cordl_internals::getInstanceField<float_t, 0x80>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine::__set_rotateChestByHands(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x84>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine::__get_rotateChestByHands() const {
return ::cordl_internals::getInstanceField<float_t, 0x84>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine::__set_chestClampWeight(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x88>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine::__get_chestClampWeight() const {
return ::cordl_internals::getInstanceField<float_t, 0x88>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine::__set_headClampWeight(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x8c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine::__get_headClampWeight() const {
return ::cordl_internals::getInstanceField<float_t, 0x8c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine::__set_moveBodyBackWhenCrouching(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x90>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine::__get_moveBodyBackWhenCrouching() const {
return ::cordl_internals::getInstanceField<float_t, 0x90>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine::__set_maintainPelvisPosition(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x94>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine::__get_maintainPelvisPosition() const {
return ::cordl_internals::getInstanceField<float_t, 0x94>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine::__set_maxRootAngle(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x98>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine::__get_maxRootAngle() const {
return ::cordl_internals::getInstanceField<float_t, 0x98>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine::__set_rootHeadingOffset(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x9c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine::__get_rootHeadingOffset() const {
return ::cordl_internals::getInstanceField<float_t, 0x9c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine::__set_IKPositionHead(UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<UnityEngine::Vector3, 0xa0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Vector3>(value));
}
constexpr UnityEngine::Vector3 RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine::__get_IKPositionHead() const {
return ::cordl_internals::getInstanceField<UnityEngine::Vector3, 0xa0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine::__set_IKRotationHead(UnityEngine::Quaternion value)  {
::cordl_internals::setInstanceField<UnityEngine::Quaternion, 0xac>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Quaternion>(value));
}
constexpr UnityEngine::Quaternion RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine::__get_IKRotationHead() const {
return ::cordl_internals::getInstanceField<UnityEngine::Quaternion, 0xac>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine::__set_IKPositionPelvis(UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<UnityEngine::Vector3, 0xbc>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Vector3>(value));
}
constexpr UnityEngine::Vector3 RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine::__get_IKPositionPelvis() const {
return ::cordl_internals::getInstanceField<UnityEngine::Vector3, 0xbc>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine::__set_IKRotationPelvis(UnityEngine::Quaternion value)  {
::cordl_internals::setInstanceField<UnityEngine::Quaternion, 0xc8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Quaternion>(value));
}
constexpr UnityEngine::Quaternion RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine::__get_IKRotationPelvis() const {
return ::cordl_internals::getInstanceField<UnityEngine::Quaternion, 0xc8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine::__set_goalPositionChest(UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<UnityEngine::Vector3, 0xd8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Vector3>(value));
}
constexpr UnityEngine::Vector3 RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine::__get_goalPositionChest() const {
return ::cordl_internals::getInstanceField<UnityEngine::Vector3, 0xd8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine::__set_pelvisPositionOffset(UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<UnityEngine::Vector3, 0xe4>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Vector3>(value));
}
constexpr UnityEngine::Vector3 RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine::__get_pelvisPositionOffset() const {
return ::cordl_internals::getInstanceField<UnityEngine::Vector3, 0xe4>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine::__set_chestPositionOffset(UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<UnityEngine::Vector3, 0xf0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Vector3>(value));
}
constexpr UnityEngine::Vector3 RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine::__get_chestPositionOffset() const {
return ::cordl_internals::getInstanceField<UnityEngine::Vector3, 0xf0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine::__set_headPositionOffset(UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<UnityEngine::Vector3, 0xfc>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Vector3>(value));
}
constexpr UnityEngine::Vector3 RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine::__get_headPositionOffset() const {
return ::cordl_internals::getInstanceField<UnityEngine::Vector3, 0xfc>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine::__set_pelvisRotationOffset(UnityEngine::Quaternion value)  {
::cordl_internals::setInstanceField<UnityEngine::Quaternion, 0x108>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Quaternion>(value));
}
constexpr UnityEngine::Quaternion RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine::__get_pelvisRotationOffset() const {
return ::cordl_internals::getInstanceField<UnityEngine::Quaternion, 0x108>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine::__set_chestRotationOffset(UnityEngine::Quaternion value)  {
::cordl_internals::setInstanceField<UnityEngine::Quaternion, 0x118>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Quaternion>(value));
}
constexpr UnityEngine::Quaternion RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine::__get_chestRotationOffset() const {
return ::cordl_internals::getInstanceField<UnityEngine::Quaternion, 0x118>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine::__set_headRotationOffset(UnityEngine::Quaternion value)  {
::cordl_internals::setInstanceField<UnityEngine::Quaternion, 0x128>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Quaternion>(value));
}
constexpr UnityEngine::Quaternion RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine::__get_headRotationOffset() const {
return ::cordl_internals::getInstanceField<UnityEngine::Quaternion, 0x128>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine::__set_faceDirection(UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<UnityEngine::Vector3, 0x138>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Vector3>(value));
}
constexpr UnityEngine::Vector3 RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine::__get_faceDirection() const {
return ::cordl_internals::getInstanceField<UnityEngine::Vector3, 0x138>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine::__set_locomotionHeadPositionOffset(UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<UnityEngine::Vector3, 0x144>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Vector3>(value));
}
constexpr UnityEngine::Vector3 RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine::__get_locomotionHeadPositionOffset() const {
return ::cordl_internals::getInstanceField<UnityEngine::Vector3, 0x144>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine::__set_headPosition(UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<UnityEngine::Vector3, 0x150>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Vector3>(value));
}
constexpr UnityEngine::Vector3 RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine::__get_headPosition() const {
return ::cordl_internals::getInstanceField<UnityEngine::Vector3, 0x150>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine::__set__anchorRotation_k__BackingField(UnityEngine::Quaternion value)  {
::cordl_internals::setInstanceField<UnityEngine::Quaternion, 0x15c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Quaternion>(value));
}
constexpr UnityEngine::Quaternion RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine::__get__anchorRotation_k__BackingField() const {
return ::cordl_internals::getInstanceField<UnityEngine::Quaternion, 0x15c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine::__set__anchorRelativeToHead_k__BackingField(UnityEngine::Quaternion value)  {
::cordl_internals::setInstanceField<UnityEngine::Quaternion, 0x16c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Quaternion>(value));
}
constexpr UnityEngine::Quaternion RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine::__get__anchorRelativeToHead_k__BackingField() const {
return ::cordl_internals::getInstanceField<UnityEngine::Quaternion, 0x16c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine::__set_headRotation(UnityEngine::Quaternion value)  {
::cordl_internals::setInstanceField<UnityEngine::Quaternion, 0x17c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Quaternion>(value));
}
constexpr UnityEngine::Quaternion RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine::__get_headRotation() const {
return ::cordl_internals::getInstanceField<UnityEngine::Quaternion, 0x17c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine::__set_pelvisRotation(UnityEngine::Quaternion value)  {
::cordl_internals::setInstanceField<UnityEngine::Quaternion, 0x18c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Quaternion>(value));
}
constexpr UnityEngine::Quaternion RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine::__get_pelvisRotation() const {
return ::cordl_internals::getInstanceField<UnityEngine::Quaternion, 0x18c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine::__set_anchorRelativeToPelvis(UnityEngine::Quaternion value)  {
::cordl_internals::setInstanceField<UnityEngine::Quaternion, 0x19c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Quaternion>(value));
}
constexpr UnityEngine::Quaternion RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine::__get_anchorRelativeToPelvis() const {
return ::cordl_internals::getInstanceField<UnityEngine::Quaternion, 0x19c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine::__set_pelvisRelativeRotation(UnityEngine::Quaternion value)  {
::cordl_internals::setInstanceField<UnityEngine::Quaternion, 0x1ac>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Quaternion>(value));
}
constexpr UnityEngine::Quaternion RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine::__get_pelvisRelativeRotation() const {
return ::cordl_internals::getInstanceField<UnityEngine::Quaternion, 0x1ac>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine::__set_chestRelativeRotation(UnityEngine::Quaternion value)  {
::cordl_internals::setInstanceField<UnityEngine::Quaternion, 0x1bc>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Quaternion>(value));
}
constexpr UnityEngine::Quaternion RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine::__get_chestRelativeRotation() const {
return ::cordl_internals::getInstanceField<UnityEngine::Quaternion, 0x1bc>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine::__set_headDeltaPosition(UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<UnityEngine::Vector3, 0x1cc>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Vector3>(value));
}
constexpr UnityEngine::Vector3 RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine::__get_headDeltaPosition() const {
return ::cordl_internals::getInstanceField<UnityEngine::Vector3, 0x1cc>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine::__set_pelvisDeltaRotation(UnityEngine::Quaternion value)  {
::cordl_internals::setInstanceField<UnityEngine::Quaternion, 0x1d8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Quaternion>(value));
}
constexpr UnityEngine::Quaternion RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine::__get_pelvisDeltaRotation() const {
return ::cordl_internals::getInstanceField<UnityEngine::Quaternion, 0x1d8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine::__set_chestTargetRotation(UnityEngine::Quaternion value)  {
::cordl_internals::setInstanceField<UnityEngine::Quaternion, 0x1e8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Quaternion>(value));
}
constexpr UnityEngine::Quaternion RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine::__get_chestTargetRotation() const {
return ::cordl_internals::getInstanceField<UnityEngine::Quaternion, 0x1e8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine::__set_pelvisIndex(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x1f8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine::__get_pelvisIndex() const {
return ::cordl_internals::getInstanceField<int32_t, 0x1f8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine::__set_spineIndex(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x1fc>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine::__get_spineIndex() const {
return ::cordl_internals::getInstanceField<int32_t, 0x1fc>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine::__set_chestIndex(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x200>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine::__get_chestIndex() const {
return ::cordl_internals::getInstanceField<int32_t, 0x200>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine::__set_neckIndex(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x204>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine::__get_neckIndex() const {
return ::cordl_internals::getInstanceField<int32_t, 0x204>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine::__set_headIndex(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x208>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine::__get_headIndex() const {
return ::cordl_internals::getInstanceField<int32_t, 0x208>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine::__set_length(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x20c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine::__get_length() const {
return ::cordl_internals::getInstanceField<float_t, 0x20c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine::__set_hasChest(bool value)  {
::cordl_internals::setInstanceField<bool, 0x210>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine::__get_hasChest() const {
return ::cordl_internals::getInstanceField<bool, 0x210>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine::__set_hasNeck(bool value)  {
::cordl_internals::setInstanceField<bool, 0x211>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine::__get_hasNeck() const {
return ::cordl_internals::getInstanceField<bool, 0x211>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine::__set_hasLegs(bool value)  {
::cordl_internals::setInstanceField<bool, 0x212>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine::__get_hasLegs() const {
return ::cordl_internals::getInstanceField<bool, 0x212>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine::__set_headHeight(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x214>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine::__get_headHeight() const {
return ::cordl_internals::getInstanceField<float_t, 0x214>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine::__set_sizeMlp(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x218>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine::__get_sizeMlp() const {
return ::cordl_internals::getInstanceField<float_t, 0x218>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine::__set_chestForward(UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<UnityEngine::Vector3, 0x21c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Vector3>(value));
}
constexpr UnityEngine::Vector3 RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine::__get_chestForward() const {
return ::cordl_internals::getInstanceField<UnityEngine::Vector3, 0x21c>(this->::bs_hook::Il2CppWrapperType::instance);
}
 RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine::get_pelvis()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine>::get(),
                            "get_pelvis",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone, false>(const_cast<void*>(instance), ___internal_method);
}
 RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine::get_firstSpineBone()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine>::get(),
                            "get_firstSpineBone",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone, false>(const_cast<void*>(instance), ___internal_method);
}
 RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine::get_chest()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine>::get(),
                            "get_chest",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone, false>(const_cast<void*>(instance), ___internal_method);
}
 RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine::get_neck()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine>::get(),
                            "get_neck",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone, false>(const_cast<void*>(instance), ___internal_method);
}
 RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine::get_head()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine>::get(),
                            "get_head",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::Quaternion RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine::get_anchorRotation()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine>::get(),
                            "get_anchorRotation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Quaternion, false>(const_cast<void*>(instance), ___internal_method);
}
 void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine::set_anchorRotation(UnityEngine::Quaternion value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine>::get(),
                            "set_anchorRotation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Quaternion>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 UnityEngine::Quaternion RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine::get_anchorRelativeToHead()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine>::get(),
                            "get_anchorRelativeToHead",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Quaternion, false>(const_cast<void*>(instance), ___internal_method);
}
 void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine::set_anchorRelativeToHead(UnityEngine::Quaternion value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine>::get(),
                            "set_anchorRelativeToHead",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Quaternion>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine::OnRead(::ArrayW<UnityEngine::Vector3> positions, ::ArrayW<UnityEngine::Quaternion> rotations, bool hasChest, bool hasNeck, bool hasShoulders, bool hasToes, bool hasLegs, int32_t rootIndex, int32_t index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine>::get(),
                            "OnRead",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<UnityEngine::Vector3>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<UnityEngine::Quaternion>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, positions, rotations, hasChest, hasNeck, hasShoulders, hasToes, hasLegs, rootIndex, index);
}
 void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine::PreSolve()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine>::get(),
                            "PreSolve",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine::ApplyOffsets()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine>::get(),
                            "ApplyOffsets",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine::CalculateChestTargetRotation(RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone rootBone, ::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Arm> arms)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine>::get(),
                            "CalculateChestTargetRotation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Arm>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, rootBone, arms);
}
 void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine::Solve(RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone rootBone, ::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg> legs, ::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Arm> arms)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine>::get(),
                            "Solve",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Arm>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, rootBone, legs, arms);
}
 void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine::FABRIKPass(UnityEngine::Vector3 animatedPelvisPos, UnityEngine::Vector3 rootUp, float_t weight)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine>::get(),
                            "FABRIKPass",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, animatedPelvisPos, rootUp, weight);
}
 void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine::SolvePelvis()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine>::get(),
                            "SolvePelvis",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine::Write(ByRef<::ArrayW<UnityEngine::Vector3>> solvedPositions, ByRef<::ArrayW<UnityEngine::Quaternion>> solvedRotations)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine>::get(),
                            "Write",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<UnityEngine::Vector3>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<UnityEngine::Quaternion>>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, solvedPositions, solvedRotations);
}
 void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine::ResetOffsets()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine>::get(),
                            "ResetOffsets",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine::AdjustChestByHands(ByRef<UnityEngine::Quaternion> chestTargetRotation, ::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Arm> arms)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine>::get(),
                            "AdjustChestByHands",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::Quaternion>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Arm>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, chestTargetRotation, arms);
}
 void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine::InverseTranslateToHead(::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg> legs, bool limited, bool useCurrentLegMag, UnityEngine::Vector3 offset, float_t w)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine>::get(),
                            "InverseTranslateToHead",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, legs, limited, useCurrentLegMag, offset, w);
}
 void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine::TranslatePelvis(::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg> legs, UnityEngine::Vector3 deltaPosition, UnityEngine::Quaternion deltaRotation)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine>::get(),
                            "TranslatePelvis",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Quaternion>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, legs, deltaPosition, deltaRotation);
}
/// @param it: int32_t (default: 2)
 UnityEngine::Vector3 RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine::LimitPelvisPosition(::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg> legs, UnityEngine::Vector3 pelvisPosition, bool useCurrentLegMag, int32_t it)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine>::get(),
                            "LimitPelvisPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Vector3, false>(const_cast<void*>(instance), ___internal_method, legs, pelvisPosition, useCurrentLegMag, it);
}
 void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine::Bend(::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone> bones, int32_t firstIndex, int32_t lastIndex, UnityEngine::Quaternion targetRotation, float_t clampWeight, bool uniformWeight, float_t w)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine>::get(),
                            "Bend",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Quaternion>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, bones, firstIndex, lastIndex, targetRotation, clampWeight, uniformWeight, w);
}
 void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine::Bend(::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone> bones, int32_t firstIndex, int32_t lastIndex, UnityEngine::Quaternion targetRotation, UnityEngine::Quaternion rotationOffset, float_t clampWeight, bool uniformWeight, float_t w)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine>::get(),
                            "Bend",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Quaternion>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Quaternion>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, bones, firstIndex, lastIndex, targetRotation, rotationOffset, clampWeight, uniformWeight, w);
}
// Ctor Parameters []
 RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine::RootMotion__FinalIK__IKSolverVR__Spine()  : RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__BodyPart(THROW_UNLESS(::il2cpp_utils::New<RootMotion__FinalIK__IKSolverVR__Spine>())) {}
 void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__PositionOffset::RootMotion__FinalIK__IKSolverVR__PositionOffset(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__PositionOffset::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__PositionOffset::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__PositionOffset  RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__PositionOffset::Pelvis{0};
constexpr RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__PositionOffset  RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__PositionOffset::Chest{1};
constexpr RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__PositionOffset  RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__PositionOffset::Head{2};
constexpr RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__PositionOffset  RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__PositionOffset::LeftHand{3};
constexpr RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__PositionOffset  RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__PositionOffset::RightHand{4};
constexpr RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__PositionOffset  RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__PositionOffset::LeftFoot{5};
constexpr RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__PositionOffset  RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__PositionOffset::RightFoot{6};
constexpr RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__PositionOffset  RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__PositionOffset::LeftHeel{7};
constexpr RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__PositionOffset  RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__PositionOffset::RightHeel{8};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__RotationOffset::RootMotion__FinalIK__IKSolverVR__RotationOffset(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__RotationOffset::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__RotationOffset::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__RotationOffset  RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__RotationOffset::Pelvis{0};
constexpr RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__RotationOffset  RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__RotationOffset::Chest{1};
constexpr RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__RotationOffset  RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__RotationOffset::Head{2};
//  Writing Method size for method: RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone::*)(UnityEngine::Vector3, UnityEngine::Quaternion)>(&RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x11f2d18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Quaternion>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone.Read
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone::*)(UnityEngine::Vector3, UnityEngine::Quaternion)>(&RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone::Read)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x11f2d88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone>::get(),
                            "Read",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Quaternion>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone.SwingRotation
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone>, int32_t, UnityEngine::Vector3, float_t)>(&RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone::SwingRotation)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x11f606c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone>::get(),
                            "SwingRotation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone.PreSolve
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (*)(ByRef<::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone>>)>(&RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone::PreSolve)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x11f626c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone>::get(),
                            "PreSolve",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone>>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone.RotateAroundPoint
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone>, int32_t, UnityEngine::Vector3, UnityEngine::Quaternion)>(&RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone::RotateAroundPoint)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x11f5de0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone>::get(),
                            "RotateAroundPoint",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Quaternion>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone.RotateBy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone>, int32_t, UnityEngine::Quaternion)>(&RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone::RotateBy)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x11f63cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone>::get(),
                            "RotateBy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Quaternion>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone.RotateBy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone>, UnityEngine::Quaternion)>(&RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone::RotateBy)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x11f6574;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone>::get(),
                            "RotateBy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Quaternion>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone.RotateTo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone>, int32_t, UnityEngine::Quaternion)>(&RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone::RotateTo)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x11f66fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone>::get(),
                            "RotateTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Quaternion>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone.SolveTrigonometric
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone>, int32_t, int32_t, int32_t, UnityEngine::Vector3, UnityEngine::Vector3, float_t)>(&RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone::SolveTrigonometric)> {
  constexpr static std::size_t size = 0x3e4;
  constexpr static std::size_t addrs = 0x11f54b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone>::get(),
                            "SolveTrigonometric",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone.GetDirectionToBendPoint
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (*)(UnityEngine::Vector3, float_t, UnityEngine::Vector3, float_t, float_t)>(&RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone::GetDirectionToBendPoint)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x11f67a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone>::get(),
                            "GetDirectionToBendPoint",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone.SolveFABRIK
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone>, UnityEngine::Vector3, UnityEngine::Vector3, float_t, float_t, int32_t, float_t, UnityEngine::Vector3)>(&RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone::SolveFABRIK)> {
  constexpr static std::size_t size = 0x3cc;
  constexpr static std::size_t addrs = 0x11f50e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone>::get(),
                            "SolveFABRIK",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone.SolveFABRIKJoint
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (*)(UnityEngine::Vector3, UnityEngine::Vector3, float_t)>(&RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone::SolveFABRIKJoint)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x11f68f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone>::get(),
                            "SolveFABRIKJoint",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone.SolveCCD
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone>, UnityEngine::Vector3, float_t, int32_t)>(&RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone::SolveCCD)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x11f6a0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone>::get(),
                            "SolveCCD",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone::__set_readPosition(UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<UnityEngine::Vector3, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Vector3>(value));
}
constexpr UnityEngine::Vector3 RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone::__get_readPosition() const {
return ::cordl_internals::getInstanceField<UnityEngine::Vector3, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone::__set_readRotation(UnityEngine::Quaternion value)  {
::cordl_internals::setInstanceField<UnityEngine::Quaternion, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Quaternion>(value));
}
constexpr UnityEngine::Quaternion RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone::__get_readRotation() const {
return ::cordl_internals::getInstanceField<UnityEngine::Quaternion, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone::__set_solverPosition(UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<UnityEngine::Vector3, 0x2c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Vector3>(value));
}
constexpr UnityEngine::Vector3 RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone::__get_solverPosition() const {
return ::cordl_internals::getInstanceField<UnityEngine::Vector3, 0x2c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone::__set_solverRotation(UnityEngine::Quaternion value)  {
::cordl_internals::setInstanceField<UnityEngine::Quaternion, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Quaternion>(value));
}
constexpr UnityEngine::Quaternion RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone::__get_solverRotation() const {
return ::cordl_internals::getInstanceField<UnityEngine::Quaternion, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone::__set_length(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone::__get_length() const {
return ::cordl_internals::getInstanceField<float_t, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone::__set_sqrMag(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x4c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone::__get_sqrMag() const {
return ::cordl_internals::getInstanceField<float_t, 0x4c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone::__set_axis(UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<UnityEngine::Vector3, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Vector3>(value));
}
constexpr UnityEngine::Vector3 RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone::__get_axis() const {
return ::cordl_internals::getInstanceField<UnityEngine::Vector3, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "position", ty: "UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "rotation", ty: "UnityEngine::Quaternion", modifiers: "", def_value: None }]
 RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone::RootMotion__FinalIK__IKSolverVR__VirtualBone(UnityEngine::Vector3 position, UnityEngine::Quaternion rotation)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<RootMotion__FinalIK__IKSolverVR__VirtualBone>(position, rotation))) {}
 void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone::_ctor(UnityEngine::Vector3 position, UnityEngine::Quaternion rotation)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Quaternion>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, position, rotation);
}
 void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone::Read(UnityEngine::Vector3 position, UnityEngine::Quaternion rotation)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone>::get(),
                            "Read",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Quaternion>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, position, rotation);
}
/// @param weight: float_t (default: 1)
 void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone::SwingRotation(::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone> bones, int32_t index, UnityEngine::Vector3 swingTarget, float_t weight)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone>::get(),
                            "SwingRotation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, bones, index, swingTarget, weight);
}
 float_t RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone::PreSolve(ByRef<::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone>> bones)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone>::get(),
                            "PreSolve",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone>>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(nullptr, ___internal_method, bones);
}
 void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone::RotateAroundPoint(::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone> bones, int32_t index, UnityEngine::Vector3 point, UnityEngine::Quaternion rotation)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone>::get(),
                            "RotateAroundPoint",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Quaternion>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, bones, index, point, rotation);
}
 void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone::RotateBy(::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone> bones, int32_t index, UnityEngine::Quaternion rotation)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone>::get(),
                            "RotateBy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Quaternion>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, bones, index, rotation);
}
 void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone::RotateBy(::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone> bones, UnityEngine::Quaternion rotation)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone>::get(),
                            "RotateBy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Quaternion>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, bones, rotation);
}
 void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone::RotateTo(::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone> bones, int32_t index, UnityEngine::Quaternion rotation)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone>::get(),
                            "RotateTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Quaternion>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, bones, index, rotation);
}
 void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone::SolveTrigonometric(::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone> bones, int32_t first, int32_t second, int32_t third, UnityEngine::Vector3 targetPosition, UnityEngine::Vector3 bendNormal, float_t weight)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone>::get(),
                            "SolveTrigonometric",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, bones, first, second, third, targetPosition, bendNormal, weight);
}
 UnityEngine::Vector3 RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone::GetDirectionToBendPoint(UnityEngine::Vector3 direction, float_t directionMag, UnityEngine::Vector3 bendDirection, float_t sqrMag1, float_t sqrMag2)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone>::get(),
                            "GetDirectionToBendPoint",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Vector3, false>(nullptr, ___internal_method, direction, directionMag, bendDirection, sqrMag1, sqrMag2);
}
 void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone::SolveFABRIK(::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone> bones, UnityEngine::Vector3 startPosition, UnityEngine::Vector3 targetPosition, float_t weight, float_t minNormalizedTargetDistance, int32_t iterations, float_t length, UnityEngine::Vector3 startOffset)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone>::get(),
                            "SolveFABRIK",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, bones, startPosition, targetPosition, weight, minNormalizedTargetDistance, iterations, length, startOffset);
}
 UnityEngine::Vector3 RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone::SolveFABRIKJoint(UnityEngine::Vector3 pos1, UnityEngine::Vector3 pos2, float_t length)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone>::get(),
                            "SolveFABRIKJoint",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Vector3, false>(nullptr, ___internal_method, pos1, pos2, length);
}
 void RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone::SolveCCD(::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone> bones, UnityEngine::Vector3 targetPosition, float_t weight, int32_t iterations)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone>::get(),
                            "SolveCCD",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, bones, targetPosition, weight, iterations);
}
//  Writing Method size for method: RootMotion::FinalIK::IKSolverVR.SetToReferences
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverVR::*)(RootMotion::FinalIK::RootMotion__FinalIK__VRIK__References)>(&RootMotion::FinalIK::IKSolverVR::SetToReferences)> {
  constexpr static std::size_t size = 0x2d4;
  constexpr static std::size_t addrs = 0x11e5b7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::IKSolverVR>::get(),
                            "SetToReferences",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<RootMotion::FinalIK::RootMotion__FinalIK__VRIK__References>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::FinalIK::IKSolverVR.GuessHandOrientations
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverVR::*)(RootMotion::FinalIK::RootMotion__FinalIK__VRIK__References, bool)>(&RootMotion::FinalIK::IKSolverVR::GuessHandOrientations)> {
  constexpr static std::size_t size = 0x2f0;
  constexpr static std::size_t addrs = 0x11e5f9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::IKSolverVR>::get(),
                            "GuessHandOrientations",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<RootMotion::FinalIK::RootMotion__FinalIK__VRIK__References>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::FinalIK::IKSolverVR.DefaultAnimationCurves
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverVR::*)()>(&RootMotion::FinalIK::IKSolverVR::DefaultAnimationCurves)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x11e5e50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::IKSolverVR>::get(),
                            "DefaultAnimationCurves",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::FinalIK::IKSolverVR.AddPositionOffset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverVR::*)(RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__PositionOffset, UnityEngine::Vector3)>(&RootMotion::FinalIK::IKSolverVR::AddPositionOffset)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x11e67cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::IKSolverVR>::get(),
                            "AddPositionOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__PositionOffset>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::FinalIK::IKSolverVR.AddRotationOffset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverVR::*)(RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__RotationOffset, UnityEngine::Vector3)>(&RootMotion::FinalIK::IKSolverVR::AddRotationOffset)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x11e6910;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::IKSolverVR>::get(),
                            "AddRotationOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__RotationOffset>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::FinalIK::IKSolverVR.AddRotationOffset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverVR::*)(RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__RotationOffset, UnityEngine::Quaternion)>(&RootMotion::FinalIK::IKSolverVR::AddRotationOffset)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x11e6950;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::IKSolverVR>::get(),
                            "AddRotationOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__RotationOffset>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Quaternion>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::FinalIK::IKSolverVR.AddPlatformMotion
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverVR::*)(UnityEngine::Vector3, UnityEngine::Quaternion, UnityEngine::Vector3)>(&RootMotion::FinalIK::IKSolverVR::AddPlatformMotion)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x11e6a74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::IKSolverVR>::get(),
                            "AddPlatformMotion",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Quaternion>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::FinalIK::IKSolverVR.Reset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverVR::*)()>(&RootMotion::FinalIK::IKSolverVR::Reset)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x11e6fc8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::IKSolverVR>::get(),
                            "Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::FinalIK::IKSolverVR.StoreDefaultLocalState
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverVR::*)()>(&RootMotion::FinalIK::IKSolverVR::StoreDefaultLocalState)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x11e7918;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(RootMotion::FinalIK::IKSolverVR),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::IKSolverVR>::get(),
                                  9
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::FinalIK::IKSolverVR.FixTransforms
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverVR::*)()>(&RootMotion::FinalIK::IKSolverVR::FixTransforms)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x11e7a6c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(RootMotion::FinalIK::IKSolverVR),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::IKSolverVR>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::FinalIK::IKSolverVR.GetPoints
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__IKSolver__Point> (RootMotion::FinalIK::IKSolverVR::*)()>(&RootMotion::FinalIK::IKSolverVR::GetPoints)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x11e7c58;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(RootMotion::FinalIK::IKSolverVR),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::IKSolverVR>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::FinalIK::IKSolverVR.GetPoint
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<RootMotion::FinalIK::RootMotion__FinalIK__IKSolver__Point (RootMotion::FinalIK::IKSolverVR::*)(UnityEngine::Transform)>(&RootMotion::FinalIK::IKSolverVR::GetPoint)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x11e7cc8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(RootMotion::FinalIK::IKSolverVR),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::IKSolverVR>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::FinalIK::IKSolverVR.IsValid
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (RootMotion::FinalIK::IKSolverVR::*)(ByRef<::StringW>)>(&RootMotion::FinalIK::IKSolverVR::IsValid)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x11e7d38;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(RootMotion::FinalIK::IKSolverVR),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::IKSolverVR>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::FinalIK::IKSolverVR.GetNormal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (RootMotion::FinalIK::IKSolverVR::*)(::ArrayW<UnityEngine::Transform>)>(&RootMotion::FinalIK::IKSolverVR::GetNormal)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x11e7f34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::IKSolverVR>::get(),
                            "GetNormal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<UnityEngine::Transform>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::FinalIK::IKSolverVR.GuessWristToPalmAxis
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (RootMotion::FinalIK::IKSolverVR::*)(UnityEngine::Transform, UnityEngine::Transform)>(&RootMotion::FinalIK::IKSolverVR::GuessWristToPalmAxis)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x11e628c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::IKSolverVR>::get(),
                            "GuessWristToPalmAxis",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Transform>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Transform>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::FinalIK::IKSolverVR.GuessPalmToThumbAxis
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (RootMotion::FinalIK::IKSolverVR::*)(UnityEngine::Transform, UnityEngine::Transform)>(&RootMotion::FinalIK::IKSolverVR::GuessPalmToThumbAxis)> {
  constexpr static std::size_t size = 0x348;
  constexpr static std::size_t addrs = 0x11e6370;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::IKSolverVR>::get(),
                            "GuessPalmToThumbAxis",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Transform>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Transform>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::FinalIK::IKSolverVR.GetSineKeyframes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<UnityEngine::Keyframe> (*)(float_t)>(&RootMotion::FinalIK::IKSolverVR::GetSineKeyframes)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x11e66b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::IKSolverVR>::get(),
                            "GetSineKeyframes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::FinalIK::IKSolverVR.UpdateSolverTransforms
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverVR::*)()>(&RootMotion::FinalIK::IKSolverVR::UpdateSolverTransforms)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x11e70d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::IKSolverVR>::get(),
                            "UpdateSolverTransforms",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::FinalIK::IKSolverVR.OnInitiate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverVR::*)()>(&RootMotion::FinalIK::IKSolverVR::OnInitiate)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x11e81a4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(RootMotion::FinalIK::IKSolverVR),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::IKSolverVR>::get(),
                                  10
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::FinalIK::IKSolverVR.OnUpdate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverVR::*)()>(&RootMotion::FinalIK::IKSolverVR::OnUpdate)> {
  constexpr static std::size_t size = 0x408;
  constexpr static std::size_t addrs = 0x11e81e0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(RootMotion::FinalIK::IKSolverVR),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::IKSolverVR>::get(),
                                  11
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::FinalIK::IKSolverVR.WriteTransforms
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverVR::*)()>(&RootMotion::FinalIK::IKSolverVR::WriteTransforms)> {
  constexpr static std::size_t size = 0x454;
  constexpr static std::size_t addrs = 0x11e976c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::IKSolverVR>::get(),
                            "WriteTransforms",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::FinalIK::IKSolverVR.Read
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverVR::*)(::ArrayW<UnityEngine::Vector3>, ::ArrayW<UnityEngine::Quaternion>, bool, bool, bool, bool, bool)>(&RootMotion::FinalIK::IKSolverVR::Read)> {
  constexpr static std::size_t size = 0x50c;
  constexpr static std::size_t addrs = 0x11e7228;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::IKSolverVR>::get(),
                            "Read",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<UnityEngine::Vector3>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<UnityEngine::Quaternion>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::FinalIK::IKSolverVR.Solve
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverVR::*)()>(&RootMotion::FinalIK::IKSolverVR::Solve)> {
  constexpr static std::size_t size = 0x1048;
  constexpr static std::size_t addrs = 0x11e85e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::IKSolverVR>::get(),
                            "Solve",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::FinalIK::IKSolverVR.GetPosition
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (RootMotion::FinalIK::IKSolverVR::*)(int32_t)>(&RootMotion::FinalIK::IKSolverVR::GetPosition)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x11e9bc0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::IKSolverVR>::get(),
                            "GetPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::FinalIK::IKSolverVR.GetRotation
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Quaternion (RootMotion::FinalIK::IKSolverVR::*)(int32_t)>(&RootMotion::FinalIK::IKSolverVR::GetRotation)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x11e9bfc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::IKSolverVR>::get(),
                            "GetRotation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::FinalIK::IKSolverVR.get_rootBone
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone (RootMotion::FinalIK::IKSolverVR::*)()>(&RootMotion::FinalIK::IKSolverVR::get_rootBone)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x11ed124;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::IKSolverVR>::get(),
                            "get_rootBone",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::FinalIK::IKSolverVR.set_rootBone
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverVR::*)(RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone)>(&RootMotion::FinalIK::IKSolverVR::set_rootBone)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x11ed12c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::IKSolverVR>::get(),
                            "set_rootBone",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::FinalIK::IKSolverVR.Write
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverVR::*)()>(&RootMotion::FinalIK::IKSolverVR::Write)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x11e9630;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::IKSolverVR>::get(),
                            "Write",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::FinalIK::IKSolverVR.GetPelvisOffset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (RootMotion::FinalIK::IKSolverVR::*)()>(&RootMotion::FinalIK::IKSolverVR::GetPelvisOffset)> {
  constexpr static std::size_t size = 0x6ec;
  constexpr static std::size_t addrs = 0x11eca38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::IKSolverVR>::get(),
                            "GetPelvisOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::FinalIK::IKSolverVR._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverVR::*)()>(&RootMotion::FinalIK::IKSolverVR::_ctor)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0x11ed134;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::IKSolverVR>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void RootMotion::FinalIK::IKSolverVR::__set_solverTransforms(::ArrayW<UnityEngine::Transform> value)  {
::cordl_internals::setInstanceField<::ArrayW<UnityEngine::Transform>, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<UnityEngine::Transform>>(value));
}
constexpr ::ArrayW<UnityEngine::Transform> RootMotion::FinalIK::IKSolverVR::__get_solverTransforms() const {
return ::cordl_internals::getInstanceField<::ArrayW<UnityEngine::Transform>, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::IKSolverVR::__set_hasChest(bool value)  {
::cordl_internals::setInstanceField<bool, 0x60>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool RootMotion::FinalIK::IKSolverVR::__get_hasChest() const {
return ::cordl_internals::getInstanceField<bool, 0x60>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::IKSolverVR::__set_hasNeck(bool value)  {
::cordl_internals::setInstanceField<bool, 0x61>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool RootMotion::FinalIK::IKSolverVR::__get_hasNeck() const {
return ::cordl_internals::getInstanceField<bool, 0x61>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::IKSolverVR::__set_hasShoulders(bool value)  {
::cordl_internals::setInstanceField<bool, 0x62>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool RootMotion::FinalIK::IKSolverVR::__get_hasShoulders() const {
return ::cordl_internals::getInstanceField<bool, 0x62>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::IKSolverVR::__set_hasToes(bool value)  {
::cordl_internals::setInstanceField<bool, 0x63>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool RootMotion::FinalIK::IKSolverVR::__get_hasToes() const {
return ::cordl_internals::getInstanceField<bool, 0x63>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::IKSolverVR::__set_hasLegs(bool value)  {
::cordl_internals::setInstanceField<bool, 0x64>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool RootMotion::FinalIK::IKSolverVR::__get_hasLegs() const {
return ::cordl_internals::getInstanceField<bool, 0x64>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::IKSolverVR::__set_readPositions(::ArrayW<UnityEngine::Vector3> value)  {
::cordl_internals::setInstanceField<::ArrayW<UnityEngine::Vector3>, 0x68>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<UnityEngine::Vector3>>(value));
}
constexpr ::ArrayW<UnityEngine::Vector3> RootMotion::FinalIK::IKSolverVR::__get_readPositions() const {
return ::cordl_internals::getInstanceField<::ArrayW<UnityEngine::Vector3>, 0x68>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::IKSolverVR::__set_readRotations(::ArrayW<UnityEngine::Quaternion> value)  {
::cordl_internals::setInstanceField<::ArrayW<UnityEngine::Quaternion>, 0x70>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<UnityEngine::Quaternion>>(value));
}
constexpr ::ArrayW<UnityEngine::Quaternion> RootMotion::FinalIK::IKSolverVR::__get_readRotations() const {
return ::cordl_internals::getInstanceField<::ArrayW<UnityEngine::Quaternion>, 0x70>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::IKSolverVR::__set_solvedPositions(::ArrayW<UnityEngine::Vector3> value)  {
::cordl_internals::setInstanceField<::ArrayW<UnityEngine::Vector3>, 0x78>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<UnityEngine::Vector3>>(value));
}
constexpr ::ArrayW<UnityEngine::Vector3> RootMotion::FinalIK::IKSolverVR::__get_solvedPositions() const {
return ::cordl_internals::getInstanceField<::ArrayW<UnityEngine::Vector3>, 0x78>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::IKSolverVR::__set_solvedRotations(::ArrayW<UnityEngine::Quaternion> value)  {
::cordl_internals::setInstanceField<::ArrayW<UnityEngine::Quaternion>, 0x80>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<UnityEngine::Quaternion>>(value));
}
constexpr ::ArrayW<UnityEngine::Quaternion> RootMotion::FinalIK::IKSolverVR::__get_solvedRotations() const {
return ::cordl_internals::getInstanceField<::ArrayW<UnityEngine::Quaternion>, 0x80>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::IKSolverVR::__set_defaultLocalRotations(::ArrayW<UnityEngine::Quaternion> value)  {
::cordl_internals::setInstanceField<::ArrayW<UnityEngine::Quaternion>, 0x88>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<UnityEngine::Quaternion>>(value));
}
constexpr ::ArrayW<UnityEngine::Quaternion> RootMotion::FinalIK::IKSolverVR::__get_defaultLocalRotations() const {
return ::cordl_internals::getInstanceField<::ArrayW<UnityEngine::Quaternion>, 0x88>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::IKSolverVR::__set_defaultLocalPositions(::ArrayW<UnityEngine::Vector3> value)  {
::cordl_internals::setInstanceField<::ArrayW<UnityEngine::Vector3>, 0x90>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<UnityEngine::Vector3>>(value));
}
constexpr ::ArrayW<UnityEngine::Vector3> RootMotion::FinalIK::IKSolverVR::__get_defaultLocalPositions() const {
return ::cordl_internals::getInstanceField<::ArrayW<UnityEngine::Vector3>, 0x90>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::IKSolverVR::__set_rootV(UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<UnityEngine::Vector3, 0x98>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Vector3>(value));
}
constexpr UnityEngine::Vector3 RootMotion::FinalIK::IKSolverVR::__get_rootV() const {
return ::cordl_internals::getInstanceField<UnityEngine::Vector3, 0x98>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::IKSolverVR::__set_rootVelocity(UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<UnityEngine::Vector3, 0xa4>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Vector3>(value));
}
constexpr UnityEngine::Vector3 RootMotion::FinalIK::IKSolverVR::__get_rootVelocity() const {
return ::cordl_internals::getInstanceField<UnityEngine::Vector3, 0xa4>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::IKSolverVR::__set_bodyOffset(UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<UnityEngine::Vector3, 0xb0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Vector3>(value));
}
constexpr UnityEngine::Vector3 RootMotion::FinalIK::IKSolverVR::__get_bodyOffset() const {
return ::cordl_internals::getInstanceField<UnityEngine::Vector3, 0xb0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::IKSolverVR::__set_supportLegIndex(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0xbc>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t RootMotion::FinalIK::IKSolverVR::__get_supportLegIndex() const {
return ::cordl_internals::getInstanceField<int32_t, 0xbc>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::IKSolverVR::__set_lastLOD(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0xc0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t RootMotion::FinalIK::IKSolverVR::__get_lastLOD() const {
return ::cordl_internals::getInstanceField<int32_t, 0xc0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::IKSolverVR::__set_LOD(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0xc4>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t RootMotion::FinalIK::IKSolverVR::__get_LOD() const {
return ::cordl_internals::getInstanceField<int32_t, 0xc4>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::IKSolverVR::__set_plantFeet(bool value)  {
::cordl_internals::setInstanceField<bool, 0xc8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool RootMotion::FinalIK::IKSolverVR::__get_plantFeet() const {
return ::cordl_internals::getInstanceField<bool, 0xc8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::IKSolverVR::__set__rootBone_k__BackingField(RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone value)  {
::cordl_internals::setInstanceField<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone, 0xd0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone>(value));
}
constexpr RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone RootMotion::FinalIK::IKSolverVR::__get__rootBone_k__BackingField() const {
return ::cordl_internals::getInstanceField<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone, 0xd0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::IKSolverVR::__set_spine(RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine value)  {
::cordl_internals::setInstanceField<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine, 0xd8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine>(value));
}
constexpr RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine RootMotion::FinalIK::IKSolverVR::__get_spine() const {
return ::cordl_internals::getInstanceField<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Spine, 0xd8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::IKSolverVR::__set_leftArm(RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Arm value)  {
::cordl_internals::setInstanceField<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Arm, 0xe0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Arm>(value));
}
constexpr RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Arm RootMotion::FinalIK::IKSolverVR::__get_leftArm() const {
return ::cordl_internals::getInstanceField<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Arm, 0xe0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::IKSolverVR::__set_rightArm(RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Arm value)  {
::cordl_internals::setInstanceField<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Arm, 0xe8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Arm>(value));
}
constexpr RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Arm RootMotion::FinalIK::IKSolverVR::__get_rightArm() const {
return ::cordl_internals::getInstanceField<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Arm, 0xe8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::IKSolverVR::__set_leftLeg(RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg value)  {
::cordl_internals::setInstanceField<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg, 0xf0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg>(value));
}
constexpr RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg RootMotion::FinalIK::IKSolverVR::__get_leftLeg() const {
return ::cordl_internals::getInstanceField<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg, 0xf0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::IKSolverVR::__set_rightLeg(RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg value)  {
::cordl_internals::setInstanceField<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg, 0xf8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg>(value));
}
constexpr RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg RootMotion::FinalIK::IKSolverVR::__get_rightLeg() const {
return ::cordl_internals::getInstanceField<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg, 0xf8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::IKSolverVR::__set_locomotion(RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Locomotion value)  {
::cordl_internals::setInstanceField<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Locomotion, 0x100>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Locomotion>(value));
}
constexpr RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Locomotion RootMotion::FinalIK::IKSolverVR::__get_locomotion() const {
return ::cordl_internals::getInstanceField<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Locomotion, 0x100>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::IKSolverVR::__set_legs(::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg> value)  {
::cordl_internals::setInstanceField<::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg>, 0x108>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg>>(value));
}
constexpr ::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg> RootMotion::FinalIK::IKSolverVR::__get_legs() const {
return ::cordl_internals::getInstanceField<::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg>, 0x108>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::IKSolverVR::__set_arms(::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Arm> value)  {
::cordl_internals::setInstanceField<::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Arm>, 0x110>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Arm>>(value));
}
constexpr ::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Arm> RootMotion::FinalIK::IKSolverVR::__get_arms() const {
return ::cordl_internals::getInstanceField<::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Arm>, 0x110>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::IKSolverVR::__set_headPosition(UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<UnityEngine::Vector3, 0x118>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Vector3>(value));
}
constexpr UnityEngine::Vector3 RootMotion::FinalIK::IKSolverVR::__get_headPosition() const {
return ::cordl_internals::getInstanceField<UnityEngine::Vector3, 0x118>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::IKSolverVR::__set_headDeltaPosition(UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<UnityEngine::Vector3, 0x124>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Vector3>(value));
}
constexpr UnityEngine::Vector3 RootMotion::FinalIK::IKSolverVR::__get_headDeltaPosition() const {
return ::cordl_internals::getInstanceField<UnityEngine::Vector3, 0x124>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::IKSolverVR::__set_raycastOriginPelvis(UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<UnityEngine::Vector3, 0x130>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Vector3>(value));
}
constexpr UnityEngine::Vector3 RootMotion::FinalIK::IKSolverVR::__get_raycastOriginPelvis() const {
return ::cordl_internals::getInstanceField<UnityEngine::Vector3, 0x130>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::IKSolverVR::__set_lastOffset(UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<UnityEngine::Vector3, 0x13c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Vector3>(value));
}
constexpr UnityEngine::Vector3 RootMotion::FinalIK::IKSolverVR::__get_lastOffset() const {
return ::cordl_internals::getInstanceField<UnityEngine::Vector3, 0x13c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::IKSolverVR::__set_debugPos1(UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<UnityEngine::Vector3, 0x148>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Vector3>(value));
}
constexpr UnityEngine::Vector3 RootMotion::FinalIK::IKSolverVR::__get_debugPos1() const {
return ::cordl_internals::getInstanceField<UnityEngine::Vector3, 0x148>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::IKSolverVR::__set_debugPos2(UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<UnityEngine::Vector3, 0x154>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Vector3>(value));
}
constexpr UnityEngine::Vector3 RootMotion::FinalIK::IKSolverVR::__get_debugPos2() const {
return ::cordl_internals::getInstanceField<UnityEngine::Vector3, 0x154>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::IKSolverVR::__set_debugPos3(UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<UnityEngine::Vector3, 0x160>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Vector3>(value));
}
constexpr UnityEngine::Vector3 RootMotion::FinalIK::IKSolverVR::__get_debugPos3() const {
return ::cordl_internals::getInstanceField<UnityEngine::Vector3, 0x160>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::IKSolverVR::__set_debugPos4(UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<UnityEngine::Vector3, 0x16c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Vector3>(value));
}
constexpr UnityEngine::Vector3 RootMotion::FinalIK::IKSolverVR::__get_debugPos4() const {
return ::cordl_internals::getInstanceField<UnityEngine::Vector3, 0x16c>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void RootMotion::FinalIK::IKSolverVR::SetToReferences(RootMotion::FinalIK::RootMotion__FinalIK__VRIK__References references)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::IKSolverVR>::get(),
                            "SetToReferences",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<RootMotion::FinalIK::RootMotion__FinalIK__VRIK__References>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, references);
}
 void RootMotion::FinalIK::IKSolverVR::GuessHandOrientations(RootMotion::FinalIK::RootMotion__FinalIK__VRIK__References references, bool onlyIfZero)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::IKSolverVR>::get(),
                            "GuessHandOrientations",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<RootMotion::FinalIK::RootMotion__FinalIK__VRIK__References>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, references, onlyIfZero);
}
 void RootMotion::FinalIK::IKSolverVR::DefaultAnimationCurves()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::IKSolverVR>::get(),
                            "DefaultAnimationCurves",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void RootMotion::FinalIK::IKSolverVR::AddPositionOffset(RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__PositionOffset positionOffset, UnityEngine::Vector3 value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::IKSolverVR>::get(),
                            "AddPositionOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__PositionOffset>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, positionOffset, value);
}
 void RootMotion::FinalIK::IKSolverVR::AddRotationOffset(RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__RotationOffset rotationOffset, UnityEngine::Vector3 value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::IKSolverVR>::get(),
                            "AddRotationOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__RotationOffset>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, rotationOffset, value);
}
 void RootMotion::FinalIK::IKSolverVR::AddRotationOffset(RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__RotationOffset rotationOffset, UnityEngine::Quaternion value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::IKSolverVR>::get(),
                            "AddRotationOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__RotationOffset>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Quaternion>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, rotationOffset, value);
}
 void RootMotion::FinalIK::IKSolverVR::AddPlatformMotion(UnityEngine::Vector3 deltaPosition, UnityEngine::Quaternion deltaRotation, UnityEngine::Vector3 platformPivot)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::IKSolverVR>::get(),
                            "AddPlatformMotion",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Quaternion>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, deltaPosition, deltaRotation, platformPivot);
}
 void RootMotion::FinalIK::IKSolverVR::Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::IKSolverVR>::get(),
                            "Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void RootMotion::FinalIK::IKSolverVR::StoreDefaultLocalState()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::IKSolverVR>::get(),
                            "StoreDefaultLocalState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void RootMotion::FinalIK::IKSolverVR::FixTransforms()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::IKSolverVR>::get(),
                            "FixTransforms",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__IKSolver__Point> RootMotion::FinalIK::IKSolverVR::GetPoints()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::IKSolverVR>::get(),
                            "GetPoints",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__IKSolver__Point>, false>(const_cast<void*>(instance), ___internal_method);
}
 RootMotion::FinalIK::RootMotion__FinalIK__IKSolver__Point RootMotion::FinalIK::IKSolverVR::GetPoint(UnityEngine::Transform transform)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::IKSolverVR>::get(),
                            "GetPoint",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Transform>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<RootMotion::FinalIK::RootMotion__FinalIK__IKSolver__Point, false>(const_cast<void*>(instance), ___internal_method, transform);
}
 bool RootMotion::FinalIK::IKSolverVR::IsValid(ByRef<::StringW> message)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::IKSolverVR>::get(),
                            "IsValid",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, message);
}
 UnityEngine::Vector3 RootMotion::FinalIK::IKSolverVR::GetNormal(::ArrayW<UnityEngine::Transform> transforms)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::IKSolverVR>::get(),
                            "GetNormal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<UnityEngine::Transform>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Vector3, false>(const_cast<void*>(instance), ___internal_method, transforms);
}
 UnityEngine::Vector3 RootMotion::FinalIK::IKSolverVR::GuessWristToPalmAxis(UnityEngine::Transform hand, UnityEngine::Transform forearm)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::IKSolverVR>::get(),
                            "GuessWristToPalmAxis",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Transform>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Transform>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Vector3, false>(const_cast<void*>(instance), ___internal_method, hand, forearm);
}
 UnityEngine::Vector3 RootMotion::FinalIK::IKSolverVR::GuessPalmToThumbAxis(UnityEngine::Transform hand, UnityEngine::Transform forearm)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::IKSolverVR>::get(),
                            "GuessPalmToThumbAxis",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Transform>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Transform>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Vector3, false>(const_cast<void*>(instance), ___internal_method, hand, forearm);
}
 ::ArrayW<UnityEngine::Keyframe> RootMotion::FinalIK::IKSolverVR::GetSineKeyframes(float_t mag)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::IKSolverVR>::get(),
                            "GetSineKeyframes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<UnityEngine::Keyframe>, false>(nullptr, ___internal_method, mag);
}
 void RootMotion::FinalIK::IKSolverVR::UpdateSolverTransforms()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::IKSolverVR>::get(),
                            "UpdateSolverTransforms",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void RootMotion::FinalIK::IKSolverVR::OnInitiate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::IKSolverVR>::get(),
                            "OnInitiate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void RootMotion::FinalIK::IKSolverVR::OnUpdate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::IKSolverVR>::get(),
                            "OnUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void RootMotion::FinalIK::IKSolverVR::WriteTransforms()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::IKSolverVR>::get(),
                            "WriteTransforms",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void RootMotion::FinalIK::IKSolverVR::Read(::ArrayW<UnityEngine::Vector3> positions, ::ArrayW<UnityEngine::Quaternion> rotations, bool hasChest, bool hasNeck, bool hasShoulders, bool hasToes, bool hasLegs)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::IKSolverVR>::get(),
                            "Read",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<UnityEngine::Vector3>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<UnityEngine::Quaternion>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, positions, rotations, hasChest, hasNeck, hasShoulders, hasToes, hasLegs);
}
 void RootMotion::FinalIK::IKSolverVR::Solve()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::IKSolverVR>::get(),
                            "Solve",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::Vector3 RootMotion::FinalIK::IKSolverVR::GetPosition(int32_t index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::IKSolverVR>::get(),
                            "GetPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Vector3, false>(const_cast<void*>(instance), ___internal_method, index);
}
 UnityEngine::Quaternion RootMotion::FinalIK::IKSolverVR::GetRotation(int32_t index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::IKSolverVR>::get(),
                            "GetRotation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Quaternion, false>(const_cast<void*>(instance), ___internal_method, index);
}
 RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone RootMotion::FinalIK::IKSolverVR::get_rootBone()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::IKSolverVR>::get(),
                            "get_rootBone",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone, false>(const_cast<void*>(instance), ___internal_method);
}
 void RootMotion::FinalIK::IKSolverVR::set_rootBone(RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::IKSolverVR>::get(),
                            "set_rootBone",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__VirtualBone>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void RootMotion::FinalIK::IKSolverVR::Write()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::IKSolverVR>::get(),
                            "Write",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::Vector3 RootMotion::FinalIK::IKSolverVR::GetPelvisOffset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::IKSolverVR>::get(),
                            "GetPelvisOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Vector3, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 RootMotion::FinalIK::IKSolverVR::IKSolverVR()  : RootMotion::FinalIK::IKSolver(THROW_UNLESS(::il2cpp_utils::New<IKSolverVR>())) {}
 void RootMotion::FinalIK::IKSolverVR::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::IKSolverVR>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
