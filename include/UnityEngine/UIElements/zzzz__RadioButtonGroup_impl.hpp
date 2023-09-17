#pragma once
#include "UnityEngine/UIElements/zzzz__BaseFieldTraits_2_impl.hpp"
#include "UnityEngine/UIElements/zzzz__BaseField_1_impl.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlFactory_2_impl.hpp"
namespace {
#include "UnityEngine/UIElements/zzzz__RadioButtonGroup_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__ChangeEvent_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__IGroupBox_def.hpp"
#include "UnityEngine/UIElements/zzzz__RadioButton_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__EventCallback_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
#include "UnityEngine/UIElements/zzzz__IUxmlAttributes_def.hpp"
#include "UnityEngine/UIElements/zzzz__CreationContext_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlStringAttributeDescription_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::____UnityEngine__UIElements__RadioButtonGroup__UxmlTraits.Init
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::____UnityEngine__UIElements__RadioButtonGroup__UxmlTraits::*)(::UnityEngine::UIElements::VisualElement, ::UnityEngine::UIElements::IUxmlAttributes, ::UnityEngine::UIElements::CreationContext)>(&::UnityEngine::UIElements::____UnityEngine__UIElements__RadioButtonGroup__UxmlTraits::Init)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x2cc601c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::UnityEngine::UIElements::____UnityEngine__UIElements__RadioButtonGroup__UxmlTraits),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::____UnityEngine__UIElements__RadioButtonGroup__UxmlTraits>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::____UnityEngine__UIElements__RadioButtonGroup__UxmlTraits._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::____UnityEngine__UIElements__RadioButtonGroup__UxmlTraits::*)()>(&::UnityEngine::UIElements::____UnityEngine__UIElements__RadioButtonGroup__UxmlTraits::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x2cc6150;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::____UnityEngine__UIElements__RadioButtonGroup__UxmlTraits>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::UnityEngine::UIElements::____UnityEngine__UIElements__RadioButtonGroup__UxmlTraits::__set_m_Choices(::UnityEngine::UIElements::UxmlStringAttributeDescription value)  {
::cordl_internals::setInstanceField<::UnityEngine::UIElements::UxmlStringAttributeDescription, 0x88>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::UIElements::UxmlStringAttributeDescription>(value));
}
constexpr ::UnityEngine::UIElements::UxmlStringAttributeDescription ::UnityEngine::UIElements::____UnityEngine__UIElements__RadioButtonGroup__UxmlTraits::__get_m_Choices() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::UxmlStringAttributeDescription, 0x88>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void ::UnityEngine::UIElements::____UnityEngine__UIElements__RadioButtonGroup__UxmlTraits::Init(::UnityEngine::UIElements::VisualElement ve, ::UnityEngine::UIElements::IUxmlAttributes bag, ::UnityEngine::UIElements::CreationContext cc)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::____UnityEngine__UIElements__RadioButtonGroup__UxmlTraits>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::IUxmlAttributes>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::CreationContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, ve, bag, cc);
}
// Ctor Parameters []
 ::UnityEngine::UIElements::____UnityEngine__UIElements__RadioButtonGroup__UxmlTraits::____UnityEngine__UIElements__RadioButtonGroup__UxmlTraits()  : ::UnityEngine::UIElements::BaseFieldTraits_2<int32_t,::UnityEngine::UIElements::UxmlIntAttributeDescription>(THROW_UNLESS(::il2cpp_utils::New<____UnityEngine__UIElements__RadioButtonGroup__UxmlTraits>())) {}
 void ::UnityEngine::UIElements::____UnityEngine__UIElements__RadioButtonGroup__UxmlTraits::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::____UnityEngine__UIElements__RadioButtonGroup__UxmlTraits>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: ::UnityEngine::UIElements::RadioButtonGroup.set_choices
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::RadioButtonGroup::*)(::System::Collections::Generic::IEnumerable_1<::StringW>)>(&::UnityEngine::UIElements::RadioButtonGroup::set_choices)> {
  constexpr static std::size_t size = 0x59c;
  constexpr static std::size_t addrs = 0x2cc54cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::RadioButtonGroup>::get(),
                            "set_choices",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::StringW>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::RadioButtonGroup._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::RadioButtonGroup::*)()>(&::UnityEngine::UIElements::RadioButtonGroup::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2cc5c54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::RadioButtonGroup>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::RadioButtonGroup._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::RadioButtonGroup::*)(::StringW, ::System::Collections::Generic::List_1<::StringW>)>(&::UnityEngine::UIElements::RadioButtonGroup::_ctor)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x2cc5c60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::RadioButtonGroup>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::StringW>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::RadioButtonGroup.RadioButtonValueChangedCallback
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::RadioButtonGroup::*)(::UnityEngine::UIElements::ChangeEvent_1<bool>)>(&::UnityEngine::UIElements::RadioButtonGroup::RadioButtonValueChangedCallback)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x2cc5e18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::RadioButtonGroup>::get(),
                            "RadioButtonValueChangedCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::ChangeEvent_1<bool>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::RadioButtonGroup.SetValueWithoutNotify
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::RadioButtonGroup::*)(int32_t)>(&::UnityEngine::UIElements::RadioButtonGroup::SetValueWithoutNotify)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2cc5f14;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::UnityEngine::UIElements::RadioButtonGroup),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::RadioButtonGroup>::get(),
                                  105
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::RadioButtonGroup.UpdateRadioButtons
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::RadioButtonGroup::*)()>(&::UnityEngine::UIElements::RadioButtonGroup::UpdateRadioButtons)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x2cc5a68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::RadioButtonGroup>::get(),
                            "UpdateRadioButtons",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::UnityEngine::UIElements::IGroupBox
