#pragma once
#include "System/Xml/Schema/zzzz__BaseValidator_impl.hpp"
#include "System/Xml/zzzz__XmlNamespaceManager_impl.hpp"
#include "System/Xml/Schema/zzzz__DtdValidator_def.hpp"
#include "System/Xml/Schema/zzzz__SchemaAttDef_def.hpp"
#include "System/Xml/zzzz__IDtdParserAdapter_def.hpp"
#include "System/Xml/Schema/zzzz__DtdValidator_def.hpp"
//  Writing Method size for method: System::Xml::Schema::System__Xml__Schema__DtdValidator__NamespaceManager.LookupNamespace
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::Schema::System__Xml__Schema__DtdValidator__NamespaceManager::*)(::StringW)>(&System::Xml::Schema::System__Xml__Schema__DtdValidator__NamespaceManager::LookupNamespace)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x272cfc0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Xml::Schema::System__Xml__Schema__DtdValidator__NamespaceManager),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Schema::System__Xml__Schema__DtdValidator__NamespaceManager>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::Schema::System__Xml__Schema__DtdValidator__NamespaceManager._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::System__Xml__Schema__DtdValidator__NamespaceManager::*)()>(&System::Xml::Schema::System__Xml__Schema__DtdValidator__NamespaceManager::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x272cfb8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Schema::System__Xml__Schema__DtdValidator__NamespaceManager>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 ::StringW System::Xml::Schema::System__Xml__Schema__DtdValidator__NamespaceManager::LookupNamespace(::StringW prefix)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Schema::System__Xml__Schema__DtdValidator__NamespaceManager>::get(),
                            "LookupNamespace",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method, prefix);
}
 System::Xml::Schema::System__Xml__Schema__DtdValidator__NamespaceManager System::Xml::Schema::System__Xml__Schema__DtdValidator__NamespaceManager::New_ctor()  {
System::Xml::Schema::System__Xml__Schema__DtdValidator__NamespaceManager o{THROW_UNLESS(::il2cpp_utils::New<System::Xml::Schema::System__Xml__Schema__DtdValidator__NamespaceManager>())};
return o;
}
 void System::Xml::Schema::System__Xml__Schema__DtdValidator__NamespaceManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Schema::System__Xml__Schema__DtdValidator__NamespaceManager>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: System::Xml::Schema::DtdValidator.SetDefaultTypedValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::Xml::Schema::SchemaAttDef, System::Xml::IDtdParserAdapter)>(&System::Xml::Schema::DtdValidator::SetDefaultTypedValue)> {
  constexpr static std::size_t size = 0x3dc;
  constexpr static std::size_t addrs = 0x272cb10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Schema::DtdValidator>::get(),
                            "SetDefaultTypedValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::Schema::SchemaAttDef>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::IDtdParserAdapter>::get()}
                        )));
    return ___internal_method;
  }
};
 void System::Xml::Schema::DtdValidator::__set_namespaceManager(System::Xml::Schema::System__Xml__Schema__DtdValidator__NamespaceManager value)  {
::cordl_internals::setStaticField<System::Xml::Schema::System__Xml__Schema__DtdValidator__NamespaceManager, "namespaceManager", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Schema::DtdValidator>::get>(std::forward<System::Xml::Schema::System__Xml__Schema__DtdValidator__NamespaceManager>(value));
}
 System::Xml::Schema::System__Xml__Schema__DtdValidator__NamespaceManager System::Xml::Schema::DtdValidator::__get_namespaceManager()  {
return ::cordl_internals::getStaticField<System::Xml::Schema::System__Xml__Schema__DtdValidator__NamespaceManager, "namespaceManager", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Schema::DtdValidator>::get>();
}
 void System::Xml::Schema::DtdValidator::SetDefaultTypedValue(System::Xml::Schema::SchemaAttDef attdef, System::Xml::IDtdParserAdapter readerAdapter)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Schema::DtdValidator>::get(),
                            "SetDefaultTypedValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::Schema::SchemaAttDef>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::IDtdParserAdapter>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, attdef, readerAdapter);
}
