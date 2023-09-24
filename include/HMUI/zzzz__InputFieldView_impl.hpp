#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_1_impl.hpp"
#include "UnityEngine/UI/zzzz__Selectable_impl.hpp"
#include "HMUI/zzzz__InputFieldView_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "HMUI/zzzz__ButtonBinder_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "HMUI/zzzz__InputFieldView_def.hpp"
#include "TMPro/zzzz__TextMeshProUGUI_def.hpp"
#include "UnityEngine/UI/zzzz__Button_def.hpp"
#include "UnityEngine/zzzz__YieldInstruction_def.hpp"
#include "UnityEngine/UI/zzzz__Selectable_def.hpp"
#include "HMUI/zzzz__ImageView_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__CanvasGroup_def.hpp"
#include "HMUI/zzzz__UIKeyboard_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr HMUI::HMUI__InputFieldView__SelectionState::HMUI__InputFieldView__SelectionState(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void HMUI::HMUI__InputFieldView__SelectionState::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t HMUI::HMUI__InputFieldView__SelectionState::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr HMUI::HMUI__InputFieldView__SelectionState  HMUI::HMUI__InputFieldView__SelectionState::Normal{0};
constexpr HMUI::HMUI__InputFieldView__SelectionState  HMUI::HMUI__InputFieldView__SelectionState::Highlighted{1};
constexpr HMUI::HMUI__InputFieldView__SelectionState  HMUI::HMUI__InputFieldView__SelectionState::Pressed{2};
constexpr HMUI::HMUI__InputFieldView__SelectionState  HMUI::HMUI__InputFieldView__SelectionState::Disabled{3};
constexpr HMUI::HMUI__InputFieldView__SelectionState  HMUI::HMUI__InputFieldView__SelectionState::Selected{4};
//  Writing Method size for method: HMUI::InputFieldView.get_selectionState
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<HMUI::HMUI__InputFieldView__SelectionState (HMUI::InputFieldView::*)()>(&HMUI::InputFieldView::get_selectionState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fcd0d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::InputFieldView>::get(),
                            "get_selectionState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HMUI::InputFieldView.get_keyboardPositionOffset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (HMUI::InputFieldView::*)()>(&HMUI::InputFieldView::get_keyboardPositionOffset)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1fcd0d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::InputFieldView>::get(),
                            "get_keyboardPositionOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HMUI::InputFieldView.add_selectionStateDidChangeEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::InputFieldView::*)(System::Action_1<HMUI::HMUI__InputFieldView__SelectionState>)>(&HMUI::InputFieldView::add_selectionStateDidChangeEvent)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x1fcd0e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::InputFieldView>::get(),
                            "add_selectionStateDidChangeEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<HMUI::HMUI__InputFieldView__SelectionState>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HMUI::InputFieldView.remove_selectionStateDidChangeEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::InputFieldView::*)(System::Action_1<HMUI::HMUI__InputFieldView__SelectionState>)>(&HMUI::InputFieldView::remove_selectionStateDidChangeEvent)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x1fcd19c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::InputFieldView>::get(),
                            "remove_selectionStateDidChangeEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<HMUI::HMUI__InputFieldView__SelectionState>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HMUI::InputFieldView.get_onValueChanged
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<HMUI::HMUI__InputFieldView__InputFieldChanged (HMUI::InputFieldView::*)()>(&HMUI::InputFieldView::get_onValueChanged)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fcd250;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::InputFieldView>::get(),
                            "get_onValueChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HMUI::InputFieldView.set_onValueChanged
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::InputFieldView::*)(HMUI::HMUI__InputFieldView__InputFieldChanged)>(&HMUI::InputFieldView::set_onValueChanged)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fcd258;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::InputFieldView>::get(),
                            "set_onValueChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HMUI::HMUI__InputFieldView__InputFieldChanged>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HMUI::InputFieldView.get_useGlobalKeyboard
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HMUI::InputFieldView::*)()>(&HMUI::InputFieldView::get_useGlobalKeyboard)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fcd260;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::InputFieldView>::get(),
                            "get_useGlobalKeyboard",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HMUI::InputFieldView.get_text
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (HMUI::InputFieldView::*)()>(&HMUI::InputFieldView::get_text)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fcd268;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::InputFieldView>::get(),
                            "get_text",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HMUI::InputFieldView.set_text
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::InputFieldView::*)(::StringW)>(&HMUI::InputFieldView::set_text)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x1fcd270;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::InputFieldView>::get(),
                            "set_text",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HMUI::InputFieldView.Awake
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::InputFieldView::*)()>(&HMUI::InputFieldView::Awake)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x1fcd3e8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(HMUI::InputFieldView),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::InputFieldView>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: HMUI::InputFieldView.OnDestroy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::InputFieldView::*)()>(&HMUI::InputFieldView::OnDestroy)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x1fcd4d4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(HMUI::InputFieldView),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::InputFieldView>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: HMUI::InputFieldView.DoStateTransition
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::InputFieldView::*)(UnityEngine::UI::UnityEngine__UI__Selectable__SelectionState, bool)>(&HMUI::InputFieldView::DoStateTransition)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1fcd4e8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(HMUI::InputFieldView),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::InputFieldView>::get(),
                                  26
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: HMUI::InputFieldView.ActivateKeyboard
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::InputFieldView::*)(HMUI::UIKeyboard)>(&HMUI::InputFieldView::ActivateKeyboard)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x1fcd548;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::InputFieldView>::get(),
                            "ActivateKeyboard",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HMUI::UIKeyboard>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HMUI::InputFieldView.DeactivateKeyboard
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::InputFieldView::*)(HMUI::UIKeyboard)>(&HMUI::InputFieldView::DeactivateKeyboard)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x1fcd77c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::InputFieldView>::get(),
                            "DeactivateKeyboard",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HMUI::UIKeyboard>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HMUI::InputFieldView.SetText
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::InputFieldView::*)(::StringW)>(&HMUI::InputFieldView::SetText)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x1fcd950;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::InputFieldView>::get(),
                            "SetText",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HMUI::InputFieldView.ClearInput
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::InputFieldView::*)()>(&HMUI::InputFieldView::ClearInput)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1fcd968;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::InputFieldView>::get(),
                            "ClearInput",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HMUI::InputFieldView.KeyboardKeyPressed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::InputFieldView::*)(char16_t)>(&HMUI::InputFieldView::KeyboardKeyPressed)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x1fcd9b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::InputFieldView>::get(),
                            "KeyboardKeyPressed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HMUI::InputFieldView.KeyboardDeletePressed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::InputFieldView::*)()>(&HMUI::InputFieldView::KeyboardDeletePressed)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x1fcdae0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::InputFieldView>::get(),
                            "KeyboardDeletePressed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HMUI::InputFieldView.BlinkingCaretCoroutine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IEnumerator (HMUI::InputFieldView::*)()>(&HMUI::InputFieldView::BlinkingCaretCoroutine)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x1fcd714;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::InputFieldView>::get(),
                            "BlinkingCaretCoroutine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HMUI::InputFieldView.UpdateCaretPosition
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::InputFieldView::*)()>(&HMUI::InputFieldView::UpdateCaretPosition)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1fcd2c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::InputFieldView>::get(),
                            "UpdateCaretPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HMUI::InputFieldView.UpdatePlaceholder
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::InputFieldView::*)()>(&HMUI::InputFieldView::UpdatePlaceholder)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1fcd3b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::InputFieldView>::get(),
                            "UpdatePlaceholder",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HMUI::InputFieldView.UpdateClearButton
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::InputFieldView::*)()>(&HMUI::InputFieldView::UpdateClearButton)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x1fcd91c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::InputFieldView>::get(),
                            "UpdateClearButton",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HMUI::InputFieldView._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::InputFieldView::*)()>(&HMUI::InputFieldView::_ctor)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x1fcdbe4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::InputFieldView>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HMUI::InputFieldView._Awake_b__34_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::InputFieldView::*)()>(&HMUI::InputFieldView::_Awake_b__34_0)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x1fcdd64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::InputFieldView>::get(),
                            "<Awake>b__34_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void HMUI::InputFieldView::__set__textView(TMPro::TextMeshProUGUI value)  {
