#pragma once
#include "GlobalNamespace/zzzz__FlyingObjectEffect_impl.hpp"
#include "Zenject/zzzz__MonoMemoryPool_1_impl.hpp"
#include "GlobalNamespace/zzzz__FlyingSpriteEffect_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
#include "UnityEngine/zzzz__Sprite_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__SpriteRenderer_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
//  Writing Method size for method: GlobalNamespace::FlyingSpriteEffect.InitAndPresent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FlyingSpriteEffect::*)(float_t, UnityEngine::Vector3, UnityEngine::Quaternion, UnityEngine::Sprite, UnityEngine::Material, UnityEngine::Color, bool)>(&GlobalNamespace::FlyingSpriteEffect::InitAndPresent)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x225134c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::FlyingSpriteEffect>::get(),
                            "InitAndPresent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Quaternion>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Sprite>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Material>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Color>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::FlyingSpriteEffect.ManualUpdate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FlyingSpriteEffect::*)(float_t)>(&GlobalNamespace::FlyingSpriteEffect::ManualUpdate)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2251404;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::FlyingSpriteEffect),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::FlyingSpriteEffect>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::FlyingSpriteEffect._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FlyingSpriteEffect::*)()>(&GlobalNamespace::FlyingSpriteEffect::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2251460;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::FlyingSpriteEffect>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::FlyingSpriteEffect::__set__spriteRenderer(UnityEngine::SpriteRenderer value)  {
::cordl_internals::setInstanceField<UnityEngine::SpriteRenderer, 0x80>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::SpriteRenderer>(value));
}
constexpr UnityEngine::SpriteRenderer GlobalNamespace::FlyingSpriteEffect::__get__spriteRenderer() const {
return ::cordl_internals::getInstanceField<UnityEngine::SpriteRenderer, 0x80>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::FlyingSpriteEffect::__set__fadeAnimationCurve(UnityEngine::AnimationCurve value)  {
::cordl_internals::setInstanceField<UnityEngine::AnimationCurve, 0x88>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::AnimationCurve>(value));
}
constexpr UnityEngine::AnimationCurve GlobalNamespace::FlyingSpriteEffect::__get__fadeAnimationCurve() const {
return ::cordl_internals::getInstanceField<UnityEngine::AnimationCurve, 0x88>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::FlyingSpriteEffect::__set__color(UnityEngine::Color value)  {
::cordl_internals::setInstanceField<UnityEngine::Color, 0x90>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Color>(value));
}
constexpr UnityEngine::Color GlobalNamespace::FlyingSpriteEffect::__get__color() const {
return ::cordl_internals::getInstanceField<UnityEngine::Color, 0x90>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void GlobalNamespace::FlyingSpriteEffect::InitAndPresent(float_t duration, UnityEngine::Vector3 targetPos, UnityEngine::Quaternion rotation, UnityEngine::Sprite sprite, UnityEngine::Material material, UnityEngine::Color color, bool shake)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::FlyingSpriteEffect>::get(),
                            "InitAndPresent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Quaternion>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Sprite>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Material>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Color>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, duration, targetPos, rotation, sprite, material, color, shake);
}
 void GlobalNamespace::FlyingSpriteEffect::ManualUpdate(float_t t)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::FlyingSpriteEffect>::get(),
                            "ManualUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, t);
}
// Ctor Parameters []
 GlobalNamespace::FlyingSpriteEffect::FlyingSpriteEffect()  : GlobalNamespace::FlyingObjectEffect(THROW_UNLESS(::il2cpp_utils::New<FlyingSpriteEffect>())) {}
 void GlobalNamespace::FlyingSpriteEffect::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::FlyingSpriteEffect>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__FlyingSpriteEffect__Pool._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__FlyingSpriteEffect__Pool::*)()>(&GlobalNamespace::GlobalNamespace__FlyingSpriteEffect__Pool::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2251490;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__FlyingSpriteEffect__Pool>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters []
 GlobalNamespace::GlobalNamespace__FlyingSpriteEffect__Pool::GlobalNamespace__FlyingSpriteEffect__Pool()  : Zenject::MonoMemoryPool_1<GlobalNamespace::FlyingSpriteEffect>(THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace__FlyingSpriteEffect__Pool>())) {}
 void GlobalNamespace::GlobalNamespace__FlyingSpriteEffect__Pool::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__FlyingSpriteEffect__Pool>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
