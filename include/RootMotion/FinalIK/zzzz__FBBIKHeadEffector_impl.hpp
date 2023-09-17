#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
namespace {
#include "RootMotion/FinalIK/zzzz__FBBIKHeadEffector_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "RootMotion/FinalIK/zzzz__FullBodyBipedIK_def.hpp"
#include "RootMotion/FinalIK/zzzz__IKSolver_def.hpp"
#include "RootMotion/FinalIK/zzzz__IKEffector_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::RootMotion::FinalIK::____RootMotion__FinalIK__FBBIKHeadEffector__BendBone._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::____RootMotion__FinalIK__FBBIKHeadEffector__BendBone::*)()>(&::RootMotion::FinalIK::____RootMotion__FinalIK__FBBIKHeadEffector__BendBone::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x11ca7b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::____RootMotion__FinalIK__FBBIKHeadEffector__BendBone>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::____RootMotion__FinalIK__FBBIKHeadEffector__BendBone._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::____RootMotion__FinalIK__FBBIKHeadEffector__BendBone::*)(::UnityEngine::Transform, float_t)>(&::RootMotion::FinalIK::____RootMotion__FinalIK__FBBIKHeadEffector__BendBone::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x11ca814;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::____RootMotion__FinalIK__FBBIKHeadEffector__BendBone>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::____RootMotion__FinalIK__FBBIKHeadEffector__BendBone.StoreDefaultLocalState
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::____RootMotion__FinalIK__FBBIKHeadEffector__BendBone::*)()>(&::RootMotion::FinalIK::____RootMotion__FinalIK__FBBIKHeadEffector__BendBone::StoreDefaultLocalState)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x11c7f18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::____RootMotion__FinalIK__FBBIKHeadEffector__BendBone>::get(),
                            "StoreDefaultLocalState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::____RootMotion__FinalIK__FBBIKHeadEffector__BendBone.FixTransforms
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::____RootMotion__FinalIK__FBBIKHeadEffector__BendBone::*)()>(&::RootMotion::FinalIK::____RootMotion__FinalIK__FBBIKHeadEffector__BendBone::FixTransforms)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x11c82e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::____RootMotion__FinalIK__FBBIKHeadEffector__BendBone>::get(),
                            "FixTransforms",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::RootMotion::FinalIK::____RootMotion__FinalIK__FBBIKHeadEffector__BendBone::__set_transform(::UnityEngine::Transform value)  {
::cordl_internals::setInstanceField<::UnityEngine::Transform, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Transform>(value));
}
constexpr ::UnityEngine::Transform ::RootMotion::FinalIK::____RootMotion__FinalIK__FBBIKHeadEffector__BendBone::__get_transform() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Transform, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::RootMotion::FinalIK::____RootMotion__FinalIK__FBBIKHeadEffector__BendBone::__set_weight(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::RootMotion::FinalIK::____RootMotion__FinalIK__FBBIKHeadEffector__BendBone::__get_weight() const {
return ::cordl_internals::getInstanceField<float_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::RootMotion::FinalIK::____RootMotion__FinalIK__FBBIKHeadEffector__BendBone::__set_defaultLocalRotation(::UnityEngine::Quaternion value)  {
::cordl_internals::setInstanceField<::UnityEngine::Quaternion, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Quaternion>(value));
}
constexpr ::UnityEngine::Quaternion ::RootMotion::FinalIK::____RootMotion__FinalIK__FBBIKHeadEffector__BendBone::__get_defaultLocalRotation() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Quaternion, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 ::RootMotion::FinalIK::____RootMotion__FinalIK__FBBIKHeadEffector__BendBone::____RootMotion__FinalIK__FBBIKHeadEffector__BendBone()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<____RootMotion__FinalIK__FBBIKHeadEffector__BendBone>())) {}
 void ::RootMotion::FinalIK::____RootMotion__FinalIK__FBBIKHeadEffector__BendBone::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::____RootMotion__FinalIK__FBBIKHeadEffector__BendBone>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters [CppParam { name: "transform", ty: "::UnityEngine::Transform", modifiers: "", def_value: None }, CppParam { name: "weight", ty: "float_t", modifiers: "", def_value: None }]
 ::RootMotion::FinalIK::____RootMotion__FinalIK__FBBIKHeadEffector__BendBone::____RootMotion__FinalIK__FBBIKHeadEffector__BendBone(::UnityEngine::Transform transform, float_t weight)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<____RootMotion__FinalIK__FBBIKHeadEffector__BendBone>(transform, weight))) {}
 void ::RootMotion::FinalIK::____RootMotion__FinalIK__FBBIKHeadEffector__BendBone::_ctor(::UnityEngine::Transform transform, float_t weight)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::____RootMotion__FinalIK__FBBIKHeadEffector__BendBone>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, transform, weight);
}
 void ::RootMotion::FinalIK::____RootMotion__FinalIK__FBBIKHeadEffector__BendBone::StoreDefaultLocalState()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::____RootMotion__FinalIK__FBBIKHeadEffector__BendBone>::get(),
                            "StoreDefaultLocalState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::RootMotion::FinalIK::____RootMotion__FinalIK__FBBIKHeadEffector__BendBone::FixTransforms()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::____RootMotion__FinalIK__FBBIKHeadEffector__BendBone>::get(),
                            "FixTransforms",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: ::RootMotion::FinalIK::FBBIKHeadEffector.Start
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::FBBIKHeadEffector::*)()>(&::RootMotion::FinalIK::FBBIKHeadEffector::Start)> {
  constexpr static std::size_t size = 0x3ec;
  constexpr static std::size_t addrs = 0x11c76b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::FBBIKHeadEffector>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::FBBIKHeadEffector.OnStoreDefaultLocalState
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::FBBIKHeadEffector::*)()>(&::RootMotion::FinalIK::FBBIKHeadEffector::OnStoreDefaultLocalState)> {
  constexpr static std::size_t size = 0x474;
  constexpr static std::size_t addrs = 0x11c7aa4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::FBBIKHeadEffector>::get(),
                            "OnStoreDefaultLocalState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::FBBIKHeadEffector.OnFixTransforms
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::FBBIKHeadEffector::*)()>(&::RootMotion::FinalIK::FBBIKHeadEffector::OnFixTransforms)> {
  constexpr static std::size_t size = 0x3a4;
  constexpr static std::size_t addrs = 0x11c7f44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::FBBIKHeadEffector>::get(),
                            "OnFixTransforms",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::FBBIKHeadEffector.OnPreRead
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::FBBIKHeadEffector::*)()>(&::RootMotion::FinalIK::FBBIKHeadEffector::OnPreRead)> {
  constexpr static std::size_t size = 0x640;
  constexpr static std::size_t addrs = 0x11c8310;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::FBBIKHeadEffector>::get(),
                            "OnPreRead",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::FBBIKHeadEffector.SpineBend
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::FBBIKHeadEffector::*)()>(&::RootMotion::FinalIK::FBBIKHeadEffector::SpineBend)> {
  constexpr static std::size_t size = 0x3f8;
  constexpr static std::size_t addrs = 0x11c8c0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::FBBIKHeadEffector>::get(),
                            "SpineBend",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::FBBIKHeadEffector.CCDPass
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::FBBIKHeadEffector::*)()>(&::RootMotion::FinalIK::FBBIKHeadEffector::CCDPass)> {
  constexpr static std::size_t size = 0x410;
  constexpr static std::size_t addrs = 0x11c9004;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::FBBIKHeadEffector>::get(),
                            "CCDPass",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::FBBIKHeadEffector.Iterate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::FBBIKHeadEffector::*)(int32_t)>(&::RootMotion::FinalIK::FBBIKHeadEffector::Iterate)> {
  constexpr static std::size_t size = 0x798;
  constexpr static std::size_t addrs = 0x11c9414;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::FBBIKHeadEffector>::get(),
                            "Iterate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::FBBIKHeadEffector.OnPostUpdate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::FBBIKHeadEffector::*)()>(&::RootMotion::FinalIK::FBBIKHeadEffector::OnPostUpdate)> {
  constexpr static std::size_t size = 0x23c;
  constexpr static std::size_t addrs = 0x11c9d94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::FBBIKHeadEffector>::get(),
                            "OnPostUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::FBBIKHeadEffector.ChestDirection
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::FBBIKHeadEffector::*)()>(&::RootMotion::FinalIK::FBBIKHeadEffector::ChestDirection)> {
  constexpr static std::size_t size = 0x2bc;
  constexpr static std::size_t addrs = 0x11c8950;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::FBBIKHeadEffector>::get(),
                            "ChestDirection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::FBBIKHeadEffector.PostStretching
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::FBBIKHeadEffector::*)()>(&::RootMotion::FinalIK::FBBIKHeadEffector::PostStretching)> {
  constexpr static std::size_t size = 0x304;
  constexpr static std::size_t addrs = 0x11c9fd0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::FBBIKHeadEffector>::get(),
                            "PostStretching",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::FBBIKHeadEffector.LerpSolverPosition
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::FBBIKHeadEffector::*)(::RootMotion::FinalIK::IKEffector, ::UnityEngine::Vector3, float_t, ::UnityEngine::Vector3)>(&::RootMotion::FinalIK::FBBIKHeadEffector::LerpSolverPosition)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x11c9cac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::FBBIKHeadEffector>::get(),
                            "LerpSolverPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::IKEffector>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::FBBIKHeadEffector.Solve
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::FBBIKHeadEffector::*)(ByRef<::UnityEngine::Vector3>, ByRef<::UnityEngine::Vector3>, float_t)>(&::RootMotion::FinalIK::FBBIKHeadEffector::Solve)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x11c9bac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::FBBIKHeadEffector>::get(),
                            "Solve",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::FBBIKHeadEffector.OnDestroy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::FBBIKHeadEffector::*)()>(&::RootMotion::FinalIK::FBBIKHeadEffector::OnDestroy)> {
  constexpr static std::size_t size = 0x338;
  constexpr static std::size_t addrs = 0x11ca2d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::FBBIKHeadEffector>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::FBBIKHeadEffector._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::FBBIKHeadEffector::*)()>(&::RootMotion::FinalIK::FBBIKHeadEffector::_ctor)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x11ca60c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::FBBIKHeadEffector>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::RootMotion::FinalIK::FBBIKHeadEffector::__set_ik(::RootMotion::FinalIK::FullBodyBipedIK value)  {
::cordl_internals::setInstanceField<::RootMotion::FinalIK::FullBodyBipedIK, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::RootMotion::FinalIK::FullBodyBipedIK>(value));
}
constexpr ::RootMotion::FinalIK::FullBodyBipedIK ::RootMotion::FinalIK::FBBIKHeadEffector::__get_ik() const {
return ::cordl_internals::getInstanceField<::RootMotion::FinalIK::FullBodyBipedIK, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::RootMotion::FinalIK::FBBIKHeadEffector::__set_positionWeight(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::RootMotion::FinalIK::FBBIKHeadEffector::__get_positionWeight() const {
return ::cordl_internals::getInstanceField<float_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::RootMotion::FinalIK::FBBIKHeadEffector::__set_bodyWeight(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x24>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::RootMotion::FinalIK::FBBIKHeadEffector::__get_bodyWeight() const {
return ::cordl_internals::getInstanceField<float_t, 0x24>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::RootMotion::FinalIK::FBBIKHeadEffector::__set_thighWeight(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::RootMotion::FinalIK::FBBIKHeadEffector::__get_thighWeight() const {
return ::cordl_internals::getInstanceField<float_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::RootMotion::FinalIK::FBBIKHeadEffector::__set_handsPullBody(bool value)  {
::cordl_internals::setInstanceField<bool, 0x2c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::RootMotion::FinalIK::FBBIKHeadEffector::__get_handsPullBody() const {
return ::cordl_internals::getInstanceField<bool, 0x2c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::RootMotion::FinalIK::FBBIKHeadEffector::__set_rotationWeight(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::RootMotion::FinalIK::FBBIKHeadEffector::__get_rotationWeight() const {
return ::cordl_internals::getInstanceField<float_t, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::RootMotion::FinalIK::FBBIKHeadEffector::__set_bodyClampWeight(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x34>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::RootMotion::FinalIK::FBBIKHeadEffector::__get_bodyClampWeight() const {
return ::cordl_internals::getInstanceField<float_t, 0x34>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::RootMotion::FinalIK::FBBIKHeadEffector::__set_headClampWeight(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::RootMotion::FinalIK::FBBIKHeadEffector::__get_headClampWeight() const {
return ::cordl_internals::getInstanceField<float_t, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::RootMotion::FinalIK::FBBIKHeadEffector::__set_bendWeight(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x3c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::RootMotion::FinalIK::FBBIKHeadEffector::__get_bendWeight() const {
return ::cordl_internals::getInstanceField<float_t, 0x3c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::RootMotion::FinalIK::FBBIKHeadEffector::__set_bendBones(::ArrayW<::RootMotion::FinalIK::____RootMotion__FinalIK__FBBIKHeadEffector__BendBone> value)  {
::cordl_internals::setInstanceField<::ArrayW<::RootMotion::FinalIK::____RootMotion__FinalIK__FBBIKHeadEffector__BendBone>, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::RootMotion::FinalIK::____RootMotion__FinalIK__FBBIKHeadEffector__BendBone>>(value));
}
constexpr ::ArrayW<::RootMotion::FinalIK::____RootMotion__FinalIK__FBBIKHeadEffector__BendBone> ::RootMotion::FinalIK::FBBIKHeadEffector::__get_bendBones() const {
return ::cordl_internals::getInstanceField<::ArrayW<::RootMotion::FinalIK::____RootMotion__FinalIK__FBBIKHeadEffector__BendBone>, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::RootMotion::FinalIK::FBBIKHeadEffector::__set_CCDWeight(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::RootMotion::FinalIK::FBBIKHeadEffector::__get_CCDWeight() const {
return ::cordl_internals::getInstanceField<float_t, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::RootMotion::FinalIK::FBBIKHeadEffector::__set_roll(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x4c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::RootMotion::FinalIK::FBBIKHeadEffector::__get_roll() const {
return ::cordl_internals::getInstanceField<float_t, 0x4c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::RootMotion::FinalIK::FBBIKHeadEffector::__set_damper(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::RootMotion::FinalIK::FBBIKHeadEffector::__get_damper() const {
return ::cordl_internals::getInstanceField<float_t, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::RootMotion::FinalIK::FBBIKHeadEffector::__set_CCDBones(::ArrayW<::UnityEngine::Transform> value)  {
::cordl_internals::setInstanceField<::ArrayW<::UnityEngine::Transform>, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::UnityEngine::Transform>>(value));
}
constexpr ::ArrayW<::UnityEngine::Transform> ::RootMotion::FinalIK::FBBIKHeadEffector::__get_CCDBones() const {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::Transform>, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::RootMotion::FinalIK::FBBIKHeadEffector::__set_postStretchWeight(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x60>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::RootMotion::FinalIK::FBBIKHeadEffector::__get_postStretchWeight() const {
return ::cordl_internals::getInstanceField<float_t, 0x60>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::RootMotion::FinalIK::FBBIKHeadEffector::__set_maxStretch(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x64>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::RootMotion::FinalIK::FBBIKHeadEffector::__get_maxStretch() const {
return ::cordl_internals::getInstanceField<float_t, 0x64>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::RootMotion::FinalIK::FBBIKHeadEffector::__set_stretchDamper(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x68>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::RootMotion::FinalIK::FBBIKHeadEffector::__get_stretchDamper() const {
return ::cordl_internals::getInstanceField<float_t, 0x68>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::RootMotion::FinalIK::FBBIKHeadEffector::__set_fixHead(bool value)  {
::cordl_internals::setInstanceField<bool, 0x6c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::RootMotion::FinalIK::FBBIKHeadEffector::__get_fixHead() const {
return ::cordl_internals::getInstanceField<bool, 0x6c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::RootMotion::FinalIK::FBBIKHeadEffector::__set_stretchBones(::ArrayW<::UnityEngine::Transform> value)  {
::cordl_internals::setInstanceField<::ArrayW<::UnityEngine::Transform>, 0x70>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::UnityEngine::Transform>>(value));
}
constexpr ::ArrayW<::UnityEngine::Transform> ::RootMotion::FinalIK::FBBIKHeadEffector::__get_stretchBones() const {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::Transform>, 0x70>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::RootMotion::FinalIK::FBBIKHeadEffector::__set_chestDirection(::UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0x78>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3 ::RootMotion::FinalIK::FBBIKHeadEffector::__get_chestDirection() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x78>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::RootMotion::FinalIK::FBBIKHeadEffector::__set_chestDirectionWeight(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x84>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::RootMotion::FinalIK::FBBIKHeadEffector::__get_chestDirectionWeight() const {
return ::cordl_internals::getInstanceField<float_t, 0x84>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::RootMotion::FinalIK::FBBIKHeadEffector::__set_chestBones(::ArrayW<::UnityEngine::Transform> value)  {
::cordl_internals::setInstanceField<::ArrayW<::UnityEngine::Transform>, 0x88>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::UnityEngine::Transform>>(value));
}
constexpr ::ArrayW<::UnityEngine::Transform> ::RootMotion::FinalIK::FBBIKHeadEffector::__get_chestBones() const {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::Transform>, 0x88>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::RootMotion::FinalIK::FBBIKHeadEffector::__set_OnPostHeadEffectorFK(::RootMotion::FinalIK::____RootMotion__FinalIK__IKSolver__UpdateDelegate value)  {
::cordl_internals::setInstanceField<::RootMotion::FinalIK::____RootMotion__FinalIK__IKSolver__UpdateDelegate, 0x90>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::RootMotion::FinalIK::____RootMotion__FinalIK__IKSolver__UpdateDelegate>(value));
}
constexpr ::RootMotion::FinalIK::____RootMotion__FinalIK__IKSolver__UpdateDelegate ::RootMotion::FinalIK::FBBIKHeadEffector::__get_OnPostHeadEffectorFK() const {
return ::cordl_internals::getInstanceField<::RootMotion::FinalIK::____RootMotion__FinalIK__IKSolver__UpdateDelegate, 0x90>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::RootMotion::FinalIK::FBBIKHeadEffector::__set_offset(::UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0x98>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3 ::RootMotion::FinalIK::FBBIKHeadEffector::__get_offset() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x98>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::RootMotion::FinalIK::FBBIKHeadEffector::__set_headToBody(::UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0xa4>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3 ::RootMotion::FinalIK::FBBIKHeadEffector::__get_headToBody() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0xa4>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::RootMotion::FinalIK::FBBIKHeadEffector::__set_shoulderCenterToHead(::UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0xb0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3 ::RootMotion::FinalIK::FBBIKHeadEffector::__get_shoulderCenterToHead() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0xb0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::RootMotion::FinalIK::FBBIKHeadEffector::__set_headToLeftThigh(::UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0xbc>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3 ::RootMotion::FinalIK::FBBIKHeadEffector::__get_headToLeftThigh() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0xbc>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::RootMotion::FinalIK::FBBIKHeadEffector::__set_headToRightThigh(::UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0xc8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3 ::RootMotion::FinalIK::FBBIKHeadEffector::__get_headToRightThigh() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0xc8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::RootMotion::FinalIK::FBBIKHeadEffector::__set_leftShoulderPos(::UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0xd4>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3 ::RootMotion::FinalIK::FBBIKHeadEffector::__get_leftShoulderPos() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0xd4>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::RootMotion::FinalIK::FBBIKHeadEffector::__set_rightShoulderPos(::UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0xe0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3 ::RootMotion::FinalIK::FBBIKHeadEffector::__get_rightShoulderPos() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0xe0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::RootMotion::FinalIK::FBBIKHeadEffector::__set_shoulderDist(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0xec>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::RootMotion::FinalIK::FBBIKHeadEffector::__get_shoulderDist() const {
return ::cordl_internals::getInstanceField<float_t, 0xec>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::RootMotion::FinalIK::FBBIKHeadEffector::__set_leftShoulderDist(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0xf0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::RootMotion::FinalIK::FBBIKHeadEffector::__get_leftShoulderDist() const {
return ::cordl_internals::getInstanceField<float_t, 0xf0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::RootMotion::FinalIK::FBBIKHeadEffector::__set_rightShoulderDist(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0xf4>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::RootMotion::FinalIK::FBBIKHeadEffector::__get_rightShoulderDist() const {
return ::cordl_internals::getInstanceField<float_t, 0xf4>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::RootMotion::FinalIK::FBBIKHeadEffector::__set_chestRotation(::UnityEngine::Quaternion value)  {
::cordl_internals::setInstanceField<::UnityEngine::Quaternion, 0xf8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Quaternion>(value));
}
constexpr ::UnityEngine::Quaternion ::RootMotion::FinalIK::FBBIKHeadEffector::__get_chestRotation() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Quaternion, 0xf8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::RootMotion::FinalIK::FBBIKHeadEffector::__set_headRotationRelativeToRoot(::UnityEngine::Quaternion value)  {
::cordl_internals::setInstanceField<::UnityEngine::Quaternion, 0x108>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Quaternion>(value));
}
constexpr ::UnityEngine::Quaternion ::RootMotion::FinalIK::FBBIKHeadEffector::__get_headRotationRelativeToRoot() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Quaternion, 0x108>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::RootMotion::FinalIK::FBBIKHeadEffector::__set_ccdDefaultLocalRotations(::ArrayW<::UnityEngine::Quaternion> value)  {
::cordl_internals::setInstanceField<::ArrayW<::UnityEngine::Quaternion>, 0x118>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::UnityEngine::Quaternion>>(value));
}
constexpr ::ArrayW<::UnityEngine::Quaternion> ::RootMotion::FinalIK::FBBIKHeadEffector::__get_ccdDefaultLocalRotations() const {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::Quaternion>, 0x118>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::RootMotion::FinalIK::FBBIKHeadEffector::__set_headLocalPosition(::UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0x120>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3 ::RootMotion::FinalIK::FBBIKHeadEffector::__get_headLocalPosition() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x120>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::RootMotion::FinalIK::FBBIKHeadEffector::__set_headLocalRotation(::UnityEngine::Quaternion value)  {
::cordl_internals::setInstanceField<::UnityEngine::Quaternion, 0x12c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Quaternion>(value));
}
constexpr ::UnityEngine::Quaternion ::RootMotion::FinalIK::FBBIKHeadEffector::__get_headLocalRotation() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Quaternion, 0x12c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::RootMotion::FinalIK::FBBIKHeadEffector::__set_stretchLocalPositions(::ArrayW<::UnityEngine::Vector3> value)  {
::cordl_internals::setInstanceField<::ArrayW<::UnityEngine::Vector3>, 0x140>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::UnityEngine::Vector3>>(value));
}
constexpr ::ArrayW<::UnityEngine::Vector3> ::RootMotion::FinalIK::FBBIKHeadEffector::__get_stretchLocalPositions() const {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::Vector3>, 0x140>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::RootMotion::FinalIK::FBBIKHeadEffector::__set_stretchLocalRotations(::ArrayW<::UnityEngine::Quaternion> value)  {
::cordl_internals::setInstanceField<::ArrayW<::UnityEngine::Quaternion>, 0x148>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::UnityEngine::Quaternion>>(value));
}
constexpr ::ArrayW<::UnityEngine::Quaternion> ::RootMotion::FinalIK::FBBIKHeadEffector::__get_stretchLocalRotations() const {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::Quaternion>, 0x148>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::RootMotion::FinalIK::FBBIKHeadEffector::__set_chestLocalPositions(::ArrayW<::UnityEngine::Vector3> value)  {
::cordl_internals::setInstanceField<::ArrayW<::UnityEngine::Vector3>, 0x150>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::UnityEngine::Vector3>>(value));
}
constexpr ::ArrayW<::UnityEngine::Vector3> ::RootMotion::FinalIK::FBBIKHeadEffector::__get_chestLocalPositions() const {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::Vector3>, 0x150>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::RootMotion::FinalIK::FBBIKHeadEffector::__set_chestLocalRotations(::ArrayW<::UnityEngine::Quaternion> value)  {
::cordl_internals::setInstanceField<::ArrayW<::UnityEngine::Quaternion>, 0x158>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::UnityEngine::Quaternion>>(value));
}
constexpr ::ArrayW<::UnityEngine::Quaternion> ::RootMotion::FinalIK::FBBIKHeadEffector::__get_chestLocalRotations() const {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::Quaternion>, 0x158>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::RootMotion::FinalIK::FBBIKHeadEffector::__set_bendBonesCount(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x160>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::RootMotion::FinalIK::FBBIKHeadEffector::__get_bendBonesCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x160>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::RootMotion::FinalIK::FBBIKHeadEffector::__set_ccdBonesCount(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x164>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::RootMotion::FinalIK::FBBIKHeadEffector::__get_ccdBonesCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x164>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::RootMotion::FinalIK::FBBIKHeadEffector::__set_stretchBonesCount(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x168>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::RootMotion::FinalIK::FBBIKHeadEffector::__get_stretchBonesCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x168>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::RootMotion::FinalIK::FBBIKHeadEffector::__set_chestBonesCount(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x16c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::RootMotion::FinalIK::FBBIKHeadEffector::__get_chestBonesCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x16c>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void ::RootMotion::FinalIK::FBBIKHeadEffector::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::FBBIKHeadEffector>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::RootMotion::FinalIK::FBBIKHeadEffector::OnStoreDefaultLocalState()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::FBBIKHeadEffector>::get(),
                            "OnStoreDefaultLocalState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::RootMotion::FinalIK::FBBIKHeadEffector::OnFixTransforms()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::FBBIKHeadEffector>::get(),
                            "OnFixTransforms",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::RootMotion::FinalIK::FBBIKHeadEffector::OnPreRead()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::FBBIKHeadEffector>::get(),
                            "OnPreRead",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::RootMotion::FinalIK::FBBIKHeadEffector::SpineBend()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::FBBIKHeadEffector>::get(),
                            "SpineBend",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::RootMotion::FinalIK::FBBIKHeadEffector::CCDPass()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::FBBIKHeadEffector>::get(),
                            "CCDPass",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::RootMotion::FinalIK::FBBIKHeadEffector::Iterate(int32_t iteration)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::FBBIKHeadEffector>::get(),
                            "Iterate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, iteration);
}
 void ::RootMotion::FinalIK::FBBIKHeadEffector::OnPostUpdate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::FBBIKHeadEffector>::get(),
                            "OnPostUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::RootMotion::FinalIK::FBBIKHeadEffector::ChestDirection()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::FBBIKHeadEffector>::get(),
                            "ChestDirection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::RootMotion::FinalIK::FBBIKHeadEffector::PostStretching()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::FBBIKHeadEffector>::get(),
                            "PostStretching",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::RootMotion::FinalIK::FBBIKHeadEffector::LerpSolverPosition(::RootMotion::FinalIK::IKEffector effector, ::UnityEngine::Vector3 position, float_t weight, ::UnityEngine::Vector3 offset)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::FBBIKHeadEffector>::get(),
                            "LerpSolverPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::IKEffector>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, effector, position, weight, offset);
}
 void ::RootMotion::FinalIK::FBBIKHeadEffector::Solve(ByRef<::UnityEngine::Vector3> pos1, ByRef<::UnityEngine::Vector3> pos2, float_t nominalDistance)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::FBBIKHeadEffector>::get(),
                            "Solve",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, pos1, pos2, nominalDistance);
}
 void ::RootMotion::FinalIK::FBBIKHeadEffector::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::FBBIKHeadEffector>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 ::RootMotion::FinalIK::FBBIKHeadEffector::FBBIKHeadEffector()  : ::UnityEngine::MonoBehaviour(THROW_UNLESS(::il2cpp_utils::New<FBBIKHeadEffector>())) {}
 void ::RootMotion::FinalIK::FBBIKHeadEffector::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::FBBIKHeadEffector>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
