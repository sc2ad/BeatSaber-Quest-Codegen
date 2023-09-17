#pragma once
#include "System/Xml/Schema/zzzz__XmlBaseConverter_impl.hpp"
namespace {
#include "System/Xml/Schema/zzzz__XmlStringConverter_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaType_def.hpp"
#include "System/Xml/Schema/zzzz__XmlValueConverter_def.hpp"
#include "System/Xml/zzzz__IXmlNamespaceResolver_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Xml::Schema::XmlStringConverter._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::XmlStringConverter::*)(::System::Xml::Schema::XmlSchemaType)>(&::System::Xml::Schema::XmlStringConverter::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2746e8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlStringConverter>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlStringConverter.Create
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::XmlValueConverter (*)(::System::Xml::Schema::XmlSchemaType)>(&::System::Xml::Schema::XmlStringConverter::Create)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2746ef4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlStringConverter>::get(),
                            "Create",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlStringConverter.ToString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::Schema::XmlStringConverter::*)(::bs_hook::Il2CppWrapperType, ::System::Xml::IXmlNamespaceResolver)>(&::System::Xml::Schema::XmlStringConverter::ToString)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x2746f54;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Xml::Schema::XmlStringConverter),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlStringConverter>::get(),
                                  52
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlStringConverter.ChangeType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (::System::Xml::Schema::XmlStringConverter::*)(::StringW, ::System::Type, ::System::Xml::IXmlNamespaceResolver)>(&::System::Xml::Schema::XmlStringConverter::ChangeType)> {
  constexpr static std::size_t size = 0x29c;
  constexpr static std::size_t addrs = 0x2747164;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Xml::Schema::XmlStringConverter),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlStringConverter>::get(),
                                  59
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlStringConverter.ChangeType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (::System::Xml::Schema::XmlStringConverter::*)(::bs_hook::Il2CppWrapperType, ::System::Type, ::System::Xml::IXmlNamespaceResolver)>(&::System::Xml::Schema::XmlStringConverter::ChangeType)> {
  constexpr static std::size_t size = 0x43c;
  constexpr static std::size_t addrs = 0x2747400;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Xml::Schema::XmlStringConverter),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlStringConverter>::get(),
                                  61
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "schemaType", ty: "::System::Xml::Schema::XmlSchemaType", modifiers: "", def_value: None }]
 ::System::Xml::Schema::XmlStringConverter::XmlStringConverter(::System::Xml::Schema::XmlSchemaType schemaType)  : ::System::Xml::Schema::XmlBaseConverter(THROW_UNLESS(::il2cpp_utils::New<XmlStringConverter>(schemaType))) {}
 void ::System::Xml::Schema::XmlStringConverter::_ctor(::System::Xml::Schema::XmlSchemaType schemaType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlStringConverter>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, schemaType);
}
 ::System::Xml::Schema::XmlValueConverter ::System::Xml::Schema::XmlStringConverter::Create(::System::Xml::Schema::XmlSchemaType schemaType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlStringConverter>::get(),
                            "Create",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlValueConverter, false>(nullptr, ___internal_method, schemaType);
}
 ::StringW ::System::Xml::Schema::XmlStringConverter::ToString(::bs_hook::Il2CppWrapperType value, ::System::Xml::IXmlNamespaceResolver nsResolver)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlStringConverter>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::IXmlNamespaceResolver>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method, value, nsResolver);
}
 ::bs_hook::Il2CppWrapperType ::System::Xml::Schema::XmlStringConverter::ChangeType(::StringW value, ::System::Type destinationType, ::System::Xml::IXmlNamespaceResolver nsResolver)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlStringConverter>::get(),
                            "ChangeType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::IXmlNamespaceResolver>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method, value, destinationType, nsResolver);
}
 ::bs_hook::Il2CppWrapperType ::System::Xml::Schema::XmlStringConverter::ChangeType(::bs_hook::Il2CppWrapperType value, ::System::Type destinationType, ::System::Xml::IXmlNamespaceResolver nsResolver)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlStringConverter>::get(),
                            "ChangeType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::IXmlNamespaceResolver>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method, value, destinationType, nsResolver);
}
} // end anonymous namespace
