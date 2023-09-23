#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "UnityEngine/UI/zzzz__Toggle_impl.hpp"
#include "HMUI/zzzz__ToggleWithCallbacks_def.hpp"
#include "UnityEngine/UI/zzzz__Selectable_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr HMUI::HMUI__ToggleWithCallbacks__SelectionState::HMUI__ToggleWithCallbacks__SelectionState(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void HMUI::HMUI__ToggleWithCallbacks__SelectionState::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t HMUI::HMUI__ToggleWithCallbacks__SelectionState::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr HMUI::HMUI__ToggleWithCallbacks__SelectionState  HMUI::HMUI__ToggleWithCallbacks__SelectionState::Normal{0};
constexpr HMUI::HMUI__ToggleWithCallbacks__SelectionState  HMUI::HMUI__ToggleWithCallbacks__SelectionState::Highlighted{1};
constexpr HMUI::HMUI__ToggleWithCallbacks__SelectionState  HMUI::HMUI__ToggleWithCallbacks__SelectionState::Pressed{2};
constexpr HMUI::HMUI__ToggleWithCallbacks__SelectionState  HMUI::HMUI__ToggleWithCallbacks__SelectionState::Selected{3};
constexpr HMUI::HMUI__ToggleWithCallbacks__SelectionState  HMUI::HMUI__ToggleWithCallbacks__SelectionState::Disabled{4};
//  Writing Method size for method: HMUI::ToggleWithCallbacks.add_stateDidChangeEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::ToggleWithCallbacks::*)(System::Action_1<HMUI::HMUI__ToggleWithCallbacks__SelectionState>)>(&HMUI::ToggleWithCallbacks::add_stateDidChangeEvent)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x1fd335c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::ToggleWithCallbacks>::get(),
                            "add_stateDidChangeEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<HMUI::HMUI__ToggleWithCallbacks__SelectionState>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HMUI::ToggleWithCallbacks.remove_stateDidChangeEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::ToggleWithCallbacks::*)(System::Action_1<HMUI::HMUI__ToggleWithCallbacks__SelectionState>)>(&HMUI::ToggleWithCallbacks::remove_stateDidChangeEvent)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x1fd3640;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::ToggleWithCallbacks>::get(),
                            "remove_stateDidChangeEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<HMUI::HMUI__ToggleWithCallbacks__SelectionState>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HMUI::ToggleWithCallbacks.get_selectionState
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<HMUI::HMUI__ToggleWithCallbacks__SelectionState (HMUI::ToggleWithCallbacks::*)()>(&HMUI::ToggleWithCallbacks::get_selectionState)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x1fd36fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::ToggleWithCallbacks>::get(),
                            "get_selectionState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HMUI::ToggleWithCallbacks.DoStateTransition
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::ToggleWithCallbacks::*)(UnityEngine::UI::UnityEngine__UI__Selectable__SelectionState, bool)>(&HMUI::ToggleWithCallbacks::DoStateTransition)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x1fd7240;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(HMUI::ToggleWithCallbacks),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::ToggleWithCallbacks>::get(),
                                  26
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: HMUI::ToggleWithCallbacks._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::ToggleWithCallbacks::*)()>(&HMUI::ToggleWithCallbacks::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fd728c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::ToggleWithCallbacks>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void HMUI::ToggleWithCallbacks::__set_stateDidChangeEvent(System::Action_1<HMUI::HMUI__ToggleWithCallbacks__SelectionState> value)  {
::cordl_internals::setInstanceField<System::Action_1<HMUI::HMUI__ToggleWithCallbacks__SelectionState>, 0x120>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_1<HMUI::HMUI__ToggleWithCallbacks__SelectionState>>(value));
}
constexpr System::Action_1<HMUI::HMUI__ToggleWithCallbacks__SelectionState> HMUI::ToggleWithCallbacks::__get_stateDidChangeEvent() const {
return ::cordl_internals::getInstanceField<System::Action_1<HMUI::HMUI__ToggleWithCallbacks__SelectionState>, 0x120>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void HMUI::ToggleWithCallbacks::add_stateDidChangeEvent(System::Action_1<HMUI::HMUI__ToggleWithCallbacks__SelectionState> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::ToggleWithCallbacks>::get(),
                            "add_stateDidChangeEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<HMUI::HMUI__ToggleWithCallbacks__SelectionState>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void HMUI::ToggleWithCallbacks::remove_stateDidChangeEvent(System::Action_1<HMUI::HMUI__ToggleWithCallbacks__SelectionState> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::ToggleWithCallbacks>::get(),
                            "remove_stateDidChangeEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<HMUI::HMUI__ToggleWithCallbacks__SelectionState>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 HMUI::HMUI__ToggleWithCallbacks__SelectionState HMUI::ToggleWithCallbacks::get_selectionState()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::ToggleWithCallbacks>::get(),
                            "get_selectionState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<HMUI::HMUI__ToggleWithCallbacks__SelectionState, false>(const_cast<void*>(instance), ___internal_method);
}
 void HMUI::ToggleWithCallbacks::DoStateTransition(UnityEngine::UI::UnityEngine__UI__Selectable__SelectionState state, bool instant)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::ToggleWithCallbacks>::get(),
                            "DoStateTransition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UI::UnityEngine__UI__Selectable__SelectionState>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, state, instant);
}
// Ctor Parameters []
 HMUI::ToggleWithCallbacks::ToggleWithCallbacks()  : UnityEngine::UI::Toggle(THROW_UNLESS(::il2cpp_utils::New<ToggleWithCallbacks>())) {}
 void HMUI::ToggleWithCallbacks::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::ToggleWithCallbacks>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
