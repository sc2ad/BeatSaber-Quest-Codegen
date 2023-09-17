#pragma once
#include "System/Xml/Schema/zzzz__XmlSchemaSimpleTypeContent_impl.hpp"
namespace {
#include "System/Xml/Schema/zzzz__XmlSchemaSimpleTypeRestriction_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaObjectCollection_def.hpp"
#include "System/Xml/zzzz__XmlQualifiedName_def.hpp"
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaSimpleTypeRestriction.set_BaseTypeName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::XmlSchemaSimpleTypeRestriction::*)(::System::Xml::XmlQualifiedName)>(&::System::Xml::Schema::XmlSchemaSimpleTypeRestriction::set_BaseTypeName)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x2735810;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaSimpleTypeRestriction>::get(),
                            "set_BaseTypeName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlQualifiedName>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaSimpleTypeRestriction._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::XmlSchemaSimpleTypeRestriction::*)()>(&::System::Xml::Schema::XmlSchemaSimpleTypeRestriction::_ctor)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x27358a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaSimpleTypeRestriction>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::System::Xml::Schema::XmlSchemaSimpleTypeRestriction::__set_baseTypeName(::System::Xml::XmlQualifiedName value)  {
::cordl_internals::setInstanceField<::System::Xml::XmlQualifiedName, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Xml::XmlQualifiedName>(value));
}
constexpr ::System::Xml::XmlQualifiedName ::System::Xml::Schema::XmlSchemaSimpleTypeRestriction::__get_baseTypeName() const {
return ::cordl_internals::getInstanceField<::System::Xml::XmlQualifiedName, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Xml::Schema::XmlSchemaSimpleTypeRestriction::__set_facets(::System::Xml::Schema::XmlSchemaObjectCollection value)  {
::cordl_internals::setInstanceField<::System::Xml::Schema::XmlSchemaObjectCollection, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Xml::Schema::XmlSchemaObjectCollection>(value));
}
constexpr ::System::Xml::Schema::XmlSchemaObjectCollection ::System::Xml::Schema::XmlSchemaSimpleTypeRestriction::__get_facets() const {
return ::cordl_internals::getInstanceField<::System::Xml::Schema::XmlSchemaObjectCollection, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void ::System::Xml::Schema::XmlSchemaSimpleTypeRestriction::set_BaseTypeName(::System::Xml::XmlQualifiedName value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaSimpleTypeRestriction>::get(),
                            "set_BaseTypeName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlQualifiedName>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
// Ctor Parameters []
 ::System::Xml::Schema::XmlSchemaSimpleTypeRestriction::XmlSchemaSimpleTypeRestriction()  : ::System::Xml::Schema::XmlSchemaSimpleTypeContent(THROW_UNLESS(::il2cpp_utils::New<XmlSchemaSimpleTypeRestriction>())) {}
 void ::System::Xml::Schema::XmlSchemaSimpleTypeRestriction::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaSimpleTypeRestriction>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
