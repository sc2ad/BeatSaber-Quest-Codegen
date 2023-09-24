#pragma once
#include "Tweening/zzzz__Tween_1_impl.hpp"
#include "Tweening/zzzz__Vector3Tween_def.hpp"
#include "Zenject/zzzz__StaticMemoryPool_7_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "GlobalNamespace/zzzz__EaseType_def.hpp"
//  Writing Method size for method: Tweening::Vector3Tween._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Tweening::Vector3Tween::*)()>(&Tweening::Vector3Tween::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x287a314;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Tweening::Vector3Tween>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Tweening::Vector3Tween._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Tweening::Vector3Tween::*)(UnityEngine::Vector3, UnityEngine::Vector3, System::Action_1<UnityEngine::Vector3>, float_t, GlobalNamespace::EaseType, float_t)>(&Tweening::Vector3Tween::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x287a35c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Tweening::Vector3Tween>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<UnityEngine::Vector3>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::EaseType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Tweening::Vector3Tween.GetValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (Tweening::Vector3Tween::*)(float_t)>(&Tweening::Vector3Tween::GetValue)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x287a41c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Tweening::Vector3Tween),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Tweening::Vector3Tween>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
 void Tweening::Vector3Tween::__set_Pool(Zenject::StaticMemoryPool_7<UnityEngine::Vector3,UnityEngine::Vector3,System::Action_1<UnityEngine::Vector3>,float_t,GlobalNamespace::EaseType,float_t,Tweening::Vector3Tween> value)  {
::cordl_internals::setStaticField<Zenject::StaticMemoryPool_7<UnityEngine::Vector3,UnityEngine::Vector3,System::Action_1<UnityEngine::Vector3>,float_t,GlobalNamespace::EaseType,float_t,Tweening::Vector3Tween>, "Pool", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Tweening::Vector3Tween>::get>(std::forward<Zenject::StaticMemoryPool_7<UnityEngine::Vector3,UnityEngine::Vector3,System::Action_1<UnityEngine::Vector3>,float_t,GlobalNamespace::EaseType,float_t,Tweening::Vector3Tween>>(value));
}
 Zenject::StaticMemoryPool_7<UnityEngine::Vector3,UnityEngine::Vector3,System::Action_1<UnityEngine::Vector3>,float_t,GlobalNamespace::EaseType,float_t,Tweening::Vector3Tween> Tweening::Vector3Tween::__get_Pool()  {
return ::cordl_internals::getStaticField<Zenject::StaticMemoryPool_7<UnityEngine::Vector3,UnityEngine::Vector3,System::Action_1<UnityEngine::Vector3>,float_t,GlobalNamespace::EaseType,float_t,Tweening::Vector3Tween>, "Pool", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Tweening::Vector3Tween>::get>();
}
 Tweening::Vector3Tween Tweening::Vector3Tween::New_ctor()  {
Tweening::Vector3Tween o{THROW_UNLESS(::il2cpp_utils::New<Tweening::Vector3Tween>())};
return o;
}
 void Tweening::Vector3Tween::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Tweening::Vector3Tween>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
/// @param delay: float_t (default: 0)
 Tweening::Vector3Tween Tweening::Vector3Tween::New_ctor(UnityEngine::Vector3 fromValue, UnityEngine::Vector3 toValue, System::Action_1<UnityEngine::Vector3> onUpdate, float_t duration, GlobalNamespace::EaseType easeType, float_t delay)  {
Tweening::Vector3Tween o{THROW_UNLESS(::il2cpp_utils::New<Tweening::Vector3Tween>(fromValue, toValue, onUpdate, duration, easeType, delay))};
return o;
}
/// @param delay: float_t (default: 0)
 void Tweening::Vector3Tween::_ctor(UnityEngine::Vector3 fromValue, UnityEngine::Vector3 toValue, System::Action_1<UnityEngine::Vector3> onUpdate, float_t duration, GlobalNamespace::EaseType easeType, float_t delay)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Tweening::Vector3Tween>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<UnityEngine::Vector3>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::EaseType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, fromValue, toValue, onUpdate, duration, easeType, delay);
}
 UnityEngine::Vector3 Tweening::Vector3Tween::GetValue(float_t t)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Tweening::Vector3Tween>::get(),
                            "GetValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Vector3, false>(const_cast<void*>(instance), ___internal_method, t);
}
