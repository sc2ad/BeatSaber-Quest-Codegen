#pragma once
#include "UnityEngine/UIElements/zzzz__BaseFieldTraits_2_impl.hpp"
#include "UnityEngine/UIElements/zzzz__BaseField_1_impl.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_impl.hpp"
namespace {
#include "UnityEngine/UIElements/zzzz__TextInputBaseField_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__AttachToPanelEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__CustomStyleProperty_1_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/UIElements/zzzz__CustomStyleResolvedEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__EventBase_def.hpp"
#include "UnityEngine/UIElements/zzzz__ITextHandle_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__ITextElement_def.hpp"
#include "UnityEngine/UIElements/zzzz__DropdownMenuAction_def.hpp"
#include "UnityEngine/UIElements/zzzz__IVisualElementScheduledItem_def.hpp"
#include "UnityEngine/UIElements/zzzz__TextEditorEngine_def.hpp"
#include "UnityEngine/UIElements/zzzz__ITextInputField_def.hpp"
#include "UnityEngine/UIElements/zzzz__MeshGenerationContext_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/UIElements/zzzz__ContextualMenuPopulateEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__TextEditorEventHandler_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
#include "UnityEngine/zzzz__RectOffset_def.hpp"
#include "UnityEngine/zzzz__GUIStyle_def.hpp"
#include "UnityEngine/UIElements/zzzz__IEventHandler_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
#include "UnityEngine/UIElements/zzzz__GeometryChangedEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__DropdownMenuAction_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlIntAttributeDescription_def.hpp"
#include "UnityEngine/UIElements/zzzz__CreationContext_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlStringAttributeDescription_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlBoolAttributeDescription_def.hpp"
#include "UnityEngine/UIElements/zzzz__IUxmlAttributes_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__UxmlTraits.Init
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__UxmlTraits::*)(::UnityEngine::UIElements::VisualElement, ::UnityEngine::UIElements::IUxmlAttributes, ::UnityEngine::UIElements::CreationContext)>(&::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__UxmlTraits::Init)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__UxmlTraits),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__UxmlTraits>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__UxmlTraits._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__UxmlTraits::*)()>(&::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__UxmlTraits::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__UxmlTraits>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__UxmlTraits::__set_m_MaxLength(::UnityEngine::UIElements::UxmlIntAttributeDescription value)  {
::cordl_internals::setInstanceField<::UnityEngine::UIElements::UxmlIntAttributeDescription, 0x88>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::UIElements::UxmlIntAttributeDescription>(value));
}
constexpr ::UnityEngine::UIElements::UxmlIntAttributeDescription ::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__UxmlTraits::__get_m_MaxLength() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::UxmlIntAttributeDescription, 0x88>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__UxmlTraits::__set_m_Password(::UnityEngine::UIElements::UxmlBoolAttributeDescription value)  {
::cordl_internals::setInstanceField<::UnityEngine::UIElements::UxmlBoolAttributeDescription, 0x90>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::UIElements::UxmlBoolAttributeDescription>(value));
}
constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription ::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__UxmlTraits::__get_m_Password() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::UxmlBoolAttributeDescription, 0x90>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__UxmlTraits::__set_m_MaskCharacter(::UnityEngine::UIElements::UxmlStringAttributeDescription value)  {
::cordl_internals::setInstanceField<::UnityEngine::UIElements::UxmlStringAttributeDescription, 0x98>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::UIElements::UxmlStringAttributeDescription>(value));
}
constexpr ::UnityEngine::UIElements::UxmlStringAttributeDescription ::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__UxmlTraits::__get_m_MaskCharacter() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::UxmlStringAttributeDescription, 0x98>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__UxmlTraits::__set_m_Text(::UnityEngine::UIElements::UxmlStringAttributeDescription value)  {
::cordl_internals::setInstanceField<::UnityEngine::UIElements::UxmlStringAttributeDescription, 0xa0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::UIElements::UxmlStringAttributeDescription>(value));
}
constexpr ::UnityEngine::UIElements::UxmlStringAttributeDescription ::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__UxmlTraits::__get_m_Text() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::UxmlStringAttributeDescription, 0xa0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__UxmlTraits::__set_m_IsReadOnly(::UnityEngine::UIElements::UxmlBoolAttributeDescription value)  {
::cordl_internals::setInstanceField<::UnityEngine::UIElements::UxmlBoolAttributeDescription, 0xa8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::UIElements::UxmlBoolAttributeDescription>(value));
}
constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription ::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__UxmlTraits::__get_m_IsReadOnly() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::UxmlBoolAttributeDescription, 0xa8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__UxmlTraits::__set_m_IsDelayed(::UnityEngine::UIElements::UxmlBoolAttributeDescription value)  {
::cordl_internals::setInstanceField<::UnityEngine::UIElements::UxmlBoolAttributeDescription, 0xb0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::UIElements::UxmlBoolAttributeDescription>(value));
}
constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription ::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__UxmlTraits::__get_m_IsDelayed() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::UxmlBoolAttributeDescription, 0xb0>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void ::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__UxmlTraits::Init(::UnityEngine::UIElements::VisualElement ve, ::UnityEngine::UIElements::IUxmlAttributes bag, ::UnityEngine::UIElements::CreationContext cc)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__UxmlTraits>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::IUxmlAttributes>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::CreationContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, ve, bag, cc);
}
// Ctor Parameters []
 ::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__UxmlTraits::____UnityEngine__UIElements__TextInputBaseField_1__UxmlTraits()  : ::UnityEngine::UIElements::BaseFieldTraits_2<::StringW,::UnityEngine::UIElements::UxmlStringAttributeDescription>(THROW_UNLESS(::il2cpp_utils::New<____UnityEngine__UIElements__TextInputBaseField_1__UxmlTraits>())) {}
 void ::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__UxmlTraits::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__UxmlTraits>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: ::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase.ResetValueAndText
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase::*)()>(&::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase::ResetValueAndText)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase>::get(),
                            "ResetValueAndText",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase.SaveValueAndText
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase::*)()>(&::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase::SaveValueAndText)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase>::get(),
                            "SaveValueAndText",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase.RestoreValueAndText
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase::*)()>(&::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase::RestoreValueAndText)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase>::get(),
                            "RestoreValueAndText",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase.UpdateText
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase::*)(::StringW)>(&::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase::UpdateText)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase>::get(),
                            "UpdateText",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase.StringToValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<TValueType (::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase::*)(::StringW)>(&::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase::StringToValue)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase>::get(),
                                  109
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase.UpdateValueFromText
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase::*)()>(&::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase::UpdateValueFromText)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase>::get(),
                            "UpdateValueFromText",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase.UnityEngine_UIElements_ITextInputField_get_isReadOnly
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase::*)()>(&::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase::UnityEngine_UIElements_ITextInputField_get_isReadOnly)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase>::get(),
                            "UnityEngine.UIElements.ITextInputField.get_isReadOnly",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase.get_isReadOnly
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase::*)()>(&::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase::get_isReadOnly)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase>::get(),
                            "get_isReadOnly",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase.set_isReadOnly
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase::*)(bool)>(&::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase::set_isReadOnly)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase>::get(),
                            "set_isReadOnly",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase.get_maxLength
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase::*)()>(&::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase::get_maxLength)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase>::get(),
                            "get_maxLength",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase.set_maxLength
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase::*)(int32_t)>(&::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase::set_maxLength)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase>::get(),
                            "set_maxLength",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase.get_maskChar
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<char16_t (::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase::*)()>(&::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase::get_maskChar)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase>::get(),
                            "get_maskChar",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase.set_maskChar
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase::*)(char16_t)>(&::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase::set_maskChar)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase>::get(),
                            "set_maskChar",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase.get_isPasswordField
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase::*)()>(&::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase::get_isPasswordField)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase>::get(),
                                  110
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase.set_isPasswordField
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase::*)(bool)>(&::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase::set_isPasswordField)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase>::get(),
                                  111
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase.get_doubleClickSelectsWord
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase::*)()>(&::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase::get_doubleClickSelectsWord)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase>::get(),
                            "get_doubleClickSelectsWord",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase.set_doubleClickSelectsWord
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase::*)(bool)>(&::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase::set_doubleClickSelectsWord)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase>::get(),
                            "set_doubleClickSelectsWord",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase.get_tripleClickSelectsLine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase::*)()>(&::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase::get_tripleClickSelectsLine)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase>::get(),
                            "get_tripleClickSelectsLine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase.set_tripleClickSelectsLine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase::*)(bool)>(&::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase::set_tripleClickSelectsLine)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase>::get(),
                            "set_tripleClickSelectsLine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase.get_isDelayed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase::*)()>(&::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase::get_isDelayed)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase>::get(),
                            "get_isDelayed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase.set_isDelayed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase::*)(bool)>(&::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase::set_isDelayed)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase>::get(),
                            "set_isDelayed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase.get_isDragging
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase::*)()>(&::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase::get_isDragging)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase>::get(),
                            "get_isDragging",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase.get_touchScreenTextField
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase::*)()>(&::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase::get_touchScreenTextField)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase>::get(),
                            "get_touchScreenTextField",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase.get_touchScreenTextFieldChanged
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase::*)()>(&::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase::get_touchScreenTextFieldChanged)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase>::get(),
                            "get_touchScreenTextFieldChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase.get_selectionColor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase::*)()>(&::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase::get_selectionColor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase>::get(),
                            "get_selectionColor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase.get_cursorColor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase::*)()>(&::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase::get_cursorColor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase>::get(),
                            "get_cursorColor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase.get_hasFocus
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase::*)()>(&::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase::get_hasFocus)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase>::get(),
                            "get_hasFocus",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase.get_editorEventHandler
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::TextEditorEventHandler (::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase::*)()>(&::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase::get_editorEventHandler)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase>::get(),
                            "get_editorEventHandler",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase.set_editorEventHandler
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase::*)(::UnityEngine::UIElements::TextEditorEventHandler)>(&::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase::set_editorEventHandler)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase>::get(),
                            "set_editorEventHandler",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::TextEditorEventHandler>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase.get_editorEngine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::TextEditorEngine (::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase::*)()>(&::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase::get_editorEngine)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase>::get(),
                            "get_editorEngine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase.set_editorEngine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase::*)(::UnityEngine::UIElements::TextEditorEngine)>(&::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase::set_editorEngine)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase>::get(),
                            "set_editorEngine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::TextEditorEngine>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase.get_text
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase::*)()>(&::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase::get_text)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase>::get(),
                            "get_text",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase.set_text
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase::*)(::StringW)>(&::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase::set_text)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase>::get(),
                            "set_text",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase::*)()>(&::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase.InitTextEditorEventHandler
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase::*)()>(&::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase::InitTextEditorEventHandler)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase>::get(),
                            "InitTextEditorEventHandler",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase.CutActionStatus
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::____UnityEngine__UIElements__DropdownMenuAction__Status (::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase::*)(::UnityEngine::UIElements::DropdownMenuAction)>(&::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase::CutActionStatus)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase>::get(),
                            "CutActionStatus",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::DropdownMenuAction>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase.CopyActionStatus
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::____UnityEngine__UIElements__DropdownMenuAction__Status (::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase::*)(::UnityEngine::UIElements::DropdownMenuAction)>(&::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase::CopyActionStatus)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase>::get(),
                            "CopyActionStatus",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::DropdownMenuAction>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase.PasteActionStatus
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::____UnityEngine__UIElements__DropdownMenuAction__Status (::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase::*)(::UnityEngine::UIElements::DropdownMenuAction)>(&::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase::PasteActionStatus)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase>::get(),
                            "PasteActionStatus",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::DropdownMenuAction>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase.ProcessMenuCommand
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase::*)(::StringW)>(&::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase::ProcessMenuCommand)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase>::get(),
                            "ProcessMenuCommand",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase.Cut
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase::*)(::UnityEngine::UIElements::DropdownMenuAction)>(&::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase::Cut)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase>::get(),
                            "Cut",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::DropdownMenuAction>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase.Copy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase::*)(::UnityEngine::UIElements::DropdownMenuAction)>(&::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase::Copy)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase>::get(),
                            "Copy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::DropdownMenuAction>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase.Paste
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase::*)(::UnityEngine::UIElements::DropdownMenuAction)>(&::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase::Paste)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase>::get(),
                            "Paste",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::DropdownMenuAction>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase.OnInputCustomStyleResolved
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase::*)(::UnityEngine::UIElements::CustomStyleResolvedEvent)>(&::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase::OnInputCustomStyleResolved)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase>::get(),
                            "OnInputCustomStyleResolved",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::CustomStyleResolvedEvent>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase.OnAttachToPanel
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase::*)(::UnityEngine::UIElements::AttachToPanelEvent)>(&::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase::OnAttachToPanel)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase>::get(),
                            "OnAttachToPanel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::AttachToPanelEvent>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase.SyncTextEngine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase::*)()>(&::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase::SyncTextEngine)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase>::get(),
                                  113
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase.CullString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase::*)(::StringW)>(&::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase::CullString)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase>::get(),
                            "CullString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase.OnGenerateVisualContent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase::*)(::UnityEngine::UIElements::MeshGenerationContext)>(&::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase::OnGenerateVisualContent)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase>::get(),
                            "OnGenerateVisualContent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::MeshGenerationContext>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase.DrawWithTextSelectionAndCursor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase::*)(::UnityEngine::UIElements::MeshGenerationContext, ::StringW, float_t)>(&::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase::DrawWithTextSelectionAndCursor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase>::get(),
                            "DrawWithTextSelectionAndCursor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::MeshGenerationContext>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase.AcceptCharacter
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase::*)(char16_t)>(&::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase::AcceptCharacter)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase>::get(),
                                  114
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase.BuildContextualMenu
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase::*)(::UnityEngine::UIElements::ContextualMenuPopulateEvent)>(&::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase::BuildContextualMenu)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase>::get(),
                                  115
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase.OnDetectFocusChange
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase::*)()>(&::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase::OnDetectFocusChange)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase>::get(),
                            "OnDetectFocusChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase.OnCursorIndexChange
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase::*)()>(&::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase::OnCursorIndexChange)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase>::get(),
                            "OnCursorIndexChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase.DoMeasure
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase::*)(float_t, ::UnityEngine::UIElements::____UnityEngine__UIElements__VisualElement__MeasureMode, float_t, ::UnityEngine::UIElements::____UnityEngine__UIElements__VisualElement__MeasureMode)>(&::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase::DoMeasure)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase>::get(),
                                  94
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase.ExecuteDefaultActionDisabledAtTarget
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase::*)(::UnityEngine::UIElements::EventBase)>(&::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase::ExecuteDefaultActionDisabledAtTarget)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase.ExecuteDefaultActionAtTarget
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase::*)(::UnityEngine::UIElements::EventBase)>(&::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase::ExecuteDefaultActionAtTarget)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase>::get(),
                                  11
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase.ProcessEventAtTarget
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase::*)(::UnityEngine::UIElements::EventBase)>(&::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase::ProcessEventAtTarget)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase>::get(),
                            "ProcessEventAtTarget",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::EventBase>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase.ExecuteDefaultAction
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase::*)(::UnityEngine::UIElements::EventBase)>(&::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase::ExecuteDefaultAction)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase.UnityEngine_UIElements_ITextInputField_get_hasFocus
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase::*)()>(&::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase::UnityEngine_UIElements_ITextInputField_get_hasFocus)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase>::get(),
                            "UnityEngine.UIElements.ITextInputField.get_hasFocus",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase.UnityEngine_UIElements_ITextInputField_SyncTextEngine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase::*)()>(&::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase::UnityEngine_UIElements_ITextInputField_SyncTextEngine)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase>::get(),
                            "UnityEngine.UIElements.ITextInputField.SyncTextEngine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase.UnityEngine_UIElements_ITextInputField_AcceptCharacter
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase::*)(char16_t)>(&::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase::UnityEngine_UIElements_ITextInputField_AcceptCharacter)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase>::get(),
                            "UnityEngine.UIElements.ITextInputField.AcceptCharacter",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase.UnityEngine_UIElements_ITextInputField_CullString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase::*)(::StringW)>(&::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase::UnityEngine_UIElements_ITextInputField_CullString)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase>::get(),
                            "UnityEngine.UIElements.ITextInputField.CullString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase.UnityEngine_UIElements_ITextInputField_UpdateText
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase::*)(::StringW)>(&::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase::UnityEngine_UIElements_ITextInputField_UpdateText)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase>::get(),
                            "UnityEngine.UIElements.ITextInputField.UpdateText",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase.UnityEngine_UIElements_ITextInputField_get_editorEngine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::TextEditorEngine (::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase::*)()>(&::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase::UnityEngine_UIElements_ITextInputField_get_editorEngine)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase>::get(),
                            "UnityEngine.UIElements.ITextInputField.get_editorEngine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase.UnityEngine_UIElements_ITextInputField_get_isDelayed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase::*)()>(&::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase::UnityEngine_UIElements_ITextInputField_get_isDelayed)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase>::get(),
                            "UnityEngine.UIElements.ITextInputField.get_isDelayed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase.UnityEngine_UIElements_ITextInputField_UpdateValueFromText
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase::*)()>(&::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase::UnityEngine_UIElements_ITextInputField_UpdateValueFromText)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase>::get(),
                            "UnityEngine.UIElements.ITextInputField.UpdateValueFromText",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase.DeferGUIStyleRectSync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase::*)()>(&::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase::DeferGUIStyleRectSync)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase>::get(),
                            "DeferGUIStyleRectSync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase.OnPercentResolved
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase::*)(::UnityEngine::UIElements::GeometryChangedEvent)>(&::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase::OnPercentResolved)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase>::get(),
                            "OnPercentResolved",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::GeometryChangedEvent>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase.SyncGUIStyle
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase<TValueType>, ::UnityEngine::GUIStyle)>(&::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase::SyncGUIStyle)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase>::get(),
                            "SyncGUIStyle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase<TValueType>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GUIStyle>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase.IsLayoutUsingPercent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::UIElements::VisualElement)>(&::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase::IsLayoutUsingPercent)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase>::get(),
                            "IsLayoutUsingPercent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase.AssignRect
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::RectOffset, int32_t, int32_t, int32_t, int32_t)>(&::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase::AssignRect)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase>::get(),
                            "AssignRect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RectOffset>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase._ProcessEventAtTarget_b__97_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase::*)()>(&::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase::_ProcessEventAtTarget_b__97_0)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase>::get(),
                            "<ProcessEventAtTarget>b__97_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::UnityEngine::UIElements::ITextInputField
