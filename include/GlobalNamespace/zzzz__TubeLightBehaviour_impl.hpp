#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "UnityEngine/Playables/zzzz__PlayableBehaviour_impl.hpp"
namespace {
#include "GlobalNamespace/zzzz__TubeLightBehaviour_def.hpp"
#include "GlobalNamespace/zzzz__ColorSO_def.hpp"
#include "GlobalNamespace/zzzz__TubeBloomPrePassLight_def.hpp"
#include "GlobalNamespace/zzzz__DirectionalLight_def.hpp"
#include "UnityEngine/Playables/zzzz__Playable_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/Playables/zzzz__FrameData_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::____GlobalNamespace__TubeLightBehaviour__ParameterType::____GlobalNamespace__TubeLightBehaviour__ParameterType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::GlobalNamespace::____GlobalNamespace__TubeLightBehaviour__ParameterType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::____GlobalNamespace__TubeLightBehaviour__ParameterType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::GlobalNamespace::____GlobalNamespace__TubeLightBehaviour__ParameterType  ::GlobalNamespace::____GlobalNamespace__TubeLightBehaviour__ParameterType::Values{0};
constexpr ::GlobalNamespace::____GlobalNamespace__TubeLightBehaviour__ParameterType  ::GlobalNamespace::____GlobalNamespace__TubeLightBehaviour__ParameterType::References{1};
//  Writing Method size for method: ::GlobalNamespace::TubeLightBehaviour.ProcessFrame
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TubeLightBehaviour::*)(::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::bs_hook::Il2CppWrapperType)>(&::GlobalNamespace::TubeLightBehaviour::ProcessFrame)> {
  constexpr static std::size_t size = 0x408;
  constexpr static std::size_t addrs = 0x21b32c8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::TubeLightBehaviour),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TubeLightBehaviour>::get(),
                                  20
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TubeLightBehaviour.OnPlayableDestroy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TubeLightBehaviour::*)(::UnityEngine::Playables::Playable)>(&::GlobalNamespace::TubeLightBehaviour::OnPlayableDestroy)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x21b36d0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::TubeLightBehaviour),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TubeLightBehaviour>::get(),
                                  16
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TubeLightBehaviour._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TubeLightBehaviour::*)()>(&::GlobalNamespace::TubeLightBehaviour::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21b379c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TubeLightBehaviour>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::GlobalNamespace::TubeLightBehaviour::__set__noPredefinedStartValue(bool value)  {
::cordl_internals::setInstanceField<bool, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::GlobalNamespace::TubeLightBehaviour::__get__noPredefinedStartValue() const {
return ::cordl_internals::getInstanceField<bool, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::TubeLightBehaviour::__set_startColor(::GlobalNamespace::ColorSO value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::ColorSO, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::ColorSO>(value));
}
constexpr ::GlobalNamespace::ColorSO ::GlobalNamespace::TubeLightBehaviour::__get_startColor() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::ColorSO, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::TubeLightBehaviour::__set_endColor(::GlobalNamespace::ColorSO value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::ColorSO, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::ColorSO>(value));
}
constexpr ::GlobalNamespace::ColorSO ::GlobalNamespace::TubeLightBehaviour::__get_endColor() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::ColorSO, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::TubeLightBehaviour::__set_blend(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::GlobalNamespace::TubeLightBehaviour::__get_blend() const {
return ::cordl_internals::getInstanceField<float_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::TubeLightBehaviour::__set__initialized(bool value)  {
::cordl_internals::setInstanceField<bool, 0x2c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::GlobalNamespace::TubeLightBehaviour::__get__initialized() const {
return ::cordl_internals::getInstanceField<bool, 0x2c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::TubeLightBehaviour::__set__originalColor(::UnityEngine::Color value)  {
::cordl_internals::setInstanceField<::UnityEngine::Color, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Color>(value));
}
constexpr ::UnityEngine::Color ::GlobalNamespace::TubeLightBehaviour::__get__originalColor() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Color, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::TubeLightBehaviour::__set__tubeLights(::ArrayW<::GlobalNamespace::TubeBloomPrePassLight> value)  {
::cordl_internals::setInstanceField<::ArrayW<::GlobalNamespace::TubeBloomPrePassLight>, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::GlobalNamespace::TubeBloomPrePassLight>>(value));
}
constexpr ::ArrayW<::GlobalNamespace::TubeBloomPrePassLight> ::GlobalNamespace::TubeLightBehaviour::__get__tubeLights() const {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::TubeBloomPrePassLight>, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::TubeLightBehaviour::__set__directionalLights(::ArrayW<::GlobalNamespace::DirectionalLight> value)  {
::cordl_internals::setInstanceField<::ArrayW<::GlobalNamespace::DirectionalLight>, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::GlobalNamespace::DirectionalLight>>(value));
}
constexpr ::ArrayW<::GlobalNamespace::DirectionalLight> ::GlobalNamespace::TubeLightBehaviour::__get__directionalLights() const {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::DirectionalLight>, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::TubeLightBehaviour::__set_started(bool value)  {
::cordl_internals::setInstanceField<bool, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::GlobalNamespace::TubeLightBehaviour::__get_started() const {
return ::cordl_internals::getInstanceField<bool, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::TubeLightBehaviour::__set__firstFrameColor(::UnityEngine::Color value)  {
::cordl_internals::setInstanceField<::UnityEngine::Color, 0x54>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Color>(value));
}
constexpr ::UnityEngine::Color ::GlobalNamespace::TubeLightBehaviour::__get__firstFrameColor() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Color, 0x54>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void ::GlobalNamespace::TubeLightBehaviour::ProcessFrame(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info, ::bs_hook::Il2CppWrapperType playerData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TubeLightBehaviour>::get(),
                            "ProcessFrame",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::Playable>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::FrameData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, playable, info, playerData);
}
 void ::GlobalNamespace::TubeLightBehaviour::OnPlayableDestroy(::UnityEngine::Playables::Playable playable)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TubeLightBehaviour>::get(),
                            "OnPlayableDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::Playable>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, playable);
}
// Ctor Parameters []
 ::GlobalNamespace::TubeLightBehaviour::TubeLightBehaviour()  : ::UnityEngine::Playables::PlayableBehaviour(THROW_UNLESS(::il2cpp_utils::New<TubeLightBehaviour>())) {}
 void ::GlobalNamespace::TubeLightBehaviour::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TubeLightBehaviour>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
