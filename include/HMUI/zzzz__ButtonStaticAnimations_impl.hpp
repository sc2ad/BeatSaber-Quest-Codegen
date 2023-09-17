#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
namespace {
#include "HMUI/zzzz__ButtonStaticAnimations_def.hpp"
#include "HMUI/zzzz__NoTransitionsButton_def.hpp"
#include "UnityEngine/zzzz__AnimationClip_def.hpp"
#include "HMUI/zzzz__NoTransitionsButton_def.hpp"
//  Writing Method size for method: ::HMUI::ButtonStaticAnimations.Awake
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::ButtonStaticAnimations::*)()>(&::HMUI::ButtonStaticAnimations::Awake)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x1fbcfc4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ButtonStaticAnimations>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ButtonStaticAnimations.Start
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::ButtonStaticAnimations::*)()>(&::HMUI::ButtonStaticAnimations::Start)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x1fbd04c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ButtonStaticAnimations>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ButtonStaticAnimations.OnEnable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::ButtonStaticAnimations::*)()>(&::HMUI::ButtonStaticAnimations::OnEnable)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x1fbd168;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ButtonStaticAnimations>::get(),
                            "OnEnable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ButtonStaticAnimations.OnDestroy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::ButtonStaticAnimations::*)()>(&::HMUI::ButtonStaticAnimations::OnDestroy)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1fbd184;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ButtonStaticAnimations>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ButtonStaticAnimations.HandleButtonSelectionStateDidChange
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::ButtonStaticAnimations::*)(::HMUI::____HMUI__NoTransitionsButton__SelectionState)>(&::HMUI::ButtonStaticAnimations::HandleButtonSelectionStateDidChange)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x1fbd070;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ButtonStaticAnimations>::get(),
                            "HandleButtonSelectionStateDidChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::____HMUI__NoTransitionsButton__SelectionState>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ButtonStaticAnimations._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::ButtonStaticAnimations::*)()>(&::HMUI::ButtonStaticAnimations::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fbd254;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ButtonStaticAnimations>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::HMUI::ButtonStaticAnimations::__set__button(::HMUI::NoTransitionsButton value)  {
::cordl_internals::setInstanceField<::HMUI::NoTransitionsButton, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::HMUI::NoTransitionsButton>(value));
}
constexpr ::HMUI::NoTransitionsButton ::HMUI::ButtonStaticAnimations::__get__button() const {
return ::cordl_internals::getInstanceField<::HMUI::NoTransitionsButton, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HMUI::ButtonStaticAnimations::__set__normalClip(::UnityEngine::AnimationClip value)  {
::cordl_internals::setInstanceField<::UnityEngine::AnimationClip, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::AnimationClip>(value));
}
constexpr ::UnityEngine::AnimationClip ::HMUI::ButtonStaticAnimations::__get__normalClip() const {
return ::cordl_internals::getInstanceField<::UnityEngine::AnimationClip, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HMUI::ButtonStaticAnimations::__set__highlightedClip(::UnityEngine::AnimationClip value)  {
::cordl_internals::setInstanceField<::UnityEngine::AnimationClip, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::AnimationClip>(value));
}
constexpr ::UnityEngine::AnimationClip ::HMUI::ButtonStaticAnimations::__get__highlightedClip() const {
return ::cordl_internals::getInstanceField<::UnityEngine::AnimationClip, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HMUI::ButtonStaticAnimations::__set__pressedClip(::UnityEngine::AnimationClip value)  {
::cordl_internals::setInstanceField<::UnityEngine::AnimationClip, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::AnimationClip>(value));
}
constexpr ::UnityEngine::AnimationClip ::HMUI::ButtonStaticAnimations::__get__pressedClip() const {
return ::cordl_internals::getInstanceField<::UnityEngine::AnimationClip, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HMUI::ButtonStaticAnimations::__set__disabledClip(::UnityEngine::AnimationClip value)  {
::cordl_internals::setInstanceField<::UnityEngine::AnimationClip, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::AnimationClip>(value));
}
constexpr ::UnityEngine::AnimationClip ::HMUI::ButtonStaticAnimations::__get__disabledClip() const {
return ::cordl_internals::getInstanceField<::UnityEngine::AnimationClip, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HMUI::ButtonStaticAnimations::__set__didStart(bool value)  {
::cordl_internals::setInstanceField<bool, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::HMUI::ButtonStaticAnimations::__get__didStart() const {
return ::cordl_internals::getInstanceField<bool, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void ::HMUI::ButtonStaticAnimations::Awake()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ButtonStaticAnimations>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::HMUI::ButtonStaticAnimations::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ButtonStaticAnimations>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::HMUI::ButtonStaticAnimations::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ButtonStaticAnimations>::get(),
                            "OnEnable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::HMUI::ButtonStaticAnimations::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ButtonStaticAnimations>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::HMUI::ButtonStaticAnimations::HandleButtonSelectionStateDidChange(::HMUI::____HMUI__NoTransitionsButton__SelectionState state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ButtonStaticAnimations>::get(),
                            "HandleButtonSelectionStateDidChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::____HMUI__NoTransitionsButton__SelectionState>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, state);
}
// Ctor Parameters []
 ::HMUI::ButtonStaticAnimations::ButtonStaticAnimations()  : ::UnityEngine::MonoBehaviour(THROW_UNLESS(::il2cpp_utils::New<ButtonStaticAnimations>())) {}
 void ::HMUI::ButtonStaticAnimations::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ButtonStaticAnimations>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
