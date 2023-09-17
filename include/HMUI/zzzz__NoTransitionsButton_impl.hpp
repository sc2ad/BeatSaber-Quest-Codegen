#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "UnityEngine/UI/zzzz__Button_impl.hpp"
namespace {
#include "HMUI/zzzz__NoTransitionsButton_def.hpp"
#include "UnityEngine/UI/zzzz__Selectable_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HMUI::____HMUI__NoTransitionsButton__SelectionState::____HMUI__NoTransitionsButton__SelectionState(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::HMUI::____HMUI__NoTransitionsButton__SelectionState::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::HMUI::____HMUI__NoTransitionsButton__SelectionState::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::HMUI::____HMUI__NoTransitionsButton__SelectionState  ::HMUI::____HMUI__NoTransitionsButton__SelectionState::Normal{0};
constexpr ::HMUI::____HMUI__NoTransitionsButton__SelectionState  ::HMUI::____HMUI__NoTransitionsButton__SelectionState::Highlighted{1};
constexpr ::HMUI::____HMUI__NoTransitionsButton__SelectionState  ::HMUI::____HMUI__NoTransitionsButton__SelectionState::Pressed{2};
constexpr ::HMUI::____HMUI__NoTransitionsButton__SelectionState  ::HMUI::____HMUI__NoTransitionsButton__SelectionState::Disabled{3};
//  Writing Method size for method: ::HMUI::NoTransitionsButton.get_selectionState
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HMUI::____HMUI__NoTransitionsButton__SelectionState (::HMUI::NoTransitionsButton::*)()>(&::HMUI::NoTransitionsButton::get_selectionState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fbd25c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::NoTransitionsButton>::get(),
                            "get_selectionState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::NoTransitionsButton.add_selectionStateDidChangeEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::NoTransitionsButton::*)(::System::Action_1<::HMUI::____HMUI__NoTransitionsButton__SelectionState>)>(&::HMUI::NoTransitionsButton::add_selectionStateDidChangeEvent)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x1fbca80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::NoTransitionsButton>::get(),
                            "add_selectionStateDidChangeEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::HMUI::____HMUI__NoTransitionsButton__SelectionState>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::NoTransitionsButton.remove_selectionStateDidChangeEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::NoTransitionsButton::*)(::System::Action_1<::HMUI::____HMUI__NoTransitionsButton__SelectionState>)>(&::HMUI::NoTransitionsButton::remove_selectionStateDidChangeEvent)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x1fbcc68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::NoTransitionsButton>::get(),
                            "remove_selectionStateDidChangeEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::HMUI::____HMUI__NoTransitionsButton__SelectionState>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::NoTransitionsButton.DoStateTransition
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::NoTransitionsButton::*)(::UnityEngine::UI::____UnityEngine__UI__Selectable__SelectionState, bool)>(&::HMUI::NoTransitionsButton::DoStateTransition)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1fbd264;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::HMUI::NoTransitionsButton),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::NoTransitionsButton>::get(),
                                  26
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::NoTransitionsButton._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::NoTransitionsButton::*)()>(&::HMUI::NoTransitionsButton::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fbd2a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::NoTransitionsButton>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::HMUI::NoTransitionsButton::__set_selectionStateDidChangeEvent(::System::Action_1<::HMUI::____HMUI__NoTransitionsButton__SelectionState> value)  {
::cordl_internals::setInstanceField<::System::Action_1<::HMUI::____HMUI__NoTransitionsButton__SelectionState>, 0x100>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Action_1<::HMUI::____HMUI__NoTransitionsButton__SelectionState>>(value));
}
constexpr ::System::Action_1<::HMUI::____HMUI__NoTransitionsButton__SelectionState> ::HMUI::NoTransitionsButton::__get_selectionStateDidChangeEvent() const {
return ::cordl_internals::getInstanceField<::System::Action_1<::HMUI::____HMUI__NoTransitionsButton__SelectionState>, 0x100>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HMUI::NoTransitionsButton::__set__selectionState(::HMUI::____HMUI__NoTransitionsButton__SelectionState value)  {
::cordl_internals::setInstanceField<::HMUI::____HMUI__NoTransitionsButton__SelectionState, 0x108>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::HMUI::____HMUI__NoTransitionsButton__SelectionState>(value));
}
constexpr ::HMUI::____HMUI__NoTransitionsButton__SelectionState ::HMUI::NoTransitionsButton::__get__selectionState() const {
return ::cordl_internals::getInstanceField<::HMUI::____HMUI__NoTransitionsButton__SelectionState, 0x108>(this->::bs_hook::Il2CppWrapperType::instance);
}
 ::HMUI::____HMUI__NoTransitionsButton__SelectionState ::HMUI::NoTransitionsButton::get_selectionState()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::NoTransitionsButton>::get(),
                            "get_selectionState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::HMUI::____HMUI__NoTransitionsButton__SelectionState, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::HMUI::NoTransitionsButton::add_selectionStateDidChangeEvent(::System::Action_1<::HMUI::____HMUI__NoTransitionsButton__SelectionState> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::NoTransitionsButton>::get(),
                            "add_selectionStateDidChangeEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::HMUI::____HMUI__NoTransitionsButton__SelectionState>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void ::HMUI::NoTransitionsButton::remove_selectionStateDidChangeEvent(::System::Action_1<::HMUI::____HMUI__NoTransitionsButton__SelectionState> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::NoTransitionsButton>::get(),
                            "remove_selectionStateDidChangeEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::HMUI::____HMUI__NoTransitionsButton__SelectionState>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void ::HMUI::NoTransitionsButton::DoStateTransition(::UnityEngine::UI::____UnityEngine__UI__Selectable__SelectionState state, bool instant)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::NoTransitionsButton>::get(),
                            "DoStateTransition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::____UnityEngine__UI__Selectable__SelectionState>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, state, instant);
}
// Ctor Parameters []
 ::HMUI::NoTransitionsButton::NoTransitionsButton()  : ::UnityEngine::UI::Button(THROW_UNLESS(::il2cpp_utils::New<NoTransitionsButton>())) {}
 void ::HMUI::NoTransitionsButton::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::NoTransitionsButton>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
