#pragma once
#include "System/zzzz__Attribute_impl.hpp"
#include "System/Xml/Serialization/zzzz__XmlElementAttribute_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: System::Xml::Serialization::XmlElementAttribute._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Serialization::XmlElementAttribute::*)(::StringW, System::Type)>(&System::Xml::Serialization::XmlElementAttribute::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x271858c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Serialization::XmlElementAttribute>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Xml::Serialization::XmlElementAttribute::__set_elementName(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW System::Xml::Serialization::XmlElementAttribute::__get_elementName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Xml::Serialization::XmlElementAttribute::__set_type(System::Type value)  {
::cordl_internals::setInstanceField<System::Type, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Type>(value));
}
constexpr System::Type System::Xml::Serialization::XmlElementAttribute::__get_type() const {
return ::cordl_internals::getInstanceField<System::Type, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Xml::Serialization::XmlElementAttribute::__set_order(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Xml::Serialization::XmlElementAttribute::__get_order() const {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "elementName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "type", ty: "System::Type", modifiers: "", def_value: None }]
 System::Xml::Serialization::XmlElementAttribute::XmlElementAttribute(::StringW elementName, System::Type type)  : System::Attribute(THROW_UNLESS(::il2cpp_utils::New<XmlElementAttribute>(elementName, type))) {}
 void System::Xml::Serialization::XmlElementAttribute::_ctor(::StringW elementName, System::Type type)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Serialization::XmlElementAttribute>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, elementName, type);
}
