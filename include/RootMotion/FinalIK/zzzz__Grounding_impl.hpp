#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "RootMotion/FinalIK/zzzz__Grounding_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__RaycastHit_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Quality::____RootMotion__FinalIK__Grounding__Quality(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Quality::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Quality::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Quality  ::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Quality::Fastest{0};
constexpr ::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Quality  ::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Quality::Simple{1};
constexpr ::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Quality  ::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Quality::Best{2};
//  Writing Method size for method: ::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg.get_isGrounded
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg::*)()>(&::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg::get_isGrounded)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x11c2f10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg>::get(),
                            "get_isGrounded",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg.set_isGrounded
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg::*)(bool)>(&::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg::set_isGrounded)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x11c2f18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg>::get(),
                            "set_isGrounded",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg.get_IKPosition
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg::*)()>(&::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg::get_IKPosition)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x11c2f24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg>::get(),
                            "get_IKPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg.set_IKPosition
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg::*)(::UnityEngine::Vector3)>(&::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg::set_IKPosition)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x11c2f30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg>::get(),
                            "set_IKPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg.get_initiated
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg::*)()>(&::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg::get_initiated)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x11c2f3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg>::get(),
                            "get_initiated",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg.set_initiated
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg::*)(bool)>(&::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg::set_initiated)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x11c2f44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg>::get(),
                            "set_initiated",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg.get_heightFromGround
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg::*)()>(&::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg::get_heightFromGround)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x11c2f50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg>::get(),
                            "get_heightFromGround",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg.set_heightFromGround
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg::*)(float_t)>(&::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg::set_heightFromGround)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x11c2f58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg>::get(),
                            "set_heightFromGround",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg.get_velocity
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg::*)()>(&::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg::get_velocity)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x11c2f60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg>::get(),
                            "get_velocity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg.set_velocity
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg::*)(::UnityEngine::Vector3)>(&::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg::set_velocity)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x11c2f6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg>::get(),
                            "set_velocity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg.get_transform
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Transform (::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg::*)()>(&::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg::get_transform)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x11c2f78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg>::get(),
                            "get_transform",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg.set_transform
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg::*)(::UnityEngine::Transform)>(&::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg::set_transform)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x11c2f80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg>::get(),
                            "set_transform",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg.get_IKOffset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg::*)()>(&::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg::get_IKOffset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x11c2f88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg>::get(),
                            "get_IKOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg.set_IKOffset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg::*)(float_t)>(&::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg::set_IKOffset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x11c2f90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg>::get(),
                            "set_IKOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg.get_heelHit
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::RaycastHit (::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg::*)()>(&::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg::get_heelHit)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x11c2f98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg>::get(),
                            "get_heelHit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg.set_heelHit
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg::*)(::UnityEngine::RaycastHit)>(&::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg::set_heelHit)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x11c2fb0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg>::get(),
                            "set_heelHit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RaycastHit>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg.get_capsuleHit
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::RaycastHit (::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg::*)()>(&::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg::get_capsuleHit)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x11c2fd0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg>::get(),
                            "get_capsuleHit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg.set_capsuleHit
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg::*)(::UnityEngine::RaycastHit)>(&::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg::set_capsuleHit)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x11c2fe8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg>::get(),
                            "set_capsuleHit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RaycastHit>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg.get_GetHitPoint
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::RaycastHit (::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg::*)()>(&::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg::get_GetHitPoint)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x11c3008;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg>::get(),
                            "get_GetHitPoint",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg.SetFootPosition
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg::*)(::UnityEngine::Vector3)>(&::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg::SetFootPosition)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x11c3050;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg>::get(),
                            "SetFootPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg.Initiate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg::*)(::RootMotion::FinalIK::Grounding, ::UnityEngine::Transform)>(&::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg::Initiate)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x11c2078;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg>::get(),
                            "Initiate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::Grounding>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg.OnEnable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg::*)()>(&::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg::OnEnable)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x11c3064;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg>::get(),
                            "OnEnable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg.Reset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg::*)()>(&::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg::Reset)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x11c2b80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg>::get(),
                            "Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg.Process
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg::*)()>(&::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg::Process)> {
  constexpr static std::size_t size = 0x798;
  constexpr static std::size_t addrs = 0x11c2168;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg>::get(),
                            "Process",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg.get_stepHeightFromGround
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg::*)()>(&::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg::get_stepHeightFromGround)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x11c38f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg>::get(),
                            "get_stepHeightFromGround",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg.GetCapsuleHit
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::RaycastHit (::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg::*)(::UnityEngine::Vector3)>(&::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg::GetCapsuleHit)> {
  constexpr static std::size_t size = 0x3ec;
  constexpr static std::size_t addrs = 0x11c3504;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg>::get(),
                            "GetCapsuleHit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg.GetRaycastHit
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::RaycastHit (::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg::*)(::UnityEngine::Vector3)>(&::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg::GetRaycastHit)> {
  constexpr static std::size_t size = 0x2c8;
  constexpr static std::size_t addrs = 0x11c30a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg>::get(),
                            "GetRaycastHit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg.RotateNormal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg::*)(::UnityEngine::Vector3)>(&::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg::RotateNormal)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x11c3984;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg>::get(),
                            "RotateNormal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg.SetFootToPoint
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg::SetFootToPoint)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x11c336c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg>::get(),
                            "SetFootToPoint",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg.SetFootToPlane
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg::SetFootToPlane)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x11c33ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg>::get(),
                            "SetFootToPlane",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg.GetHeightFromGround
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg::*)(::UnityEngine::Vector3)>(&::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg::GetHeightFromGround)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x11c39f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg>::get(),
                            "GetHeightFromGround",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg.RotateFoot
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg::*)()>(&::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg::RotateFoot)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x11c3924;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg>::get(),
                            "RotateFoot",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg.GetRotationOffsetTarget
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Quaternion (::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg::*)()>(&::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg::GetRotationOffsetTarget)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x11c3acc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg>::get(),
                            "GetRotationOffsetTarget",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg.get_rootYOffset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg::*)()>(&::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg::get_rootYOffset)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x11c3a40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg>::get(),
                            "get_rootYOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg::*)()>(&::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg::_ctor)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x11c1fd8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg::__set__isGrounded_k__BackingField(bool value)  {
