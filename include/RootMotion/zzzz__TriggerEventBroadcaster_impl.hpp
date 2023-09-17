#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
namespace {
#include "RootMotion/zzzz__TriggerEventBroadcaster_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::RootMotion::TriggerEventBroadcaster.OnTriggerEnter
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::TriggerEventBroadcaster::*)(::UnityEngine::Collider)>(&::RootMotion::TriggerEventBroadcaster::OnTriggerEnter)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x11b556c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::TriggerEventBroadcaster>::get(),
                            "OnTriggerEnter",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Collider>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::TriggerEventBroadcaster.OnTriggerStay
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::TriggerEventBroadcaster::*)(::UnityEngine::Collider)>(&::RootMotion::TriggerEventBroadcaster::OnTriggerStay)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x11b5620;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::TriggerEventBroadcaster>::get(),
                            "OnTriggerStay",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Collider>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::TriggerEventBroadcaster.OnTriggerExit
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::TriggerEventBroadcaster::*)(::UnityEngine::Collider)>(&::RootMotion::TriggerEventBroadcaster::OnTriggerExit)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x11b56d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::TriggerEventBroadcaster>::get(),
                            "OnTriggerExit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Collider>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::TriggerEventBroadcaster._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::TriggerEventBroadcaster::*)()>(&::RootMotion::TriggerEventBroadcaster::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x11b5788;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::TriggerEventBroadcaster>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::RootMotion::TriggerEventBroadcaster::__set_target(::UnityEngine::GameObject value)  {
::cordl_internals::setInstanceField<::UnityEngine::GameObject, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::GameObject>(value));
}
constexpr ::UnityEngine::GameObject ::RootMotion::TriggerEventBroadcaster::__get_target() const {
return ::cordl_internals::getInstanceField<::UnityEngine::GameObject, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void ::RootMotion::TriggerEventBroadcaster::OnTriggerEnter(::UnityEngine::Collider collider)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::TriggerEventBroadcaster>::get(),
                            "OnTriggerEnter",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Collider>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, collider);
}
 void ::RootMotion::TriggerEventBroadcaster::OnTriggerStay(::UnityEngine::Collider collider)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::TriggerEventBroadcaster>::get(),
                            "OnTriggerStay",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Collider>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, collider);
}
 void ::RootMotion::TriggerEventBroadcaster::OnTriggerExit(::UnityEngine::Collider collider)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::TriggerEventBroadcaster>::get(),
                            "OnTriggerExit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Collider>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, collider);
}
// Ctor Parameters []
 ::RootMotion::TriggerEventBroadcaster::TriggerEventBroadcaster()  : ::UnityEngine::MonoBehaviour(THROW_UNLESS(::il2cpp_utils::New<TriggerEventBroadcaster>())) {}
 void ::RootMotion::TriggerEventBroadcaster::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::TriggerEventBroadcaster>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
