#pragma once
#include "UnityEngine/UIElements/zzzz__UxmlFactory_2_impl.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_impl.hpp"
namespace {
#include "UIToolkitUtilities/Controls/zzzz__Table_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlChildElementDescription_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_3_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "UnityEngine/UIElements/zzzz__ScrollView_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
#include "UnityEngine/UIElements/zzzz__ScrollerVisibility_def.hpp"
#include "UnityEngine/UIElements/zzzz__CreationContext_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlIntAttributeDescription_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlBoolAttributeDescription_def.hpp"
#include "UnityEngine/UIElements/zzzz__IUxmlAttributes_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlEnumAttributeDescription_1_def.hpp"
//  Writing Method size for method: ::UIToolkitUtilities::Controls::____UIToolkitUtilities__Controls__Table__TableColumn._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UIToolkitUtilities::Controls::____UIToolkitUtilities__Controls__Table__TableColumn::*)(::StringW, ::bs_hook::EnumTypeWrapper)>(&::UIToolkitUtilities::Controls::____UIToolkitUtilities__Controls__Table__TableColumn::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x287c7fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UIToolkitUtilities::Controls::____UIToolkitUtilities__Controls__Table__TableColumn>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::EnumTypeWrapper>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UIToolkitUtilities::Controls::____UIToolkitUtilities__Controls__Table__TableColumn._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UIToolkitUtilities::Controls::____UIToolkitUtilities__Controls__Table__TableColumn::*)(::StringW, ::StringW, ::bs_hook::EnumTypeWrapper, bool, int32_t, int32_t)>(&::UIToolkitUtilities::Controls::____UIToolkitUtilities__Controls__Table__TableColumn::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x287c83c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UIToolkitUtilities::Controls::____UIToolkitUtilities__Controls__Table__TableColumn>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::EnumTypeWrapper>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void ::UIToolkitUtilities::Controls::____UIToolkitUtilities__Controls__Table__TableColumn::__set_name(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::UIToolkitUtilities::Controls::____UIToolkitUtilities__Controls__Table__TableColumn::__get_name() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UIToolkitUtilities::Controls::____UIToolkitUtilities__Controls__Table__TableColumn::__set_headerTooltip(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::UIToolkitUtilities::Controls::____UIToolkitUtilities__Controls__Table__TableColumn::__get_headerTooltip() const {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UIToolkitUtilities::Controls::____UIToolkitUtilities__Controls__Table__TableColumn::__set_cellType(::bs_hook::EnumTypeWrapper value)  {
::cordl_internals::setInstanceField<::bs_hook::EnumTypeWrapper, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::bs_hook::EnumTypeWrapper>(value));
}
constexpr ::bs_hook::EnumTypeWrapper ::UIToolkitUtilities::Controls::____UIToolkitUtilities__Controls__Table__TableColumn::__get_cellType() const {
return ::cordl_internals::getInstanceField<::bs_hook::EnumTypeWrapper, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UIToolkitUtilities::Controls::____UIToolkitUtilities__Controls__Table__TableColumn::__set_initialVisibility(bool value)  {
::cordl_internals::setInstanceField<bool, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::UIToolkitUtilities::Controls::____UIToolkitUtilities__Controls__Table__TableColumn::__get_initialVisibility() const {
return ::cordl_internals::getInstanceField<bool, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UIToolkitUtilities::Controls::____UIToolkitUtilities__Controls__Table__TableColumn::__set_minWidth(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x2c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UIToolkitUtilities::Controls::____UIToolkitUtilities__Controls__Table__TableColumn::__get_minWidth() const {
return ::cordl_internals::getInstanceField<int32_t, 0x2c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UIToolkitUtilities::Controls::____UIToolkitUtilities__Controls__Table__TableColumn::__set_maxWidth(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UIToolkitUtilities::Controls::____UIToolkitUtilities__Controls__Table__TableColumn::__get_maxWidth() const {
return ::cordl_internals::getInstanceField<int32_t, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "cellType", ty: "::bs_hook::EnumTypeWrapper", modifiers: "", def_value: None }]
 ::UIToolkitUtilities::Controls::____UIToolkitUtilities__Controls__Table__TableColumn::____UIToolkitUtilities__Controls__Table__TableColumn(::StringW name, ::bs_hook::EnumTypeWrapper cellType)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<____UIToolkitUtilities__Controls__Table__TableColumn>(name, cellType))) {}
 void ::UIToolkitUtilities::Controls::____UIToolkitUtilities__Controls__Table__TableColumn::_ctor(::StringW name, ::bs_hook::EnumTypeWrapper cellType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UIToolkitUtilities::Controls::____UIToolkitUtilities__Controls__Table__TableColumn>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::EnumTypeWrapper>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, name, cellType);
}
// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: Some("u\"\"") }, CppParam { name: "headerTooltip", ty: "::StringW", modifiers: "", def_value: Some("u\"\"") }, CppParam { name: "cellType", ty: "::bs_hook::EnumTypeWrapper", modifiers: "", def_value: Some("csnull") }, CppParam { name: "visible", ty: "bool", modifiers: "", def_value: Some("true") }, CppParam { name: "minWidth", ty: "int32_t", modifiers: "", def_value: Some("-1") }, CppParam { name: "maxWidth", ty: "int32_t", modifiers: "", def_value: Some("-1") }]
 ::UIToolkitUtilities::Controls::____UIToolkitUtilities__Controls__Table__TableColumn::____UIToolkitUtilities__Controls__Table__TableColumn(::StringW name, ::StringW headerTooltip, ::bs_hook::EnumTypeWrapper cellType, bool visible, int32_t minWidth, int32_t maxWidth)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<____UIToolkitUtilities__Controls__Table__TableColumn>(name, headerTooltip, cellType, visible, minWidth, maxWidth))) {}