::cordl_internals::setInstanceField<bool, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg::__get__isGrounded_k__BackingField() const {
return ::cordl_internals::getInstanceField<bool, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg::__set__IKPosition_k__BackingField(::UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0x14>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3 ::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg::__get__IKPosition_k__BackingField() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x14>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg::__set_rotationOffset(::UnityEngine::Quaternion value)  {
::cordl_internals::setInstanceField<::UnityEngine::Quaternion, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Quaternion>(value));
}
constexpr ::UnityEngine::Quaternion ::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg::__get_rotationOffset() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Quaternion, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg::__set__initiated_k__BackingField(bool value)  {
::cordl_internals::setInstanceField<bool, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg::__get__initiated_k__BackingField() const {
return ::cordl_internals::getInstanceField<bool, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg::__set__heightFromGround_k__BackingField(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x34>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg::__get__heightFromGround_k__BackingField() const {
return ::cordl_internals::getInstanceField<float_t, 0x34>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg::__set__velocity_k__BackingField(::UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3 ::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg::__get__velocity_k__BackingField() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg::__set__transform_k__BackingField(::UnityEngine::Transform value)  {
::cordl_internals::setInstanceField<::UnityEngine::Transform, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Transform>(value));
}
constexpr ::UnityEngine::Transform ::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg::__get__transform_k__BackingField() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Transform, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg::__set__IKOffset_k__BackingField(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg::__get__IKOffset_k__BackingField() const {
return ::cordl_internals::getInstanceField<float_t, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg::__set_invertFootCenter(bool value)  {
::cordl_internals::setInstanceField<bool, 0x54>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg::__get_invertFootCenter() const {
return ::cordl_internals::getInstanceField<bool, 0x54>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg::__set__heelHit_k__BackingField(::UnityEngine::RaycastHit value)  {
::cordl_internals::setInstanceField<::UnityEngine::RaycastHit, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::RaycastHit>(value));
}
constexpr ::UnityEngine::RaycastHit ::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg::__get__heelHit_k__BackingField() const {
return ::cordl_internals::getInstanceField<::UnityEngine::RaycastHit, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg::__set__capsuleHit_k__BackingField(::UnityEngine::RaycastHit value)  {
::cordl_internals::setInstanceField<::UnityEngine::RaycastHit, 0x84>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::RaycastHit>(value));
}
constexpr ::UnityEngine::RaycastHit ::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg::__get__capsuleHit_k__BackingField() const {
return ::cordl_internals::getInstanceField<::UnityEngine::RaycastHit, 0x84>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg::__set_grounding(::RootMotion::FinalIK::Grounding value)  {
::cordl_internals::setInstanceField<::RootMotion::FinalIK::Grounding, 0xb0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::RootMotion::FinalIK::Grounding>(value));
}
constexpr ::RootMotion::FinalIK::Grounding ::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg::__get_grounding() const {
return ::cordl_internals::getInstanceField<::RootMotion::FinalIK::Grounding, 0xb0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg::__set_lastTime(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0xb8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg::__get_lastTime() const {
return ::cordl_internals::getInstanceField<float_t, 0xb8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg::__set_deltaTime(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0xbc>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg::__get_deltaTime() const {
return ::cordl_internals::getInstanceField<float_t, 0xbc>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg::__set_lastPosition(::UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0xc0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3 ::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg::__get_lastPosition() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0xc0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg::__set_toHitNormal(::UnityEngine::Quaternion value)  {
::cordl_internals::setInstanceField<::UnityEngine::Quaternion, 0xcc>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Quaternion>(value));
}
constexpr ::UnityEngine::Quaternion ::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg::__get_toHitNormal() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Quaternion, 0xcc>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg::__set_r(::UnityEngine::Quaternion value)  {
::cordl_internals::setInstanceField<::UnityEngine::Quaternion, 0xdc>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Quaternion>(value));
}
constexpr ::UnityEngine::Quaternion ::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg::__get_r() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Quaternion, 0xdc>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg::__set_up(::UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0xec>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3 ::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg::__get_up() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0xec>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg::__set_doOverrideFootPosition(bool value)  {
::cordl_internals::setInstanceField<bool, 0xf8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg::__get_doOverrideFootPosition() const {
return ::cordl_internals::getInstanceField<bool, 0xf8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg::__set_overrideFootPosition(::UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0xfc>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3 ::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg::__get_overrideFootPosition() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0xfc>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg::__set_transformPosition(::UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0x108>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3 ::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg::__get_transformPosition() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x108>(this->::bs_hook::Il2CppWrapperType::instance);
}
 bool ::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg::get_isGrounded()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg>::get(),
                            "get_isGrounded",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg::set_isGrounded(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg>::get(),
                            "set_isGrounded",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::UnityEngine::Vector3 ::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg::get_IKPosition()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg>::get(),
                            "get_IKPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg::set_IKPosition(::UnityEngine::Vector3 value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg>::get(),
                            "set_IKPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 bool ::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg::get_initiated()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg>::get(),
                            "get_initiated",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg::set_initiated(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg>::get(),
                            "set_initiated",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 float_t ::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg::get_heightFromGround()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg>::get(),
                            "get_heightFromGround",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg::set_heightFromGround(float_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg>::get(),
                            "set_heightFromGround",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::UnityEngine::Vector3 ::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg::get_velocity()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg>::get(),
                            "get_velocity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg::set_velocity(::UnityEngine::Vector3 value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg>::get(),
                            "set_velocity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::UnityEngine::Transform ::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg::get_transform()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg>::get(),
                            "get_transform",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Transform, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg::set_transform(::UnityEngine::Transform value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg>::get(),
                            "set_transform",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 float_t ::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg::get_IKOffset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg>::get(),
                            "get_IKOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg::set_IKOffset(float_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg>::get(),
                            "set_IKOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::UnityEngine::RaycastHit ::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg::get_heelHit()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg>::get(),
                            "get_heelHit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::RaycastHit, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg::set_heelHit(::UnityEngine::RaycastHit value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg>::get(),
                            "set_heelHit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RaycastHit>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::UnityEngine::RaycastHit ::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg::get_capsuleHit()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg>::get(),
                            "get_capsuleHit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::RaycastHit, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg::set_capsuleHit(::UnityEngine::RaycastHit value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg>::get(),
                            "set_capsuleHit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RaycastHit>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::UnityEngine::RaycastHit ::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg::get_GetHitPoint()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg>::get(),
                            "get_GetHitPoint",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::RaycastHit, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg::SetFootPosition(::UnityEngine::Vector3 position)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg>::get(),
                            "SetFootPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, position);
}
 void ::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg::Initiate(::RootMotion::FinalIK::Grounding grounding, ::UnityEngine::Transform transform)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg>::get(),
                            "Initiate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::Grounding>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, grounding, transform);
}
 void ::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg>::get(),
                            "OnEnable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg::Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg>::get(),
                            "Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg::Process()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg>::get(),
                            "Process",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 float_t ::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg::get_stepHeightFromGround()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg>::get(),
                            "get_stepHeightFromGround",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 ::UnityEngine::RaycastHit ::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg::GetCapsuleHit(::UnityEngine::Vector3 offsetFromHeel)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg>::get(),
                            "GetCapsuleHit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::RaycastHit, false>(const_cast<void*>(instance), ___internal_method, offsetFromHeel);
}
 ::UnityEngine::RaycastHit ::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg::GetRaycastHit(::UnityEngine::Vector3 offsetFromHeel)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg>::get(),
                            "GetRaycastHit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::RaycastHit, false>(const_cast<void*>(instance), ___internal_method, offsetFromHeel);
}
 ::UnityEngine::Vector3 ::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg::RotateNormal(::UnityEngine::Vector3 normal)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg>::get(),
                            "RotateNormal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(const_cast<void*>(instance), ___internal_method, normal);
}
 void ::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg::SetFootToPoint(::UnityEngine::Vector3 normal, ::UnityEngine::Vector3 point)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg>::get(),
                            "SetFootToPoint",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, normal, point);
}
 void ::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg::SetFootToPlane(::UnityEngine::Vector3 planeNormal, ::UnityEngine::Vector3 planePoint, ::UnityEngine::Vector3 heelHitPoint)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg>::get(),
                            "SetFootToPlane",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, planeNormal, planePoint, heelHitPoint);
}
 float_t ::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg::GetHeightFromGround(::UnityEngine::Vector3 hitPoint)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg>::get(),
                            "GetHeightFromGround",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method, hitPoint);
}
 void ::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg::RotateFoot()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg>::get(),
                            "RotateFoot",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::UnityEngine::Quaternion ::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg::GetRotationOffsetTarget()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg>::get(),
                            "GetRotationOffsetTarget",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion, false>(const_cast<void*>(instance), ___internal_method);
}
 float_t ::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg::get_rootYOffset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg>::get(),
                            "get_rootYOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 ::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg::____RootMotion__FinalIK__Grounding__Leg()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<____RootMotion__FinalIK__Grounding__Leg>())) {}
 void ::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: ::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Pelvis.get_IKOffset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Pelvis::*)()>(&::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Pelvis::get_IKOffset)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x11c3c7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Pelvis>::get(),
                            "get_IKOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Pelvis.set_IKOffset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Pelvis::*)(::UnityEngine::Vector3)>(&::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Pelvis::set_IKOffset)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x11c3c88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Pelvis>::get(),
                            "set_IKOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Pelvis.get_heightOffset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Pelvis::*)()>(&::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Pelvis::get_heightOffset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x11c3c94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Pelvis>::get(),
                            "get_heightOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Pelvis.set_heightOffset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Pelvis::*)(float_t)>(&::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Pelvis::set_heightOffset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x11c3c9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Pelvis>::get(),
                            "set_heightOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Pelvis.Initiate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Pelvis::*)(::RootMotion::FinalIK::Grounding)>(&::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Pelvis::Initiate)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x11c2140;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Pelvis>::get(),
                            "Initiate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::Grounding>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Pelvis.Reset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Pelvis::*)()>(&::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Pelvis::Reset)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x11c2aec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Pelvis>::get(),
                            "Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Pelvis.OnEnable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Pelvis::*)()>(&::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Pelvis::OnEnable)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x11c3ca4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Pelvis>::get(),
                            "OnEnable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Pelvis.Process
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Pelvis::*)(float_t, float_t, bool)>(&::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Pelvis::Process)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x11c2900;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Pelvis>::get(),
                            "Process",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Pelvis._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Pelvis::*)()>(&::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Pelvis::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x11c2070;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Pelvis>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Pelvis::__set__IKOffset_k__BackingField(::UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3 ::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Pelvis::__get__IKOffset_k__BackingField() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Pelvis::__set__heightOffset_k__BackingField(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Pelvis::__get__heightOffset_k__BackingField() const {
return ::cordl_internals::getInstanceField<float_t, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Pelvis::__set_grounding(::RootMotion::FinalIK::Grounding value)  {
::cordl_internals::setInstanceField<::RootMotion::FinalIK::Grounding, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::RootMotion::FinalIK::Grounding>(value));
}
constexpr ::RootMotion::FinalIK::Grounding ::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Pelvis::__get_grounding() const {
return ::cordl_internals::getInstanceField<::RootMotion::FinalIK::Grounding, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Pelvis::__set_lastRootPosition(::UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3 ::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Pelvis::__get_lastRootPosition() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Pelvis::__set_damperF(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x34>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Pelvis::__get_damperF() const {
return ::cordl_internals::getInstanceField<float_t, 0x34>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Pelvis::__set_initiated(bool value)  {
::cordl_internals::setInstanceField<bool, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Pelvis::__get_initiated() const {
return ::cordl_internals::getInstanceField<bool, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Pelvis::__set_lastTime(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x3c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Pelvis::__get_lastTime() const {
return ::cordl_internals::getInstanceField<float_t, 0x3c>(this->::bs_hook::Il2CppWrapperType::instance);
}
 ::UnityEngine::Vector3 ::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Pelvis::get_IKOffset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Pelvis>::get(),
                            "get_IKOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Pelvis::set_IKOffset(::UnityEngine::Vector3 value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Pelvis>::get(),
                            "set_IKOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 float_t ::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Pelvis::get_heightOffset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Pelvis>::get(),
                            "get_heightOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Pelvis::set_heightOffset(float_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Pelvis>::get(),
                            "set_heightOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void ::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Pelvis::Initiate(::RootMotion::FinalIK::Grounding grounding)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Pelvis>::get(),
                            "Initiate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::Grounding>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, grounding);
}
 void ::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Pelvis::Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Pelvis>::get(),
                            "Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Pelvis::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Pelvis>::get(),
                            "OnEnable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Pelvis::Process(float_t lowestOffset, float_t highestOffset, bool isGrounded)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Pelvis>::get(),
                            "Process",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, lowestOffset, highestOffset, isGrounded);
}
// Ctor Parameters []
 ::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Pelvis::____RootMotion__FinalIK__Grounding__Pelvis()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<____RootMotion__FinalIK__Grounding__Pelvis>())) {}
 void ::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Pelvis::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Pelvis>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: ::RootMotion::FinalIK::Grounding.get_legs
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg> (::RootMotion::FinalIK::Grounding::*)()>(&::RootMotion::FinalIK::Grounding::get_legs)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x11c1b50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Grounding>::get(),
                            "get_legs",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::Grounding.set_legs
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::Grounding::*)(::ArrayW<::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg>)>(&::RootMotion::FinalIK::Grounding::set_legs)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x11c1b58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Grounding>::get(),
                            "set_legs",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::Grounding.get_pelvis
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Pelvis (::RootMotion::FinalIK::Grounding::*)()>(&::RootMotion::FinalIK::Grounding::get_pelvis)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x11c1b60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Grounding>::get(),
                            "get_pelvis",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::Grounding.set_pelvis
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::Grounding::*)(::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Pelvis)>(&::RootMotion::FinalIK::Grounding::set_pelvis)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x11c1b68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Grounding>::get(),
                            "set_pelvis",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Pelvis>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::Grounding.get_isGrounded
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::RootMotion::FinalIK::Grounding::*)()>(&::RootMotion::FinalIK::Grounding::get_isGrounded)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x11c1b70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Grounding>::get(),
                            "get_isGrounded",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::Grounding.set_isGrounded
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::Grounding::*)(bool)>(&::RootMotion::FinalIK::Grounding::set_isGrounded)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x11c1b78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Grounding>::get(),
                            "set_isGrounded",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::Grounding.get_root
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Transform (::RootMotion::FinalIK::Grounding::*)()>(&::RootMotion::FinalIK::Grounding::get_root)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x11c1b84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Grounding>::get(),
                            "get_root",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::Grounding.set_root
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::Grounding::*)(::UnityEngine::Transform)>(&::RootMotion::FinalIK::Grounding::set_root)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x11c1b8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Grounding>::get(),
                            "set_root",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::Grounding.get_rootHit
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::RaycastHit (::RootMotion::FinalIK::Grounding::*)()>(&::RootMotion::FinalIK::Grounding::get_rootHit)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x11c1b94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Grounding>::get(),
                            "get_rootHit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::Grounding.set_rootHit
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::Grounding::*)(::UnityEngine::RaycastHit)>(&::RootMotion::FinalIK::Grounding::set_rootHit)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x11c1bac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Grounding>::get(),
                            "set_rootHit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RaycastHit>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::Grounding.get_rootGrounded
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::RootMotion::FinalIK::Grounding::*)()>(&::RootMotion::FinalIK::Grounding::get_rootGrounded)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x11c1bcc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Grounding>::get(),
                            "get_rootGrounded",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::Grounding.GetRootHit
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::RaycastHit (::RootMotion::FinalIK::Grounding::*)(float_t)>(&::RootMotion::FinalIK::Grounding::GetRootHit)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x11c1c14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Grounding>::get(),
                            "GetRootHit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::Grounding.IsValid
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::RootMotion::FinalIK::Grounding::*)(ByRef<::StringW>)>(&::RootMotion::FinalIK::Grounding::IsValid)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x11c1edc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Grounding>::get(),
                            "IsValid",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::Grounding.Initiate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::Grounding::*)(::UnityEngine::Transform, ::ArrayW<::UnityEngine::Transform>)>(&::RootMotion::FinalIK::Grounding::Initiate)> {
  constexpr static std::size_t size = 0x274;
  constexpr static std::size_t addrs = 0x11bc92c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Grounding>::get(),
                            "Initiate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Transform>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::Grounding.Update
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::Grounding::*)()>(&::RootMotion::FinalIK::Grounding::Update)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x11bcf14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Grounding>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::Grounding.GetLegsPlaneNormal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::RootMotion::FinalIK::Grounding::*)()>(&::RootMotion::FinalIK::Grounding::GetLegsPlaneNormal)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x11bdeb0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Grounding>::get(),
                            "GetLegsPlaneNormal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::Grounding.Reset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::Grounding::*)()>(&::RootMotion::FinalIK::Grounding::Reset)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x11bc5a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Grounding>::get(),
                            "Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::Grounding.LogWarning
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::Grounding::*)(::StringW)>(&::RootMotion::FinalIK::Grounding::LogWarning)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x11c2150;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Grounding>::get(),
                            "LogWarning",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::Grounding.get_up
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::RootMotion::FinalIK::Grounding::*)()>(&::RootMotion::FinalIK::Grounding::get_up)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x11c1e74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Grounding>::get(),
                            "get_up",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::Grounding.GetVerticalOffset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::RootMotion::FinalIK::Grounding::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::RootMotion::FinalIK::Grounding::GetVerticalOffset)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x11c2cc8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Grounding>::get(),
                            "GetVerticalOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::Grounding.Flatten
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::RootMotion::FinalIK::Grounding::*)(::UnityEngine::Vector3)>(&::RootMotion::FinalIK::Grounding::Flatten)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x11c2d4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Grounding>::get(),
                            "Flatten",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::Grounding.get_useRootRotation
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::RootMotion::FinalIK::Grounding::*)()>(&::RootMotion::FinalIK::Grounding::get_useRootRotation)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x11c2c14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Grounding>::get(),
                            "get_useRootRotation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::Grounding.GetFootCenterOffset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::RootMotion::FinalIK::Grounding::*)()>(&::RootMotion::FinalIK::Grounding::GetFootCenterOffset)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x11c2ea0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Grounding>::get(),
                            "GetFootCenterOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::Grounding._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::Grounding::*)()>(&::RootMotion::FinalIK::Grounding::_ctor)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x11c0ecc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Grounding>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::RootMotion::FinalIK::Grounding::__set_layers(::UnityEngine::LayerMask value)  {
