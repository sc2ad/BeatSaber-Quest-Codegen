#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "UnityEngine/zzzz__TextEditor_def.hpp"
#include "UnityEngine/zzzz__TouchScreenKeyboard_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "UnityEngine/zzzz__Event_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "UnityEngine/zzzz__GUIStyle_def.hpp"
#include "UnityEngine/zzzz__GUIContent_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::____UnityEngine__TextEditor__DblClickSnapping::____UnityEngine__TextEditor__DblClickSnapping(uint8_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::UnityEngine::____UnityEngine__TextEditor__DblClickSnapping::__set_value__(uint8_t value)  {
::cordl_internals::setInstanceField<uint8_t, 0x0>(this->__instance, std::forward<uint8_t>(value));
}
constexpr uint8_t ::UnityEngine::____UnityEngine__TextEditor__DblClickSnapping::__get_value__() const {
return ::cordl_internals::getInstanceField<uint8_t, 0x0>(this->__instance);
}
constexpr ::UnityEngine::____UnityEngine__TextEditor__DblClickSnapping  ::UnityEngine::____UnityEngine__TextEditor__DblClickSnapping::WORDS{0u};
constexpr ::UnityEngine::____UnityEngine__TextEditor__DblClickSnapping  ::UnityEngine::____UnityEngine__TextEditor__DblClickSnapping::PARAGRAPHS{1u};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::____UnityEngine__TextEditor__CharacterType::____UnityEngine__TextEditor__CharacterType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::UnityEngine::____UnityEngine__TextEditor__CharacterType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::____UnityEngine__TextEditor__CharacterType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::UnityEngine::____UnityEngine__TextEditor__CharacterType  ::UnityEngine::____UnityEngine__TextEditor__CharacterType::LetterLike{0};
constexpr ::UnityEngine::____UnityEngine__TextEditor__CharacterType  ::UnityEngine::____UnityEngine__TextEditor__CharacterType::Symbol{1};
constexpr ::UnityEngine::____UnityEngine__TextEditor__CharacterType  ::UnityEngine::____UnityEngine__TextEditor__CharacterType::Symbol2{2};
constexpr ::UnityEngine::____UnityEngine__TextEditor__CharacterType  ::UnityEngine::____UnityEngine__TextEditor__CharacterType::WhiteSpace{3};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::____UnityEngine__TextEditor__Direction::____UnityEngine__TextEditor__Direction(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::UnityEngine::____UnityEngine__TextEditor__Direction::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::____UnityEngine__TextEditor__Direction::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::UnityEngine::____UnityEngine__TextEditor__Direction  ::UnityEngine::____UnityEngine__TextEditor__Direction::Forward{0};
constexpr ::UnityEngine::____UnityEngine__TextEditor__Direction  ::UnityEngine::____UnityEngine__TextEditor__Direction::Backward{1};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::____UnityEngine__TextEditor__TextEditOp::____UnityEngine__TextEditor__TextEditOp(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::UnityEngine::____UnityEngine__TextEditor__TextEditOp::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::____UnityEngine__TextEditor__TextEditOp::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::UnityEngine::____UnityEngine__TextEditor__TextEditOp  ::UnityEngine::____UnityEngine__TextEditor__TextEditOp::MoveLeft{0};
constexpr ::UnityEngine::____UnityEngine__TextEditor__TextEditOp  ::UnityEngine::____UnityEngine__TextEditor__TextEditOp::MoveRight{1};
constexpr ::UnityEngine::____UnityEngine__TextEditor__TextEditOp  ::UnityEngine::____UnityEngine__TextEditor__TextEditOp::MoveUp{2};
constexpr ::UnityEngine::____UnityEngine__TextEditor__TextEditOp  ::UnityEngine::____UnityEngine__TextEditor__TextEditOp::MoveDown{3};
constexpr ::UnityEngine::____UnityEngine__TextEditor__TextEditOp  ::UnityEngine::____UnityEngine__TextEditor__TextEditOp::MoveLineStart{4};
constexpr ::UnityEngine::____UnityEngine__TextEditor__TextEditOp  ::UnityEngine::____UnityEngine__TextEditor__TextEditOp::MoveLineEnd{5};
constexpr ::UnityEngine::____UnityEngine__TextEditor__TextEditOp  ::UnityEngine::____UnityEngine__TextEditor__TextEditOp::MoveTextStart{6};
constexpr ::UnityEngine::____UnityEngine__TextEditor__TextEditOp  ::UnityEngine::____UnityEngine__TextEditor__TextEditOp::MoveTextEnd{7};
constexpr ::UnityEngine::____UnityEngine__TextEditor__TextEditOp  ::UnityEngine::____UnityEngine__TextEditor__TextEditOp::MovePageUp{8};
constexpr ::UnityEngine::____UnityEngine__TextEditor__TextEditOp  ::UnityEngine::____UnityEngine__TextEditor__TextEditOp::MovePageDown{9};
constexpr ::UnityEngine::____UnityEngine__TextEditor__TextEditOp  ::UnityEngine::____UnityEngine__TextEditor__TextEditOp::MoveGraphicalLineStart{10};
constexpr ::UnityEngine::____UnityEngine__TextEditor__TextEditOp  ::UnityEngine::____UnityEngine__TextEditor__TextEditOp::MoveGraphicalLineEnd{11};
constexpr ::UnityEngine::____UnityEngine__TextEditor__TextEditOp  ::UnityEngine::____UnityEngine__TextEditor__TextEditOp::MoveWordLeft{12};
constexpr ::UnityEngine::____UnityEngine__TextEditor__TextEditOp  ::UnityEngine::____UnityEngine__TextEditor__TextEditOp::MoveWordRight{13};
constexpr ::UnityEngine::____UnityEngine__TextEditor__TextEditOp  ::UnityEngine::____UnityEngine__TextEditor__TextEditOp::MoveParagraphForward{14};
constexpr ::UnityEngine::____UnityEngine__TextEditor__TextEditOp  ::UnityEngine::____UnityEngine__TextEditor__TextEditOp::MoveParagraphBackward{15};
constexpr ::UnityEngine::____UnityEngine__TextEditor__TextEditOp  ::UnityEngine::____UnityEngine__TextEditor__TextEditOp::MoveToStartOfNextWord{16};
constexpr ::UnityEngine::____UnityEngine__TextEditor__TextEditOp  ::UnityEngine::____UnityEngine__TextEditor__TextEditOp::MoveToEndOfPreviousWord{17};
constexpr ::UnityEngine::____UnityEngine__TextEditor__TextEditOp  ::UnityEngine::____UnityEngine__TextEditor__TextEditOp::SelectLeft{18};
constexpr ::UnityEngine::____UnityEngine__TextEditor__TextEditOp  ::UnityEngine::____UnityEngine__TextEditor__TextEditOp::SelectRight{19};
constexpr ::UnityEngine::____UnityEngine__TextEditor__TextEditOp  ::UnityEngine::____UnityEngine__TextEditor__TextEditOp::SelectUp{20};
constexpr ::UnityEngine::____UnityEngine__TextEditor__TextEditOp  ::UnityEngine::____UnityEngine__TextEditor__TextEditOp::SelectDown{21};
constexpr ::UnityEngine::____UnityEngine__TextEditor__TextEditOp  ::UnityEngine::____UnityEngine__TextEditor__TextEditOp::SelectTextStart{22};
constexpr ::UnityEngine::____UnityEngine__TextEditor__TextEditOp  ::UnityEngine::____UnityEngine__TextEditor__TextEditOp::SelectTextEnd{23};
constexpr ::UnityEngine::____UnityEngine__TextEditor__TextEditOp  ::UnityEngine::____UnityEngine__TextEditor__TextEditOp::SelectPageUp{24};
constexpr ::UnityEngine::____UnityEngine__TextEditor__TextEditOp  ::UnityEngine::____UnityEngine__TextEditor__TextEditOp::SelectPageDown{25};
constexpr ::UnityEngine::____UnityEngine__TextEditor__TextEditOp  ::UnityEngine::____UnityEngine__TextEditor__TextEditOp::ExpandSelectGraphicalLineStart{26};
constexpr ::UnityEngine::____UnityEngine__TextEditor__TextEditOp  ::UnityEngine::____UnityEngine__TextEditor__TextEditOp::ExpandSelectGraphicalLineEnd{27};
constexpr ::UnityEngine::____UnityEngine__TextEditor__TextEditOp  ::UnityEngine::____UnityEngine__TextEditor__TextEditOp::SelectGraphicalLineStart{28};
constexpr ::UnityEngine::____UnityEngine__TextEditor__TextEditOp  ::UnityEngine::____UnityEngine__TextEditor__TextEditOp::SelectGraphicalLineEnd{29};
constexpr ::UnityEngine::____UnityEngine__TextEditor__TextEditOp  ::UnityEngine::____UnityEngine__TextEditor__TextEditOp::SelectWordLeft{30};
constexpr ::UnityEngine::____UnityEngine__TextEditor__TextEditOp  ::UnityEngine::____UnityEngine__TextEditor__TextEditOp::SelectWordRight{31};
constexpr ::UnityEngine::____UnityEngine__TextEditor__TextEditOp  ::UnityEngine::____UnityEngine__TextEditor__TextEditOp::SelectToEndOfPreviousWord{32};
constexpr ::UnityEngine::____UnityEngine__TextEditor__TextEditOp  ::UnityEngine::____UnityEngine__TextEditor__TextEditOp::SelectToStartOfNextWord{33};
constexpr ::UnityEngine::____UnityEngine__TextEditor__TextEditOp  ::UnityEngine::____UnityEngine__TextEditor__TextEditOp::SelectParagraphBackward{34};
constexpr ::UnityEngine::____UnityEngine__TextEditor__TextEditOp  ::UnityEngine::____UnityEngine__TextEditor__TextEditOp::SelectParagraphForward{35};
constexpr ::UnityEngine::____UnityEngine__TextEditor__TextEditOp  ::UnityEngine::____UnityEngine__TextEditor__TextEditOp::Delete{36};
constexpr ::UnityEngine::____UnityEngine__TextEditor__TextEditOp  ::UnityEngine::____UnityEngine__TextEditor__TextEditOp::Backspace{37};
constexpr ::UnityEngine::____UnityEngine__TextEditor__TextEditOp  ::UnityEngine::____UnityEngine__TextEditor__TextEditOp::DeleteWordBack{38};
constexpr ::UnityEngine::____UnityEngine__TextEditor__TextEditOp  ::UnityEngine::____UnityEngine__TextEditor__TextEditOp::DeleteWordForward{39};
constexpr ::UnityEngine::____UnityEngine__TextEditor__TextEditOp  ::UnityEngine::____UnityEngine__TextEditor__TextEditOp::DeleteLineBack{40};
constexpr ::UnityEngine::____UnityEngine__TextEditor__TextEditOp  ::UnityEngine::____UnityEngine__TextEditor__TextEditOp::Cut{41};
constexpr ::UnityEngine::____UnityEngine__TextEditor__TextEditOp  ::UnityEngine::____UnityEngine__TextEditor__TextEditOp::Copy{42};
constexpr ::UnityEngine::____UnityEngine__TextEditor__TextEditOp  ::UnityEngine::____UnityEngine__TextEditor__TextEditOp::Paste{43};
constexpr ::UnityEngine::____UnityEngine__TextEditor__TextEditOp  ::UnityEngine::____UnityEngine__TextEditor__TextEditOp::SelectAll{44};
constexpr ::UnityEngine::____UnityEngine__TextEditor__TextEditOp  ::UnityEngine::____UnityEngine__TextEditor__TextEditOp::SelectNone{45};
constexpr ::UnityEngine::____UnityEngine__TextEditor__TextEditOp  ::UnityEngine::____UnityEngine__TextEditor__TextEditOp::ScrollStart{46};
constexpr ::UnityEngine::____UnityEngine__TextEditor__TextEditOp  ::UnityEngine::____UnityEngine__TextEditor__TextEditOp::ScrollEnd{47};
constexpr ::UnityEngine::____UnityEngine__TextEditor__TextEditOp  ::UnityEngine::____UnityEngine__TextEditor__TextEditOp::ScrollPageUp{48};
constexpr ::UnityEngine::____UnityEngine__TextEditor__TextEditOp  ::UnityEngine::____UnityEngine__TextEditor__TextEditOp::ScrollPageDown{49};
//  Writing Method size for method: ::UnityEngine::TextEditor.get_text
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::TextEditor::*)()>(&::UnityEngine::TextEditor::get_text)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2b8c7c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor>::get(),
                            "get_text",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditor.set_text
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextEditor::*)(::StringW)>(&::UnityEngine::TextEditor::set_text)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x2b8c7e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor>::get(),
                            "set_text",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditor.get_position
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rect (::UnityEngine::TextEditor::*)()>(&::UnityEngine::TextEditor::get_position)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2b8c898;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor>::get(),
                            "get_position",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditor.set_position
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextEditor::*)(::UnityEngine::Rect)>(&::UnityEngine::TextEditor::set_position)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x2b8c8a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor>::get(),
                            "set_position",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditor.get_localPosition
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rect (::UnityEngine::TextEditor::*)()>(&::UnityEngine::TextEditor::get_localPosition)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2b8cd00;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::UnityEngine::TextEditor),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditor.get_cursorIndex
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::TextEditor::*)()>(&::UnityEngine::TextEditor::get_cursorIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b8cd0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor>::get(),
                            "get_cursorIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditor.set_cursorIndex
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextEditor::*)(int32_t)>(&::UnityEngine::TextEditor::set_cursorIndex)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2b8cd14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor>::get(),
                            "set_cursorIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditor.get_selectIndex
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::TextEditor::*)()>(&::UnityEngine::TextEditor::get_selectIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b8cd6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor>::get(),
                            "get_selectIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditor.set_selectIndex
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextEditor::*)(int32_t)>(&::UnityEngine::TextEditor::set_selectIndex)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2b8cd74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor>::get(),
                            "set_selectIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditor.ClearCursorPos
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextEditor::*)()>(&::UnityEngine::TextEditor::ClearCursorPos)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2b8cdc4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor>::get(),
                            "ClearCursorPos",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditor.get_altCursorPosition
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::TextEditor::*)()>(&::UnityEngine::TextEditor::get_altCursorPosition)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b8cdd4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor>::get(),
                            "get_altCursorPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditor._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextEditor::*)()>(&::UnityEngine::TextEditor::_ctor)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x2b8cddc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditor.OnFocus
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextEditor::*)()>(&::UnityEngine::TextEditor::OnFocus)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2b8ced4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor>::get(),
                            "OnFocus",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditor.OnLostFocus
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextEditor::*)()>(&::UnityEngine::TextEditor::OnLostFocus)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2b8cf5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor>::get(),
                            "OnLostFocus",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditor.GrabGraphicalCursorPos
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextEditor::*)()>(&::UnityEngine::TextEditor::GrabGraphicalCursorPos)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2b8cfb0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor>::get(),
                            "GrabGraphicalCursorPos",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditor.HandleKeyEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::TextEditor::*)(::UnityEngine::Event, bool)>(&::UnityEngine::TextEditor::HandleKeyEvent)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x2b8d034;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor>::get(),
                            "HandleKeyEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Event>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditor.DeleteLineBack
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::TextEditor::*)()>(&::UnityEngine::TextEditor::DeleteLineBack)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x2b8e01c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor>::get(),
                            "DeleteLineBack",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditor.DeleteWordBack
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::TextEditor::*)()>(&::UnityEngine::TextEditor::DeleteWordBack)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x2b8e1f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor>::get(),
                            "DeleteWordBack",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditor.DeleteWordForward
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::TextEditor::*)()>(&::UnityEngine::TextEditor::DeleteWordForward)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2b8e348;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor>::get(),
                            "DeleteWordForward",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditor.Delete
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::TextEditor::*)()>(&::UnityEngine::TextEditor::Delete)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x2b8e574;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor>::get(),
                            "Delete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditor.CanPaste
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::TextEditor::*)()>(&::UnityEngine::TextEditor::CanPaste)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2b8e6c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor>::get(),
                            "CanPaste",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditor.Backspace
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::TextEditor::*)()>(&::UnityEngine::TextEditor::Backspace)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x2b8e708;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor>::get(),
                            "Backspace",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditor.SelectAll
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextEditor::*)()>(&::UnityEngine::TextEditor::SelectAll)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2b8cf18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor>::get(),
                            "SelectAll",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditor.SelectNone
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextEditor::*)()>(&::UnityEngine::TextEditor::SelectNone)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2b8e868;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor>::get(),
                            "SelectNone",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditor.get_hasSelection
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::TextEditor::*)()>(&::UnityEngine::TextEditor::get_hasSelection)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2b8e0d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor>::get(),
                            "get_hasSelection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditor.get_SelectedText
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::TextEditor::*)()>(&::UnityEngine::TextEditor::get_SelectedText)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x2b8e88c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor>::get(),
                            "get_SelectedText",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditor.DeleteSelection
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::TextEditor::*)()>(&::UnityEngine::TextEditor::DeleteSelection)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x2b8e0e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor>::get(),
                            "DeleteSelection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditor.ReplaceSelection
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextEditor::*)(::StringW)>(&::UnityEngine::TextEditor::ReplaceSelection)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2b8e918;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor>::get(),
                            "ReplaceSelection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditor.Insert
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextEditor::*)(char16_t)>(&::UnityEngine::TextEditor::Insert)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x2b8e994;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor>::get(),
                            "Insert",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditor.MoveSelectionToAltCursor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextEditor::*)()>(&::UnityEngine::TextEditor::MoveSelectionToAltCursor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x2b8e9c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor>::get(),
                            "MoveSelectionToAltCursor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditor.MoveRight
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextEditor::*)()>(&::UnityEngine::TextEditor::MoveRight)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2b8ea84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor>::get(),
                            "MoveRight",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditor.MoveLeft
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextEditor::*)()>(&::UnityEngine::TextEditor::MoveLeft)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2b8eafc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor>::get(),
                            "MoveLeft",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditor.MoveUp
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextEditor::*)()>(&::UnityEngine::TextEditor::MoveUp)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2b8eb54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor>::get(),
                            "MoveUp",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditor.MoveDown
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextEditor::*)()>(&::UnityEngine::TextEditor::MoveDown)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x2b8ec04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor>::get(),
                            "MoveDown",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditor.MoveLineStart
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextEditor::*)()>(&::UnityEngine::TextEditor::MoveLineStart)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2b8ece4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor>::get(),
                            "MoveLineStart",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditor.MoveLineEnd
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextEditor::*)()>(&::UnityEngine::TextEditor::MoveLineEnd)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x2b8ed58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor>::get(),
                            "MoveLineEnd",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditor.MoveGraphicalLineStart
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextEditor::*)()>(&::UnityEngine::TextEditor::MoveGraphicalLineStart)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2b8ede8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor>::get(),
                            "MoveGraphicalLineStart",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditor.MoveGraphicalLineEnd
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextEditor::*)()>(&::UnityEngine::TextEditor::MoveGraphicalLineEnd)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2b8eee0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor>::get(),
                            "MoveGraphicalLineEnd",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditor.MoveTextStart
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextEditor::*)()>(&::UnityEngine::TextEditor::MoveTextStart)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2b8efec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor>::get(),
                            "MoveTextStart",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditor.MoveTextEnd
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextEditor::*)()>(&::UnityEngine::TextEditor::MoveTextEnd)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2b8f00c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor>::get(),
                            "MoveTextEnd",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditor.IndexOfEndOfLine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::TextEditor::*)(int32_t)>(&::UnityEngine::TextEditor::IndexOfEndOfLine)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2b8f04c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor>::get(),
                            "IndexOfEndOfLine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditor.MoveParagraphForward
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextEditor::*)()>(&::UnityEngine::TextEditor::MoveParagraphForward)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2b8f09c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor>::get(),
                            "MoveParagraphForward",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditor.MoveParagraphBackward
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextEditor::*)()>(&::UnityEngine::TextEditor::MoveParagraphBackward)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x2b8f11c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor>::get(),
                            "MoveParagraphBackward",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditor.MoveCursorToPosition_Internal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextEditor::*)(::UnityEngine::Vector2, bool)>(&::UnityEngine::TextEditor::MoveCursorToPosition_Internal)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2b8f194;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor>::get(),
                            "MoveCursorToPosition_Internal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditor.MoveAltCursorToPosition
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextEditor::*)(::UnityEngine::Vector2)>(&::UnityEngine::TextEditor::MoveAltCursorToPosition)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2b8f21c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor>::get(),
                            "MoveAltCursorToPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditor.SelectToPosition
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextEditor::*)(::UnityEngine::Vector2)>(&::UnityEngine::TextEditor::SelectToPosition)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0x2b8f2a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor>::get(),
                            "SelectToPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditor.SelectLeft
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextEditor::*)()>(&::UnityEngine::TextEditor::SelectLeft)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2b8f5b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor>::get(),
                            "SelectLeft",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditor.SelectRight
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextEditor::*)()>(&::UnityEngine::TextEditor::SelectRight)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2b8f608;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor>::get(),
                            "SelectRight",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditor.SelectUp
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextEditor::*)()>(&::UnityEngine::TextEditor::SelectUp)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2b8f660;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor>::get(),
                            "SelectUp",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditor.SelectDown
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextEditor::*)()>(&::UnityEngine::TextEditor::SelectDown)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2b8f6c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor>::get(),
                            "SelectDown",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditor.SelectTextEnd
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextEditor::*)()>(&::UnityEngine::TextEditor::SelectTextEnd)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2b8f744;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor>::get(),
                            "SelectTextEnd",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditor.SelectTextStart
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextEditor::*)()>(&::UnityEngine::TextEditor::SelectTextStart)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b8f768;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor>::get(),
                            "SelectTextStart",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditor.MouseDragSelectsWholeWords
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextEditor::*)(bool)>(&::UnityEngine::TextEditor::MouseDragSelectsWholeWords)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2b8f770;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor>::get(),
                            "MouseDragSelectsWholeWords",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditor.DblClickSnap
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextEditor::*)(::UnityEngine::____UnityEngine__TextEditor__DblClickSnapping)>(&::UnityEngine::TextEditor::DblClickSnap)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b8f784;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor>::get(),
                            "DblClickSnap",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::____UnityEngine__TextEditor__DblClickSnapping>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditor.GetGraphicalLineStart
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::TextEditor::*)(int32_t)>(&::UnityEngine::TextEditor::GetGraphicalLineStart)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2b8ee30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor>::get(),
                            "GetGraphicalLineStart",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditor.GetGraphicalLineEnd
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::TextEditor::*)(int32_t)>(&::UnityEngine::TextEditor::GetGraphicalLineEnd)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2b8ef28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor>::get(),
                            "GetGraphicalLineEnd",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditor.FindNextSeperator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::TextEditor::*)(int32_t)>(&::UnityEngine::TextEditor::FindNextSeperator)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x2b8f78c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor>::get(),
                            "FindNextSeperator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditor.FindPrevSeperator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::TextEditor::*)(int32_t)>(&::UnityEngine::TextEditor::FindPrevSeperator)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2b8f90c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor>::get(),
                            "FindPrevSeperator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditor.MoveWordRight
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextEditor::*)()>(&::UnityEngine::TextEditor::MoveWordRight)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2b8f9a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor>::get(),
                            "MoveWordRight",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditor.MoveToStartOfNextWord
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextEditor::*)()>(&::UnityEngine::TextEditor::MoveToStartOfNextWord)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2b8fa0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor>::get(),
                            "MoveToStartOfNextWord",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditor.MoveToEndOfPreviousWord
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextEditor::*)()>(&::UnityEngine::TextEditor::MoveToEndOfPreviousWord)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2b8fa6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor>::get(),
                            "MoveToEndOfPreviousWord",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditor.SelectToStartOfNextWord
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextEditor::*)()>(&::UnityEngine::TextEditor::SelectToStartOfNextWord)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2b8facc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor>::get(),
                            "SelectToStartOfNextWord",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditor.SelectToEndOfPreviousWord
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextEditor::*)()>(&::UnityEngine::TextEditor::SelectToEndOfPreviousWord)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2b8faf8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor>::get(),
                            "SelectToEndOfPreviousWord",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditor.ClassifyChar
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::____UnityEngine__TextEditor__CharacterType (::UnityEngine::TextEditor::*)(int32_t)>(&::UnityEngine::TextEditor::ClassifyChar)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x2b8f824;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor>::get(),
                            "ClassifyChar",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditor.FindStartOfNextWord
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::TextEditor::*)(int32_t)>(&::UnityEngine::TextEditor::FindStartOfNextWord)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x2b8e3c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor>::get(),
                            "FindStartOfNextWord",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditor.FindEndOfPreviousWord
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::TextEditor::*)(int32_t)>(&::UnityEngine::TextEditor::FindEndOfPreviousWord)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x2b8e280;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor>::get(),
                            "FindEndOfPreviousWord",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditor.MoveWordLeft
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextEditor::*)()>(&::UnityEngine::TextEditor::MoveWordLeft)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2b8fb24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor>::get(),
                            "MoveWordLeft",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditor.SelectWordRight
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextEditor::*)()>(&::UnityEngine::TextEditor::SelectWordRight)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2b8fb6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor>::get(),
                            "SelectWordRight",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditor.SelectWordLeft
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextEditor::*)()>(&::UnityEngine::TextEditor::SelectWordLeft)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2b8fbd4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor>::get(),
                            "SelectWordLeft",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditor.ExpandSelectGraphicalLineStart
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextEditor::*)()>(&::UnityEngine::TextEditor::ExpandSelectGraphicalLineStart)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2b8fc3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor>::get(),
                            "ExpandSelectGraphicalLineStart",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditor.ExpandSelectGraphicalLineEnd
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextEditor::*)()>(&::UnityEngine::TextEditor::ExpandSelectGraphicalLineEnd)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2b8fca0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor>::get(),
                            "ExpandSelectGraphicalLineEnd",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditor.SelectGraphicalLineStart
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextEditor::*)()>(&::UnityEngine::TextEditor::SelectGraphicalLineStart)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2b8fd04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor>::get(),
                            "SelectGraphicalLineStart",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditor.SelectGraphicalLineEnd
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextEditor::*)()>(&::UnityEngine::TextEditor::SelectGraphicalLineEnd)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2b8fd30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor>::get(),
                            "SelectGraphicalLineEnd",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditor.SelectParagraphForward
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextEditor::*)()>(&::UnityEngine::TextEditor::SelectParagraphForward)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2b8fd5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor>::get(),
                            "SelectParagraphForward",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditor.SelectParagraphBackward
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextEditor::*)()>(&::UnityEngine::TextEditor::SelectParagraphBackward)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x2b8fde4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor>::get(),
                            "SelectParagraphBackward",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditor.SelectCurrentWord
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextEditor::*)()>(&::UnityEngine::TextEditor::SelectCurrentWord)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2b8fe88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor>::get(),
                            "SelectCurrentWord",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditor.FindEndOfClassification
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::TextEditor::*)(int32_t, ::UnityEngine::____UnityEngine__TextEditor__Direction)>(&::UnityEngine::TextEditor::FindEndOfClassification)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x2b8f49c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor>::get(),
                            "FindEndOfClassification",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::____UnityEngine__TextEditor__Direction>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditor.SelectCurrentParagraph
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextEditor::*)()>(&::UnityEngine::TextEditor::SelectCurrentParagraph)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x2b8fef4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor>::get(),
                            "SelectCurrentParagraph",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditor.UpdateScrollOffset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextEditor::*)()>(&::UnityEngine::TextEditor::UpdateScrollOffset)> {
  constexpr static std::size_t size = 0x3a4;
  constexpr static std::size_t addrs = 0x2b8c95c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor>::get(),
                            "UpdateScrollOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditor.PerformOperation
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::TextEditor::*)(::UnityEngine::____UnityEngine__TextEditor__TextEditOp, bool)>(&::UnityEngine::TextEditor::PerformOperation)> {
  constexpr static std::size_t size = 0x3d8;
  constexpr static std::size_t addrs = 0x2b8dc44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor>::get(),
                            "PerformOperation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::____UnityEngine__TextEditor__TextEditOp>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditor.SaveBackup
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextEditor::*)()>(&::UnityEngine::TextEditor::SaveBackup)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2b900e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor>::get(),
                            "SaveBackup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditor.Cut
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::TextEditor::*)()>(&::UnityEngine::TextEditor::Cut)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2b8ff80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor>::get(),
                            "Cut",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditor.Copy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextEditor::*)()>(&::UnityEngine::TextEditor::Copy)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x2b8ffac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor>::get(),
                            "Copy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditor.ReplaceNewlinesWithSpaces
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&::UnityEngine::TextEditor::ReplaceNewlinesWithSpaces)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x2b90104;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor>::get(),
                            "ReplaceNewlinesWithSpaces",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditor.Paste
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::TextEditor::*)()>(&::UnityEngine::TextEditor::Paste)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x2b9003c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor>::get(),
                            "Paste",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditor.MapKey
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::UnityEngine::____UnityEngine__TextEditor__TextEditOp)>(&::UnityEngine::TextEditor::MapKey)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x2b90198;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor>::get(),
                            "MapKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::____UnityEngine__TextEditor__TextEditOp>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditor.InitKeyActions
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextEditor::*)()>(&::UnityEngine::TextEditor::InitKeyActions)> {
  constexpr static std::size_t size = 0xa5c;
  constexpr static std::size_t addrs = 0x2b8d1e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor>::get(),
                            "InitKeyActions",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditor.DetectFocusChange
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextEditor::*)()>(&::UnityEngine::TextEditor::DetectFocusChange)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2b8eaf0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor>::get(),
                            "DetectFocusChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditor.OnDetectFocusChange
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextEditor::*)()>(&::UnityEngine::TextEditor::OnDetectFocusChange)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2b90224;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::UnityEngine::TextEditor),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditor.OnCursorIndexChange
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextEditor::*)()>(&::UnityEngine::TextEditor::OnCursorIndexChange)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2b902c0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::UnityEngine::TextEditor),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditor.OnSelectIndexChange
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextEditor::*)()>(&::UnityEngine::TextEditor::OnSelectIndexChange)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2b902c4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::UnityEngine::TextEditor),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditor.ClampTextIndex
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextEditor::*)(ByRef<int32_t>)>(&::UnityEngine::TextEditor::ClampTextIndex)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2b902c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor>::get(),
                            "ClampTextIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditor.EnsureValidCodePointIndex
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextEditor::*)(ByRef<int32_t>)>(&::UnityEngine::TextEditor::EnsureValidCodePointIndex)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2b8c858;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor>::get(),
                            "EnsureValidCodePointIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditor.IsValidCodePointIndex
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::TextEditor::*)(int32_t)>(&::UnityEngine::TextEditor::IsValidCodePointIndex)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x2b90304;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor>::get(),
                            "IsValidCodePointIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditor.PreviousCodePointIndex
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::TextEditor::*)(int32_t)>(&::UnityEngine::TextEditor::PreviousCodePointIndex)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x2b8e7a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor>::get(),
                            "PreviousCodePointIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextEditor.NextCodePointIndex
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::TextEditor::*)(int32_t)>(&::UnityEngine::TextEditor::NextCodePointIndex)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2b8e600;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor>::get(),
                            "NextCodePointIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void ::UnityEngine::TextEditor::__set_keyboardOnScreen(::UnityEngine::TouchScreenKeyboard value)  {
