#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_1_impl.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_3_impl.hpp"
#include "UnityEngine/UI/zzzz__Selectable_impl.hpp"
namespace {
#include "TMPro/zzzz__TMP_InputField_def.hpp"
#include "UnityEngine/EventSystems/zzzz__ISubmitHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IPointerClickHandler_def.hpp"
#include "UnityEngine/UI/zzzz__ICanvasElement_def.hpp"
#include "UnityEngine/UI/zzzz__LayoutGroup_def.hpp"
#include "UnityEngine/zzzz__Event_def.hpp"
#include "UnityEngine/UI/zzzz__Selectable_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IUpdateSelectedHandler_def.hpp"
#include "UnityEngine/zzzz__UIVertex_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IBeginDragHandler_def.hpp"
#include "UnityEngine/zzzz__CanvasRenderer_def.hpp"
#include "UnityEngine/UI/zzzz__CanvasUpdate_def.hpp"
#include "UnityEngine/EventSystems/zzzz__PointerEventData_def.hpp"
#include "TMPro/zzzz__TMP_InputValidator_def.hpp"
#include "UnityEngine/zzzz__RectTransform_def.hpp"
#include "UnityEngine/UI/zzzz__RectMask2D_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IScrollHandler_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "UnityEngine/UI/zzzz__VertexHelper_def.hpp"
#include "TMPro/zzzz__TMP_FontAsset_def.hpp"
#include "UnityEngine/zzzz__TouchScreenKeyboardType_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IEndDragHandler_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__TouchScreenKeyboard_def.hpp"
#include "UnityEngine/EventSystems/zzzz__BaseEventData_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IDragHandler_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
#include "UnityEngine/zzzz__WaitForSecondsRealtime_def.hpp"
#include "UnityEngine/UI/zzzz__ILayoutElement_def.hpp"
#include "TMPro/zzzz__TMP_Text_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "UnityEngine/UI/zzzz__Graphic_def.hpp"
#include "UnityEngine/zzzz__Coroutine_def.hpp"
#include "UnityEngine/EventSystems/zzzz__BaseInput_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IEventSystemHandler_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "TMPro/zzzz__TMP_ScrollbarEventHandler_def.hpp"
#include "UnityEngine/UI/zzzz__Scrollbar_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::TMPro::____TMPro__TMP_InputField__ContentType::____TMPro__TMP_InputField__ContentType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::TMPro::____TMPro__TMP_InputField__ContentType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::TMPro::____TMPro__TMP_InputField__ContentType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::TMPro::____TMPro__TMP_InputField__ContentType  ::TMPro::____TMPro__TMP_InputField__ContentType::Standard{0};
constexpr ::TMPro::____TMPro__TMP_InputField__ContentType  ::TMPro::____TMPro__TMP_InputField__ContentType::Autocorrected{1};
constexpr ::TMPro::____TMPro__TMP_InputField__ContentType  ::TMPro::____TMPro__TMP_InputField__ContentType::IntegerNumber{2};
constexpr ::TMPro::____TMPro__TMP_InputField__ContentType  ::TMPro::____TMPro__TMP_InputField__ContentType::DecimalNumber{3};
constexpr ::TMPro::____TMPro__TMP_InputField__ContentType  ::TMPro::____TMPro__TMP_InputField__ContentType::Alphanumeric{4};
constexpr ::TMPro::____TMPro__TMP_InputField__ContentType  ::TMPro::____TMPro__TMP_InputField__ContentType::Name{5};
constexpr ::TMPro::____TMPro__TMP_InputField__ContentType  ::TMPro::____TMPro__TMP_InputField__ContentType::EmailAddress{6};
constexpr ::TMPro::____TMPro__TMP_InputField__ContentType  ::TMPro::____TMPro__TMP_InputField__ContentType::Password{7};
constexpr ::TMPro::____TMPro__TMP_InputField__ContentType  ::TMPro::____TMPro__TMP_InputField__ContentType::Pin{8};
constexpr ::TMPro::____TMPro__TMP_InputField__ContentType  ::TMPro::____TMPro__TMP_InputField__ContentType::Custom{9};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::TMPro::____TMPro__TMP_InputField__InputType::____TMPro__TMP_InputField__InputType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::TMPro::____TMPro__TMP_InputField__InputType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::TMPro::____TMPro__TMP_InputField__InputType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::TMPro::____TMPro__TMP_InputField__InputType  ::TMPro::____TMPro__TMP_InputField__InputType::Standard{0};
constexpr ::TMPro::____TMPro__TMP_InputField__InputType  ::TMPro::____TMPro__TMP_InputField__InputType::AutoCorrect{1};
constexpr ::TMPro::____TMPro__TMP_InputField__InputType  ::TMPro::____TMPro__TMP_InputField__InputType::Password{2};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::TMPro::____TMPro__TMP_InputField__CharacterValidation::____TMPro__TMP_InputField__CharacterValidation(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::TMPro::____TMPro__TMP_InputField__CharacterValidation::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::TMPro::____TMPro__TMP_InputField__CharacterValidation::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::TMPro::____TMPro__TMP_InputField__CharacterValidation  ::TMPro::____TMPro__TMP_InputField__CharacterValidation::None{0};
constexpr ::TMPro::____TMPro__TMP_InputField__CharacterValidation  ::TMPro::____TMPro__TMP_InputField__CharacterValidation::Digit{1};
constexpr ::TMPro::____TMPro__TMP_InputField__CharacterValidation  ::TMPro::____TMPro__TMP_InputField__CharacterValidation::Integer{2};
constexpr ::TMPro::____TMPro__TMP_InputField__CharacterValidation  ::TMPro::____TMPro__TMP_InputField__CharacterValidation::Decimal{3};
constexpr ::TMPro::____TMPro__TMP_InputField__CharacterValidation  ::TMPro::____TMPro__TMP_InputField__CharacterValidation::Alphanumeric{4};
constexpr ::TMPro::____TMPro__TMP_InputField__CharacterValidation  ::TMPro::____TMPro__TMP_InputField__CharacterValidation::Name{5};
constexpr ::TMPro::____TMPro__TMP_InputField__CharacterValidation  ::TMPro::____TMPro__TMP_InputField__CharacterValidation::Regex{6};
constexpr ::TMPro::____TMPro__TMP_InputField__CharacterValidation  ::TMPro::____TMPro__TMP_InputField__CharacterValidation::EmailAddress{7};
constexpr ::TMPro::____TMPro__TMP_InputField__CharacterValidation  ::TMPro::____TMPro__TMP_InputField__CharacterValidation::CustomValidator{8};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::TMPro::____TMPro__TMP_InputField__LineType::____TMPro__TMP_InputField__LineType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::TMPro::____TMPro__TMP_InputField__LineType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::TMPro::____TMPro__TMP_InputField__LineType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::TMPro::____TMPro__TMP_InputField__LineType  ::TMPro::____TMPro__TMP_InputField__LineType::SingleLine{0};
constexpr ::TMPro::____TMPro__TMP_InputField__LineType  ::TMPro::____TMPro__TMP_InputField__LineType::MultiLineSubmit{1};
constexpr ::TMPro::____TMPro__TMP_InputField__LineType  ::TMPro::____TMPro__TMP_InputField__LineType::MultiLineNewline{2};
//  Writing Method size for method: ::TMPro::____TMPro__TMP_InputField__OnValidateInput._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::____TMPro__TMP_InputField__OnValidateInput::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&::TMPro::____TMPro__TMP_InputField__OnValidateInput::_ctor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x2aa1570;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::____TMPro__TMP_InputField__OnValidateInput>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::____TMPro__TMP_InputField__OnValidateInput.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<char16_t (::TMPro::____TMPro__TMP_InputField__OnValidateInput::*)(::StringW, int32_t, char16_t)>(&::TMPro::____TMPro__TMP_InputField__OnValidateInput::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2aa1648;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::TMPro::____TMPro__TMP_InputField__OnValidateInput),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::____TMPro__TMP_InputField__OnValidateInput>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::____TMPro__TMP_InputField__OnValidateInput.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult (::TMPro::____TMPro__TMP_InputField__OnValidateInput::*)(::StringW, int32_t, char16_t, ::System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&::TMPro::____TMPro__TMP_InputField__OnValidateInput::BeginInvoke)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x2aa165c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::TMPro::____TMPro__TMP_InputField__OnValidateInput),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::____TMPro__TMP_InputField__OnValidateInput>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::____TMPro__TMP_InputField__OnValidateInput.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<char16_t (::TMPro::____TMPro__TMP_InputField__OnValidateInput::*)(::System::IAsyncResult)>(&::TMPro::____TMPro__TMP_InputField__OnValidateInput::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2aa171c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::TMPro::____TMPro__TMP_InputField__OnValidateInput),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::____TMPro__TMP_InputField__OnValidateInput>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 ::TMPro::____TMPro__TMP_InputField__OnValidateInput::____TMPro__TMP_InputField__OnValidateInput(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  : ::System::MulticastDelegate(THROW_UNLESS(::il2cpp_utils::New<____TMPro__TMP_InputField__OnValidateInput>(object, method))) {}
 void ::TMPro::____TMPro__TMP_InputField__OnValidateInput::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::____TMPro__TMP_InputField__OnValidateInput>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 char16_t ::TMPro::____TMPro__TMP_InputField__OnValidateInput::Invoke(::StringW text, int32_t charIndex, char16_t addedChar)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::____TMPro__TMP_InputField__OnValidateInput>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<char16_t, false>(const_cast<void*>(instance), ___internal_method, text, charIndex, addedChar);
}
 ::System::IAsyncResult ::TMPro::____TMPro__TMP_InputField__OnValidateInput::BeginInvoke(::StringW text, int32_t charIndex, char16_t addedChar, ::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::____TMPro__TMP_InputField__OnValidateInput>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, text, charIndex, addedChar, callback, object);
}
 char16_t ::TMPro::____TMPro__TMP_InputField__OnValidateInput::EndInvoke(::System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::____TMPro__TMP_InputField__OnValidateInput>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<char16_t, false>(const_cast<void*>(instance), ___internal_method, result);
}
//  Writing Method size for method: ::TMPro::____TMPro__TMP_InputField__SubmitEvent._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::____TMPro__TMP_InputField__SubmitEvent::*)()>(&::TMPro::____TMPro__TMP_InputField__SubmitEvent::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2aa1744;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::____TMPro__TMP_InputField__SubmitEvent>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters []
 ::TMPro::____TMPro__TMP_InputField__SubmitEvent::____TMPro__TMP_InputField__SubmitEvent()  : ::UnityEngine::Events::UnityEvent_1<::StringW>(THROW_UNLESS(::il2cpp_utils::New<____TMPro__TMP_InputField__SubmitEvent>())) {}
 void ::TMPro::____TMPro__TMP_InputField__SubmitEvent::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::____TMPro__TMP_InputField__SubmitEvent>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: ::TMPro::____TMPro__TMP_InputField__OnChangeEvent._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::____TMPro__TMP_InputField__OnChangeEvent::*)()>(&::TMPro::____TMPro__TMP_InputField__OnChangeEvent::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2aa178c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::____TMPro__TMP_InputField__OnChangeEvent>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters []
 ::TMPro::____TMPro__TMP_InputField__OnChangeEvent::____TMPro__TMP_InputField__OnChangeEvent()  : ::UnityEngine::Events::UnityEvent_1<::StringW>(THROW_UNLESS(::il2cpp_utils::New<____TMPro__TMP_InputField__OnChangeEvent>())) {}
 void ::TMPro::____TMPro__TMP_InputField__OnChangeEvent::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::____TMPro__TMP_InputField__OnChangeEvent>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: ::TMPro::____TMPro__TMP_InputField__SelectionEvent._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::____TMPro__TMP_InputField__SelectionEvent::*)()>(&::TMPro::____TMPro__TMP_InputField__SelectionEvent::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2aa17d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::____TMPro__TMP_InputField__SelectionEvent>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters []
 ::TMPro::____TMPro__TMP_InputField__SelectionEvent::____TMPro__TMP_InputField__SelectionEvent()  : ::UnityEngine::Events::UnityEvent_1<::StringW>(THROW_UNLESS(::il2cpp_utils::New<____TMPro__TMP_InputField__SelectionEvent>())) {}
 void ::TMPro::____TMPro__TMP_InputField__SelectionEvent::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::____TMPro__TMP_InputField__SelectionEvent>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: ::TMPro::____TMPro__TMP_InputField__TextSelectionEvent._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::____TMPro__TMP_InputField__TextSelectionEvent::*)()>(&::TMPro::____TMPro__TMP_InputField__TextSelectionEvent::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2aa181c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::____TMPro__TMP_InputField__TextSelectionEvent>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters []
 ::TMPro::____TMPro__TMP_InputField__TextSelectionEvent::____TMPro__TMP_InputField__TextSelectionEvent()  : ::UnityEngine::Events::UnityEvent_3<::StringW,int32_t,int32_t>(THROW_UNLESS(::il2cpp_utils::New<____TMPro__TMP_InputField__TextSelectionEvent>())) {}
 void ::TMPro::____TMPro__TMP_InputField__TextSelectionEvent::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::____TMPro__TMP_InputField__TextSelectionEvent>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: ::TMPro::____TMPro__TMP_InputField__TouchScreenKeyboardEvent._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::____TMPro__TMP_InputField__TouchScreenKeyboardEvent::*)()>(&::TMPro::____TMPro__TMP_InputField__TouchScreenKeyboardEvent::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2aa1864;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::____TMPro__TMP_InputField__TouchScreenKeyboardEvent>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters []
 ::TMPro::____TMPro__TMP_InputField__TouchScreenKeyboardEvent::____TMPro__TMP_InputField__TouchScreenKeyboardEvent()  : ::UnityEngine::Events::UnityEvent_1<::UnityEngine::____UnityEngine__TouchScreenKeyboard__Status>(THROW_UNLESS(::il2cpp_utils::New<____TMPro__TMP_InputField__TouchScreenKeyboardEvent>())) {}
 void ::TMPro::____TMPro__TMP_InputField__TouchScreenKeyboardEvent::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::____TMPro__TMP_InputField__TouchScreenKeyboardEvent>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::TMPro::____TMPro__TMP_InputField__EditState::____TMPro__TMP_InputField__EditState(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::TMPro::____TMPro__TMP_InputField__EditState::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::TMPro::____TMPro__TMP_InputField__EditState::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::TMPro::____TMPro__TMP_InputField__EditState  ::TMPro::____TMPro__TMP_InputField__EditState::Continue{0};
constexpr ::TMPro::____TMPro__TMP_InputField__EditState  ::TMPro::____TMPro__TMP_InputField__EditState::Finish{1};
//  Writing Method size for method: ::TMPro::____TMPro__TMP_InputField___CaretBlink_d__276._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::____TMPro__TMP_InputField___CaretBlink_d__276::*)(int32_t)>(&::TMPro::____TMPro__TMP_InputField___CaretBlink_d__276::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2aa18ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::____TMPro__TMP_InputField___CaretBlink_d__276>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::____TMPro__TMP_InputField___CaretBlink_d__276.System_IDisposable_Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::____TMPro__TMP_InputField___CaretBlink_d__276::*)()>(&::TMPro::____TMPro__TMP_InputField___CaretBlink_d__276::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2aa18d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::____TMPro__TMP_InputField___CaretBlink_d__276>::get(),
                            "System.IDisposable.Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::____TMPro__TMP_InputField___CaretBlink_d__276.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::TMPro::____TMPro__TMP_InputField___CaretBlink_d__276::*)()>(&::TMPro::____TMPro__TMP_InputField___CaretBlink_d__276::MoveNext)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x2aa18d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::____TMPro__TMP_InputField___CaretBlink_d__276>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::____TMPro__TMP_InputField___CaretBlink_d__276.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (::TMPro::____TMPro__TMP_InputField___CaretBlink_d__276::*)()>(&::TMPro::____TMPro__TMP_InputField___CaretBlink_d__276::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2aa19e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::____TMPro__TMP_InputField___CaretBlink_d__276>::get(),
                            "System.Collections.Generic.IEnumerator<System.Object>.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::____TMPro__TMP_InputField___CaretBlink_d__276.System_Collections_IEnumerator_Reset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::____TMPro__TMP_InputField___CaretBlink_d__276::*)()>(&::TMPro::____TMPro__TMP_InputField___CaretBlink_d__276::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2aa19ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::____TMPro__TMP_InputField___CaretBlink_d__276>::get(),
                            "System.Collections.IEnumerator.Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::____TMPro__TMP_InputField___CaretBlink_d__276.System_Collections_IEnumerator_get_Current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (::TMPro::____TMPro__TMP_InputField___CaretBlink_d__276::*)()>(&::TMPro::____TMPro__TMP_InputField___CaretBlink_d__276::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2aa1a2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::____TMPro__TMP_InputField___CaretBlink_d__276>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>
constexpr  ::TMPro::____TMPro__TMP_InputField___CaretBlink_d__276::operator ::System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>() const noexcept {
return ::System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to ::System::Collections::IEnumerator
constexpr  ::TMPro::____TMPro__TMP_InputField___CaretBlink_d__276::operator ::System::Collections::IEnumerator() const noexcept {
return ::System::Collections::IEnumerator(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to ::System::IDisposable
constexpr  ::TMPro::____TMPro__TMP_InputField___CaretBlink_d__276::operator ::System::IDisposable() const noexcept {
return ::System::IDisposable(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::____TMPro__TMP_InputField___CaretBlink_d__276::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::TMPro::____TMPro__TMP_InputField___CaretBlink_d__276::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::____TMPro__TMP_InputField___CaretBlink_d__276::__set___2__current(::bs_hook::Il2CppWrapperType value)  {
::cordl_internals::setInstanceField<::bs_hook::Il2CppWrapperType, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::bs_hook::Il2CppWrapperType>(value));
}
constexpr ::bs_hook::Il2CppWrapperType ::TMPro::____TMPro__TMP_InputField___CaretBlink_d__276::__get___2__current() const {
return ::cordl_internals::getInstanceField<::bs_hook::Il2CppWrapperType, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::____TMPro__TMP_InputField___CaretBlink_d__276::__set___4__this(::TMPro::TMP_InputField value)  {
::cordl_internals::setInstanceField<::TMPro::TMP_InputField, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::TMPro::TMP_InputField>(value));
}
constexpr ::TMPro::TMP_InputField ::TMPro::____TMPro__TMP_InputField___CaretBlink_d__276::__get___4__this() const {
return ::cordl_internals::getInstanceField<::TMPro::TMP_InputField, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }]
 ::TMPro::____TMPro__TMP_InputField___CaretBlink_d__276::____TMPro__TMP_InputField___CaretBlink_d__276(int32_t __1__state)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<____TMPro__TMP_InputField___CaretBlink_d__276>(__1__state))) {}
 void ::TMPro::____TMPro__TMP_InputField___CaretBlink_d__276::_ctor(int32_t __1__state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::____TMPro__TMP_InputField___CaretBlink_d__276>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, __1__state);
}
 void ::TMPro::____TMPro__TMP_InputField___CaretBlink_d__276::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::____TMPro__TMP_InputField___CaretBlink_d__276>::get(),
                            "System.IDisposable.Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::TMPro::____TMPro__TMP_InputField___CaretBlink_d__276::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::____TMPro__TMP_InputField___CaretBlink_d__276>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 ::bs_hook::Il2CppWrapperType ::TMPro::____TMPro__TMP_InputField___CaretBlink_d__276::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::____TMPro__TMP_InputField___CaretBlink_d__276>::get(),
                            "System.Collections.Generic.IEnumerator<System.Object>.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::TMPro::____TMPro__TMP_InputField___CaretBlink_d__276::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::____TMPro__TMP_InputField___CaretBlink_d__276>::get(),
                            "System.Collections.IEnumerator.Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::bs_hook::Il2CppWrapperType ::TMPro::____TMPro__TMP_InputField___CaretBlink_d__276::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::____TMPro__TMP_InputField___CaretBlink_d__276>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: ::TMPro::____TMPro__TMP_InputField___MouseDragOutsideRect_d__294._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::____TMPro__TMP_InputField___MouseDragOutsideRect_d__294::*)(int32_t)>(&::TMPro::____TMPro__TMP_InputField___MouseDragOutsideRect_d__294::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2aa1a34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::____TMPro__TMP_InputField___MouseDragOutsideRect_d__294>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::____TMPro__TMP_InputField___MouseDragOutsideRect_d__294.System_IDisposable_Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::____TMPro__TMP_InputField___MouseDragOutsideRect_d__294::*)()>(&::TMPro::____TMPro__TMP_InputField___MouseDragOutsideRect_d__294::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2aa1a5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::____TMPro__TMP_InputField___MouseDragOutsideRect_d__294>::get(),
                            "System.IDisposable.Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::____TMPro__TMP_InputField___MouseDragOutsideRect_d__294.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::TMPro::____TMPro__TMP_InputField___MouseDragOutsideRect_d__294::*)()>(&::TMPro::____TMPro__TMP_InputField___MouseDragOutsideRect_d__294::MoveNext)> {
  constexpr static std::size_t size = 0x254;
  constexpr static std::size_t addrs = 0x2aa1a60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::____TMPro__TMP_InputField___MouseDragOutsideRect_d__294>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::____TMPro__TMP_InputField___MouseDragOutsideRect_d__294.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (::TMPro::____TMPro__TMP_InputField___MouseDragOutsideRect_d__294::*)()>(&::TMPro::____TMPro__TMP_InputField___MouseDragOutsideRect_d__294::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2aa1cb4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::____TMPro__TMP_InputField___MouseDragOutsideRect_d__294>::get(),
                            "System.Collections.Generic.IEnumerator<System.Object>.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::____TMPro__TMP_InputField___MouseDragOutsideRect_d__294.System_Collections_IEnumerator_Reset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::____TMPro__TMP_InputField___MouseDragOutsideRect_d__294::*)()>(&::TMPro::____TMPro__TMP_InputField___MouseDragOutsideRect_d__294::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2aa1cbc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::____TMPro__TMP_InputField___MouseDragOutsideRect_d__294>::get(),
                            "System.Collections.IEnumerator.Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::____TMPro__TMP_InputField___MouseDragOutsideRect_d__294.System_Collections_IEnumerator_get_Current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (::TMPro::____TMPro__TMP_InputField___MouseDragOutsideRect_d__294::*)()>(&::TMPro::____TMPro__TMP_InputField___MouseDragOutsideRect_d__294::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2aa1cfc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::____TMPro__TMP_InputField___MouseDragOutsideRect_d__294>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>
constexpr  ::TMPro::____TMPro__TMP_InputField___MouseDragOutsideRect_d__294::operator ::System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>() const noexcept {
return ::System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to ::System::Collections::IEnumerator
constexpr  ::TMPro::____TMPro__TMP_InputField___MouseDragOutsideRect_d__294::operator ::System::Collections::IEnumerator() const noexcept {
return ::System::Collections::IEnumerator(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to ::System::IDisposable
constexpr  ::TMPro::____TMPro__TMP_InputField___MouseDragOutsideRect_d__294::operator ::System::IDisposable() const noexcept {
return ::System::IDisposable(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::____TMPro__TMP_InputField___MouseDragOutsideRect_d__294::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::TMPro::____TMPro__TMP_InputField___MouseDragOutsideRect_d__294::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::____TMPro__TMP_InputField___MouseDragOutsideRect_d__294::__set___2__current(::bs_hook::Il2CppWrapperType value)  {
::cordl_internals::setInstanceField<::bs_hook::Il2CppWrapperType, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::bs_hook::Il2CppWrapperType>(value));
}
constexpr ::bs_hook::Il2CppWrapperType ::TMPro::____TMPro__TMP_InputField___MouseDragOutsideRect_d__294::__get___2__current() const {
return ::cordl_internals::getInstanceField<::bs_hook::Il2CppWrapperType, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::____TMPro__TMP_InputField___MouseDragOutsideRect_d__294::__set___4__this(::TMPro::TMP_InputField value)  {
::cordl_internals::setInstanceField<::TMPro::TMP_InputField, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::TMPro::TMP_InputField>(value));
}
constexpr ::TMPro::TMP_InputField ::TMPro::____TMPro__TMP_InputField___MouseDragOutsideRect_d__294::__get___4__this() const {
return ::cordl_internals::getInstanceField<::TMPro::TMP_InputField, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::____TMPro__TMP_InputField___MouseDragOutsideRect_d__294::__set_eventData(::UnityEngine::EventSystems::PointerEventData value)  {
::cordl_internals::setInstanceField<::UnityEngine::EventSystems::PointerEventData, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::EventSystems::PointerEventData>(value));
}
constexpr ::UnityEngine::EventSystems::PointerEventData ::TMPro::____TMPro__TMP_InputField___MouseDragOutsideRect_d__294::__get_eventData() const {
return ::cordl_internals::getInstanceField<::UnityEngine::EventSystems::PointerEventData, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }]
 ::TMPro::____TMPro__TMP_InputField___MouseDragOutsideRect_d__294::____TMPro__TMP_InputField___MouseDragOutsideRect_d__294(int32_t __1__state)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<____TMPro__TMP_InputField___MouseDragOutsideRect_d__294>(__1__state))) {}
 void ::TMPro::____TMPro__TMP_InputField___MouseDragOutsideRect_d__294::_ctor(int32_t __1__state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::____TMPro__TMP_InputField___MouseDragOutsideRect_d__294>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, __1__state);
}
 void ::TMPro::____TMPro__TMP_InputField___MouseDragOutsideRect_d__294::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::____TMPro__TMP_InputField___MouseDragOutsideRect_d__294>::get(),
                            "System.IDisposable.Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::TMPro::____TMPro__TMP_InputField___MouseDragOutsideRect_d__294::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::____TMPro__TMP_InputField___MouseDragOutsideRect_d__294>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 ::bs_hook::Il2CppWrapperType ::TMPro::____TMPro__TMP_InputField___MouseDragOutsideRect_d__294::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::____TMPro__TMP_InputField___MouseDragOutsideRect_d__294>::get(),
                            "System.Collections.Generic.IEnumerator<System.Object>.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::TMPro::____TMPro__TMP_InputField___MouseDragOutsideRect_d__294::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::____TMPro__TMP_InputField___MouseDragOutsideRect_d__294>::get(),
                            "System.Collections.IEnumerator.Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::bs_hook::Il2CppWrapperType ::TMPro::____TMPro__TMP_InputField___MouseDragOutsideRect_d__294::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::____TMPro__TMP_InputField___MouseDragOutsideRect_d__294>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: ::TMPro::TMP_InputField.get_inputSystem
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::EventSystems::BaseInput (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::get_inputSystem)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x2a7a9e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "get_inputSystem",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.get_compositionString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::get_compositionString)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x2a7aaf0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "get_compositionString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.get_compositionLength
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::get_compositionLength)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2a7ab84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "get_compositionLength",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::_ctor)> {
  constexpr static std::size_t size = 0x290;
  constexpr static std::size_t addrs = 0x2a7abb0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.get_mesh
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Mesh (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::get_mesh)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x2a7aed4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "get_mesh",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.get_shouldHideMobileInput
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::get_shouldHideMobileInput)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2a7af7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "get_shouldHideMobileInput",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.set_shouldHideMobileInput
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(bool)>(&::TMPro::TMP_InputField::set_shouldHideMobileInput)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x2a7afc4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "set_shouldHideMobileInput",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.get_shouldHideSoftKeyboard
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::get_shouldHideSoftKeyboard)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x2a7b050;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "get_shouldHideSoftKeyboard",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.set_shouldHideSoftKeyboard
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(bool)>(&::TMPro::TMP_InputField::set_shouldHideSoftKeyboard)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x2a7b0e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "set_shouldHideSoftKeyboard",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.isKeyboardUsingEvents
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::isKeyboardUsingEvents)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2a7b1f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "isKeyboardUsingEvents",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.get_text
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::get_text)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a7b24c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "get_text",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.set_text
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(::StringW)>(&::TMPro::TMP_InputField::set_text)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a7b254;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "set_text",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.SetTextWithoutNotify
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(::StringW)>(&::TMPro::TMP_InputField::SetTextWithoutNotify)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a7b390;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "SetTextWithoutNotify",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.SetText
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(::StringW, bool)>(&::TMPro::TMP_InputField::SetText)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x2a7b25c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "SetText",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.get_isFocused
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::get_isFocused)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a7b910;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "get_isFocused",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.get_caretBlinkRate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::get_caretBlinkRate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a7b918;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "get_caretBlinkRate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.set_caretBlinkRate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(float_t)>(&::TMPro::TMP_InputField::set_caretBlinkRate)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2a7b920;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "set_caretBlinkRate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.get_caretWidth
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::get_caretWidth)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a7b9f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "get_caretWidth",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.set_caretWidth
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(int32_t)>(&::TMPro::TMP_InputField::set_caretWidth)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2a7b9f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "set_caretWidth",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.get_textViewport
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::RectTransform (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::get_textViewport)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a7bac4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "get_textViewport",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.set_textViewport
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(::UnityEngine::RectTransform)>(&::TMPro::TMP_InputField::set_textViewport)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2a6bbac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "set_textViewport",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RectTransform>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.get_textComponent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::TMPro::TMP_Text (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::get_textComponent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a7bacc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "get_textComponent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.set_textComponent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(::TMPro::TMP_Text)>(&::TMPro::TMP_InputField::set_textComponent)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2a6bc04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "set_textComponent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::TMP_Text>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.get_placeholder
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UI::Graphic (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::get_placeholder)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a7bad4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "get_placeholder",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.set_placeholder
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(::UnityEngine::UI::Graphic)>(&::TMPro::TMP_InputField::set_placeholder)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2a6bc78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "set_placeholder",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::Graphic>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.get_verticalScrollbar
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UI::Scrollbar (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::get_verticalScrollbar)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a7badc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "get_verticalScrollbar",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.set_verticalScrollbar
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(::UnityEngine::UI::Scrollbar)>(&::TMPro::TMP_InputField::set_verticalScrollbar)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x2a7bae4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "set_verticalScrollbar",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::Scrollbar>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.get_scrollSensitivity
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::get_scrollSensitivity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a7bc9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "get_scrollSensitivity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.set_scrollSensitivity
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(float_t)>(&::TMPro::TMP_InputField::set_scrollSensitivity)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2a7bca4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "set_scrollSensitivity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.get_caretColor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::get_caretColor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2a7bd18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "get_caretColor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.set_caretColor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(::UnityEngine::Color)>(&::TMPro::TMP_InputField::set_caretColor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2a7bd5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "set_caretColor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.get_customCaretColor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::get_customCaretColor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a7bd88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "get_customCaretColor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.set_customCaretColor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(bool)>(&::TMPro::TMP_InputField::set_customCaretColor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2a7bd90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "set_customCaretColor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.get_selectionColor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::get_selectionColor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2a7bdac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "get_selectionColor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.set_selectionColor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(::UnityEngine::Color)>(&::TMPro::TMP_InputField::set_selectionColor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2a7bdc0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "set_selectionColor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.get_onEndEdit
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::TMPro::____TMPro__TMP_InputField__SubmitEvent (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::get_onEndEdit)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a7bdec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "get_onEndEdit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.set_onEndEdit
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(::TMPro::____TMPro__TMP_InputField__SubmitEvent)>(&::TMPro::TMP_InputField::set_onEndEdit)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2a7bdf4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "set_onEndEdit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::____TMPro__TMP_InputField__SubmitEvent>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.get_onSubmit
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::TMPro::____TMPro__TMP_InputField__SubmitEvent (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::get_onSubmit)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a7be4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "get_onSubmit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.set_onSubmit
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(::TMPro::____TMPro__TMP_InputField__SubmitEvent)>(&::TMPro::TMP_InputField::set_onSubmit)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2a7be54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "set_onSubmit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::____TMPro__TMP_InputField__SubmitEvent>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.get_onSelect
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::TMPro::____TMPro__TMP_InputField__SelectionEvent (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::get_onSelect)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a7beac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "get_onSelect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.set_onSelect
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(::TMPro::____TMPro__TMP_InputField__SelectionEvent)>(&::TMPro::TMP_InputField::set_onSelect)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2a7beb4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "set_onSelect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::____TMPro__TMP_InputField__SelectionEvent>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.get_onDeselect
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::TMPro::____TMPro__TMP_InputField__SelectionEvent (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::get_onDeselect)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a7bf0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "get_onDeselect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.set_onDeselect
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(::TMPro::____TMPro__TMP_InputField__SelectionEvent)>(&::TMPro::TMP_InputField::set_onDeselect)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2a7bf14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "set_onDeselect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::____TMPro__TMP_InputField__SelectionEvent>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.get_onTextSelection
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::TMPro::____TMPro__TMP_InputField__TextSelectionEvent (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::get_onTextSelection)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a7bf6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "get_onTextSelection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.set_onTextSelection
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(::TMPro::____TMPro__TMP_InputField__TextSelectionEvent)>(&::TMPro::TMP_InputField::set_onTextSelection)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2a7bf74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "set_onTextSelection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::____TMPro__TMP_InputField__TextSelectionEvent>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.get_onEndTextSelection
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::TMPro::____TMPro__TMP_InputField__TextSelectionEvent (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::get_onEndTextSelection)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a7bfcc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "get_onEndTextSelection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.set_onEndTextSelection
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(::TMPro::____TMPro__TMP_InputField__TextSelectionEvent)>(&::TMPro::TMP_InputField::set_onEndTextSelection)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2a7bfd4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "set_onEndTextSelection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::____TMPro__TMP_InputField__TextSelectionEvent>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.get_onValueChanged
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::TMPro::____TMPro__TMP_InputField__OnChangeEvent (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::get_onValueChanged)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a7c02c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "get_onValueChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.set_onValueChanged
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(::TMPro::____TMPro__TMP_InputField__OnChangeEvent)>(&::TMPro::TMP_InputField::set_onValueChanged)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2a7c034;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "set_onValueChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::____TMPro__TMP_InputField__OnChangeEvent>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.get_onTouchScreenKeyboardStatusChanged
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::TMPro::____TMPro__TMP_InputField__TouchScreenKeyboardEvent (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::get_onTouchScreenKeyboardStatusChanged)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a7c08c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "get_onTouchScreenKeyboardStatusChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.set_onTouchScreenKeyboardStatusChanged
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(::TMPro::____TMPro__TMP_InputField__TouchScreenKeyboardEvent)>(&::TMPro::TMP_InputField::set_onTouchScreenKeyboardStatusChanged)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2a7c094;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "set_onTouchScreenKeyboardStatusChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::____TMPro__TMP_InputField__TouchScreenKeyboardEvent>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.get_onValidateInput
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::TMPro::____TMPro__TMP_InputField__OnValidateInput (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::get_onValidateInput)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a7c0ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "get_onValidateInput",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.set_onValidateInput
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(::TMPro::____TMPro__TMP_InputField__OnValidateInput)>(&::TMPro::TMP_InputField::set_onValidateInput)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2a7c0f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "set_onValidateInput",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::____TMPro__TMP_InputField__OnValidateInput>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.get_characterLimit
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::get_characterLimit)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a7c14c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "get_characterLimit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.set_characterLimit
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(int32_t)>(&::TMPro::TMP_InputField::set_characterLimit)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x2a7c154;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "set_characterLimit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.get_pointSize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::get_pointSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a7c214;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "get_pointSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.set_pointSize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(float_t)>(&::TMPro::TMP_InputField::set_pointSize)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x2a7c21c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "set_pointSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.get_fontAsset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::TMPro::TMP_FontAsset (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::get_fontAsset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a7c3b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "get_fontAsset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.set_fontAsset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(::TMPro::TMP_FontAsset)>(&::TMPro::TMP_InputField::set_fontAsset)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2a6bcd0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "set_fontAsset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::TMP_FontAsset>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.get_onFocusSelectAll
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::get_onFocusSelectAll)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a7c4a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "get_onFocusSelectAll",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.set_onFocusSelectAll
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(bool)>(&::TMPro::TMP_InputField::set_onFocusSelectAll)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2a7c4a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "set_onFocusSelectAll",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.get_resetOnDeActivation
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::get_resetOnDeActivation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a7c4b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "get_resetOnDeActivation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.set_resetOnDeActivation
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(bool)>(&::TMPro::TMP_InputField::set_resetOnDeActivation)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2a7c4bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "set_resetOnDeActivation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.get_restoreOriginalTextOnEscape
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::get_restoreOriginalTextOnEscape)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a7c4c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "get_restoreOriginalTextOnEscape",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.set_restoreOriginalTextOnEscape
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(bool)>(&::TMPro::TMP_InputField::set_restoreOriginalTextOnEscape)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2a7c4d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "set_restoreOriginalTextOnEscape",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.get_isRichTextEditingAllowed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::get_isRichTextEditingAllowed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a7c4dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "get_isRichTextEditingAllowed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.set_isRichTextEditingAllowed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(bool)>(&::TMPro::TMP_InputField::set_isRichTextEditingAllowed)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2a7c4e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "set_isRichTextEditingAllowed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.get_contentType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::TMPro::____TMPro__TMP_InputField__ContentType (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::get_contentType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a7c4f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "get_contentType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.set_contentType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(::TMPro::____TMPro__TMP_InputField__ContentType)>(&::TMPro::TMP_InputField::set_contentType)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2a7c4f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "set_contentType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::____TMPro__TMP_InputField__ContentType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.get_lineType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::TMPro::____TMPro__TMP_InputField__LineType (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::get_lineType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a7c628;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "get_lineType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.set_lineType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(::TMPro::____TMPro__TMP_InputField__LineType)>(&::TMPro::TMP_InputField::set_lineType)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x2a7c630;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "set_lineType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::____TMPro__TMP_InputField__LineType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.get_lineLimit
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::get_lineLimit)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a7c748;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "get_lineLimit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.set_lineLimit
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(int32_t)>(&::TMPro::TMP_InputField::set_lineLimit)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2a7c750;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "set_lineLimit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.get_inputType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::TMPro::____TMPro__TMP_InputField__InputType (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::get_inputType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a7c7bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "get_inputType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.set_inputType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(::TMPro::____TMPro__TMP_InputField__InputType)>(&::TMPro::TMP_InputField::set_inputType)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2a7c7c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "set_inputType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::____TMPro__TMP_InputField__InputType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.get_keyboardType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::TouchScreenKeyboardType (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::get_keyboardType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a7c860;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "get_keyboardType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.set_keyboardType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(::UnityEngine::TouchScreenKeyboardType)>(&::TMPro::TMP_InputField::set_keyboardType)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2a7c868;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "set_keyboardType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TouchScreenKeyboardType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.get_characterValidation
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::TMPro::____TMPro__TMP_InputField__CharacterValidation (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::get_characterValidation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a7c8ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "get_characterValidation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.set_characterValidation
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(::TMPro::____TMPro__TMP_InputField__CharacterValidation)>(&::TMPro::TMP_InputField::set_characterValidation)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2a7c8f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "set_characterValidation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::____TMPro__TMP_InputField__CharacterValidation>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.get_inputValidator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::TMPro::TMP_InputValidator (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::get_inputValidator)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a7c978;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "get_inputValidator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.set_inputValidator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(::TMPro::TMP_InputValidator)>(&::TMPro::TMP_InputField::set_inputValidator)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2a7c980;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "set_inputValidator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::TMP_InputValidator>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.get_readOnly
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::get_readOnly)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a7ca1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "get_readOnly",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.set_readOnly
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(bool)>(&::TMPro::TMP_InputField::set_readOnly)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2a7ca24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "set_readOnly",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.get_richText
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::get_richText)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a7ca30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "get_richText",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.set_richText
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(bool)>(&::TMPro::TMP_InputField::set_richText)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2a7ca38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "set_richText",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.get_multiLine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::get_multiLine)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2a7cacc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "get_multiLine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.get_asteriskChar
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<char16_t (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::get_asteriskChar)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a7cae0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "get_asteriskChar",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.set_asteriskChar
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(char16_t)>(&::TMPro::TMP_InputField::set_asteriskChar)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2a7cae8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "set_asteriskChar",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.get_wasCanceled
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::get_wasCanceled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a7cb5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "get_wasCanceled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.ClampStringPos
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(ByRef<int32_t>)>(&::TMPro::TMP_InputField::ClampStringPos)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x2a7cb64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "ClampStringPos",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.ClampCaretPos
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(ByRef<int32_t>)>(&::TMPro::TMP_InputField::ClampCaretPos)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2a7cb9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "ClampCaretPos",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.get_caretPositionInternal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::get_caretPositionInternal)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2a7cbe0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "get_caretPositionInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.set_caretPositionInternal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(int32_t)>(&::TMPro::TMP_InputField::set_caretPositionInternal)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2a7cbf8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "set_caretPositionInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.get_stringPositionInternal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::get_stringPositionInternal)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2a7cc08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "get_stringPositionInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.set_stringPositionInternal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(int32_t)>(&::TMPro::TMP_InputField::set_stringPositionInternal)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x2a7cc20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "set_stringPositionInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.get_caretSelectPositionInternal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::get_caretSelectPositionInternal)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2a7cc58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "get_caretSelectPositionInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.set_caretSelectPositionInternal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(int32_t)>(&::TMPro::TMP_InputField::set_caretSelectPositionInternal)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2a7cc70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "set_caretSelectPositionInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.get_stringSelectPositionInternal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::get_stringSelectPositionInternal)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2a7cc80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "get_stringSelectPositionInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.set_stringSelectPositionInternal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(int32_t)>(&::TMPro::TMP_InputField::set_stringSelectPositionInternal)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x2a7cc98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "set_stringSelectPositionInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.get_hasSelection
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::get_hasSelection)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2a7ccd0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "get_hasSelection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.get_caretPosition
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::get_caretPosition)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2a7cd0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "get_caretPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.set_caretPosition
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(int32_t)>(&::TMPro::TMP_InputField::set_caretPosition)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x2a7cd24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "set_caretPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.get_selectionAnchorPosition
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::get_selectionAnchorPosition)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2a7cdd0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "get_selectionAnchorPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.set_selectionAnchorPosition
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(int32_t)>(&::TMPro::TMP_InputField::set_selectionAnchorPosition)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2a7cd58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "set_selectionAnchorPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.get_selectionFocusPosition
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::get_selectionFocusPosition)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2a7cde8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "get_selectionFocusPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.set_selectionFocusPosition
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(int32_t)>(&::TMPro::TMP_InputField::set_selectionFocusPosition)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2a7cd94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "set_selectionFocusPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.get_stringPosition
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::get_stringPosition)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2a7ce00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "get_stringPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.set_stringPosition
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(int32_t)>(&::TMPro::TMP_InputField::set_stringPosition)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x2a7ce18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "set_stringPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.get_selectionStringAnchorPosition
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::get_selectionStringAnchorPosition)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2a7cefc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "get_selectionStringAnchorPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.set_selectionStringAnchorPosition
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(int32_t)>(&::TMPro::TMP_InputField::set_selectionStringAnchorPosition)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2a7ce4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "set_selectionStringAnchorPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.get_selectionStringFocusPosition
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::get_selectionStringFocusPosition)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2a7cf14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "get_selectionStringFocusPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.set_selectionStringFocusPosition
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(int32_t)>(&::TMPro::TMP_InputField::set_selectionStringFocusPosition)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2a7cea4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "set_selectionStringFocusPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.OnEnable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::OnEnable)> {
  constexpr static std::size_t size = 0x720;
  constexpr static std::size_t addrs = 0x2a7cf2c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::TMPro::TMP_InputField),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.OnDisable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::OnDisable)> {
  constexpr static std::size_t size = 0x330;
  constexpr static std::size_t addrs = 0x2a7db50;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::TMPro::TMP_InputField),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.ON_TEXT_CHANGED
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(::UnityEngine::Object)>(&::TMPro::TMP_InputField::ON_TEXT_CHANGED)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x2a7e03c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "ON_TEXT_CHANGED",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Object>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.CaretBlink
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::CaretBlink)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2a7e2ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "CaretBlink",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.SetCaretVisible
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::SetCaretVisible)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x2a7e314;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "SetCaretVisible",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.SetCaretActive
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::SetCaretActive)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2a7b99c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "SetCaretActive",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.OnFocus
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::OnFocus)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2a7e34c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "OnFocus",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.SelectAll
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::SelectAll)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2a7e35c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "SelectAll",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.MoveTextEnd
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(bool)>(&::TMPro::TMP_InputField::MoveTextEnd)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x2a7e398;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "MoveTextEnd",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.MoveTextStart
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(bool)>(&::TMPro::TMP_InputField::MoveTextStart)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x2a7e530;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "MoveTextStart",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.MoveToEndOfLine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(bool, bool)>(&::TMPro::TMP_InputField::MoveToEndOfLine)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x2a7e66c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "MoveToEndOfLine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.MoveToStartOfLine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(bool, bool)>(&::TMPro::TMP_InputField::MoveToStartOfLine)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x2a7e7ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "MoveToStartOfLine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.get_clipboard
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&::TMPro::TMP_InputField::get_clipboard)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a7e97c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "get_clipboard",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.set_clipboard
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW)>(&::TMPro::TMP_InputField::set_clipboard)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a7e984;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "set_clipboard",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.InPlaceEditing
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::InPlaceEditing)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2a7e98c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "InPlaceEditing",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.UpdateStringPositionFromKeyboard
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::UpdateStringPositionFromKeyboard)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x2a7ea50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "UpdateStringPositionFromKeyboard",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.LateUpdate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::LateUpdate)> {
  constexpr static std::size_t size = 0x668;
  constexpr static std::size_t addrs = 0x2a7eb98;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::TMPro::TMP_InputField),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                                  60
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.MayDrag
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::TMPro::TMP_InputField::*)(::UnityEngine::EventSystems::PointerEventData)>(&::TMPro::TMP_InputField::MayDrag)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x2a7fe8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "MayDrag",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::PointerEventData>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.OnBeginDrag
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(::UnityEngine::EventSystems::PointerEventData)>(&::TMPro::TMP_InputField::OnBeginDrag)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2a7ff90;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::TMPro::TMP_InputField),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                                  61
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.OnDrag
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(::UnityEngine::EventSystems::PointerEventData)>(&::TMPro::TMP_InputField::OnDrag)> {
  constexpr static std::size_t size = 0x28c;
  constexpr static std::size_t addrs = 0x2a7ffb0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::TMPro::TMP_InputField),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                                  62
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.MouseDragOutsideRect
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator (::TMPro::TMP_InputField::*)(::UnityEngine::EventSystems::PointerEventData)>(&::TMPro::TMP_InputField::MouseDragOutsideRect)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2a8023c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "MouseDragOutsideRect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::PointerEventData>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.OnEndDrag
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(::UnityEngine::EventSystems::PointerEventData)>(&::TMPro::TMP_InputField::OnEndDrag)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2a802b0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::TMPro::TMP_InputField),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                                  63
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.OnPointerDown
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(::UnityEngine::EventSystems::PointerEventData)>(&::TMPro::TMP_InputField::OnPointerDown)> {
  constexpr static std::size_t size = 0x730;
  constexpr static std::size_t addrs = 0x2a802cc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::TMPro::TMP_InputField),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                                  32
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.KeyPressed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::TMPro::____TMPro__TMP_InputField__EditState (::TMPro::TMP_InputField::*)(::UnityEngine::Event)>(&::TMPro::TMP_InputField::KeyPressed)> {
  constexpr static std::size_t size = 0x414;
  constexpr static std::size_t addrs = 0x2a809fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "KeyPressed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Event>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.IsValidChar
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::TMPro::TMP_InputField::*)(char16_t)>(&::TMPro::TMP_InputField::IsValidChar)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2a81e2c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::TMPro::TMP_InputField),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                                  64
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.ProcessEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(::UnityEngine::Event)>(&::TMPro::TMP_InputField::ProcessEvent)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2a81e4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "ProcessEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Event>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.OnUpdateSelected
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(::UnityEngine::EventSystems::BaseEventData)>(&::TMPro::TMP_InputField::OnUpdateSelected)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x2a81e50;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::TMPro::TMP_InputField),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                                  65
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.OnScroll
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(::UnityEngine::EventSystems::PointerEventData)>(&::TMPro::TMP_InputField::OnScroll)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x2a8204c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::TMPro::TMP_InputField),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                                  66
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.GetScrollPositionRelativeToViewport
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::GetScrollPositionRelativeToViewport)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x2a8220c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "GetScrollPositionRelativeToViewport",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.GetSelectedString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::GetSelectedString)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x2a813bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "GetSelectedString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.FindNextWordBegin
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::FindNextWordBegin)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x2a824ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "FindNextWordBegin",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.MoveRight
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(bool, bool)>(&::TMPro::TMP_InputField::MoveRight)> {
  constexpr static std::size_t size = 0x3fc;
  constexpr static std::size_t addrs = 0x2a81a00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "MoveRight",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.FindPrevWordBegin
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::FindPrevWordBegin)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x2a825c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "FindPrevWordBegin",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.MoveLeft
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(bool, bool)>(&::TMPro::TMP_InputField::MoveLeft)> {
  constexpr static std::size_t size = 0x3b0;
  constexpr static std::size_t addrs = 0x2a81650;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "MoveLeft",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.LineUpCharacterPosition
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::TMPro::TMP_InputField::*)(int32_t, bool)>(&::TMPro::TMP_InputField::LineUpCharacterPosition)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x2a82678;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "LineUpCharacterPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.LineDownCharacterPosition
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::TMPro::TMP_InputField::*)(int32_t, bool)>(&::TMPro::TMP_InputField::LineDownCharacterPosition)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x2a827c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "LineDownCharacterPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.PageUpCharacterPosition
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::TMPro::TMP_InputField::*)(int32_t, bool)>(&::TMPro::TMP_InputField::PageUpCharacterPosition)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x2a82914;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "PageUpCharacterPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.PageDownCharacterPosition
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::TMPro::TMP_InputField::*)(int32_t, bool)>(&::TMPro::TMP_InputField::PageDownCharacterPosition)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x2a82b20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "PageDownCharacterPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.MoveDown
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(bool)>(&::TMPro::TMP_InputField::MoveDown)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2a81e08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "MoveDown",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.MoveDown
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(bool, bool)>(&::TMPro::TMP_InputField::MoveDown)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x2a82d2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "MoveDown",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.MoveUp
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(bool)>(&::TMPro::TMP_InputField::MoveUp)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2a81dfc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "MoveUp",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.MoveUp
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(bool, bool)>(&::TMPro::TMP_InputField::MoveUp)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x2a82ef0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "MoveUp",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.MovePageUp
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(bool)>(&::TMPro::TMP_InputField::MovePageUp)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2a81e14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "MovePageUp",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.MovePageUp
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(bool, bool)>(&::TMPro::TMP_InputField::MovePageUp)> {
  constexpr static std::size_t size = 0x2e8;
  constexpr static std::size_t addrs = 0x2a830a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "MovePageUp",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.MovePageDown
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(bool)>(&::TMPro::TMP_InputField::MovePageDown)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2a81e20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "MovePageDown",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.MovePageDown
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(bool, bool)>(&::TMPro::TMP_InputField::MovePageDown)> {
  constexpr static std::size_t size = 0x2fc;
  constexpr static std::size_t addrs = 0x2a83388;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "MovePageDown",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.Delete
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::Delete)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x2a8147c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "Delete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.DeleteKey
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::DeleteKey)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0x2a81198;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "DeleteKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.Backspace
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::Backspace)> {
  constexpr static std::size_t size = 0x388;
  constexpr static std::size_t addrs = 0x2a80e10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "Backspace",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.Append
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(::StringW)>(&::TMPro::TMP_InputField::Append)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2a83684;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::TMPro::TMP_InputField),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                                  67
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.Append
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(char16_t)>(&::TMPro::TMP_InputField::Append)> {
  constexpr static std::size_t size = 0x23c;
  constexpr static std::size_t addrs = 0x2a83734;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::TMPro::TMP_InputField),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                                  68
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.Insert
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(char16_t)>(&::TMPro::TMP_InputField::Insert)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x2a83970;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "Insert",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.UpdateTouchKeyboardFromEditChanges
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::UpdateTouchKeyboardFromEditChanges)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2a81614;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "UpdateTouchKeyboardFromEditChanges",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.SendOnValueChangedAndUpdateLabel
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::SendOnValueChangedAndUpdateLabel)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2a7fe74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "SendOnValueChangedAndUpdateLabel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.SendOnValueChanged
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::SendOnValueChanged)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2a7b8b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "SendOnValueChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.SendOnEndEdit
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::SendOnEndEdit)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2a83a70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "SendOnEndEdit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.SendOnSubmit
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::SendOnSubmit)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2a81ff0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "SendOnSubmit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.SendOnFocus
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::SendOnFocus)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2a83acc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "SendOnFocus",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.SendOnFocusLost
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::SendOnFocusLost)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2a83b28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "SendOnFocusLost",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.SendOnTextSelection
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::SendOnTextSelection)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x2a83b84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "SendOnTextSelection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.SendOnEndTextSelection
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::SendOnEndTextSelection)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2a83c2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "SendOnEndTextSelection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.SendTouchScreenKeyboardStatusChanged
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::SendTouchScreenKeyboardStatusChanged)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2a7f62c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "SendTouchScreenKeyboardStatusChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.UpdateLabel
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::UpdateLabel)> {
  constexpr static std::size_t size = 0x51c;
  constexpr static std::size_t addrs = 0x2a7b398;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "UpdateLabel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.UpdateScrollbar
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::UpdateScrollbar)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x2a7e1c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "UpdateScrollbar",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.OnScrollbarValueChange
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(float_t)>(&::TMPro::TMP_InputField::OnScrollbarValueChange)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2a83cc8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "OnScrollbarValueChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.UpdateMaskRegions
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::UpdateMaskRegions)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2a7db4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "UpdateMaskRegions",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.AdjustTextPositionRelativeToViewport
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(float_t)>(&::TMPro::TMP_InputField::AdjustTextPositionRelativeToViewport)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x2a8231c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "AdjustTextPositionRelativeToViewport",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.GetCaretPositionFromStringIndex
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::TMPro::TMP_InputField::*)(int32_t)>(&::TMPro::TMP_InputField::GetCaretPositionFromStringIndex)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2a7e150;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "GetCaretPositionFromStringIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.GetMinCaretPositionFromStringIndex
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::TMPro::TMP_InputField::*)(int32_t)>(&::TMPro::TMP_InputField::GetMinCaretPositionFromStringIndex)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2a83d04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "GetMinCaretPositionFromStringIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.GetMaxCaretPositionFromStringIndex
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::TMPro::TMP_InputField::*)(int32_t)>(&::TMPro::TMP_InputField::GetMaxCaretPositionFromStringIndex)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2a83d78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "GetMaxCaretPositionFromStringIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.GetStringIndexFromCaretPosition
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::TMPro::TMP_InputField::*)(int32_t)>(&::TMPro::TMP_InputField::GetStringIndexFromCaretPosition)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2a7e4d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "GetStringIndexFromCaretPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.ForceLabelUpdate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::ForceLabelUpdate)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2a83de8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "ForceLabelUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.MarkGeometryAsDirty
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::MarkGeometryAsDirty)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2a7ba6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "MarkGeometryAsDirty",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.Rebuild
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(::UnityEngine::UI::CanvasUpdate)>(&::TMPro::TMP_InputField::Rebuild)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2a83dec;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::TMPro::TMP_InputField),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                                  69
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.LayoutComplete
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::LayoutComplete)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2a83eb0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::TMPro::TMP_InputField),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                                  70
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.GraphicUpdateComplete
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::GraphicUpdateComplete)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2a83eb4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::TMPro::TMP_InputField),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                                  71
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.UpdateGeometry
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::UpdateGeometry)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x2a83dfc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "UpdateGeometry",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.AssignPositioningIfNeeded
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::AssignPositioningIfNeeded)> {
  constexpr static std::size_t size = 0x500;
  constexpr static std::size_t addrs = 0x2a7d64c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "AssignPositioningIfNeeded",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.OnFillVBO
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(::UnityEngine::Mesh)>(&::TMPro::TMP_InputField::OnFillVBO)> {
  constexpr static std::size_t size = 0x358;
  constexpr static std::size_t addrs = 0x2a83eb8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "OnFillVBO",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Mesh>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.GenerateCaret
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(::UnityEngine::UI::VertexHelper, ::UnityEngine::Vector2)>(&::TMPro::TMP_InputField::GenerateCaret)> {
  constexpr static std::size_t size = 0xfe4;
  constexpr static std::size_t addrs = 0x2a84210;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "GenerateCaret",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::VertexHelper>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.CreateCursorVerts
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::CreateCursorVerts)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x2a85ab0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "CreateCursorVerts",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.GenerateHightlight
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(::UnityEngine::UI::VertexHelper, ::UnityEngine::Vector2)>(&::TMPro::TMP_InputField::GenerateHightlight)> {
  constexpr static std::size_t size = 0x8bc;
  constexpr static std::size_t addrs = 0x2a851f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "GenerateHightlight",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::VertexHelper>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.AdjustRectTransformRelativeToViewport
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(::UnityEngine::Vector2, float_t, bool)>(&::TMPro::TMP_InputField::AdjustRectTransformRelativeToViewport)> {
  constexpr static std::size_t size = 0x530;
  constexpr static std::size_t addrs = 0x2a85c00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "AdjustRectTransformRelativeToViewport",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.Validate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<char16_t (::TMPro::TMP_InputField::*)(::StringW, int32_t, char16_t)>(&::TMPro::TMP_InputField::Validate)> {
  constexpr static std::size_t size = 0x7d4;
  constexpr static std::size_t addrs = 0x2a7f6a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "Validate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.ActivateInputField
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::ActivateInputField)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x2a86130;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "ActivateInputField",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.ActivateInputFieldInternal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::ActivateInputFieldInternal)> {
  constexpr static std::size_t size = 0x400;
  constexpr static std::size_t addrs = 0x2a7f200;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "ActivateInputFieldInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.OnSelect
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(::UnityEngine::EventSystems::BaseEventData)>(&::TMPro::TMP_InputField::OnSelect)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2a86244;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::TMPro::TMP_InputField),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                                  36
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.OnPointerClick
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(::UnityEngine::EventSystems::PointerEventData)>(&::TMPro::TMP_InputField::OnPointerClick)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2a86268;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::TMPro::TMP_InputField),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                                  72
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.OnControlClick
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::OnControlClick)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2a8628c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "OnControlClick",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.ReleaseSelection
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::ReleaseSelection)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2a7f600;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "ReleaseSelection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.DeactivateInputField
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(bool)>(&::TMPro::TMP_InputField::DeactivateInputField)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x2a7de80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "DeactivateInputField",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.OnDeselect
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(::UnityEngine::EventSystems::BaseEventData)>(&::TMPro::TMP_InputField::OnDeselect)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x2a86290;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::TMPro::TMP_InputField),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                                  37
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.OnSubmit
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(::UnityEngine::EventSystems::BaseEventData)>(&::TMPro::TMP_InputField::OnSubmit)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2a862c8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::TMPro::TMP_InputField),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                                  73
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.EnforceContentType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::EnforceContentType)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x2a7c56c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "EnforceContentType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.SetTextComponentWrapMode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::SetTextComponentWrapMode)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x2a7ae40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "SetTextComponentWrapMode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.SetTextComponentRichTextMode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::SetTextComponentRichTextMode)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2a7ca44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "SetTextComponentRichTextMode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.SetToCustomIfContentTypeIsNot
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(::ArrayW<::TMPro::____TMPro__TMP_InputField__ContentType>)>(&::TMPro::TMP_InputField::SetToCustomIfContentTypeIsNot)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2a7c6f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "SetToCustomIfContentTypeIsNot",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::TMPro::____TMPro__TMP_InputField__ContentType>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.SetToCustom
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::SetToCustom)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2a7c848;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "SetToCustom",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.SetToCustom
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(::TMPro::____TMPro__TMP_InputField__CharacterValidation)>(&::TMPro::TMP_InputField::SetToCustom)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2a7ca04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "SetToCustom",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::____TMPro__TMP_InputField__CharacterValidation>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.DoStateTransition
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(::UnityEngine::UI::____UnityEngine__UI__Selectable__SelectionState, bool)>(&::TMPro::TMP_InputField::DoStateTransition)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2a8631c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::TMPro::TMP_InputField),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                                  26
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.CalculateLayoutInputHorizontal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::CalculateLayoutInputHorizontal)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2a86348;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::TMPro::TMP_InputField),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                                  74
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.CalculateLayoutInputVertical
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::CalculateLayoutInputVertical)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2a8634c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::TMPro::TMP_InputField),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                                  75
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.get_minWidth
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::get_minWidth)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a86350;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::TMPro::TMP_InputField),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                                  76
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.get_preferredWidth
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::get_preferredWidth)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x2a86358;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::TMPro::TMP_InputField),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                                  77
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.get_flexibleWidth
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::get_flexibleWidth)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a86488;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::TMPro::TMP_InputField),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                                  78
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.get_minHeight
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::get_minHeight)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a86490;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::TMPro::TMP_InputField),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                                  79
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.get_preferredHeight
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::get_preferredHeight)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x2a86498;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::TMPro::TMP_InputField),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                                  80
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.get_flexibleHeight
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::get_flexibleHeight)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a865c8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::TMPro::TMP_InputField),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                                  81
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.get_layoutPriority
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::get_layoutPriority)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a865d0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::TMPro::TMP_InputField),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                                  82
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.SetGlobalPointSize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(float_t)>(&::TMPro::TMP_InputField::SetGlobalPointSize)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x2a7c2d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "SetGlobalPointSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.SetGlobalFontAsset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_InputField::*)(::TMPro::TMP_FontAsset)>(&::TMPro::TMP_InputField::SetGlobalFontAsset)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x2a7c3c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "SetGlobalFontAsset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::TMP_FontAsset>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_InputField.UnityEngine_UI_ICanvasElement_get_transform
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Transform (::TMPro::TMP_InputField::*)()>(&::TMPro::TMP_InputField::UnityEngine_UI_ICanvasElement_get_transform)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a8666c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "UnityEngine.UI.ICanvasElement.get_transform",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::UnityEngine::EventSystems::IUpdateSelectedHandler
constexpr  ::TMPro::TMP_InputField::operator ::UnityEngine::EventSystems::IUpdateSelectedHandler() const noexcept {
return ::UnityEngine::EventSystems::IUpdateSelectedHandler(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to ::UnityEngine::EventSystems::IEventSystemHandler
constexpr  ::TMPro::TMP_InputField::operator ::UnityEngine::EventSystems::IEventSystemHandler() const noexcept {
return ::UnityEngine::EventSystems::IEventSystemHandler(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to ::UnityEngine::EventSystems::IBeginDragHandler
constexpr  ::TMPro::TMP_InputField::operator ::UnityEngine::EventSystems::IBeginDragHandler() const noexcept {
return ::UnityEngine::EventSystems::IBeginDragHandler(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to ::UnityEngine::EventSystems::IDragHandler
constexpr  ::TMPro::TMP_InputField::operator ::UnityEngine::EventSystems::IDragHandler() const noexcept {
return ::UnityEngine::EventSystems::IDragHandler(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to ::UnityEngine::EventSystems::IEndDragHandler
constexpr  ::TMPro::TMP_InputField::operator ::UnityEngine::EventSystems::IEndDragHandler() const noexcept {
return ::UnityEngine::EventSystems::IEndDragHandler(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to ::UnityEngine::EventSystems::IPointerClickHandler
constexpr  ::TMPro::TMP_InputField::operator ::UnityEngine::EventSystems::IPointerClickHandler() const noexcept {
return ::UnityEngine::EventSystems::IPointerClickHandler(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to ::UnityEngine::EventSystems::ISubmitHandler
constexpr  ::TMPro::TMP_InputField::operator ::UnityEngine::EventSystems::ISubmitHandler() const noexcept {
return ::UnityEngine::EventSystems::ISubmitHandler(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to ::UnityEngine::UI::ICanvasElement
constexpr  ::TMPro::TMP_InputField::operator ::UnityEngine::UI::ICanvasElement() const noexcept {
return ::UnityEngine::UI::ICanvasElement(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to ::UnityEngine::UI::ILayoutElement
constexpr  ::TMPro::TMP_InputField::operator ::UnityEngine::UI::ILayoutElement() const noexcept {
return ::UnityEngine::UI::ILayoutElement(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to ::UnityEngine::EventSystems::IScrollHandler
constexpr  ::TMPro::TMP_InputField::operator ::UnityEngine::EventSystems::IScrollHandler() const noexcept {
return ::UnityEngine::EventSystems::IScrollHandler(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_InputField::__set_m_SoftKeyboard(::UnityEngine::TouchScreenKeyboard value)  {
::cordl_internals::setInstanceField<::UnityEngine::TouchScreenKeyboard, 0xf8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::TouchScreenKeyboard>(value));
}
constexpr ::UnityEngine::TouchScreenKeyboard ::TMPro::TMP_InputField::__get_m_SoftKeyboard() const {
return ::cordl_internals::getInstanceField<::UnityEngine::TouchScreenKeyboard, 0xf8>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void ::TMPro::TMP_InputField::__set_kSeparators(::ArrayW<char16_t> value)  {
::cordl_internals::setStaticField<::ArrayW<char16_t>, "kSeparators", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get>(std::forward<::ArrayW<char16_t>>(value));
}
 ::ArrayW<char16_t> ::TMPro::TMP_InputField::__get_kSeparators()  {
return ::cordl_internals::getStaticField<::ArrayW<char16_t>, "kSeparators", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get>();
}
constexpr void ::TMPro::TMP_InputField::__set_m_RectTransform(::UnityEngine::RectTransform value)  {
::cordl_internals::setInstanceField<::UnityEngine::RectTransform, 0x100>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::RectTransform>(value));
}
constexpr ::UnityEngine::RectTransform ::TMPro::TMP_InputField::__get_m_RectTransform() const {
return ::cordl_internals::getInstanceField<::UnityEngine::RectTransform, 0x100>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_InputField::__set_m_TextViewport(::UnityEngine::RectTransform value)  {
::cordl_internals::setInstanceField<::UnityEngine::RectTransform, 0x108>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::RectTransform>(value));
}
constexpr ::UnityEngine::RectTransform ::TMPro::TMP_InputField::__get_m_TextViewport() const {
return ::cordl_internals::getInstanceField<::UnityEngine::RectTransform, 0x108>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_InputField::__set_m_TextComponentRectMask(::UnityEngine::UI::RectMask2D value)  {
::cordl_internals::setInstanceField<::UnityEngine::UI::RectMask2D, 0x110>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::UI::RectMask2D>(value));
}
constexpr ::UnityEngine::UI::RectMask2D ::TMPro::TMP_InputField::__get_m_TextComponentRectMask() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::RectMask2D, 0x110>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_InputField::__set_m_TextViewportRectMask(::UnityEngine::UI::RectMask2D value)  {
::cordl_internals::setInstanceField<::UnityEngine::UI::RectMask2D, 0x118>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::UI::RectMask2D>(value));
}
constexpr ::UnityEngine::UI::RectMask2D ::TMPro::TMP_InputField::__get_m_TextViewportRectMask() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::RectMask2D, 0x118>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_InputField::__set_m_CachedViewportRect(::UnityEngine::Rect value)  {
::cordl_internals::setInstanceField<::UnityEngine::Rect, 0x120>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Rect>(value));
}
constexpr ::UnityEngine::Rect ::TMPro::TMP_InputField::__get_m_CachedViewportRect() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Rect, 0x120>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_InputField::__set_m_TextComponent(::TMPro::TMP_Text value)  {
::cordl_internals::setInstanceField<::TMPro::TMP_Text, 0x130>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::TMPro::TMP_Text>(value));
}
constexpr ::TMPro::TMP_Text ::TMPro::TMP_InputField::__get_m_TextComponent() const {
return ::cordl_internals::getInstanceField<::TMPro::TMP_Text, 0x130>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_InputField::__set_m_TextComponentRectTransform(::UnityEngine::RectTransform value)  {
::cordl_internals::setInstanceField<::UnityEngine::RectTransform, 0x138>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::RectTransform>(value));
}
constexpr ::UnityEngine::RectTransform ::TMPro::TMP_InputField::__get_m_TextComponentRectTransform() const {
return ::cordl_internals::getInstanceField<::UnityEngine::RectTransform, 0x138>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_InputField::__set_m_Placeholder(::UnityEngine::UI::Graphic value)  {
::cordl_internals::setInstanceField<::UnityEngine::UI::Graphic, 0x140>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::UI::Graphic>(value));
}
constexpr ::UnityEngine::UI::Graphic ::TMPro::TMP_InputField::__get_m_Placeholder() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::Graphic, 0x140>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_InputField::__set_m_VerticalScrollbar(::UnityEngine::UI::Scrollbar value)  {
::cordl_internals::setInstanceField<::UnityEngine::UI::Scrollbar, 0x148>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::UI::Scrollbar>(value));
}
constexpr ::UnityEngine::UI::Scrollbar ::TMPro::TMP_InputField::__get_m_VerticalScrollbar() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::Scrollbar, 0x148>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_InputField::__set_m_VerticalScrollbarEventHandler(::TMPro::TMP_ScrollbarEventHandler value)  {
::cordl_internals::setInstanceField<::TMPro::TMP_ScrollbarEventHandler, 0x150>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::TMPro::TMP_ScrollbarEventHandler>(value));
}
constexpr ::TMPro::TMP_ScrollbarEventHandler ::TMPro::TMP_InputField::__get_m_VerticalScrollbarEventHandler() const {
return ::cordl_internals::getInstanceField<::TMPro::TMP_ScrollbarEventHandler, 0x150>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_InputField::__set_m_IsDrivenByLayoutComponents(bool value)  {
::cordl_internals::setInstanceField<bool, 0x158>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::TMPro::TMP_InputField::__get_m_IsDrivenByLayoutComponents() const {
return ::cordl_internals::getInstanceField<bool, 0x158>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_InputField::__set_m_LayoutGroup(::UnityEngine::UI::LayoutGroup value)  {
::cordl_internals::setInstanceField<::UnityEngine::UI::LayoutGroup, 0x160>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::UI::LayoutGroup>(value));
}
constexpr ::UnityEngine::UI::LayoutGroup ::TMPro::TMP_InputField::__get_m_LayoutGroup() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::LayoutGroup, 0x160>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_InputField::__set_m_IScrollHandlerParent(::UnityEngine::EventSystems::IScrollHandler value)  {
::cordl_internals::setInstanceField<::UnityEngine::EventSystems::IScrollHandler, 0x168>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::EventSystems::IScrollHandler>(value));
}
constexpr ::UnityEngine::EventSystems::IScrollHandler ::TMPro::TMP_InputField::__get_m_IScrollHandlerParent() const {
return ::cordl_internals::getInstanceField<::UnityEngine::EventSystems::IScrollHandler, 0x168>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_InputField::__set_m_ScrollPosition(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x170>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::TMPro::TMP_InputField::__get_m_ScrollPosition() const {
return ::cordl_internals::getInstanceField<float_t, 0x170>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_InputField::__set_m_ScrollSensitivity(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x174>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::TMPro::TMP_InputField::__get_m_ScrollSensitivity() const {
return ::cordl_internals::getInstanceField<float_t, 0x174>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_InputField::__set_m_ContentType(::TMPro::____TMPro__TMP_InputField__ContentType value)  {
::cordl_internals::setInstanceField<::TMPro::____TMPro__TMP_InputField__ContentType, 0x178>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::TMPro::____TMPro__TMP_InputField__ContentType>(value));
}
constexpr ::TMPro::____TMPro__TMP_InputField__ContentType ::TMPro::TMP_InputField::__get_m_ContentType() const {
return ::cordl_internals::getInstanceField<::TMPro::____TMPro__TMP_InputField__ContentType, 0x178>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_InputField::__set_m_InputType(::TMPro::____TMPro__TMP_InputField__InputType value)  {
::cordl_internals::setInstanceField<::TMPro::____TMPro__TMP_InputField__InputType, 0x17c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::TMPro::____TMPro__TMP_InputField__InputType>(value));
}
constexpr ::TMPro::____TMPro__TMP_InputField__InputType ::TMPro::TMP_InputField::__get_m_InputType() const {
return ::cordl_internals::getInstanceField<::TMPro::____TMPro__TMP_InputField__InputType, 0x17c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_InputField::__set_m_AsteriskChar(char16_t value)  {
::cordl_internals::setInstanceField<char16_t, 0x180>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<char16_t>(value));
}
constexpr char16_t ::TMPro::TMP_InputField::__get_m_AsteriskChar() const {
return ::cordl_internals::getInstanceField<char16_t, 0x180>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_InputField::__set_m_KeyboardType(::UnityEngine::TouchScreenKeyboardType value)  {
::cordl_internals::setInstanceField<::UnityEngine::TouchScreenKeyboardType, 0x184>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::TouchScreenKeyboardType>(value));
}
constexpr ::UnityEngine::TouchScreenKeyboardType ::TMPro::TMP_InputField::__get_m_KeyboardType() const {
return ::cordl_internals::getInstanceField<::UnityEngine::TouchScreenKeyboardType, 0x184>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_InputField::__set_m_LineType(::TMPro::____TMPro__TMP_InputField__LineType value)  {
::cordl_internals::setInstanceField<::TMPro::____TMPro__TMP_InputField__LineType, 0x188>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::TMPro::____TMPro__TMP_InputField__LineType>(value));
}
constexpr ::TMPro::____TMPro__TMP_InputField__LineType ::TMPro::TMP_InputField::__get_m_LineType() const {
return ::cordl_internals::getInstanceField<::TMPro::____TMPro__TMP_InputField__LineType, 0x188>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_InputField::__set_m_HideMobileInput(bool value)  {
::cordl_internals::setInstanceField<bool, 0x18c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::TMPro::TMP_InputField::__get_m_HideMobileInput() const {
return ::cordl_internals::getInstanceField<bool, 0x18c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_InputField::__set_m_HideSoftKeyboard(bool value)  {
::cordl_internals::setInstanceField<bool, 0x18d>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::TMPro::TMP_InputField::__get_m_HideSoftKeyboard() const {
return ::cordl_internals::getInstanceField<bool, 0x18d>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_InputField::__set_m_CharacterValidation(::TMPro::____TMPro__TMP_InputField__CharacterValidation value)  {
::cordl_internals::setInstanceField<::TMPro::____TMPro__TMP_InputField__CharacterValidation, 0x190>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::TMPro::____TMPro__TMP_InputField__CharacterValidation>(value));
}
constexpr ::TMPro::____TMPro__TMP_InputField__CharacterValidation ::TMPro::TMP_InputField::__get_m_CharacterValidation() const {
return ::cordl_internals::getInstanceField<::TMPro::____TMPro__TMP_InputField__CharacterValidation, 0x190>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_InputField::__set_m_RegexValue(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x198>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::TMPro::TMP_InputField::__get_m_RegexValue() const {
return ::cordl_internals::getInstanceField<::StringW, 0x198>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_InputField::__set_m_GlobalPointSize(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x1a0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::TMPro::TMP_InputField::__get_m_GlobalPointSize() const {
return ::cordl_internals::getInstanceField<float_t, 0x1a0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_InputField::__set_m_CharacterLimit(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x1a4>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::TMPro::TMP_InputField::__get_m_CharacterLimit() const {
return ::cordl_internals::getInstanceField<int32_t, 0x1a4>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_InputField::__set_m_OnEndEdit(::TMPro::____TMPro__TMP_InputField__SubmitEvent value)  {
::cordl_internals::setInstanceField<::TMPro::____TMPro__TMP_InputField__SubmitEvent, 0x1a8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::TMPro::____TMPro__TMP_InputField__SubmitEvent>(value));
}
constexpr ::TMPro::____TMPro__TMP_InputField__SubmitEvent ::TMPro::TMP_InputField::__get_m_OnEndEdit() const {
return ::cordl_internals::getInstanceField<::TMPro::____TMPro__TMP_InputField__SubmitEvent, 0x1a8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_InputField::__set_m_OnSubmit(::TMPro::____TMPro__TMP_InputField__SubmitEvent value)  {
::cordl_internals::setInstanceField<::TMPro::____TMPro__TMP_InputField__SubmitEvent, 0x1b0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::TMPro::____TMPro__TMP_InputField__SubmitEvent>(value));
}
constexpr ::TMPro::____TMPro__TMP_InputField__SubmitEvent ::TMPro::TMP_InputField::__get_m_OnSubmit() const {
return ::cordl_internals::getInstanceField<::TMPro::____TMPro__TMP_InputField__SubmitEvent, 0x1b0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_InputField::__set_m_OnSelect(::TMPro::____TMPro__TMP_InputField__SelectionEvent value)  {
::cordl_internals::setInstanceField<::TMPro::____TMPro__TMP_InputField__SelectionEvent, 0x1b8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::TMPro::____TMPro__TMP_InputField__SelectionEvent>(value));
}
constexpr ::TMPro::____TMPro__TMP_InputField__SelectionEvent ::TMPro::TMP_InputField::__get_m_OnSelect() const {
return ::cordl_internals::getInstanceField<::TMPro::____TMPro__TMP_InputField__SelectionEvent, 0x1b8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_InputField::__set_m_OnDeselect(::TMPro::____TMPro__TMP_InputField__SelectionEvent value)  {
::cordl_internals::setInstanceField<::TMPro::____TMPro__TMP_InputField__SelectionEvent, 0x1c0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::TMPro::____TMPro__TMP_InputField__SelectionEvent>(value));
}
constexpr ::TMPro::____TMPro__TMP_InputField__SelectionEvent ::TMPro::TMP_InputField::__get_m_OnDeselect() const {
return ::cordl_internals::getInstanceField<::TMPro::____TMPro__TMP_InputField__SelectionEvent, 0x1c0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_InputField::__set_m_OnTextSelection(::TMPro::____TMPro__TMP_InputField__TextSelectionEvent value)  {
::cordl_internals::setInstanceField<::TMPro::____TMPro__TMP_InputField__TextSelectionEvent, 0x1c8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::TMPro::____TMPro__TMP_InputField__TextSelectionEvent>(value));
}
constexpr ::TMPro::____TMPro__TMP_InputField__TextSelectionEvent ::TMPro::TMP_InputField::__get_m_OnTextSelection() const {
return ::cordl_internals::getInstanceField<::TMPro::____TMPro__TMP_InputField__TextSelectionEvent, 0x1c8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_InputField::__set_m_OnEndTextSelection(::TMPro::____TMPro__TMP_InputField__TextSelectionEvent value)  {
::cordl_internals::setInstanceField<::TMPro::____TMPro__TMP_InputField__TextSelectionEvent, 0x1d0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::TMPro::____TMPro__TMP_InputField__TextSelectionEvent>(value));
}
constexpr ::TMPro::____TMPro__TMP_InputField__TextSelectionEvent ::TMPro::TMP_InputField::__get_m_OnEndTextSelection() const {
return ::cordl_internals::getInstanceField<::TMPro::____TMPro__TMP_InputField__TextSelectionEvent, 0x1d0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_InputField::__set_m_OnValueChanged(::TMPro::____TMPro__TMP_InputField__OnChangeEvent value)  {
::cordl_internals::setInstanceField<::TMPro::____TMPro__TMP_InputField__OnChangeEvent, 0x1d8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::TMPro::____TMPro__TMP_InputField__OnChangeEvent>(value));
}
constexpr ::TMPro::____TMPro__TMP_InputField__OnChangeEvent ::TMPro::TMP_InputField::__get_m_OnValueChanged() const {
return ::cordl_internals::getInstanceField<::TMPro::____TMPro__TMP_InputField__OnChangeEvent, 0x1d8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_InputField::__set_m_OnTouchScreenKeyboardStatusChanged(::TMPro::____TMPro__TMP_InputField__TouchScreenKeyboardEvent value)  {
::cordl_internals::setInstanceField<::TMPro::____TMPro__TMP_InputField__TouchScreenKeyboardEvent, 0x1e0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::TMPro::____TMPro__TMP_InputField__TouchScreenKeyboardEvent>(value));
}
constexpr ::TMPro::____TMPro__TMP_InputField__TouchScreenKeyboardEvent ::TMPro::TMP_InputField::__get_m_OnTouchScreenKeyboardStatusChanged() const {
return ::cordl_internals::getInstanceField<::TMPro::____TMPro__TMP_InputField__TouchScreenKeyboardEvent, 0x1e0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_InputField::__set_m_OnValidateInput(::TMPro::____TMPro__TMP_InputField__OnValidateInput value)  {
::cordl_internals::setInstanceField<::TMPro::____TMPro__TMP_InputField__OnValidateInput, 0x1e8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::TMPro::____TMPro__TMP_InputField__OnValidateInput>(value));
}
constexpr ::TMPro::____TMPro__TMP_InputField__OnValidateInput ::TMPro::TMP_InputField::__get_m_OnValidateInput() const {
return ::cordl_internals::getInstanceField<::TMPro::____TMPro__TMP_InputField__OnValidateInput, 0x1e8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_InputField::__set_m_CaretColor(::UnityEngine::Color value)  {
::cordl_internals::setInstanceField<::UnityEngine::Color, 0x1f0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Color>(value));
}
constexpr ::UnityEngine::Color ::TMPro::TMP_InputField::__get_m_CaretColor() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Color, 0x1f0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_InputField::__set_m_CustomCaretColor(bool value)  {
::cordl_internals::setInstanceField<bool, 0x200>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::TMPro::TMP_InputField::__get_m_CustomCaretColor() const {
return ::cordl_internals::getInstanceField<bool, 0x200>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_InputField::__set_m_SelectionColor(::UnityEngine::Color value)  {
::cordl_internals::setInstanceField<::UnityEngine::Color, 0x204>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Color>(value));
}
constexpr ::UnityEngine::Color ::TMPro::TMP_InputField::__get_m_SelectionColor() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Color, 0x204>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_InputField::__set_m_Text(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x218>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::TMPro::TMP_InputField::__get_m_Text() const {
return ::cordl_internals::getInstanceField<::StringW, 0x218>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_InputField::__set_m_CaretBlinkRate(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x220>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::TMPro::TMP_InputField::__get_m_CaretBlinkRate() const {
return ::cordl_internals::getInstanceField<float_t, 0x220>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_InputField::__set_m_CaretWidth(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x224>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::TMPro::TMP_InputField::__get_m_CaretWidth() const {
return ::cordl_internals::getInstanceField<int32_t, 0x224>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_InputField::__set_m_ReadOnly(bool value)  {
::cordl_internals::setInstanceField<bool, 0x228>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::TMPro::TMP_InputField::__get_m_ReadOnly() const {
return ::cordl_internals::getInstanceField<bool, 0x228>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_InputField::__set_m_RichText(bool value)  {
::cordl_internals::setInstanceField<bool, 0x229>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::TMPro::TMP_InputField::__get_m_RichText() const {
return ::cordl_internals::getInstanceField<bool, 0x229>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_InputField::__set_m_StringPosition(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x22c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::TMPro::TMP_InputField::__get_m_StringPosition() const {
return ::cordl_internals::getInstanceField<int32_t, 0x22c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_InputField::__set_m_StringSelectPosition(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x230>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::TMPro::TMP_InputField::__get_m_StringSelectPosition() const {
return ::cordl_internals::getInstanceField<int32_t, 0x230>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_InputField::__set_m_CaretPosition(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x234>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::TMPro::TMP_InputField::__get_m_CaretPosition() const {
return ::cordl_internals::getInstanceField<int32_t, 0x234>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_InputField::__set_m_CaretSelectPosition(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x238>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::TMPro::TMP_InputField::__get_m_CaretSelectPosition() const {
return ::cordl_internals::getInstanceField<int32_t, 0x238>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_InputField::__set_caretRectTrans(::UnityEngine::RectTransform value)  {
::cordl_internals::setInstanceField<::UnityEngine::RectTransform, 0x240>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::RectTransform>(value));
}
constexpr ::UnityEngine::RectTransform ::TMPro::TMP_InputField::__get_caretRectTrans() const {
return ::cordl_internals::getInstanceField<::UnityEngine::RectTransform, 0x240>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_InputField::__set_m_CursorVerts(::ArrayW<::UnityEngine::UIVertex> value)  {
::cordl_internals::setInstanceField<::ArrayW<::UnityEngine::UIVertex>, 0x248>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::UnityEngine::UIVertex>>(value));
}
constexpr ::ArrayW<::UnityEngine::UIVertex> ::TMPro::TMP_InputField::__get_m_CursorVerts() const {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::UIVertex>, 0x248>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_InputField::__set_m_CachedInputRenderer(::UnityEngine::CanvasRenderer value)  {
::cordl_internals::setInstanceField<::UnityEngine::CanvasRenderer, 0x250>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::CanvasRenderer>(value));
}
constexpr ::UnityEngine::CanvasRenderer ::TMPro::TMP_InputField::__get_m_CachedInputRenderer() const {
return ::cordl_internals::getInstanceField<::UnityEngine::CanvasRenderer, 0x250>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_InputField::__set_m_LastPosition(::UnityEngine::Vector2 value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector2, 0x258>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Vector2>(value));
}
constexpr ::UnityEngine::Vector2 ::TMPro::TMP_InputField::__get_m_LastPosition() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector2, 0x258>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_InputField::__set_m_Mesh(::UnityEngine::Mesh value)  {
::cordl_internals::setInstanceField<::UnityEngine::Mesh, 0x260>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Mesh>(value));
}
constexpr ::UnityEngine::Mesh ::TMPro::TMP_InputField::__get_m_Mesh() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Mesh, 0x260>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_InputField::__set_m_AllowInput(bool value)  {
::cordl_internals::setInstanceField<bool, 0x268>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::TMPro::TMP_InputField::__get_m_AllowInput() const {
return ::cordl_internals::getInstanceField<bool, 0x268>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_InputField::__set_m_ShouldActivateNextUpdate(bool value)  {
::cordl_internals::setInstanceField<bool, 0x269>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::TMPro::TMP_InputField::__get_m_ShouldActivateNextUpdate() const {
return ::cordl_internals::getInstanceField<bool, 0x269>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_InputField::__set_m_UpdateDrag(bool value)  {
::cordl_internals::setInstanceField<bool, 0x26a>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::TMPro::TMP_InputField::__get_m_UpdateDrag() const {
return ::cordl_internals::getInstanceField<bool, 0x26a>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_InputField::__set_m_DragPositionOutOfBounds(bool value)  {
::cordl_internals::setInstanceField<bool, 0x26b>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::TMPro::TMP_InputField::__get_m_DragPositionOutOfBounds() const {
return ::cordl_internals::getInstanceField<bool, 0x26b>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_InputField::__set_m_CaretVisible(bool value)  {
::cordl_internals::setInstanceField<bool, 0x26c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::TMPro::TMP_InputField::__get_m_CaretVisible() const {
return ::cordl_internals::getInstanceField<bool, 0x26c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_InputField::__set_m_BlinkCoroutine(::UnityEngine::Coroutine value)  {
::cordl_internals::setInstanceField<::UnityEngine::Coroutine, 0x270>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Coroutine>(value));
}
constexpr ::UnityEngine::Coroutine ::TMPro::TMP_InputField::__get_m_BlinkCoroutine() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Coroutine, 0x270>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_InputField::__set_m_BlinkStartTime(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x278>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::TMPro::TMP_InputField::__get_m_BlinkStartTime() const {
return ::cordl_internals::getInstanceField<float_t, 0x278>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_InputField::__set_m_DragCoroutine(::UnityEngine::Coroutine value)  {
::cordl_internals::setInstanceField<::UnityEngine::Coroutine, 0x280>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Coroutine>(value));
}
constexpr ::UnityEngine::Coroutine ::TMPro::TMP_InputField::__get_m_DragCoroutine() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Coroutine, 0x280>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_InputField::__set_m_OriginalText(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x288>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::TMPro::TMP_InputField::__get_m_OriginalText() const {
return ::cordl_internals::getInstanceField<::StringW, 0x288>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_InputField::__set_m_WasCanceled(bool value)  {
::cordl_internals::setInstanceField<bool, 0x290>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::TMPro::TMP_InputField::__get_m_WasCanceled() const {
return ::cordl_internals::getInstanceField<bool, 0x290>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_InputField::__set_m_HasDoneFocusTransition(bool value)  {
::cordl_internals::setInstanceField<bool, 0x291>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::TMPro::TMP_InputField::__get_m_HasDoneFocusTransition() const {
return ::cordl_internals::getInstanceField<bool, 0x291>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_InputField::__set_m_WaitForSecondsRealtime(::UnityEngine::WaitForSecondsRealtime value)  {
::cordl_internals::setInstanceField<::UnityEngine::WaitForSecondsRealtime, 0x298>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::WaitForSecondsRealtime>(value));
}
constexpr ::UnityEngine::WaitForSecondsRealtime ::TMPro::TMP_InputField::__get_m_WaitForSecondsRealtime() const {
return ::cordl_internals::getInstanceField<::UnityEngine::WaitForSecondsRealtime, 0x298>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_InputField::__set_m_PreventCallback(bool value)  {
::cordl_internals::setInstanceField<bool, 0x2a0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::TMPro::TMP_InputField::__get_m_PreventCallback() const {
return ::cordl_internals::getInstanceField<bool, 0x2a0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_InputField::__set_m_TouchKeyboardAllowsInPlaceEditing(bool value)  {
::cordl_internals::setInstanceField<bool, 0x2a1>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::TMPro::TMP_InputField::__get_m_TouchKeyboardAllowsInPlaceEditing() const {
return ::cordl_internals::getInstanceField<bool, 0x2a1>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_InputField::__set_m_IsTextComponentUpdateRequired(bool value)  {
::cordl_internals::setInstanceField<bool, 0x2a2>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::TMPro::TMP_InputField::__get_m_IsTextComponentUpdateRequired() const {
return ::cordl_internals::getInstanceField<bool, 0x2a2>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_InputField::__set_m_isLastKeyBackspace(bool value)  {
::cordl_internals::setInstanceField<bool, 0x2a3>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::TMPro::TMP_InputField::__get_m_isLastKeyBackspace() const {
return ::cordl_internals::getInstanceField<bool, 0x2a3>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_InputField::__set_m_PointerDownClickStartTime(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x2a4>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::TMPro::TMP_InputField::__get_m_PointerDownClickStartTime() const {
return ::cordl_internals::getInstanceField<float_t, 0x2a4>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_InputField::__set_m_KeyDownStartTime(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x2a8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::TMPro::TMP_InputField::__get_m_KeyDownStartTime() const {
return ::cordl_internals::getInstanceField<float_t, 0x2a8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_InputField::__set_m_DoubleClickDelay(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x2ac>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::TMPro::TMP_InputField::__get_m_DoubleClickDelay() const {
return ::cordl_internals::getInstanceField<float_t, 0x2ac>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_InputField::__set_m_IsCompositionActive(bool value)  {
::cordl_internals::setInstanceField<bool, 0x2b0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::TMPro::TMP_InputField::__get_m_IsCompositionActive() const {
return ::cordl_internals::getInstanceField<bool, 0x2b0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_InputField::__set_m_ShouldUpdateIMEWindowPosition(bool value)  {
::cordl_internals::setInstanceField<bool, 0x2b1>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::TMPro::TMP_InputField::__get_m_ShouldUpdateIMEWindowPosition() const {
return ::cordl_internals::getInstanceField<bool, 0x2b1>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_InputField::__set_m_PreviousIMEInsertionLine(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x2b4>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::TMPro::TMP_InputField::__get_m_PreviousIMEInsertionLine() const {
return ::cordl_internals::getInstanceField<int32_t, 0x2b4>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_InputField::__set_m_GlobalFontAsset(::TMPro::TMP_FontAsset value)  {
::cordl_internals::setInstanceField<::TMPro::TMP_FontAsset, 0x2b8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::TMPro::TMP_FontAsset>(value));
}
constexpr ::TMPro::TMP_FontAsset ::TMPro::TMP_InputField::__get_m_GlobalFontAsset() const {
return ::cordl_internals::getInstanceField<::TMPro::TMP_FontAsset, 0x2b8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_InputField::__set_m_OnFocusSelectAll(bool value)  {
::cordl_internals::setInstanceField<bool, 0x2c0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::TMPro::TMP_InputField::__get_m_OnFocusSelectAll() const {
return ::cordl_internals::getInstanceField<bool, 0x2c0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_InputField::__set_m_isSelectAll(bool value)  {
::cordl_internals::setInstanceField<bool, 0x2c1>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::TMPro::TMP_InputField::__get_m_isSelectAll() const {
return ::cordl_internals::getInstanceField<bool, 0x2c1>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_InputField::__set_m_ResetOnDeActivation(bool value)  {
::cordl_internals::setInstanceField<bool, 0x2c2>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::TMPro::TMP_InputField::__get_m_ResetOnDeActivation() const {
return ::cordl_internals::getInstanceField<bool, 0x2c2>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_InputField::__set_m_SelectionStillActive(bool value)  {
::cordl_internals::setInstanceField<bool, 0x2c3>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::TMPro::TMP_InputField::__get_m_SelectionStillActive() const {
return ::cordl_internals::getInstanceField<bool, 0x2c3>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_InputField::__set_m_ReleaseSelection(bool value)  {
::cordl_internals::setInstanceField<bool, 0x2c4>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::TMPro::TMP_InputField::__get_m_ReleaseSelection() const {
return ::cordl_internals::getInstanceField<bool, 0x2c4>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_InputField::__set_m_PreviouslySelectedObject(::UnityEngine::GameObject value)  {
::cordl_internals::setInstanceField<::UnityEngine::GameObject, 0x2c8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::GameObject>(value));
}
constexpr ::UnityEngine::GameObject ::TMPro::TMP_InputField::__get_m_PreviouslySelectedObject() const {
return ::cordl_internals::getInstanceField<::UnityEngine::GameObject, 0x2c8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_InputField::__set_m_RestoreOriginalTextOnEscape(bool value)  {
::cordl_internals::setInstanceField<bool, 0x2d0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::TMPro::TMP_InputField::__get_m_RestoreOriginalTextOnEscape() const {
return ::cordl_internals::getInstanceField<bool, 0x2d0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_InputField::__set_m_isRichTextEditingAllowed(bool value)  {
::cordl_internals::setInstanceField<bool, 0x2d1>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::TMPro::TMP_InputField::__get_m_isRichTextEditingAllowed() const {
return ::cordl_internals::getInstanceField<bool, 0x2d1>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_InputField::__set_m_LineLimit(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x2d4>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::TMPro::TMP_InputField::__get_m_LineLimit() const {
return ::cordl_internals::getInstanceField<int32_t, 0x2d4>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_InputField::__set_m_InputValidator(::TMPro::TMP_InputValidator value)  {
::cordl_internals::setInstanceField<::TMPro::TMP_InputValidator, 0x2d8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::TMPro::TMP_InputValidator>(value));
}
constexpr ::TMPro::TMP_InputValidator ::TMPro::TMP_InputField::__get_m_InputValidator() const {
return ::cordl_internals::getInstanceField<::TMPro::TMP_InputValidator, 0x2d8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_InputField::__set_m_isSelected(bool value)  {
::cordl_internals::setInstanceField<bool, 0x2e0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::TMPro::TMP_InputField::__get_m_isSelected() const {
return ::cordl_internals::getInstanceField<bool, 0x2e0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_InputField::__set_m_IsStringPositionDirty(bool value)  {
::cordl_internals::setInstanceField<bool, 0x2e1>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::TMPro::TMP_InputField::__get_m_IsStringPositionDirty() const {
return ::cordl_internals::getInstanceField<bool, 0x2e1>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_InputField::__set_m_IsCaretPositionDirty(bool value)  {
::cordl_internals::setInstanceField<bool, 0x2e2>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::TMPro::TMP_InputField::__get_m_IsCaretPositionDirty() const {
return ::cordl_internals::getInstanceField<bool, 0x2e2>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_InputField::__set_m_forceRectTransformAdjustment(bool value)  {
::cordl_internals::setInstanceField<bool, 0x2e3>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::TMPro::TMP_InputField::__get_m_forceRectTransformAdjustment() const {
return ::cordl_internals::getInstanceField<bool, 0x2e3>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_InputField::__set_m_ProcessingEvent(::UnityEngine::Event value)  {
::cordl_internals::setInstanceField<::UnityEngine::Event, 0x2e8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Event>(value));
}
constexpr ::UnityEngine::Event ::TMPro::TMP_InputField::__get_m_ProcessingEvent() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Event, 0x2e8>(this->::bs_hook::Il2CppWrapperType::instance);
}
 ::UnityEngine::EventSystems::BaseInput ::TMPro::TMP_InputField::get_inputSystem()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "get_inputSystem",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::EventSystems::BaseInput, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW ::TMPro::TMP_InputField::get_compositionString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "get_compositionString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t ::TMPro::TMP_InputField::get_compositionLength()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "get_compositionLength",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 ::TMPro::TMP_InputField::TMP_InputField()  : ::UnityEngine::UI::Selectable(THROW_UNLESS(::il2cpp_utils::New<TMP_InputField>())) {}
 void ::TMPro::TMP_InputField::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::UnityEngine::Mesh ::TMPro::TMP_InputField::get_mesh()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "get_mesh",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Mesh, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::TMPro::TMP_InputField::get_shouldHideMobileInput()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "get_shouldHideMobileInput",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::TMPro::TMP_InputField::set_shouldHideMobileInput(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "set_shouldHideMobileInput",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 bool ::TMPro::TMP_InputField::get_shouldHideSoftKeyboard()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "get_shouldHideSoftKeyboard",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::TMPro::TMP_InputField::set_shouldHideSoftKeyboard(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "set_shouldHideSoftKeyboard",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 bool ::TMPro::TMP_InputField::isKeyboardUsingEvents()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "isKeyboardUsingEvents",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW ::TMPro::TMP_InputField::get_text()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "get_text",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::TMPro::TMP_InputField::set_text(::StringW value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "set_text",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void ::TMPro::TMP_InputField::SetTextWithoutNotify(::StringW input)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "SetTextWithoutNotify",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, input);
}
/// @param sendCallback: bool (default: true)
 void ::TMPro::TMP_InputField::SetText(::StringW value, bool sendCallback)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "SetText",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value, sendCallback);
}
 bool ::TMPro::TMP_InputField::get_isFocused()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "get_isFocused",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 float_t ::TMPro::TMP_InputField::get_caretBlinkRate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "get_caretBlinkRate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::TMPro::TMP_InputField::set_caretBlinkRate(float_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "set_caretBlinkRate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 int32_t ::TMPro::TMP_InputField::get_caretWidth()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "get_caretWidth",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::TMPro::TMP_InputField::set_caretWidth(int32_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "set_caretWidth",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::UnityEngine::RectTransform ::TMPro::TMP_InputField::get_textViewport()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "get_textViewport",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::RectTransform, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::TMPro::TMP_InputField::set_textViewport(::UnityEngine::RectTransform value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "set_textViewport",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RectTransform>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::TMPro::TMP_Text ::TMPro::TMP_InputField::get_textComponent()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "get_textComponent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::TMPro::TMP_Text, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::TMPro::TMP_InputField::set_textComponent(::TMPro::TMP_Text value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "set_textComponent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::TMP_Text>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::UnityEngine::UI::Graphic ::TMPro::TMP_InputField::get_placeholder()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "get_placeholder",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UI::Graphic, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::TMPro::TMP_InputField::set_placeholder(::UnityEngine::UI::Graphic value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "set_placeholder",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::Graphic>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::UnityEngine::UI::Scrollbar ::TMPro::TMP_InputField::get_verticalScrollbar()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "get_verticalScrollbar",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UI::Scrollbar, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::TMPro::TMP_InputField::set_verticalScrollbar(::UnityEngine::UI::Scrollbar value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "set_verticalScrollbar",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::Scrollbar>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 float_t ::TMPro::TMP_InputField::get_scrollSensitivity()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "get_scrollSensitivity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::TMPro::TMP_InputField::set_scrollSensitivity(float_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "set_scrollSensitivity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::UnityEngine::Color ::TMPro::TMP_InputField::get_caretColor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "get_caretColor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::TMPro::TMP_InputField::set_caretColor(::UnityEngine::Color value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "set_caretColor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 bool ::TMPro::TMP_InputField::get_customCaretColor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "get_customCaretColor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::TMPro::TMP_InputField::set_customCaretColor(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "set_customCaretColor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::UnityEngine::Color ::TMPro::TMP_InputField::get_selectionColor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "get_selectionColor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::TMPro::TMP_InputField::set_selectionColor(::UnityEngine::Color value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "set_selectionColor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::TMPro::____TMPro__TMP_InputField__SubmitEvent ::TMPro::TMP_InputField::get_onEndEdit()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "get_onEndEdit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::TMPro::____TMPro__TMP_InputField__SubmitEvent, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::TMPro::TMP_InputField::set_onEndEdit(::TMPro::____TMPro__TMP_InputField__SubmitEvent value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "set_onEndEdit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::____TMPro__TMP_InputField__SubmitEvent>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::TMPro::____TMPro__TMP_InputField__SubmitEvent ::TMPro::TMP_InputField::get_onSubmit()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "get_onSubmit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::TMPro::____TMPro__TMP_InputField__SubmitEvent, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::TMPro::TMP_InputField::set_onSubmit(::TMPro::____TMPro__TMP_InputField__SubmitEvent value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "set_onSubmit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::____TMPro__TMP_InputField__SubmitEvent>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::TMPro::____TMPro__TMP_InputField__SelectionEvent ::TMPro::TMP_InputField::get_onSelect()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "get_onSelect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::TMPro::____TMPro__TMP_InputField__SelectionEvent, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::TMPro::TMP_InputField::set_onSelect(::TMPro::____TMPro__TMP_InputField__SelectionEvent value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "set_onSelect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::____TMPro__TMP_InputField__SelectionEvent>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::TMPro::____TMPro__TMP_InputField__SelectionEvent ::TMPro::TMP_InputField::get_onDeselect()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "get_onDeselect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::TMPro::____TMPro__TMP_InputField__SelectionEvent, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::TMPro::TMP_InputField::set_onDeselect(::TMPro::____TMPro__TMP_InputField__SelectionEvent value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "set_onDeselect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::____TMPro__TMP_InputField__SelectionEvent>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::TMPro::____TMPro__TMP_InputField__TextSelectionEvent ::TMPro::TMP_InputField::get_onTextSelection()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "get_onTextSelection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::TMPro::____TMPro__TMP_InputField__TextSelectionEvent, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::TMPro::TMP_InputField::set_onTextSelection(::TMPro::____TMPro__TMP_InputField__TextSelectionEvent value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "set_onTextSelection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::____TMPro__TMP_InputField__TextSelectionEvent>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::TMPro::____TMPro__TMP_InputField__TextSelectionEvent ::TMPro::TMP_InputField::get_onEndTextSelection()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "get_onEndTextSelection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::TMPro::____TMPro__TMP_InputField__TextSelectionEvent, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::TMPro::TMP_InputField::set_onEndTextSelection(::TMPro::____TMPro__TMP_InputField__TextSelectionEvent value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "set_onEndTextSelection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::____TMPro__TMP_InputField__TextSelectionEvent>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::TMPro::____TMPro__TMP_InputField__OnChangeEvent ::TMPro::TMP_InputField::get_onValueChanged()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "get_onValueChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::TMPro::____TMPro__TMP_InputField__OnChangeEvent, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::TMPro::TMP_InputField::set_onValueChanged(::TMPro::____TMPro__TMP_InputField__OnChangeEvent value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "set_onValueChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::____TMPro__TMP_InputField__OnChangeEvent>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::TMPro::____TMPro__TMP_InputField__TouchScreenKeyboardEvent ::TMPro::TMP_InputField::get_onTouchScreenKeyboardStatusChanged()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "get_onTouchScreenKeyboardStatusChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::TMPro::____TMPro__TMP_InputField__TouchScreenKeyboardEvent, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::TMPro::TMP_InputField::set_onTouchScreenKeyboardStatusChanged(::TMPro::____TMPro__TMP_InputField__TouchScreenKeyboardEvent value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "set_onTouchScreenKeyboardStatusChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::____TMPro__TMP_InputField__TouchScreenKeyboardEvent>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::TMPro::____TMPro__TMP_InputField__OnValidateInput ::TMPro::TMP_InputField::get_onValidateInput()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "get_onValidateInput",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::TMPro::____TMPro__TMP_InputField__OnValidateInput, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::TMPro::TMP_InputField::set_onValidateInput(::TMPro::____TMPro__TMP_InputField__OnValidateInput value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "set_onValidateInput",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::____TMPro__TMP_InputField__OnValidateInput>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 int32_t ::TMPro::TMP_InputField::get_characterLimit()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "get_characterLimit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::TMPro::TMP_InputField::set_characterLimit(int32_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "set_characterLimit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 float_t ::TMPro::TMP_InputField::get_pointSize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "get_pointSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::TMPro::TMP_InputField::set_pointSize(float_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "set_pointSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::TMPro::TMP_FontAsset ::TMPro::TMP_InputField::get_fontAsset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "get_fontAsset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::TMPro::TMP_FontAsset, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::TMPro::TMP_InputField::set_fontAsset(::TMPro::TMP_FontAsset value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "set_fontAsset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::TMP_FontAsset>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 bool ::TMPro::TMP_InputField::get_onFocusSelectAll()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "get_onFocusSelectAll",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::TMPro::TMP_InputField::set_onFocusSelectAll(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "set_onFocusSelectAll",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 bool ::TMPro::TMP_InputField::get_resetOnDeActivation()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "get_resetOnDeActivation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::TMPro::TMP_InputField::set_resetOnDeActivation(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "set_resetOnDeActivation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 bool ::TMPro::TMP_InputField::get_restoreOriginalTextOnEscape()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "get_restoreOriginalTextOnEscape",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::TMPro::TMP_InputField::set_restoreOriginalTextOnEscape(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "set_restoreOriginalTextOnEscape",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 bool ::TMPro::TMP_InputField::get_isRichTextEditingAllowed()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "get_isRichTextEditingAllowed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::TMPro::TMP_InputField::set_isRichTextEditingAllowed(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "set_isRichTextEditingAllowed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::TMPro::____TMPro__TMP_InputField__ContentType ::TMPro::TMP_InputField::get_contentType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "get_contentType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::TMPro::____TMPro__TMP_InputField__ContentType, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::TMPro::TMP_InputField::set_contentType(::TMPro::____TMPro__TMP_InputField__ContentType value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "set_contentType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::____TMPro__TMP_InputField__ContentType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::TMPro::____TMPro__TMP_InputField__LineType ::TMPro::TMP_InputField::get_lineType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "get_lineType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::TMPro::____TMPro__TMP_InputField__LineType, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::TMPro::TMP_InputField::set_lineType(::TMPro::____TMPro__TMP_InputField__LineType value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "set_lineType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::____TMPro__TMP_InputField__LineType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 int32_t ::TMPro::TMP_InputField::get_lineLimit()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "get_lineLimit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::TMPro::TMP_InputField::set_lineLimit(int32_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "set_lineLimit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::TMPro::____TMPro__TMP_InputField__InputType ::TMPro::TMP_InputField::get_inputType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "get_inputType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::TMPro::____TMPro__TMP_InputField__InputType, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::TMPro::TMP_InputField::set_inputType(::TMPro::____TMPro__TMP_InputField__InputType value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "set_inputType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::____TMPro__TMP_InputField__InputType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::UnityEngine::TouchScreenKeyboardType ::TMPro::TMP_InputField::get_keyboardType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "get_keyboardType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::TouchScreenKeyboardType, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::TMPro::TMP_InputField::set_keyboardType(::UnityEngine::TouchScreenKeyboardType value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "set_keyboardType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TouchScreenKeyboardType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::TMPro::____TMPro__TMP_InputField__CharacterValidation ::TMPro::TMP_InputField::get_characterValidation()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "get_characterValidation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::TMPro::____TMPro__TMP_InputField__CharacterValidation, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::TMPro::TMP_InputField::set_characterValidation(::TMPro::____TMPro__TMP_InputField__CharacterValidation value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "set_characterValidation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::____TMPro__TMP_InputField__CharacterValidation>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::TMPro::TMP_InputValidator ::TMPro::TMP_InputField::get_inputValidator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "get_inputValidator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::TMPro::TMP_InputValidator, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::TMPro::TMP_InputField::set_inputValidator(::TMPro::TMP_InputValidator value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "set_inputValidator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::TMP_InputValidator>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 bool ::TMPro::TMP_InputField::get_readOnly()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "get_readOnly",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::TMPro::TMP_InputField::set_readOnly(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "set_readOnly",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 bool ::TMPro::TMP_InputField::get_richText()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "get_richText",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::TMPro::TMP_InputField::set_richText(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "set_richText",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 bool ::TMPro::TMP_InputField::get_multiLine()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "get_multiLine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 char16_t ::TMPro::TMP_InputField::get_asteriskChar()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "get_asteriskChar",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<char16_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::TMPro::TMP_InputField::set_asteriskChar(char16_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "set_asteriskChar",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 bool ::TMPro::TMP_InputField::get_wasCanceled()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "get_wasCanceled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::TMPro::TMP_InputField::ClampStringPos(ByRef<int32_t> pos)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "ClampStringPos",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, pos);
}
 void ::TMPro::TMP_InputField::ClampCaretPos(ByRef<int32_t> pos)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "ClampCaretPos",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, pos);
}
 int32_t ::TMPro::TMP_InputField::get_caretPositionInternal()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "get_caretPositionInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::TMPro::TMP_InputField::set_caretPositionInternal(int32_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "set_caretPositionInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 int32_t ::TMPro::TMP_InputField::get_stringPositionInternal()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "get_stringPositionInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::TMPro::TMP_InputField::set_stringPositionInternal(int32_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "set_stringPositionInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 int32_t ::TMPro::TMP_InputField::get_caretSelectPositionInternal()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "get_caretSelectPositionInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::TMPro::TMP_InputField::set_caretSelectPositionInternal(int32_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "set_caretSelectPositionInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 int32_t ::TMPro::TMP_InputField::get_stringSelectPositionInternal()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "get_stringSelectPositionInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::TMPro::TMP_InputField::set_stringSelectPositionInternal(int32_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "set_stringSelectPositionInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 bool ::TMPro::TMP_InputField::get_hasSelection()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "get_hasSelection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t ::TMPro::TMP_InputField::get_caretPosition()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "get_caretPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::TMPro::TMP_InputField::set_caretPosition(int32_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "set_caretPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 int32_t ::TMPro::TMP_InputField::get_selectionAnchorPosition()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "get_selectionAnchorPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::TMPro::TMP_InputField::set_selectionAnchorPosition(int32_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "set_selectionAnchorPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 int32_t ::TMPro::TMP_InputField::get_selectionFocusPosition()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "get_selectionFocusPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::TMPro::TMP_InputField::set_selectionFocusPosition(int32_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "set_selectionFocusPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 int32_t ::TMPro::TMP_InputField::get_stringPosition()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "get_stringPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::TMPro::TMP_InputField::set_stringPosition(int32_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "set_stringPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 int32_t ::TMPro::TMP_InputField::get_selectionStringAnchorPosition()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "get_selectionStringAnchorPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::TMPro::TMP_InputField::set_selectionStringAnchorPosition(int32_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "set_selectionStringAnchorPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 int32_t ::TMPro::TMP_InputField::get_selectionStringFocusPosition()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "get_selectionStringFocusPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::TMPro::TMP_InputField::set_selectionStringFocusPosition(int32_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "set_selectionStringFocusPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void ::TMPro::TMP_InputField::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "OnEnable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::TMPro::TMP_InputField::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "OnDisable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::TMPro::TMP_InputField::ON_TEXT_CHANGED(::UnityEngine::Object obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "ON_TEXT_CHANGED",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Object>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, obj);
}
 ::System::Collections::IEnumerator ::TMPro::TMP_InputField::CaretBlink()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "CaretBlink",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::TMPro::TMP_InputField::SetCaretVisible()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "SetCaretVisible",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::TMPro::TMP_InputField::SetCaretActive()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "SetCaretActive",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::TMPro::TMP_InputField::OnFocus()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "OnFocus",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::TMPro::TMP_InputField::SelectAll()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "SelectAll",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::TMPro::TMP_InputField::MoveTextEnd(bool shift)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "MoveTextEnd",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, shift);
}
 void ::TMPro::TMP_InputField::MoveTextStart(bool shift)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "MoveTextStart",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, shift);
}
 void ::TMPro::TMP_InputField::MoveToEndOfLine(bool shift, bool ctrl)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "MoveToEndOfLine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, shift, ctrl);
}
 void ::TMPro::TMP_InputField::MoveToStartOfLine(bool shift, bool ctrl)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "MoveToStartOfLine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, shift, ctrl);
}
 ::StringW ::TMPro::TMP_InputField::get_clipboard()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "get_clipboard",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method);
}
 void ::TMPro::TMP_InputField::set_clipboard(::StringW value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "set_clipboard",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
 bool ::TMPro::TMP_InputField::InPlaceEditing()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "InPlaceEditing",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::TMPro::TMP_InputField::UpdateStringPositionFromKeyboard()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "UpdateStringPositionFromKeyboard",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::TMPro::TMP_InputField::LateUpdate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "LateUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::TMPro::TMP_InputField::MayDrag(::UnityEngine::EventSystems::PointerEventData eventData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "MayDrag",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::PointerEventData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, eventData);
}
 void ::TMPro::TMP_InputField::OnBeginDrag(::UnityEngine::EventSystems::PointerEventData eventData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "OnBeginDrag",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::PointerEventData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, eventData);
}
 void ::TMPro::TMP_InputField::OnDrag(::UnityEngine::EventSystems::PointerEventData eventData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "OnDrag",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::PointerEventData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, eventData);
}
 ::System::Collections::IEnumerator ::TMPro::TMP_InputField::MouseDragOutsideRect(::UnityEngine::EventSystems::PointerEventData eventData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "MouseDragOutsideRect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::PointerEventData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator, false>(const_cast<void*>(instance), ___internal_method, eventData);
}
 void ::TMPro::TMP_InputField::OnEndDrag(::UnityEngine::EventSystems::PointerEventData eventData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "OnEndDrag",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::PointerEventData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, eventData);
}
 void ::TMPro::TMP_InputField::OnPointerDown(::UnityEngine::EventSystems::PointerEventData eventData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "OnPointerDown",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::PointerEventData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, eventData);
}
 ::TMPro::____TMPro__TMP_InputField__EditState ::TMPro::TMP_InputField::KeyPressed(::UnityEngine::Event evt)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "KeyPressed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Event>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::TMPro::____TMPro__TMP_InputField__EditState, false>(const_cast<void*>(instance), ___internal_method, evt);
}
 bool ::TMPro::TMP_InputField::IsValidChar(char16_t c)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "IsValidChar",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, c);
}
 void ::TMPro::TMP_InputField::ProcessEvent(::UnityEngine::Event e)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "ProcessEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Event>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, e);
}
 void ::TMPro::TMP_InputField::OnUpdateSelected(::UnityEngine::EventSystems::BaseEventData eventData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "OnUpdateSelected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::BaseEventData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, eventData);
}
 void ::TMPro::TMP_InputField::OnScroll(::UnityEngine::EventSystems::PointerEventData eventData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "OnScroll",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::PointerEventData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, eventData);
}
 float_t ::TMPro::TMP_InputField::GetScrollPositionRelativeToViewport()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "GetScrollPositionRelativeToViewport",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW ::TMPro::TMP_InputField::GetSelectedString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "GetSelectedString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t ::TMPro::TMP_InputField::FindNextWordBegin()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "FindNextWordBegin",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::TMPro::TMP_InputField::MoveRight(bool shift, bool ctrl)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "MoveRight",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, shift, ctrl);
}
 int32_t ::TMPro::TMP_InputField::FindPrevWordBegin()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "FindPrevWordBegin",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::TMPro::TMP_InputField::MoveLeft(bool shift, bool ctrl)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "MoveLeft",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, shift, ctrl);
}
 int32_t ::TMPro::TMP_InputField::LineUpCharacterPosition(int32_t originalPos, bool goToFirstChar)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "LineUpCharacterPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, originalPos, goToFirstChar);
}
 int32_t ::TMPro::TMP_InputField::LineDownCharacterPosition(int32_t originalPos, bool goToLastChar)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "LineDownCharacterPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, originalPos, goToLastChar);
}
 int32_t ::TMPro::TMP_InputField::PageUpCharacterPosition(int32_t originalPos, bool goToFirstChar)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "PageUpCharacterPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, originalPos, goToFirstChar);
}
 int32_t ::TMPro::TMP_InputField::PageDownCharacterPosition(int32_t originalPos, bool goToLastChar)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "PageDownCharacterPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, originalPos, goToLastChar);
}
 void ::TMPro::TMP_InputField::MoveDown(bool shift)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "MoveDown",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, shift);
}
 void ::TMPro::TMP_InputField::MoveDown(bool shift, bool goToLastChar)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "MoveDown",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, shift, goToLastChar);
}
 void ::TMPro::TMP_InputField::MoveUp(bool shift)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "MoveUp",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, shift);
}
 void ::TMPro::TMP_InputField::MoveUp(bool shift, bool goToFirstChar)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "MoveUp",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, shift, goToFirstChar);
}
 void ::TMPro::TMP_InputField::MovePageUp(bool shift)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "MovePageUp",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, shift);
}
 void ::TMPro::TMP_InputField::MovePageUp(bool shift, bool goToFirstChar)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "MovePageUp",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, shift, goToFirstChar);
}
 void ::TMPro::TMP_InputField::MovePageDown(bool shift)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "MovePageDown",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, shift);
}
 void ::TMPro::TMP_InputField::MovePageDown(bool shift, bool goToLastChar)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "MovePageDown",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, shift, goToLastChar);
}
 void ::TMPro::TMP_InputField::Delete()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "Delete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::TMPro::TMP_InputField::DeleteKey()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "DeleteKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::TMPro::TMP_InputField::Backspace()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "Backspace",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::TMPro::TMP_InputField::Append(::StringW input)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "Append",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, input);
}
 void ::TMPro::TMP_InputField::Append(char16_t input)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "Append",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, input);
}
 void ::TMPro::TMP_InputField::Insert(char16_t c)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "Insert",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, c);
}
 void ::TMPro::TMP_InputField::UpdateTouchKeyboardFromEditChanges()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "UpdateTouchKeyboardFromEditChanges",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::TMPro::TMP_InputField::SendOnValueChangedAndUpdateLabel()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "SendOnValueChangedAndUpdateLabel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::TMPro::TMP_InputField::SendOnValueChanged()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "SendOnValueChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::TMPro::TMP_InputField::SendOnEndEdit()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "SendOnEndEdit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::TMPro::TMP_InputField::SendOnSubmit()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "SendOnSubmit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::TMPro::TMP_InputField::SendOnFocus()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "SendOnFocus",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::TMPro::TMP_InputField::SendOnFocusLost()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "SendOnFocusLost",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::TMPro::TMP_InputField::SendOnTextSelection()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "SendOnTextSelection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::TMPro::TMP_InputField::SendOnEndTextSelection()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "SendOnEndTextSelection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::TMPro::TMP_InputField::SendTouchScreenKeyboardStatusChanged()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "SendTouchScreenKeyboardStatusChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::TMPro::TMP_InputField::UpdateLabel()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "UpdateLabel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::TMPro::TMP_InputField::UpdateScrollbar()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "UpdateScrollbar",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::TMPro::TMP_InputField::OnScrollbarValueChange(float_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "OnScrollbarValueChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void ::TMPro::TMP_InputField::UpdateMaskRegions()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "UpdateMaskRegions",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::TMPro::TMP_InputField::AdjustTextPositionRelativeToViewport(float_t relativePosition)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "AdjustTextPositionRelativeToViewport",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, relativePosition);
}
 int32_t ::TMPro::TMP_InputField::GetCaretPositionFromStringIndex(int32_t stringIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "GetCaretPositionFromStringIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, stringIndex);
}
 int32_t ::TMPro::TMP_InputField::GetMinCaretPositionFromStringIndex(int32_t stringIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "GetMinCaretPositionFromStringIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, stringIndex);
}
 int32_t ::TMPro::TMP_InputField::GetMaxCaretPositionFromStringIndex(int32_t stringIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "GetMaxCaretPositionFromStringIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, stringIndex);
}
 int32_t ::TMPro::TMP_InputField::GetStringIndexFromCaretPosition(int32_t caretPosition)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "GetStringIndexFromCaretPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, caretPosition);
}
 void ::TMPro::TMP_InputField::ForceLabelUpdate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "ForceLabelUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::TMPro::TMP_InputField::MarkGeometryAsDirty()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "MarkGeometryAsDirty",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::TMPro::TMP_InputField::Rebuild(::UnityEngine::UI::CanvasUpdate update)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "Rebuild",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::CanvasUpdate>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, update);
}
 void ::TMPro::TMP_InputField::LayoutComplete()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "LayoutComplete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::TMPro::TMP_InputField::GraphicUpdateComplete()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "GraphicUpdateComplete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::TMPro::TMP_InputField::UpdateGeometry()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "UpdateGeometry",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::TMPro::TMP_InputField::AssignPositioningIfNeeded()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "AssignPositioningIfNeeded",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::TMPro::TMP_InputField::OnFillVBO(::UnityEngine::Mesh vbo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "OnFillVBO",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Mesh>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, vbo);
}
 void ::TMPro::TMP_InputField::GenerateCaret(::UnityEngine::UI::VertexHelper vbo, ::UnityEngine::Vector2 roundingOffset)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "GenerateCaret",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::VertexHelper>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, vbo, roundingOffset);
}
 void ::TMPro::TMP_InputField::CreateCursorVerts()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "CreateCursorVerts",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::TMPro::TMP_InputField::GenerateHightlight(::UnityEngine::UI::VertexHelper vbo, ::UnityEngine::Vector2 roundingOffset)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "GenerateHightlight",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::VertexHelper>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, vbo, roundingOffset);
}
 void ::TMPro::TMP_InputField::AdjustRectTransformRelativeToViewport(::UnityEngine::Vector2 startPosition, float_t height, bool isCharVisible)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "AdjustRectTransformRelativeToViewport",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, startPosition, height, isCharVisible);
}
 char16_t ::TMPro::TMP_InputField::Validate(::StringW text, int32_t pos, char16_t ch)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "Validate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<char16_t, false>(const_cast<void*>(instance), ___internal_method, text, pos, ch);
}
 void ::TMPro::TMP_InputField::ActivateInputField()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "ActivateInputField",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::TMPro::TMP_InputField::ActivateInputFieldInternal()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "ActivateInputFieldInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::TMPro::TMP_InputField::OnSelect(::UnityEngine::EventSystems::BaseEventData eventData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "OnSelect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::BaseEventData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, eventData);
}
 void ::TMPro::TMP_InputField::OnPointerClick(::UnityEngine::EventSystems::PointerEventData eventData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "OnPointerClick",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::PointerEventData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, eventData);
}
 void ::TMPro::TMP_InputField::OnControlClick()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "OnControlClick",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::TMPro::TMP_InputField::ReleaseSelection()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "ReleaseSelection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
/// @param clearSelection: bool (default: false)
 void ::TMPro::TMP_InputField::DeactivateInputField(bool clearSelection)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "DeactivateInputField",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, clearSelection);
}
 void ::TMPro::TMP_InputField::OnDeselect(::UnityEngine::EventSystems::BaseEventData eventData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "OnDeselect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::BaseEventData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, eventData);
}
 void ::TMPro::TMP_InputField::OnSubmit(::UnityEngine::EventSystems::BaseEventData eventData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "OnSubmit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::BaseEventData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, eventData);
}
 void ::TMPro::TMP_InputField::EnforceContentType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "EnforceContentType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::TMPro::TMP_InputField::SetTextComponentWrapMode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "SetTextComponentWrapMode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::TMPro::TMP_InputField::SetTextComponentRichTextMode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "SetTextComponentRichTextMode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::TMPro::TMP_InputField::SetToCustomIfContentTypeIsNot(::ArrayW<::TMPro::____TMPro__TMP_InputField__ContentType> allowedContentTypes)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "SetToCustomIfContentTypeIsNot",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::TMPro::____TMPro__TMP_InputField__ContentType>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, allowedContentTypes);
}
 void ::TMPro::TMP_InputField::SetToCustom()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "SetToCustom",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::TMPro::TMP_InputField::SetToCustom(::TMPro::____TMPro__TMP_InputField__CharacterValidation characterValidation)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "SetToCustom",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::____TMPro__TMP_InputField__CharacterValidation>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, characterValidation);
}
 void ::TMPro::TMP_InputField::DoStateTransition(::UnityEngine::UI::____UnityEngine__UI__Selectable__SelectionState state, bool instant)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "DoStateTransition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::____UnityEngine__UI__Selectable__SelectionState>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, state, instant);
}
 void ::TMPro::TMP_InputField::CalculateLayoutInputHorizontal()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "CalculateLayoutInputHorizontal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::TMPro::TMP_InputField::CalculateLayoutInputVertical()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "CalculateLayoutInputVertical",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 float_t ::TMPro::TMP_InputField::get_minWidth()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "get_minWidth",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 float_t ::TMPro::TMP_InputField::get_preferredWidth()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "get_preferredWidth",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 float_t ::TMPro::TMP_InputField::get_flexibleWidth()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "get_flexibleWidth",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 float_t ::TMPro::TMP_InputField::get_minHeight()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "get_minHeight",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 float_t ::TMPro::TMP_InputField::get_preferredHeight()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "get_preferredHeight",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 float_t ::TMPro::TMP_InputField::get_flexibleHeight()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "get_flexibleHeight",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t ::TMPro::TMP_InputField::get_layoutPriority()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "get_layoutPriority",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::TMPro::TMP_InputField::SetGlobalPointSize(float_t pointSize)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "SetGlobalPointSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, pointSize);
}
 void ::TMPro::TMP_InputField::SetGlobalFontAsset(::TMPro::TMP_FontAsset fontAsset)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "SetGlobalFontAsset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::TMP_FontAsset>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, fontAsset);
}
 ::UnityEngine::Transform ::TMPro::TMP_InputField::UnityEngine_UI_ICanvasElement_get_transform()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_InputField>::get(),
                            "UnityEngine.UI.ICanvasElement.get_transform",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Transform, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
