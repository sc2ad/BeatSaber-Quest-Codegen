#pragma once
#include "UnityEngine/UIElements/zzzz__BaseField_1_impl.hpp"
#include "UnityEngine/UIElements/zzzz__TextElement_impl.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlFactory_2_impl.hpp"
namespace {
#include "UnityEngine/UIElements/zzzz__DropdownField_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "UnityEngine/UIElements/zzzz__EventBase_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
#include "UnityEngine/UIElements/zzzz__IGenericMenu_def.hpp"
#include "UnityEngine/UIElements/zzzz__TextElement_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/UIElements/zzzz__CreationContext_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlStringAttributeDescription_def.hpp"
#include "UnityEngine/UIElements/zzzz__IUxmlAttributes_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlIntAttributeDescription_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::____UnityEngine__UIElements__DropdownField__UxmlTraits.Init
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::____UnityEngine__UIElements__DropdownField__UxmlTraits::*)(::UnityEngine::UIElements::VisualElement, ::UnityEngine::UIElements::IUxmlAttributes, ::UnityEngine::UIElements::CreationContext)>(&::UnityEngine::UIElements::____UnityEngine__UIElements__DropdownField__UxmlTraits::Init)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x2cb1e5c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::UnityEngine::UIElements::____UnityEngine__UIElements__DropdownField__UxmlTraits),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::____UnityEngine__UIElements__DropdownField__UxmlTraits>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::____UnityEngine__UIElements__DropdownField__UxmlTraits._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::____UnityEngine__UIElements__DropdownField__UxmlTraits::*)()>(&::UnityEngine::UIElements::____UnityEngine__UIElements__DropdownField__UxmlTraits::_ctor)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x2cb1fd8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::____UnityEngine__UIElements__DropdownField__UxmlTraits>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::UnityEngine::UIElements::____UnityEngine__UIElements__DropdownField__UxmlTraits::__set_m_Index(::UnityEngine::UIElements::UxmlIntAttributeDescription value)  {
::cordl_internals::setInstanceField<::UnityEngine::UIElements::UxmlIntAttributeDescription, 0x80>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::UIElements::UxmlIntAttributeDescription>(value));
}
constexpr ::UnityEngine::UIElements::UxmlIntAttributeDescription ::UnityEngine::UIElements::____UnityEngine__UIElements__DropdownField__UxmlTraits::__get_m_Index() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::UxmlIntAttributeDescription, 0x80>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::UIElements::____UnityEngine__UIElements__DropdownField__UxmlTraits::__set_m_Choices(::UnityEngine::UIElements::UxmlStringAttributeDescription value)  {
::cordl_internals::setInstanceField<::UnityEngine::UIElements::UxmlStringAttributeDescription, 0x88>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::UIElements::UxmlStringAttributeDescription>(value));
}
constexpr ::UnityEngine::UIElements::UxmlStringAttributeDescription ::UnityEngine::UIElements::____UnityEngine__UIElements__DropdownField__UxmlTraits::__get_m_Choices() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::UxmlStringAttributeDescription, 0x88>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void ::UnityEngine::UIElements::____UnityEngine__UIElements__DropdownField__UxmlTraits::Init(::UnityEngine::UIElements::VisualElement ve, ::UnityEngine::UIElements::IUxmlAttributes bag, ::UnityEngine::UIElements::CreationContext cc)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::____UnityEngine__UIElements__DropdownField__UxmlTraits>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::IUxmlAttributes>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::CreationContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, ve, bag, cc);
}
// Ctor Parameters []
 ::UnityEngine::UIElements::____UnityEngine__UIElements__DropdownField__UxmlTraits::____UnityEngine__UIElements__DropdownField__UxmlTraits()  : ::UnityEngine::UIElements::____UnityEngine__UIElements__BaseField_1__UxmlTraits<::StringW>(THROW_UNLESS(::il2cpp_utils::New<____UnityEngine__UIElements__DropdownField__UxmlTraits>())) {}
 void ::UnityEngine::UIElements::____UnityEngine__UIElements__DropdownField__UxmlTraits::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::____UnityEngine__UIElements__DropdownField__UxmlTraits>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: ::UnityEngine::UIElements::DropdownField.get_textElement
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::TextElement (::UnityEngine::UIElements::DropdownField::*)()>(&::UnityEngine::UIElements::DropdownField::get_textElement)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2cb0b90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DropdownField>::get(),
                            "get_textElement",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DropdownField.GetValueToDisplay
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::UIElements::DropdownField::*)()>(&::UnityEngine::UIElements::DropdownField::GetValueToDisplay)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x2cb0b98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DropdownField>::get(),
                            "GetValueToDisplay",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DropdownField.GetListItemToDisplay
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::UIElements::DropdownField::*)(::StringW)>(&::UnityEngine::UIElements::DropdownField::GetListItemToDisplay)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x2cb0c24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DropdownField>::get(),
                            "GetListItemToDisplay",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DropdownField.set_index
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::DropdownField::*)(int32_t)>(&::UnityEngine::UIElements::DropdownField::set_index)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2cb0cd0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DropdownField>::get(),
                            "set_index",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DropdownField._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::DropdownField::*)()>(&::UnityEngine::UIElements::DropdownField::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2cb0d6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DropdownField>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DropdownField._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::DropdownField::*)(::StringW)>(&::UnityEngine::UIElements::DropdownField::_ctor)> {
  constexpr static std::size_t size = 0x2b8;
  constexpr static std::size_t addrs = 0x2cb0d74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DropdownField>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DropdownField.AddMenuItems
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::DropdownField::*)(::UnityEngine::UIElements::IGenericMenu)>(&::UnityEngine::UIElements::DropdownField::AddMenuItems)> {
  constexpr static std::size_t size = 0x308;
  constexpr static std::size_t addrs = 0x2cb1084;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DropdownField>::get(),
                            "AddMenuItems",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::IGenericMenu>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DropdownField.ChangeValueFromMenu
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::DropdownField::*)(::StringW)>(&::UnityEngine::UIElements::DropdownField::ChangeValueFromMenu)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2cb1394;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DropdownField>::get(),
                            "ChangeValueFromMenu",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DropdownField.set_choices
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::DropdownField::*)(::System::Collections::Generic::List_1<::StringW>)>(&::UnityEngine::UIElements::DropdownField::set_choices)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2cb13a4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::UnityEngine::UIElements::DropdownField),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DropdownField>::get(),
                                  106
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DropdownField.get_value
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::UIElements::DropdownField::*)()>(&::UnityEngine::UIElements::DropdownField::get_value)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2cb1414;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::UnityEngine::UIElements::DropdownField),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DropdownField>::get(),
                                  101
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DropdownField.set_value
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::DropdownField::*)(::StringW)>(&::UnityEngine::UIElements::DropdownField::set_value)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2cb145c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::UnityEngine::UIElements::DropdownField),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DropdownField>::get(),
                                  102
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DropdownField.SetValueWithoutNotify
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::DropdownField::*)(::StringW)>(&::UnityEngine::UIElements::DropdownField::SetValueWithoutNotify)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x2cb14e0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::UnityEngine::UIElements::DropdownField),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DropdownField>::get(),
                                  105
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DropdownField.ExecuteDefaultActionAtTarget
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::DropdownField::*)(::UnityEngine::UIElements::EventBase)>(&::UnityEngine::UIElements::DropdownField::ExecuteDefaultActionAtTarget)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x2cb15f0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::UnityEngine::UIElements::DropdownField),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DropdownField>::get(),
                                  11
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DropdownField.ShowMenu
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::DropdownField::*)()>(&::UnityEngine::UIElements::DropdownField::ShowMenu)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x2cb1770;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DropdownField>::get(),
                            "ShowMenu",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DropdownField.UpdateMixedValueContent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::DropdownField::*)()>(&::UnityEngine::UIElements::DropdownField::UpdateMixedValueContent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x2cb1bc4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::UnityEngine::UIElements::DropdownField),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DropdownField>::get(),
                                  104
                                ));
    return ___internal_method;
  }
};
constexpr void ::UnityEngine::UIElements::DropdownField::__set_m_Choices(::System::Collections::Generic::List_1<::StringW> value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::StringW>, 0x408>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::Generic::List_1<::StringW>>(value));
}
constexpr ::System::Collections::Generic::List_1<::StringW> ::UnityEngine::UIElements::DropdownField::__get_m_Choices() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::StringW>, 0x408>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::UIElements::DropdownField::__set_m_TextElement(::UnityEngine::UIElements::TextElement value)  {
::cordl_internals::setInstanceField<::UnityEngine::UIElements::TextElement, 0x410>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::UIElements::TextElement>(value));
}
constexpr ::UnityEngine::UIElements::TextElement ::UnityEngine::UIElements::DropdownField::__get_m_TextElement() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::TextElement, 0x410>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::UIElements::DropdownField::__set_m_ArrowElement(::UnityEngine::UIElements::VisualElement value)  {
::cordl_internals::setInstanceField<::UnityEngine::UIElements::VisualElement, 0x418>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::UIElements::VisualElement>(value));
}
constexpr ::UnityEngine::UIElements::VisualElement ::UnityEngine::UIElements::DropdownField::__get_m_ArrowElement() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::VisualElement, 0x418>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::UIElements::DropdownField::__set_m_FormatSelectedValueCallback(::System::Func_2<::StringW,::StringW> value)  {
::cordl_internals::setInstanceField<::System::Func_2<::StringW,::StringW>, 0x420>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Func_2<::StringW,::StringW>>(value));
}
constexpr ::System::Func_2<::StringW,::StringW> ::UnityEngine::UIElements::DropdownField::__get_m_FormatSelectedValueCallback() const {
return ::cordl_internals::getInstanceField<::System::Func_2<::StringW,::StringW>, 0x420>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::UIElements::DropdownField::__set_m_FormatListItemCallback(::System::Func_2<::StringW,::StringW> value)  {
::cordl_internals::setInstanceField<::System::Func_2<::StringW,::StringW>, 0x428>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Func_2<::StringW,::StringW>>(value));
}
constexpr ::System::Func_2<::StringW,::StringW> ::UnityEngine::UIElements::DropdownField::__get_m_FormatListItemCallback() const {
return ::cordl_internals::getInstanceField<::System::Func_2<::StringW,::StringW>, 0x428>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::UIElements::DropdownField::__set_createMenuCallback(::System::Func_1<::UnityEngine::UIElements::IGenericMenu> value)  {
::cordl_internals::setInstanceField<::System::Func_1<::UnityEngine::UIElements::IGenericMenu>, 0x430>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Func_1<::UnityEngine::UIElements::IGenericMenu>>(value));
}
constexpr ::System::Func_1<::UnityEngine::UIElements::IGenericMenu> ::UnityEngine::UIElements::DropdownField::__get_createMenuCallback() const {
return ::cordl_internals::getInstanceField<::System::Func_1<::UnityEngine::UIElements::IGenericMenu>, 0x430>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::UIElements::DropdownField::__set_m_Index(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x438>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::UIElements::DropdownField::__get_m_Index() const {
return ::cordl_internals::getInstanceField<int32_t, 0x438>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void ::UnityEngine::UIElements::DropdownField::__set_ussClassNameBasePopupField(::StringW value)  {
::cordl_internals::setStaticField<::StringW, "ussClassNameBasePopupField", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DropdownField>::get>(std::forward<::StringW>(value));
}
 ::StringW ::UnityEngine::UIElements::DropdownField::__get_ussClassNameBasePopupField()  {
return ::cordl_internals::getStaticField<::StringW, "ussClassNameBasePopupField", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DropdownField>::get>();
}
 void ::UnityEngine::UIElements::DropdownField::__set_textUssClassNameBasePopupField(::StringW value)  {
::cordl_internals::setStaticField<::StringW, "textUssClassNameBasePopupField", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DropdownField>::get>(std::forward<::StringW>(value));
}
 ::StringW ::UnityEngine::UIElements::DropdownField::__get_textUssClassNameBasePopupField()  {
return ::cordl_internals::getStaticField<::StringW, "textUssClassNameBasePopupField", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DropdownField>::get>();
}
 void ::UnityEngine::UIElements::DropdownField::__set_arrowUssClassNameBasePopupField(::StringW value)  {
::cordl_internals::setStaticField<::StringW, "arrowUssClassNameBasePopupField", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DropdownField>::get>(std::forward<::StringW>(value));
}
 ::StringW ::UnityEngine::UIElements::DropdownField::__get_arrowUssClassNameBasePopupField()  {
return ::cordl_internals::getStaticField<::StringW, "arrowUssClassNameBasePopupField", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DropdownField>::get>();
}
 void ::UnityEngine::UIElements::DropdownField::__set_labelUssClassNameBasePopupField(::StringW value)  {
::cordl_internals::setStaticField<::StringW, "labelUssClassNameBasePopupField", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DropdownField>::get>(std::forward<::StringW>(value));
}
 ::StringW ::UnityEngine::UIElements::DropdownField::__get_labelUssClassNameBasePopupField()  {
return ::cordl_internals::getStaticField<::StringW, "labelUssClassNameBasePopupField", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DropdownField>::get>();
}
 void ::UnityEngine::UIElements::DropdownField::__set_inputUssClassNameBasePopupField(::StringW value)  {
::cordl_internals::setStaticField<::StringW, "inputUssClassNameBasePopupField", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DropdownField>::get>(std::forward<::StringW>(value));
}
 ::StringW ::UnityEngine::UIElements::DropdownField::__get_inputUssClassNameBasePopupField()  {
return ::cordl_internals::getStaticField<::StringW, "inputUssClassNameBasePopupField", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DropdownField>::get>();
}
 void ::UnityEngine::UIElements::DropdownField::__set_ussClassNamePopupField(::StringW value)  {
::cordl_internals::setStaticField<::StringW, "ussClassNamePopupField", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DropdownField>::get>(std::forward<::StringW>(value));
}
 ::StringW ::UnityEngine::UIElements::DropdownField::__get_ussClassNamePopupField()  {
return ::cordl_internals::getStaticField<::StringW, "ussClassNamePopupField", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DropdownField>::get>();
}
 void ::UnityEngine::UIElements::DropdownField::__set_labelUssClassNamePopupField(::StringW value)  {
::cordl_internals::setStaticField<::StringW, "labelUssClassNamePopupField", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DropdownField>::get>(std::forward<::StringW>(value));
}
 ::StringW ::UnityEngine::UIElements::DropdownField::__get_labelUssClassNamePopupField()  {
return ::cordl_internals::getStaticField<::StringW, "labelUssClassNamePopupField", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DropdownField>::get>();
}
 void ::UnityEngine::UIElements::DropdownField::__set_inputUssClassNamePopupField(::StringW value)  {
::cordl_internals::setStaticField<::StringW, "inputUssClassNamePopupField", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DropdownField>::get>(std::forward<::StringW>(value));
}
 ::StringW ::UnityEngine::UIElements::DropdownField::__get_inputUssClassNamePopupField()  {
return ::cordl_internals::getStaticField<::StringW, "inputUssClassNamePopupField", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DropdownField>::get>();
}
 ::UnityEngine::UIElements::TextElement ::UnityEngine::UIElements::DropdownField::get_textElement()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DropdownField>::get(),
                            "get_textElement",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::TextElement, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW ::UnityEngine::UIElements::DropdownField::GetValueToDisplay()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DropdownField>::get(),
                            "GetValueToDisplay",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW ::UnityEngine::UIElements::DropdownField::GetListItemToDisplay(::StringW value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DropdownField>::get(),
                            "GetListItemToDisplay",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void ::UnityEngine::UIElements::DropdownField::set_index(int32_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DropdownField>::get(),
                            "set_index",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
// Ctor Parameters []
 ::UnityEngine::UIElements::DropdownField::DropdownField()  : ::UnityEngine::UIElements::BaseField_1<::StringW>(THROW_UNLESS(::il2cpp_utils::New<DropdownField>())) {}
 void ::UnityEngine::UIElements::DropdownField::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DropdownField>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters [CppParam { name: "label", ty: "::StringW", modifiers: "", def_value: None }]
 ::UnityEngine::UIElements::DropdownField::DropdownField(::StringW label)  : ::UnityEngine::UIElements::BaseField_1<::StringW>(THROW_UNLESS(::il2cpp_utils::New<DropdownField>(label))) {}
 void ::UnityEngine::UIElements::DropdownField::_ctor(::StringW label)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DropdownField>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, label);
}
 void ::UnityEngine::UIElements::DropdownField::AddMenuItems(::UnityEngine::UIElements::IGenericMenu menu)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DropdownField>::get(),
                            "AddMenuItems",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::IGenericMenu>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, menu);
}
 void ::UnityEngine::UIElements::DropdownField::ChangeValueFromMenu(::StringW menuItem)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DropdownField>::get(),
                            "ChangeValueFromMenu",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, menuItem);
}
 void ::UnityEngine::UIElements::DropdownField::set_choices(::System::Collections::Generic::List_1<::StringW> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DropdownField>::get(),
                            "set_choices",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::StringW>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::StringW ::UnityEngine::UIElements::DropdownField::get_value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DropdownField>::get(),
                            "get_value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::UIElements::DropdownField::set_value(::StringW value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DropdownField>::get(),
                            "set_value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void ::UnityEngine::UIElements::DropdownField::SetValueWithoutNotify(::StringW newValue)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DropdownField>::get(),
                            "SetValueWithoutNotify",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, newValue);
}
 void ::UnityEngine::UIElements::DropdownField::ExecuteDefaultActionAtTarget(::UnityEngine::UIElements::EventBase evt)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DropdownField>::get(),
                            "ExecuteDefaultActionAtTarget",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::EventBase>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, evt);
}
 void ::UnityEngine::UIElements::DropdownField::ShowMenu()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DropdownField>::get(),
                            "ShowMenu",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::UIElements::DropdownField::UpdateMixedValueContent()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DropdownField>::get(),
                            "UpdateMixedValueContent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: ::UnityEngine::UIElements::____UnityEngine__UIElements__DropdownField__UxmlFactory._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::____UnityEngine__UIElements__DropdownField__UxmlFactory::*)()>(&::UnityEngine::UIElements::____UnityEngine__UIElements__DropdownField__UxmlFactory::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2cb1e14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::____UnityEngine__UIElements__DropdownField__UxmlFactory>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters []
 ::UnityEngine::UIElements::____UnityEngine__UIElements__DropdownField__UxmlFactory::____UnityEngine__UIElements__DropdownField__UxmlFactory()  : ::UnityEngine::UIElements::UxmlFactory_2<::UnityEngine::UIElements::DropdownField,::UnityEngine::UIElements::____UnityEngine__UIElements__DropdownField__UxmlTraits>(THROW_UNLESS(::il2cpp_utils::New<____UnityEngine__UIElements__DropdownField__UxmlFactory>())) {}
 void ::UnityEngine::UIElements::____UnityEngine__UIElements__DropdownField__UxmlFactory::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::____UnityEngine__UIElements__DropdownField__UxmlFactory>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: ::UnityEngine::UIElements::____UnityEngine__UIElements__DropdownField__PopupTextElement.DoMeasure
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (::UnityEngine::UIElements::____UnityEngine__UIElements__DropdownField__PopupTextElement::*)(float_t, ::UnityEngine::UIElements::____UnityEngine__UIElements__VisualElement__MeasureMode, float_t, ::UnityEngine::UIElements::____UnityEngine__UIElements__VisualElement__MeasureMode)>(&::UnityEngine::UIElements::____UnityEngine__UIElements__DropdownField__PopupTextElement::DoMeasure)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x2cb20c4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::UnityEngine::UIElements::____UnityEngine__UIElements__DropdownField__PopupTextElement),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::____UnityEngine__UIElements__DropdownField__PopupTextElement>::get(),
                                  94
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::____UnityEngine__UIElements__DropdownField__PopupTextElement._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::____UnityEngine__UIElements__DropdownField__PopupTextElement::*)()>(&::UnityEngine::UIElements::____UnityEngine__UIElements__DropdownField__PopupTextElement::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2cb102c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::____UnityEngine__UIElements__DropdownField__PopupTextElement>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 ::UnityEngine::Vector2 ::UnityEngine::UIElements::____UnityEngine__UIElements__DropdownField__PopupTextElement::DoMeasure(float_t desiredWidth, ::UnityEngine::UIElements::____UnityEngine__UIElements__VisualElement__MeasureMode widthMode, float_t desiredHeight, ::UnityEngine::UIElements::____UnityEngine__UIElements__VisualElement__MeasureMode heightMode)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::____UnityEngine__UIElements__DropdownField__PopupTextElement>::get(),
                            "DoMeasure",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::____UnityEngine__UIElements__VisualElement__MeasureMode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::____UnityEngine__UIElements__VisualElement__MeasureMode>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2, false>(const_cast<void*>(instance), ___internal_method, desiredWidth, widthMode, desiredHeight, heightMode);
}
// Ctor Parameters []
 ::UnityEngine::UIElements::____UnityEngine__UIElements__DropdownField__PopupTextElement::____UnityEngine__UIElements__DropdownField__PopupTextElement()  : ::UnityEngine::UIElements::TextElement(THROW_UNLESS(::il2cpp_utils::New<____UnityEngine__UIElements__DropdownField__PopupTextElement>())) {}
 void ::UnityEngine::UIElements::____UnityEngine__UIElements__DropdownField__PopupTextElement::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::____UnityEngine__UIElements__DropdownField__PopupTextElement>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: ::UnityEngine::UIElements::____UnityEngine__UIElements__DropdownField____c__DisplayClass38_0._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::____UnityEngine__UIElements__DropdownField____c__DisplayClass38_0::*)()>(&::UnityEngine::UIElements::____UnityEngine__UIElements__DropdownField____c__DisplayClass38_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2cb138c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::____UnityEngine__UIElements__DropdownField____c__DisplayClass38_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::____UnityEngine__UIElements__DropdownField____c__DisplayClass38_0._AddMenuItems_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::____UnityEngine__UIElements__DropdownField____c__DisplayClass38_0::*)()>(&::UnityEngine::UIElements::____UnityEngine__UIElements__DropdownField____c__DisplayClass38_0::_AddMenuItems_b__0)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2cb2168;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::____UnityEngine__UIElements__DropdownField____c__DisplayClass38_0>::get(),
                            "<AddMenuItems>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::UnityEngine::UIElements::____UnityEngine__UIElements__DropdownField____c__DisplayClass38_0::__set_item(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::UnityEngine::UIElements::____UnityEngine__UIElements__DropdownField____c__DisplayClass38_0::__get_item() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::UIElements::____UnityEngine__UIElements__DropdownField____c__DisplayClass38_0::__set___4__this(::UnityEngine::UIElements::DropdownField value)  {
::cordl_internals::setInstanceField<::UnityEngine::UIElements::DropdownField, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::UIElements::DropdownField>(value));
}
constexpr ::UnityEngine::UIElements::DropdownField ::UnityEngine::UIElements::____UnityEngine__UIElements__DropdownField____c__DisplayClass38_0::__get___4__this() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::DropdownField, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 ::UnityEngine::UIElements::____UnityEngine__UIElements__DropdownField____c__DisplayClass38_0::____UnityEngine__UIElements__DropdownField____c__DisplayClass38_0()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<____UnityEngine__UIElements__DropdownField____c__DisplayClass38_0>())) {}
 void ::UnityEngine::UIElements::____UnityEngine__UIElements__DropdownField____c__DisplayClass38_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::____UnityEngine__UIElements__DropdownField____c__DisplayClass38_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::UIElements::____UnityEngine__UIElements__DropdownField____c__DisplayClass38_0::_AddMenuItems_b__0()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::____UnityEngine__UIElements__DropdownField____c__DisplayClass38_0>::get(),
                            "<AddMenuItems>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
