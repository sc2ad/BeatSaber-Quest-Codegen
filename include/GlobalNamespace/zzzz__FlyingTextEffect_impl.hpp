#pragma once
#include "GlobalNamespace/zzzz__FlyingObjectEffect_impl.hpp"
#include "Zenject/zzzz__MonoMemoryPool_1_impl.hpp"
#include "GlobalNamespace/zzzz__FlyingTextEffect_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "TMPro/zzzz__TextMeshPro_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
//  Writing Method size for method: GlobalNamespace::FlyingTextEffect.InitAndPresent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FlyingTextEffect::*)(::StringW, float_t, UnityEngine::Vector3, UnityEngine::Quaternion, UnityEngine::Color, float_t, bool)>(&GlobalNamespace::FlyingTextEffect::InitAndPresent)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x22514d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::FlyingTextEffect>::get(),
                            "InitAndPresent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Quaternion>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Color>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::FlyingTextEffect.ManualUpdate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FlyingTextEffect::*)(float_t)>(&GlobalNamespace::FlyingTextEffect::ManualUpdate)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2251550;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::FlyingTextEffect),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::FlyingTextEffect>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::FlyingTextEffect._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FlyingTextEffect::*)()>(&GlobalNamespace::FlyingTextEffect::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x22515b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::FlyingTextEffect>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::FlyingTextEffect::__set__text(TMPro::TextMeshPro value)  {
::cordl_internals::setInstanceField<TMPro::TextMeshPro, 0x80>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<TMPro::TextMeshPro>(value));
}
constexpr TMPro::TextMeshPro GlobalNamespace::FlyingTextEffect::__get__text() const {
return ::cordl_internals::getInstanceField<TMPro::TextMeshPro, 0x80>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::FlyingTextEffect::__set__fadeAnimationCurve(UnityEngine::AnimationCurve value)  {
::cordl_internals::setInstanceField<UnityEngine::AnimationCurve, 0x88>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::AnimationCurve>(value));
}
constexpr UnityEngine::AnimationCurve GlobalNamespace::FlyingTextEffect::__get__fadeAnimationCurve() const {
return ::cordl_internals::getInstanceField<UnityEngine::AnimationCurve, 0x88>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::FlyingTextEffect::__set__color(UnityEngine::Color value)  {
::cordl_internals::setInstanceField<UnityEngine::Color, 0x90>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Color>(value));
}
constexpr UnityEngine::Color GlobalNamespace::FlyingTextEffect::__get__color() const {
return ::cordl_internals::getInstanceField<UnityEngine::Color, 0x90>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void GlobalNamespace::FlyingTextEffect::InitAndPresent(::StringW text, float_t duration, UnityEngine::Vector3 targetPos, UnityEngine::Quaternion rotation, UnityEngine::Color color, float_t fontSize, bool shake)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::FlyingTextEffect>::get(),
                            "InitAndPresent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Quaternion>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Color>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, text, duration, targetPos, rotation, color, fontSize, shake);
}
 void GlobalNamespace::FlyingTextEffect::ManualUpdate(float_t t)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::FlyingTextEffect>::get(),
                            "ManualUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, t);
}
// Ctor Parameters []
 GlobalNamespace::FlyingTextEffect::FlyingTextEffect()  : GlobalNamespace::FlyingObjectEffect(THROW_UNLESS(::il2cpp_utils::New<FlyingTextEffect>())) {}
 void GlobalNamespace::FlyingTextEffect::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::FlyingTextEffect>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__FlyingTextEffect__Pool._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__FlyingTextEffect__Pool::*)()>(&GlobalNamespace::GlobalNamespace__FlyingTextEffect__Pool::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x22515e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__FlyingTextEffect__Pool>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters []
 GlobalNamespace::GlobalNamespace__FlyingTextEffect__Pool::GlobalNamespace__FlyingTextEffect__Pool()  : Zenject::MonoMemoryPool_1<GlobalNamespace::FlyingTextEffect>(THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace__FlyingTextEffect__Pool>())) {}
 void GlobalNamespace::GlobalNamespace__FlyingTextEffect__Pool::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__FlyingTextEffect__Pool>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
