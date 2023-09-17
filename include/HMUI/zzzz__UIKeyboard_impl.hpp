#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
namespace {
#include "HMUI/zzzz__UIKeyboard_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/UI/zzzz__Button_def.hpp"
#include "TMPro/zzzz__TextMeshProUGUI_def.hpp"
#include "UnityEngine/zzzz__KeyCode_def.hpp"
#include "TMPro/zzzz__FontStyles_def.hpp"
#include "HMUI/zzzz__ButtonBinder_def.hpp"
#include "HMUI/zzzz__UIKeyboardKey_def.hpp"
//  Writing Method size for method: ::HMUI::____HMUI__UIKeyboard____c__DisplayClass13_0._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::____HMUI__UIKeyboard____c__DisplayClass13_0::*)()>(&::HMUI::____HMUI__UIKeyboard____c__DisplayClass13_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fab110;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::____HMUI__UIKeyboard____c__DisplayClass13_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::____HMUI__UIKeyboard____c__DisplayClass13_0._Awake_b__2
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::____HMUI__UIKeyboard____c__DisplayClass13_0::*)()>(&::HMUI::____HMUI__UIKeyboard____c__DisplayClass13_0::_Awake_b__2)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x1fab3d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::____HMUI__UIKeyboard____c__DisplayClass13_0>::get(),
                            "<Awake>b__2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::HMUI::____HMUI__UIKeyboard____c__DisplayClass13_0::__set_key(::HMUI::UIKeyboardKey value)  {
