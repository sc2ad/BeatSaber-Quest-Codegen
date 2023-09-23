#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "System/Xml/Schema/zzzz__NamespaceList_def.hpp"
#include "System/Collections/zzzz__Hashtable_def.hpp"
#include "System/Collections/zzzz__ICollection_def.hpp"
#include "System/Xml/zzzz__XmlQualifiedName_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr System::Xml::Schema::System__Xml__Schema__NamespaceList__ListType::System__Xml__Schema__NamespaceList__ListType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void System::Xml::Schema::System__Xml__Schema__NamespaceList__ListType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Xml::Schema::System__Xml__Schema__NamespaceList__ListType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr System::Xml::Schema::System__Xml__Schema__NamespaceList__ListType  System::Xml::Schema::System__Xml__Schema__NamespaceList__ListType::Any{0};
constexpr System::Xml::Schema::System__Xml__Schema__NamespaceList__ListType  System::Xml::Schema::System__Xml__Schema__NamespaceList__ListType::Other{1};
constexpr System::Xml::Schema::System__Xml__Schema__NamespaceList__ListType  System::Xml::Schema::System__Xml__Schema__NamespaceList__ListType::Set{2};
//  Writing Method size for method: System::Xml::Schema::NamespaceList._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::NamespaceList::*)()>(&System::Xml::Schema::NamespaceList::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x273015c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Schema::NamespaceList>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::Schema::NamespaceList._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::NamespaceList::*)(::StringW, ::StringW)>(&System::Xml::Schema::NamespaceList::_ctor)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0x2730164;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Schema::NamespaceList>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::Schema::NamespaceList.get_Type
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Xml::Schema::System__Xml__Schema__NamespaceList__ListType (System::Xml::Schema::NamespaceList::*)()>(&System::Xml::Schema::NamespaceList::get_Type)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2730404;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Schema::NamespaceList>::get(),
                            "get_Type",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::Schema::NamespaceList.get_Excluded
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::Schema::NamespaceList::*)()>(&System::Xml::Schema::NamespaceList::get_Excluded)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x273040c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Schema::NamespaceList>::get(),
                            "get_Excluded",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::Schema::NamespaceList.get_Enumerate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::ICollection (System::Xml::Schema::NamespaceList::*)()>(&System::Xml::Schema::NamespaceList::get_Enumerate)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2730414;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Schema::NamespaceList>::get(),
                            "get_Enumerate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::Schema::NamespaceList.Allows
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::Schema::NamespaceList::*)(::StringW)>(&System::Xml::Schema::NamespaceList::Allows)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2730480;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Xml::Schema::NamespaceList),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Schema::NamespaceList>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::Schema::NamespaceList.Allows
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::Schema::NamespaceList::*)(System::Xml::XmlQualifiedName)>(&System::Xml::Schema::NamespaceList::Allows)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2730504;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Schema::NamespaceList>::get(),
                            "Allows",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::XmlQualifiedName>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::Schema::NamespaceList.ToString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::Schema::NamespaceList::*)()>(&System::Xml::Schema::NamespaceList::ToString)> {
  constexpr static std::size_t size = 0x4c8;
  constexpr static std::size_t addrs = 0x2730524;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Xml::Schema::NamespaceList),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Schema::NamespaceList>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
constexpr void System::Xml::Schema::NamespaceList::__set_type(System::Xml::Schema::System__Xml__Schema__NamespaceList__ListType value)  {
::cordl_internals::setInstanceField<System::Xml::Schema::System__Xml__Schema__NamespaceList__ListType, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Xml::Schema::System__Xml__Schema__NamespaceList__ListType>(value));
}
constexpr System::Xml::Schema::System__Xml__Schema__NamespaceList__ListType System::Xml::Schema::NamespaceList::__get_type() const {
return ::cordl_internals::getInstanceField<System::Xml::Schema::System__Xml__Schema__NamespaceList__ListType, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Xml::Schema::NamespaceList::__set_set(System::Collections::Hashtable value)  {
::cordl_internals::setInstanceField<System::Collections::Hashtable, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Hashtable>(value));
}
constexpr System::Collections::Hashtable System::Xml::Schema::NamespaceList::__get_set() const {
return ::cordl_internals::getInstanceField<System::Collections::Hashtable, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Xml::Schema::NamespaceList::__set_targetNamespace(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW System::Xml::Schema::NamespaceList::__get_targetNamespace() const {
return ::cordl_internals::getInstanceField<::StringW, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 System::Xml::Schema::NamespaceList::NamespaceList()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<NamespaceList>())) {}
 void System::Xml::Schema::NamespaceList::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Schema::NamespaceList>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters [CppParam { name: "namespaces", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "targetNamespace", ty: "::StringW", modifiers: "", def_value: None }]
 System::Xml::Schema::NamespaceList::NamespaceList(::StringW namespaces, ::StringW targetNamespace)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<NamespaceList>(namespaces, targetNamespace))) {}
 void System::Xml::Schema::NamespaceList::_ctor(::StringW namespaces, ::StringW targetNamespace)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Schema::NamespaceList>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, namespaces, targetNamespace);
}
 System::Xml::Schema::System__Xml__Schema__NamespaceList__ListType System::Xml::Schema::NamespaceList::get_Type()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Schema::NamespaceList>::get(),
                            "get_Type",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Xml::Schema::System__Xml__Schema__NamespaceList__ListType, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW System::Xml::Schema::NamespaceList::get_Excluded()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Schema::NamespaceList>::get(),
                            "get_Excluded",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Collections::ICollection System::Xml::Schema::NamespaceList::get_Enumerate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Schema::NamespaceList>::get(),
                            "get_Enumerate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::ICollection, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Xml::Schema::NamespaceList::Allows(::StringW ns)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Schema::NamespaceList>::get(),
                            "Allows",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, ns);
}
 bool System::Xml::Schema::NamespaceList::Allows(System::Xml::XmlQualifiedName qname)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Schema::NamespaceList>::get(),
                            "Allows",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::XmlQualifiedName>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, qname);
}
 ::StringW System::Xml::Schema::NamespaceList::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Schema::NamespaceList>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