/// @param name: ::StringW (default: u"")
/// @param headerTooltip: ::StringW (default: u"")
/// @param cellType: ::bs_hook::EnumTypeWrapper (default: csnull)
/// @param visible: bool (default: true)
/// @param minWidth: int32_t (default: -1)
/// @param maxWidth: int32_t (default: -1)
 void ::UIToolkitUtilities::Controls::____UIToolkitUtilities__Controls__Table__TableColumn::_ctor(::StringW name, ::StringW headerTooltip, ::bs_hook::EnumTypeWrapper cellType, bool visible, int32_t minWidth, int32_t maxWidth)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UIToolkitUtilities::Controls::____UIToolkitUtilities__Controls__Table__TableColumn>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::EnumTypeWrapper>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, name, headerTooltip, cellType, visible, minWidth, maxWidth);
}
//  Writing Method size for method: ::UIToolkitUtilities::Controls::____UIToolkitUtilities__Controls__Table__RuntimeTableColumn._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UIToolkitUtilities::Controls::____UIToolkitUtilities__Controls__Table__RuntimeTableColumn::*)()>(&::UIToolkitUtilities::Controls::____UIToolkitUtilities__Controls__Table__RuntimeTableColumn::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x287be20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UIToolkitUtilities::Controls::____UIToolkitUtilities__Controls__Table__RuntimeTableColumn>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::UIToolkitUtilities::Controls::____UIToolkitUtilities__Controls__Table__RuntimeTableColumn::__set_visibleColumnIndex(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UIToolkitUtilities::Controls::____UIToolkitUtilities__Controls__Table__RuntimeTableColumn::__get_visibleColumnIndex() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UIToolkitUtilities::Controls::____UIToolkitUtilities__Controls__Table__RuntimeTableColumn::__set_visible(bool value)  {
::cordl_internals::setInstanceField<bool, 0x14>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::UIToolkitUtilities::Controls::____UIToolkitUtilities__Controls__Table__RuntimeTableColumn::__get_visible() const {
return ::cordl_internals::getInstanceField<bool, 0x14>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 ::UIToolkitUtilities::Controls::____UIToolkitUtilities__Controls__Table__RuntimeTableColumn::____UIToolkitUtilities__Controls__Table__RuntimeTableColumn()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<____UIToolkitUtilities__Controls__Table__RuntimeTableColumn>())) {}
 void ::UIToolkitUtilities::Controls::____UIToolkitUtilities__Controls__Table__RuntimeTableColumn::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UIToolkitUtilities::Controls::____UIToolkitUtilities__Controls__Table__RuntimeTableColumn>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: ::UIToolkitUtilities::Controls::____UIToolkitUtilities__Controls__Table__UxmlTraits.get_uxmlChildElementsDescription
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::UxmlChildElementDescription> (::UIToolkitUtilities::Controls::____UIToolkitUtilities__Controls__Table__UxmlTraits::*)()>(&::UIToolkitUtilities::Controls::____UIToolkitUtilities__Controls__Table__UxmlTraits::get_uxmlChildElementsDescription)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x287c8ec;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::UIToolkitUtilities::Controls::____UIToolkitUtilities__Controls__Table__UxmlTraits),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UIToolkitUtilities::Controls::____UIToolkitUtilities__Controls__Table__UxmlTraits>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UIToolkitUtilities::Controls::____UIToolkitUtilities__Controls__Table__UxmlTraits.Init
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UIToolkitUtilities::Controls::____UIToolkitUtilities__Controls__Table__UxmlTraits::*)(::UnityEngine::UIElements::VisualElement, ::UnityEngine::UIElements::IUxmlAttributes, ::UnityEngine::UIElements::CreationContext)>(&::UIToolkitUtilities::Controls::____UIToolkitUtilities__Controls__Table__UxmlTraits::Init)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x287c990;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::UIToolkitUtilities::Controls::____UIToolkitUtilities__Controls__Table__UxmlTraits),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UIToolkitUtilities::Controls::____UIToolkitUtilities__Controls__Table__UxmlTraits>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UIToolkitUtilities::Controls::____UIToolkitUtilities__Controls__Table__UxmlTraits._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UIToolkitUtilities::Controls::____UIToolkitUtilities__Controls__Table__UxmlTraits::*)()>(&::UIToolkitUtilities::Controls::____UIToolkitUtilities__Controls__Table__UxmlTraits::_ctor)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x287cb38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UIToolkitUtilities::Controls::____UIToolkitUtilities__Controls__Table__UxmlTraits>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::UIToolkitUtilities::Controls::____UIToolkitUtilities__Controls__Table__UxmlTraits::__set__showHeader(::UnityEngine::UIElements::UxmlBoolAttributeDescription value)  {
::cordl_internals::setInstanceField<::UnityEngine::UIElements::UxmlBoolAttributeDescription, 0x70>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::UIElements::UxmlBoolAttributeDescription>(value));
}
constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription ::UIToolkitUtilities::Controls::____UIToolkitUtilities__Controls__Table__UxmlTraits::__get__showHeader() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::UxmlBoolAttributeDescription, 0x70>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UIToolkitUtilities::Controls::____UIToolkitUtilities__Controls__Table__UxmlTraits::__set__showFooter(::UnityEngine::UIElements::UxmlBoolAttributeDescription value)  {
::cordl_internals::setInstanceField<::UnityEngine::UIElements::UxmlBoolAttributeDescription, 0x78>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::UIElements::UxmlBoolAttributeDescription>(value));
}
constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription ::UIToolkitUtilities::Controls::____UIToolkitUtilities__Controls__Table__UxmlTraits::__get__showFooter() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::UxmlBoolAttributeDescription, 0x78>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UIToolkitUtilities::Controls::____UIToolkitUtilities__Controls__Table__UxmlTraits::__set__numRows(::UnityEngine::UIElements::UxmlIntAttributeDescription value)  {
::cordl_internals::setInstanceField<::UnityEngine::UIElements::UxmlIntAttributeDescription, 0x80>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::UIElements::UxmlIntAttributeDescription>(value));
}
constexpr ::UnityEngine::UIElements::UxmlIntAttributeDescription ::UIToolkitUtilities::Controls::____UIToolkitUtilities__Controls__Table__UxmlTraits::__get__numRows() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::UxmlIntAttributeDescription, 0x80>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UIToolkitUtilities::Controls::____UIToolkitUtilities__Controls__Table__UxmlTraits::__set__verticalScrollerVisibility(::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::ScrollerVisibility> value)  {
::cordl_internals::setInstanceField<::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::ScrollerVisibility>, 0x88>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::ScrollerVisibility>>(value));
}
constexpr ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::ScrollerVisibility> ::UIToolkitUtilities::Controls::____UIToolkitUtilities__Controls__Table__UxmlTraits::__get__verticalScrollerVisibility() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::ScrollerVisibility>, 0x88>(this->::bs_hook::Il2CppWrapperType::instance);
}
 ::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::UxmlChildElementDescription> ::UIToolkitUtilities::Controls::____UIToolkitUtilities__Controls__Table__UxmlTraits::get_uxmlChildElementsDescription()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UIToolkitUtilities::Controls::____UIToolkitUtilities__Controls__Table__UxmlTraits>::get(),
                            "get_uxmlChildElementsDescription",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::UxmlChildElementDescription>, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UIToolkitUtilities::Controls::____UIToolkitUtilities__Controls__Table__UxmlTraits::Init(::UnityEngine::UIElements::VisualElement ve, ::UnityEngine::UIElements::IUxmlAttributes bag, ::UnityEngine::UIElements::CreationContext cc)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UIToolkitUtilities::Controls::____UIToolkitUtilities__Controls__Table__UxmlTraits>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::IUxmlAttributes>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::CreationContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, ve, bag, cc);
}
// Ctor Parameters []
 ::UIToolkitUtilities::Controls::____UIToolkitUtilities__Controls__Table__UxmlTraits::____UIToolkitUtilities__Controls__Table__UxmlTraits()  : ::UnityEngine::UIElements::____UnityEngine__UIElements__VisualElement__UxmlTraits(THROW_UNLESS(::il2cpp_utils::New<____UIToolkitUtilities__Controls__Table__UxmlTraits>())) {}
 void ::UIToolkitUtilities::Controls::____UIToolkitUtilities__Controls__Table__UxmlTraits::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UIToolkitUtilities::Controls::____UIToolkitUtilities__Controls__Table__UxmlTraits>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: ::UIToolkitUtilities::Controls::Table.get_showHeader
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UIToolkitUtilities::Controls::Table::*)()>(&::UIToolkitUtilities::Controls::Table::get_showHeader)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x287ba08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UIToolkitUtilities::Controls::Table>::get(),
                            "get_showHeader",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UIToolkitUtilities::Controls::Table.set_showHeader
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UIToolkitUtilities::Controls::Table::*)(bool)>(&::UIToolkitUtilities::Controls::Table::set_showHeader)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x287ba10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UIToolkitUtilities::Controls::Table>::get(),
                            "set_showHeader",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UIToolkitUtilities::Controls::Table.get_showFooter
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UIToolkitUtilities::Controls::Table::*)()>(&::UIToolkitUtilities::Controls::Table::get_showFooter)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x287ba1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UIToolkitUtilities::Controls::Table>::get(),
                            "get_showFooter",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UIToolkitUtilities::Controls::Table.set_showFooter
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UIToolkitUtilities::Controls::Table::*)(bool)>(&::UIToolkitUtilities::Controls::Table::set_showFooter)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x287ba24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UIToolkitUtilities::Controls::Table>::get(),
                            "set_showFooter",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UIToolkitUtilities::Controls::Table.get_numRows
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UIToolkitUtilities::Controls::Table::*)()>(&::UIToolkitUtilities::Controls::Table::get_numRows)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x287ba30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UIToolkitUtilities::Controls::Table>::get(),
                            "get_numRows",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UIToolkitUtilities::Controls::Table.set_numRows
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UIToolkitUtilities::Controls::Table::*)(int32_t)>(&::UIToolkitUtilities::Controls::Table::set_numRows)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x287ba38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UIToolkitUtilities::Controls::Table>::get(),
                            "set_numRows",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UIToolkitUtilities::Controls::Table.get_initialized
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UIToolkitUtilities::Controls::Table::*)()>(&::UIToolkitUtilities::Controls::Table::get_initialized)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x287ba40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UIToolkitUtilities::Controls::Table>::get(),
                            "get_initialized",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UIToolkitUtilities::Controls::Table.set_initialized
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UIToolkitUtilities::Controls::Table::*)(bool)>(&::UIToolkitUtilities::Controls::Table::set_initialized)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x287ba48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UIToolkitUtilities::Controls::Table>::get(),
                            "set_initialized",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UIToolkitUtilities::Controls::Table._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UIToolkitUtilities::Controls::Table::*)()>(&::UIToolkitUtilities::Controls::Table::_ctor)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x287ba54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UIToolkitUtilities::Controls::Table>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UIToolkitUtilities::Controls::Table.Initialize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UIToolkitUtilities::Controls::Table::*)(::System::Collections::Generic::List_1<::UIToolkitUtilities::Controls::____UIToolkitUtilities__Controls__Table__TableColumn>)>(&::UIToolkitUtilities::Controls::Table::Initialize)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x287bc38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UIToolkitUtilities::Controls::Table>::get(),
                            "Initialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UIToolkitUtilities::Controls::____UIToolkitUtilities__Controls__Table__TableColumn>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UIToolkitUtilities::Controls::Table.BuildTable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UIToolkitUtilities::Controls::Table::*)()>(&::UIToolkitUtilities::Controls::Table::BuildTable)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x287be28;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::UIToolkitUtilities::Controls::Table),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UIToolkitUtilities::Controls::Table>::get(),
                                  96
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UIToolkitUtilities::Controls::Table.ClearTable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UIToolkitUtilities::Controls::Table::*)()>(&::UIToolkitUtilities::Controls::Table::ClearTable)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x287c158;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UIToolkitUtilities::Controls::Table>::get(),
                            "ClearTable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UIToolkitUtilities::Controls::Table.CreateRowSkeleton
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::VisualElement (::UIToolkitUtilities::Controls::Table::*)()>(&::UIToolkitUtilities::Controls::Table::CreateRowSkeleton)> {
  constexpr static std::size_t size = 0x480;
  constexpr static std::size_t addrs = 0x287c16c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UIToolkitUtilities::Controls::Table>::get(),
                            "CreateRowSkeleton",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UIToolkitUtilities::Controls::Table.CreateHeaderRow
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::VisualElement (::UIToolkitUtilities::Controls::Table::*)()>(&::UIToolkitUtilities::Controls::Table::CreateHeaderRow)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x287c5ec;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::UIToolkitUtilities::Controls::Table),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UIToolkitUtilities::Controls::Table>::get(),
                                  97
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UIToolkitUtilities::Controls::Table.CreateRow
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::VisualElement (::UIToolkitUtilities::Controls::Table::*)(int32_t)>(&::UIToolkitUtilities::Controls::Table::CreateRow)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x287bea8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UIToolkitUtilities::Controls::Table>::get(),
                            "CreateRow",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UIToolkitUtilities::Controls::Table.CreateFooterRow
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::VisualElement (::UIToolkitUtilities::Controls::Table::*)()>(&::UIToolkitUtilities::Controls::Table::CreateFooterRow)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x287c024;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UIToolkitUtilities::Controls::Table>::get(),
                            "CreateFooterRow",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::UIToolkitUtilities::Controls::Table::__set__showHeader_k__BackingField(bool value)  {
::cordl_internals::setInstanceField<bool, 0x3b0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::UIToolkitUtilities::Controls::Table::__get__showHeader_k__BackingField() const {
return ::cordl_internals::getInstanceField<bool, 0x3b0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UIToolkitUtilities::Controls::Table::__set__showFooter_k__BackingField(bool value)  {
::cordl_internals::setInstanceField<bool, 0x3b1>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::UIToolkitUtilities::Controls::Table::__get__showFooter_k__BackingField() const {
return ::cordl_internals::getInstanceField<bool, 0x3b1>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UIToolkitUtilities::Controls::Table::__set__numRows_k__BackingField(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x3b4>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UIToolkitUtilities::Controls::Table::__get__numRows_k__BackingField() const {
return ::cordl_internals::getInstanceField<int32_t, 0x3b4>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UIToolkitUtilities::Controls::Table::__set_fillCellEvent(::System::Action_3<::bs_hook::EnumTypeWrapper,int32_t,::UnityEngine::UIElements::VisualElement> value)  {
::cordl_internals::setInstanceField<::System::Action_3<::bs_hook::EnumTypeWrapper,int32_t,::UnityEngine::UIElements::VisualElement>, 0x3b8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Action_3<::bs_hook::EnumTypeWrapper,int32_t,::UnityEngine::UIElements::VisualElement>>(value));
}
constexpr ::System::Action_3<::bs_hook::EnumTypeWrapper,int32_t,::UnityEngine::UIElements::VisualElement> ::UIToolkitUtilities::Controls::Table::__get_fillCellEvent() const {
return ::cordl_internals::getInstanceField<::System::Action_3<::bs_hook::EnumTypeWrapper,int32_t,::UnityEngine::UIElements::VisualElement>, 0x3b8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UIToolkitUtilities::Controls::Table::__set_fillFooterCellEvent(::System::Action_2<::bs_hook::EnumTypeWrapper,::UnityEngine::UIElements::VisualElement> value)  {
::cordl_internals::setInstanceField<::System::Action_2<::bs_hook::EnumTypeWrapper,::UnityEngine::UIElements::VisualElement>, 0x3c0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Action_2<::bs_hook::EnumTypeWrapper,::UnityEngine::UIElements::VisualElement>>(value));
}
constexpr ::System::Action_2<::bs_hook::EnumTypeWrapper,::UnityEngine::UIElements::VisualElement> ::UIToolkitUtilities::Controls::Table::__get_fillFooterCellEvent() const {
return ::cordl_internals::getInstanceField<::System::Action_2<::bs_hook::EnumTypeWrapper,::UnityEngine::UIElements::VisualElement>, 0x3c0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UIToolkitUtilities::Controls::Table::__set_fillRowEvent(::System::Action_2<int32_t,::UnityEngine::UIElements::VisualElement> value)  {
::cordl_internals::setInstanceField<::System::Action_2<int32_t,::UnityEngine::UIElements::VisualElement>, 0x3c8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Action_2<int32_t,::UnityEngine::UIElements::VisualElement>>(value));
}
constexpr ::System::Action_2<int32_t,::UnityEngine::UIElements::VisualElement> ::UIToolkitUtilities::Controls::Table::__get_fillRowEvent() const {
return ::cordl_internals::getInstanceField<::System::Action_2<int32_t,::UnityEngine::UIElements::VisualElement>, 0x3c8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UIToolkitUtilities::Controls::Table::__set__initialized_k__BackingField(bool value)  {
::cordl_internals::setInstanceField<bool, 0x3d0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::UIToolkitUtilities::Controls::Table::__get__initialized_k__BackingField() const {
return ::cordl_internals::getInstanceField<bool, 0x3d0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UIToolkitUtilities::Controls::Table::__set_columnSetup(::System::Collections::Generic::List_1<::UIToolkitUtilities::Controls::____UIToolkitUtilities__Controls__Table__TableColumn> value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::UIToolkitUtilities::Controls::____UIToolkitUtilities__Controls__Table__TableColumn>, 0x3d8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::Generic::List_1<::UIToolkitUtilities::Controls::____UIToolkitUtilities__Controls__Table__TableColumn>>(value));
}
constexpr ::System::Collections::Generic::List_1<::UIToolkitUtilities::Controls::____UIToolkitUtilities__Controls__Table__TableColumn> ::UIToolkitUtilities::Controls::Table::__get_columnSetup() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::UIToolkitUtilities::Controls::____UIToolkitUtilities__Controls__Table__TableColumn>, 0x3d8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UIToolkitUtilities::Controls::Table::__set_runtimeColumnData(::System::Collections::Generic::List_1<::UIToolkitUtilities::Controls::____UIToolkitUtilities__Controls__Table__RuntimeTableColumn> value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::UIToolkitUtilities::Controls::____UIToolkitUtilities__Controls__Table__RuntimeTableColumn>, 0x3e0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::Generic::List_1<::UIToolkitUtilities::Controls::____UIToolkitUtilities__Controls__Table__RuntimeTableColumn>>(value));
}
constexpr ::System::Collections::Generic::List_1<::UIToolkitUtilities::Controls::____UIToolkitUtilities__Controls__Table__RuntimeTableColumn> ::UIToolkitUtilities::Controls::Table::__get_runtimeColumnData() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::UIToolkitUtilities::Controls::____UIToolkitUtilities__Controls__Table__RuntimeTableColumn>, 0x3e0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UIToolkitUtilities::Controls::Table::__set_scrollView(::UnityEngine::UIElements::ScrollView value)  {
::cordl_internals::setInstanceField<::UnityEngine::UIElements::ScrollView, 0x3e8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::UIElements::ScrollView>(value));
}
constexpr ::UnityEngine::UIElements::ScrollView ::UIToolkitUtilities::Controls::Table::__get_scrollView() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::ScrollView, 0x3e8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UIToolkitUtilities::Controls::Table::__set_scrollViewContentContainer(::UnityEngine::UIElements::VisualElement value)  {
::cordl_internals::setInstanceField<::UnityEngine::UIElements::VisualElement, 0x3f0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::UIElements::VisualElement>(value));
}
constexpr ::UnityEngine::UIElements::VisualElement ::UIToolkitUtilities::Controls::Table::__get_scrollViewContentContainer() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::VisualElement, 0x3f0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UIToolkitUtilities::Controls::Table::__set_newRowIsAltStyle(bool value)  {
::cordl_internals::setInstanceField<bool, 0x3f8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::UIToolkitUtilities::Controls::Table::__get_newRowIsAltStyle() const {
return ::cordl_internals::getInstanceField<bool, 0x3f8>(this->::bs_hook::Il2CppWrapperType::instance);
}
 bool ::UIToolkitUtilities::Controls::Table::get_showHeader()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UIToolkitUtilities::Controls::Table>::get(),
                            "get_showHeader",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UIToolkitUtilities::Controls::Table::set_showHeader(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UIToolkitUtilities::Controls::Table>::get(),
                            "set_showHeader",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 bool ::UIToolkitUtilities::Controls::Table::get_showFooter()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UIToolkitUtilities::Controls::Table>::get(),
                            "get_showFooter",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UIToolkitUtilities::Controls::Table::set_showFooter(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UIToolkitUtilities::Controls::Table>::get(),
                            "set_showFooter",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 int32_t ::UIToolkitUtilities::Controls::Table::get_numRows()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UIToolkitUtilities::Controls::Table>::get(),
                            "get_numRows",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UIToolkitUtilities::Controls::Table::set_numRows(int32_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UIToolkitUtilities::Controls::Table>::get(),
                            "set_numRows",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 bool ::UIToolkitUtilities::Controls::Table::get_initialized()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UIToolkitUtilities::Controls::Table>::get(),
                            "get_initialized",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UIToolkitUtilities::Controls::Table::set_initialized(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UIToolkitUtilities::Controls::Table>::get(),
                            "set_initialized",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
// Ctor Parameters []
 ::UIToolkitUtilities::Controls::Table::Table()  : ::UnityEngine::UIElements::VisualElement(THROW_UNLESS(::il2cpp_utils::New<Table>())) {}
 void ::UIToolkitUtilities::Controls::Table::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UIToolkitUtilities::Controls::Table>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UIToolkitUtilities::Controls::Table::Initialize(::System::Collections::Generic::List_1<::UIToolkitUtilities::Controls::____UIToolkitUtilities__Controls__Table__TableColumn> columnSetup)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UIToolkitUtilities::Controls::Table>::get(),
                            "Initialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UIToolkitUtilities::Controls::____UIToolkitUtilities__Controls__Table__TableColumn>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, columnSetup);
}
 void ::UIToolkitUtilities::Controls::Table::BuildTable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UIToolkitUtilities::Controls::Table>::get(),
                            "BuildTable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UIToolkitUtilities::Controls::Table::ClearTable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UIToolkitUtilities::Controls::Table>::get(),
                            "ClearTable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::UnityEngine::UIElements::VisualElement ::UIToolkitUtilities::Controls::Table::CreateRowSkeleton()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UIToolkitUtilities::Controls::Table>::get(),
                            "CreateRowSkeleton",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::VisualElement, false>(const_cast<void*>(instance), ___internal_method);
}
 ::UnityEngine::UIElements::VisualElement ::UIToolkitUtilities::Controls::Table::CreateHeaderRow()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UIToolkitUtilities::Controls::Table>::get(),
                            "CreateHeaderRow",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::VisualElement, false>(const_cast<void*>(instance), ___internal_method);
}
 ::UnityEngine::UIElements::VisualElement ::UIToolkitUtilities::Controls::Table::CreateRow(int32_t rowIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UIToolkitUtilities::Controls::Table>::get(),
                            "CreateRow",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::VisualElement, false>(const_cast<void*>(instance), ___internal_method, rowIndex);
}
 ::UnityEngine::UIElements::VisualElement ::UIToolkitUtilities::Controls::Table::CreateFooterRow()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UIToolkitUtilities::Controls::Table>::get(),
                            "CreateFooterRow",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::VisualElement, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: ::UIToolkitUtilities::Controls::____UIToolkitUtilities__Controls__Table__UxmlFactory._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UIToolkitUtilities::Controls::____UIToolkitUtilities__Controls__Table__UxmlFactory::*)()>(&::UIToolkitUtilities::Controls::____UIToolkitUtilities__Controls__Table__UxmlFactory::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x287c8a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UIToolkitUtilities::Controls::____UIToolkitUtilities__Controls__Table__UxmlFactory>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters []
 ::UIToolkitUtilities::Controls::____UIToolkitUtilities__Controls__Table__UxmlFactory::____UIToolkitUtilities__Controls__Table__UxmlFactory()  : ::UnityEngine::UIElements::UxmlFactory_2<::UIToolkitUtilities::Controls::Table,::UIToolkitUtilities::Controls::____UIToolkitUtilities__Controls__Table__UxmlTraits>(THROW_UNLESS(::il2cpp_utils::New<____UIToolkitUtilities__Controls__Table__UxmlFactory>())) {}
 void ::UIToolkitUtilities::Controls::____UIToolkitUtilities__Controls__Table__UxmlFactory::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UIToolkitUtilities::Controls::____UIToolkitUtilities__Controls__Table__UxmlFactory>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: ::GlobalNamespace::______UIToolkitUtilities__Controls__Table__UxmlTraits___get_uxmlChildElementsDescription_d__5._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::______UIToolkitUtilities__Controls__Table__UxmlTraits___get_uxmlChildElementsDescription_d__5::*)(int32_t)>(&::GlobalNamespace::______UIToolkitUtilities__Controls__Table__UxmlTraits___get_uxmlChildElementsDescription_d__5::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x287c95c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::______UIToolkitUtilities__Controls__Table__UxmlTraits___get_uxmlChildElementsDescription_d__5>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::______UIToolkitUtilities__Controls__Table__UxmlTraits___get_uxmlChildElementsDescription_d__5.System_IDisposable_Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::______UIToolkitUtilities__Controls__Table__UxmlTraits___get_uxmlChildElementsDescription_d__5::*)()>(&::GlobalNamespace::______UIToolkitUtilities__Controls__Table__UxmlTraits___get_uxmlChildElementsDescription_d__5::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x287cca8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::______UIToolkitUtilities__Controls__Table__UxmlTraits___get_uxmlChildElementsDescription_d__5>::get(),
                            "System.IDisposable.Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::______UIToolkitUtilities__Controls__Table__UxmlTraits___get_uxmlChildElementsDescription_d__5.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::______UIToolkitUtilities__Controls__Table__UxmlTraits___get_uxmlChildElementsDescription_d__5::*)()>(&::GlobalNamespace::______UIToolkitUtilities__Controls__Table__UxmlTraits___get_uxmlChildElementsDescription_d__5::MoveNext)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x287ccac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::______UIToolkitUtilities__Controls__Table__UxmlTraits___get_uxmlChildElementsDescription_d__5>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::______UIToolkitUtilities__Controls__Table__UxmlTraits___get_uxmlChildElementsDescription_d__5.System_Collections_Generic_IEnumerator_UnityEngine_UIElements_UxmlChildElementDescription__get_Current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::UxmlChildElementDescription (::GlobalNamespace::______UIToolkitUtilities__Controls__Table__UxmlTraits___get_uxmlChildElementsDescription_d__5::*)()>(&::GlobalNamespace::______UIToolkitUtilities__Controls__Table__UxmlTraits___get_uxmlChildElementsDescription_d__5::System_Collections_Generic_IEnumerator_UnityEngine_UIElements_UxmlChildElementDescription__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x287ccc4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::______UIToolkitUtilities__Controls__Table__UxmlTraits___get_uxmlChildElementsDescription_d__5>::get(),
                            "System.Collections.Generic.IEnumerator<UnityEngine.UIElements.UxmlChildElementDescription>.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::______UIToolkitUtilities__Controls__Table__UxmlTraits___get_uxmlChildElementsDescription_d__5.System_Collections_IEnumerator_Reset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::______UIToolkitUtilities__Controls__Table__UxmlTraits___get_uxmlChildElementsDescription_d__5::*)()>(&::GlobalNamespace::______UIToolkitUtilities__Controls__Table__UxmlTraits___get_uxmlChildElementsDescription_d__5::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x287cccc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::______UIToolkitUtilities__Controls__Table__UxmlTraits___get_uxmlChildElementsDescription_d__5>::get(),
                            "System.Collections.IEnumerator.Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::______UIToolkitUtilities__Controls__Table__UxmlTraits___get_uxmlChildElementsDescription_d__5.System_Collections_IEnumerator_get_Current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (::GlobalNamespace::______UIToolkitUtilities__Controls__Table__UxmlTraits___get_uxmlChildElementsDescription_d__5::*)()>(&::GlobalNamespace::______UIToolkitUtilities__Controls__Table__UxmlTraits___get_uxmlChildElementsDescription_d__5::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x287cd0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::______UIToolkitUtilities__Controls__Table__UxmlTraits___get_uxmlChildElementsDescription_d__5>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::______UIToolkitUtilities__Controls__Table__UxmlTraits___get_uxmlChildElementsDescription_d__5.System_Collections_Generic_IEnumerable_UnityEngine_UIElements_UxmlChildElementDescription__GetEnumerator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerator_1<::UnityEngine::UIElements::UxmlChildElementDescription> (::GlobalNamespace::______UIToolkitUtilities__Controls__Table__UxmlTraits___get_uxmlChildElementsDescription_d__5::*)()>(&::GlobalNamespace::______UIToolkitUtilities__Controls__Table__UxmlTraits___get_uxmlChildElementsDescription_d__5::System_Collections_Generic_IEnumerable_UnityEngine_UIElements_UxmlChildElementDescription__GetEnumerator)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x287cd14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::______UIToolkitUtilities__Controls__Table__UxmlTraits___get_uxmlChildElementsDescription_d__5>::get(),
                            "System.Collections.Generic.IEnumerable<UnityEngine.UIElements.UxmlChildElementDescription>.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::______UIToolkitUtilities__Controls__Table__UxmlTraits___get_uxmlChildElementsDescription_d__5.System_Collections_IEnumerable_GetEnumerator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator (::GlobalNamespace::______UIToolkitUtilities__Controls__Table__UxmlTraits___get_uxmlChildElementsDescription_d__5::*)()>(&::GlobalNamespace::______UIToolkitUtilities__Controls__Table__UxmlTraits___get_uxmlChildElementsDescription_d__5::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x287cdac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::______UIToolkitUtilities__Controls__Table__UxmlTraits___get_uxmlChildElementsDescription_d__5>::get(),
                            "System.Collections.IEnumerable.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::UxmlChildElementDescription>
constexpr  ::GlobalNamespace::______UIToolkitUtilities__Controls__Table__UxmlTraits___get_uxmlChildElementsDescription_d__5::operator ::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::UxmlChildElementDescription>() const noexcept {
return ::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::UxmlChildElementDescription>(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to ::System::Collections::IEnumerable
constexpr  ::GlobalNamespace::______UIToolkitUtilities__Controls__Table__UxmlTraits___get_uxmlChildElementsDescription_d__5::operator ::System::Collections::IEnumerable() const noexcept {
return ::System::Collections::IEnumerable(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to ::System::Collections::Generic::IEnumerator_1<::UnityEngine::UIElements::UxmlChildElementDescription>
constexpr  ::GlobalNamespace::______UIToolkitUtilities__Controls__Table__UxmlTraits___get_uxmlChildElementsDescription_d__5::operator ::System::Collections::Generic::IEnumerator_1<::UnityEngine::UIElements::UxmlChildElementDescription>() const noexcept {
return ::System::Collections::Generic::IEnumerator_1<::UnityEngine::UIElements::UxmlChildElementDescription>(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to ::System::Collections::IEnumerator
constexpr  ::GlobalNamespace::______UIToolkitUtilities__Controls__Table__UxmlTraits___get_uxmlChildElementsDescription_d__5::operator ::System::Collections::IEnumerator() const noexcept {
return ::System::Collections::IEnumerator(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to ::System::IDisposable
constexpr  ::GlobalNamespace::______UIToolkitUtilities__Controls__Table__UxmlTraits___get_uxmlChildElementsDescription_d__5::operator ::System::IDisposable() const noexcept {
return ::System::IDisposable(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::______UIToolkitUtilities__Controls__Table__UxmlTraits___get_uxmlChildElementsDescription_d__5::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::______UIToolkitUtilities__Controls__Table__UxmlTraits___get_uxmlChildElementsDescription_d__5::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::______UIToolkitUtilities__Controls__Table__UxmlTraits___get_uxmlChildElementsDescription_d__5::__set___2__current(::UnityEngine::UIElements::UxmlChildElementDescription value)  {
::cordl_internals::setInstanceField<::UnityEngine::UIElements::UxmlChildElementDescription, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::UIElements::UxmlChildElementDescription>(value));
}
constexpr ::UnityEngine::UIElements::UxmlChildElementDescription ::GlobalNamespace::______UIToolkitUtilities__Controls__Table__UxmlTraits___get_uxmlChildElementsDescription_d__5::__get___2__current() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::UxmlChildElementDescription, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::______UIToolkitUtilities__Controls__Table__UxmlTraits___get_uxmlChildElementsDescription_d__5::__set___l__initialThreadId(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::______UIToolkitUtilities__Controls__Table__UxmlTraits___get_uxmlChildElementsDescription_d__5::__get___l__initialThreadId() const {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }]
 ::GlobalNamespace::______UIToolkitUtilities__Controls__Table__UxmlTraits___get_uxmlChildElementsDescription_d__5::______UIToolkitUtilities__Controls__Table__UxmlTraits___get_uxmlChildElementsDescription_d__5(int32_t __1__state)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<______UIToolkitUtilities__Controls__Table__UxmlTraits___get_uxmlChildElementsDescription_d__5>(__1__state))) {}
 void ::GlobalNamespace::______UIToolkitUtilities__Controls__Table__UxmlTraits___get_uxmlChildElementsDescription_d__5::_ctor(int32_t __1__state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::______UIToolkitUtilities__Controls__Table__UxmlTraits___get_uxmlChildElementsDescription_d__5>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, __1__state);
}
 void ::GlobalNamespace::______UIToolkitUtilities__Controls__Table__UxmlTraits___get_uxmlChildElementsDescription_d__5::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::______UIToolkitUtilities__Controls__Table__UxmlTraits___get_uxmlChildElementsDescription_d__5>::get(),
                            "System.IDisposable.Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::GlobalNamespace::______UIToolkitUtilities__Controls__Table__UxmlTraits___get_uxmlChildElementsDescription_d__5::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::______UIToolkitUtilities__Controls__Table__UxmlTraits___get_uxmlChildElementsDescription_d__5>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 ::UnityEngine::UIElements::UxmlChildElementDescription ::GlobalNamespace::______UIToolkitUtilities__Controls__Table__UxmlTraits___get_uxmlChildElementsDescription_d__5::System_Collections_Generic_IEnumerator_UnityEngine_UIElements_UxmlChildElementDescription__get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::______UIToolkitUtilities__Controls__Table__UxmlTraits___get_uxmlChildElementsDescription_d__5>::get(),
                            "System.Collections.Generic.IEnumerator<UnityEngine.UIElements.UxmlChildElementDescription>.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::UxmlChildElementDescription, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::______UIToolkitUtilities__Controls__Table__UxmlTraits___get_uxmlChildElementsDescription_d__5::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::______UIToolkitUtilities__Controls__Table__UxmlTraits___get_uxmlChildElementsDescription_d__5>::get(),
                            "System.Collections.IEnumerator.Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::bs_hook::Il2CppWrapperType ::GlobalNamespace::______UIToolkitUtilities__Controls__Table__UxmlTraits___get_uxmlChildElementsDescription_d__5::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::______UIToolkitUtilities__Controls__Table__UxmlTraits___get_uxmlChildElementsDescription_d__5>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::Collections::Generic::IEnumerator_1<::UnityEngine::UIElements::UxmlChildElementDescription> ::GlobalNamespace::______UIToolkitUtilities__Controls__Table__UxmlTraits___get_uxmlChildElementsDescription_d__5::System_Collections_Generic_IEnumerable_UnityEngine_UIElements_UxmlChildElementDescription__GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::______UIToolkitUtilities__Controls__Table__UxmlTraits___get_uxmlChildElementsDescription_d__5>::get(),
                            "System.Collections.Generic.IEnumerable<UnityEngine.UIElements.UxmlChildElementDescription>.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::UnityEngine::UIElements::UxmlChildElementDescription>, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::Collections::IEnumerator ::GlobalNamespace::______UIToolkitUtilities__Controls__Table__UxmlTraits___get_uxmlChildElementsDescription_d__5::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::______UIToolkitUtilities__Controls__Table__UxmlTraits___get_uxmlChildElementsDescription_d__5>::get(),
                            "System.Collections.IEnumerable.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
