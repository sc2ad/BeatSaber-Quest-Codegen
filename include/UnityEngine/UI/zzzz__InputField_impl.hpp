#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_1_impl.hpp"
#include "UnityEngine/UI/zzzz__Selectable_impl.hpp"
#include "UnityEngine/UI/zzzz__InputField_def.hpp"
#include "UnityEngine/zzzz__TextGenerator_def.hpp"
#include "UnityEngine/EventSystems/zzzz__BaseInput_def.hpp"
#include "UnityEngine/UI/zzzz__Graphic_def.hpp"
#include "UnityEngine/UI/zzzz__Text_def.hpp"
#include "UnityEngine/UI/zzzz__ILayoutElement_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IBeginDragHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__PointerEventData_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IPointerClickHandler_def.hpp"
#include "UnityEngine/zzzz__TouchScreenKeyboardType_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IEventSystemHandler_def.hpp"
#include "UnityEngine/zzzz__WaitForSecondsRealtime_def.hpp"
#include "UnityEngine/zzzz__TouchScreenKeyboard_def.hpp"
#include "UnityEngine/zzzz__RectTransform_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IUpdateSelectedHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__BaseEventData_def.hpp"
#include "UnityEngine/UI/zzzz__CanvasUpdate_def.hpp"
#include "UnityEngine/UI/zzzz__Selectable_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IDragHandler_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "UnityEngine/EventSystems/zzzz__ISubmitHandler_def.hpp"
#include "UnityEngine/UI/zzzz__ICanvasElement_def.hpp"
#include "UnityEngine/zzzz__UIVertex_def.hpp"
#include "UnityEngine/zzzz__Event_def.hpp"
#include "UnityEngine/zzzz__Coroutine_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IEndDragHandler_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__CanvasRenderer_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/UI/zzzz__VertexHelper_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::UI::UnityEngine__UI__InputField__ContentType::UnityEngine__UI__InputField__ContentType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void UnityEngine::UI::UnityEngine__UI__InputField__ContentType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::UI::UnityEngine__UI__InputField__ContentType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr UnityEngine::UI::UnityEngine__UI__InputField__ContentType  UnityEngine::UI::UnityEngine__UI__InputField__ContentType::Standard{0};
constexpr UnityEngine::UI::UnityEngine__UI__InputField__ContentType  UnityEngine::UI::UnityEngine__UI__InputField__ContentType::Autocorrected{1};
constexpr UnityEngine::UI::UnityEngine__UI__InputField__ContentType  UnityEngine::UI::UnityEngine__UI__InputField__ContentType::IntegerNumber{2};
constexpr UnityEngine::UI::UnityEngine__UI__InputField__ContentType  UnityEngine::UI::UnityEngine__UI__InputField__ContentType::DecimalNumber{3};
constexpr UnityEngine::UI::UnityEngine__UI__InputField__ContentType  UnityEngine::UI::UnityEngine__UI__InputField__ContentType::Alphanumeric{4};
constexpr UnityEngine::UI::UnityEngine__UI__InputField__ContentType  UnityEngine::UI::UnityEngine__UI__InputField__ContentType::Name{5};
constexpr UnityEngine::UI::UnityEngine__UI__InputField__ContentType  UnityEngine::UI::UnityEngine__UI__InputField__ContentType::EmailAddress{6};
constexpr UnityEngine::UI::UnityEngine__UI__InputField__ContentType  UnityEngine::UI::UnityEngine__UI__InputField__ContentType::Password{7};
constexpr UnityEngine::UI::UnityEngine__UI__InputField__ContentType  UnityEngine::UI::UnityEngine__UI__InputField__ContentType::Pin{8};
constexpr UnityEngine::UI::UnityEngine__UI__InputField__ContentType  UnityEngine::UI::UnityEngine__UI__InputField__ContentType::Custom{9};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::UI::UnityEngine__UI__InputField__InputType::UnityEngine__UI__InputField__InputType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void UnityEngine::UI::UnityEngine__UI__InputField__InputType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::UI::UnityEngine__UI__InputField__InputType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr UnityEngine::UI::UnityEngine__UI__InputField__InputType  UnityEngine::UI::UnityEngine__UI__InputField__InputType::Standard{0};
constexpr UnityEngine::UI::UnityEngine__UI__InputField__InputType  UnityEngine::UI::UnityEngine__UI__InputField__InputType::AutoCorrect{1};
constexpr UnityEngine::UI::UnityEngine__UI__InputField__InputType  UnityEngine::UI::UnityEngine__UI__InputField__InputType::Password{2};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::UI::UnityEngine__UI__InputField__CharacterValidation::UnityEngine__UI__InputField__CharacterValidation(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void UnityEngine::UI::UnityEngine__UI__InputField__CharacterValidation::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::UI::UnityEngine__UI__InputField__CharacterValidation::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr UnityEngine::UI::UnityEngine__UI__InputField__CharacterValidation  UnityEngine::UI::UnityEngine__UI__InputField__CharacterValidation::None{0};
constexpr UnityEngine::UI::UnityEngine__UI__InputField__CharacterValidation  UnityEngine::UI::UnityEngine__UI__InputField__CharacterValidation::Integer{1};
constexpr UnityEngine::UI::UnityEngine__UI__InputField__CharacterValidation  UnityEngine::UI::UnityEngine__UI__InputField__CharacterValidation::Decimal{2};
constexpr UnityEngine::UI::UnityEngine__UI__InputField__CharacterValidation  UnityEngine::UI::UnityEngine__UI__InputField__CharacterValidation::Alphanumeric{3};
constexpr UnityEngine::UI::UnityEngine__UI__InputField__CharacterValidation  UnityEngine::UI::UnityEngine__UI__InputField__CharacterValidation::Name{4};
constexpr UnityEngine::UI::UnityEngine__UI__InputField__CharacterValidation  UnityEngine::UI::UnityEngine__UI__InputField__CharacterValidation::EmailAddress{5};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::UI::UnityEngine__UI__InputField__LineType::UnityEngine__UI__InputField__LineType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void UnityEngine::UI::UnityEngine__UI__InputField__LineType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::UI::UnityEngine__UI__InputField__LineType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr UnityEngine::UI::UnityEngine__UI__InputField__LineType  UnityEngine::UI::UnityEngine__UI__InputField__LineType::SingleLine{0};
constexpr UnityEngine::UI::UnityEngine__UI__InputField__LineType  UnityEngine::UI::UnityEngine__UI__InputField__LineType::MultiLineSubmit{1};
constexpr UnityEngine::UI::UnityEngine__UI__InputField__LineType  UnityEngine::UI::UnityEngine__UI__InputField__LineType::MultiLineNewline{2};
//  Writing Method size for method: UnityEngine::UI::UnityEngine__UI__InputField__OnValidateInput._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::UnityEngine__UI__InputField__OnValidateInput::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&UnityEngine::UI::UnityEngine__UI__InputField__OnValidateInput::_ctor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x2bf0b60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::UnityEngine__UI__InputField__OnValidateInput>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::UnityEngine__UI__InputField__OnValidateInput.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<char16_t (UnityEngine::UI::UnityEngine__UI__InputField__OnValidateInput::*)(::StringW, int32_t, char16_t)>(&UnityEngine::UI::UnityEngine__UI__InputField__OnValidateInput::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2bf9b20;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::UI::UnityEngine__UI__InputField__OnValidateInput),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::UnityEngine__UI__InputField__OnValidateInput>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::UnityEngine__UI__InputField__OnValidateInput.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult (UnityEngine::UI::UnityEngine__UI__InputField__OnValidateInput::*)(::StringW, int32_t, char16_t, System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&UnityEngine::UI::UnityEngine__UI__InputField__OnValidateInput::BeginInvoke)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x2bf9b34;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::UI::UnityEngine__UI__InputField__OnValidateInput),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::UnityEngine__UI__InputField__OnValidateInput>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::UnityEngine__UI__InputField__OnValidateInput.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<char16_t (UnityEngine::UI::UnityEngine__UI__InputField__OnValidateInput::*)(System::IAsyncResult)>(&UnityEngine::UI::UnityEngine__UI__InputField__OnValidateInput::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2bf9bf4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::UI::UnityEngine__UI__InputField__OnValidateInput),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::UnityEngine__UI__InputField__OnValidateInput>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 UnityEngine::UI::UnityEngine__UI__InputField__OnValidateInput::UnityEngine__UI__InputField__OnValidateInput(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  : System::MulticastDelegate(THROW_UNLESS(::il2cpp_utils::New<UnityEngine__UI__InputField__OnValidateInput>(object, method))) {}
 void UnityEngine::UI::UnityEngine__UI__InputField__OnValidateInput::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::UnityEngine__UI__InputField__OnValidateInput>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 char16_t UnityEngine::UI::UnityEngine__UI__InputField__OnValidateInput::Invoke(::StringW text, int32_t charIndex, char16_t addedChar)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::UnityEngine__UI__InputField__OnValidateInput>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<char16_t, false>(const_cast<void*>(instance), ___internal_method, text, charIndex, addedChar);
}
 System::IAsyncResult UnityEngine::UI::UnityEngine__UI__InputField__OnValidateInput::BeginInvoke(::StringW text, int32_t charIndex, char16_t addedChar, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::UnityEngine__UI__InputField__OnValidateInput>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, text, charIndex, addedChar, callback, object);
}
 char16_t UnityEngine::UI::UnityEngine__UI__InputField__OnValidateInput::EndInvoke(System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::UnityEngine__UI__InputField__OnValidateInput>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<char16_t, false>(const_cast<void*>(instance), ___internal_method, result);
}
//  Writing Method size for method: UnityEngine::UI::UnityEngine__UI__InputField__SubmitEvent._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::UnityEngine__UI__InputField__SubmitEvent::*)()>(&UnityEngine::UI::UnityEngine__UI__InputField__SubmitEvent::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2bf04e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::UnityEngine__UI__InputField__SubmitEvent>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters []
 UnityEngine::UI::UnityEngine__UI__InputField__SubmitEvent::UnityEngine__UI__InputField__SubmitEvent()  : UnityEngine::Events::UnityEvent_1<::StringW>(THROW_UNLESS(::il2cpp_utils::New<UnityEngine__UI__InputField__SubmitEvent>())) {}
 void UnityEngine::UI::UnityEngine__UI__InputField__SubmitEvent::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::UnityEngine__UI__InputField__SubmitEvent>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: UnityEngine::UI::UnityEngine__UI__InputField__EndEditEvent._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::UnityEngine__UI__InputField__EndEditEvent::*)()>(&UnityEngine::UI::UnityEngine__UI__InputField__EndEditEvent::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2bf052c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::UnityEngine__UI__InputField__EndEditEvent>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters []
 UnityEngine::UI::UnityEngine__UI__InputField__EndEditEvent::UnityEngine__UI__InputField__EndEditEvent()  : UnityEngine::Events::UnityEvent_1<::StringW>(THROW_UNLESS(::il2cpp_utils::New<UnityEngine__UI__InputField__EndEditEvent>())) {}
 void UnityEngine::UI::UnityEngine__UI__InputField__EndEditEvent::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::UnityEngine__UI__InputField__EndEditEvent>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: UnityEngine::UI::UnityEngine__UI__InputField__OnChangeEvent._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::UnityEngine__UI__InputField__OnChangeEvent::*)()>(&UnityEngine::UI::UnityEngine__UI__InputField__OnChangeEvent::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2bf0574;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::UnityEngine__UI__InputField__OnChangeEvent>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters []
 UnityEngine::UI::UnityEngine__UI__InputField__OnChangeEvent::UnityEngine__UI__InputField__OnChangeEvent()  : UnityEngine::Events::UnityEvent_1<::StringW>(THROW_UNLESS(::il2cpp_utils::New<UnityEngine__UI__InputField__OnChangeEvent>())) {}
 void UnityEngine::UI::UnityEngine__UI__InputField__OnChangeEvent::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::UnityEngine__UI__InputField__OnChangeEvent>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::UI::UnityEngine__UI__InputField__EditState::UnityEngine__UI__InputField__EditState(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void UnityEngine::UI::UnityEngine__UI__InputField__EditState::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::UI::UnityEngine__UI__InputField__EditState::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr UnityEngine::UI::UnityEngine__UI__InputField__EditState  UnityEngine::UI::UnityEngine__UI__InputField__EditState::Continue{0};
constexpr UnityEngine::UI::UnityEngine__UI__InputField__EditState  UnityEngine::UI::UnityEngine__UI__InputField__EditState::Finish{1};
//  Writing Method size for method: UnityEngine::UI::UnityEngine__UI__InputField___CaretBlink_d__172._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::UnityEngine__UI__InputField___CaretBlink_d__172::*)(int32_t)>(&UnityEngine::UI::UnityEngine__UI__InputField___CaretBlink_d__172::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2bf2798;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::UnityEngine__UI__InputField___CaretBlink_d__172>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::UnityEngine__UI__InputField___CaretBlink_d__172.System_IDisposable_Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::UnityEngine__UI__InputField___CaretBlink_d__172::*)()>(&UnityEngine::UI::UnityEngine__UI__InputField___CaretBlink_d__172::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2bf9c1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::UnityEngine__UI__InputField___CaretBlink_d__172>::get(),
                            "System.IDisposable.Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::UnityEngine__UI__InputField___CaretBlink_d__172.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UI::UnityEngine__UI__InputField___CaretBlink_d__172::*)()>(&UnityEngine::UI::UnityEngine__UI__InputField___CaretBlink_d__172::MoveNext)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x2bf9c20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::UnityEngine__UI__InputField___CaretBlink_d__172>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::UnityEngine__UI__InputField___CaretBlink_d__172.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (UnityEngine::UI::UnityEngine__UI__InputField___CaretBlink_d__172::*)()>(&UnityEngine::UI::UnityEngine__UI__InputField___CaretBlink_d__172::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bf9d2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::UnityEngine__UI__InputField___CaretBlink_d__172>::get(),
                            "System.Collections.Generic.IEnumerator<System.Object>.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::UnityEngine__UI__InputField___CaretBlink_d__172.System_Collections_IEnumerator_Reset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::UnityEngine__UI__InputField___CaretBlink_d__172::*)()>(&UnityEngine::UI::UnityEngine__UI__InputField___CaretBlink_d__172::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2bf9d34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::UnityEngine__UI__InputField___CaretBlink_d__172>::get(),
                            "System.Collections.IEnumerator.Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::UnityEngine__UI__InputField___CaretBlink_d__172.System_Collections_IEnumerator_get_Current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (UnityEngine::UI::UnityEngine__UI__InputField___CaretBlink_d__172::*)()>(&UnityEngine::UI::UnityEngine__UI__InputField___CaretBlink_d__172::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bf9d74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::UnityEngine__UI__InputField___CaretBlink_d__172>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>
constexpr  UnityEngine::UI::UnityEngine__UI__InputField___CaretBlink_d__172::operator System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>() const noexcept {
return System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::Collections::IEnumerator
constexpr  UnityEngine::UI::UnityEngine__UI__InputField___CaretBlink_d__172::operator System::Collections::IEnumerator() const noexcept {
return System::Collections::IEnumerator(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::IDisposable
constexpr  UnityEngine::UI::UnityEngine__UI__InputField___CaretBlink_d__172::operator System::IDisposable() const noexcept {
return System::IDisposable(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UI::UnityEngine__UI__InputField___CaretBlink_d__172::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::UI::UnityEngine__UI__InputField___CaretBlink_d__172::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UI::UnityEngine__UI__InputField___CaretBlink_d__172::__set___2__current(::bs_hook::Il2CppWrapperType value)  {
::cordl_internals::setInstanceField<::bs_hook::Il2CppWrapperType, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::bs_hook::Il2CppWrapperType>(value));
}
constexpr ::bs_hook::Il2CppWrapperType UnityEngine::UI::UnityEngine__UI__InputField___CaretBlink_d__172::__get___2__current() const {
return ::cordl_internals::getInstanceField<::bs_hook::Il2CppWrapperType, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UI::UnityEngine__UI__InputField___CaretBlink_d__172::__set___4__this(UnityEngine::UI::InputField value)  {
::cordl_internals::setInstanceField<UnityEngine::UI::InputField, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::UI::InputField>(value));
}
constexpr UnityEngine::UI::InputField UnityEngine::UI::UnityEngine__UI__InputField___CaretBlink_d__172::__get___4__this() const {
return ::cordl_internals::getInstanceField<UnityEngine::UI::InputField, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }]
 UnityEngine::UI::UnityEngine__UI__InputField___CaretBlink_d__172::UnityEngine__UI__InputField___CaretBlink_d__172(int32_t __1__state)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<UnityEngine__UI__InputField___CaretBlink_d__172>(__1__state))) {}
 void UnityEngine::UI::UnityEngine__UI__InputField___CaretBlink_d__172::_ctor(int32_t __1__state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::UnityEngine__UI__InputField___CaretBlink_d__172>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, __1__state);
}
 void UnityEngine::UI::UnityEngine__UI__InputField___CaretBlink_d__172::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::UnityEngine__UI__InputField___CaretBlink_d__172>::get(),
                            "System.IDisposable.Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool UnityEngine::UI::UnityEngine__UI__InputField___CaretBlink_d__172::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::UnityEngine__UI__InputField___CaretBlink_d__172>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 ::bs_hook::Il2CppWrapperType UnityEngine::UI::UnityEngine__UI__InputField___CaretBlink_d__172::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::UnityEngine__UI__InputField___CaretBlink_d__172>::get(),
                            "System.Collections.Generic.IEnumerator<System.Object>.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UI::UnityEngine__UI__InputField___CaretBlink_d__172::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::UnityEngine__UI__InputField___CaretBlink_d__172>::get(),
                            "System.Collections.IEnumerator.Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::bs_hook::Il2CppWrapperType UnityEngine::UI::UnityEngine__UI__InputField___CaretBlink_d__172::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::UnityEngine__UI__InputField___CaretBlink_d__172>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: UnityEngine::UI::UnityEngine__UI__InputField___MouseDragOutsideRect_d__194._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::UnityEngine__UI__InputField___MouseDragOutsideRect_d__194::*)(int32_t)>(&UnityEngine::UI::UnityEngine__UI__InputField___MouseDragOutsideRect_d__194::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2bf4df8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::UnityEngine__UI__InputField___MouseDragOutsideRect_d__194>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::UnityEngine__UI__InputField___MouseDragOutsideRect_d__194.System_IDisposable_Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::UnityEngine__UI__InputField___MouseDragOutsideRect_d__194::*)()>(&UnityEngine::UI::UnityEngine__UI__InputField___MouseDragOutsideRect_d__194::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2bf9d7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::UnityEngine__UI__InputField___MouseDragOutsideRect_d__194>::get(),
                            "System.IDisposable.Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::UnityEngine__UI__InputField___MouseDragOutsideRect_d__194.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UI::UnityEngine__UI__InputField___MouseDragOutsideRect_d__194::*)()>(&UnityEngine::UI::UnityEngine__UI__InputField___MouseDragOutsideRect_d__194::MoveNext)> {
  constexpr static std::size_t size = 0x2a8;
  constexpr static std::size_t addrs = 0x2bf9d80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::UnityEngine__UI__InputField___MouseDragOutsideRect_d__194>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::UnityEngine__UI__InputField___MouseDragOutsideRect_d__194.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (UnityEngine::UI::UnityEngine__UI__InputField___MouseDragOutsideRect_d__194::*)()>(&UnityEngine::UI::UnityEngine__UI__InputField___MouseDragOutsideRect_d__194::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bfa028;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::UnityEngine__UI__InputField___MouseDragOutsideRect_d__194>::get(),
                            "System.Collections.Generic.IEnumerator<System.Object>.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::UnityEngine__UI__InputField___MouseDragOutsideRect_d__194.System_Collections_IEnumerator_Reset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::UnityEngine__UI__InputField___MouseDragOutsideRect_d__194::*)()>(&UnityEngine::UI::UnityEngine__UI__InputField___MouseDragOutsideRect_d__194::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2bfa030;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::UnityEngine__UI__InputField___MouseDragOutsideRect_d__194>::get(),
                            "System.Collections.IEnumerator.Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::UnityEngine__UI__InputField___MouseDragOutsideRect_d__194.System_Collections_IEnumerator_get_Current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (UnityEngine::UI::UnityEngine__UI__InputField___MouseDragOutsideRect_d__194::*)()>(&UnityEngine::UI::UnityEngine__UI__InputField___MouseDragOutsideRect_d__194::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bfa070;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::UnityEngine__UI__InputField___MouseDragOutsideRect_d__194>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>
constexpr  UnityEngine::UI::UnityEngine__UI__InputField___MouseDragOutsideRect_d__194::operator System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>() const noexcept {
return System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::Collections::IEnumerator
constexpr  UnityEngine::UI::UnityEngine__UI__InputField___MouseDragOutsideRect_d__194::operator System::Collections::IEnumerator() const noexcept {
return System::Collections::IEnumerator(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::IDisposable
constexpr  UnityEngine::UI::UnityEngine__UI__InputField___MouseDragOutsideRect_d__194::operator System::IDisposable() const noexcept {
return System::IDisposable(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UI::UnityEngine__UI__InputField___MouseDragOutsideRect_d__194::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::UI::UnityEngine__UI__InputField___MouseDragOutsideRect_d__194::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UI::UnityEngine__UI__InputField___MouseDragOutsideRect_d__194::__set___2__current(::bs_hook::Il2CppWrapperType value)  {
::cordl_internals::setInstanceField<::bs_hook::Il2CppWrapperType, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::bs_hook::Il2CppWrapperType>(value));
}
constexpr ::bs_hook::Il2CppWrapperType UnityEngine::UI::UnityEngine__UI__InputField___MouseDragOutsideRect_d__194::__get___2__current() const {
return ::cordl_internals::getInstanceField<::bs_hook::Il2CppWrapperType, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UI::UnityEngine__UI__InputField___MouseDragOutsideRect_d__194::__set_eventData(UnityEngine::EventSystems::PointerEventData value)  {
::cordl_internals::setInstanceField<UnityEngine::EventSystems::PointerEventData, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::EventSystems::PointerEventData>(value));
}
constexpr UnityEngine::EventSystems::PointerEventData UnityEngine::UI::UnityEngine__UI__InputField___MouseDragOutsideRect_d__194::__get_eventData() const {
return ::cordl_internals::getInstanceField<UnityEngine::EventSystems::PointerEventData, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UI::UnityEngine__UI__InputField___MouseDragOutsideRect_d__194::__set___4__this(UnityEngine::UI::InputField value)  {
::cordl_internals::setInstanceField<UnityEngine::UI::InputField, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::UI::InputField>(value));
}
constexpr UnityEngine::UI::InputField UnityEngine::UI::UnityEngine__UI__InputField___MouseDragOutsideRect_d__194::__get___4__this() const {
return ::cordl_internals::getInstanceField<UnityEngine::UI::InputField, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }]
 UnityEngine::UI::UnityEngine__UI__InputField___MouseDragOutsideRect_d__194::UnityEngine__UI__InputField___MouseDragOutsideRect_d__194(int32_t __1__state)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<UnityEngine__UI__InputField___MouseDragOutsideRect_d__194>(__1__state))) {}
 void UnityEngine::UI::UnityEngine__UI__InputField___MouseDragOutsideRect_d__194::_ctor(int32_t __1__state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::UnityEngine__UI__InputField___MouseDragOutsideRect_d__194>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, __1__state);
}
 void UnityEngine::UI::UnityEngine__UI__InputField___MouseDragOutsideRect_d__194::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::UnityEngine__UI__InputField___MouseDragOutsideRect_d__194>::get(),
                            "System.IDisposable.Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool UnityEngine::UI::UnityEngine__UI__InputField___MouseDragOutsideRect_d__194::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::UnityEngine__UI__InputField___MouseDragOutsideRect_d__194>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 ::bs_hook::Il2CppWrapperType UnityEngine::UI::UnityEngine__UI__InputField___MouseDragOutsideRect_d__194::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::UnityEngine__UI__InputField___MouseDragOutsideRect_d__194>::get(),
                            "System.Collections.Generic.IEnumerator<System.Object>.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UI::UnityEngine__UI__InputField___MouseDragOutsideRect_d__194::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::UnityEngine__UI__InputField___MouseDragOutsideRect_d__194>::get(),
                            "System.Collections.IEnumerator.Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::bs_hook::Il2CppWrapperType UnityEngine::UI::UnityEngine__UI__InputField___MouseDragOutsideRect_d__194::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::UnityEngine__UI__InputField___MouseDragOutsideRect_d__194>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: UnityEngine::UI::InputField.get_input
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::EventSystems::BaseInput (UnityEngine::UI::InputField::*)()>(&UnityEngine::UI::InputField::get_input)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x2bf01a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "get_input",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::InputField.get_compositionString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::UI::InputField::*)()>(&UnityEngine::UI::InputField::get_compositionString)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x2bf02b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "get_compositionString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::InputField._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::InputField::*)()>(&UnityEngine::UI::InputField::_ctor)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x2bf034c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::InputField.get_mesh
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Mesh (UnityEngine::UI::InputField::*)()>(&UnityEngine::UI::InputField::get_mesh)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x2bf0650;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "get_mesh",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::InputField.get_cachedInputTextGenerator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::TextGenerator (UnityEngine::UI::InputField::*)()>(&UnityEngine::UI::InputField::get_cachedInputTextGenerator)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2bf06f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "get_cachedInputTextGenerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::InputField.set_shouldHideMobileInput
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::InputField::*)(bool)>(&UnityEngine::UI::InputField::set_shouldHideMobileInput)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2bf0764;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "set_shouldHideMobileInput",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::InputField.get_shouldHideMobileInput
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UI::InputField::*)()>(&UnityEngine::UI::InputField::get_shouldHideMobileInput)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2bf07bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "get_shouldHideMobileInput",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::InputField.set_shouldActivateOnSelect
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::InputField::*)(bool)>(&UnityEngine::UI::InputField::set_shouldActivateOnSelect)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2bf0804;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::UI::InputField),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                                  59
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::InputField.get_shouldActivateOnSelect
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UI::InputField::*)()>(&UnityEngine::UI::InputField::get_shouldActivateOnSelect)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2bf0810;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::UI::InputField),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                                  60
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::InputField.get_text
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::UI::InputField::*)()>(&UnityEngine::UI::InputField::get_text)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bf083c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "get_text",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::InputField.set_text
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::InputField::*)(::StringW)>(&UnityEngine::UI::InputField::set_text)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bf0844;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "set_text",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::InputField.SetTextWithoutNotify
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::InputField::*)(::StringW)>(&UnityEngine::UI::InputField::SetTextWithoutNotify)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bf0b58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "SetTextWithoutNotify",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::InputField.SetText
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::InputField::*)(::StringW, bool)>(&UnityEngine::UI::InputField::SetText)> {
  constexpr static std::size_t size = 0x30c;
  constexpr static std::size_t addrs = 0x2bf084c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "SetText",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::InputField.get_isFocused
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UI::InputField::*)()>(&UnityEngine::UI::InputField::get_isFocused)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bf10d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "get_isFocused",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::InputField.get_caretBlinkRate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (UnityEngine::UI::InputField::*)()>(&UnityEngine::UI::InputField::get_caretBlinkRate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bf10dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "get_caretBlinkRate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::InputField.set_caretBlinkRate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::InputField::*)(float_t)>(&UnityEngine::UI::InputField::set_caretBlinkRate)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2bf10e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "set_caretBlinkRate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::InputField.get_caretWidth
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (UnityEngine::UI::InputField::*)()>(&UnityEngine::UI::InputField::get_caretWidth)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bf11b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "get_caretWidth",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::InputField.set_caretWidth
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::InputField::*)(int32_t)>(&UnityEngine::UI::InputField::set_caretWidth)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2bf11bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "set_caretWidth",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::InputField.get_textComponent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::UI::Text (UnityEngine::UI::InputField::*)()>(&UnityEngine::UI::InputField::get_textComponent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bf1288;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "get_textComponent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::InputField.set_textComponent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::InputField::*)(UnityEngine::UI::Text)>(&UnityEngine::UI::InputField::set_textComponent)> {
  constexpr static std::size_t size = 0x2a4;
  constexpr static std::size_t addrs = 0x2bf1290;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "set_textComponent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UI::Text>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::InputField.get_placeholder
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::UI::Graphic (UnityEngine::UI::InputField::*)()>(&UnityEngine::UI::InputField::get_placeholder)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bf1534;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "get_placeholder",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::InputField.set_placeholder
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::InputField::*)(UnityEngine::UI::Graphic)>(&UnityEngine::UI::InputField::set_placeholder)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2bf153c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "set_placeholder",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UI::Graphic>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::InputField.get_caretColor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Color (UnityEngine::UI::InputField::*)()>(&UnityEngine::UI::InputField::get_caretColor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2bf1594;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "get_caretColor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::InputField.set_caretColor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::InputField::*)(UnityEngine::Color)>(&UnityEngine::UI::InputField::set_caretColor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2bf15d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "set_caretColor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Color>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::InputField.get_customCaretColor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UI::InputField::*)()>(&UnityEngine::UI::InputField::get_customCaretColor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bf1604;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "get_customCaretColor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::InputField.set_customCaretColor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::InputField::*)(bool)>(&UnityEngine::UI::InputField::set_customCaretColor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2bf160c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "set_customCaretColor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::InputField.get_selectionColor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Color (UnityEngine::UI::InputField::*)()>(&UnityEngine::UI::InputField::get_selectionColor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2bf1628;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "get_selectionColor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::InputField.set_selectionColor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::InputField::*)(UnityEngine::Color)>(&UnityEngine::UI::InputField::set_selectionColor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2bf163c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "set_selectionColor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Color>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::InputField.get_onEndEdit
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::UI::UnityEngine__UI__InputField__EndEditEvent (UnityEngine::UI::InputField::*)()>(&UnityEngine::UI::InputField::get_onEndEdit)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bf1668;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "get_onEndEdit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::InputField.set_onEndEdit
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::InputField::*)(UnityEngine::UI::UnityEngine__UI__InputField__EndEditEvent)>(&UnityEngine::UI::InputField::set_onEndEdit)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2bf1670;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "set_onEndEdit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UI::UnityEngine__UI__InputField__EndEditEvent>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::InputField.get_onSubmit
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::UI::UnityEngine__UI__InputField__SubmitEvent (UnityEngine::UI::InputField::*)()>(&UnityEngine::UI::InputField::get_onSubmit)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bf16c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "get_onSubmit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::InputField.set_onSubmit
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::InputField::*)(UnityEngine::UI::UnityEngine__UI__InputField__SubmitEvent)>(&UnityEngine::UI::InputField::set_onSubmit)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2bf16d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "set_onSubmit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UI::UnityEngine__UI__InputField__SubmitEvent>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::InputField.get_onValueChange
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::UI::UnityEngine__UI__InputField__OnChangeEvent (UnityEngine::UI::InputField::*)()>(&UnityEngine::UI::InputField::get_onValueChange)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bf1728;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "get_onValueChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::InputField.set_onValueChange
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::InputField::*)(UnityEngine::UI::UnityEngine__UI__InputField__OnChangeEvent)>(&UnityEngine::UI::InputField::set_onValueChange)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2bf1730;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "set_onValueChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UI::UnityEngine__UI__InputField__OnChangeEvent>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::InputField.get_onValueChanged
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::UI::UnityEngine__UI__InputField__OnChangeEvent (UnityEngine::UI::InputField::*)()>(&UnityEngine::UI::InputField::get_onValueChanged)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bf178c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "get_onValueChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::InputField.set_onValueChanged
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::InputField::*)(UnityEngine::UI::UnityEngine__UI__InputField__OnChangeEvent)>(&UnityEngine::UI::InputField::set_onValueChanged)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2bf1734;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "set_onValueChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UI::UnityEngine__UI__InputField__OnChangeEvent>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::InputField.get_onValidateInput
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::UI::UnityEngine__UI__InputField__OnValidateInput (UnityEngine::UI::InputField::*)()>(&UnityEngine::UI::InputField::get_onValidateInput)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bf1794;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "get_onValidateInput",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::InputField.set_onValidateInput
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::InputField::*)(UnityEngine::UI::UnityEngine__UI__InputField__OnValidateInput)>(&UnityEngine::UI::InputField::set_onValidateInput)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2bf179c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "set_onValidateInput",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UI::UnityEngine__UI__InputField__OnValidateInput>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::InputField.get_characterLimit
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (UnityEngine::UI::InputField::*)()>(&UnityEngine::UI::InputField::get_characterLimit)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bf17f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "get_characterLimit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::InputField.set_characterLimit
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::InputField::*)(int32_t)>(&UnityEngine::UI::InputField::set_characterLimit)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x2bf17fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "set_characterLimit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::InputField.get_contentType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::UI::UnityEngine__UI__InputField__ContentType (UnityEngine::UI::InputField::*)()>(&UnityEngine::UI::InputField::get_contentType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bf18bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "get_contentType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::InputField.set_contentType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::InputField::*)(UnityEngine::UI::UnityEngine__UI__InputField__ContentType)>(&UnityEngine::UI::InputField::set_contentType)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2bf18c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "set_contentType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UI::UnityEngine__UI__InputField__ContentType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::InputField.get_lineType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::UI::UnityEngine__UI__InputField__LineType (UnityEngine::UI::InputField::*)()>(&UnityEngine::UI::InputField::get_lineType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bf19f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "get_lineType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::InputField.set_lineType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::InputField::*)(UnityEngine::UI::UnityEngine__UI__InputField__LineType)>(&UnityEngine::UI::InputField::set_lineType)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x2bf19fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "set_lineType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UI::UnityEngine__UI__InputField__LineType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::InputField.get_inputType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::UI::UnityEngine__UI__InputField__InputType (UnityEngine::UI::InputField::*)()>(&UnityEngine::UI::InputField::get_inputType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bf1b14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "get_inputType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::InputField.set_inputType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::InputField::*)(UnityEngine::UI::UnityEngine__UI__InputField__InputType)>(&UnityEngine::UI::InputField::set_inputType)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2bf1b1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "set_inputType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UI::UnityEngine__UI__InputField__InputType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::InputField.get_touchScreenKeyboard
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::TouchScreenKeyboard (UnityEngine::UI::InputField::*)()>(&UnityEngine::UI::InputField::get_touchScreenKeyboard)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bf1bb8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "get_touchScreenKeyboard",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::InputField.get_keyboardType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::TouchScreenKeyboardType (UnityEngine::UI::InputField::*)()>(&UnityEngine::UI::InputField::get_keyboardType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bf1bc0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "get_keyboardType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::InputField.set_keyboardType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::InputField::*)(UnityEngine::TouchScreenKeyboardType)>(&UnityEngine::UI::InputField::set_keyboardType)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2bf1bc8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "set_keyboardType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::TouchScreenKeyboardType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::InputField.get_characterValidation
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::UI::UnityEngine__UI__InputField__CharacterValidation (UnityEngine::UI::InputField::*)()>(&UnityEngine::UI::InputField::get_characterValidation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bf1c4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "get_characterValidation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::InputField.set_characterValidation
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::InputField::*)(UnityEngine::UI::UnityEngine__UI__InputField__CharacterValidation)>(&UnityEngine::UI::InputField::set_characterValidation)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2bf1c54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "set_characterValidation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UI::UnityEngine__UI__InputField__CharacterValidation>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::InputField.get_readOnly
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UI::InputField::*)()>(&UnityEngine::UI::InputField::get_readOnly)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bf1cd8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "get_readOnly",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::InputField.set_readOnly
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::InputField::*)(bool)>(&UnityEngine::UI::InputField::set_readOnly)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2bf1ce0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "set_readOnly",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::InputField.get_multiLine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UI::InputField::*)()>(&UnityEngine::UI::InputField::get_multiLine)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2bf1cec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "get_multiLine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::InputField.get_asteriskChar
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<char16_t (UnityEngine::UI::InputField::*)()>(&UnityEngine::UI::InputField::get_asteriskChar)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bf1d00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "get_asteriskChar",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::InputField.set_asteriskChar
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::InputField::*)(char16_t)>(&UnityEngine::UI::InputField::set_asteriskChar)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2bf1d08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "set_asteriskChar",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::InputField.get_wasCanceled
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UI::InputField::*)()>(&UnityEngine::UI::InputField::get_wasCanceled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bf1d7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "get_wasCanceled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::InputField.ClampPos
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::InputField::*)(ByRef<int32_t>)>(&UnityEngine::UI::InputField::ClampPos)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x2bf1d84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "ClampPos",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::InputField.get_caretPositionInternal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (UnityEngine::UI::InputField::*)()>(&UnityEngine::UI::InputField::get_caretPositionInternal)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2bf1dbc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "get_caretPositionInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::InputField.set_caretPositionInternal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::InputField::*)(int32_t)>(&UnityEngine::UI::InputField::set_caretPositionInternal)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x2bf1de0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "set_caretPositionInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::InputField.get_caretSelectPositionInternal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (UnityEngine::UI::InputField::*)()>(&UnityEngine::UI::InputField::get_caretSelectPositionInternal)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2bf1e18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "get_caretSelectPositionInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::InputField.set_caretSelectPositionInternal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::InputField::*)(int32_t)>(&UnityEngine::UI::InputField::set_caretSelectPositionInternal)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x2bf1e3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "set_caretSelectPositionInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::InputField.get_hasSelection
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UI::InputField::*)()>(&UnityEngine::UI::InputField::get_hasSelection)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2bf1e74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "get_hasSelection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::InputField.get_caretPosition
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (UnityEngine::UI::InputField::*)()>(&UnityEngine::UI::InputField::get_caretPosition)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2bf1ea4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "get_caretPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::InputField.set_caretPosition
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::InputField::*)(int32_t)>(&UnityEngine::UI::InputField::set_caretPosition)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2bf1ec8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "set_caretPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::InputField.get_selectionAnchorPosition
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (UnityEngine::UI::InputField::*)()>(&UnityEngine::UI::InputField::get_selectionAnchorPosition)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2bf1fa8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "get_selectionAnchorPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::InputField.set_selectionAnchorPosition
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::InputField::*)(int32_t)>(&UnityEngine::UI::InputField::set_selectionAnchorPosition)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2bf1ef0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "set_selectionAnchorPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::InputField.get_selectionFocusPosition
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (UnityEngine::UI::InputField::*)()>(&UnityEngine::UI::InputField::get_selectionFocusPosition)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2bf1fcc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "get_selectionFocusPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::InputField.set_selectionFocusPosition
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::InputField::*)(int32_t)>(&UnityEngine::UI::InputField::set_selectionFocusPosition)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2bf1f4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "set_selectionFocusPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::InputField.Awake
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::InputField::*)()>(&UnityEngine::UI::InputField::Awake)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x2bf1ff0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::UI::InputField),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::InputField.OnEnable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::InputField::*)()>(&UnityEngine::UI::InputField::OnEnable)> {
  constexpr static std::size_t size = 0x26c;
  constexpr static std::size_t addrs = 0x2bf20b0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::UI::InputField),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::InputField.OnDisable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::InputField::*)()>(&UnityEngine::UI::InputField::OnDisable)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0x2bf231c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::UI::InputField),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::InputField.OnDestroy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::InputField::*)()>(&UnityEngine::UI::InputField::OnDestroy)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2bf26cc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::UI::InputField),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::InputField.CaretBlink
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IEnumerator (UnityEngine::UI::InputField::*)()>(&UnityEngine::UI::InputField::CaretBlink)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2bf2730;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "CaretBlink",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::InputField.SetCaretVisible
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::InputField::*)()>(&UnityEngine::UI::InputField::SetCaretVisible)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x2bf27c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "SetCaretVisible",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::InputField.SetCaretActive
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::InputField::*)()>(&UnityEngine::UI::InputField::SetCaretActive)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2bf1160;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "SetCaretActive",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::InputField.UpdateCaretMaterial
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::InputField::*)()>(&UnityEngine::UI::InputField::UpdateCaretMaterial)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x2bf27f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "UpdateCaretMaterial",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::InputField.OnFocus
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::InputField::*)()>(&UnityEngine::UI::InputField::OnFocus)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2bf2908;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "OnFocus",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::InputField.SelectAll
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::InputField::*)()>(&UnityEngine::UI::InputField::SelectAll)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x2bf290c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "SelectAll",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::InputField.MoveTextEnd
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::InputField::*)(bool)>(&UnityEngine::UI::InputField::MoveTextEnd)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2bf2940;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "MoveTextEnd",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::InputField.MoveTextStart
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::InputField::*)(bool)>(&UnityEngine::UI::InputField::MoveTextStart)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2bf29a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "MoveTextStart",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::InputField.get_clipboard
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&UnityEngine::UI::InputField::get_clipboard)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bf2a1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "get_clipboard",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::InputField.set_clipboard
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW)>(&UnityEngine::UI::InputField::set_clipboard)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bf2a24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "set_clipboard",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::InputField.TouchScreenKeyboardShouldBeUsed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UI::InputField::*)()>(&UnityEngine::UI::InputField::TouchScreenKeyboardShouldBeUsed)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2bf2a2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "TouchScreenKeyboardShouldBeUsed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::InputField.InPlaceEditing
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UI::InputField::*)()>(&UnityEngine::UI::InputField::InPlaceEditing)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2bf2aac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "InPlaceEditing",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::InputField.InPlaceEditingChanged
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UI::InputField::*)()>(&UnityEngine::UI::InputField::InPlaceEditingChanged)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2bf2adc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "InPlaceEditingChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::InputField.UpdateCaretFromKeyboard
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::InputField::*)()>(&UnityEngine::UI::InputField::UpdateCaretFromKeyboard)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x2bf2b60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "UpdateCaretFromKeyboard",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::InputField.LateUpdate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::InputField::*)()>(&UnityEngine::UI::InputField::LateUpdate)> {
  constexpr static std::size_t size = 0x628;
  constexpr static std::size_t addrs = 0x2bf2c48;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::UI::InputField),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                                  61
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::InputField.ScreenToLocal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector2 (UnityEngine::UI::InputField::*)(UnityEngine::Vector2)>(&UnityEngine::UI::InputField::ScreenToLocal)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x2bf422c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "ScreenToLocal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector2>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::InputField.GetUnclampedCharacterLineFromPosition
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (UnityEngine::UI::InputField::*)(UnityEngine::Vector2, UnityEngine::TextGenerator)>(&UnityEngine::UI::InputField::GetUnclampedCharacterLineFromPosition)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x2bf449c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "GetUnclampedCharacterLineFromPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::TextGenerator>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::InputField.GetCharacterIndexFromPosition
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (UnityEngine::UI::InputField::*)(UnityEngine::Vector2)>(&UnityEngine::UI::InputField::GetCharacterIndexFromPosition)> {
  constexpr static std::size_t size = 0x294;
  constexpr static std::size_t addrs = 0x2bf46ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "GetCharacterIndexFromPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector2>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::InputField.MayDrag
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UI::InputField::*)(UnityEngine::EventSystems::PointerEventData)>(&UnityEngine::UI::InputField::MayDrag)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x2bf4aa4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "MayDrag",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::EventSystems::PointerEventData>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::InputField.OnBeginDrag
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::InputField::*)(UnityEngine::EventSystems::PointerEventData)>(&UnityEngine::UI::InputField::OnBeginDrag)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2bf4b7c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::UI::InputField),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                                  62
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::InputField.OnDrag
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::InputField::*)(UnityEngine::EventSystems::PointerEventData)>(&UnityEngine::UI::InputField::OnDrag)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x2bf4b9c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::UI::InputField),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                                  63
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::InputField.MouseDragOutsideRect
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IEnumerator (UnityEngine::UI::InputField::*)(UnityEngine::EventSystems::PointerEventData)>(&UnityEngine::UI::InputField::MouseDragOutsideRect)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2bf4d84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "MouseDragOutsideRect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::EventSystems::PointerEventData>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::InputField.OnEndDrag
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::InputField::*)(UnityEngine::EventSystems::PointerEventData)>(&UnityEngine::UI::InputField::OnEndDrag)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2bf4e20;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::UI::InputField),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                                  64
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::InputField.OnPointerDown
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::InputField::*)(UnityEngine::EventSystems::PointerEventData)>(&UnityEngine::UI::InputField::OnPointerDown)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x2bf4e3c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::UI::InputField),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                                  32
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::InputField.KeyPressed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::UI::UnityEngine__UI__InputField__EditState (UnityEngine::UI::InputField::*)(UnityEngine::Event)>(&UnityEngine::UI::InputField::KeyPressed)> {
  constexpr static std::size_t size = 0x3d8;
  constexpr static std::size_t addrs = 0x2bf502c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "KeyPressed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Event>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::InputField.IsValidChar
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UI::InputField::*)(char16_t)>(&UnityEngine::UI::InputField::IsValidChar)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2bf5ac0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "IsValidChar",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::InputField.ProcessEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::InputField::*)(UnityEngine::Event)>(&UnityEngine::UI::InputField::ProcessEvent)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2bf5b30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "ProcessEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Event>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::InputField.OnUpdateSelected
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::InputField::*)(UnityEngine::EventSystems::BaseEventData)>(&UnityEngine::UI::InputField::OnUpdateSelected)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x2bf5b34;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::UI::InputField),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                                  65
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::InputField.GetSelectedString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::UI::InputField::*)()>(&UnityEngine::UI::InputField::GetSelectedString)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x2bf55ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "GetSelectedString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::InputField.FindtNextWordBegin
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (UnityEngine::UI::InputField::*)()>(&UnityEngine::UI::InputField::FindtNextWordBegin)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x2bf5cbc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "FindtNextWordBegin",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::InputField.MoveRight
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::InputField::*)(bool, bool)>(&UnityEngine::UI::InputField::MoveRight)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x2bf597c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "MoveRight",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::InputField.FindtPrevWordBegin
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (UnityEngine::UI::InputField::*)()>(&UnityEngine::UI::InputField::FindtPrevWordBegin)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x2bf5d78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "FindtPrevWordBegin",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::InputField.MoveLeft
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::InputField::*)(bool, bool)>(&UnityEngine::UI::InputField::MoveLeft)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x2bf5850;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "MoveLeft",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::InputField.DetermineCharacterLine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (UnityEngine::UI::InputField::*)(int32_t, UnityEngine::TextGenerator)>(&UnityEngine::UI::InputField::DetermineCharacterLine)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x2bf5e18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "DetermineCharacterLine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::TextGenerator>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::InputField.LineUpCharacterPosition
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (UnityEngine::UI::InputField::*)(int32_t, bool)>(&UnityEngine::UI::InputField::LineUpCharacterPosition)> {
  constexpr static std::size_t size = 0x358;
  constexpr static std::size_t addrs = 0x2bf5f28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "LineUpCharacterPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::InputField.LineDownCharacterPosition
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (UnityEngine::UI::InputField::*)(int32_t, bool)>(&UnityEngine::UI::InputField::LineDownCharacterPosition)> {
  constexpr static std::size_t size = 0x2b4;
  constexpr static std::size_t addrs = 0x2bf6280;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "LineDownCharacterPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::InputField.MoveDown
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::InputField::*)(bool)>(&UnityEngine::UI::InputField::MoveDown)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2bf5ab4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "MoveDown",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::InputField.MoveDown
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::InputField::*)(bool, bool)>(&UnityEngine::UI::InputField::MoveDown)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x2bf6534;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "MoveDown",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::InputField.MoveUp
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::InputField::*)(bool)>(&UnityEngine::UI::InputField::MoveUp)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2bf5aa8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "MoveUp",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::InputField.MoveUp
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::InputField::*)(bool, bool)>(&UnityEngine::UI::InputField::MoveUp)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x2bf6668;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "MoveUp",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::InputField.Delete
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::InputField::*)()>(&UnityEngine::UI::InputField::Delete)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x2bf5654;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "Delete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::InputField.ForwardSpace
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::InputField::*)()>(&UnityEngine::UI::InputField::ForwardSpace)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x2bf5508;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "ForwardSpace",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::InputField.Backspace
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::InputField::*)()>(&UnityEngine::UI::InputField::Backspace)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x2bf5404;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "Backspace",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::InputField.Insert
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::InputField::*)(char16_t)>(&UnityEngine::UI::InputField::Insert)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x2bf67a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "Insert",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::InputField.UpdateTouchKeyboardFromEditChanges
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::InputField::*)()>(&UnityEngine::UI::InputField::UpdateTouchKeyboardFromEditChanges)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2bf5808;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "UpdateTouchKeyboardFromEditChanges",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::InputField.SendOnValueChangedAndUpdateLabel
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::InputField::*)()>(&UnityEngine::UI::InputField::SendOnValueChangedAndUpdateLabel)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2bf4214;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "SendOnValueChangedAndUpdateLabel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::InputField.SendOnValueChanged
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::InputField::*)()>(&UnityEngine::UI::InputField::SendOnValueChanged)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2bf0c38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "SendOnValueChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::InputField.SendOnEndEdit
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::InputField::*)()>(&UnityEngine::UI::InputField::SendOnEndEdit)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2bf6888;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "SendOnEndEdit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::InputField.SendOnSubmit
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::InputField::*)()>(&UnityEngine::UI::InputField::SendOnSubmit)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2bf3ac0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "SendOnSubmit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::InputField.Append
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::InputField::*)(::StringW)>(&UnityEngine::UI::InputField::Append)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x2bf6908;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::UI::InputField),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                                  66
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::InputField.Append
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::InputField::*)(char16_t)>(&UnityEngine::UI::InputField::Append)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x2bf69c4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::UI::InputField),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                                  67
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::InputField.UpdateLabel
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::InputField::*)()>(&UnityEngine::UI::InputField::UpdateLabel)> {
  constexpr static std::size_t size = 0x41c;
  constexpr static std::size_t addrs = 0x2bf0cb8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "UpdateLabel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::InputField.IsSelectionVisible
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UI::InputField::*)()>(&UnityEngine::UI::InputField::IsSelectionVisible)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2bf7750;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "IsSelectionVisible",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::InputField.GetLineStartPosition
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(UnityEngine::TextGenerator, int32_t)>(&UnityEngine::UI::InputField::GetLineStartPosition)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x2bf77bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "GetLineStartPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::TextGenerator>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::InputField.GetLineEndPosition
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(UnityEngine::TextGenerator, int32_t)>(&UnityEngine::UI::InputField::GetLineEndPosition)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x2bf4940;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "GetLineEndPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::TextGenerator>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::InputField.SetDrawRangeToContainCaretPosition
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::InputField::*)(int32_t)>(&UnityEngine::UI::InputField::SetDrawRangeToContainCaretPosition)> {
  constexpr static std::size_t size = 0xb1c;
  constexpr static std::size_t addrs = 0x2bf6c34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "SetDrawRangeToContainCaretPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::InputField.ForceLabelUpdate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::InputField::*)()>(&UnityEngine::UI::InputField::ForceLabelUpdate)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2bf790c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "ForceLabelUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::InputField.MarkGeometryAsDirty
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::InputField::*)()>(&UnityEngine::UI::InputField::MarkGeometryAsDirty)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2bf1230;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "MarkGeometryAsDirty",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::InputField.Rebuild
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::InputField::*)(UnityEngine::UI::CanvasUpdate)>(&UnityEngine::UI::InputField::Rebuild)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2bf7910;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::UI::InputField),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                                  68
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::InputField.LayoutComplete
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::InputField::*)()>(&UnityEngine::UI::InputField::LayoutComplete)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2bf7d70;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::UI::InputField),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                                  69
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::InputField.GraphicUpdateComplete
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::InputField::*)()>(&UnityEngine::UI::InputField::GraphicUpdateComplete)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2bf7d74;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::UI::InputField),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                                  70
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::InputField.UpdateGeometry
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::InputField::*)()>(&UnityEngine::UI::InputField::UpdateGeometry)> {
  constexpr static std::size_t size = 0x450;
  constexpr static std::size_t addrs = 0x2bf7920;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "UpdateGeometry",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::InputField.AssignPositioningIfNeeded
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::InputField::*)()>(&UnityEngine::UI::InputField::AssignPositioningIfNeeded)> {
  constexpr static std::size_t size = 0x500;
  constexpr static std::size_t addrs = 0x2bf35c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "AssignPositioningIfNeeded",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::InputField.OnFillVBO
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::InputField::*)(UnityEngine::Mesh)>(&UnityEngine::UI::InputField::OnFillVBO)> {
  constexpr static std::size_t size = 0x278;
  constexpr static std::size_t addrs = 0x2bf7d78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "OnFillVBO",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Mesh>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::InputField.GenerateCaret
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::InputField::*)(UnityEngine::UI::VertexHelper, UnityEngine::Vector2)>(&UnityEngine::UI::InputField::GenerateCaret)> {
  constexpr static std::size_t size = 0x9d4;
  constexpr static std::size_t addrs = 0x2bf7ff0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "GenerateCaret",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UI::VertexHelper>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector2>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::InputField.CreateCursorVerts
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::InputField::*)()>(&UnityEngine::UI::InputField::CreateCursorVerts)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x2bf9420;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "CreateCursorVerts",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::InputField.GenerateHighlight
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::InputField::*)(UnityEngine::UI::VertexHelper, UnityEngine::Vector2)>(&UnityEngine::UI::InputField::GenerateHighlight)> {
  constexpr static std::size_t size = 0xa5c;
  constexpr static std::size_t addrs = 0x2bf89c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "GenerateHighlight",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UI::VertexHelper>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector2>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::InputField.Validate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<char16_t (UnityEngine::UI::InputField::*)(::StringW, int32_t, char16_t)>(&UnityEngine::UI::InputField::Validate)> {
  constexpr static std::size_t size = 0x6d4;
  constexpr static std::size_t addrs = 0x2bf3b40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "Validate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::InputField.ActivateInputField
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::InputField::*)()>(&UnityEngine::UI::InputField::ActivateInputField)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x2bf9570;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "ActivateInputField",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::InputField.ActivateInputFieldInternal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::InputField::*)()>(&UnityEngine::UI::InputField::ActivateInputFieldInternal)> {
  constexpr static std::size_t size = 0x350;
  constexpr static std::size_t addrs = 0x2bf3270;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "ActivateInputFieldInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::InputField.OnSelect
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::InputField::*)(UnityEngine::EventSystems::BaseEventData)>(&UnityEngine::UI::InputField::OnSelect)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2bf9690;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::UI::InputField),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                                  36
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::InputField.OnPointerClick
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::InputField::*)(UnityEngine::EventSystems::PointerEventData)>(&UnityEngine::UI::InputField::OnPointerClick)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2bf96cc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::UI::InputField),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                                  71
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::InputField.DeactivateInputField
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::InputField::*)()>(&UnityEngine::UI::InputField::DeactivateInputField)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x2bf2550;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "DeactivateInputField",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::InputField.OnDeselect
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::InputField::*)(UnityEngine::EventSystems::BaseEventData)>(&UnityEngine::UI::InputField::OnDeselect)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2bf96f0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::UI::InputField),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                                  37
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::InputField.OnSubmit
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::InputField::*)(UnityEngine::EventSystems::BaseEventData)>(&UnityEngine::UI::InputField::OnSubmit)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2bf971c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::UI::InputField),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                                  72
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::InputField.EnforceContentType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::InputField::*)()>(&UnityEngine::UI::InputField::EnforceContentType)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x2bf1938;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "EnforceContentType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::InputField.EnforceTextHOverflow
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::InputField::*)()>(&UnityEngine::UI::InputField::EnforceTextHOverflow)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x2bf05bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "EnforceTextHOverflow",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::InputField.SetToCustomIfContentTypeIsNot
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::InputField::*)(::ArrayW<UnityEngine::UI::UnityEngine__UI__InputField__ContentType>)>(&UnityEngine::UI::InputField::SetToCustomIfContentTypeIsNot)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2bf1abc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "SetToCustomIfContentTypeIsNot",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<UnityEngine::UI::UnityEngine__UI__InputField__ContentType>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::InputField.SetToCustom
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::InputField::*)()>(&UnityEngine::UI::InputField::SetToCustom)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2bf1ba0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "SetToCustom",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::InputField.DoStateTransition
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::InputField::*)(UnityEngine::UI::UnityEngine__UI__Selectable__SelectionState, bool)>(&UnityEngine::UI::InputField::DoStateTransition)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2bf9764;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::UI::InputField),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                                  26
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::InputField.CalculateLayoutInputHorizontal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::InputField::*)()>(&UnityEngine::UI::InputField::CalculateLayoutInputHorizontal)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2bf9790;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::UI::InputField),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                                  73
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::InputField.CalculateLayoutInputVertical
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::InputField::*)()>(&UnityEngine::UI::InputField::CalculateLayoutInputVertical)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2bf9794;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::UI::InputField),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                                  74
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::InputField.get_minWidth
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (UnityEngine::UI::InputField::*)()>(&UnityEngine::UI::InputField::get_minWidth)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bf9798;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::UI::InputField),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                                  75
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::InputField.get_preferredWidth
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (UnityEngine::UI::InputField::*)()>(&UnityEngine::UI::InputField::get_preferredWidth)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x2bf97a0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::UI::InputField),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                                  76
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::InputField.get_flexibleWidth
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (UnityEngine::UI::InputField::*)()>(&UnityEngine::UI::InputField::get_flexibleWidth)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bf98fc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::UI::InputField),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                                  77
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::InputField.get_minHeight
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (UnityEngine::UI::InputField::*)()>(&UnityEngine::UI::InputField::get_minHeight)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bf9904;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::UI::InputField),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                                  78
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::InputField.get_preferredHeight
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (UnityEngine::UI::InputField::*)()>(&UnityEngine::UI::InputField::get_preferredHeight)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x2bf990c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::UI::InputField),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                                  79
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::InputField.get_flexibleHeight
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (UnityEngine::UI::InputField::*)()>(&UnityEngine::UI::InputField::get_flexibleHeight)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bf9a68;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::UI::InputField),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                                  80
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::InputField.get_layoutPriority
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (UnityEngine::UI::InputField::*)()>(&UnityEngine::UI::InputField::get_layoutPriority)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bf9a70;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::UI::InputField),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                                  81
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::InputField.UnityEngine_UI_ICanvasElement_get_transform
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Transform (UnityEngine::UI::InputField::*)()>(&UnityEngine::UI::InputField::UnityEngine_UI_ICanvasElement_get_transform)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bf9b18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "UnityEngine.UI.ICanvasElement.get_transform",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to UnityEngine::EventSystems::IUpdateSelectedHandler
constexpr  UnityEngine::UI::InputField::operator UnityEngine::EventSystems::IUpdateSelectedHandler() const noexcept {
return UnityEngine::EventSystems::IUpdateSelectedHandler(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to UnityEngine::EventSystems::IEventSystemHandler
constexpr  UnityEngine::UI::InputField::operator UnityEngine::EventSystems::IEventSystemHandler() const noexcept {
return UnityEngine::EventSystems::IEventSystemHandler(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to UnityEngine::EventSystems::IBeginDragHandler
constexpr  UnityEngine::UI::InputField::operator UnityEngine::EventSystems::IBeginDragHandler() const noexcept {
return UnityEngine::EventSystems::IBeginDragHandler(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to UnityEngine::EventSystems::IDragHandler
constexpr  UnityEngine::UI::InputField::operator UnityEngine::EventSystems::IDragHandler() const noexcept {
return UnityEngine::EventSystems::IDragHandler(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to UnityEngine::EventSystems::IEndDragHandler
constexpr  UnityEngine::UI::InputField::operator UnityEngine::EventSystems::IEndDragHandler() const noexcept {
return UnityEngine::EventSystems::IEndDragHandler(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to UnityEngine::EventSystems::IPointerClickHandler
constexpr  UnityEngine::UI::InputField::operator UnityEngine::EventSystems::IPointerClickHandler() const noexcept {
return UnityEngine::EventSystems::IPointerClickHandler(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to UnityEngine::EventSystems::ISubmitHandler
constexpr  UnityEngine::UI::InputField::operator UnityEngine::EventSystems::ISubmitHandler() const noexcept {
return UnityEngine::EventSystems::ISubmitHandler(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to UnityEngine::UI::ICanvasElement
constexpr  UnityEngine::UI::InputField::operator UnityEngine::UI::ICanvasElement() const noexcept {
return UnityEngine::UI::ICanvasElement(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to UnityEngine::UI::ILayoutElement
constexpr  UnityEngine::UI::InputField::operator UnityEngine::UI::ILayoutElement() const noexcept {
return UnityEngine::UI::ILayoutElement(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UI::InputField::__set_m_Keyboard(UnityEngine::TouchScreenKeyboard value)  {
::cordl_internals::setInstanceField<UnityEngine::TouchScreenKeyboard, 0xf8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::TouchScreenKeyboard>(value));
}
constexpr UnityEngine::TouchScreenKeyboard UnityEngine::UI::InputField::__get_m_Keyboard() const {
return ::cordl_internals::getInstanceField<UnityEngine::TouchScreenKeyboard, 0xf8>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void UnityEngine::UI::InputField::__set_kSeparators(::ArrayW<char16_t> value)  {
::cordl_internals::setStaticField<::ArrayW<char16_t>, "kSeparators", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get>(std::forward<::ArrayW<char16_t>>(value));
}
 ::ArrayW<char16_t> UnityEngine::UI::InputField::__get_kSeparators()  {
return ::cordl_internals::getStaticField<::ArrayW<char16_t>, "kSeparators", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get>();
}
 void UnityEngine::UI::InputField::__set_s_IsQuestDeviceEvaluated(bool value)  {
::cordl_internals::setStaticField<bool, "s_IsQuestDeviceEvaluated", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get>(std::forward<bool>(value));
}
 bool UnityEngine::UI::InputField::__get_s_IsQuestDeviceEvaluated()  {
return ::cordl_internals::getStaticField<bool, "s_IsQuestDeviceEvaluated", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get>();
}
 void UnityEngine::UI::InputField::__set_s_IsQuestDevice(bool value)  {
::cordl_internals::setStaticField<bool, "s_IsQuestDevice", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get>(std::forward<bool>(value));
}
 bool UnityEngine::UI::InputField::__get_s_IsQuestDevice()  {
return ::cordl_internals::getStaticField<bool, "s_IsQuestDevice", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get>();
}
constexpr void UnityEngine::UI::InputField::__set_m_TextComponent(UnityEngine::UI::Text value)  {
::cordl_internals::setInstanceField<UnityEngine::UI::Text, 0x100>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::UI::Text>(value));
}
constexpr UnityEngine::UI::Text UnityEngine::UI::InputField::__get_m_TextComponent() const {
return ::cordl_internals::getInstanceField<UnityEngine::UI::Text, 0x100>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UI::InputField::__set_m_Placeholder(UnityEngine::UI::Graphic value)  {
::cordl_internals::setInstanceField<UnityEngine::UI::Graphic, 0x108>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::UI::Graphic>(value));
}
constexpr UnityEngine::UI::Graphic UnityEngine::UI::InputField::__get_m_Placeholder() const {
return ::cordl_internals::getInstanceField<UnityEngine::UI::Graphic, 0x108>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UI::InputField::__set_m_ContentType(UnityEngine::UI::UnityEngine__UI__InputField__ContentType value)  {
::cordl_internals::setInstanceField<UnityEngine::UI::UnityEngine__UI__InputField__ContentType, 0x110>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::UI::UnityEngine__UI__InputField__ContentType>(value));
}
constexpr UnityEngine::UI::UnityEngine__UI__InputField__ContentType UnityEngine::UI::InputField::__get_m_ContentType() const {
return ::cordl_internals::getInstanceField<UnityEngine::UI::UnityEngine__UI__InputField__ContentType, 0x110>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UI::InputField::__set_m_InputType(UnityEngine::UI::UnityEngine__UI__InputField__InputType value)  {
::cordl_internals::setInstanceField<UnityEngine::UI::UnityEngine__UI__InputField__InputType, 0x114>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::UI::UnityEngine__UI__InputField__InputType>(value));
}
constexpr UnityEngine::UI::UnityEngine__UI__InputField__InputType UnityEngine::UI::InputField::__get_m_InputType() const {
return ::cordl_internals::getInstanceField<UnityEngine::UI::UnityEngine__UI__InputField__InputType, 0x114>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UI::InputField::__set_m_AsteriskChar(char16_t value)  {
::cordl_internals::setInstanceField<char16_t, 0x118>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<char16_t>(value));
}
constexpr char16_t UnityEngine::UI::InputField::__get_m_AsteriskChar() const {
return ::cordl_internals::getInstanceField<char16_t, 0x118>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UI::InputField::__set_m_KeyboardType(UnityEngine::TouchScreenKeyboardType value)  {
::cordl_internals::setInstanceField<UnityEngine::TouchScreenKeyboardType, 0x11c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::TouchScreenKeyboardType>(value));
}
constexpr UnityEngine::TouchScreenKeyboardType UnityEngine::UI::InputField::__get_m_KeyboardType() const {
return ::cordl_internals::getInstanceField<UnityEngine::TouchScreenKeyboardType, 0x11c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UI::InputField::__set_m_LineType(UnityEngine::UI::UnityEngine__UI__InputField__LineType value)  {
::cordl_internals::setInstanceField<UnityEngine::UI::UnityEngine__UI__InputField__LineType, 0x120>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::UI::UnityEngine__UI__InputField__LineType>(value));
}
constexpr UnityEngine::UI::UnityEngine__UI__InputField__LineType UnityEngine::UI::InputField::__get_m_LineType() const {
return ::cordl_internals::getInstanceField<UnityEngine::UI::UnityEngine__UI__InputField__LineType, 0x120>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UI::InputField::__set_m_HideMobileInput(bool value)  {
::cordl_internals::setInstanceField<bool, 0x124>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool UnityEngine::UI::InputField::__get_m_HideMobileInput() const {
return ::cordl_internals::getInstanceField<bool, 0x124>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UI::InputField::__set_m_CharacterValidation(UnityEngine::UI::UnityEngine__UI__InputField__CharacterValidation value)  {
::cordl_internals::setInstanceField<UnityEngine::UI::UnityEngine__UI__InputField__CharacterValidation, 0x128>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::UI::UnityEngine__UI__InputField__CharacterValidation>(value));
}
constexpr UnityEngine::UI::UnityEngine__UI__InputField__CharacterValidation UnityEngine::UI::InputField::__get_m_CharacterValidation() const {
return ::cordl_internals::getInstanceField<UnityEngine::UI::UnityEngine__UI__InputField__CharacterValidation, 0x128>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UI::InputField::__set_m_CharacterLimit(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x12c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::UI::InputField::__get_m_CharacterLimit() const {
return ::cordl_internals::getInstanceField<int32_t, 0x12c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UI::InputField::__set_m_OnSubmit(UnityEngine::UI::UnityEngine__UI__InputField__SubmitEvent value)  {
::cordl_internals::setInstanceField<UnityEngine::UI::UnityEngine__UI__InputField__SubmitEvent, 0x130>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::UI::UnityEngine__UI__InputField__SubmitEvent>(value));
}
constexpr UnityEngine::UI::UnityEngine__UI__InputField__SubmitEvent UnityEngine::UI::InputField::__get_m_OnSubmit() const {
return ::cordl_internals::getInstanceField<UnityEngine::UI::UnityEngine__UI__InputField__SubmitEvent, 0x130>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UI::InputField::__set_m_OnDidEndEdit(UnityEngine::UI::UnityEngine__UI__InputField__EndEditEvent value)  {
::cordl_internals::setInstanceField<UnityEngine::UI::UnityEngine__UI__InputField__EndEditEvent, 0x138>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::UI::UnityEngine__UI__InputField__EndEditEvent>(value));
}
constexpr UnityEngine::UI::UnityEngine__UI__InputField__EndEditEvent UnityEngine::UI::InputField::__get_m_OnDidEndEdit() const {
return ::cordl_internals::getInstanceField<UnityEngine::UI::UnityEngine__UI__InputField__EndEditEvent, 0x138>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UI::InputField::__set_m_OnValueChanged(UnityEngine::UI::UnityEngine__UI__InputField__OnChangeEvent value)  {
::cordl_internals::setInstanceField<UnityEngine::UI::UnityEngine__UI__InputField__OnChangeEvent, 0x140>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::UI::UnityEngine__UI__InputField__OnChangeEvent>(value));
}
constexpr UnityEngine::UI::UnityEngine__UI__InputField__OnChangeEvent UnityEngine::UI::InputField::__get_m_OnValueChanged() const {
return ::cordl_internals::getInstanceField<UnityEngine::UI::UnityEngine__UI__InputField__OnChangeEvent, 0x140>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UI::InputField::__set_m_OnValidateInput(UnityEngine::UI::UnityEngine__UI__InputField__OnValidateInput value)  {
::cordl_internals::setInstanceField<UnityEngine::UI::UnityEngine__UI__InputField__OnValidateInput, 0x148>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::UI::UnityEngine__UI__InputField__OnValidateInput>(value));
}
constexpr UnityEngine::UI::UnityEngine__UI__InputField__OnValidateInput UnityEngine::UI::InputField::__get_m_OnValidateInput() const {
return ::cordl_internals::getInstanceField<UnityEngine::UI::UnityEngine__UI__InputField__OnValidateInput, 0x148>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UI::InputField::__set_m_CaretColor(UnityEngine::Color value)  {
::cordl_internals::setInstanceField<UnityEngine::Color, 0x150>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Color>(value));
}
constexpr UnityEngine::Color UnityEngine::UI::InputField::__get_m_CaretColor() const {
return ::cordl_internals::getInstanceField<UnityEngine::Color, 0x150>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UI::InputField::__set_m_CustomCaretColor(bool value)  {
::cordl_internals::setInstanceField<bool, 0x160>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool UnityEngine::UI::InputField::__get_m_CustomCaretColor() const {
return ::cordl_internals::getInstanceField<bool, 0x160>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UI::InputField::__set_m_SelectionColor(UnityEngine::Color value)  {
::cordl_internals::setInstanceField<UnityEngine::Color, 0x164>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Color>(value));
}
constexpr UnityEngine::Color UnityEngine::UI::InputField::__get_m_SelectionColor() const {
return ::cordl_internals::getInstanceField<UnityEngine::Color, 0x164>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UI::InputField::__set_m_Text(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x178>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW UnityEngine::UI::InputField::__get_m_Text() const {
return ::cordl_internals::getInstanceField<::StringW, 0x178>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UI::InputField::__set_m_CaretBlinkRate(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x180>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t UnityEngine::UI::InputField::__get_m_CaretBlinkRate() const {
return ::cordl_internals::getInstanceField<float_t, 0x180>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UI::InputField::__set_m_CaretWidth(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x184>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::UI::InputField::__get_m_CaretWidth() const {
return ::cordl_internals::getInstanceField<int32_t, 0x184>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UI::InputField::__set_m_ReadOnly(bool value)  {
::cordl_internals::setInstanceField<bool, 0x188>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool UnityEngine::UI::InputField::__get_m_ReadOnly() const {
return ::cordl_internals::getInstanceField<bool, 0x188>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UI::InputField::__set_m_ShouldActivateOnSelect(bool value)  {
::cordl_internals::setInstanceField<bool, 0x189>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool UnityEngine::UI::InputField::__get_m_ShouldActivateOnSelect() const {
return ::cordl_internals::getInstanceField<bool, 0x189>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UI::InputField::__set_m_CaretPosition(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x18c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::UI::InputField::__get_m_CaretPosition() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UI::InputField::__set_m_CaretSelectPosition(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x190>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::UI::InputField::__get_m_CaretSelectPosition() const {
return ::cordl_internals::getInstanceField<int32_t, 0x190>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UI::InputField::__set_caretRectTrans(UnityEngine::RectTransform value)  {
::cordl_internals::setInstanceField<UnityEngine::RectTransform, 0x198>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::RectTransform>(value));
}
constexpr UnityEngine::RectTransform UnityEngine::UI::InputField::__get_caretRectTrans() const {
return ::cordl_internals::getInstanceField<UnityEngine::RectTransform, 0x198>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UI::InputField::__set_m_CursorVerts(::ArrayW<UnityEngine::UIVertex> value)  {
::cordl_internals::setInstanceField<::ArrayW<UnityEngine::UIVertex>, 0x1a0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<UnityEngine::UIVertex>>(value));
}
constexpr ::ArrayW<UnityEngine::UIVertex> UnityEngine::UI::InputField::__get_m_CursorVerts() const {
return ::cordl_internals::getInstanceField<::ArrayW<UnityEngine::UIVertex>, 0x1a0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UI::InputField::__set_m_InputTextCache(UnityEngine::TextGenerator value)  {
::cordl_internals::setInstanceField<UnityEngine::TextGenerator, 0x1a8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::TextGenerator>(value));
}
constexpr UnityEngine::TextGenerator UnityEngine::UI::InputField::__get_m_InputTextCache() const {
return ::cordl_internals::getInstanceField<UnityEngine::TextGenerator, 0x1a8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UI::InputField::__set_m_CachedInputRenderer(UnityEngine::CanvasRenderer value)  {
::cordl_internals::setInstanceField<UnityEngine::CanvasRenderer, 0x1b0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::CanvasRenderer>(value));
}
constexpr UnityEngine::CanvasRenderer UnityEngine::UI::InputField::__get_m_CachedInputRenderer() const {
return ::cordl_internals::getInstanceField<UnityEngine::CanvasRenderer, 0x1b0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UI::InputField::__set_m_PreventFontCallback(bool value)  {
::cordl_internals::setInstanceField<bool, 0x1b8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool UnityEngine::UI::InputField::__get_m_PreventFontCallback() const {
return ::cordl_internals::getInstanceField<bool, 0x1b8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UI::InputField::__set_m_Mesh(UnityEngine::Mesh value)  {
::cordl_internals::setInstanceField<UnityEngine::Mesh, 0x1c0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Mesh>(value));
}
constexpr UnityEngine::Mesh UnityEngine::UI::InputField::__get_m_Mesh() const {
return ::cordl_internals::getInstanceField<UnityEngine::Mesh, 0x1c0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UI::InputField::__set_m_AllowInput(bool value)  {
::cordl_internals::setInstanceField<bool, 0x1c8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool UnityEngine::UI::InputField::__get_m_AllowInput() const {
return ::cordl_internals::getInstanceField<bool, 0x1c8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UI::InputField::__set_m_ShouldActivateNextUpdate(bool value)  {
::cordl_internals::setInstanceField<bool, 0x1c9>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool UnityEngine::UI::InputField::__get_m_ShouldActivateNextUpdate() const {
return ::cordl_internals::getInstanceField<bool, 0x1c9>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UI::InputField::__set_m_UpdateDrag(bool value)  {
::cordl_internals::setInstanceField<bool, 0x1ca>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool UnityEngine::UI::InputField::__get_m_UpdateDrag() const {
return ::cordl_internals::getInstanceField<bool, 0x1ca>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UI::InputField::__set_m_DragPositionOutOfBounds(bool value)  {
::cordl_internals::setInstanceField<bool, 0x1cb>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool UnityEngine::UI::InputField::__get_m_DragPositionOutOfBounds() const {
return ::cordl_internals::getInstanceField<bool, 0x1cb>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UI::InputField::__set_m_CaretVisible(bool value)  {
::cordl_internals::setInstanceField<bool, 0x1cc>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool UnityEngine::UI::InputField::__get_m_CaretVisible() const {
return ::cordl_internals::getInstanceField<bool, 0x1cc>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UI::InputField::__set_m_BlinkCoroutine(UnityEngine::Coroutine value)  {
::cordl_internals::setInstanceField<UnityEngine::Coroutine, 0x1d0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Coroutine>(value));
}
constexpr UnityEngine::Coroutine UnityEngine::UI::InputField::__get_m_BlinkCoroutine() const {
return ::cordl_internals::getInstanceField<UnityEngine::Coroutine, 0x1d0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UI::InputField::__set_m_BlinkStartTime(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x1d8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t UnityEngine::UI::InputField::__get_m_BlinkStartTime() const {
return ::cordl_internals::getInstanceField<float_t, 0x1d8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UI::InputField::__set_m_DrawStart(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x1dc>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::UI::InputField::__get_m_DrawStart() const {
return ::cordl_internals::getInstanceField<int32_t, 0x1dc>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UI::InputField::__set_m_DrawEnd(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x1e0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::UI::InputField::__get_m_DrawEnd() const {
return ::cordl_internals::getInstanceField<int32_t, 0x1e0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UI::InputField::__set_m_DragCoroutine(UnityEngine::Coroutine value)  {
::cordl_internals::setInstanceField<UnityEngine::Coroutine, 0x1e8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Coroutine>(value));
}
constexpr UnityEngine::Coroutine UnityEngine::UI::InputField::__get_m_DragCoroutine() const {
return ::cordl_internals::getInstanceField<UnityEngine::Coroutine, 0x1e8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UI::InputField::__set_m_OriginalText(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x1f0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW UnityEngine::UI::InputField::__get_m_OriginalText() const {
return ::cordl_internals::getInstanceField<::StringW, 0x1f0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UI::InputField::__set_m_WasCanceled(bool value)  {
::cordl_internals::setInstanceField<bool, 0x1f8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool UnityEngine::UI::InputField::__get_m_WasCanceled() const {
return ::cordl_internals::getInstanceField<bool, 0x1f8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UI::InputField::__set_m_HasDoneFocusTransition(bool value)  {
::cordl_internals::setInstanceField<bool, 0x1f9>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool UnityEngine::UI::InputField::__get_m_HasDoneFocusTransition() const {
return ::cordl_internals::getInstanceField<bool, 0x1f9>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UI::InputField::__set_m_WaitForSecondsRealtime(UnityEngine::WaitForSecondsRealtime value)  {
::cordl_internals::setInstanceField<UnityEngine::WaitForSecondsRealtime, 0x200>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::WaitForSecondsRealtime>(value));
}
constexpr UnityEngine::WaitForSecondsRealtime UnityEngine::UI::InputField::__get_m_WaitForSecondsRealtime() const {
return ::cordl_internals::getInstanceField<UnityEngine::WaitForSecondsRealtime, 0x200>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UI::InputField::__set_m_TouchKeyboardAllowsInPlaceEditing(bool value)  {
::cordl_internals::setInstanceField<bool, 0x208>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool UnityEngine::UI::InputField::__get_m_TouchKeyboardAllowsInPlaceEditing() const {
return ::cordl_internals::getInstanceField<bool, 0x208>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UI::InputField::__set_m_IsCompositionActive(bool value)  {
::cordl_internals::setInstanceField<bool, 0x209>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool UnityEngine::UI::InputField::__get_m_IsCompositionActive() const {
return ::cordl_internals::getInstanceField<bool, 0x209>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UI::InputField::__set_m_ProcessingEvent(UnityEngine::Event value)  {
::cordl_internals::setInstanceField<UnityEngine::Event, 0x210>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Event>(value));
}
constexpr UnityEngine::Event UnityEngine::UI::InputField::__get_m_ProcessingEvent() const {
return ::cordl_internals::getInstanceField<UnityEngine::Event, 0x210>(this->::bs_hook::Il2CppWrapperType::instance);
}
 UnityEngine::EventSystems::BaseInput UnityEngine::UI::InputField::get_input()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "get_input",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::EventSystems::BaseInput, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW UnityEngine::UI::InputField::get_compositionString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "get_compositionString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 UnityEngine::UI::InputField::InputField()  : UnityEngine::UI::Selectable(THROW_UNLESS(::il2cpp_utils::New<InputField>())) {}
 void UnityEngine::UI::InputField::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::Mesh UnityEngine::UI::InputField::get_mesh()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "get_mesh",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Mesh, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::TextGenerator UnityEngine::UI::InputField::get_cachedInputTextGenerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "get_cachedInputTextGenerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::TextGenerator, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UI::InputField::set_shouldHideMobileInput(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "set_shouldHideMobileInput",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 bool UnityEngine::UI::InputField::get_shouldHideMobileInput()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "get_shouldHideMobileInput",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UI::InputField::set_shouldActivateOnSelect(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "set_shouldActivateOnSelect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 bool UnityEngine::UI::InputField::get_shouldActivateOnSelect()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "get_shouldActivateOnSelect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW UnityEngine::UI::InputField::get_text()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "get_text",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UI::InputField::set_text(::StringW value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "set_text",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void UnityEngine::UI::InputField::SetTextWithoutNotify(::StringW input)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "SetTextWithoutNotify",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, input);
}
/// @param sendCallback: bool (default: true)
 void UnityEngine::UI::InputField::SetText(::StringW value, bool sendCallback)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "SetText",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value, sendCallback);
}
 bool UnityEngine::UI::InputField::get_isFocused()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "get_isFocused",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 float_t UnityEngine::UI::InputField::get_caretBlinkRate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "get_caretBlinkRate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UI::InputField::set_caretBlinkRate(float_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "set_caretBlinkRate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 int32_t UnityEngine::UI::InputField::get_caretWidth()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "get_caretWidth",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UI::InputField::set_caretWidth(int32_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "set_caretWidth",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 UnityEngine::UI::Text UnityEngine::UI::InputField::get_textComponent()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "get_textComponent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::UI::Text, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UI::InputField::set_textComponent(UnityEngine::UI::Text value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "set_textComponent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UI::Text>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 UnityEngine::UI::Graphic UnityEngine::UI::InputField::get_placeholder()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "get_placeholder",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::UI::Graphic, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UI::InputField::set_placeholder(UnityEngine::UI::Graphic value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "set_placeholder",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UI::Graphic>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 UnityEngine::Color UnityEngine::UI::InputField::get_caretColor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "get_caretColor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Color, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UI::InputField::set_caretColor(UnityEngine::Color value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "set_caretColor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Color>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 bool UnityEngine::UI::InputField::get_customCaretColor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "get_customCaretColor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UI::InputField::set_customCaretColor(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "set_customCaretColor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 UnityEngine::Color UnityEngine::UI::InputField::get_selectionColor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "get_selectionColor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Color, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UI::InputField::set_selectionColor(UnityEngine::Color value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "set_selectionColor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Color>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 UnityEngine::UI::UnityEngine__UI__InputField__EndEditEvent UnityEngine::UI::InputField::get_onEndEdit()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "get_onEndEdit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::UI::UnityEngine__UI__InputField__EndEditEvent, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UI::InputField::set_onEndEdit(UnityEngine::UI::UnityEngine__UI__InputField__EndEditEvent value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "set_onEndEdit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UI::UnityEngine__UI__InputField__EndEditEvent>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 UnityEngine::UI::UnityEngine__UI__InputField__SubmitEvent UnityEngine::UI::InputField::get_onSubmit()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "get_onSubmit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::UI::UnityEngine__UI__InputField__SubmitEvent, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UI::InputField::set_onSubmit(UnityEngine::UI::UnityEngine__UI__InputField__SubmitEvent value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "set_onSubmit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UI::UnityEngine__UI__InputField__SubmitEvent>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 UnityEngine::UI::UnityEngine__UI__InputField__OnChangeEvent UnityEngine::UI::InputField::get_onValueChange()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "get_onValueChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::UI::UnityEngine__UI__InputField__OnChangeEvent, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UI::InputField::set_onValueChange(UnityEngine::UI::UnityEngine__UI__InputField__OnChangeEvent value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "set_onValueChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UI::UnityEngine__UI__InputField__OnChangeEvent>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 UnityEngine::UI::UnityEngine__UI__InputField__OnChangeEvent UnityEngine::UI::InputField::get_onValueChanged()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "get_onValueChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::UI::UnityEngine__UI__InputField__OnChangeEvent, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UI::InputField::set_onValueChanged(UnityEngine::UI::UnityEngine__UI__InputField__OnChangeEvent value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "set_onValueChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UI::UnityEngine__UI__InputField__OnChangeEvent>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 UnityEngine::UI::UnityEngine__UI__InputField__OnValidateInput UnityEngine::UI::InputField::get_onValidateInput()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "get_onValidateInput",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::UI::UnityEngine__UI__InputField__OnValidateInput, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UI::InputField::set_onValidateInput(UnityEngine::UI::UnityEngine__UI__InputField__OnValidateInput value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "set_onValidateInput",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UI::UnityEngine__UI__InputField__OnValidateInput>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 int32_t UnityEngine::UI::InputField::get_characterLimit()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "get_characterLimit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UI::InputField::set_characterLimit(int32_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "set_characterLimit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 UnityEngine::UI::UnityEngine__UI__InputField__ContentType UnityEngine::UI::InputField::get_contentType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "get_contentType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::UI::UnityEngine__UI__InputField__ContentType, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UI::InputField::set_contentType(UnityEngine::UI::UnityEngine__UI__InputField__ContentType value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "set_contentType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UI::UnityEngine__UI__InputField__ContentType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 UnityEngine::UI::UnityEngine__UI__InputField__LineType UnityEngine::UI::InputField::get_lineType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "get_lineType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::UI::UnityEngine__UI__InputField__LineType, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UI::InputField::set_lineType(UnityEngine::UI::UnityEngine__UI__InputField__LineType value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "set_lineType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UI::UnityEngine__UI__InputField__LineType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 UnityEngine::UI::UnityEngine__UI__InputField__InputType UnityEngine::UI::InputField::get_inputType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "get_inputType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::UI::UnityEngine__UI__InputField__InputType, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UI::InputField::set_inputType(UnityEngine::UI::UnityEngine__UI__InputField__InputType value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "set_inputType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UI::UnityEngine__UI__InputField__InputType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 UnityEngine::TouchScreenKeyboard UnityEngine::UI::InputField::get_touchScreenKeyboard()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "get_touchScreenKeyboard",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::TouchScreenKeyboard, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::TouchScreenKeyboardType UnityEngine::UI::InputField::get_keyboardType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "get_keyboardType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::TouchScreenKeyboardType, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UI::InputField::set_keyboardType(UnityEngine::TouchScreenKeyboardType value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "set_keyboardType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::TouchScreenKeyboardType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 UnityEngine::UI::UnityEngine__UI__InputField__CharacterValidation UnityEngine::UI::InputField::get_characterValidation()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "get_characterValidation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::UI::UnityEngine__UI__InputField__CharacterValidation, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UI::InputField::set_characterValidation(UnityEngine::UI::UnityEngine__UI__InputField__CharacterValidation value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "set_characterValidation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UI::UnityEngine__UI__InputField__CharacterValidation>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 bool UnityEngine::UI::InputField::get_readOnly()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "get_readOnly",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UI::InputField::set_readOnly(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "set_readOnly",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 bool UnityEngine::UI::InputField::get_multiLine()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "get_multiLine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 char16_t UnityEngine::UI::InputField::get_asteriskChar()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "get_asteriskChar",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<char16_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UI::InputField::set_asteriskChar(char16_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "set_asteriskChar",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 bool UnityEngine::UI::InputField::get_wasCanceled()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "get_wasCanceled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UI::InputField::ClampPos(ByRef<int32_t> pos)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "ClampPos",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, pos);
}
 int32_t UnityEngine::UI::InputField::get_caretPositionInternal()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "get_caretPositionInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UI::InputField::set_caretPositionInternal(int32_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "set_caretPositionInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 int32_t UnityEngine::UI::InputField::get_caretSelectPositionInternal()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "get_caretSelectPositionInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UI::InputField::set_caretSelectPositionInternal(int32_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "set_caretSelectPositionInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 bool UnityEngine::UI::InputField::get_hasSelection()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "get_hasSelection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t UnityEngine::UI::InputField::get_caretPosition()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "get_caretPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UI::InputField::set_caretPosition(int32_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "set_caretPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 int32_t UnityEngine::UI::InputField::get_selectionAnchorPosition()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "get_selectionAnchorPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UI::InputField::set_selectionAnchorPosition(int32_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "set_selectionAnchorPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 int32_t UnityEngine::UI::InputField::get_selectionFocusPosition()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "get_selectionFocusPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UI::InputField::set_selectionFocusPosition(int32_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "set_selectionFocusPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void UnityEngine::UI::InputField::Awake()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UI::InputField::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "OnEnable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UI::InputField::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "OnDisable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UI::InputField::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Collections::IEnumerator UnityEngine::UI::InputField::CaretBlink()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "CaretBlink",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::IEnumerator, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UI::InputField::SetCaretVisible()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "SetCaretVisible",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UI::InputField::SetCaretActive()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "SetCaretActive",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UI::InputField::UpdateCaretMaterial()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "UpdateCaretMaterial",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UI::InputField::OnFocus()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "OnFocus",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UI::InputField::SelectAll()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "SelectAll",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UI::InputField::MoveTextEnd(bool shift)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "MoveTextEnd",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, shift);
}
 void UnityEngine::UI::InputField::MoveTextStart(bool shift)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "MoveTextStart",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, shift);
}
 ::StringW UnityEngine::UI::InputField::get_clipboard()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "get_clipboard",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method);
}
 void UnityEngine::UI::InputField::set_clipboard(::StringW value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "set_clipboard",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
 bool UnityEngine::UI::InputField::TouchScreenKeyboardShouldBeUsed()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "TouchScreenKeyboardShouldBeUsed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool UnityEngine::UI::InputField::InPlaceEditing()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "InPlaceEditing",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool UnityEngine::UI::InputField::InPlaceEditingChanged()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "InPlaceEditingChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UI::InputField::UpdateCaretFromKeyboard()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "UpdateCaretFromKeyboard",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UI::InputField::LateUpdate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "LateUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::Vector2 UnityEngine::UI::InputField::ScreenToLocal(UnityEngine::Vector2 screen)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "ScreenToLocal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector2>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Vector2, false>(const_cast<void*>(instance), ___internal_method, screen);
}
 int32_t UnityEngine::UI::InputField::GetUnclampedCharacterLineFromPosition(UnityEngine::Vector2 pos, UnityEngine::TextGenerator generator)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "GetUnclampedCharacterLineFromPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::TextGenerator>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, pos, generator);
}
 int32_t UnityEngine::UI::InputField::GetCharacterIndexFromPosition(UnityEngine::Vector2 pos)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "GetCharacterIndexFromPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector2>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, pos);
}
 bool UnityEngine::UI::InputField::MayDrag(UnityEngine::EventSystems::PointerEventData eventData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "MayDrag",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::EventSystems::PointerEventData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, eventData);
}
 void UnityEngine::UI::InputField::OnBeginDrag(UnityEngine::EventSystems::PointerEventData eventData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "OnBeginDrag",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::EventSystems::PointerEventData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, eventData);
}
 void UnityEngine::UI::InputField::OnDrag(UnityEngine::EventSystems::PointerEventData eventData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "OnDrag",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::EventSystems::PointerEventData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, eventData);
}
 System::Collections::IEnumerator UnityEngine::UI::InputField::MouseDragOutsideRect(UnityEngine::EventSystems::PointerEventData eventData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "MouseDragOutsideRect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::EventSystems::PointerEventData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::IEnumerator, false>(const_cast<void*>(instance), ___internal_method, eventData);
}
 void UnityEngine::UI::InputField::OnEndDrag(UnityEngine::EventSystems::PointerEventData eventData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "OnEndDrag",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::EventSystems::PointerEventData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, eventData);
}
 void UnityEngine::UI::InputField::OnPointerDown(UnityEngine::EventSystems::PointerEventData eventData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "OnPointerDown",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::EventSystems::PointerEventData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, eventData);
}
 UnityEngine::UI::UnityEngine__UI__InputField__EditState UnityEngine::UI::InputField::KeyPressed(UnityEngine::Event evt)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "KeyPressed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Event>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::UI::UnityEngine__UI__InputField__EditState, false>(const_cast<void*>(instance), ___internal_method, evt);
}
 bool UnityEngine::UI::InputField::IsValidChar(char16_t c)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "IsValidChar",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, c);
}
 void UnityEngine::UI::InputField::ProcessEvent(UnityEngine::Event e)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "ProcessEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Event>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, e);
}
 void UnityEngine::UI::InputField::OnUpdateSelected(UnityEngine::EventSystems::BaseEventData eventData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "OnUpdateSelected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::EventSystems::BaseEventData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, eventData);
}
 ::StringW UnityEngine::UI::InputField::GetSelectedString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "GetSelectedString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t UnityEngine::UI::InputField::FindtNextWordBegin()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "FindtNextWordBegin",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UI::InputField::MoveRight(bool shift, bool ctrl)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "MoveRight",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, shift, ctrl);
}
 int32_t UnityEngine::UI::InputField::FindtPrevWordBegin()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "FindtPrevWordBegin",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UI::InputField::MoveLeft(bool shift, bool ctrl)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "MoveLeft",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, shift, ctrl);
}
 int32_t UnityEngine::UI::InputField::DetermineCharacterLine(int32_t charPos, UnityEngine::TextGenerator generator)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "DetermineCharacterLine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::TextGenerator>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, charPos, generator);
}
 int32_t UnityEngine::UI::InputField::LineUpCharacterPosition(int32_t originalPos, bool goToFirstChar)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "LineUpCharacterPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, originalPos, goToFirstChar);
}
 int32_t UnityEngine::UI::InputField::LineDownCharacterPosition(int32_t originalPos, bool goToLastChar)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "LineDownCharacterPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, originalPos, goToLastChar);
}
 void UnityEngine::UI::InputField::MoveDown(bool shift)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "MoveDown",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, shift);
}
 void UnityEngine::UI::InputField::MoveDown(bool shift, bool goToLastChar)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "MoveDown",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, shift, goToLastChar);
}
 void UnityEngine::UI::InputField::MoveUp(bool shift)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "MoveUp",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, shift);
}
 void UnityEngine::UI::InputField::MoveUp(bool shift, bool goToFirstChar)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "MoveUp",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, shift, goToFirstChar);
}
 void UnityEngine::UI::InputField::Delete()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "Delete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UI::InputField::ForwardSpace()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "ForwardSpace",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UI::InputField::Backspace()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "Backspace",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UI::InputField::Insert(char16_t c)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "Insert",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, c);
}
 void UnityEngine::UI::InputField::UpdateTouchKeyboardFromEditChanges()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "UpdateTouchKeyboardFromEditChanges",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UI::InputField::SendOnValueChangedAndUpdateLabel()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "SendOnValueChangedAndUpdateLabel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UI::InputField::SendOnValueChanged()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "SendOnValueChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UI::InputField::SendOnEndEdit()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "SendOnEndEdit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UI::InputField::SendOnSubmit()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "SendOnSubmit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UI::InputField::Append(::StringW input)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "Append",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, input);
}
 void UnityEngine::UI::InputField::Append(char16_t input)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "Append",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, input);
}
 void UnityEngine::UI::InputField::UpdateLabel()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "UpdateLabel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool UnityEngine::UI::InputField::IsSelectionVisible()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "IsSelectionVisible",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t UnityEngine::UI::InputField::GetLineStartPosition(UnityEngine::TextGenerator gen, int32_t line)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "GetLineStartPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::TextGenerator>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, gen, line);
}
 int32_t UnityEngine::UI::InputField::GetLineEndPosition(UnityEngine::TextGenerator gen, int32_t line)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "GetLineEndPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::TextGenerator>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, gen, line);
}
 void UnityEngine::UI::InputField::SetDrawRangeToContainCaretPosition(int32_t caretPos)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "SetDrawRangeToContainCaretPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, caretPos);
}
 void UnityEngine::UI::InputField::ForceLabelUpdate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "ForceLabelUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UI::InputField::MarkGeometryAsDirty()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "MarkGeometryAsDirty",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UI::InputField::Rebuild(UnityEngine::UI::CanvasUpdate update)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "Rebuild",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UI::CanvasUpdate>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, update);
}
 void UnityEngine::UI::InputField::LayoutComplete()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "LayoutComplete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UI::InputField::GraphicUpdateComplete()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "GraphicUpdateComplete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UI::InputField::UpdateGeometry()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "UpdateGeometry",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UI::InputField::AssignPositioningIfNeeded()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "AssignPositioningIfNeeded",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UI::InputField::OnFillVBO(UnityEngine::Mesh vbo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "OnFillVBO",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Mesh>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, vbo);
}
 void UnityEngine::UI::InputField::GenerateCaret(UnityEngine::UI::VertexHelper vbo, UnityEngine::Vector2 roundingOffset)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "GenerateCaret",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UI::VertexHelper>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector2>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, vbo, roundingOffset);
}
 void UnityEngine::UI::InputField::CreateCursorVerts()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "CreateCursorVerts",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UI::InputField::GenerateHighlight(UnityEngine::UI::VertexHelper vbo, UnityEngine::Vector2 roundingOffset)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "GenerateHighlight",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UI::VertexHelper>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector2>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, vbo, roundingOffset);
}
 char16_t UnityEngine::UI::InputField::Validate(::StringW text, int32_t pos, char16_t ch)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "Validate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<char16_t, false>(const_cast<void*>(instance), ___internal_method, text, pos, ch);
}
 void UnityEngine::UI::InputField::ActivateInputField()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "ActivateInputField",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UI::InputField::ActivateInputFieldInternal()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "ActivateInputFieldInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UI::InputField::OnSelect(UnityEngine::EventSystems::BaseEventData eventData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "OnSelect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::EventSystems::BaseEventData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, eventData);
}
 void UnityEngine::UI::InputField::OnPointerClick(UnityEngine::EventSystems::PointerEventData eventData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "OnPointerClick",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::EventSystems::PointerEventData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, eventData);
}
 void UnityEngine::UI::InputField::DeactivateInputField()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "DeactivateInputField",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UI::InputField::OnDeselect(UnityEngine::EventSystems::BaseEventData eventData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "OnDeselect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::EventSystems::BaseEventData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, eventData);
}
 void UnityEngine::UI::InputField::OnSubmit(UnityEngine::EventSystems::BaseEventData eventData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "OnSubmit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::EventSystems::BaseEventData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, eventData);
}
 void UnityEngine::UI::InputField::EnforceContentType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "EnforceContentType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UI::InputField::EnforceTextHOverflow()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "EnforceTextHOverflow",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UI::InputField::SetToCustomIfContentTypeIsNot(::ArrayW<UnityEngine::UI::UnityEngine__UI__InputField__ContentType> allowedContentTypes)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "SetToCustomIfContentTypeIsNot",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<UnityEngine::UI::UnityEngine__UI__InputField__ContentType>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, allowedContentTypes);
}
 void UnityEngine::UI::InputField::SetToCustom()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "SetToCustom",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UI::InputField::DoStateTransition(UnityEngine::UI::UnityEngine__UI__Selectable__SelectionState state, bool instant)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "DoStateTransition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UI::UnityEngine__UI__Selectable__SelectionState>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, state, instant);
}
 void UnityEngine::UI::InputField::CalculateLayoutInputHorizontal()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "CalculateLayoutInputHorizontal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UI::InputField::CalculateLayoutInputVertical()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "CalculateLayoutInputVertical",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 float_t UnityEngine::UI::InputField::get_minWidth()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "get_minWidth",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 float_t UnityEngine::UI::InputField::get_preferredWidth()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "get_preferredWidth",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 float_t UnityEngine::UI::InputField::get_flexibleWidth()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "get_flexibleWidth",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 float_t UnityEngine::UI::InputField::get_minHeight()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "get_minHeight",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 float_t UnityEngine::UI::InputField::get_preferredHeight()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "get_preferredHeight",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 float_t UnityEngine::UI::InputField::get_flexibleHeight()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "get_flexibleHeight",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t UnityEngine::UI::InputField::get_layoutPriority()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "get_layoutPriority",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::Transform UnityEngine::UI::InputField::UnityEngine_UI_ICanvasElement_get_transform()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::InputField>::get(),
                            "UnityEngine.UI.ICanvasElement.get_transform",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Transform, false>(const_cast<void*>(instance), ___internal_method);
}
