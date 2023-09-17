#pragma once
namespace {
#include "System/Xml/Schema/zzzz__XsdSimpleValue_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaSimpleType_def.hpp"
//  Writing Method size for method: ::System::Xml::Schema::XsdSimpleValue.get_XmlType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::XmlSchemaSimpleType (::System::Xml::Schema::XsdSimpleValue::*)()>(&::System::Xml::Schema::XsdSimpleValue::get_XmlType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x271d3bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdSimpleValue>::get(),
                            "get_XmlType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdSimpleValue.get_TypedValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (::System::Xml::Schema::XsdSimpleValue::*)()>(&::System::Xml::Schema::XsdSimpleValue::get_TypedValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x271d3c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdSimpleValue>::get(),
                            "get_TypedValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::System::Xml::Schema::XsdSimpleValue::__set_xmlType(::System::Xml::Schema::XmlSchemaSimpleType value)  {
::cordl_internals::setInstanceField<::System::Xml::Schema::XmlSchemaSimpleType, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Xml::Schema::XmlSchemaSimpleType>(value));
}
constexpr ::System::Xml::Schema::XmlSchemaSimpleType ::System::Xml::Schema::XsdSimpleValue::__get_xmlType() const {
return ::cordl_internals::getInstanceField<::System::Xml::Schema::XmlSchemaSimpleType, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Xml::Schema::XsdSimpleValue::__set_typedValue(::bs_hook::Il2CppWrapperType value)  {
::cordl_internals::setInstanceField<::bs_hook::Il2CppWrapperType, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::bs_hook::Il2CppWrapperType>(value));
}
constexpr ::bs_hook::Il2CppWrapperType ::System::Xml::Schema::XsdSimpleValue::__get_typedValue() const {
return ::cordl_internals::getInstanceField<::bs_hook::Il2CppWrapperType, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 ::System::Xml::Schema::XmlSchemaSimpleType ::System::Xml::Schema::XsdSimpleValue::get_XmlType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdSimpleValue>::get(),
                            "get_XmlType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchemaSimpleType, false>(const_cast<void*>(instance), ___internal_method);
}
 ::bs_hook::Il2CppWrapperType ::System::Xml::Schema::XsdSimpleValue::get_TypedValue()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XsdSimpleValue>::get(),
                            "get_TypedValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
