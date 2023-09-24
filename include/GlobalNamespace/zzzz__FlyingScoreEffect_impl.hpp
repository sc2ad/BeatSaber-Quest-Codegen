#pragma once
#include "GlobalNamespace/zzzz__FlyingObjectEffect_impl.hpp"
#include "Zenject/zzzz__MonoMemoryPool_1_impl.hpp"
#include "GlobalNamespace/zzzz__FlyingScoreEffect_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "GlobalNamespace/zzzz__ICutScoreBufferDidChangeReceiver_def.hpp"
#include "GlobalNamespace/zzzz__ICutScoreBufferDidFinishReceiver_def.hpp"
#include "TMPro/zzzz__TextMeshPro_def.hpp"
#include "GlobalNamespace/zzzz__CutScoreBuffer_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__SpriteRenderer_def.hpp"
#include "GlobalNamespace/zzzz__FlyingScoreEffect_def.hpp"
#include "GlobalNamespace/zzzz__IReadonlyCutScoreBuffer_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
//  Writing Method size for method: GlobalNamespace::FlyingScoreEffect.InitAndPresent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FlyingScoreEffect::*)(GlobalNamespace::IReadonlyCutScoreBuffer, float_t, UnityEngine::Vector3, UnityEngine::Color)>(&GlobalNamespace::FlyingScoreEffect::InitAndPresent)> {
  constexpr static std::size_t size = 0x4e4;
  constexpr static std::size_t addrs = 0x2250b08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::FlyingScoreEffect>::get(),
                            "InitAndPresent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IReadonlyCutScoreBuffer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Color>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::FlyingScoreEffect.ManualUpdate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FlyingScoreEffect::*)(float_t)>(&GlobalNamespace::FlyingScoreEffect::ManualUpdate)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2251074;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::FlyingScoreEffect),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::FlyingScoreEffect>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::FlyingScoreEffect.HandleCutScoreBufferDidChange
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FlyingScoreEffect::*)(GlobalNamespace::CutScoreBuffer)>(&GlobalNamespace::FlyingScoreEffect::HandleCutScoreBufferDidChange)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x22510fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::FlyingScoreEffect>::get(),
                            "HandleCutScoreBufferDidChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::CutScoreBuffer>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::FlyingScoreEffect.RefreshScore
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FlyingScoreEffect::*)(int32_t, int32_t)>(&GlobalNamespace::FlyingScoreEffect::RefreshScore)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2250fec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::FlyingScoreEffect>::get(),
                            "RefreshScore",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::FlyingScoreEffect.HandleCutScoreBufferDidFinish
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FlyingScoreEffect::*)(GlobalNamespace::CutScoreBuffer)>(&GlobalNamespace::FlyingScoreEffect::HandleCutScoreBufferDidFinish)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2251148;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::FlyingScoreEffect>::get(),
                            "HandleCutScoreBufferDidFinish",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::CutScoreBuffer>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::FlyingScoreEffect.UnregisterCallbacksIfNeeded
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FlyingScoreEffect::*)()>(&GlobalNamespace::FlyingScoreEffect::UnregisterCallbacksIfNeeded)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x225114c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::FlyingScoreEffect>::get(),
                            "UnregisterCallbacksIfNeeded",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::FlyingScoreEffect._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FlyingScoreEffect::*)()>(&GlobalNamespace::FlyingScoreEffect::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2251274;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::FlyingScoreEffect>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to GlobalNamespace::ICutScoreBufferDidChangeReceiver
constexpr  GlobalNamespace::FlyingScoreEffect::operator GlobalNamespace::ICutScoreBufferDidChangeReceiver() const noexcept {
return GlobalNamespace::ICutScoreBufferDidChangeReceiver(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to GlobalNamespace::ICutScoreBufferDidFinishReceiver
constexpr  GlobalNamespace::FlyingScoreEffect::operator GlobalNamespace::ICutScoreBufferDidFinishReceiver() const noexcept {
return GlobalNamespace::ICutScoreBufferDidFinishReceiver(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::FlyingScoreEffect::__set__fadeAnimationCurve(UnityEngine::AnimationCurve value)  {
::cordl_internals::setInstanceField<UnityEngine::AnimationCurve, 0x80>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::AnimationCurve>(value));
}
constexpr UnityEngine::AnimationCurve GlobalNamespace::FlyingScoreEffect::__get__fadeAnimationCurve() const {
return ::cordl_internals::getInstanceField<UnityEngine::AnimationCurve, 0x80>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::FlyingScoreEffect::__set__maxCutDistanceScoreIndicator(UnityEngine::SpriteRenderer value)  {
::cordl_internals::setInstanceField<UnityEngine::SpriteRenderer, 0x88>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::SpriteRenderer>(value));
}
constexpr UnityEngine::SpriteRenderer GlobalNamespace::FlyingScoreEffect::__get__maxCutDistanceScoreIndicator() const {
return ::cordl_internals::getInstanceField<UnityEngine::SpriteRenderer, 0x88>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::FlyingScoreEffect::__set__text(TMPro::TextMeshPro value)  {
::cordl_internals::setInstanceField<TMPro::TextMeshPro, 0x90>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<TMPro::TextMeshPro>(value));
}
constexpr TMPro::TextMeshPro GlobalNamespace::FlyingScoreEffect::__get__text() const {
return ::cordl_internals::getInstanceField<TMPro::TextMeshPro, 0x90>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::FlyingScoreEffect::__set__color(UnityEngine::Color value)  {
::cordl_internals::setInstanceField<UnityEngine::Color, 0x98>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Color>(value));
}
constexpr UnityEngine::Color GlobalNamespace::FlyingScoreEffect::__get__color() const {
return ::cordl_internals::getInstanceField<UnityEngine::Color, 0x98>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::FlyingScoreEffect::__set__colorAMultiplier(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0xa8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::FlyingScoreEffect::__get__colorAMultiplier() const {
return ::cordl_internals::getInstanceField<float_t, 0xa8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::FlyingScoreEffect::__set__registeredToCallbacks(bool value)  {
::cordl_internals::setInstanceField<bool, 0xac>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::FlyingScoreEffect::__get__registeredToCallbacks() const {
return ::cordl_internals::getInstanceField<bool, 0xac>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::FlyingScoreEffect::__set__cutScoreBuffer(GlobalNamespace::IReadonlyCutScoreBuffer value)  {
::cordl_internals::setInstanceField<GlobalNamespace::IReadonlyCutScoreBuffer, 0xb0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::IReadonlyCutScoreBuffer>(value));
}
constexpr GlobalNamespace::IReadonlyCutScoreBuffer GlobalNamespace::FlyingScoreEffect::__get__cutScoreBuffer() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::IReadonlyCutScoreBuffer, 0xb0>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void GlobalNamespace::FlyingScoreEffect::InitAndPresent(GlobalNamespace::IReadonlyCutScoreBuffer cutScoreBuffer, float_t duration, UnityEngine::Vector3 targetPos, UnityEngine::Color color)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::FlyingScoreEffect>::get(),
                            "InitAndPresent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IReadonlyCutScoreBuffer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Color>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, cutScoreBuffer, duration, targetPos, color);
}
 void GlobalNamespace::FlyingScoreEffect::ManualUpdate(float_t t)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::FlyingScoreEffect>::get(),
                            "ManualUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, t);
}
 void GlobalNamespace::FlyingScoreEffect::HandleCutScoreBufferDidChange(GlobalNamespace::CutScoreBuffer cutScoreBuffer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::FlyingScoreEffect>::get(),
                            "HandleCutScoreBufferDidChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::CutScoreBuffer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, cutScoreBuffer);
}
 void GlobalNamespace::FlyingScoreEffect::RefreshScore(int32_t score, int32_t maxPossibleCutScore)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::FlyingScoreEffect>::get(),
                            "RefreshScore",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, score, maxPossibleCutScore);
}
 void GlobalNamespace::FlyingScoreEffect::HandleCutScoreBufferDidFinish(GlobalNamespace::CutScoreBuffer cutScoreBuffer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::FlyingScoreEffect>::get(),
                            "HandleCutScoreBufferDidFinish",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::CutScoreBuffer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, cutScoreBuffer);
}
 void GlobalNamespace::FlyingScoreEffect::UnregisterCallbacksIfNeeded()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::FlyingScoreEffect>::get(),
                            "UnregisterCallbacksIfNeeded",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 GlobalNamespace::FlyingScoreEffect GlobalNamespace::FlyingScoreEffect::New_ctor()  {
GlobalNamespace::FlyingScoreEffect o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::FlyingScoreEffect>())};
return o;
}
 void GlobalNamespace::FlyingScoreEffect::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::FlyingScoreEffect>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__FlyingScoreEffect__Pool.OnDespawned
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__FlyingScoreEffect__Pool::*)(GlobalNamespace::FlyingScoreEffect)>(&GlobalNamespace::GlobalNamespace__FlyingScoreEffect__Pool::OnDespawned)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x22512a4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::GlobalNamespace__FlyingScoreEffect__Pool),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__FlyingScoreEffect__Pool>::get(),
                                  16
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__FlyingScoreEffect__Pool._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__FlyingScoreEffect__Pool::*)()>(&GlobalNamespace::GlobalNamespace__FlyingScoreEffect__Pool::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2251304;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__FlyingScoreEffect__Pool>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 void GlobalNamespace::GlobalNamespace__FlyingScoreEffect__Pool::OnDespawned(GlobalNamespace::FlyingScoreEffect item)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__FlyingScoreEffect__Pool>::get(),
                            "OnDespawned",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::FlyingScoreEffect>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, item);
}
 GlobalNamespace::GlobalNamespace__FlyingScoreEffect__Pool GlobalNamespace::GlobalNamespace__FlyingScoreEffect__Pool::New_ctor()  {
GlobalNamespace::GlobalNamespace__FlyingScoreEffect__Pool o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::GlobalNamespace__FlyingScoreEffect__Pool>())};
return o;
}
 void GlobalNamespace::GlobalNamespace__FlyingScoreEffect__Pool::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__FlyingScoreEffect__Pool>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