::cordl_internals::setInstanceField<::HMUI::UIKeyboardKey, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::HMUI::UIKeyboardKey>(value));
}
constexpr ::HMUI::UIKeyboardKey ::HMUI::____HMUI__UIKeyboard____c__DisplayClass13_0::__get_key() const {
return ::cordl_internals::getInstanceField<::HMUI::UIKeyboardKey, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HMUI::____HMUI__UIKeyboard____c__DisplayClass13_0::__set___4__this(::HMUI::UIKeyboard value)  {
::cordl_internals::setInstanceField<::HMUI::UIKeyboard, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::HMUI::UIKeyboard>(value));
}
constexpr ::HMUI::UIKeyboard ::HMUI::____HMUI__UIKeyboard____c__DisplayClass13_0::__get___4__this() const {
return ::cordl_internals::getInstanceField<::HMUI::UIKeyboard, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 ::HMUI::____HMUI__UIKeyboard____c__DisplayClass13_0::____HMUI__UIKeyboard____c__DisplayClass13_0()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<____HMUI__UIKeyboard____c__DisplayClass13_0>())) {}
 void ::HMUI::____HMUI__UIKeyboard____c__DisplayClass13_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::____HMUI__UIKeyboard____c__DisplayClass13_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::HMUI::____HMUI__UIKeyboard____c__DisplayClass13_0::_Awake_b__2()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::____HMUI__UIKeyboard____c__DisplayClass13_0>::get(),
                            "<Awake>b__2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: ::HMUI::UIKeyboard.add_okButtonWasPressedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::UIKeyboard::*)(::System::Action)>(&::HMUI::UIKeyboard::add_okButtonWasPressedEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x1faaa08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::UIKeyboard>::get(),
                            "add_okButtonWasPressedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::UIKeyboard.remove_okButtonWasPressedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::UIKeyboard::*)(::System::Action)>(&::HMUI::UIKeyboard::remove_okButtonWasPressedEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x1faaaa4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::UIKeyboard>::get(),
                            "remove_okButtonWasPressedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::UIKeyboard.add_keyWasPressedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::UIKeyboard::*)(::System::Action_1<char16_t>)>(&::HMUI::UIKeyboard::add_keyWasPressedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1faab40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::UIKeyboard>::get(),
                            "add_keyWasPressedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<char16_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::UIKeyboard.remove_keyWasPressedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::UIKeyboard::*)(::System::Action_1<char16_t>)>(&::HMUI::UIKeyboard::remove_keyWasPressedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1faabf0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::UIKeyboard>::get(),
                            "remove_keyWasPressedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<char16_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::UIKeyboard.add_deleteButtonWasPressedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::UIKeyboard::*)(::System::Action)>(&::HMUI::UIKeyboard::add_deleteButtonWasPressedEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x1faaca0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::UIKeyboard>::get(),
                            "add_deleteButtonWasPressedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::UIKeyboard.remove_deleteButtonWasPressedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::UIKeyboard::*)(::System::Action)>(&::HMUI::UIKeyboard::remove_deleteButtonWasPressedEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x1faad3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::UIKeyboard>::get(),
                            "remove_deleteButtonWasPressedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::UIKeyboard.Awake
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::UIKeyboard::*)()>(&::HMUI::UIKeyboard::Awake)> {
  constexpr static std::size_t size = 0x338;
  constexpr static std::size_t addrs = 0x1faadd8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::UIKeyboard>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::UIKeyboard.HandleKeyPress
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::UIKeyboard::*)(::UnityEngine::KeyCode)>(&::HMUI::UIKeyboard::HandleKeyPress)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x1fab118;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::UIKeyboard>::get(),
                            "HandleKeyPress",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::KeyCode>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::UIKeyboard.HandleCapsLockPressed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::UIKeyboard::*)()>(&::HMUI::UIKeyboard::HandleCapsLockPressed)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x1fab200;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::UIKeyboard>::get(),
                            "HandleCapsLockPressed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::UIKeyboard.SetKeyboardCapitalization
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::UIKeyboard::*)(bool)>(&::HMUI::UIKeyboard::SetKeyboardCapitalization)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x1fab218;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::UIKeyboard>::get(),
                            "SetKeyboardCapitalization",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::UIKeyboard.HasFontStyle
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HMUI::UIKeyboard::*)(::TMPro::TextMeshProUGUI, ::TMPro::FontStyles)>(&::HMUI::UIKeyboard::HasFontStyle)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1fab304;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::UIKeyboard>::get(),
                            "HasFontStyle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::TextMeshProUGUI>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::FontStyles>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::UIKeyboard.OnEnable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::UIKeyboard::*)()>(&::HMUI::UIKeyboard::OnEnable)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x1fab324;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::UIKeyboard>::get(),
                            "OnEnable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::UIKeyboard._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::UIKeyboard::*)()>(&::HMUI::UIKeyboard::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1fab330;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::UIKeyboard>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::UIKeyboard._Awake_b__13_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::UIKeyboard::*)()>(&::HMUI::UIKeyboard::_Awake_b__13_0)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x1fab3a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::UIKeyboard>::get(),
                            "<Awake>b__13_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::UIKeyboard._Awake_b__13_1
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::UIKeyboard::*)()>(&::HMUI::UIKeyboard::_Awake_b__13_1)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x1fab3bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::UIKeyboard>::get(),
                            "<Awake>b__13_1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::HMUI::UIKeyboard::__set__okButton(::UnityEngine::UI::Button value)  {