::cordl_internals::setInstanceField<::UnityEngine::LayerMask, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::LayerMask>(value));
}
constexpr ::UnityEngine::LayerMask ::RootMotion::FinalIK::Grounding::__get_layers() const {
return ::cordl_internals::getInstanceField<::UnityEngine::LayerMask, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::RootMotion::FinalIK::Grounding::__set_maxStep(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x14>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::RootMotion::FinalIK::Grounding::__get_maxStep() const {
return ::cordl_internals::getInstanceField<float_t, 0x14>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::RootMotion::FinalIK::Grounding::__set_heightOffset(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::RootMotion::FinalIK::Grounding::__get_heightOffset() const {
return ::cordl_internals::getInstanceField<float_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::RootMotion::FinalIK::Grounding::__set_footSpeed(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::RootMotion::FinalIK::Grounding::__get_footSpeed() const {
return ::cordl_internals::getInstanceField<float_t, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::RootMotion::FinalIK::Grounding::__set_footRadius(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::RootMotion::FinalIK::Grounding::__get_footRadius() const {
return ::cordl_internals::getInstanceField<float_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::RootMotion::FinalIK::Grounding::__set_footCenterOffset(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x24>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::RootMotion::FinalIK::Grounding::__get_footCenterOffset() const {
return ::cordl_internals::getInstanceField<float_t, 0x24>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::RootMotion::FinalIK::Grounding::__set_prediction(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::RootMotion::FinalIK::Grounding::__get_prediction() const {
return ::cordl_internals::getInstanceField<float_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::RootMotion::FinalIK::Grounding::__set_footRotationWeight(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x2c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::RootMotion::FinalIK::Grounding::__get_footRotationWeight() const {
return ::cordl_internals::getInstanceField<float_t, 0x2c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::RootMotion::FinalIK::Grounding::__set_footRotationSpeed(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::RootMotion::FinalIK::Grounding::__get_footRotationSpeed() const {
return ::cordl_internals::getInstanceField<float_t, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::RootMotion::FinalIK::Grounding::__set_maxFootRotationAngle(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x34>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::RootMotion::FinalIK::Grounding::__get_maxFootRotationAngle() const {
return ::cordl_internals::getInstanceField<float_t, 0x34>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::RootMotion::FinalIK::Grounding::__set_rotateSolver(bool value)  {
::cordl_internals::setInstanceField<bool, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::RootMotion::FinalIK::Grounding::__get_rotateSolver() const {
return ::cordl_internals::getInstanceField<bool, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::RootMotion::FinalIK::Grounding::__set_pelvisSpeed(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x3c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::RootMotion::FinalIK::Grounding::__get_pelvisSpeed() const {
return ::cordl_internals::getInstanceField<float_t, 0x3c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::RootMotion::FinalIK::Grounding::__set_pelvisDamper(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::RootMotion::FinalIK::Grounding::__get_pelvisDamper() const {
return ::cordl_internals::getInstanceField<float_t, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::RootMotion::FinalIK::Grounding::__set_lowerPelvisWeight(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x44>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::RootMotion::FinalIK::Grounding::__get_lowerPelvisWeight() const {
return ::cordl_internals::getInstanceField<float_t, 0x44>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::RootMotion::FinalIK::Grounding::__set_liftPelvisWeight(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::RootMotion::FinalIK::Grounding::__get_liftPelvisWeight() const {
return ::cordl_internals::getInstanceField<float_t, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::RootMotion::FinalIK::Grounding::__set_rootSphereCastRadius(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x4c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::RootMotion::FinalIK::Grounding::__get_rootSphereCastRadius() const {
return ::cordl_internals::getInstanceField<float_t, 0x4c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::RootMotion::FinalIK::Grounding::__set_overstepFallsDown(bool value)  {
::cordl_internals::setInstanceField<bool, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::RootMotion::FinalIK::Grounding::__get_overstepFallsDown() const {
return ::cordl_internals::getInstanceField<bool, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::RootMotion::FinalIK::Grounding::__set_quality(::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Quality value)  {
::cordl_internals::setInstanceField<::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Quality, 0x54>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Quality>(value));
}
constexpr ::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Quality ::RootMotion::FinalIK::Grounding::__get_quality() const {
return ::cordl_internals::getInstanceField<::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Quality, 0x54>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::RootMotion::FinalIK::Grounding::__set__legs_k__BackingField(::ArrayW<::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg> value)  {
::cordl_internals::setInstanceField<::ArrayW<::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg>, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg>>(value));
}
constexpr ::ArrayW<::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg> ::RootMotion::FinalIK::Grounding::__get__legs_k__BackingField() const {
return ::cordl_internals::getInstanceField<::ArrayW<::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg>, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::RootMotion::FinalIK::Grounding::__set__pelvis_k__BackingField(::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Pelvis value)  {
::cordl_internals::setInstanceField<::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Pelvis, 0x60>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Pelvis>(value));
}
constexpr ::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Pelvis ::RootMotion::FinalIK::Grounding::__get__pelvis_k__BackingField() const {
return ::cordl_internals::getInstanceField<::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Pelvis, 0x60>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::RootMotion::FinalIK::Grounding::__set__isGrounded_k__BackingField(bool value)  {
::cordl_internals::setInstanceField<bool, 0x68>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::RootMotion::FinalIK::Grounding::__get__isGrounded_k__BackingField() const {
return ::cordl_internals::getInstanceField<bool, 0x68>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::RootMotion::FinalIK::Grounding::__set__root_k__BackingField(::UnityEngine::Transform value)  {
::cordl_internals::setInstanceField<::UnityEngine::Transform, 0x70>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Transform>(value));
}
constexpr ::UnityEngine::Transform ::RootMotion::FinalIK::Grounding::__get__root_k__BackingField() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Transform, 0x70>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::RootMotion::FinalIK::Grounding::__set__rootHit_k__BackingField(::UnityEngine::RaycastHit value)  {
::cordl_internals::setInstanceField<::UnityEngine::RaycastHit, 0x78>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::RaycastHit>(value));
}
constexpr ::UnityEngine::RaycastHit ::RootMotion::FinalIK::Grounding::__get__rootHit_k__BackingField() const {
return ::cordl_internals::getInstanceField<::UnityEngine::RaycastHit, 0x78>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::RootMotion::FinalIK::Grounding::__set_initiated(bool value)  {
::cordl_internals::setInstanceField<bool, 0xa4>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::RootMotion::FinalIK::Grounding::__get_initiated() const {
return ::cordl_internals::getInstanceField<bool, 0xa4>(this->::bs_hook::Il2CppWrapperType::instance);
}
 ::ArrayW<::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg> ::RootMotion::FinalIK::Grounding::get_legs()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Grounding>::get(),
                            "get_legs",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg>, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::RootMotion::FinalIK::Grounding::set_legs(::ArrayW<::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Grounding>::get(),
                            "set_legs",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Pelvis ::RootMotion::FinalIK::Grounding::get_pelvis()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Grounding>::get(),
                            "get_pelvis",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Pelvis, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::RootMotion::FinalIK::Grounding::set_pelvis(::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Pelvis value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Grounding>::get(),
                            "set_pelvis",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Pelvis>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 bool ::RootMotion::FinalIK::Grounding::get_isGrounded()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Grounding>::get(),
                            "get_isGrounded",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::RootMotion::FinalIK::Grounding::set_isGrounded(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Grounding>::get(),
                            "set_isGrounded",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::UnityEngine::Transform ::RootMotion::FinalIK::Grounding::get_root()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Grounding>::get(),
                            "get_root",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Transform, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::RootMotion::FinalIK::Grounding::set_root(::UnityEngine::Transform value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Grounding>::get(),
                            "set_root",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::UnityEngine::RaycastHit ::RootMotion::FinalIK::Grounding::get_rootHit()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Grounding>::get(),
                            "get_rootHit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::RaycastHit, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::RootMotion::FinalIK::Grounding::set_rootHit(::UnityEngine::RaycastHit value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Grounding>::get(),
                            "set_rootHit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RaycastHit>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 bool ::RootMotion::FinalIK::Grounding::get_rootGrounded()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Grounding>::get(),
                            "get_rootGrounded",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
/// @param maxDistanceMlp: float_t (default: 10)
 ::UnityEngine::RaycastHit ::RootMotion::FinalIK::Grounding::GetRootHit(float_t maxDistanceMlp)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Grounding>::get(),
                            "GetRootHit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::RaycastHit, false>(const_cast<void*>(instance), ___internal_method, maxDistanceMlp);
}
 bool ::RootMotion::FinalIK::Grounding::IsValid(ByRef<::StringW> errorMessage)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Grounding>::get(),
                            "IsValid",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, errorMessage);
}
 void ::RootMotion::FinalIK::Grounding::Initiate(::UnityEngine::Transform root, ::ArrayW<::UnityEngine::Transform> feet)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Grounding>::get(),
                            "Initiate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Transform>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, root, feet);
}
 void ::RootMotion::FinalIK::Grounding::Update()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Grounding>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::UnityEngine::Vector3 ::RootMotion::FinalIK::Grounding::GetLegsPlaneNormal()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Grounding>::get(),
                            "GetLegsPlaneNormal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::RootMotion::FinalIK::Grounding::Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Grounding>::get(),
                            "Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::RootMotion::FinalIK::Grounding::LogWarning(::StringW message)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Grounding>::get(),
                            "LogWarning",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, message);
}
 ::UnityEngine::Vector3 ::RootMotion::FinalIK::Grounding::get_up()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Grounding>::get(),
                            "get_up",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(const_cast<void*>(instance), ___internal_method);
}
 float_t ::RootMotion::FinalIK::Grounding::GetVerticalOffset(::UnityEngine::Vector3 p1, ::UnityEngine::Vector3 p2)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Grounding>::get(),
                            "GetVerticalOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method, p1, p2);
}
 ::UnityEngine::Vector3 ::RootMotion::FinalIK::Grounding::Flatten(::UnityEngine::Vector3 v)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Grounding>::get(),
                            "Flatten",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(const_cast<void*>(instance), ___internal_method, v);
}
 bool ::RootMotion::FinalIK::Grounding::get_useRootRotation()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Grounding>::get(),
                            "get_useRootRotation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 ::UnityEngine::Vector3 ::RootMotion::FinalIK::Grounding::GetFootCenterOffset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Grounding>::get(),
                            "GetFootCenterOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 ::RootMotion::FinalIK::Grounding::Grounding()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<Grounding>())) {}
 void ::RootMotion::FinalIK::Grounding::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::Grounding>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