constexpr  ::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase::operator ::UnityEngine::UIElements::ITextInputField() const noexcept {
return ::UnityEngine::UIElements::ITextInputField(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to ::UnityEngine::UIElements::IEventHandler
constexpr  ::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase::operator ::UnityEngine::UIElements::IEventHandler() const noexcept {
return ::UnityEngine::UIElements::IEventHandler(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to ::UnityEngine::UIElements::ITextElement
constexpr  ::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase::operator ::UnityEngine::UIElements::ITextElement() const noexcept {
return ::UnityEngine::UIElements::ITextElement(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase::__set_m_OriginalText(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0xb8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase::__get_m_OriginalText() const {
return ::cordl_internals::getInstanceField<::StringW, 0xb8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase::__set__isReadOnly_k__BackingField(bool value)  {
::cordl_internals::setInstanceField<bool, 0xc0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase::__get__isReadOnly_k__BackingField() const {
return ::cordl_internals::getInstanceField<bool, 0xc0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase::__set__maxLength_k__BackingField(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0xc8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase::__get__maxLength_k__BackingField() const {
return ::cordl_internals::getInstanceField<int32_t, 0xc8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase::__set__maskChar_k__BackingField(char16_t value)  {
::cordl_internals::setInstanceField<char16_t, 0xd0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<char16_t>(value));
}
constexpr char16_t ::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase::__get__maskChar_k__BackingField() const {
return ::cordl_internals::getInstanceField<char16_t, 0xd0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase::__set__isPasswordField_k__BackingField(bool value)  {
::cordl_internals::setInstanceField<bool, 0xd8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase::__get__isPasswordField_k__BackingField() const {
return ::cordl_internals::getInstanceField<bool, 0xd8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase::__set__doubleClickSelectsWord_k__BackingField(bool value)  {
::cordl_internals::setInstanceField<bool, 0xe0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase::__get__doubleClickSelectsWord_k__BackingField() const {
return ::cordl_internals::getInstanceField<bool, 0xe0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase::__set__tripleClickSelectsLine_k__BackingField(bool value)  {
::cordl_internals::setInstanceField<bool, 0xe8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase::__get__tripleClickSelectsLine_k__BackingField() const {
return ::cordl_internals::getInstanceField<bool, 0xe8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase::__set__isDelayed_k__BackingField(bool value)  {
::cordl_internals::setInstanceField<bool, 0xf0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase::__get__isDelayed_k__BackingField() const {
return ::cordl_internals::getInstanceField<bool, 0xf0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase::__set__isDragging_k__BackingField(bool value)  {
::cordl_internals::setInstanceField<bool, 0xf8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase::__get__isDragging_k__BackingField() const {
return ::cordl_internals::getInstanceField<bool, 0xf8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase::__set_m_TouchScreenTextFieldInitialized(bool value)  {
::cordl_internals::setInstanceField<bool, 0x0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase::__get_m_TouchScreenTextFieldInitialized() const {
return ::cordl_internals::getInstanceField<bool, 0x0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase::__set_m_HardwareKeyboardPoller(::UnityEngine::UIElements::IVisualElementScheduledItem value)  {
::cordl_internals::setInstanceField<::UnityEngine::UIElements::IVisualElementScheduledItem, 0x8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::UIElements::IVisualElementScheduledItem>(value));
}
constexpr ::UnityEngine::UIElements::IVisualElementScheduledItem ::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase::__get_m_HardwareKeyboardPoller() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::IVisualElementScheduledItem, 0x8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase::__set_m_SelectionColor(::UnityEngine::Color value)  {
::cordl_internals::setInstanceField<::UnityEngine::Color, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Color>(value));
}
constexpr ::UnityEngine::Color ::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase::__get_m_SelectionColor() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Color, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase::__set_m_CursorColor(::UnityEngine::Color value)  {
::cordl_internals::setInstanceField<::UnityEngine::Color, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Color>(value));
}
constexpr ::UnityEngine::Color ::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase::__get_m_CursorColor() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Color, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase::__set__editorEventHandler_k__BackingField(::UnityEngine::UIElements::TextEditorEventHandler value)  {
::cordl_internals::setInstanceField<::UnityEngine::UIElements::TextEditorEventHandler, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::UIElements::TextEditorEventHandler>(value));
}
constexpr ::UnityEngine::UIElements::TextEditorEventHandler ::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase::__get__editorEventHandler_k__BackingField() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::TextEditorEventHandler, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase::__set__editorEngine_k__BackingField(::UnityEngine::UIElements::TextEditorEngine value)  {
::cordl_internals::setInstanceField<::UnityEngine::UIElements::TextEditorEngine, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::UIElements::TextEditorEngine>(value));
}
constexpr ::UnityEngine::UIElements::TextEditorEngine ::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase::__get__editorEngine_k__BackingField() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::TextEditorEngine, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase::__set_m_TextHandle(::UnityEngine::UIElements::ITextHandle value)  {
::cordl_internals::setInstanceField<::UnityEngine::UIElements::ITextHandle, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::UIElements::ITextHandle>(value));
}
constexpr ::UnityEngine::UIElements::ITextHandle ::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase::__get_m_TextHandle() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::ITextHandle, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase::__set_m_Text(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase::__get_m_Text() const {
return ::cordl_internals::getInstanceField<::StringW, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void ::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase::ResetValueAndText()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase>::get(),
                            "ResetValueAndText",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase::SaveValueAndText()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase>::get(),
                            "SaveValueAndText",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase::RestoreValueAndText()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase>::get(),
                            "RestoreValueAndText",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase::UpdateText(::StringW value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase>::get(),
                            "UpdateText",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 TValueType ::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase::StringToValue(::StringW str)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase>::get(),
                            "StringToValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<TValueType, false>(const_cast<void*>(instance), ___internal_method, str);
}
 void ::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase::UpdateValueFromText()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase>::get(),
                            "UpdateValueFromText",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase::UnityEngine_UIElements_ITextInputField_get_isReadOnly()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase>::get(),
                            "UnityEngine.UIElements.ITextInputField.get_isReadOnly",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase::get_isReadOnly()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase>::get(),
                            "get_isReadOnly",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase::set_isReadOnly(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase>::get(),
                            "set_isReadOnly",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 int32_t ::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase::get_maxLength()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase>::get(),
                            "get_maxLength",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase::set_maxLength(int32_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase>::get(),
                            "set_maxLength",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 char16_t ::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase::get_maskChar()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase>::get(),
                            "get_maskChar",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<char16_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase::set_maskChar(char16_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase>::get(),
                            "set_maskChar",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 bool ::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase::get_isPasswordField()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase>::get(),
                            "get_isPasswordField",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase::set_isPasswordField(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase>::get(),
                            "set_isPasswordField",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 bool ::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase::get_doubleClickSelectsWord()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase>::get(),
                            "get_doubleClickSelectsWord",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase::set_doubleClickSelectsWord(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase>::get(),
                            "set_doubleClickSelectsWord",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 bool ::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase::get_tripleClickSelectsLine()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase>::get(),
                            "get_tripleClickSelectsLine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase::set_tripleClickSelectsLine(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase>::get(),
                            "set_tripleClickSelectsLine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 bool ::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase::get_isDelayed()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase>::get(),
                            "get_isDelayed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase::set_isDelayed(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase>::get(),
                            "set_isDelayed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 bool ::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase::get_isDragging()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase>::get(),
                            "get_isDragging",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase::get_touchScreenTextField()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase>::get(),
                            "get_touchScreenTextField",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase::get_touchScreenTextFieldChanged()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase>::get(),
                            "get_touchScreenTextFieldChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 ::UnityEngine::Color ::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase::get_selectionColor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase>::get(),
                            "get_selectionColor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color, false>(const_cast<void*>(instance), ___internal_method);
}
 ::UnityEngine::Color ::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase::get_cursorColor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase>::get(),
                            "get_cursorColor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase::get_hasFocus()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase>::get(),
                            "get_hasFocus",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 ::UnityEngine::UIElements::TextEditorEventHandler ::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase::get_editorEventHandler()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase>::get(),
                            "get_editorEventHandler",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::TextEditorEventHandler, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase::set_editorEventHandler(::UnityEngine::UIElements::TextEditorEventHandler value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase>::get(),
                            "set_editorEventHandler",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::TextEditorEventHandler>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::UnityEngine::UIElements::TextEditorEngine ::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase::get_editorEngine()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase>::get(),
                            "get_editorEngine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::TextEditorEngine, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase::set_editorEngine(::UnityEngine::UIElements::TextEditorEngine value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase>::get(),
                            "set_editorEngine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::TextEditorEngine>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::StringW ::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase::get_text()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase>::get(),
                            "get_text",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase::set_text(::StringW value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase>::get(),
                            "set_text",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
// Ctor Parameters []
 ::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase()  : ::UnityEngine::UIElements::VisualElement(THROW_UNLESS(::il2cpp_utils::New<____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase>())) {}
 void ::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase::InitTextEditorEventHandler()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase>::get(),
                            "InitTextEditorEventHandler",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::UnityEngine::UIElements::____UnityEngine__UIElements__DropdownMenuAction__Status ::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase::CutActionStatus(::UnityEngine::UIElements::DropdownMenuAction a)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase>::get(),
                            "CutActionStatus",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::DropdownMenuAction>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::____UnityEngine__UIElements__DropdownMenuAction__Status, false>(const_cast<void*>(instance), ___internal_method, a);
}
 ::UnityEngine::UIElements::____UnityEngine__UIElements__DropdownMenuAction__Status ::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase::CopyActionStatus(::UnityEngine::UIElements::DropdownMenuAction a)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase>::get(),
                            "CopyActionStatus",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::DropdownMenuAction>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::____UnityEngine__UIElements__DropdownMenuAction__Status, false>(const_cast<void*>(instance), ___internal_method, a);
}
 ::UnityEngine::UIElements::____UnityEngine__UIElements__DropdownMenuAction__Status ::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase::PasteActionStatus(::UnityEngine::UIElements::DropdownMenuAction a)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase>::get(),
                            "PasteActionStatus",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::DropdownMenuAction>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::____UnityEngine__UIElements__DropdownMenuAction__Status, false>(const_cast<void*>(instance), ___internal_method, a);
}
 void ::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase::ProcessMenuCommand(::StringW command)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase>::get(),
                            "ProcessMenuCommand",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, command);
}
 void ::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase::Cut(::UnityEngine::UIElements::DropdownMenuAction a)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase>::get(),
                            "Cut",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::DropdownMenuAction>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, a);
}
 void ::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase::Copy(::UnityEngine::UIElements::DropdownMenuAction a)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase>::get(),
                            "Copy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::DropdownMenuAction>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, a);
}
 void ::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase::Paste(::UnityEngine::UIElements::DropdownMenuAction a)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase>::get(),
                            "Paste",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::DropdownMenuAction>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, a);
}
 void ::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase::OnInputCustomStyleResolved(::UnityEngine::UIElements::CustomStyleResolvedEvent e)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase>::get(),
                            "OnInputCustomStyleResolved",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::CustomStyleResolvedEvent>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, e);
}
 void ::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase::OnAttachToPanel(::UnityEngine::UIElements::AttachToPanelEvent attachEvent)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase>::get(),
                            "OnAttachToPanel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::AttachToPanelEvent>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, attachEvent);
}
 void ::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase::SyncTextEngine()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase>::get(),
                            "SyncTextEngine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW ::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase::CullString(::StringW s)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase>::get(),
                            "CullString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method, s);
}
 void ::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase::OnGenerateVisualContent(::UnityEngine::UIElements::MeshGenerationContext mgc)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase>::get(),
                            "OnGenerateVisualContent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::MeshGenerationContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, mgc);
}
 void ::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase::DrawWithTextSelectionAndCursor(::UnityEngine::UIElements::MeshGenerationContext mgc, ::StringW newText, float_t pixelsPerPoint)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase>::get(),
                            "DrawWithTextSelectionAndCursor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::MeshGenerationContext>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, mgc, newText, pixelsPerPoint);
}
 bool ::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase::AcceptCharacter(char16_t c)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase>::get(),
                            "AcceptCharacter",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, c);
}
 void ::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase::BuildContextualMenu(::UnityEngine::UIElements::ContextualMenuPopulateEvent evt)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase>::get(),
                            "BuildContextualMenu",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::ContextualMenuPopulateEvent>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, evt);
}
 void ::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase::OnDetectFocusChange()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase>::get(),
                            "OnDetectFocusChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase::OnCursorIndexChange()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase>::get(),
                            "OnCursorIndexChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::UnityEngine::Vector2 ::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase::DoMeasure(float_t desiredWidth, ::UnityEngine::UIElements::____UnityEngine__UIElements__VisualElement__MeasureMode widthMode, float_t desiredHeight, ::UnityEngine::UIElements::____UnityEngine__UIElements__VisualElement__MeasureMode heightMode)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase>::get(),
                            "DoMeasure",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::____UnityEngine__UIElements__VisualElement__MeasureMode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::____UnityEngine__UIElements__VisualElement__MeasureMode>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2, false>(const_cast<void*>(instance), ___internal_method, desiredWidth, widthMode, desiredHeight, heightMode);
}
 void ::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase::ExecuteDefaultActionDisabledAtTarget(::UnityEngine::UIElements::EventBase evt)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase>::get(),
                            "ExecuteDefaultActionDisabledAtTarget",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::EventBase>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, evt);
}
 void ::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase::ExecuteDefaultActionAtTarget(::UnityEngine::UIElements::EventBase evt)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase>::get(),
                            "ExecuteDefaultActionAtTarget",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::EventBase>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, evt);
}
 void ::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase::ProcessEventAtTarget(::UnityEngine::UIElements::EventBase evt)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase>::get(),
                            "ProcessEventAtTarget",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::EventBase>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, evt);
}
 void ::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase::ExecuteDefaultAction(::UnityEngine::UIElements::EventBase evt)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase>::get(),
                            "ExecuteDefaultAction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::EventBase>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, evt);
}
 bool ::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase::UnityEngine_UIElements_ITextInputField_get_hasFocus()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase>::get(),
                            "UnityEngine.UIElements.ITextInputField.get_hasFocus",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase::UnityEngine_UIElements_ITextInputField_SyncTextEngine()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase>::get(),
                            "UnityEngine.UIElements.ITextInputField.SyncTextEngine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase::UnityEngine_UIElements_ITextInputField_AcceptCharacter(char16_t c)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase>::get(),
                            "UnityEngine.UIElements.ITextInputField.AcceptCharacter",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, c);
}
 ::StringW ::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase::UnityEngine_UIElements_ITextInputField_CullString(::StringW s)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase>::get(),
                            "UnityEngine.UIElements.ITextInputField.CullString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method, s);
}
 void ::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase::UnityEngine_UIElements_ITextInputField_UpdateText(::StringW value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase>::get(),
                            "UnityEngine.UIElements.ITextInputField.UpdateText",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::UnityEngine::UIElements::TextEditorEngine ::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase::UnityEngine_UIElements_ITextInputField_get_editorEngine()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase>::get(),
                            "UnityEngine.UIElements.ITextInputField.get_editorEngine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::TextEditorEngine, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase::UnityEngine_UIElements_ITextInputField_get_isDelayed()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase>::get(),
                            "UnityEngine.UIElements.ITextInputField.get_isDelayed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase::UnityEngine_UIElements_ITextInputField_UpdateValueFromText()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase>::get(),
                            "UnityEngine.UIElements.ITextInputField.UpdateValueFromText",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase::DeferGUIStyleRectSync()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase>::get(),
                            "DeferGUIStyleRectSync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase::OnPercentResolved(::UnityEngine::UIElements::GeometryChangedEvent evt)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase>::get(),
                            "OnPercentResolved",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::GeometryChangedEvent>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, evt);
}
 void ::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase::SyncGUIStyle(::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase<TValueType> textInput, ::UnityEngine::GUIStyle style)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase>::get(),
                            "SyncGUIStyle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase<TValueType>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GUIStyle>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, textInput, style);
}
 bool ::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase::IsLayoutUsingPercent(::UnityEngine::UIElements::VisualElement ve)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase>::get(),
                            "IsLayoutUsingPercent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, ve);
}
 void ::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase::AssignRect(::UnityEngine::RectOffset rect, int32_t left, int32_t top, int32_t right, int32_t bottom)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase>::get(),
                            "AssignRect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RectOffset>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, rect, left, top, right, bottom);
}
 void ::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase::_ProcessEventAtTarget_b__97_0()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase>::get(),
                            "<ProcessEventAtTarget>b__97_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: ::UnityEngine::UIElements::TextInputBaseField_1.get_textInputBase
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase<TValueType> (::UnityEngine::UIElements::TextInputBaseField_1::*)()>(&::UnityEngine::UIElements::TextInputBaseField_1::get_textInputBase)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextInputBaseField_1>::get(),
                            "get_textInputBase",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TextInputBaseField_1.set_iTextHandle
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::TextInputBaseField_1::*)(::UnityEngine::UIElements::ITextHandle)>(&::UnityEngine::UIElements::TextInputBaseField_1::set_iTextHandle)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextInputBaseField_1>::get(),
                            "set_iTextHandle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::ITextHandle>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TextInputBaseField_1.set_text
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::TextInputBaseField_1::*)(::StringW)>(&::UnityEngine::UIElements::TextInputBaseField_1::set_text)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextInputBaseField_1>::get(),
                            "set_text",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TextInputBaseField_1.set_isReadOnly
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::TextInputBaseField_1::*)(bool)>(&::UnityEngine::UIElements::TextInputBaseField_1::set_isReadOnly)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextInputBaseField_1>::get(),
                            "set_isReadOnly",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TextInputBaseField_1.set_isPasswordField
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::TextInputBaseField_1::*)(bool)>(&::UnityEngine::UIElements::TextInputBaseField_1::set_isPasswordField)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextInputBaseField_1>::get(),
                            "set_isPasswordField",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TextInputBaseField_1.set_maxLength
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::TextInputBaseField_1::*)(int32_t)>(&::UnityEngine::UIElements::TextInputBaseField_1::set_maxLength)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextInputBaseField_1>::get(),
                            "set_maxLength",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TextInputBaseField_1.get_isDelayed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::TextInputBaseField_1::*)()>(&::UnityEngine::UIElements::TextInputBaseField_1::get_isDelayed)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextInputBaseField_1>::get(),
                            "get_isDelayed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TextInputBaseField_1.set_isDelayed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::TextInputBaseField_1::*)(bool)>(&::UnityEngine::UIElements::TextInputBaseField_1::set_isDelayed)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextInputBaseField_1>::get(),
                            "set_isDelayed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TextInputBaseField_1.set_maskChar
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::TextInputBaseField_1::*)(char16_t)>(&::UnityEngine::UIElements::TextInputBaseField_1::set_maskChar)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextInputBaseField_1>::get(),
                            "set_maskChar",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TextInputBaseField_1._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::TextInputBaseField_1::*)(::StringW, int32_t, char16_t, ::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase<TValueType>)>(&::UnityEngine::UIElements::TextInputBaseField_1::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextInputBaseField_1>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase<TValueType>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TextInputBaseField_1.OnAttachToPanel
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::TextInputBaseField_1::*)(::UnityEngine::UIElements::AttachToPanelEvent)>(&::UnityEngine::UIElements::TextInputBaseField_1::OnAttachToPanel)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextInputBaseField_1>::get(),
                            "OnAttachToPanel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::AttachToPanelEvent>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TextInputBaseField_1.OnFieldCustomStyleResolved
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::TextInputBaseField_1::*)(::UnityEngine::UIElements::CustomStyleResolvedEvent)>(&::UnityEngine::UIElements::TextInputBaseField_1::OnFieldCustomStyleResolved)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextInputBaseField_1>::get(),
                            "OnFieldCustomStyleResolved",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::CustomStyleResolvedEvent>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TextInputBaseField_1.ExecuteDefaultActionAtTarget
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::TextInputBaseField_1::*)(::UnityEngine::UIElements::EventBase)>(&::UnityEngine::UIElements::TextInputBaseField_1::ExecuteDefaultActionAtTarget)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::UnityEngine::UIElements::TextInputBaseField_1),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextInputBaseField_1>::get(),
                                  11
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TextInputBaseField_1.UpdateMixedValueContent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::TextInputBaseField_1::*)()>(&::UnityEngine::UIElements::TextInputBaseField_1::UpdateMixedValueContent)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::UnityEngine::UIElements::TextInputBaseField_1),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextInputBaseField_1>::get(),
                                  104
                                ));
    return ___internal_method;
  }
};
 void ::UnityEngine::UIElements::TextInputBaseField_1::__set_s_SelectionColorProperty(::UnityEngine::UIElements::CustomStyleProperty_1<::UnityEngine::Color> value)  {
::cordl_internals::setStaticField<::UnityEngine::UIElements::CustomStyleProperty_1<::UnityEngine::Color>, "s_SelectionColorProperty", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextInputBaseField_1>::get>(std::forward<::UnityEngine::UIElements::CustomStyleProperty_1<::UnityEngine::Color>>(value));
}
 ::UnityEngine::UIElements::CustomStyleProperty_1<::UnityEngine::Color> ::UnityEngine::UIElements::TextInputBaseField_1::__get_s_SelectionColorProperty()  {
return ::cordl_internals::getStaticField<::UnityEngine::UIElements::CustomStyleProperty_1<::UnityEngine::Color>, "s_SelectionColorProperty", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextInputBaseField_1>::get>();
}
 void ::UnityEngine::UIElements::TextInputBaseField_1::__set_s_CursorColorProperty(::UnityEngine::UIElements::CustomStyleProperty_1<::UnityEngine::Color> value)  {
::cordl_internals::setStaticField<::UnityEngine::UIElements::CustomStyleProperty_1<::UnityEngine::Color>, "s_CursorColorProperty", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextInputBaseField_1>::get>(std::forward<::UnityEngine::UIElements::CustomStyleProperty_1<::UnityEngine::Color>>(value));
}
 ::UnityEngine::UIElements::CustomStyleProperty_1<::UnityEngine::Color> ::UnityEngine::UIElements::TextInputBaseField_1::__get_s_CursorColorProperty()  {
return ::cordl_internals::getStaticField<::UnityEngine::UIElements::CustomStyleProperty_1<::UnityEngine::Color>, "s_CursorColorProperty", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextInputBaseField_1>::get>();
}
constexpr void ::UnityEngine::UIElements::TextInputBaseField_1::__set_m_VisualInputTabIndex(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::UIElements::TextInputBaseField_1::__get_m_VisualInputTabIndex() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::UIElements::TextInputBaseField_1::__set_m_TextInputBase(::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase<TValueType> value)  {
::cordl_internals::setInstanceField<::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase<TValueType>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase<TValueType>>(value));
}
constexpr ::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase<TValueType> ::UnityEngine::UIElements::TextInputBaseField_1::__get_m_TextInputBase() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase<TValueType>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::UIElements::TextInputBaseField_1::__set__iTextHandle_k__BackingField(::UnityEngine::UIElements::ITextHandle value)  {
::cordl_internals::setInstanceField<::UnityEngine::UIElements::ITextHandle, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::UIElements::ITextHandle>(value));
}
constexpr ::UnityEngine::UIElements::ITextHandle ::UnityEngine::UIElements::TextInputBaseField_1::__get__iTextHandle_k__BackingField() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::ITextHandle, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void ::UnityEngine::UIElements::TextInputBaseField_1::__set_ussClassName(::StringW value)  {
::cordl_internals::setStaticField<::StringW, "ussClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextInputBaseField_1>::get>(std::forward<::StringW>(value));
}
 ::StringW ::UnityEngine::UIElements::TextInputBaseField_1::__get_ussClassName()  {
return ::cordl_internals::getStaticField<::StringW, "ussClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextInputBaseField_1>::get>();
}
 void ::UnityEngine::UIElements::TextInputBaseField_1::__set_labelUssClassName(::StringW value)  {
::cordl_internals::setStaticField<::StringW, "labelUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextInputBaseField_1>::get>(std::forward<::StringW>(value));
}
 ::StringW ::UnityEngine::UIElements::TextInputBaseField_1::__get_labelUssClassName()  {
return ::cordl_internals::getStaticField<::StringW, "labelUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextInputBaseField_1>::get>();
}
 void ::UnityEngine::UIElements::TextInputBaseField_1::__set_inputUssClassName(::StringW value)  {
::cordl_internals::setStaticField<::StringW, "inputUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextInputBaseField_1>::get>(std::forward<::StringW>(value));
}
 ::StringW ::UnityEngine::UIElements::TextInputBaseField_1::__get_inputUssClassName()  {
return ::cordl_internals::getStaticField<::StringW, "inputUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextInputBaseField_1>::get>();
}
 void ::UnityEngine::UIElements::TextInputBaseField_1::__set_singleLineInputUssClassName(::StringW value)  {
::cordl_internals::setStaticField<::StringW, "singleLineInputUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextInputBaseField_1>::get>(std::forward<::StringW>(value));
}
 ::StringW ::UnityEngine::UIElements::TextInputBaseField_1::__get_singleLineInputUssClassName()  {
return ::cordl_internals::getStaticField<::StringW, "singleLineInputUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextInputBaseField_1>::get>();
}
 void ::UnityEngine::UIElements::TextInputBaseField_1::__set_multilineInputUssClassName(::StringW value)  {
::cordl_internals::setStaticField<::StringW, "multilineInputUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextInputBaseField_1>::get>(std::forward<::StringW>(value));
}
 ::StringW ::UnityEngine::UIElements::TextInputBaseField_1::__get_multilineInputUssClassName()  {
return ::cordl_internals::getStaticField<::StringW, "multilineInputUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextInputBaseField_1>::get>();
}
 void ::UnityEngine::UIElements::TextInputBaseField_1::__set_textInputUssName(::StringW value)  {
::cordl_internals::setStaticField<::StringW, "textInputUssName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextInputBaseField_1>::get>(std::forward<::StringW>(value));
}
 ::StringW ::UnityEngine::UIElements::TextInputBaseField_1::__get_textInputUssName()  {
return ::cordl_internals::getStaticField<::StringW, "textInputUssName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextInputBaseField_1>::get>();
}
constexpr void ::UnityEngine::UIElements::TextInputBaseField_1::__set_onIsReadOnlyChanged(::System::Action_1<bool> value)  {
::cordl_internals::setInstanceField<::System::Action_1<bool>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Action_1<bool>>(value));
}
constexpr ::System::Action_1<bool> ::UnityEngine::UIElements::TextInputBaseField_1::__get_onIsReadOnlyChanged() const {
return ::cordl_internals::getInstanceField<::System::Action_1<bool>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
 ::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase<TValueType> ::UnityEngine::UIElements::TextInputBaseField_1::get_textInputBase()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextInputBaseField_1>::get(),
                            "get_textInputBase",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase<TValueType>, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::UIElements::TextInputBaseField_1::set_iTextHandle(::UnityEngine::UIElements::ITextHandle value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextInputBaseField_1>::get(),
                            "set_iTextHandle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::ITextHandle>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void ::UnityEngine::UIElements::TextInputBaseField_1::set_text(::StringW value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextInputBaseField_1>::get(),
                            "set_text",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void ::UnityEngine::UIElements::TextInputBaseField_1::set_isReadOnly(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextInputBaseField_1>::get(),
                            "set_isReadOnly",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void ::UnityEngine::UIElements::TextInputBaseField_1::set_isPasswordField(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextInputBaseField_1>::get(),
                            "set_isPasswordField",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void ::UnityEngine::UIElements::TextInputBaseField_1::set_maxLength(int32_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextInputBaseField_1>::get(),
                            "set_maxLength",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 bool ::UnityEngine::UIElements::TextInputBaseField_1::get_isDelayed()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextInputBaseField_1>::get(),
                            "get_isDelayed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::UIElements::TextInputBaseField_1::set_isDelayed(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextInputBaseField_1>::get(),
                            "set_isDelayed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void ::UnityEngine::UIElements::TextInputBaseField_1::set_maskChar(char16_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextInputBaseField_1>::get(),
                            "set_maskChar",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "label", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "maxLength", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "maskChar", ty: "char16_t", modifiers: "", def_value: None }, CppParam { name: "textInputBase", ty: "::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase<TValueType>", modifiers: "", def_value: None }]
 ::UnityEngine::UIElements::TextInputBaseField_1::TextInputBaseField_1(::StringW label, int32_t maxLength, char16_t maskChar, ::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase<TValueType> textInputBase)  : ::UnityEngine::UIElements::BaseField_1<TValueType>(THROW_UNLESS(::il2cpp_utils::New<TextInputBaseField_1>(label, maxLength, maskChar, textInputBase))) {}
 void ::UnityEngine::UIElements::TextInputBaseField_1::_ctor(::StringW label, int32_t maxLength, char16_t maskChar, ::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase<TValueType> textInputBase)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextInputBaseField_1>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase<TValueType>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, label, maxLength, maskChar, textInputBase);
}
 void ::UnityEngine::UIElements::TextInputBaseField_1::OnAttachToPanel(::UnityEngine::UIElements::AttachToPanelEvent e)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextInputBaseField_1>::get(),
                            "OnAttachToPanel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::AttachToPanelEvent>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, e);
}
 void ::UnityEngine::UIElements::TextInputBaseField_1::OnFieldCustomStyleResolved(::UnityEngine::UIElements::CustomStyleResolvedEvent e)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextInputBaseField_1>::get(),
                            "OnFieldCustomStyleResolved",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::CustomStyleResolvedEvent>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, e);
}
 void ::UnityEngine::UIElements::TextInputBaseField_1::ExecuteDefaultActionAtTarget(::UnityEngine::UIElements::EventBase evt)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextInputBaseField_1>::get(),
                            "ExecuteDefaultActionAtTarget",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::EventBase>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, evt);
}
 void ::UnityEngine::UIElements::TextInputBaseField_1::UpdateMixedValueContent()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextInputBaseField_1>::get(),
                            "UpdateMixedValueContent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
