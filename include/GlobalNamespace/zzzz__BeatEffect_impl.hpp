#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Zenject/zzzz__MonoMemoryPool_1_impl.hpp"
namespace {
#include "GlobalNamespace/zzzz__BeatEffect_def.hpp"
#include "GlobalNamespace/zzzz__LazyCopyHashSet_1_def.hpp"
#include "GlobalNamespace/zzzz__TubeBloomPrePassLight_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__SpriteRenderer_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "GlobalNamespace/zzzz__ILazyCopyHashSet_1_def.hpp"
#include "GlobalNamespace/zzzz__IBeatEffectDidFinishEvent_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BeatEffect.get_didFinishEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::ILazyCopyHashSet_1<::GlobalNamespace::IBeatEffectDidFinishEvent> (::GlobalNamespace::BeatEffect::*)()>(&::GlobalNamespace::BeatEffect::get_didFinishEvent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x224d638;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatEffect>::get(),
                            "get_didFinishEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatEffect.Init
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatEffect::*)(::UnityEngine::Color, float_t, ::UnityEngine::Quaternion)>(&::GlobalNamespace::BeatEffect::Init)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x224d640;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatEffect>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatEffect.ManualUpdate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatEffect::*)(float_t)>(&::GlobalNamespace::BeatEffect::ManualUpdate)> {
  constexpr static std::size_t size = 0x2dc;
  constexpr static std::size_t addrs = 0x224d6f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatEffect>::get(),
                            "ManualUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatEffect._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatEffect::*)()>(&::GlobalNamespace::BeatEffect::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x224d9d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatEffect>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::GlobalNamespace::BeatEffect::__set__spriteRenderer(::UnityEngine::SpriteRenderer value)  {
::cordl_internals::setInstanceField<::UnityEngine::SpriteRenderer, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::SpriteRenderer>(value));
}
constexpr ::UnityEngine::SpriteRenderer ::GlobalNamespace::BeatEffect::__get__spriteRenderer() const {
return ::cordl_internals::getInstanceField<::UnityEngine::SpriteRenderer, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::BeatEffect::__set__spriteTransform(::UnityEngine::Transform value)  {
::cordl_internals::setInstanceField<::UnityEngine::Transform, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Transform>(value));
}
constexpr ::UnityEngine::Transform ::GlobalNamespace::BeatEffect::__get__spriteTransform() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Transform, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::BeatEffect::__set__tubeBloomPrePassLight(::GlobalNamespace::TubeBloomPrePassLight value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::TubeBloomPrePassLight, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::TubeBloomPrePassLight>(value));
}
constexpr ::GlobalNamespace::TubeBloomPrePassLight ::GlobalNamespace::BeatEffect::__get__tubeBloomPrePassLight() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::TubeBloomPrePassLight, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::BeatEffect::__set__lightIntensityCurve(::UnityEngine::AnimationCurve value)  {
::cordl_internals::setInstanceField<::UnityEngine::AnimationCurve, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::AnimationCurve>(value));
}
constexpr ::UnityEngine::AnimationCurve ::GlobalNamespace::BeatEffect::__get__lightIntensityCurve() const {
return ::cordl_internals::getInstanceField<::UnityEngine::AnimationCurve, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::BeatEffect::__set__spriteXScaleCurve(::UnityEngine::AnimationCurve value)  {
::cordl_internals::setInstanceField<::UnityEngine::AnimationCurve, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::AnimationCurve>(value));
}
constexpr ::UnityEngine::AnimationCurve ::GlobalNamespace::BeatEffect::__get__spriteXScaleCurve() const {
return ::cordl_internals::getInstanceField<::UnityEngine::AnimationCurve, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::BeatEffect::__set__spriteYScaleCurve(::UnityEngine::AnimationCurve value)  {
::cordl_internals::setInstanceField<::UnityEngine::AnimationCurve, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::AnimationCurve>(value));
}
constexpr ::UnityEngine::AnimationCurve ::GlobalNamespace::BeatEffect::__get__spriteYScaleCurve() const {
return ::cordl_internals::getInstanceField<::UnityEngine::AnimationCurve, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::BeatEffect::__set__transparencyCurve(::UnityEngine::AnimationCurve value)  {
::cordl_internals::setInstanceField<::UnityEngine::AnimationCurve, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::AnimationCurve>(value));
}
constexpr ::UnityEngine::AnimationCurve ::GlobalNamespace::BeatEffect::__get__transparencyCurve() const {
return ::cordl_internals::getInstanceField<::UnityEngine::AnimationCurve, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::BeatEffect::__set__didFinishEvent(::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::IBeatEffectDidFinishEvent> value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::IBeatEffectDidFinishEvent>, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::IBeatEffectDidFinishEvent>>(value));
}
constexpr ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::IBeatEffectDidFinishEvent> ::GlobalNamespace::BeatEffect::__get__didFinishEvent() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::IBeatEffectDidFinishEvent>, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::BeatEffect::__set__animationDuration(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::GlobalNamespace::BeatEffect::__get__animationDuration() const {
return ::cordl_internals::getInstanceField<float_t, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::BeatEffect::__set__elapsedTime(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x5c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::GlobalNamespace::BeatEffect::__get__elapsedTime() const {
return ::cordl_internals::getInstanceField<float_t, 0x5c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::BeatEffect::__set__color(::UnityEngine::Color value)  {
::cordl_internals::setInstanceField<::UnityEngine::Color, 0x60>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Color>(value));
}
constexpr ::UnityEngine::Color ::GlobalNamespace::BeatEffect::__get__color() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Color, 0x60>(this->::bs_hook::Il2CppWrapperType::instance);
}
 ::GlobalNamespace::ILazyCopyHashSet_1<::GlobalNamespace::IBeatEffectDidFinishEvent> ::GlobalNamespace::BeatEffect::get_didFinishEvent()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatEffect>::get(),
                            "get_didFinishEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ILazyCopyHashSet_1<::GlobalNamespace::IBeatEffectDidFinishEvent>, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::BeatEffect::Init(::UnityEngine::Color color, float_t animationDuration, ::UnityEngine::Quaternion rotation)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatEffect>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, color, animationDuration, rotation);
}
 void ::GlobalNamespace::BeatEffect::ManualUpdate(float_t deltaTime)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatEffect>::get(),
                            "ManualUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, deltaTime);
}
// Ctor Parameters []
 ::GlobalNamespace::BeatEffect::BeatEffect()  : ::UnityEngine::MonoBehaviour(THROW_UNLESS(::il2cpp_utils::New<BeatEffect>())) {}
 void ::GlobalNamespace::BeatEffect::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatEffect>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__BeatEffect__Pool._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__BeatEffect__Pool::*)()>(&::GlobalNamespace::____GlobalNamespace__BeatEffect__Pool::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x224da50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__BeatEffect__Pool>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters []
 ::GlobalNamespace::____GlobalNamespace__BeatEffect__Pool::____GlobalNamespace__BeatEffect__Pool()  : ::Zenject::MonoMemoryPool_1<::GlobalNamespace::BeatEffect>(THROW_UNLESS(::il2cpp_utils::New<____GlobalNamespace__BeatEffect__Pool>())) {}
 void ::GlobalNamespace::____GlobalNamespace__BeatEffect__Pool::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__BeatEffect__Pool>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