::cordl_internals::setInstanceField<::UnityEngine::TouchScreenKeyboard, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::TouchScreenKeyboard>(value));
}
constexpr ::UnityEngine::TouchScreenKeyboard ::UnityEngine::TextEditor::__get_keyboardOnScreen() const {
return ::cordl_internals::getInstanceField<::UnityEngine::TouchScreenKeyboard, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::TextEditor::__set_controlID(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::TextEditor::__get_controlID() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::TextEditor::__set_style(::UnityEngine::GUIStyle value)  {
::cordl_internals::setInstanceField<::UnityEngine::GUIStyle, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::GUIStyle>(value));
}
constexpr ::UnityEngine::GUIStyle ::UnityEngine::TextEditor::__get_style() const {
return ::cordl_internals::getInstanceField<::UnityEngine::GUIStyle, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::TextEditor::__set_multiline(bool value)  {
::cordl_internals::setInstanceField<bool, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::UnityEngine::TextEditor::__get_multiline() const {
return ::cordl_internals::getInstanceField<bool, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::TextEditor::__set_hasHorizontalCursorPos(bool value)  {
::cordl_internals::setInstanceField<bool, 0x29>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::UnityEngine::TextEditor::__get_hasHorizontalCursorPos() const {
return ::cordl_internals::getInstanceField<bool, 0x29>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::TextEditor::__set_isPasswordField(bool value)  {
::cordl_internals::setInstanceField<bool, 0x2a>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::UnityEngine::TextEditor::__get_isPasswordField() const {
return ::cordl_internals::getInstanceField<bool, 0x2a>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::TextEditor::__set_m_HasFocus(bool value)  {
::cordl_internals::setInstanceField<bool, 0x2b>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::UnityEngine::TextEditor::__get_m_HasFocus() const {
return ::cordl_internals::getInstanceField<bool, 0x2b>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::TextEditor::__set_scrollOffset(::UnityEngine::Vector2 value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector2, 0x2c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Vector2>(value));
}
constexpr ::UnityEngine::Vector2 ::UnityEngine::TextEditor::__get_scrollOffset() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector2, 0x2c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::TextEditor::__set_m_Content(::UnityEngine::GUIContent value)  {
::cordl_internals::setInstanceField<::UnityEngine::GUIContent, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::GUIContent>(value));
}
constexpr ::UnityEngine::GUIContent ::UnityEngine::TextEditor::__get_m_Content() const {
return ::cordl_internals::getInstanceField<::UnityEngine::GUIContent, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::TextEditor::__set_m_Position(::UnityEngine::Rect value)  {
::cordl_internals::setInstanceField<::UnityEngine::Rect, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Rect>(value));
}
constexpr ::UnityEngine::Rect ::UnityEngine::TextEditor::__get_m_Position() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Rect, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::TextEditor::__set_m_CursorIndex(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::TextEditor::__get_m_CursorIndex() const {
return ::cordl_internals::getInstanceField<int32_t, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::TextEditor::__set_m_SelectIndex(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x54>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::TextEditor::__get_m_SelectIndex() const {
return ::cordl_internals::getInstanceField<int32_t, 0x54>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::TextEditor::__set_m_RevealCursor(bool value)  {
::cordl_internals::setInstanceField<bool, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::UnityEngine::TextEditor::__get_m_RevealCursor() const {
return ::cordl_internals::getInstanceField<bool, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::TextEditor::__set_graphicalCursorPos(::UnityEngine::Vector2 value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector2, 0x5c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Vector2>(value));
}
constexpr ::UnityEngine::Vector2 ::UnityEngine::TextEditor::__get_graphicalCursorPos() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector2, 0x5c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::TextEditor::__set_graphicalSelectCursorPos(::UnityEngine::Vector2 value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector2, 0x64>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Vector2>(value));
}
constexpr ::UnityEngine::Vector2 ::UnityEngine::TextEditor::__get_graphicalSelectCursorPos() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector2, 0x64>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::TextEditor::__set_m_MouseDragSelectsWholeWords(bool value)  {
::cordl_internals::setInstanceField<bool, 0x6c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::UnityEngine::TextEditor::__get_m_MouseDragSelectsWholeWords() const {
return ::cordl_internals::getInstanceField<bool, 0x6c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::TextEditor::__set_m_DblClickInitPos(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x70>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::TextEditor::__get_m_DblClickInitPos() const {
return ::cordl_internals::getInstanceField<int32_t, 0x70>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::TextEditor::__set_m_DblClickSnap(::UnityEngine::____UnityEngine__TextEditor__DblClickSnapping value)  {
::cordl_internals::setInstanceField<::UnityEngine::____UnityEngine__TextEditor__DblClickSnapping, 0x74>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::____UnityEngine__TextEditor__DblClickSnapping>(value));
}
constexpr ::UnityEngine::____UnityEngine__TextEditor__DblClickSnapping ::UnityEngine::TextEditor::__get_m_DblClickSnap() const {
return ::cordl_internals::getInstanceField<::UnityEngine::____UnityEngine__TextEditor__DblClickSnapping, 0x74>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::TextEditor::__set_m_bJustSelected(bool value)  {
::cordl_internals::setInstanceField<bool, 0x75>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::UnityEngine::TextEditor::__get_m_bJustSelected() const {
return ::cordl_internals::getInstanceField<bool, 0x75>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::TextEditor::__set_m_iAltCursorPos(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x78>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::TextEditor::__get_m_iAltCursorPos() const {
return ::cordl_internals::getInstanceField<int32_t, 0x78>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::TextEditor::__set_oldText(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x80>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::UnityEngine::TextEditor::__get_oldText() const {
return ::cordl_internals::getInstanceField<::StringW, 0x80>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::TextEditor::__set_oldPos(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x88>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::TextEditor::__get_oldPos() const {
return ::cordl_internals::getInstanceField<int32_t, 0x88>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::TextEditor::__set_oldSelectPos(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x8c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::TextEditor::__get_oldSelectPos() const {
return ::cordl_internals::getInstanceField<int32_t, 0x8c>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void ::UnityEngine::TextEditor::__set_s_Keyactions(::System::Collections::Generic::Dictionary_2<::UnityEngine::Event,::UnityEngine::____UnityEngine__TextEditor__TextEditOp> value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::UnityEngine::Event,::UnityEngine::____UnityEngine__TextEditor__TextEditOp>, "s_Keyactions", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor>::get>(std::forward<::System::Collections::Generic::Dictionary_2<::UnityEngine::Event,::UnityEngine::____UnityEngine__TextEditor__TextEditOp>>(value));
}
 ::System::Collections::Generic::Dictionary_2<::UnityEngine::Event,::UnityEngine::____UnityEngine__TextEditor__TextEditOp> ::UnityEngine::TextEditor::__get_s_Keyactions()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::UnityEngine::Event,::UnityEngine::____UnityEngine__TextEditor__TextEditOp>, "s_Keyactions", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor>::get>();
}
 ::StringW ::UnityEngine::TextEditor::get_text()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor>::get(),
                            "get_text",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::TextEditor::set_text(::StringW value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor>::get(),
                            "set_text",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::UnityEngine::Rect ::UnityEngine::TextEditor::get_position()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor>::get(),
                            "get_position",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rect, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::TextEditor::set_position(::UnityEngine::Rect value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor>::get(),
                            "set_position",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::UnityEngine::Rect ::UnityEngine::TextEditor::get_localPosition()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor>::get(),
                            "get_localPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rect, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t ::UnityEngine::TextEditor::get_cursorIndex()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor>::get(),
                            "get_cursorIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::TextEditor::set_cursorIndex(int32_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor>::get(),
                            "set_cursorIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 int32_t ::UnityEngine::TextEditor::get_selectIndex()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor>::get(),
                            "get_selectIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::TextEditor::set_selectIndex(int32_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor>::get(),
                            "set_selectIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void ::UnityEngine::TextEditor::ClearCursorPos()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor>::get(),
                            "ClearCursorPos",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t ::UnityEngine::TextEditor::get_altCursorPosition()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor>::get(),
                            "get_altCursorPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 ::UnityEngine::TextEditor::TextEditor()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<TextEditor>())) {}
 void ::UnityEngine::TextEditor::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::TextEditor::OnFocus()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor>::get(),
                            "OnFocus",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::TextEditor::OnLostFocus()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor>::get(),
                            "OnLostFocus",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::TextEditor::GrabGraphicalCursorPos()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor>::get(),
                            "GrabGraphicalCursorPos",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::UnityEngine::TextEditor::HandleKeyEvent(::UnityEngine::Event e, bool textIsReadOnly)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor>::get(),
                            "HandleKeyEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Event>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, e, textIsReadOnly);
}
 bool ::UnityEngine::TextEditor::DeleteLineBack()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor>::get(),
                            "DeleteLineBack",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::UnityEngine::TextEditor::DeleteWordBack()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor>::get(),
                            "DeleteWordBack",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::UnityEngine::TextEditor::DeleteWordForward()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor>::get(),
                            "DeleteWordForward",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::UnityEngine::TextEditor::Delete()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor>::get(),
                            "Delete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::UnityEngine::TextEditor::CanPaste()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor>::get(),
                            "CanPaste",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::UnityEngine::TextEditor::Backspace()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor>::get(),
                            "Backspace",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::TextEditor::SelectAll()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor>::get(),
                            "SelectAll",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::TextEditor::SelectNone()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor>::get(),
                            "SelectNone",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::UnityEngine::TextEditor::get_hasSelection()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor>::get(),
                            "get_hasSelection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW ::UnityEngine::TextEditor::get_SelectedText()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor>::get(),
                            "get_SelectedText",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::UnityEngine::TextEditor::DeleteSelection()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor>::get(),
                            "DeleteSelection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::TextEditor::ReplaceSelection(::StringW replace)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor>::get(),
                            "ReplaceSelection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, replace);
}
 void ::UnityEngine::TextEditor::Insert(char16_t c)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor>::get(),
                            "Insert",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, c);
}
 void ::UnityEngine::TextEditor::MoveSelectionToAltCursor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor>::get(),
                            "MoveSelectionToAltCursor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::TextEditor::MoveRight()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor>::get(),
                            "MoveRight",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::TextEditor::MoveLeft()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor>::get(),
                            "MoveLeft",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::TextEditor::MoveUp()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor>::get(),
                            "MoveUp",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::TextEditor::MoveDown()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor>::get(),
                            "MoveDown",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::TextEditor::MoveLineStart()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor>::get(),
                            "MoveLineStart",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::TextEditor::MoveLineEnd()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor>::get(),
                            "MoveLineEnd",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::TextEditor::MoveGraphicalLineStart()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor>::get(),
                            "MoveGraphicalLineStart",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::TextEditor::MoveGraphicalLineEnd()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor>::get(),
                            "MoveGraphicalLineEnd",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::TextEditor::MoveTextStart()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor>::get(),
                            "MoveTextStart",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::TextEditor::MoveTextEnd()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor>::get(),
                            "MoveTextEnd",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t ::UnityEngine::TextEditor::IndexOfEndOfLine(int32_t startIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor>::get(),
                            "IndexOfEndOfLine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, startIndex);
}
 void ::UnityEngine::TextEditor::MoveParagraphForward()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor>::get(),
                            "MoveParagraphForward",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::TextEditor::MoveParagraphBackward()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor>::get(),
                            "MoveParagraphBackward",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::TextEditor::MoveCursorToPosition_Internal(::UnityEngine::Vector2 cursorPosition, bool shift)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor>::get(),
                            "MoveCursorToPosition_Internal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, cursorPosition, shift);
}
 void ::UnityEngine::TextEditor::MoveAltCursorToPosition(::UnityEngine::Vector2 cursorPosition)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor>::get(),
                            "MoveAltCursorToPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, cursorPosition);
}
 void ::UnityEngine::TextEditor::SelectToPosition(::UnityEngine::Vector2 cursorPosition)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor>::get(),
                            "SelectToPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, cursorPosition);
}
 void ::UnityEngine::TextEditor::SelectLeft()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor>::get(),
                            "SelectLeft",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::TextEditor::SelectRight()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor>::get(),
                            "SelectRight",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::TextEditor::SelectUp()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor>::get(),
                            "SelectUp",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::TextEditor::SelectDown()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor>::get(),
                            "SelectDown",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::TextEditor::SelectTextEnd()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor>::get(),
                            "SelectTextEnd",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::TextEditor::SelectTextStart()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor>::get(),
                            "SelectTextStart",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::TextEditor::MouseDragSelectsWholeWords(bool on)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor>::get(),
                            "MouseDragSelectsWholeWords",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, on);
}
 void ::UnityEngine::TextEditor::DblClickSnap(::UnityEngine::____UnityEngine__TextEditor__DblClickSnapping snapping)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor>::get(),
                            "DblClickSnap",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::____UnityEngine__TextEditor__DblClickSnapping>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, snapping);
}
 int32_t ::UnityEngine::TextEditor::GetGraphicalLineStart(int32_t p)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor>::get(),
                            "GetGraphicalLineStart",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, p);
}
 int32_t ::UnityEngine::TextEditor::GetGraphicalLineEnd(int32_t p)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor>::get(),
                            "GetGraphicalLineEnd",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, p);
}
 int32_t ::UnityEngine::TextEditor::FindNextSeperator(int32_t startPos)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor>::get(),
                            "FindNextSeperator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, startPos);
}
 int32_t ::UnityEngine::TextEditor::FindPrevSeperator(int32_t startPos)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor>::get(),
                            "FindPrevSeperator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, startPos);
}
 void ::UnityEngine::TextEditor::MoveWordRight()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor>::get(),
                            "MoveWordRight",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::TextEditor::MoveToStartOfNextWord()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor>::get(),
                            "MoveToStartOfNextWord",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::TextEditor::MoveToEndOfPreviousWord()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor>::get(),
                            "MoveToEndOfPreviousWord",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::TextEditor::SelectToStartOfNextWord()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor>::get(),
                            "SelectToStartOfNextWord",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::TextEditor::SelectToEndOfPreviousWord()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor>::get(),
                            "SelectToEndOfPreviousWord",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::UnityEngine::____UnityEngine__TextEditor__CharacterType ::UnityEngine::TextEditor::ClassifyChar(int32_t index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor>::get(),
                            "ClassifyChar",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::____UnityEngine__TextEditor__CharacterType, false>(const_cast<void*>(instance), ___internal_method, index);
}
 int32_t ::UnityEngine::TextEditor::FindStartOfNextWord(int32_t p)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor>::get(),
                            "FindStartOfNextWord",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, p);
}
 int32_t ::UnityEngine::TextEditor::FindEndOfPreviousWord(int32_t p)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor>::get(),
                            "FindEndOfPreviousWord",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, p);
}
 void ::UnityEngine::TextEditor::MoveWordLeft()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor>::get(),
                            "MoveWordLeft",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::TextEditor::SelectWordRight()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor>::get(),
                            "SelectWordRight",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::TextEditor::SelectWordLeft()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor>::get(),
                            "SelectWordLeft",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::TextEditor::ExpandSelectGraphicalLineStart()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor>::get(),
                            "ExpandSelectGraphicalLineStart",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::TextEditor::ExpandSelectGraphicalLineEnd()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor>::get(),
                            "ExpandSelectGraphicalLineEnd",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::TextEditor::SelectGraphicalLineStart()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor>::get(),
                            "SelectGraphicalLineStart",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::TextEditor::SelectGraphicalLineEnd()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor>::get(),
                            "SelectGraphicalLineEnd",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::TextEditor::SelectParagraphForward()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor>::get(),
                            "SelectParagraphForward",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::TextEditor::SelectParagraphBackward()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor>::get(),
                            "SelectParagraphBackward",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::TextEditor::SelectCurrentWord()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor>::get(),
                            "SelectCurrentWord",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t ::UnityEngine::TextEditor::FindEndOfClassification(int32_t p, ::UnityEngine::____UnityEngine__TextEditor__Direction dir)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor>::get(),
                            "FindEndOfClassification",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::____UnityEngine__TextEditor__Direction>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, p, dir);
}
 void ::UnityEngine::TextEditor::SelectCurrentParagraph()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor>::get(),
                            "SelectCurrentParagraph",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::TextEditor::UpdateScrollOffset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor>::get(),
                            "UpdateScrollOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::UnityEngine::TextEditor::PerformOperation(::UnityEngine::____UnityEngine__TextEditor__TextEditOp operation, bool textIsReadOnly)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor>::get(),
                            "PerformOperation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::____UnityEngine__TextEditor__TextEditOp>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, operation, textIsReadOnly);
}
 void ::UnityEngine::TextEditor::SaveBackup()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor>::get(),
                            "SaveBackup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::UnityEngine::TextEditor::Cut()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor>::get(),
                            "Cut",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::TextEditor::Copy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor>::get(),
                            "Copy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW ::UnityEngine::TextEditor::ReplaceNewlinesWithSpaces(::StringW value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor>::get(),
                            "ReplaceNewlinesWithSpaces",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, value);
}
 bool ::UnityEngine::TextEditor::Paste()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor>::get(),
                            "Paste",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::TextEditor::MapKey(::StringW key, ::UnityEngine::____UnityEngine__TextEditor__TextEditOp action)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor>::get(),
                            "MapKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::____UnityEngine__TextEditor__TextEditOp>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, key, action);
}
 void ::UnityEngine::TextEditor::InitKeyActions()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor>::get(),
                            "InitKeyActions",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::TextEditor::DetectFocusChange()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor>::get(),
                            "DetectFocusChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::TextEditor::OnDetectFocusChange()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor>::get(),
                            "OnDetectFocusChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::TextEditor::OnCursorIndexChange()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor>::get(),
                            "OnCursorIndexChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::TextEditor::OnSelectIndexChange()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor>::get(),
                            "OnSelectIndexChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::TextEditor::ClampTextIndex(ByRef<int32_t> index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor>::get(),
                            "ClampTextIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, index);
}
 void ::UnityEngine::TextEditor::EnsureValidCodePointIndex(ByRef<int32_t> index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor>::get(),
                            "EnsureValidCodePointIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, index);
}
 bool ::UnityEngine::TextEditor::IsValidCodePointIndex(int32_t index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor>::get(),
                            "IsValidCodePointIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, index);
}
 int32_t ::UnityEngine::TextEditor::PreviousCodePointIndex(int32_t index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor>::get(),
                            "PreviousCodePointIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, index);
}
 int32_t ::UnityEngine::TextEditor::NextCodePointIndex(int32_t index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextEditor>::get(),
                            "NextCodePointIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, index);
}
} // end anonymous namespace
