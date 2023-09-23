#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "System/Xml/zzzz__XmlNamespaceManager_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Xml/zzzz__XmlNameTable_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Xml/zzzz__IXmlNamespaceResolver_def.hpp"
//  Writing Method size for method: System::Xml::System__Xml__XmlNamespaceManager__NamespaceDeclaration.Set
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::System__Xml__XmlNamespaceManager__NamespaceDeclaration::*)(::StringW, ::StringW, int32_t, int32_t)>(&System::Xml::System__Xml__XmlNamespaceManager__NamespaceDeclaration::Set)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x27145ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::System__Xml__XmlNamespaceManager__NamespaceDeclaration>::get(),
                            "Set",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "prefix", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "uri", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "scopeId", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "previousNsIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr System::Xml::System__Xml__XmlNamespaceManager__NamespaceDeclaration::System__Xml__XmlNamespaceManager__NamespaceDeclaration(::StringW prefix, ::StringW uri, int32_t scopeId, int32_t previousNsIndex) noexcept : ::bs_hook::ValueTypeWrapper() {this->prefix = prefix;
this->uri = uri;
this->scopeId = scopeId;
this->previousNsIndex = previousNsIndex;
}
constexpr void System::Xml::System__Xml__XmlNamespaceManager__NamespaceDeclaration::__set_prefix(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x0>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW System::Xml::System__Xml__XmlNamespaceManager__NamespaceDeclaration::__get_prefix() const {
return ::cordl_internals::getInstanceField<::StringW, 0x0>(this->__instance);
}
constexpr void System::Xml::System__Xml__XmlNamespaceManager__NamespaceDeclaration::__set_uri(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x8>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW System::Xml::System__Xml__XmlNamespaceManager__NamespaceDeclaration::__get_uri() const {
return ::cordl_internals::getInstanceField<::StringW, 0x8>(this->__instance);
}
constexpr void System::Xml::System__Xml__XmlNamespaceManager__NamespaceDeclaration::__set_scopeId(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Xml::System__Xml__XmlNamespaceManager__NamespaceDeclaration::__get_scopeId() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->__instance);
}
constexpr void System::Xml::System__Xml__XmlNamespaceManager__NamespaceDeclaration::__set_previousNsIndex(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x14>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Xml::System__Xml__XmlNamespaceManager__NamespaceDeclaration::__get_previousNsIndex() const {
return ::cordl_internals::getInstanceField<int32_t, 0x14>(this->__instance);
}
 void System::Xml::System__Xml__XmlNamespaceManager__NamespaceDeclaration::Set(::StringW prefix, ::StringW uri, int32_t scopeId, int32_t previousNsIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::System__Xml__XmlNamespaceManager__NamespaceDeclaration>::get(),
                            "Set",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, prefix, uri, scopeId, previousNsIndex);
}
//  Writing Method size for method: System::Xml::XmlNamespaceManager._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlNamespaceManager::*)()>(&System::Xml::XmlNamespaceManager::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27143e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlNamespaceManager>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlNamespaceManager._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlNamespaceManager::*)(System::Xml::XmlNameTable)>(&System::Xml::XmlNamespaceManager::_ctor)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x27143f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlNamespaceManager>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::XmlNameTable>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlNamespaceManager.get_NameTable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Xml::XmlNameTable (System::Xml::XmlNamespaceManager::*)()>(&System::Xml::XmlNamespaceManager::get_NameTable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27145b8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Xml::XmlNamespaceManager),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlNamespaceManager>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlNamespaceManager.get_DefaultNamespace
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::XmlNamespaceManager::*)()>(&System::Xml::XmlNamespaceManager::get_DefaultNamespace)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x27145c0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Xml::XmlNamespaceManager),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlNamespaceManager>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlNamespaceManager.PushScope
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlNamespaceManager::*)()>(&System::Xml::XmlNamespaceManager::PushScope)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2714630;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Xml::XmlNamespaceManager),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlNamespaceManager>::get(),
                                  9
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlNamespaceManager.PopScope
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::XmlNamespaceManager::*)()>(&System::Xml::XmlNamespaceManager::PopScope)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x2714640;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Xml::XmlNamespaceManager),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlNamespaceManager>::get(),
                                  10
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlNamespaceManager.AddNamespace
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlNamespaceManager::*)(::StringW, ::StringW)>(&System::Xml::XmlNamespaceManager::AddNamespace)> {
  constexpr static std::size_t size = 0x3a4;
  constexpr static std::size_t addrs = 0x2714718;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Xml::XmlNamespaceManager),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlNamespaceManager>::get(),
                                  11
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlNamespaceManager.RemoveNamespace
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlNamespaceManager::*)(::StringW, ::StringW)>(&System::Xml::XmlNamespaceManager::RemoveNamespace)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x2714c48;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Xml::XmlNamespaceManager),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlNamespaceManager>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlNamespaceManager.GetEnumerator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IEnumerator (System::Xml::XmlNamespaceManager::*)()>(&System::Xml::XmlNamespaceManager::GetEnumerator)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x2714d84;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Xml::XmlNamespaceManager),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlNamespaceManager>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlNamespaceManager.LookupNamespace
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::XmlNamespaceManager::*)(::StringW)>(&System::Xml::XmlNamespaceManager::LookupNamespace)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x2714ef4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Xml::XmlNamespaceManager),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlNamespaceManager>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlNamespaceManager.LookupNamespaceDecl
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Xml::XmlNamespaceManager::*)(::StringW)>(&System::Xml::XmlNamespaceManager::LookupNamespaceDecl)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x2714abc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlNamespaceManager>::get(),
                            "LookupNamespaceDecl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlNamespaceManager.LookupPrefix
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::XmlNamespaceManager::*)(::StringW)>(&System::Xml::XmlNamespaceManager::LookupPrefix)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2714f40;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Xml::XmlNamespaceManager),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlNamespaceManager>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Xml::IXmlNamespaceResolver
constexpr  System::Xml::XmlNamespaceManager::operator System::Xml::IXmlNamespaceResolver() const noexcept {
return System::Xml::IXmlNamespaceResolver(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::Collections::IEnumerable
constexpr  System::Xml::XmlNamespaceManager::operator System::Collections::IEnumerable() const noexcept {
return System::Collections::IEnumerable(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Xml::XmlNamespaceManager::__set_nsdecls(::ArrayW<System::Xml::System__Xml__XmlNamespaceManager__NamespaceDeclaration> value)  {
::cordl_internals::setInstanceField<::ArrayW<System::Xml::System__Xml__XmlNamespaceManager__NamespaceDeclaration>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<System::Xml::System__Xml__XmlNamespaceManager__NamespaceDeclaration>>(value));
}
constexpr ::ArrayW<System::Xml::System__Xml__XmlNamespaceManager__NamespaceDeclaration> System::Xml::XmlNamespaceManager::__get_nsdecls() const {
return ::cordl_internals::getInstanceField<::ArrayW<System::Xml::System__Xml__XmlNamespaceManager__NamespaceDeclaration>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Xml::XmlNamespaceManager::__set_lastDecl(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Xml::XmlNamespaceManager::__get_lastDecl() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Xml::XmlNamespaceManager::__set_nameTable(System::Xml::XmlNameTable value)  {
::cordl_internals::setInstanceField<System::Xml::XmlNameTable, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Xml::XmlNameTable>(value));
}
constexpr System::Xml::XmlNameTable System::Xml::XmlNamespaceManager::__get_nameTable() const {
return ::cordl_internals::getInstanceField<System::Xml::XmlNameTable, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Xml::XmlNamespaceManager::__set_scopeId(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Xml::XmlNamespaceManager::__get_scopeId() const {
return ::cordl_internals::getInstanceField<int32_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Xml::XmlNamespaceManager::__set_hashTable(System::Collections::Generic::Dictionary_2<::StringW,int32_t> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::Dictionary_2<::StringW,int32_t>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::Dictionary_2<::StringW,int32_t>>(value));
}
constexpr System::Collections::Generic::Dictionary_2<::StringW,int32_t> System::Xml::XmlNamespaceManager::__get_hashTable() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::Dictionary_2<::StringW,int32_t>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Xml::XmlNamespaceManager::__set_useHashtable(bool value)  {
::cordl_internals::setInstanceField<bool, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool System::Xml::XmlNamespaceManager::__get_useHashtable() const {
return ::cordl_internals::getInstanceField<bool, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Xml::XmlNamespaceManager::__set_xml(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW System::Xml::XmlNamespaceManager::__get_xml() const {
return ::cordl_internals::getInstanceField<::StringW, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Xml::XmlNamespaceManager::__set_xmlNs(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW System::Xml::XmlNamespaceManager::__get_xmlNs() const {
return ::cordl_internals::getInstanceField<::StringW, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 System::Xml::XmlNamespaceManager::XmlNamespaceManager()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<XmlNamespaceManager>())) {}
 void System::Xml::XmlNamespaceManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlNamespaceManager>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters [CppParam { name: "nameTable", ty: "System::Xml::XmlNameTable", modifiers: "", def_value: None }]
 System::Xml::XmlNamespaceManager::XmlNamespaceManager(System::Xml::XmlNameTable nameTable)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<XmlNamespaceManager>(nameTable))) {}
 void System::Xml::XmlNamespaceManager::_ctor(System::Xml::XmlNameTable nameTable)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlNamespaceManager>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::XmlNameTable>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, nameTable);
}
 System::Xml::XmlNameTable System::Xml::XmlNamespaceManager::get_NameTable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlNamespaceManager>::get(),
                            "get_NameTable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Xml::XmlNameTable, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW System::Xml::XmlNamespaceManager::get_DefaultNamespace()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlNamespaceManager>::get(),
                            "get_DefaultNamespace",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Xml::XmlNamespaceManager::PushScope()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlNamespaceManager>::get(),
                            "PushScope",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Xml::XmlNamespaceManager::PopScope()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlNamespaceManager>::get(),
                            "PopScope",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Xml::XmlNamespaceManager::AddNamespace(::StringW prefix, ::StringW uri)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlNamespaceManager>::get(),
                            "AddNamespace",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, prefix, uri);
}
 void System::Xml::XmlNamespaceManager::RemoveNamespace(::StringW prefix, ::StringW uri)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlNamespaceManager>::get(),
                            "RemoveNamespace",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, prefix, uri);
}
 System::Collections::IEnumerator System::Xml::XmlNamespaceManager::GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlNamespaceManager>::get(),
                            "GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::IEnumerator, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW System::Xml::XmlNamespaceManager::LookupNamespace(::StringW prefix)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlNamespaceManager>::get(),
                            "LookupNamespace",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method, prefix);
}
 int32_t System::Xml::XmlNamespaceManager::LookupNamespaceDecl(::StringW prefix)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlNamespaceManager>::get(),
                            "LookupNamespaceDecl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, prefix);
}
 ::StringW System::Xml::XmlNamespaceManager::LookupPrefix(::StringW uri)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlNamespaceManager>::get(),
                            "LookupPrefix",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method, uri);
}
