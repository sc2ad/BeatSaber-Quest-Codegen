#pragma once
#include "System/Xml/Schema/zzzz__XmlSchemaType_impl.hpp"
namespace {
#include "System/Xml/Schema/zzzz__XmlSchemaSimpleType_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaSimpleTypeContent_def.hpp"
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaSimpleType._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::XmlSchemaSimpleType::*)()>(&::System::Xml::Schema::XmlSchemaSimpleType::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2735774;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaSimpleType>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaSimpleType.get_Content
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::XmlSchemaSimpleTypeContent (::System::Xml::Schema::XmlSchemaSimpleType::*)()>(&::System::Xml::Schema::XmlSchemaSimpleType::get_Content)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2735778;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaSimpleType>::get(),
                            "get_Content",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaSimpleType.set_Content
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::XmlSchemaSimpleType::*)(::System::Xml::Schema::XmlSchemaSimpleTypeContent)>(&::System::Xml::Schema::XmlSchemaSimpleType::set_Content)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2735780;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaSimpleType>::get(),
                            "set_Content",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaSimpleTypeContent>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void ::System::Xml::Schema::XmlSchemaSimpleType::__set_content(::System::Xml::Schema::XmlSchemaSimpleTypeContent value)  {
::cordl_internals::setInstanceField<::System::Xml::Schema::XmlSchemaSimpleTypeContent, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Xml::Schema::XmlSchemaSimpleTypeContent>(value));
}
constexpr ::System::Xml::Schema::XmlSchemaSimpleTypeContent ::System::Xml::Schema::XmlSchemaSimpleType::__get_content() const {
return ::cordl_internals::getInstanceField<::System::Xml::Schema::XmlSchemaSimpleTypeContent, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 ::System::Xml::Schema::XmlSchemaSimpleType::XmlSchemaSimpleType()  : ::System::Xml::Schema::XmlSchemaType(THROW_UNLESS(::il2cpp_utils::New<XmlSchemaSimpleType>())) {}
 void ::System::Xml::Schema::XmlSchemaSimpleType::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaSimpleType>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::Xml::Schema::XmlSchemaSimpleTypeContent ::System::Xml::Schema::XmlSchemaSimpleType::get_Content()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaSimpleType>::get(),
                            "get_Content",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchemaSimpleTypeContent, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::System::Xml::Schema::XmlSchemaSimpleType::set_Content(::System::Xml::Schema::XmlSchemaSimpleTypeContent value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaSimpleType>::get(),
                            "set_Content",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaSimpleTypeContent>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
} // end anonymous namespace
