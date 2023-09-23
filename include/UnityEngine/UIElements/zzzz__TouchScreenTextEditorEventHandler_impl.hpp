#pragma once
#include "UnityEngine/UIElements/zzzz__TextEditorEventHandler_impl.hpp"
#include "UnityEngine/UIElements/zzzz__TouchScreenTextEditorEventHandler_def.hpp"
#include "UnityEngine/UIElements/zzzz__EventBase_def.hpp"
#include "UnityEngine/zzzz__TouchScreenKeyboard_def.hpp"
#include "UnityEngine/UIElements/zzzz__ITextInputField_def.hpp"
#include "UnityEngine/UIElements/zzzz__TextEditorEngine_def.hpp"
#include "UnityEngine/UIElements/zzzz__IVisualElementScheduledItem_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
//  Writing Method size for method: UnityEngine::UIElements::TouchScreenTextEditorEventHandler._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::TouchScreenTextEditorEventHandler::*)(UnityEngine::UIElements::TextEditorEngine, UnityEngine::UIElements::ITextInputField)>(&UnityEngine::UIElements::TouchScreenTextEditorEventHandler::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2cc45f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::TouchScreenTextEditorEventHandler>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::TextEditorEngine>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::ITextInputField>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::TouchScreenTextEditorEventHandler.PollTouchScreenKeyboard
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::TouchScreenTextEditorEventHandler::*)()>(&UnityEngine::UIElements::TouchScreenTextEditorEventHandler::PollTouchScreenKeyboard)> {
  constexpr static std::size_t size = 0x25c;
  constexpr static std::size_t addrs = 0x2cc45f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::TouchScreenTextEditorEventHandler>::get(),
                            "PollTouchScreenKeyboard",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::TouchScreenTextEditorEventHandler.DoPollTouchScreenKeyboard
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::TouchScreenTextEditorEventHandler::*)()>(&UnityEngine::UIElements::TouchScreenTextEditorEventHandler::DoPollTouchScreenKeyboard)> {
  constexpr static std::size_t size = 0x728;
  constexpr static std::size_t addrs = 0x2cc4854;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::TouchScreenTextEditorEventHandler>::get(),
                            "DoPollTouchScreenKeyboard",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::TouchScreenTextEditorEventHandler.ExecuteDefaultActionAtTarget
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::TouchScreenTextEditorEventHandler::*)(UnityEngine::UIElements::EventBase)>(&UnityEngine::UIElements::TouchScreenTextEditorEventHandler::ExecuteDefaultActionAtTarget)> {
  constexpr static std::size_t size = 0x550;
  constexpr static std::size_t addrs = 0x2cc4f7c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::UIElements::TouchScreenTextEditorEventHandler),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::TouchScreenTextEditorEventHandler>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
constexpr void UnityEngine::UIElements::TouchScreenTextEditorEventHandler::__set_m_TouchKeyboardPoller(UnityEngine::UIElements::IVisualElementScheduledItem value)  {
::cordl_internals::setInstanceField<UnityEngine::UIElements::IVisualElementScheduledItem, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::UIElements::IVisualElementScheduledItem>(value));
}
constexpr UnityEngine::UIElements::IVisualElementScheduledItem UnityEngine::UIElements::TouchScreenTextEditorEventHandler::__get_m_TouchKeyboardPoller() const {
return ::cordl_internals::getInstanceField<UnityEngine::UIElements::IVisualElementScheduledItem, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UIElements::TouchScreenTextEditorEventHandler::__set_m_LastPointerDownTarget(UnityEngine::UIElements::VisualElement value)  {
::cordl_internals::setInstanceField<UnityEngine::UIElements::VisualElement, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::UIElements::VisualElement>(value));
}
constexpr UnityEngine::UIElements::VisualElement UnityEngine::UIElements::TouchScreenTextEditorEventHandler::__get_m_LastPointerDownTarget() const {
return ::cordl_internals::getInstanceField<UnityEngine::UIElements::VisualElement, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void UnityEngine::UIElements::TouchScreenTextEditorEventHandler::__set_s_KeyboardOnScreen(UnityEngine::TouchScreenKeyboard value)  {
::cordl_internals::setStaticField<UnityEngine::TouchScreenKeyboard, "s_KeyboardOnScreen", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::TouchScreenTextEditorEventHandler>::get>(std::forward<UnityEngine::TouchScreenKeyboard>(value));
}
 UnityEngine::TouchScreenKeyboard UnityEngine::UIElements::TouchScreenTextEditorEventHandler::__get_s_KeyboardOnScreen()  {
return ::cordl_internals::getStaticField<UnityEngine::TouchScreenKeyboard, "s_KeyboardOnScreen", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::TouchScreenTextEditorEventHandler>::get>();
}
// Ctor Parameters [CppParam { name: "editorEngine", ty: "UnityEngine::UIElements::TextEditorEngine", modifiers: "", def_value: None }, CppParam { name: "textInputField", ty: "UnityEngine::UIElements::ITextInputField", modifiers: "", def_value: None }]
 UnityEngine::UIElements::TouchScreenTextEditorEventHandler::TouchScreenTextEditorEventHandler(UnityEngine::UIElements::TextEditorEngine editorEngine, UnityEngine::UIElements::ITextInputField textInputField)  : UnityEngine::UIElements::TextEditorEventHandler(THROW_UNLESS(::il2cpp_utils::New<TouchScreenTextEditorEventHandler>(editorEngine, textInputField))) {}
 void UnityEngine::UIElements::TouchScreenTextEditorEventHandler::_ctor(UnityEngine::UIElements::TextEditorEngine editorEngine, UnityEngine::UIElements::ITextInputField textInputField)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::TouchScreenTextEditorEventHandler>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::TextEditorEngine>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::ITextInputField>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, editorEngine, textInputField);
}
 void UnityEngine::UIElements::TouchScreenTextEditorEventHandler::PollTouchScreenKeyboard()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::TouchScreenTextEditorEventHandler>::get(),
                            "PollTouchScreenKeyboard",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UIElements::TouchScreenTextEditorEventHandler::DoPollTouchScreenKeyboard()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::TouchScreenTextEditorEventHandler>::get(),
                            "DoPollTouchScreenKeyboard",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UIElements::TouchScreenTextEditorEventHandler::ExecuteDefaultActionAtTarget(UnityEngine::UIElements::EventBase evt)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::TouchScreenTextEditorEventHandler>::get(),
                            "ExecuteDefaultActionAtTarget",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::EventBase>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, evt);
}