::cordl_internals::setInstanceField<::UnityEngine::UI::Button, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::UI::Button>(value));
}
constexpr ::UnityEngine::UI::Button ::HMUI::UIKeyboard::__get__okButton() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::Button, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HMUI::UIKeyboard::__set_okButtonWasPressedEvent(::System::Action value)  {
::cordl_internals::setInstanceField<::System::Action, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Action>(value));
}
constexpr ::System::Action ::HMUI::UIKeyboard::__get_okButtonWasPressedEvent() const {
return ::cordl_internals::getInstanceField<::System::Action, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HMUI::UIKeyboard::__set_keyWasPressedEvent(::System::Action_1<char16_t> value)  {
::cordl_internals::setInstanceField<::System::Action_1<char16_t>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Action_1<char16_t>>(value));
}
constexpr ::System::Action_1<char16_t> ::HMUI::UIKeyboard::__get_keyWasPressedEvent() const {
return ::cordl_internals::getInstanceField<::System::Action_1<char16_t>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HMUI::UIKeyboard::__set_deleteButtonWasPressedEvent(::System::Action value)  {
::cordl_internals::setInstanceField<::System::Action, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Action>(value));
}
constexpr ::System::Action ::HMUI::UIKeyboard::__get_deleteButtonWasPressedEvent() const {
return ::cordl_internals::getInstanceField<::System::Action, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HMUI::UIKeyboard::__set__buttonBinder(::HMUI::ButtonBinder value)  {
::cordl_internals::setInstanceField<::HMUI::ButtonBinder, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::HMUI::ButtonBinder>(value));
}
constexpr ::HMUI::ButtonBinder ::HMUI::UIKeyboard::__get__buttonBinder() const {
return ::cordl_internals::getInstanceField<::HMUI::ButtonBinder, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HMUI::UIKeyboard::__set__shouldCapitalize(bool value)  {
::cordl_internals::setInstanceField<bool, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::HMUI::UIKeyboard::__get__shouldCapitalize() const {
return ::cordl_internals::getInstanceField<bool, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HMUI::UIKeyboard::__set__letterBtnTexts(::System::Collections::Generic::List_1<::TMPro::TextMeshProUGUI> value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::TMPro::TextMeshProUGUI>, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::Generic::List_1<::TMPro::TextMeshProUGUI>>(value));
}
constexpr ::System::Collections::Generic::List_1<::TMPro::TextMeshProUGUI> ::HMUI::UIKeyboard::__get__letterBtnTexts() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::TMPro::TextMeshProUGUI>, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void ::HMUI::UIKeyboard::add_okButtonWasPressedEvent(::System::Action value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::UIKeyboard>::get(),
                            "add_okButtonWasPressedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void ::HMUI::UIKeyboard::remove_okButtonWasPressedEvent(::System::Action value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::UIKeyboard>::get(),
                            "remove_okButtonWasPressedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void ::HMUI::UIKeyboard::add_keyWasPressedEvent(::System::Action_1<char16_t> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::UIKeyboard>::get(),
                            "add_keyWasPressedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<char16_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void ::HMUI::UIKeyboard::remove_keyWasPressedEvent(::System::Action_1<char16_t> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::UIKeyboard>::get(),
                            "remove_keyWasPressedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<char16_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void ::HMUI::UIKeyboard::add_deleteButtonWasPressedEvent(::System::Action value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::UIKeyboard>::get(),
                            "add_deleteButtonWasPressedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void ::HMUI::UIKeyboard::remove_deleteButtonWasPressedEvent(::System::Action value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::UIKeyboard>::get(),
                            "remove_deleteButtonWasPressedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void ::HMUI::UIKeyboard::Awake()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::UIKeyboard>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::HMUI::UIKeyboard::HandleKeyPress(::UnityEngine::KeyCode keyCode)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::UIKeyboard>::get(),
                            "HandleKeyPress",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::KeyCode>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, keyCode);
}
 void ::HMUI::UIKeyboard::HandleCapsLockPressed()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::UIKeyboard>::get(),
                            "HandleCapsLockPressed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::HMUI::UIKeyboard::SetKeyboardCapitalization(bool capitalize)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::UIKeyboard>::get(),
                            "SetKeyboardCapitalization",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, capitalize);
}
 bool ::HMUI::UIKeyboard::HasFontStyle(::TMPro::TextMeshProUGUI text, ::TMPro::FontStyles style)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::UIKeyboard>::get(),
                            "HasFontStyle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::TextMeshProUGUI>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::FontStyles>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, text, style);
}
 void ::HMUI::UIKeyboard::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::UIKeyboard>::get(),
                            "OnEnable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 ::HMUI::UIKeyboard::UIKeyboard()  : ::UnityEngine::MonoBehaviour(THROW_UNLESS(::il2cpp_utils::New<UIKeyboard>())) {}
 void ::HMUI::UIKeyboard::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::UIKeyboard>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::HMUI::UIKeyboard::_Awake_b__13_0()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::UIKeyboard>::get(),
                            "<Awake>b__13_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::HMUI::UIKeyboard::_Awake_b__13_1()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::UIKeyboard>::get(),
                            "<Awake>b__13_1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
