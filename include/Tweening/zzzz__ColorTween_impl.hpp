#pragma once
#include "Tweening/zzzz__Tween_1_impl.hpp"
#include "Tweening/zzzz__ColorTween_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "GlobalNamespace/zzzz__EaseType_def.hpp"
#include "Zenject/zzzz__StaticMemoryPool_7_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
//  Writing Method size for method: Tweening::ColorTween._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Tweening::ColorTween::*)()>(&Tweening::ColorTween::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x287a598;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Tweening::ColorTween>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Tweening::ColorTween._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Tweening::ColorTween::*)(UnityEngine::Color, UnityEngine::Color, System::Action_1<UnityEngine::Color>, float_t, GlobalNamespace::EaseType, float_t)>(&Tweening::ColorTween::_ctor)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x287a5e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Tweening::ColorTween>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Color>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Color>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<UnityEngine::Color>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::EaseType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Tweening::ColorTween.GetValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Color (Tweening::ColorTween::*)(float_t)>(&Tweening::ColorTween::GetValue)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x287a6b0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Tweening::ColorTween),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Tweening::ColorTween>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
 void Tweening::ColorTween::__set_Pool(Zenject::StaticMemoryPool_7<UnityEngine::Color,UnityEngine::Color,System::Action_1<UnityEngine::Color>,float_t,GlobalNamespace::EaseType,float_t,Tweening::ColorTween> value)  {
::cordl_internals::setStaticField<Zenject::StaticMemoryPool_7<UnityEngine::Color,UnityEngine::Color,System::Action_1<UnityEngine::Color>,float_t,GlobalNamespace::EaseType,float_t,Tweening::ColorTween>, "Pool", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Tweening::ColorTween>::get>(std::forward<Zenject::StaticMemoryPool_7<UnityEngine::Color,UnityEngine::Color,System::Action_1<UnityEngine::Color>,float_t,GlobalNamespace::EaseType,float_t,Tweening::ColorTween>>(value));
}
 Zenject::StaticMemoryPool_7<UnityEngine::Color,UnityEngine::Color,System::Action_1<UnityEngine::Color>,float_t,GlobalNamespace::EaseType,float_t,Tweening::ColorTween> Tweening::ColorTween::__get_Pool()  {
return ::cordl_internals::getStaticField<Zenject::StaticMemoryPool_7<UnityEngine::Color,UnityEngine::Color,System::Action_1<UnityEngine::Color>,float_t,GlobalNamespace::EaseType,float_t,Tweening::ColorTween>, "Pool", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Tweening::ColorTween>::get>();
}
// Ctor Parameters []
 Tweening::ColorTween::ColorTween()  : Tweening::Tween_1<UnityEngine::Color>(THROW_UNLESS(::il2cpp_utils::New<ColorTween>())) {}
 void Tweening::ColorTween::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Tweening::ColorTween>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters [CppParam { name: "fromValue", ty: "UnityEngine::Color", modifiers: "", def_value: None }, CppParam { name: "toValue", ty: "UnityEngine::Color", modifiers: "", def_value: None }, CppParam { name: "onUpdate", ty: "System::Action_1<UnityEngine::Color>", modifiers: "", def_value: None }, CppParam { name: "duration", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "easeType", ty: "GlobalNamespace::EaseType", modifiers: "", def_value: None }, CppParam { name: "delay", ty: "float_t", modifiers: "", def_value: Some("0") }]
 Tweening::ColorTween::ColorTween(UnityEngine::Color fromValue, UnityEngine::Color toValue, System::Action_1<UnityEngine::Color> onUpdate, float_t duration, GlobalNamespace::EaseType easeType, float_t delay)  : Tweening::Tween_1<UnityEngine::Color>(THROW_UNLESS(::il2cpp_utils::New<ColorTween>(fromValue, toValue, onUpdate, duration, easeType, delay))) {}
/// @param delay: float_t (default: 0)
 void Tweening::ColorTween::_ctor(UnityEngine::Color fromValue, UnityEngine::Color toValue, System::Action_1<UnityEngine::Color> onUpdate, float_t duration, GlobalNamespace::EaseType easeType, float_t delay)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Tweening::ColorTween>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Color>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Color>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<UnityEngine::Color>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::EaseType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, fromValue, toValue, onUpdate, duration, easeType, delay);
}
 UnityEngine::Color Tweening::ColorTween::GetValue(float_t t)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Tweening::ColorTween>::get(),
                            "GetValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Color, false>(const_cast<void*>(instance), ___internal_method, t);
}
