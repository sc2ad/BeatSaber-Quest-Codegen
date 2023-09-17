#pragma once
#include "UnityEngine/UIElements/zzzz__TextEditorEventHandler_impl.hpp"
namespace {
#include "UnityEngine/UIElements/zzzz__KeyboardTextEditorEventHandler_def.hpp"
#include "UnityEngine/UIElements/zzzz__ExecuteCommandEvent_def.hpp"
#include "UnityEngine/zzzz__Event_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/UIElements/zzzz__KeyDownEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__TextEditorEngine_def.hpp"
#include "UnityEngine/UIElements/zzzz__ITextInputField_def.hpp"
#include "UnityEngine/UIElements/zzzz__EventBase_def.hpp"
#include "UnityEngine/UIElements/zzzz__BlurEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__FocusEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__MouseUpEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__MouseMoveEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__ValidateCommandEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__MouseDownEvent_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::KeyboardTextEditorEventHandler.get_isClicking
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::KeyboardTextEditorEventHandler::*)()>(&::UnityEngine::UIElements::KeyboardTextEditorEventHandler::get_isClicking)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ca7b20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::KeyboardTextEditorEventHandler>::get(),
                            "get_isClicking",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::KeyboardTextEditorEventHandler.set_isClicking
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::KeyboardTextEditorEventHandler::*)(bool)>(&::UnityEngine::UIElements::KeyboardTextEditorEventHandler::set_isClicking)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x2ca7b28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::KeyboardTextEditorEventHandler>::get(),
                            "set_isClicking",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::KeyboardTextEditorEventHandler._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::KeyboardTextEditorEventHandler::*)(::UnityEngine::UIElements::TextEditorEngine, ::UnityEngine::UIElements::ITextInputField)>(&::UnityEngine::UIElements::KeyboardTextEditorEventHandler::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2ca7b5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::KeyboardTextEditorEventHandler>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::TextEditorEngine>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::ITextInputField>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::KeyboardTextEditorEventHandler.ExecuteDefaultActionAtTarget
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::KeyboardTextEditorEventHandler::*)(::UnityEngine::UIElements::EventBase)>(&::UnityEngine::UIElements::KeyboardTextEditorEventHandler::ExecuteDefaultActionAtTarget)> {
  constexpr static std::size_t size = 0x5bc;
  constexpr static std::size_t addrs = 0x2ca7bdc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::UnityEngine::UIElements::KeyboardTextEditorEventHandler),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::KeyboardTextEditorEventHandler>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::KeyboardTextEditorEventHandler.OnFocus
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::KeyboardTextEditorEventHandler::*)(::UnityEngine::UIElements::FocusEvent)>(&::UnityEngine::UIElements::KeyboardTextEditorEventHandler::OnFocus)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x2ca8198;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::KeyboardTextEditorEventHandler>::get(),
                            "OnFocus",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::FocusEvent>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::KeyboardTextEditorEventHandler.OnBlur
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::KeyboardTextEditorEventHandler::*)(::UnityEngine::UIElements::BlurEvent)>(&::UnityEngine::UIElements::KeyboardTextEditorEventHandler::OnBlur)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2ca8328;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::KeyboardTextEditorEventHandler>::get(),
                            "OnBlur",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::BlurEvent>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::KeyboardTextEditorEventHandler.OnMouseDown
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::KeyboardTextEditorEventHandler::*)(::UnityEngine::UIElements::MouseDownEvent)>(&::UnityEngine::UIElements::KeyboardTextEditorEventHandler::OnMouseDown)> {
  constexpr static std::size_t size = 0x3f4;
  constexpr static std::size_t addrs = 0x2ca8334;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::KeyboardTextEditorEventHandler>::get(),
                            "OnMouseDown",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::MouseDownEvent>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::KeyboardTextEditorEventHandler.OnMouseUp
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::KeyboardTextEditorEventHandler::*)(::UnityEngine::UIElements::MouseUpEvent)>(&::UnityEngine::UIElements::KeyboardTextEditorEventHandler::OnMouseUp)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x2ca8728;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::KeyboardTextEditorEventHandler>::get(),
                            "OnMouseUp",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::MouseUpEvent>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::KeyboardTextEditorEventHandler.OnMouseMove
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::KeyboardTextEditorEventHandler::*)(::UnityEngine::UIElements::MouseMoveEvent)>(&::UnityEngine::UIElements::KeyboardTextEditorEventHandler::OnMouseMove)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x2ca8890;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::KeyboardTextEditorEventHandler>::get(),
                            "OnMouseMove",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::MouseMoveEvent>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::KeyboardTextEditorEventHandler.ProcessDragMove
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::KeyboardTextEditorEventHandler::*)(::UnityEngine::UIElements::MouseMoveEvent)>(&::UnityEngine::UIElements::KeyboardTextEditorEventHandler::ProcessDragMove)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x2ca9960;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::KeyboardTextEditorEventHandler>::get(),
                            "ProcessDragMove",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::MouseMoveEvent>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::KeyboardTextEditorEventHandler.MoveDistanceQualifiesForDrag
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::KeyboardTextEditorEventHandler::*)(::UnityEngine::Vector2, ::UnityEngine::Vector2)>(&::UnityEngine::UIElements::KeyboardTextEditorEventHandler::MoveDistanceQualifiesForDrag)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2ca993c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::KeyboardTextEditorEventHandler>::get(),
                            "MoveDistanceQualifiesForDrag",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::KeyboardTextEditorEventHandler.OnKeyDown
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::KeyboardTextEditorEventHandler::*)(::UnityEngine::UIElements::KeyDownEvent)>(&::UnityEngine::UIElements::KeyboardTextEditorEventHandler::OnKeyDown)> {
  constexpr static std::size_t size = 0x608;
  constexpr static std::size_t addrs = 0x2ca89d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::KeyboardTextEditorEventHandler>::get(),
                            "OnKeyDown",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::KeyDownEvent>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::KeyboardTextEditorEventHandler.OnValidateCommandEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::KeyboardTextEditorEventHandler::*)(::UnityEngine::UIElements::ValidateCommandEvent)>(&::UnityEngine::UIElements::KeyboardTextEditorEventHandler::OnValidateCommandEvent)> {
  constexpr static std::size_t size = 0x364;
  constexpr static std::size_t addrs = 0x2ca8fe0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::KeyboardTextEditorEventHandler>::get(),
                            "OnValidateCommandEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::ValidateCommandEvent>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::KeyboardTextEditorEventHandler.OnExecuteCommandEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::KeyboardTextEditorEventHandler::*)(::UnityEngine::UIElements::ExecuteCommandEvent)>(&::UnityEngine::UIElements::KeyboardTextEditorEventHandler::OnExecuteCommandEvent)> {
  constexpr static std::size_t size = 0x5f8;
  constexpr static std::size_t addrs = 0x2ca9344;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::KeyboardTextEditorEventHandler>::get(),
                            "OnExecuteCommandEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::ExecuteCommandEvent>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::KeyboardTextEditorEventHandler.PreDrawCursor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::KeyboardTextEditorEventHandler::*)(::StringW)>(&::UnityEngine::UIElements::KeyboardTextEditorEventHandler::PreDrawCursor)> {
  constexpr static std::size_t size = 0x340;
  constexpr static std::size_t addrs = 0x2ca9a94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::KeyboardTextEditorEventHandler>::get(),
                            "PreDrawCursor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::KeyboardTextEditorEventHandler.PostDrawCursor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::KeyboardTextEditorEventHandler::*)()>(&::UnityEngine::UIElements::KeyboardTextEditorEventHandler::PostDrawCursor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2ca9dd4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::KeyboardTextEditorEventHandler>::get(),
                            "PostDrawCursor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::UnityEngine::UIElements::KeyboardTextEditorEventHandler::__set_m_Changed(bool value)  {
::cordl_internals::setInstanceField<bool, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::UnityEngine::UIElements::KeyboardTextEditorEventHandler::__get_m_Changed() const {
return ::cordl_internals::getInstanceField<bool, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::UIElements::KeyboardTextEditorEventHandler::__set_m_Dragged(bool value)  {
::cordl_internals::setInstanceField<bool, 0x21>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::UnityEngine::UIElements::KeyboardTextEditorEventHandler::__get_m_Dragged() const {
return ::cordl_internals::getInstanceField<bool, 0x21>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::UIElements::KeyboardTextEditorEventHandler::__set_m_DragToPosition(bool value)  {
::cordl_internals::setInstanceField<bool, 0x22>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::UnityEngine::UIElements::KeyboardTextEditorEventHandler::__get_m_DragToPosition() const {
return ::cordl_internals::getInstanceField<bool, 0x22>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::UIElements::KeyboardTextEditorEventHandler::__set_m_SelectAllOnMouseUp(bool value)  {
::cordl_internals::setInstanceField<bool, 0x23>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::UnityEngine::UIElements::KeyboardTextEditorEventHandler::__get_m_SelectAllOnMouseUp() const {
return ::cordl_internals::getInstanceField<bool, 0x23>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::UIElements::KeyboardTextEditorEventHandler::__set_m_PreDrawCursorText(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::UnityEngine::UIElements::KeyboardTextEditorEventHandler::__get_m_PreDrawCursorText() const {
return ::cordl_internals::getInstanceField<::StringW, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::UIElements::KeyboardTextEditorEventHandler::__set_m_IsClicking(bool value)  {
::cordl_internals::setInstanceField<bool, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::UnityEngine::UIElements::KeyboardTextEditorEventHandler::__get_m_IsClicking() const {
return ::cordl_internals::getInstanceField<bool, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::UIElements::KeyboardTextEditorEventHandler::__set_m_ClickStartPosition(::UnityEngine::Vector2 value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector2, 0x34>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Vector2>(value));
}
constexpr ::UnityEngine::Vector2 ::UnityEngine::UIElements::KeyboardTextEditorEventHandler::__get_m_ClickStartPosition() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector2, 0x34>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::UIElements::KeyboardTextEditorEventHandler::__set_m_ImguiEvent(::UnityEngine::Event value)  {
::cordl_internals::setInstanceField<::UnityEngine::Event, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Event>(value));
}
constexpr ::UnityEngine::Event ::UnityEngine::UIElements::KeyboardTextEditorEventHandler::__get_m_ImguiEvent() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Event, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
 bool ::UnityEngine::UIElements::KeyboardTextEditorEventHandler::get_isClicking()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::KeyboardTextEditorEventHandler>::get(),
                            "get_isClicking",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::UIElements::KeyboardTextEditorEventHandler::set_isClicking(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::KeyboardTextEditorEventHandler>::get(),
                            "set_isClicking",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "editorEngine", ty: "::UnityEngine::UIElements::TextEditorEngine", modifiers: "", def_value: None }, CppParam { name: "textInputField", ty: "::UnityEngine::UIElements::ITextInputField", modifiers: "", def_value: None }]
 ::UnityEngine::UIElements::KeyboardTextEditorEventHandler::KeyboardTextEditorEventHandler(::UnityEngine::UIElements::TextEditorEngine editorEngine, ::UnityEngine::UIElements::ITextInputField textInputField)  : ::UnityEngine::UIElements::TextEditorEventHandler(THROW_UNLESS(::il2cpp_utils::New<KeyboardTextEditorEventHandler>(editorEngine, textInputField))) {}
 void ::UnityEngine::UIElements::KeyboardTextEditorEventHandler::_ctor(::UnityEngine::UIElements::TextEditorEngine editorEngine, ::UnityEngine::UIElements::ITextInputField textInputField)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::KeyboardTextEditorEventHandler>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::TextEditorEngine>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::ITextInputField>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, editorEngine, textInputField);
}
 void ::UnityEngine::UIElements::KeyboardTextEditorEventHandler::ExecuteDefaultActionAtTarget(::UnityEngine::UIElements::EventBase evt)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::KeyboardTextEditorEventHandler>::get(),
                            "ExecuteDefaultActionAtTarget",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::EventBase>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, evt);
}
 void ::UnityEngine::UIElements::KeyboardTextEditorEventHandler::OnFocus(::UnityEngine::UIElements::FocusEvent _)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::KeyboardTextEditorEventHandler>::get(),
                            "OnFocus",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::FocusEvent>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, _);
}
 void ::UnityEngine::UIElements::KeyboardTextEditorEventHandler::OnBlur(::UnityEngine::UIElements::BlurEvent _)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::KeyboardTextEditorEventHandler>::get(),
                            "OnBlur",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::BlurEvent>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, _);
}
 void ::UnityEngine::UIElements::KeyboardTextEditorEventHandler::OnMouseDown(::UnityEngine::UIElements::MouseDownEvent evt)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::KeyboardTextEditorEventHandler>::get(),
                            "OnMouseDown",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::MouseDownEvent>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, evt);
}
 void ::UnityEngine::UIElements::KeyboardTextEditorEventHandler::OnMouseUp(::UnityEngine::UIElements::MouseUpEvent evt)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::KeyboardTextEditorEventHandler>::get(),
                            "OnMouseUp",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::MouseUpEvent>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, evt);
}
 void ::UnityEngine::UIElements::KeyboardTextEditorEventHandler::OnMouseMove(::UnityEngine::UIElements::MouseMoveEvent evt)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::KeyboardTextEditorEventHandler>::get(),
                            "OnMouseMove",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::MouseMoveEvent>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, evt);
}
 void ::UnityEngine::UIElements::KeyboardTextEditorEventHandler::ProcessDragMove(::UnityEngine::UIElements::MouseMoveEvent evt)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::KeyboardTextEditorEventHandler>::get(),
                            "ProcessDragMove",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::MouseMoveEvent>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, evt);
}
 bool ::UnityEngine::UIElements::KeyboardTextEditorEventHandler::MoveDistanceQualifiesForDrag(::UnityEngine::Vector2 start, ::UnityEngine::Vector2 current)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::KeyboardTextEditorEventHandler>::get(),
                            "MoveDistanceQualifiesForDrag",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, start, current);
}
 void ::UnityEngine::UIElements::KeyboardTextEditorEventHandler::OnKeyDown(::UnityEngine::UIElements::KeyDownEvent evt)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::KeyboardTextEditorEventHandler>::get(),
                            "OnKeyDown",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::KeyDownEvent>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, evt);
}
 void ::UnityEngine::UIElements::KeyboardTextEditorEventHandler::OnValidateCommandEvent(::UnityEngine::UIElements::ValidateCommandEvent evt)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::KeyboardTextEditorEventHandler>::get(),
                            "OnValidateCommandEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::ValidateCommandEvent>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, evt);
}
 void ::UnityEngine::UIElements::KeyboardTextEditorEventHandler::OnExecuteCommandEvent(::UnityEngine::UIElements::ExecuteCommandEvent evt)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::KeyboardTextEditorEventHandler>::get(),
                            "OnExecuteCommandEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::ExecuteCommandEvent>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, evt);
}
 void ::UnityEngine::UIElements::KeyboardTextEditorEventHandler::PreDrawCursor(::StringW newText)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::KeyboardTextEditorEventHandler>::get(),
                            "PreDrawCursor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, newText);
}
 void ::UnityEngine::UIElements::KeyboardTextEditorEventHandler::PostDrawCursor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::KeyboardTextEditorEventHandler>::get(),
                            "PostDrawCursor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
