#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "System/zzzz__ValueType_impl.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_1_impl.hpp"
#include "TMPro/zzzz__ColorTween_def.hpp"
#include "TMPro/zzzz__ITweenValue_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/Events/zzzz__UnityAction_1_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr TMPro::TMPro__ColorTween__ColorTweenMode::TMPro__ColorTween__ColorTweenMode(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void TMPro::TMPro__ColorTween__ColorTweenMode::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t TMPro::TMPro__ColorTween__ColorTweenMode::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr TMPro::TMPro__ColorTween__ColorTweenMode  TMPro::TMPro__ColorTween__ColorTweenMode::All{0};
constexpr TMPro::TMPro__ColorTween__ColorTweenMode  TMPro::TMPro__ColorTween__ColorTweenMode::RGB{1};
constexpr TMPro::TMPro__ColorTween__ColorTweenMode  TMPro::TMPro__ColorTween__ColorTweenMode::Alpha{2};
//  Writing Method size for method: TMPro::TMPro__ColorTween__ColorTweenCallback._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (TMPro::TMPro__ColorTween__ColorTweenCallback::*)()>(&TMPro::TMPro__ColorTween__ColorTweenCallback::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2a6a930;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::TMPro__ColorTween__ColorTweenCallback>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters []
 TMPro::TMPro__ColorTween__ColorTweenCallback::TMPro__ColorTween__ColorTweenCallback()  : UnityEngine::Events::UnityEvent_1<UnityEngine::Color>(THROW_UNLESS(::il2cpp_utils::New<TMPro__ColorTween__ColorTweenCallback>())) {}
 void TMPro::TMPro__ColorTween__ColorTweenCallback::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::TMPro__ColorTween__ColorTweenCallback>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: TMPro::ColorTween.get_startColor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Color (TMPro::ColorTween::*)()>(&TMPro::ColorTween::get_startColor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2a6a758;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::ColorTween>::get(),
                            "get_startColor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: TMPro::ColorTween.set_startColor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (TMPro::ColorTween::*)(UnityEngine::Color)>(&TMPro::ColorTween::set_startColor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2a6a764;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::ColorTween>::get(),
                            "set_startColor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Color>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: TMPro::ColorTween.get_targetColor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Color (TMPro::ColorTween::*)()>(&TMPro::ColorTween::get_targetColor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2a6a770;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::ColorTween>::get(),
                            "get_targetColor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: TMPro::ColorTween.set_targetColor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (TMPro::ColorTween::*)(UnityEngine::Color)>(&TMPro::ColorTween::set_targetColor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2a6a77c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::ColorTween>::get(),
                            "set_targetColor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Color>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: TMPro::ColorTween.get_tweenMode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<TMPro::TMPro__ColorTween__ColorTweenMode (TMPro::ColorTween::*)()>(&TMPro::ColorTween::get_tweenMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a6a788;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::ColorTween>::get(),
                            "get_tweenMode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: TMPro::ColorTween.set_tweenMode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (TMPro::ColorTween::*)(TMPro::TMPro__ColorTween__ColorTweenMode)>(&TMPro::ColorTween::set_tweenMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a6a790;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::ColorTween>::get(),
                            "set_tweenMode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TMPro::TMPro__ColorTween__ColorTweenMode>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: TMPro::ColorTween.get_duration
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (TMPro::ColorTween::*)()>(&TMPro::ColorTween::get_duration)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a6a798;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::ColorTween>::get(),
                            "get_duration",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: TMPro::ColorTween.set_duration
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (TMPro::ColorTween::*)(float_t)>(&TMPro::ColorTween::set_duration)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a6a7a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::ColorTween>::get(),
                            "set_duration",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: TMPro::ColorTween.get_ignoreTimeScale
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (TMPro::ColorTween::*)()>(&TMPro::ColorTween::get_ignoreTimeScale)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a6a7a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::ColorTween>::get(),
                            "get_ignoreTimeScale",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: TMPro::ColorTween.set_ignoreTimeScale
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (TMPro::ColorTween::*)(bool)>(&TMPro::ColorTween::set_ignoreTimeScale)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2a6a7b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::ColorTween>::get(),
                            "set_ignoreTimeScale",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: TMPro::ColorTween.TweenValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (TMPro::ColorTween::*)(float_t)>(&TMPro::ColorTween::TweenValue)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x2a6a7bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::ColorTween>::get(),
                            "TweenValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: TMPro::ColorTween.AddOnChangedCallback
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (TMPro::ColorTween::*)(UnityEngine::Events::UnityAction_1<UnityEngine::Color>)>(&TMPro::ColorTween::AddOnChangedCallback)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2a6a8a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::ColorTween>::get(),
                            "AddOnChangedCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Events::UnityAction_1<UnityEngine::Color>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: TMPro::ColorTween.GetIgnoreTimescale
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (TMPro::ColorTween::*)()>(&TMPro::ColorTween::GetIgnoreTimescale)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a6a978;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::ColorTween>::get(),
                            "GetIgnoreTimescale",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: TMPro::ColorTween.GetDuration
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (TMPro::ColorTween::*)()>(&TMPro::ColorTween::GetDuration)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a6a980;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::ColorTween>::get(),
                            "GetDuration",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: TMPro::ColorTween.ValidTarget
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (TMPro::ColorTween::*)()>(&TMPro::ColorTween::ValidTarget)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2a6a898;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::ColorTween>::get(),
                            "ValidTarget",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to TMPro::ITweenValue
constexpr  TMPro::ColorTween::operator TMPro::ITweenValue() const {
return TMPro::ITweenValue(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "m_Target", ty: "TMPro::TMPro__ColorTween__ColorTweenCallback", modifiers: "", def_value: Some("csnull") }, CppParam { name: "m_StartColor", ty: "UnityEngine::Color", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_TargetColor", ty: "UnityEngine::Color", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_TweenMode", ty: "TMPro::TMPro__ColorTween__ColorTweenMode", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Duration", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_IgnoreTimeScale", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr TMPro::ColorTween::ColorTween(TMPro::TMPro__ColorTween__ColorTweenCallback m_Target, UnityEngine::Color m_StartColor, UnityEngine::Color m_TargetColor, TMPro::TMPro__ColorTween__ColorTweenMode m_TweenMode, float_t m_Duration, bool m_IgnoreTimeScale) noexcept : ::bs_hook::ValueTypeWrapper() {this->m_Target = m_Target;
this->m_StartColor = m_StartColor;
this->m_TargetColor = m_TargetColor;
this->m_TweenMode = m_TweenMode;
this->m_Duration = m_Duration;
this->m_IgnoreTimeScale = m_IgnoreTimeScale;
}
constexpr void TMPro::ColorTween::__set_m_Target(TMPro::TMPro__ColorTween__ColorTweenCallback value)  {
::cordl_internals::setInstanceField<TMPro::TMPro__ColorTween__ColorTweenCallback, 0x0>(this->__instance, std::forward<TMPro::TMPro__ColorTween__ColorTweenCallback>(value));
}
constexpr TMPro::TMPro__ColorTween__ColorTweenCallback TMPro::ColorTween::__get_m_Target() const {
return ::cordl_internals::getInstanceField<TMPro::TMPro__ColorTween__ColorTweenCallback, 0x0>(this->__instance);
}
constexpr void TMPro::ColorTween::__set_m_StartColor(UnityEngine::Color value)  {
::cordl_internals::setInstanceField<UnityEngine::Color, 0x8>(this->__instance, std::forward<UnityEngine::Color>(value));
}
constexpr UnityEngine::Color TMPro::ColorTween::__get_m_StartColor() const {
return ::cordl_internals::getInstanceField<UnityEngine::Color, 0x8>(this->__instance);
}
constexpr void TMPro::ColorTween::__set_m_TargetColor(UnityEngine::Color value)  {
::cordl_internals::setInstanceField<UnityEngine::Color, 0x18>(this->__instance, std::forward<UnityEngine::Color>(value));
}
constexpr UnityEngine::Color TMPro::ColorTween::__get_m_TargetColor() const {
return ::cordl_internals::getInstanceField<UnityEngine::Color, 0x18>(this->__instance);
}
constexpr void TMPro::ColorTween::__set_m_TweenMode(TMPro::TMPro__ColorTween__ColorTweenMode value)  {
::cordl_internals::setInstanceField<TMPro::TMPro__ColorTween__ColorTweenMode, 0x28>(this->__instance, std::forward<TMPro::TMPro__ColorTween__ColorTweenMode>(value));
}
constexpr TMPro::TMPro__ColorTween__ColorTweenMode TMPro::ColorTween::__get_m_TweenMode() const {
return ::cordl_internals::getInstanceField<TMPro::TMPro__ColorTween__ColorTweenMode, 0x28>(this->__instance);
}
constexpr void TMPro::ColorTween::__set_m_Duration(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x2c>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t TMPro::ColorTween::__get_m_Duration() const {
return ::cordl_internals::getInstanceField<float_t, 0x2c>(this->__instance);
}
constexpr void TMPro::ColorTween::__set_m_IgnoreTimeScale(bool value)  {
::cordl_internals::setInstanceField<bool, 0x30>(this->__instance, std::forward<bool>(value));
}
constexpr bool TMPro::ColorTween::__get_m_IgnoreTimeScale() const {
return ::cordl_internals::getInstanceField<bool, 0x30>(this->__instance);
}
 UnityEngine::Color TMPro::ColorTween::get_startColor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::ColorTween>::get(),
                            "get_startColor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Color, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void TMPro::ColorTween::set_startColor(UnityEngine::Color value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::ColorTween>::get(),
                            "set_startColor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Color>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, value);
}
 UnityEngine::Color TMPro::ColorTween::get_targetColor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::ColorTween>::get(),
                            "get_targetColor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Color, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void TMPro::ColorTween::set_targetColor(UnityEngine::Color value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::ColorTween>::get(),
                            "set_targetColor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Color>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, value);
}
 TMPro::TMPro__ColorTween__ColorTweenMode TMPro::ColorTween::get_tweenMode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::ColorTween>::get(),
                            "get_tweenMode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<TMPro::TMPro__ColorTween__ColorTweenMode, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void TMPro::ColorTween::set_tweenMode(TMPro::TMPro__ColorTween__ColorTweenMode value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::ColorTween>::get(),
                            "set_tweenMode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TMPro::TMPro__ColorTween__ColorTweenMode>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, value);
}
 float_t TMPro::ColorTween::get_duration()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::ColorTween>::get(),
                            "get_duration",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void TMPro::ColorTween::set_duration(float_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::ColorTween>::get(),
                            "set_duration",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, value);
}
 bool TMPro::ColorTween::get_ignoreTimeScale()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::ColorTween>::get(),
                            "get_ignoreTimeScale",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void TMPro::ColorTween::set_ignoreTimeScale(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::ColorTween>::get(),
                            "set_ignoreTimeScale",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, value);
}
 void TMPro::ColorTween::TweenValue(float_t floatPercentage)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::ColorTween>::get(),
                            "TweenValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, floatPercentage);
}
 void TMPro::ColorTween::AddOnChangedCallback(UnityEngine::Events::UnityAction_1<UnityEngine::Color> callback)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::ColorTween>::get(),
                            "AddOnChangedCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Events::UnityAction_1<UnityEngine::Color>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, callback);
}
 bool TMPro::ColorTween::GetIgnoreTimescale()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::ColorTween>::get(),
                            "GetIgnoreTimescale",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 float_t TMPro::ColorTween::GetDuration()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::ColorTween>::get(),
                            "GetDuration",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 bool TMPro::ColorTween::ValidTarget()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::ColorTween>::get(),
                            "ValidTarget",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
