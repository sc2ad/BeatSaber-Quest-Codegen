#pragma once
#include "RootMotion/FinalIK/zzzz__Grounder_impl.hpp"
#include "System/zzzz__ValueType_impl.hpp"
namespace {
#include "RootMotion/FinalIK/zzzz__GrounderQuadruped_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "RootMotion/FinalIK/zzzz__IK_def.hpp"
#include "RootMotion/FinalIK/zzzz__Grounding_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__Rigidbody_def.hpp"
#include "RootMotion/FinalIK/zzzz__Grounding_def.hpp"
#include "RootMotion/FinalIK/zzzz__IKSolver_def.hpp"
//  Writing Method size for method: ::RootMotion::FinalIK::____RootMotion__FinalIK__GrounderQuadruped__Foot._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::____RootMotion__FinalIK__GrounderQuadruped__Foot::*)(::RootMotion::FinalIK::IKSolver, ::UnityEngine::Transform)>(&::RootMotion::FinalIK::____RootMotion__FinalIK__GrounderQuadruped__Foot::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x11bf8e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::____RootMotion__FinalIK__GrounderQuadruped__Foot>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::IKSolver>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform>::get()}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "solver", ty: "::RootMotion::FinalIK::IKSolver", modifiers: "", def_value: Some("csnull") }, CppParam { name: "transform", ty: "::UnityEngine::Transform", modifiers: "", def_value: Some("csnull") }, CppParam { name: "rotation", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: Some("{}") }, CppParam { name: "leg", ty: "::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg", modifiers: "", def_value: Some("csnull") }]
constexpr ::RootMotion::FinalIK::____RootMotion__FinalIK__GrounderQuadruped__Foot::____RootMotion__FinalIK__GrounderQuadruped__Foot(::RootMotion::FinalIK::IKSolver solver, ::UnityEngine::Transform transform, ::UnityEngine::Quaternion rotation, ::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg leg) noexcept : ::bs_hook::ValueTypeWrapper() {this->solver = solver;
this->transform = transform;
this->rotation = rotation;
this->leg = leg;
}
constexpr void ::RootMotion::FinalIK::____RootMotion__FinalIK__GrounderQuadruped__Foot::__set_solver(::RootMotion::FinalIK::IKSolver value)  {
::cordl_internals::setInstanceField<::RootMotion::FinalIK::IKSolver, 0x0>(this->__instance, std::forward<::RootMotion::FinalIK::IKSolver>(value));
}
constexpr ::RootMotion::FinalIK::IKSolver ::RootMotion::FinalIK::____RootMotion__FinalIK__GrounderQuadruped__Foot::__get_solver() const {
return ::cordl_internals::getInstanceField<::RootMotion::FinalIK::IKSolver, 0x0>(this->__instance);
}
constexpr void ::RootMotion::FinalIK::____RootMotion__FinalIK__GrounderQuadruped__Foot::__set_transform(::UnityEngine::Transform value)  {
::cordl_internals::setInstanceField<::UnityEngine::Transform, 0x8>(this->__instance, std::forward<::UnityEngine::Transform>(value));
}
constexpr ::UnityEngine::Transform ::RootMotion::FinalIK::____RootMotion__FinalIK__GrounderQuadruped__Foot::__get_transform() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Transform, 0x8>(this->__instance);
}
constexpr void ::RootMotion::FinalIK::____RootMotion__FinalIK__GrounderQuadruped__Foot::__set_rotation(::UnityEngine::Quaternion value)  {
::cordl_internals::setInstanceField<::UnityEngine::Quaternion, 0x10>(this->__instance, std::forward<::UnityEngine::Quaternion>(value));
}
constexpr ::UnityEngine::Quaternion ::RootMotion::FinalIK::____RootMotion__FinalIK__GrounderQuadruped__Foot::__get_rotation() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Quaternion, 0x10>(this->__instance);
}
constexpr void ::RootMotion::FinalIK::____RootMotion__FinalIK__GrounderQuadruped__Foot::__set_leg(::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg value)  {
::cordl_internals::setInstanceField<::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg, 0x20>(this->__instance, std::forward<::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg>(value));
}
constexpr ::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg ::RootMotion::FinalIK::____RootMotion__FinalIK__GrounderQuadruped__Foot::__get_leg() const {
return ::cordl_internals::getInstanceField<::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg, 0x20>(this->__instance);
}
 void ::RootMotion::FinalIK::____RootMotion__FinalIK__GrounderQuadruped__Foot::_ctor(::RootMotion::FinalIK::IKSolver solver, ::UnityEngine::Transform transform)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::____RootMotion__FinalIK__GrounderQuadruped__Foot>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::IKSolver>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, solver, transform);
}
//  Writing Method size for method: ::RootMotion::FinalIK::GrounderQuadruped.OpenUserManual
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::GrounderQuadruped::*)()>(&::RootMotion::FinalIK::GrounderQuadruped::OpenUserManual)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x11bee28;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::RootMotion::FinalIK::GrounderQuadruped),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::GrounderQuadruped>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::GrounderQuadruped.OpenScriptReference
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::GrounderQuadruped::*)()>(&::RootMotion::FinalIK::GrounderQuadruped::OpenScriptReference)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x11bee6c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::RootMotion::FinalIK::GrounderQuadruped),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::GrounderQuadruped>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::GrounderQuadruped.ResetPosition
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::GrounderQuadruped::*)()>(&::RootMotion::FinalIK::GrounderQuadruped::ResetPosition)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x11beeb0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::RootMotion::FinalIK::GrounderQuadruped),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::GrounderQuadruped>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::GrounderQuadruped.IsReadyToInitiate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::RootMotion::FinalIK::GrounderQuadruped::*)()>(&::RootMotion::FinalIK::GrounderQuadruped::IsReadyToInitiate)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x11beed8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::GrounderQuadruped>::get(),
                            "IsReadyToInitiate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::GrounderQuadruped.IsReadyToInitiateLegs
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::RootMotion::FinalIK::GrounderQuadruped::*)(::ArrayW<::RootMotion::FinalIK::IK>)>(&::RootMotion::FinalIK::GrounderQuadruped::IsReadyToInitiateLegs)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x11befdc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::GrounderQuadruped>::get(),
                            "IsReadyToInitiateLegs",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::RootMotion::FinalIK::IK>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::GrounderQuadruped.OnDisable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::GrounderQuadruped::*)()>(&::RootMotion::FinalIK::GrounderQuadruped::OnDisable)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x11bf1c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::GrounderQuadruped>::get(),
                            "OnDisable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::GrounderQuadruped.Update
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::GrounderQuadruped::*)()>(&::RootMotion::FinalIK::GrounderQuadruped::Update)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x11bf224;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::GrounderQuadruped>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::GrounderQuadruped.Initiate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::GrounderQuadruped::*)()>(&::RootMotion::FinalIK::GrounderQuadruped::Initiate)> {
  constexpr static std::size_t size = 0x314;
  constexpr static std::size_t addrs = 0x11bf27c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::GrounderQuadruped>::get(),
                            "Initiate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::GrounderQuadruped.InitiateFeet
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::Transform> (::RootMotion::FinalIK::GrounderQuadruped::*)(::ArrayW<::RootMotion::FinalIK::IK>, ByRef<::ArrayW<::RootMotion::FinalIK::____RootMotion__FinalIK__GrounderQuadruped__Foot>>, int32_t)>(&::RootMotion::FinalIK::GrounderQuadruped::InitiateFeet)> {
  constexpr static std::size_t size = 0x354;
  constexpr static std::size_t addrs = 0x11bf590;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::GrounderQuadruped>::get(),
                            "InitiateFeet",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::RootMotion::FinalIK::IK>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<::RootMotion::FinalIK::____RootMotion__FinalIK__GrounderQuadruped__Foot>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::GrounderQuadruped.LateUpdate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::GrounderQuadruped::*)()>(&::RootMotion::FinalIK::GrounderQuadruped::LateUpdate)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x11bf918;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::GrounderQuadruped>::get(),
                            "LateUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::GrounderQuadruped.RootRotation
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::GrounderQuadruped::*)()>(&::RootMotion::FinalIK::GrounderQuadruped::RootRotation)> {
  constexpr static std::size_t size = 0x450;
  constexpr static std::size_t addrs = 0x11bf9a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::GrounderQuadruped>::get(),
                            "RootRotation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::GrounderQuadruped.OnSolverUpdate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::GrounderQuadruped::*)()>(&::RootMotion::FinalIK::GrounderQuadruped::OnSolverUpdate)> {
  constexpr static std::size_t size = 0x6c0;
  constexpr static std::size_t addrs = 0x11bfdf8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::GrounderQuadruped>::get(),
                            "OnSolverUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::GrounderQuadruped.UpdateForefeetRoot
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::GrounderQuadruped::*)()>(&::RootMotion::FinalIK::GrounderQuadruped::UpdateForefeetRoot)> {
  constexpr static std::size_t size = 0x2b8;
  constexpr static std::size_t addrs = 0x11c04b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::GrounderQuadruped>::get(),
                            "UpdateForefeetRoot",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::GrounderQuadruped.SetFootIK
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::GrounderQuadruped::*)(::RootMotion::FinalIK::____RootMotion__FinalIK__GrounderQuadruped__Foot, float_t)>(&::RootMotion::FinalIK::GrounderQuadruped::SetFootIK)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x11c0770;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::GrounderQuadruped>::get(),
                            "SetFootIK",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::____RootMotion__FinalIK__GrounderQuadruped__Foot>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::GrounderQuadruped.OnPostSolverUpdate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::GrounderQuadruped::*)()>(&::RootMotion::FinalIK::GrounderQuadruped::OnPostSolverUpdate)> {
  constexpr static std::size_t size = 0x2c8;
  constexpr static std::size_t addrs = 0x11c08a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::GrounderQuadruped>::get(),
                            "OnPostSolverUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::GrounderQuadruped.OnDestroy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::GrounderQuadruped::*)()>(&::RootMotion::FinalIK::GrounderQuadruped::OnDestroy)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x11c0b6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::GrounderQuadruped>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::GrounderQuadruped.DestroyLegs
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::GrounderQuadruped::*)(::ArrayW<::RootMotion::FinalIK::IK>)>(&::RootMotion::FinalIK::GrounderQuadruped::DestroyLegs)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x11c0b9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::GrounderQuadruped>::get(),
                            "DestroyLegs",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::RootMotion::FinalIK::IK>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::GrounderQuadruped._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::GrounderQuadruped::*)()>(&::RootMotion::FinalIK::GrounderQuadruped::_ctor)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x11c0d98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::GrounderQuadruped>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::RootMotion::FinalIK::GrounderQuadruped::__set_forelegSolver(::RootMotion::FinalIK::Grounding value)  {
::cordl_internals::setInstanceField<::RootMotion::FinalIK::Grounding, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::RootMotion::FinalIK::Grounding>(value));
}
constexpr ::RootMotion::FinalIK::Grounding ::RootMotion::FinalIK::GrounderQuadruped::__get_forelegSolver() const {
return ::cordl_internals::getInstanceField<::RootMotion::FinalIK::Grounding, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::RootMotion::FinalIK::GrounderQuadruped::__set_rootRotationWeight(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::RootMotion::FinalIK::GrounderQuadruped::__get_rootRotationWeight() const {
return ::cordl_internals::getInstanceField<float_t, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::RootMotion::FinalIK::GrounderQuadruped::__set_minRootRotation(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x4c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::RootMotion::FinalIK::GrounderQuadruped::__get_minRootRotation() const {
return ::cordl_internals::getInstanceField<float_t, 0x4c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::RootMotion::FinalIK::GrounderQuadruped::__set_maxRootRotation(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::RootMotion::FinalIK::GrounderQuadruped::__get_maxRootRotation() const {
return ::cordl_internals::getInstanceField<float_t, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::RootMotion::FinalIK::GrounderQuadruped::__set_rootRotationSpeed(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x54>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::RootMotion::FinalIK::GrounderQuadruped::__get_rootRotationSpeed() const {
return ::cordl_internals::getInstanceField<float_t, 0x54>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::RootMotion::FinalIK::GrounderQuadruped::__set_maxLegOffset(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::RootMotion::FinalIK::GrounderQuadruped::__get_maxLegOffset() const {
return ::cordl_internals::getInstanceField<float_t, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::RootMotion::FinalIK::GrounderQuadruped::__set_maxForeLegOffset(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x5c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::RootMotion::FinalIK::GrounderQuadruped::__get_maxForeLegOffset() const {
return ::cordl_internals::getInstanceField<float_t, 0x5c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::RootMotion::FinalIK::GrounderQuadruped::__set_maintainHeadRotationWeight(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x60>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::RootMotion::FinalIK::GrounderQuadruped::__get_maintainHeadRotationWeight() const {
return ::cordl_internals::getInstanceField<float_t, 0x60>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::RootMotion::FinalIK::GrounderQuadruped::__set_characterRoot(::UnityEngine::Transform value)  {
::cordl_internals::setInstanceField<::UnityEngine::Transform, 0x68>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Transform>(value));
}
constexpr ::UnityEngine::Transform ::RootMotion::FinalIK::GrounderQuadruped::__get_characterRoot() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Transform, 0x68>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::RootMotion::FinalIK::GrounderQuadruped::__set_pelvis(::UnityEngine::Transform value)  {
::cordl_internals::setInstanceField<::UnityEngine::Transform, 0x70>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Transform>(value));
}
constexpr ::UnityEngine::Transform ::RootMotion::FinalIK::GrounderQuadruped::__get_pelvis() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Transform, 0x70>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::RootMotion::FinalIK::GrounderQuadruped::__set_lastSpineBone(::UnityEngine::Transform value)  {
::cordl_internals::setInstanceField<::UnityEngine::Transform, 0x78>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Transform>(value));
}
constexpr ::UnityEngine::Transform ::RootMotion::FinalIK::GrounderQuadruped::__get_lastSpineBone() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Transform, 0x78>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::RootMotion::FinalIK::GrounderQuadruped::__set_head(::UnityEngine::Transform value)  {
::cordl_internals::setInstanceField<::UnityEngine::Transform, 0x80>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Transform>(value));
}
constexpr ::UnityEngine::Transform ::RootMotion::FinalIK::GrounderQuadruped::__get_head() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Transform, 0x80>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::RootMotion::FinalIK::GrounderQuadruped::__set_legs(::ArrayW<::RootMotion::FinalIK::IK> value)  {
::cordl_internals::setInstanceField<::ArrayW<::RootMotion::FinalIK::IK>, 0x88>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::RootMotion::FinalIK::IK>>(value));
}
constexpr ::ArrayW<::RootMotion::FinalIK::IK> ::RootMotion::FinalIK::GrounderQuadruped::__get_legs() const {
return ::cordl_internals::getInstanceField<::ArrayW<::RootMotion::FinalIK::IK>, 0x88>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::RootMotion::FinalIK::GrounderQuadruped::__set_forelegs(::ArrayW<::RootMotion::FinalIK::IK> value)  {
::cordl_internals::setInstanceField<::ArrayW<::RootMotion::FinalIK::IK>, 0x90>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::RootMotion::FinalIK::IK>>(value));
}
constexpr ::ArrayW<::RootMotion::FinalIK::IK> ::RootMotion::FinalIK::GrounderQuadruped::__get_forelegs() const {
return ::cordl_internals::getInstanceField<::ArrayW<::RootMotion::FinalIK::IK>, 0x90>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::RootMotion::FinalIK::GrounderQuadruped::__set_gravity(::UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0x98>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3 ::RootMotion::FinalIK::GrounderQuadruped::__get_gravity() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x98>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::RootMotion::FinalIK::GrounderQuadruped::__set_feet(::ArrayW<::RootMotion::FinalIK::____RootMotion__FinalIK__GrounderQuadruped__Foot> value)  {
::cordl_internals::setInstanceField<::ArrayW<::RootMotion::FinalIK::____RootMotion__FinalIK__GrounderQuadruped__Foot>, 0xa8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::RootMotion::FinalIK::____RootMotion__FinalIK__GrounderQuadruped__Foot>>(value));
}
constexpr ::ArrayW<::RootMotion::FinalIK::____RootMotion__FinalIK__GrounderQuadruped__Foot> ::RootMotion::FinalIK::GrounderQuadruped::__get_feet() const {
return ::cordl_internals::getInstanceField<::ArrayW<::RootMotion::FinalIK::____RootMotion__FinalIK__GrounderQuadruped__Foot>, 0xa8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::RootMotion::FinalIK::GrounderQuadruped::__set_animatedPelvisLocalPosition(::UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0xb0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3 ::RootMotion::FinalIK::GrounderQuadruped::__get_animatedPelvisLocalPosition() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0xb0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::RootMotion::FinalIK::GrounderQuadruped::__set_animatedPelvisLocalRotation(::UnityEngine::Quaternion value)  {
::cordl_internals::setInstanceField<::UnityEngine::Quaternion, 0xbc>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Quaternion>(value));
}
constexpr ::UnityEngine::Quaternion ::RootMotion::FinalIK::GrounderQuadruped::__get_animatedPelvisLocalRotation() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Quaternion, 0xbc>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::RootMotion::FinalIK::GrounderQuadruped::__set_animatedHeadLocalRotation(::UnityEngine::Quaternion value)  {
::cordl_internals::setInstanceField<::UnityEngine::Quaternion, 0xcc>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Quaternion>(value));
}
constexpr ::UnityEngine::Quaternion ::RootMotion::FinalIK::GrounderQuadruped::__get_animatedHeadLocalRotation() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Quaternion, 0xcc>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::RootMotion::FinalIK::GrounderQuadruped::__set_solvedPelvisLocalPosition(::UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0xdc>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3 ::RootMotion::FinalIK::GrounderQuadruped::__get_solvedPelvisLocalPosition() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0xdc>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::RootMotion::FinalIK::GrounderQuadruped::__set_solvedPelvisLocalRotation(::UnityEngine::Quaternion value)  {
::cordl_internals::setInstanceField<::UnityEngine::Quaternion, 0xe8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Quaternion>(value));
}
constexpr ::UnityEngine::Quaternion ::RootMotion::FinalIK::GrounderQuadruped::__get_solvedPelvisLocalRotation() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Quaternion, 0xe8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::RootMotion::FinalIK::GrounderQuadruped::__set_solvedHeadLocalRotation(::UnityEngine::Quaternion value)  {
::cordl_internals::setInstanceField<::UnityEngine::Quaternion, 0xf8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Quaternion>(value));
}
constexpr ::UnityEngine::Quaternion ::RootMotion::FinalIK::GrounderQuadruped::__get_solvedHeadLocalRotation() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Quaternion, 0xf8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::RootMotion::FinalIK::GrounderQuadruped::__set_solvedFeet(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x108>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::RootMotion::FinalIK::GrounderQuadruped::__get_solvedFeet() const {
return ::cordl_internals::getInstanceField<int32_t, 0x108>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::RootMotion::FinalIK::GrounderQuadruped::__set_solved(bool value)  {
::cordl_internals::setInstanceField<bool, 0x10c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::RootMotion::FinalIK::GrounderQuadruped::__get_solved() const {
return ::cordl_internals::getInstanceField<bool, 0x10c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::RootMotion::FinalIK::GrounderQuadruped::__set_angle(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x110>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::RootMotion::FinalIK::GrounderQuadruped::__get_angle() const {
return ::cordl_internals::getInstanceField<float_t, 0x110>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::RootMotion::FinalIK::GrounderQuadruped::__set_forefeetRoot(::UnityEngine::Transform value)  {
::cordl_internals::setInstanceField<::UnityEngine::Transform, 0x118>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Transform>(value));
}
constexpr ::UnityEngine::Transform ::RootMotion::FinalIK::GrounderQuadruped::__get_forefeetRoot() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Transform, 0x118>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::RootMotion::FinalIK::GrounderQuadruped::__set_headRotation(::UnityEngine::Quaternion value)  {
::cordl_internals::setInstanceField<::UnityEngine::Quaternion, 0x120>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Quaternion>(value));
}
constexpr ::UnityEngine::Quaternion ::RootMotion::FinalIK::GrounderQuadruped::__get_headRotation() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Quaternion, 0x120>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::RootMotion::FinalIK::GrounderQuadruped::__set_lastWeight(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x130>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::RootMotion::FinalIK::GrounderQuadruped::__get_lastWeight() const {
return ::cordl_internals::getInstanceField<float_t, 0x130>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::RootMotion::FinalIK::GrounderQuadruped::__set_characterRootRigidbody(::UnityEngine::Rigidbody value)  {
::cordl_internals::setInstanceField<::UnityEngine::Rigidbody, 0x138>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Rigidbody>(value));
}
constexpr ::UnityEngine::Rigidbody ::RootMotion::FinalIK::GrounderQuadruped::__get_characterRootRigidbody() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Rigidbody, 0x138>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void ::RootMotion::FinalIK::GrounderQuadruped::OpenUserManual()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::GrounderQuadruped>::get(),
                            "OpenUserManual",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::RootMotion::FinalIK::GrounderQuadruped::OpenScriptReference()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::GrounderQuadruped>::get(),
                            "OpenScriptReference",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::RootMotion::FinalIK::GrounderQuadruped::ResetPosition()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::GrounderQuadruped>::get(),
                            "ResetPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::RootMotion::FinalIK::GrounderQuadruped::IsReadyToInitiate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::GrounderQuadruped>::get(),
                            "IsReadyToInitiate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::RootMotion::FinalIK::GrounderQuadruped::IsReadyToInitiateLegs(::ArrayW<::RootMotion::FinalIK::IK> ikComponents)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::GrounderQuadruped>::get(),
                            "IsReadyToInitiateLegs",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::RootMotion::FinalIK::IK>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, ikComponents);
}
 void ::RootMotion::FinalIK::GrounderQuadruped::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::GrounderQuadruped>::get(),
                            "OnDisable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::RootMotion::FinalIK::GrounderQuadruped::Update()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::GrounderQuadruped>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::RootMotion::FinalIK::GrounderQuadruped::Initiate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::GrounderQuadruped>::get(),
                            "Initiate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::ArrayW<::UnityEngine::Transform> ::RootMotion::FinalIK::GrounderQuadruped::InitiateFeet(::ArrayW<::RootMotion::FinalIK::IK> ikComponents, ByRef<::ArrayW<::RootMotion::FinalIK::____RootMotion__FinalIK__GrounderQuadruped__Foot>> f, int32_t indexOffset)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::GrounderQuadruped>::get(),
                            "InitiateFeet",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::RootMotion::FinalIK::IK>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<::RootMotion::FinalIK::____RootMotion__FinalIK__GrounderQuadruped__Foot>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Transform>, false>(const_cast<void*>(instance), ___internal_method, ikComponents, f, indexOffset);
}
 void ::RootMotion::FinalIK::GrounderQuadruped::LateUpdate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::GrounderQuadruped>::get(),
                            "LateUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::RootMotion::FinalIK::GrounderQuadruped::RootRotation()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::GrounderQuadruped>::get(),
                            "RootRotation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::RootMotion::FinalIK::GrounderQuadruped::OnSolverUpdate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::GrounderQuadruped>::get(),
                            "OnSolverUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::RootMotion::FinalIK::GrounderQuadruped::UpdateForefeetRoot()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::GrounderQuadruped>::get(),
                            "UpdateForefeetRoot",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::RootMotion::FinalIK::GrounderQuadruped::SetFootIK(::RootMotion::FinalIK::____RootMotion__FinalIK__GrounderQuadruped__Foot foot, float_t maxOffset)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::GrounderQuadruped>::get(),
                            "SetFootIK",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::____RootMotion__FinalIK__GrounderQuadruped__Foot>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, foot, maxOffset);
}
 void ::RootMotion::FinalIK::GrounderQuadruped::OnPostSolverUpdate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::GrounderQuadruped>::get(),
                            "OnPostSolverUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::RootMotion::FinalIK::GrounderQuadruped::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::GrounderQuadruped>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::RootMotion::FinalIK::GrounderQuadruped::DestroyLegs(::ArrayW<::RootMotion::FinalIK::IK> ikComponents)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::GrounderQuadruped>::get(),
                            "DestroyLegs",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::RootMotion::FinalIK::IK>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, ikComponents);
}
// Ctor Parameters []
 ::RootMotion::FinalIK::GrounderQuadruped::GrounderQuadruped()  : ::RootMotion::FinalIK::Grounder(THROW_UNLESS(::il2cpp_utils::New<GrounderQuadruped>())) {}
 void ::RootMotion::FinalIK::GrounderQuadruped::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::GrounderQuadruped>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
