#pragma once
namespace {
#include "System/Xml/zzzz__DomNameTable_def.hpp"
#include "System/Xml/zzzz__XmlName_def.hpp"
#include "System/Xml/zzzz__XmlNameTable_def.hpp"
#include "System/Xml/zzzz__XmlDocument_def.hpp"
#include "System/Xml/Schema/zzzz__IXmlSchemaInfo_def.hpp"
//  Writing Method size for method: ::System::Xml::DomNameTable._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::DomNameTable::*)(::System::Xml::XmlDocument)>(&::System::Xml::DomNameTable::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x26edab8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DomNameTable>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlDocument>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DomNameTable.GetName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlName (::System::Xml::DomNameTable::*)(::StringW, ::StringW, ::StringW, ::System::Xml::Schema::IXmlSchemaInfo)>(&::System::Xml::DomNameTable::GetName)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x26edb58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DomNameTable>::get(),
                            "GetName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::IXmlSchemaInfo>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DomNameTable.AddName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlName (::System::Xml::DomNameTable::*)(::StringW, ::StringW, ::StringW, ::System::Xml::Schema::IXmlSchemaInfo)>(&::System::Xml::DomNameTable::AddName)> {
  constexpr static std::size_t size = 0x264;
  constexpr static std::size_t addrs = 0x26edcb4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DomNameTable>::get(),
                            "AddName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::IXmlSchemaInfo>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DomNameTable.Grow
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::DomNameTable::*)()>(&::System::Xml::DomNameTable::Grow)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x26edf18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DomNameTable>::get(),
                            "Grow",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::System::Xml::DomNameTable::__set_entries(::ArrayW<::System::Xml::XmlName> value)  {
::cordl_internals::setInstanceField<::ArrayW<::System::Xml::XmlName>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::System::Xml::XmlName>>(value));
}
constexpr ::ArrayW<::System::Xml::XmlName> ::System::Xml::DomNameTable::__get_entries() const {
return ::cordl_internals::getInstanceField<::ArrayW<::System::Xml::XmlName>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Xml::DomNameTable::__set_count(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Xml::DomNameTable::__get_count() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Xml::DomNameTable::__set_mask(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Xml::DomNameTable::__get_mask() const {
return ::cordl_internals::getInstanceField<int32_t, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Xml::DomNameTable::__set_ownerDocument(::System::Xml::XmlDocument value)  {
::cordl_internals::setInstanceField<::System::Xml::XmlDocument, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Xml::XmlDocument>(value));
}
constexpr ::System::Xml::XmlDocument ::System::Xml::DomNameTable::__get_ownerDocument() const {
return ::cordl_internals::getInstanceField<::System::Xml::XmlDocument, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Xml::DomNameTable::__set_nameTable(::System::Xml::XmlNameTable value)  {
::cordl_internals::setInstanceField<::System::Xml::XmlNameTable, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Xml::XmlNameTable>(value));
}
constexpr ::System::Xml::XmlNameTable ::System::Xml::DomNameTable::__get_nameTable() const {
return ::cordl_internals::getInstanceField<::System::Xml::XmlNameTable, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "document", ty: "::System::Xml::XmlDocument", modifiers: "", def_value: None }]
 ::System::Xml::DomNameTable::DomNameTable(::System::Xml::XmlDocument document)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<DomNameTable>(document))) {}
 void ::System::Xml::DomNameTable::_ctor(::System::Xml::XmlDocument document)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DomNameTable>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlDocument>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, document);
}
 ::System::Xml::XmlName ::System::Xml::DomNameTable::GetName(::StringW prefix, ::StringW localName, ::StringW ns, ::System::Xml::Schema::IXmlSchemaInfo schemaInfo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DomNameTable>::get(),
                            "GetName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::IXmlSchemaInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlName, false>(const_cast<void*>(instance), ___internal_method, prefix, localName, ns, schemaInfo);
}
 ::System::Xml::XmlName ::System::Xml::DomNameTable::AddName(::StringW prefix, ::StringW localName, ::StringW ns, ::System::Xml::Schema::IXmlSchemaInfo schemaInfo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DomNameTable>::get(),
                            "AddName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::IXmlSchemaInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlName, false>(const_cast<void*>(instance), ___internal_method, prefix, localName, ns, schemaInfo);
}
 void ::System::Xml::DomNameTable::Grow()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::DomNameTable>::get(),
                            "Grow",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