constexpr  ::UnityEngine::UIElements::RadioButtonGroup::operator ::UnityEngine::UIElements::IGroupBox() const noexcept {
return ::UnityEngine::UIElements::IGroupBox(::bs_hook::Il2CppWrapperType::instance);
}
 void ::UnityEngine::UIElements::RadioButtonGroup::__set_ussClassName(::StringW value)  {
::cordl_internals::setStaticField<::StringW, "ussClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::RadioButtonGroup>::get>(std::forward<::StringW>(value));
}
 ::StringW ::UnityEngine::UIElements::RadioButtonGroup::__get_ussClassName()  {
return ::cordl_internals::getStaticField<::StringW, "ussClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::RadioButtonGroup>::get>();
}
constexpr void ::UnityEngine::UIElements::RadioButtonGroup::__set_m_Choices(::System::Collections::Generic::IEnumerable_1<::StringW> value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::IEnumerable_1<::StringW>, 0x408>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::Generic::IEnumerable_1<::StringW>>(value));
}
constexpr ::System::Collections::Generic::IEnumerable_1<::StringW> ::UnityEngine::UIElements::RadioButtonGroup::__get_m_Choices() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::IEnumerable_1<::StringW>, 0x408>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::UIElements::RadioButtonGroup::__set_m_RadioButtons(::System::Collections::Generic::List_1<::UnityEngine::UIElements::RadioButton> value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::UnityEngine::UIElements::RadioButton>, 0x410>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::Generic::List_1<::UnityEngine::UIElements::RadioButton>>(value));
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::RadioButton> ::UnityEngine::UIElements::RadioButtonGroup::__get_m_RadioButtons() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::UnityEngine::UIElements::RadioButton>, 0x410>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::UIElements::RadioButtonGroup::__set_m_RadioButtonValueChangedCallback(::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::ChangeEvent_1<bool>> value)  {
::cordl_internals::setInstanceField<::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::ChangeEvent_1<bool>>, 0x418>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::ChangeEvent_1<bool>>>(value));
}
constexpr ::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::ChangeEvent_1<bool>> ::UnityEngine::UIElements::RadioButtonGroup::__get_m_RadioButtonValueChangedCallback() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::ChangeEvent_1<bool>>, 0x418>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void ::UnityEngine::UIElements::RadioButtonGroup::set_choices(::System::Collections::Generic::IEnumerable_1<::StringW> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::RadioButtonGroup>::get(),
                            "set_choices",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::StringW>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
// Ctor Parameters []
 ::UnityEngine::UIElements::RadioButtonGroup::RadioButtonGroup()  : ::UnityEngine::UIElements::BaseField_1<int32_t>(THROW_UNLESS(::il2cpp_utils::New<RadioButtonGroup>())) {}
 void ::UnityEngine::UIElements::RadioButtonGroup::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::RadioButtonGroup>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters [CppParam { name: "label", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "radioButtonChoices", ty: "::System::Collections::Generic::List_1<::StringW>", modifiers: "", def_value: Some("csnull") }]
 ::UnityEngine::UIElements::RadioButtonGroup::RadioButtonGroup(::StringW label, ::System::Collections::Generic::List_1<::StringW> radioButtonChoices)  : ::UnityEngine::UIElements::BaseField_1<int32_t>(THROW_UNLESS(::il2cpp_utils::New<RadioButtonGroup>(label, radioButtonChoices))) {}
/// @param radioButtonChoices: ::System::Collections::Generic::List_1<::StringW> (default: csnull)
 void ::UnityEngine::UIElements::RadioButtonGroup::_ctor(::StringW label, ::System::Collections::Generic::List_1<::StringW> radioButtonChoices)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::RadioButtonGroup>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::StringW>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, label, radioButtonChoices);
}
 void ::UnityEngine::UIElements::RadioButtonGroup::RadioButtonValueChangedCallback(::UnityEngine::UIElements::ChangeEvent_1<bool> evt)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::RadioButtonGroup>::get(),
                            "RadioButtonValueChangedCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::ChangeEvent_1<bool>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, evt);
}
 void ::UnityEngine::UIElements::RadioButtonGroup::SetValueWithoutNotify(int32_t newValue)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::RadioButtonGroup>::get(),
                            "SetValueWithoutNotify",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, newValue);
}
 void ::UnityEngine::UIElements::RadioButtonGroup::UpdateRadioButtons()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::RadioButtonGroup>::get(),
                            "UpdateRadioButtons",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: ::UnityEngine::UIElements::____UnityEngine__UIElements__RadioButtonGroup__UxmlFactory._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::____UnityEngine__UIElements__RadioButtonGroup__UxmlFactory::*)()>(&::UnityEngine::UIElements::____UnityEngine__UIElements__RadioButtonGroup__UxmlFactory::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2cc5fd4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::____UnityEngine__UIElements__RadioButtonGroup__UxmlFactory>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters []
 ::UnityEngine::UIElements::____UnityEngine__UIElements__RadioButtonGroup__UxmlFactory::____UnityEngine__UIElements__RadioButtonGroup__UxmlFactory()  : ::UnityEngine::UIElements::UxmlFactory_2<::UnityEngine::UIElements::RadioButtonGroup,::UnityEngine::UIElements::____UnityEngine__UIElements__RadioButtonGroup__UxmlTraits>(THROW_UNLESS(::il2cpp_utils::New<____UnityEngine__UIElements__RadioButtonGroup__UxmlFactory>())) {}
 void ::UnityEngine::UIElements::____UnityEngine__UIElements__RadioButtonGroup__UxmlFactory::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::____UnityEngine__UIElements__RadioButtonGroup__UxmlFactory>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