::cordl_internals::setInstanceField<TMPro::TextMeshProUGUI, 0xf8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<TMPro::TextMeshProUGUI>(value));
}
constexpr TMPro::TextMeshProUGUI HMUI::InputFieldView::__get__textView() const {
return ::cordl_internals::getInstanceField<TMPro::TextMeshProUGUI, 0xf8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HMUI::InputFieldView::__set__textViewCanvasGroup(UnityEngine::CanvasGroup value)  {
::cordl_internals::setInstanceField<UnityEngine::CanvasGroup, 0x100>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::CanvasGroup>(value));
}
constexpr UnityEngine::CanvasGroup HMUI::InputFieldView::__get__textViewCanvasGroup() const {
return ::cordl_internals::getInstanceField<UnityEngine::CanvasGroup, 0x100>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HMUI::InputFieldView::__set__blinkingCaret(HMUI::ImageView value)  {
::cordl_internals::setInstanceField<HMUI::ImageView, 0x108>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<HMUI::ImageView>(value));
}
constexpr HMUI::ImageView HMUI::InputFieldView::__get__blinkingCaret() const {
return ::cordl_internals::getInstanceField<HMUI::ImageView, 0x108>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HMUI::InputFieldView::__set__placeholderText(UnityEngine::GameObject value)  {
::cordl_internals::setInstanceField<UnityEngine::GameObject, 0x110>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::GameObject>(value));
}
constexpr UnityEngine::GameObject HMUI::InputFieldView::__get__placeholderText() const {
return ::cordl_internals::getInstanceField<UnityEngine::GameObject, 0x110>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HMUI::InputFieldView::__set__clearSearchButton(UnityEngine::UI::Button value)  {
::cordl_internals::setInstanceField<UnityEngine::UI::Button, 0x118>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::UI::Button>(value));
}
constexpr UnityEngine::UI::Button HMUI::InputFieldView::__get__clearSearchButton() const {
return ::cordl_internals::getInstanceField<UnityEngine::UI::Button, 0x118>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HMUI::InputFieldView::__set__useGlobalKeyboard(bool value)  {
::cordl_internals::setInstanceField<bool, 0x120>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool HMUI::InputFieldView::__get__useGlobalKeyboard() const {
return ::cordl_internals::getInstanceField<bool, 0x120>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HMUI::InputFieldView::__set__keyboardPositionOffset(UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<UnityEngine::Vector3, 0x124>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Vector3>(value));
}
constexpr UnityEngine::Vector3 HMUI::InputFieldView::__get__keyboardPositionOffset() const {
return ::cordl_internals::getInstanceField<UnityEngine::Vector3, 0x124>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HMUI::InputFieldView::__set__useUppercase(bool value)  {
::cordl_internals::setInstanceField<bool, 0x130>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool HMUI::InputFieldView::__get__useUppercase() const {
return ::cordl_internals::getInstanceField<bool, 0x130>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HMUI::InputFieldView::__set__textLengthLimit(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x134>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t HMUI::InputFieldView::__get__textLengthLimit() const {
return ::cordl_internals::getInstanceField<int32_t, 0x134>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HMUI::InputFieldView::__set__caretOffset(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x138>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t HMUI::InputFieldView::__get__caretOffset() const {
return ::cordl_internals::getInstanceField<float_t, 0x138>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HMUI::InputFieldView::__set_selectionStateDidChangeEvent(System::Action_1<HMUI::HMUI__InputFieldView__SelectionState> value)  {
::cordl_internals::setInstanceField<System::Action_1<HMUI::HMUI__InputFieldView__SelectionState>, 0x140>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_1<HMUI::HMUI__InputFieldView__SelectionState>>(value));
}
constexpr System::Action_1<HMUI::HMUI__InputFieldView__SelectionState> HMUI::InputFieldView::__get_selectionStateDidChangeEvent() const {
return ::cordl_internals::getInstanceField<System::Action_1<HMUI::HMUI__InputFieldView__SelectionState>, 0x140>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HMUI::InputFieldView::__set__selectionState(HMUI::HMUI__InputFieldView__SelectionState value)  {
::cordl_internals::setInstanceField<HMUI::HMUI__InputFieldView__SelectionState, 0x148>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<HMUI::HMUI__InputFieldView__SelectionState>(value));
}
constexpr HMUI::HMUI__InputFieldView__SelectionState HMUI::InputFieldView::__get__selectionState() const {
return ::cordl_internals::getInstanceField<HMUI::HMUI__InputFieldView__SelectionState, 0x148>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HMUI::InputFieldView::__set__text(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x150>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW HMUI::InputFieldView::__get__text() const {
return ::cordl_internals::getInstanceField<::StringW, 0x150>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HMUI::InputFieldView::__set__hasKeyboardAssigned(bool value)  {
::cordl_internals::setInstanceField<bool, 0x158>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool HMUI::InputFieldView::__get__hasKeyboardAssigned() const {
return ::cordl_internals::getInstanceField<bool, 0x158>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HMUI::InputFieldView::__set__buttonBinder(HMUI::ButtonBinder value)  {
::cordl_internals::setInstanceField<HMUI::ButtonBinder, 0x160>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<HMUI::ButtonBinder>(value));
}
constexpr HMUI::ButtonBinder HMUI::InputFieldView::__get__buttonBinder() const {
return ::cordl_internals::getInstanceField<HMUI::ButtonBinder, 0x160>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HMUI::InputFieldView::__set__onValueChanged(HMUI::HMUI__InputFieldView__InputFieldChanged value)  {
::cordl_internals::setInstanceField<HMUI::HMUI__InputFieldView__InputFieldChanged, 0x168>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<HMUI::HMUI__InputFieldView__InputFieldChanged>(value));
}
constexpr HMUI::HMUI__InputFieldView__InputFieldChanged HMUI::InputFieldView::__get__onValueChanged() const {
return ::cordl_internals::getInstanceField<HMUI::HMUI__InputFieldView__InputFieldChanged, 0x168>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HMUI::InputFieldView::__set__blinkWaitYieldInstruction(UnityEngine::YieldInstruction value)  {
::cordl_internals::setInstanceField<UnityEngine::YieldInstruction, 0x170>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::YieldInstruction>(value));
}
constexpr UnityEngine::YieldInstruction HMUI::InputFieldView::__get__blinkWaitYieldInstruction() const {
return ::cordl_internals::getInstanceField<UnityEngine::YieldInstruction, 0x170>(this->::bs_hook::Il2CppWrapperType::instance);
}
 HMUI::HMUI__InputFieldView__SelectionState HMUI::InputFieldView::get_selectionState()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::InputFieldView>::get(),
                            "get_selectionState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<HMUI::HMUI__InputFieldView__SelectionState, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::Vector3 HMUI::InputFieldView::get_keyboardPositionOffset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::InputFieldView>::get(),
                            "get_keyboardPositionOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Vector3, false>(const_cast<void*>(instance), ___internal_method);
}
 void HMUI::InputFieldView::add_selectionStateDidChangeEvent(System::Action_1<HMUI::HMUI__InputFieldView__SelectionState> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::InputFieldView>::get(),
                            "add_selectionStateDidChangeEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<HMUI::HMUI__InputFieldView__SelectionState>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void HMUI::InputFieldView::remove_selectionStateDidChangeEvent(System::Action_1<HMUI::HMUI__InputFieldView__SelectionState> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::InputFieldView>::get(),
                            "remove_selectionStateDidChangeEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<HMUI::HMUI__InputFieldView__SelectionState>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 HMUI::HMUI__InputFieldView__InputFieldChanged HMUI::InputFieldView::get_onValueChanged()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::InputFieldView>::get(),
                            "get_onValueChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<HMUI::HMUI__InputFieldView__InputFieldChanged, false>(const_cast<void*>(instance), ___internal_method);
}
 void HMUI::InputFieldView::set_onValueChanged(HMUI::HMUI__InputFieldView__InputFieldChanged value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::InputFieldView>::get(),
                            "set_onValueChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HMUI::HMUI__InputFieldView__InputFieldChanged>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 bool HMUI::InputFieldView::get_useGlobalKeyboard()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::InputFieldView>::get(),
                            "get_useGlobalKeyboard",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW HMUI::InputFieldView::get_text()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::InputFieldView>::get(),
                            "get_text",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 void HMUI::InputFieldView::set_text(::StringW value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::InputFieldView>::get(),
                            "set_text",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void HMUI::InputFieldView::Awake()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::InputFieldView>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void HMUI::InputFieldView::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::InputFieldView>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void HMUI::InputFieldView::DoStateTransition(UnityEngine::UI::UnityEngine__UI__Selectable__SelectionState state, bool instant)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::InputFieldView>::get(),
                            "DoStateTransition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UI::UnityEngine__UI__Selectable__SelectionState>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, state, instant);
}
 void HMUI::InputFieldView::ActivateKeyboard(HMUI::UIKeyboard keyboard)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::InputFieldView>::get(),
                            "ActivateKeyboard",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HMUI::UIKeyboard>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, keyboard);
}
 void HMUI::InputFieldView::DeactivateKeyboard(HMUI::UIKeyboard keyboard)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::InputFieldView>::get(),
                            "DeactivateKeyboard",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HMUI::UIKeyboard>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, keyboard);
}
 void HMUI::InputFieldView::SetText(::StringW value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::InputFieldView>::get(),
                            "SetText",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void HMUI::InputFieldView::ClearInput()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::InputFieldView>::get(),
                            "ClearInput",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void HMUI::InputFieldView::KeyboardKeyPressed(char16_t letter)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::InputFieldView>::get(),
                            "KeyboardKeyPressed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, letter);
}
 void HMUI::InputFieldView::KeyboardDeletePressed()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::InputFieldView>::get(),
                            "KeyboardDeletePressed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Collections::IEnumerator HMUI::InputFieldView::BlinkingCaretCoroutine()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::InputFieldView>::get(),
                            "BlinkingCaretCoroutine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::IEnumerator, false>(const_cast<void*>(instance), ___internal_method);
}
 void HMUI::InputFieldView::UpdateCaretPosition()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::InputFieldView>::get(),
                            "UpdateCaretPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void HMUI::InputFieldView::UpdatePlaceholder()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::InputFieldView>::get(),
                            "UpdatePlaceholder",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void HMUI::InputFieldView::UpdateClearButton()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::InputFieldView>::get(),
                            "UpdateClearButton",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 HMUI::InputFieldView HMUI::InputFieldView::New_ctor()  {
HMUI::InputFieldView o{THROW_UNLESS(::il2cpp_utils::New<HMUI::InputFieldView>())};
return o;
}
 void HMUI::InputFieldView::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::InputFieldView>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void HMUI::InputFieldView::_Awake_b__34_0()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::InputFieldView>::get(),
                            "<Awake>b__34_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: HMUI::HMUI__InputFieldView__InputFieldChanged._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::HMUI__InputFieldView__InputFieldChanged::*)()>(&HMUI::HMUI__InputFieldView__InputFieldChanged::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x1fcdd1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::HMUI__InputFieldView__InputFieldChanged>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 HMUI::HMUI__InputFieldView__InputFieldChanged HMUI::HMUI__InputFieldView__InputFieldChanged::New_ctor()  {
HMUI::HMUI__InputFieldView__InputFieldChanged o{THROW_UNLESS(::il2cpp_utils::New<HMUI::HMUI__InputFieldView__InputFieldChanged>())};
return o;
}
 void HMUI::HMUI__InputFieldView__InputFieldChanged::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::HMUI__InputFieldView__InputFieldChanged>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: HMUI::HMUI__InputFieldView___BlinkingCaretCoroutine_d__43._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::HMUI__InputFieldView___BlinkingCaretCoroutine_d__43::*)(int32_t)>(&HMUI::HMUI__InputFieldView___BlinkingCaretCoroutine_d__43::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x1fcdbbc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::HMUI__InputFieldView___BlinkingCaretCoroutine_d__43>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HMUI::HMUI__InputFieldView___BlinkingCaretCoroutine_d__43.System_IDisposable_Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::HMUI__InputFieldView___BlinkingCaretCoroutine_d__43::*)()>(&HMUI::HMUI__InputFieldView___BlinkingCaretCoroutine_d__43::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x1fcddec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::HMUI__InputFieldView___BlinkingCaretCoroutine_d__43>::get(),
                            "System.IDisposable.Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HMUI::HMUI__InputFieldView___BlinkingCaretCoroutine_d__43.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HMUI::HMUI__InputFieldView___BlinkingCaretCoroutine_d__43::*)()>(&HMUI::HMUI__InputFieldView___BlinkingCaretCoroutine_d__43::MoveNext)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x1fcddf0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::HMUI__InputFieldView___BlinkingCaretCoroutine_d__43>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HMUI::HMUI__InputFieldView___BlinkingCaretCoroutine_d__43.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (HMUI::HMUI__InputFieldView___BlinkingCaretCoroutine_d__43::*)()>(&HMUI::HMUI__InputFieldView___BlinkingCaretCoroutine_d__43::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fcde7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::HMUI__InputFieldView___BlinkingCaretCoroutine_d__43>::get(),
                            "System.Collections.Generic.IEnumerator<System.Object>.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HMUI::HMUI__InputFieldView___BlinkingCaretCoroutine_d__43.System_Collections_IEnumerator_Reset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::HMUI__InputFieldView___BlinkingCaretCoroutine_d__43::*)()>(&HMUI::HMUI__InputFieldView___BlinkingCaretCoroutine_d__43::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1fcde84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::HMUI__InputFieldView___BlinkingCaretCoroutine_d__43>::get(),
                            "System.Collections.IEnumerator.Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HMUI::HMUI__InputFieldView___BlinkingCaretCoroutine_d__43.System_Collections_IEnumerator_get_Current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (HMUI::HMUI__InputFieldView___BlinkingCaretCoroutine_d__43::*)()>(&HMUI::HMUI__InputFieldView___BlinkingCaretCoroutine_d__43::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fcdec4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::HMUI__InputFieldView___BlinkingCaretCoroutine_d__43>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>
constexpr  HMUI::HMUI__InputFieldView___BlinkingCaretCoroutine_d__43::operator System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>() const noexcept {
return System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::Collections::IEnumerator
constexpr  HMUI::HMUI__InputFieldView___BlinkingCaretCoroutine_d__43::operator System::Collections::IEnumerator() const noexcept {
return System::Collections::IEnumerator(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::IDisposable
constexpr  HMUI::HMUI__InputFieldView___BlinkingCaretCoroutine_d__43::operator System::IDisposable() const noexcept {
return System::IDisposable(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HMUI::HMUI__InputFieldView___BlinkingCaretCoroutine_d__43::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t HMUI::HMUI__InputFieldView___BlinkingCaretCoroutine_d__43::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HMUI::HMUI__InputFieldView___BlinkingCaretCoroutine_d__43::__set___2__current(::bs_hook::Il2CppWrapperType value)  {
::cordl_internals::setInstanceField<::bs_hook::Il2CppWrapperType, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::bs_hook::Il2CppWrapperType>(value));
}
constexpr ::bs_hook::Il2CppWrapperType HMUI::HMUI__InputFieldView___BlinkingCaretCoroutine_d__43::__get___2__current() const {
return ::cordl_internals::getInstanceField<::bs_hook::Il2CppWrapperType, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HMUI::HMUI__InputFieldView___BlinkingCaretCoroutine_d__43::__set___4__this(HMUI::InputFieldView value)  {
::cordl_internals::setInstanceField<HMUI::InputFieldView, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<HMUI::InputFieldView>(value));
}
constexpr HMUI::InputFieldView HMUI::HMUI__InputFieldView___BlinkingCaretCoroutine_d__43::__get___4__this() const {
return ::cordl_internals::getInstanceField<HMUI::InputFieldView, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
 HMUI::HMUI__InputFieldView___BlinkingCaretCoroutine_d__43 HMUI::HMUI__InputFieldView___BlinkingCaretCoroutine_d__43::New_ctor(int32_t __1__state)  {
HMUI::HMUI__InputFieldView___BlinkingCaretCoroutine_d__43 o{THROW_UNLESS(::il2cpp_utils::New<HMUI::HMUI__InputFieldView___BlinkingCaretCoroutine_d__43>(__1__state))};
return o;
}
 void HMUI::HMUI__InputFieldView___BlinkingCaretCoroutine_d__43::_ctor(int32_t __1__state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::HMUI__InputFieldView___BlinkingCaretCoroutine_d__43>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, __1__state);
}
 void HMUI::HMUI__InputFieldView___BlinkingCaretCoroutine_d__43::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::HMUI__InputFieldView___BlinkingCaretCoroutine_d__43>::get(),
                            "System.IDisposable.Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool HMUI::HMUI__InputFieldView___BlinkingCaretCoroutine_d__43::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::HMUI__InputFieldView___BlinkingCaretCoroutine_d__43>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 ::bs_hook::Il2CppWrapperType HMUI::HMUI__InputFieldView___BlinkingCaretCoroutine_d__43::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::HMUI__InputFieldView___BlinkingCaretCoroutine_d__43>::get(),
                            "System.Collections.Generic.IEnumerator<System.Object>.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method);
}
 void HMUI::HMUI__InputFieldView___BlinkingCaretCoroutine_d__43::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::HMUI__InputFieldView___BlinkingCaretCoroutine_d__43>::get(),
                            "System.Collections.IEnumerator.Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::bs_hook::Il2CppWrapperType HMUI::HMUI__InputFieldView___BlinkingCaretCoroutine_d__43::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::HMUI__InputFieldView___BlinkingCaretCoroutine_d__43>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method);
}
