#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "HMUI/zzzz__SwitchView_def.hpp"
#include "UnityEngine/zzzz__AnimationClip_def.hpp"
#include "HMUI/zzzz__ToggleWithCallbacks_def.hpp"
#include "HMUI/zzzz__SwitchView_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr HMUI::HMUI__SwitchView__AnimationType::HMUI__SwitchView__AnimationType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void HMUI::HMUI__SwitchView__AnimationType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t HMUI::HMUI__SwitchView__AnimationType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr HMUI::HMUI__SwitchView__AnimationType  HMUI::HMUI__SwitchView__AnimationType::OnOff{0};
constexpr HMUI::HMUI__SwitchView__AnimationType  HMUI::HMUI__SwitchView__AnimationType::SelectedState{1};
//  Writing Method size for method: HMUI::SwitchView.Awake
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::SwitchView::*)()>(&HMUI::SwitchView::Awake)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1fd31f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::SwitchView>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HMUI::SwitchView.Start
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::SwitchView::*)()>(&HMUI::SwitchView::Start)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x1fd3248;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::SwitchView>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HMUI::SwitchView.OnDestroy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::SwitchView::*)()>(&HMUI::SwitchView::OnDestroy)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x1fd3534;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::SwitchView>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HMUI::SwitchView.HandleOnValueChanged
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::SwitchView::*)(bool)>(&HMUI::SwitchView::HandleOnValueChanged)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x1fd36f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::SwitchView>::get(),
                            "HandleOnValueChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HMUI::SwitchView.HandleStateDidChange
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::SwitchView::*)(HMUI::HMUI__ToggleWithCallbacks__SelectionState)>(&HMUI::SwitchView::HandleStateDidChange)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x1fd36f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::SwitchView>::get(),
                            "HandleStateDidChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HMUI::HMUI__ToggleWithCallbacks__SelectionState>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HMUI::SwitchView.RefreshVisuals
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::SwitchView::*)()>(&HMUI::SwitchView::RefreshVisuals)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x1fd3410;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::SwitchView>::get(),
                            "RefreshVisuals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HMUI::SwitchView._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::SwitchView::*)()>(&HMUI::SwitchView::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fd3750;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::SwitchView>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void HMUI::SwitchView::__set__animationType(HMUI::HMUI__SwitchView__AnimationType value)  {
::cordl_internals::setInstanceField<HMUI::HMUI__SwitchView__AnimationType, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<HMUI::HMUI__SwitchView__AnimationType>(value));
}
constexpr HMUI::HMUI__SwitchView__AnimationType HMUI::SwitchView::__get__animationType() const {
return ::cordl_internals::getInstanceField<HMUI::HMUI__SwitchView__AnimationType, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HMUI::SwitchView::__set__normalAnimationClip(UnityEngine::AnimationClip value)  {
::cordl_internals::setInstanceField<UnityEngine::AnimationClip, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::AnimationClip>(value));
}
constexpr UnityEngine::AnimationClip HMUI::SwitchView::__get__normalAnimationClip() const {
return ::cordl_internals::getInstanceField<UnityEngine::AnimationClip, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HMUI::SwitchView::__set__highlightedAnimationClip(UnityEngine::AnimationClip value)  {
::cordl_internals::setInstanceField<UnityEngine::AnimationClip, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::AnimationClip>(value));
}
constexpr UnityEngine::AnimationClip HMUI::SwitchView::__get__highlightedAnimationClip() const {
return ::cordl_internals::getInstanceField<UnityEngine::AnimationClip, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HMUI::SwitchView::__set__pressedAnimationClip(UnityEngine::AnimationClip value)  {
::cordl_internals::setInstanceField<UnityEngine::AnimationClip, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::AnimationClip>(value));
}
constexpr UnityEngine::AnimationClip HMUI::SwitchView::__get__pressedAnimationClip() const {
return ::cordl_internals::getInstanceField<UnityEngine::AnimationClip, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HMUI::SwitchView::__set__disabledAnimationClip(UnityEngine::AnimationClip value)  {
::cordl_internals::setInstanceField<UnityEngine::AnimationClip, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::AnimationClip>(value));
}
constexpr UnityEngine::AnimationClip HMUI::SwitchView::__get__disabledAnimationClip() const {
return ::cordl_internals::getInstanceField<UnityEngine::AnimationClip, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HMUI::SwitchView::__set__onAnimationClip(UnityEngine::AnimationClip value)  {
::cordl_internals::setInstanceField<UnityEngine::AnimationClip, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::AnimationClip>(value));
}
constexpr UnityEngine::AnimationClip HMUI::SwitchView::__get__onAnimationClip() const {
return ::cordl_internals::getInstanceField<UnityEngine::AnimationClip, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HMUI::SwitchView::__set__offAnimationClip(UnityEngine::AnimationClip value)  {
::cordl_internals::setInstanceField<UnityEngine::AnimationClip, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::AnimationClip>(value));
}
constexpr UnityEngine::AnimationClip HMUI::SwitchView::__get__offAnimationClip() const {
return ::cordl_internals::getInstanceField<UnityEngine::AnimationClip, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HMUI::SwitchView::__set__selectedAnimationClip(UnityEngine::AnimationClip value)  {
::cordl_internals::setInstanceField<UnityEngine::AnimationClip, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::AnimationClip>(value));
}
constexpr UnityEngine::AnimationClip HMUI::SwitchView::__get__selectedAnimationClip() const {
return ::cordl_internals::getInstanceField<UnityEngine::AnimationClip, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HMUI::SwitchView::__set__selectedAndHighlightedAnimationClip(UnityEngine::AnimationClip value)  {
::cordl_internals::setInstanceField<UnityEngine::AnimationClip, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::AnimationClip>(value));
}
constexpr UnityEngine::AnimationClip HMUI::SwitchView::__get__selectedAndHighlightedAnimationClip() const {
return ::cordl_internals::getInstanceField<UnityEngine::AnimationClip, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HMUI::SwitchView::__set__toggle(HMUI::ToggleWithCallbacks value)  {
::cordl_internals::setInstanceField<HMUI::ToggleWithCallbacks, 0x60>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<HMUI::ToggleWithCallbacks>(value));
}
constexpr HMUI::ToggleWithCallbacks HMUI::SwitchView::__get__toggle() const {
return ::cordl_internals::getInstanceField<HMUI::ToggleWithCallbacks, 0x60>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void HMUI::SwitchView::Awake()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::SwitchView>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void HMUI::SwitchView::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::SwitchView>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void HMUI::SwitchView::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::SwitchView>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void HMUI::SwitchView::HandleOnValueChanged(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::SwitchView>::get(),
                            "HandleOnValueChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void HMUI::SwitchView::HandleStateDidChange(HMUI::HMUI__ToggleWithCallbacks__SelectionState value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::SwitchView>::get(),
                            "HandleStateDidChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HMUI::HMUI__ToggleWithCallbacks__SelectionState>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void HMUI::SwitchView::RefreshVisuals()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::SwitchView>::get(),
                            "RefreshVisuals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 HMUI::SwitchView HMUI::SwitchView::New_ctor()  {
HMUI::SwitchView o{THROW_UNLESS(::il2cpp_utils::New<HMUI::SwitchView>())};
return o;
}
 void HMUI::SwitchView::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::SwitchView>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
