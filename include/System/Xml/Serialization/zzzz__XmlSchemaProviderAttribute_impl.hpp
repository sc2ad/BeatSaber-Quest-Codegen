#pragma once
#include "System/zzzz__Attribute_impl.hpp"
#include "System/Xml/Serialization/zzzz__XmlSchemaProviderAttribute_def.hpp"
//  Writing Method size for method: System::Xml::Serialization::XmlSchemaProviderAttribute._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Serialization::XmlSchemaProviderAttribute::*)(::StringW)>(&System::Xml::Serialization::XmlSchemaProviderAttribute::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x27185f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Serialization::XmlSchemaProviderAttribute>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::Serialization::XmlSchemaProviderAttribute.set_IsAny
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Serialization::XmlSchemaProviderAttribute::*)(bool)>(&System::Xml::Serialization::XmlSchemaProviderAttribute::set_IsAny)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2718618;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Serialization::XmlSchemaProviderAttribute>::get(),
                            "set_IsAny",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Xml::Serialization::XmlSchemaProviderAttribute::__set__methodName(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW System::Xml::Serialization::XmlSchemaProviderAttribute::__get__methodName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Xml::Serialization::XmlSchemaProviderAttribute::__set__isAny(bool value)  {
::cordl_internals::setInstanceField<bool, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool System::Xml::Serialization::XmlSchemaProviderAttribute::__get__isAny() const {
return ::cordl_internals::getInstanceField<bool, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "methodName", ty: "::StringW", modifiers: "", def_value: None }]
 System::Xml::Serialization::XmlSchemaProviderAttribute::XmlSchemaProviderAttribute(::StringW methodName)  : System::Attribute(THROW_UNLESS(::il2cpp_utils::New<XmlSchemaProviderAttribute>(methodName))) {}
 void System::Xml::Serialization::XmlSchemaProviderAttribute::_ctor(::StringW methodName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Serialization::XmlSchemaProviderAttribute>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, methodName);
}
 void System::Xml::Serialization::XmlSchemaProviderAttribute::set_IsAny(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Serialization::XmlSchemaProviderAttribute>::get(),
                            "set_IsAny",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
