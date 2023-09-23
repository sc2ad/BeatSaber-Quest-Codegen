#pragma once
#include "Tweening/zzzz__Tween_1_impl.hpp"
#include "Tweening/zzzz__FloatTween_def.hpp"
#include "Zenject/zzzz__StaticMemoryPool_7_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "GlobalNamespace/zzzz__EaseType_def.hpp"
//  Writing Method size for method: Tweening::FloatTween._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Tweening::FloatTween::*)()>(&Tweening::FloatTween::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2879e94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Tweening::FloatTween>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Tweening::FloatTween._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Tweening::FloatTween::*)(float_t, float_t, System::Action_1<float_t>, float_t, GlobalNamespace::EaseType, float_t)>(&Tweening::FloatTween::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x2879edc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Tweening::FloatTween>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<float_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::EaseType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Tweening::FloatTween.GetValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (Tweening::FloatTween::*)(float_t)>(&Tweening::FloatTween::GetValue)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2879f6c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Tweening::FloatTween),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Tweening::FloatTween>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
 void Tweening::FloatTween::__set_Pool(Zenject::StaticMemoryPool_7<float_t,float_t,System::Action_1<float_t>,float_t,GlobalNamespace::EaseType,float_t,Tweening::FloatTween> value)  {
::cordl_internals::setStaticField<Zenject::StaticMemoryPool_7<float_t,float_t,System::Action_1<float_t>,float_t,GlobalNamespace::EaseType,float_t,Tweening::FloatTween>, "Pool", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Tweening::FloatTween>::get>(std::forward<Zenject::StaticMemoryPool_7<float_t,float_t,System::Action_1<float_t>,float_t,GlobalNamespace::EaseType,float_t,Tweening::FloatTween>>(value));
}
 Zenject::StaticMemoryPool_7<float_t,float_t,System::Action_1<float_t>,float_t,GlobalNamespace::EaseType,float_t,Tweening::FloatTween> Tweening::FloatTween::__get_Pool()  {
return ::cordl_internals::getStaticField<Zenject::StaticMemoryPool_7<float_t,float_t,System::Action_1<float_t>,float_t,GlobalNamespace::EaseType,float_t,Tweening::FloatTween>, "Pool", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Tweening::FloatTween>::get>();
}
// Ctor Parameters []
 Tweening::FloatTween::FloatTween()  : Tweening::Tween_1<float_t>(THROW_UNLESS(::il2cpp_utils::New<FloatTween>())) {}
 void Tweening::FloatTween::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Tweening::FloatTween>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters [CppParam { name: "fromValue", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "toValue", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "onUpdate", ty: "System::Action_1<float_t>", modifiers: "", def_value: None }, CppParam { name: "duration", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "easeType", ty: "GlobalNamespace::EaseType", modifiers: "", def_value: None }, CppParam { name: "delay", ty: "float_t", modifiers: "", def_value: Some("0") }]
 Tweening::FloatTween::FloatTween(float_t fromValue, float_t toValue, System::Action_1<float_t> onUpdate, float_t duration, GlobalNamespace::EaseType easeType, float_t delay)  : Tweening::Tween_1<float_t>(THROW_UNLESS(::il2cpp_utils::New<FloatTween>(fromValue, toValue, onUpdate, duration, easeType, delay))) {}
/// @param delay: float_t (default: 0)
 void Tweening::FloatTween::_ctor(float_t fromValue, float_t toValue, System::Action_1<float_t> onUpdate, float_t duration, GlobalNamespace::EaseType easeType, float_t delay)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Tweening::FloatTween>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<float_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::EaseType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, fromValue, toValue, onUpdate, duration, easeType, delay);
}
 float_t Tweening::FloatTween::GetValue(float_t t)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Tweening::FloatTween>::get(),
                            "GetValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method, t);
}
