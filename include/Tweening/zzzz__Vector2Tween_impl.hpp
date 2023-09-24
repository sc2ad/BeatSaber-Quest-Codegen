#pragma once
#include "Tweening/zzzz__Tween_1_impl.hpp"
#include "Tweening/zzzz__Vector2Tween_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "Zenject/zzzz__StaticMemoryPool_7_def.hpp"
#include "GlobalNamespace/zzzz__EaseType_def.hpp"
//  Writing Method size for method: Tweening::Vector2Tween._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Tweening::Vector2Tween::*)()>(&Tweening::Vector2Tween::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x287a0c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Tweening::Vector2Tween>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Tweening::Vector2Tween._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Tweening::Vector2Tween::*)(UnityEngine::Vector2, UnityEngine::Vector2, System::Action_1<UnityEngine::Vector2>, float_t, GlobalNamespace::EaseType, float_t)>(&Tweening::Vector2Tween::_ctor)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x287a10c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Tweening::Vector2Tween>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<UnityEngine::Vector2>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::EaseType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Tweening::Vector2Tween.GetValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector2 (Tweening::Vector2Tween::*)(float_t)>(&Tweening::Vector2Tween::GetValue)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x287a1b4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Tweening::Vector2Tween),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Tweening::Vector2Tween>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
 void Tweening::Vector2Tween::__set_Pool(Zenject::StaticMemoryPool_7<UnityEngine::Vector2,UnityEngine::Vector2,System::Action_1<UnityEngine::Vector2>,float_t,GlobalNamespace::EaseType,float_t,Tweening::Vector2Tween> value)  {
::cordl_internals::setStaticField<Zenject::StaticMemoryPool_7<UnityEngine::Vector2,UnityEngine::Vector2,System::Action_1<UnityEngine::Vector2>,float_t,GlobalNamespace::EaseType,float_t,Tweening::Vector2Tween>, "Pool", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Tweening::Vector2Tween>::get>(std::forward<Zenject::StaticMemoryPool_7<UnityEngine::Vector2,UnityEngine::Vector2,System::Action_1<UnityEngine::Vector2>,float_t,GlobalNamespace::EaseType,float_t,Tweening::Vector2Tween>>(value));
}
 Zenject::StaticMemoryPool_7<UnityEngine::Vector2,UnityEngine::Vector2,System::Action_1<UnityEngine::Vector2>,float_t,GlobalNamespace::EaseType,float_t,Tweening::Vector2Tween> Tweening::Vector2Tween::__get_Pool()  {
return ::cordl_internals::getStaticField<Zenject::StaticMemoryPool_7<UnityEngine::Vector2,UnityEngine::Vector2,System::Action_1<UnityEngine::Vector2>,float_t,GlobalNamespace::EaseType,float_t,Tweening::Vector2Tween>, "Pool", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Tweening::Vector2Tween>::get>();
}
 Tweening::Vector2Tween Tweening::Vector2Tween::New_ctor()  {
Tweening::Vector2Tween o{THROW_UNLESS(::il2cpp_utils::New<Tweening::Vector2Tween>())};
return o;
}
 void Tweening::Vector2Tween::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Tweening::Vector2Tween>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
/// @param delay: float_t (default: 0)
 Tweening::Vector2Tween Tweening::Vector2Tween::New_ctor(UnityEngine::Vector2 fromValue, UnityEngine::Vector2 toValue, System::Action_1<UnityEngine::Vector2> onUpdate, float_t duration, GlobalNamespace::EaseType easeType, float_t delay)  {
Tweening::Vector2Tween o{THROW_UNLESS(::il2cpp_utils::New<Tweening::Vector2Tween>(fromValue, toValue, onUpdate, duration, easeType, delay))};
return o;
}
/// @param delay: float_t (default: 0)
 void Tweening::Vector2Tween::_ctor(UnityEngine::Vector2 fromValue, UnityEngine::Vector2 toValue, System::Action_1<UnityEngine::Vector2> onUpdate, float_t duration, GlobalNamespace::EaseType easeType, float_t delay)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Tweening::Vector2Tween>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<UnityEngine::Vector2>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::EaseType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, fromValue, toValue, onUpdate, duration, easeType, delay);
}
 UnityEngine::Vector2 Tweening::Vector2Tween::GetValue(float_t t)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Tweening::Vector2Tween>::get(),
                            "GetValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Vector2, false>(const_cast<void*>(instance), ___internal_method, t);
}
