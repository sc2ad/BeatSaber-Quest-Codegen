#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "UnityEngine/Playables/zzzz__PlayableBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__GhostEffectBehaviour_def.hpp"
#include "UnityEngine/zzzz__CanvasGroup_def.hpp"
#include "GlobalNamespace/zzzz__EaseType_def.hpp"
#include "TMPro/zzzz__TextMeshPro_def.hpp"
#include "UnityEngine/Playables/zzzz__Playable_def.hpp"
#include "GlobalNamespace/zzzz__GhostEffectBehaviour_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/Playables/zzzz__FrameData_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__GhostEffectBehaviour__EndBehavior::GlobalNamespace__GhostEffectBehaviour__EndBehavior(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void GlobalNamespace::GlobalNamespace__GhostEffectBehaviour__EndBehavior::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__GhostEffectBehaviour__EndBehavior::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr GlobalNamespace::GlobalNamespace__GhostEffectBehaviour__EndBehavior  GlobalNamespace::GlobalNamespace__GhostEffectBehaviour__EndBehavior::DisableAll{0};
constexpr GlobalNamespace::GlobalNamespace__GhostEffectBehaviour__EndBehavior  GlobalNamespace::GlobalNamespace__GhostEffectBehaviour__EndBehavior::DisableCopies{1};
constexpr GlobalNamespace::GlobalNamespace__GhostEffectBehaviour__EndBehavior  GlobalNamespace::GlobalNamespace__GhostEffectBehaviour__EndBehavior::Nothing{2};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__GhostEffectBehaviour__GhostEffectType::GlobalNamespace__GhostEffectBehaviour__GhostEffectType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void GlobalNamespace::GlobalNamespace__GhostEffectBehaviour__GhostEffectType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__GhostEffectBehaviour__GhostEffectType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr GlobalNamespace::GlobalNamespace__GhostEffectBehaviour__GhostEffectType  GlobalNamespace::GlobalNamespace__GhostEffectBehaviour__GhostEffectType::TextMeshPro{0};
constexpr GlobalNamespace::GlobalNamespace__GhostEffectBehaviour__GhostEffectType  GlobalNamespace::GlobalNamespace__GhostEffectBehaviour__GhostEffectType::Canvas{1};
//  Writing Method size for method: GlobalNamespace::GhostEffectBehaviour.OnBehaviourPlay
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GhostEffectBehaviour::*)(UnityEngine::Playables::Playable, UnityEngine::Playables::FrameData)>(&GlobalNamespace::GhostEffectBehaviour::OnBehaviourPlay)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x21b2888;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::GhostEffectBehaviour),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GhostEffectBehaviour>::get(),
                                  17
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GhostEffectBehaviour.ProcessFrame
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GhostEffectBehaviour::*)(UnityEngine::Playables::Playable, UnityEngine::Playables::FrameData, ::bs_hook::Il2CppWrapperType)>(&GlobalNamespace::GhostEffectBehaviour::ProcessFrame)> {
  constexpr static std::size_t size = 0x438;
  constexpr static std::size_t addrs = 0x21b2b2c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::GhostEffectBehaviour),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GhostEffectBehaviour>::get(),
                                  20
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GhostEffectBehaviour.EnableObjects
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GhostEffectBehaviour::*)(bool)>(&GlobalNamespace::GhostEffectBehaviour::EnableObjects)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x21b2a18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GhostEffectBehaviour>::get(),
                            "EnableObjects",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GhostEffectBehaviour._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GhostEffectBehaviour::*)()>(&GlobalNamespace::GhostEffectBehaviour::_ctor)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x21b2f64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GhostEffectBehaviour>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::GhostEffectBehaviour::__set_alphaCurve(UnityEngine::AnimationCurve value)  {
::cordl_internals::setInstanceField<UnityEngine::AnimationCurve, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::AnimationCurve>(value));
}
constexpr UnityEngine::AnimationCurve GlobalNamespace::GhostEffectBehaviour::__get_alphaCurve() const {
return ::cordl_internals::getInstanceField<UnityEngine::AnimationCurve, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GhostEffectBehaviour::__set_sizeCurve(UnityEngine::AnimationCurve value)  {
::cordl_internals::setInstanceField<UnityEngine::AnimationCurve, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::AnimationCurve>(value));
}
constexpr UnityEngine::AnimationCurve GlobalNamespace::GhostEffectBehaviour::__get_sizeCurve() const {
return ::cordl_internals::getInstanceField<UnityEngine::AnimationCurve, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GhostEffectBehaviour::__set_distanceCurve(UnityEngine::AnimationCurve value)  {
::cordl_internals::setInstanceField<UnityEngine::AnimationCurve, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::AnimationCurve>(value));
}
constexpr UnityEngine::AnimationCurve GlobalNamespace::GhostEffectBehaviour::__get_distanceCurve() const {
return ::cordl_internals::getInstanceField<UnityEngine::AnimationCurve, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GhostEffectBehaviour::__set__distanceMultiplier(UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<UnityEngine::Vector3, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Vector3>(value));
}
constexpr UnityEngine::Vector3 GlobalNamespace::GhostEffectBehaviour::__get__distanceMultiplier() const {
return ::cordl_internals::getInstanceField<UnityEngine::Vector3, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GhostEffectBehaviour::__set__useStartTransform(bool value)  {
::cordl_internals::setInstanceField<bool, 0x34>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::GhostEffectBehaviour::__get__useStartTransform() const {
return ::cordl_internals::getInstanceField<bool, 0x34>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GhostEffectBehaviour::__set__useEndTransform(bool value)  {
::cordl_internals::setInstanceField<bool, 0x35>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::GhostEffectBehaviour::__get__useEndTransform() const {
return ::cordl_internals::getInstanceField<bool, 0x35>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GhostEffectBehaviour::__set__startLocalPosition(UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<UnityEngine::Vector3, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Vector3>(value));
}
constexpr UnityEngine::Vector3 GlobalNamespace::GhostEffectBehaviour::__get__startLocalPosition() const {
return ::cordl_internals::getInstanceField<UnityEngine::Vector3, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GhostEffectBehaviour::__set__startTransform(UnityEngine::Transform value)  {
::cordl_internals::setInstanceField<UnityEngine::Transform, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Transform>(value));
}
constexpr UnityEngine::Transform GlobalNamespace::GhostEffectBehaviour::__get__startTransform() const {
return ::cordl_internals::getInstanceField<UnityEngine::Transform, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GhostEffectBehaviour::__set__endLocalPosition(UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<UnityEngine::Vector3, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Vector3>(value));
}
constexpr UnityEngine::Vector3 GlobalNamespace::GhostEffectBehaviour::__get__endLocalPosition() const {
return ::cordl_internals::getInstanceField<UnityEngine::Vector3, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GhostEffectBehaviour::__set__endTransform(UnityEngine::Transform value)  {
::cordl_internals::setInstanceField<UnityEngine::Transform, 0x60>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Transform>(value));
}
constexpr UnityEngine::Transform GlobalNamespace::GhostEffectBehaviour::__get__endTransform() const {
return ::cordl_internals::getInstanceField<UnityEngine::Transform, 0x60>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GhostEffectBehaviour::__set__positionEasing(GlobalNamespace::EaseType value)  {
::cordl_internals::setInstanceField<GlobalNamespace::EaseType, 0x68>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::EaseType>(value));
}
constexpr GlobalNamespace::EaseType GlobalNamespace::GhostEffectBehaviour::__get__positionEasing() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::EaseType, 0x68>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GhostEffectBehaviour::__set__endBehavior(GlobalNamespace::GlobalNamespace__GhostEffectBehaviour__EndBehavior value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__GhostEffectBehaviour__EndBehavior, 0x6c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__GhostEffectBehaviour__EndBehavior>(value));
}
constexpr GlobalNamespace::GlobalNamespace__GhostEffectBehaviour__EndBehavior GlobalNamespace::GhostEffectBehaviour::__get__endBehavior() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__GhostEffectBehaviour__EndBehavior, 0x6c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GhostEffectBehaviour::__set_progress(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x70>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::GhostEffectBehaviour::__get_progress() const {
return ::cordl_internals::getInstanceField<float_t, 0x70>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GhostEffectBehaviour::__set_textMeshPros(::ArrayW<TMPro::TextMeshPro> value)  {
::cordl_internals::setInstanceField<::ArrayW<TMPro::TextMeshPro>, 0x78>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<TMPro::TextMeshPro>>(value));
}
constexpr ::ArrayW<TMPro::TextMeshPro> GlobalNamespace::GhostEffectBehaviour::__get_textMeshPros() const {
return ::cordl_internals::getInstanceField<::ArrayW<TMPro::TextMeshPro>, 0x78>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GhostEffectBehaviour::__set__canvasGroups(::ArrayW<UnityEngine::CanvasGroup> value)  {
::cordl_internals::setInstanceField<::ArrayW<UnityEngine::CanvasGroup>, 0x80>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<UnityEngine::CanvasGroup>>(value));
}
constexpr ::ArrayW<UnityEngine::CanvasGroup> GlobalNamespace::GhostEffectBehaviour::__get__canvasGroups() const {
return ::cordl_internals::getInstanceField<::ArrayW<UnityEngine::CanvasGroup>, 0x80>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GhostEffectBehaviour::__set__ghostEffectType(GlobalNamespace::GlobalNamespace__GhostEffectBehaviour__GhostEffectType value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__GhostEffectBehaviour__GhostEffectType, 0x88>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__GhostEffectBehaviour__GhostEffectType>(value));
}
constexpr GlobalNamespace::GlobalNamespace__GhostEffectBehaviour__GhostEffectType GlobalNamespace::GhostEffectBehaviour::__get__ghostEffectType() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__GhostEffectBehaviour__GhostEffectType, 0x88>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GhostEffectBehaviour::__set__ghostEffectTransform(UnityEngine::Transform value)  {
::cordl_internals::setInstanceField<UnityEngine::Transform, 0x90>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Transform>(value));
}
constexpr UnityEngine::Transform GlobalNamespace::GhostEffectBehaviour::__get__ghostEffectTransform() const {
return ::cordl_internals::getInstanceField<UnityEngine::Transform, 0x90>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GhostEffectBehaviour::__set__direction(UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<UnityEngine::Vector3, 0x98>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Vector3>(value));
}
constexpr UnityEngine::Vector3 GlobalNamespace::GhostEffectBehaviour::__get__direction() const {
return ::cordl_internals::getInstanceField<UnityEngine::Vector3, 0x98>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GhostEffectBehaviour::__set__finished(bool value)  {
::cordl_internals::setInstanceField<bool, 0xa4>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::GhostEffectBehaviour::__get__finished() const {
return ::cordl_internals::getInstanceField<bool, 0xa4>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void GlobalNamespace::GhostEffectBehaviour::OnBehaviourPlay(UnityEngine::Playables::Playable playable, UnityEngine::Playables::FrameData info)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GhostEffectBehaviour>::get(),
                            "OnBehaviourPlay",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Playables::Playable>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Playables::FrameData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, playable, info);
}
 void GlobalNamespace::GhostEffectBehaviour::ProcessFrame(UnityEngine::Playables::Playable playable, UnityEngine::Playables::FrameData info, ::bs_hook::Il2CppWrapperType playerData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GhostEffectBehaviour>::get(),
                            "ProcessFrame",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Playables::Playable>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Playables::FrameData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, playable, info, playerData);
}
 void GlobalNamespace::GhostEffectBehaviour::EnableObjects(bool on)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GhostEffectBehaviour>::get(),
                            "EnableObjects",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, on);
}
 GlobalNamespace::GhostEffectBehaviour GlobalNamespace::GhostEffectBehaviour::New_ctor()  {
GlobalNamespace::GhostEffectBehaviour o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::GhostEffectBehaviour>())};
return o;
}
 void GlobalNamespace::GhostEffectBehaviour::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GhostEffectBehaviour>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
