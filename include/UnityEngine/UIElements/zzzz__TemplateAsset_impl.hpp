#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElementAsset_impl.hpp"
namespace {
#include "UnityEngine/UIElements/zzzz__TemplateAsset_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualTreeAsset_def.hpp"
// Ctor Parameters [CppParam { name: "m_ElementName", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "m_AttributeName", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "m_Value", ty: "::StringW", modifiers: "", def_value: Some("csnull") }]
constexpr ::UnityEngine::UIElements::____UnityEngine__UIElements__TemplateAsset__AttributeOverride::____UnityEngine__UIElements__TemplateAsset__AttributeOverride(::StringW m_ElementName, ::StringW m_AttributeName, ::StringW m_Value) noexcept : ::bs_hook::ValueTypeWrapper() {this->m_ElementName = m_ElementName;
this->m_AttributeName = m_AttributeName;
this->m_Value = m_Value;
}
constexpr void ::UnityEngine::UIElements::____UnityEngine__UIElements__TemplateAsset__AttributeOverride::__set_m_ElementName(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x0>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::UnityEngine::UIElements::____UnityEngine__UIElements__TemplateAsset__AttributeOverride::__get_m_ElementName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x0>(this->__instance);
}
constexpr void ::UnityEngine::UIElements::____UnityEngine__UIElements__TemplateAsset__AttributeOverride::__set_m_AttributeName(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x8>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::UnityEngine::UIElements::____UnityEngine__UIElements__TemplateAsset__AttributeOverride::__get_m_AttributeName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x8>(this->__instance);
}
constexpr void ::UnityEngine::UIElements::____UnityEngine__UIElements__TemplateAsset__AttributeOverride::__set_m_Value(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::UnityEngine::UIElements::____UnityEngine__UIElements__TemplateAsset__AttributeOverride::__get_m_Value() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this->__instance);
}
//  Writing Method size for method: ::UnityEngine::UIElements::TemplateAsset.get_attributeOverrides
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::UIElements::____UnityEngine__UIElements__TemplateAsset__AttributeOverride> (::UnityEngine::UIElements::TemplateAsset::*)()>(&::UnityEngine::UIElements::TemplateAsset::get_attributeOverrides)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2c98fc0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TemplateAsset>::get(),
                            "get_attributeOverrides",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TemplateAsset.get_slotUsages
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::UIElements::____UnityEngine__UIElements__VisualTreeAsset__SlotUsageEntry> (::UnityEngine::UIElements::TemplateAsset::*)()>(&::UnityEngine::UIElements::TemplateAsset::get_slotUsages)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c99040;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TemplateAsset>::get(),
                            "get_slotUsages",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::UnityEngine::UIElements::TemplateAsset::__set_m_TemplateAlias(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x60>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::UnityEngine::UIElements::TemplateAsset::__get_m_TemplateAlias() const {
return ::cordl_internals::getInstanceField<::StringW, 0x60>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::UIElements::TemplateAsset::__set_m_AttributeOverrides(::System::Collections::Generic::List_1<::UnityEngine::UIElements::____UnityEngine__UIElements__TemplateAsset__AttributeOverride> value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::UnityEngine::UIElements::____UnityEngine__UIElements__TemplateAsset__AttributeOverride>, 0x68>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::Generic::List_1<::UnityEngine::UIElements::____UnityEngine__UIElements__TemplateAsset__AttributeOverride>>(value));
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::____UnityEngine__UIElements__TemplateAsset__AttributeOverride> ::UnityEngine::UIElements::TemplateAsset::__get_m_AttributeOverrides() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::UnityEngine::UIElements::____UnityEngine__UIElements__TemplateAsset__AttributeOverride>, 0x68>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::UIElements::TemplateAsset::__set_m_SlotUsages(::System::Collections::Generic::List_1<::UnityEngine::UIElements::____UnityEngine__UIElements__VisualTreeAsset__SlotUsageEntry> value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::UnityEngine::UIElements::____UnityEngine__UIElements__VisualTreeAsset__SlotUsageEntry>, 0x70>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::Generic::List_1<::UnityEngine::UIElements::____UnityEngine__UIElements__VisualTreeAsset__SlotUsageEntry>>(value));
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::____UnityEngine__UIElements__VisualTreeAsset__SlotUsageEntry> ::UnityEngine::UIElements::TemplateAsset::__get_m_SlotUsages() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::UnityEngine::UIElements::____UnityEngine__UIElements__VisualTreeAsset__SlotUsageEntry>, 0x70>(this->::bs_hook::Il2CppWrapperType::instance);
}
 ::System::Collections::Generic::List_1<::UnityEngine::UIElements::____UnityEngine__UIElements__TemplateAsset__AttributeOverride> ::UnityEngine::UIElements::TemplateAsset::get_attributeOverrides()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TemplateAsset>::get(),
                            "get_attributeOverrides",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::UIElements::____UnityEngine__UIElements__TemplateAsset__AttributeOverride>, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::Collections::Generic::List_1<::UnityEngine::UIElements::____UnityEngine__UIElements__VisualTreeAsset__SlotUsageEntry> ::UnityEngine::UIElements::TemplateAsset::get_slotUsages()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TemplateAsset>::get(),
                            "get_slotUsages",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::UIElements::____UnityEngine__UIElements__VisualTreeAsset__SlotUsageEntry>, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
