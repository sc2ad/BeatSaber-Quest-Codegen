#pragma once
#include "System/zzzz__EventArgs_impl.hpp"
#include "System/Xml/Schema/zzzz__ValidationEventArgs_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaException_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSeverityType_def.hpp"
//  Writing Method size for method: System::Xml::Schema::ValidationEventArgs.get_Severity
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Xml::Schema::XmlSeverityType (System::Xml::Schema::ValidationEventArgs::*)()>(&System::Xml::Schema::ValidationEventArgs::get_Severity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2732284;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Schema::ValidationEventArgs>::get(),
                            "get_Severity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::Schema::ValidationEventArgs.get_Exception
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Xml::Schema::XmlSchemaException (System::Xml::Schema::ValidationEventArgs::*)()>(&System::Xml::Schema::ValidationEventArgs::get_Exception)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x273228c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Schema::ValidationEventArgs>::get(),
                            "get_Exception",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Xml::Schema::ValidationEventArgs::__set_ex(System::Xml::Schema::XmlSchemaException value)  {
::cordl_internals::setInstanceField<System::Xml::Schema::XmlSchemaException, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Xml::Schema::XmlSchemaException>(value));
}
constexpr System::Xml::Schema::XmlSchemaException System::Xml::Schema::ValidationEventArgs::__get_ex() const {
return ::cordl_internals::getInstanceField<System::Xml::Schema::XmlSchemaException, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Xml::Schema::ValidationEventArgs::__set_severity(System::Xml::Schema::XmlSeverityType value)  {
::cordl_internals::setInstanceField<System::Xml::Schema::XmlSeverityType, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Xml::Schema::XmlSeverityType>(value));
}
constexpr System::Xml::Schema::XmlSeverityType System::Xml::Schema::ValidationEventArgs::__get_severity() const {
return ::cordl_internals::getInstanceField<System::Xml::Schema::XmlSeverityType, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 System::Xml::Schema::XmlSeverityType System::Xml::Schema::ValidationEventArgs::get_Severity()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Schema::ValidationEventArgs>::get(),
                            "get_Severity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Xml::Schema::XmlSeverityType, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Xml::Schema::XmlSchemaException System::Xml::Schema::ValidationEventArgs::get_Exception()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Schema::ValidationEventArgs>::get(),
                            "get_Exception",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Xml::Schema::XmlSchemaException, false>(const_cast<void*>(instance), ___internal_method);
}
