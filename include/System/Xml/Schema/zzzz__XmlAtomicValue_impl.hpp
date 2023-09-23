#pragma once
#include "System/Xml/XPath/zzzz__XPathItem_impl.hpp"
#include "System/zzzz__ValueType_impl.hpp"
#include "System/Xml/Schema/zzzz__XmlAtomicValue_def.hpp"
#include "System/Xml/zzzz__IXmlNamespaceResolver_def.hpp"
#include "System/zzzz__ICloneable_def.hpp"
#include "System/zzzz__TypeCode_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaType_def.hpp"
// Ctor Parameters [CppParam { name: "boolVal", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "dblVal", ty: "double_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "i64Val", ty: "int64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "i32Val", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "dtVal", ty: "System::DateTime", modifiers: "", def_value: Some("{}") }]
constexpr System::Xml::Schema::System__Xml__Schema__XmlAtomicValue__Union::System__Xml__Schema__XmlAtomicValue__Union(bool boolVal, double_t dblVal, int64_t i64Val, int32_t i32Val, System::DateTime dtVal) noexcept : ::bs_hook::ValueTypeWrapper() {this->boolVal = boolVal;
this->dblVal = dblVal;
this->i64Val = i64Val;
this->i32Val = i32Val;
this->dtVal = dtVal;
}
constexpr void System::Xml::Schema::System__Xml__Schema__XmlAtomicValue__Union::__set_boolVal(bool value)  {
::cordl_internals::setInstanceField<bool, 0x0>(this->__instance, std::forward<bool>(value));
}
constexpr bool System::Xml::Schema::System__Xml__Schema__XmlAtomicValue__Union::__get_boolVal() const {
return ::cordl_internals::getInstanceField<bool, 0x0>(this->__instance);
}
constexpr void System::Xml::Schema::System__Xml__Schema__XmlAtomicValue__Union::__set_dblVal(double_t value)  {
::cordl_internals::setInstanceField<double_t, 0x0>(this->__instance, std::forward<double_t>(value));
}
constexpr double_t System::Xml::Schema::System__Xml__Schema__XmlAtomicValue__Union::__get_dblVal() const {
return ::cordl_internals::getInstanceField<double_t, 0x0>(this->__instance);
}
constexpr void System::Xml::Schema::System__Xml__Schema__XmlAtomicValue__Union::__set_i64Val(int64_t value)  {
::cordl_internals::setInstanceField<int64_t, 0x0>(this->__instance, std::forward<int64_t>(value));
}
constexpr int64_t System::Xml::Schema::System__Xml__Schema__XmlAtomicValue__Union::__get_i64Val() const {
return ::cordl_internals::getInstanceField<int64_t, 0x0>(this->__instance);
}
constexpr void System::Xml::Schema::System__Xml__Schema__XmlAtomicValue__Union::__set_i32Val(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Xml::Schema::System__Xml__Schema__XmlAtomicValue__Union::__get_i32Val() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void System::Xml::Schema::System__Xml__Schema__XmlAtomicValue__Union::__set_dtVal(System::DateTime value)  {
::cordl_internals::setInstanceField<System::DateTime, 0x0>(this->__instance, std::forward<System::DateTime>(value));
}
constexpr System::DateTime System::Xml::Schema::System__Xml__Schema__XmlAtomicValue__Union::__get_dtVal() const {
return ::cordl_internals::getInstanceField<System::DateTime, 0x0>(this->__instance);
}
//  Writing Method size for method: System::Xml::Schema::System__Xml__Schema__XmlAtomicValue__NamespacePrefixForQName._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::System__Xml__Schema__XmlAtomicValue__NamespacePrefixForQName::*)(::StringW, ::StringW)>(&System::Xml::Schema::System__Xml__Schema__XmlAtomicValue__NamespacePrefixForQName::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2732a5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Schema::System__Xml__Schema__XmlAtomicValue__NamespacePrefixForQName>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::Schema::System__Xml__Schema__XmlAtomicValue__NamespacePrefixForQName.LookupNamespace
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::Schema::System__Xml__Schema__XmlAtomicValue__NamespacePrefixForQName::*)(::StringW)>(&System::Xml::Schema::System__Xml__Schema__XmlAtomicValue__NamespacePrefixForQName::LookupNamespace)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x27336f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Schema::System__Xml__Schema__XmlAtomicValue__NamespacePrefixForQName>::get(),
                            "LookupNamespace",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::Schema::System__Xml__Schema__XmlAtomicValue__NamespacePrefixForQName.LookupPrefix
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::Schema::System__Xml__Schema__XmlAtomicValue__NamespacePrefixForQName::*)(::StringW)>(&System::Xml::Schema::System__Xml__Schema__XmlAtomicValue__NamespacePrefixForQName::LookupPrefix)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x273372c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Schema::System__Xml__Schema__XmlAtomicValue__NamespacePrefixForQName>::get(),
                            "LookupPrefix",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Xml::IXmlNamespaceResolver
constexpr  System::Xml::Schema::System__Xml__Schema__XmlAtomicValue__NamespacePrefixForQName::operator System::Xml::IXmlNamespaceResolver() const noexcept {
return System::Xml::IXmlNamespaceResolver(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Xml::Schema::System__Xml__Schema__XmlAtomicValue__NamespacePrefixForQName::__set_prefix(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW System::Xml::Schema::System__Xml__Schema__XmlAtomicValue__NamespacePrefixForQName::__get_prefix() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Xml::Schema::System__Xml__Schema__XmlAtomicValue__NamespacePrefixForQName::__set_ns(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW System::Xml::Schema::System__Xml__Schema__XmlAtomicValue__NamespacePrefixForQName::__get_ns() const {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "prefix", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "ns", ty: "::StringW", modifiers: "", def_value: None }]
 System::Xml::Schema::System__Xml__Schema__XmlAtomicValue__NamespacePrefixForQName::System__Xml__Schema__XmlAtomicValue__NamespacePrefixForQName(::StringW prefix, ::StringW ns)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<System__Xml__Schema__XmlAtomicValue__NamespacePrefixForQName>(prefix, ns))) {}
 void System::Xml::Schema::System__Xml__Schema__XmlAtomicValue__NamespacePrefixForQName::_ctor(::StringW prefix, ::StringW ns)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Schema::System__Xml__Schema__XmlAtomicValue__NamespacePrefixForQName>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, prefix, ns);
}
 ::StringW System::Xml::Schema::System__Xml__Schema__XmlAtomicValue__NamespacePrefixForQName::LookupNamespace(::StringW prefix)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Schema::System__Xml__Schema__XmlAtomicValue__NamespacePrefixForQName>::get(),
                            "LookupNamespace",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method, prefix);
}
 ::StringW System::Xml::Schema::System__Xml__Schema__XmlAtomicValue__NamespacePrefixForQName::LookupPrefix(::StringW namespaceName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Schema::System__Xml__Schema__XmlAtomicValue__NamespacePrefixForQName>::get(),
                            "LookupPrefix",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method, namespaceName);
}
//  Writing Method size for method: System::Xml::Schema::XmlAtomicValue._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::XmlAtomicValue::*)(System::Xml::Schema::XmlSchemaType, bool)>(&System::Xml::Schema::XmlAtomicValue::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x27323d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Schema::XmlAtomicValue>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::Schema::XmlSchemaType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::Schema::XmlAtomicValue._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::XmlAtomicValue::*)(System::Xml::Schema::XmlSchemaType, System::DateTime)>(&System::Xml::Schema::XmlAtomicValue::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2732464;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Schema::XmlAtomicValue>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::Schema::XmlSchemaType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::DateTime>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::Schema::XmlAtomicValue._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::XmlAtomicValue::*)(System::Xml::Schema::XmlSchemaType, double_t)>(&System::Xml::Schema::XmlAtomicValue::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x27324ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Schema::XmlAtomicValue>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::Schema::XmlSchemaType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::Schema::XmlAtomicValue._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::XmlAtomicValue::*)(System::Xml::Schema::XmlSchemaType, int32_t)>(&System::Xml::Schema::XmlAtomicValue::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x273257c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Schema::XmlAtomicValue>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::Schema::XmlSchemaType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::Schema::XmlAtomicValue._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::XmlAtomicValue::*)(System::Xml::Schema::XmlSchemaType, int64_t)>(&System::Xml::Schema::XmlAtomicValue::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2732604;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Schema::XmlAtomicValue>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::Schema::XmlSchemaType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::Schema::XmlAtomicValue._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::XmlAtomicValue::*)(System::Xml::Schema::XmlSchemaType, ::StringW)>(&System::Xml::Schema::XmlAtomicValue::_ctor)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x273268c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Schema::XmlAtomicValue>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::Schema::XmlSchemaType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::Schema::XmlAtomicValue._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::XmlAtomicValue::*)(System::Xml::Schema::XmlSchemaType, ::StringW, System::Xml::IXmlNamespaceResolver)>(&System::Xml::Schema::XmlAtomicValue::_ctor)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x2732730;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Schema::XmlAtomicValue>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::Schema::XmlSchemaType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::IXmlNamespaceResolver>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::Schema::XmlAtomicValue._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::XmlAtomicValue::*)(System::Xml::Schema::XmlSchemaType, ::bs_hook::Il2CppWrapperType)>(&System::Xml::Schema::XmlAtomicValue::_ctor)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x2732a88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Schema::XmlAtomicValue>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::Schema::XmlSchemaType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::Schema::XmlAtomicValue._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::XmlAtomicValue::*)(System::Xml::Schema::XmlSchemaType, ::bs_hook::Il2CppWrapperType, System::Xml::IXmlNamespaceResolver)>(&System::Xml::Schema::XmlAtomicValue::_ctor)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x2732b2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Schema::XmlAtomicValue>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::Schema::XmlSchemaType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::IXmlNamespaceResolver>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::Schema::XmlAtomicValue.System_ICloneable_Clone
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (System::Xml::Schema::XmlAtomicValue::*)()>(&System::Xml::Schema::XmlAtomicValue::System_ICloneable_Clone)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2732d1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Schema::XmlAtomicValue>::get(),
                            "System.ICloneable.Clone",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::Schema::XmlAtomicValue.get_XmlType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Xml::Schema::XmlSchemaType (System::Xml::Schema::XmlAtomicValue::*)()>(&System::Xml::Schema::XmlAtomicValue::get_XmlType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2732d20;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Xml::Schema::XmlAtomicValue),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Schema::XmlAtomicValue>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::Schema::XmlAtomicValue.get_ValueType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Type (System::Xml::Schema::XmlAtomicValue::*)()>(&System::Xml::Schema::XmlAtomicValue::get_ValueType)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2732d28;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Xml::Schema::XmlAtomicValue),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Schema::XmlAtomicValue>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::Schema::XmlAtomicValue.get_TypedValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (System::Xml::Schema::XmlAtomicValue::*)()>(&System::Xml::Schema::XmlAtomicValue::get_TypedValue)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x2732d50;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Xml::Schema::XmlAtomicValue),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Schema::XmlAtomicValue>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::Schema::XmlAtomicValue.get_ValueAsBoolean
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::Schema::XmlAtomicValue::*)()>(&System::Xml::Schema::XmlAtomicValue::get_ValueAsBoolean)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x2732f8c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Xml::Schema::XmlAtomicValue),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Schema::XmlAtomicValue>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::Schema::XmlAtomicValue.get_ValueAsDateTime
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::DateTime (System::Xml::Schema::XmlAtomicValue::*)()>(&System::Xml::Schema::XmlAtomicValue::get_ValueAsDateTime)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x2733058;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Xml::Schema::XmlAtomicValue),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Schema::XmlAtomicValue>::get(),
                                  9
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::Schema::XmlAtomicValue.get_ValueAsDouble
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (System::Xml::Schema::XmlAtomicValue::*)()>(&System::Xml::Schema::XmlAtomicValue::get_ValueAsDouble)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x2733138;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Xml::Schema::XmlAtomicValue),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Schema::XmlAtomicValue>::get(),
                                  10
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::Schema::XmlAtomicValue.get_ValueAsInt
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Xml::Schema::XmlAtomicValue::*)()>(&System::Xml::Schema::XmlAtomicValue::get_ValueAsInt)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x2733214;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Xml::Schema::XmlAtomicValue),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Schema::XmlAtomicValue>::get(),
                                  11
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::Schema::XmlAtomicValue.get_ValueAsLong
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (System::Xml::Schema::XmlAtomicValue::*)()>(&System::Xml::Schema::XmlAtomicValue::get_ValueAsLong)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x27332e8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Xml::Schema::XmlAtomicValue),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Schema::XmlAtomicValue>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::Schema::XmlAtomicValue.ValueAs
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (System::Xml::Schema::XmlAtomicValue::*)(System::Type, System::Xml::IXmlNamespaceResolver)>(&System::Xml::Schema::XmlAtomicValue::ValueAs)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x27333c8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Xml::Schema::XmlAtomicValue),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Schema::XmlAtomicValue>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::Schema::XmlAtomicValue.get_Value
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::Schema::XmlAtomicValue::*)()>(&System::Xml::Schema::XmlAtomicValue::get_Value)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x27335f8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Xml::Schema::XmlAtomicValue),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Schema::XmlAtomicValue>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::Schema::XmlAtomicValue.ToString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::Schema::XmlAtomicValue::*)()>(&System::Xml::Schema::XmlAtomicValue::ToString)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x27336ec;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Xml::Schema::XmlAtomicValue),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Schema::XmlAtomicValue>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::Schema::XmlAtomicValue.GetPrefixFromQName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::Schema::XmlAtomicValue::*)(::StringW)>(&System::Xml::Schema::XmlAtomicValue::GetPrefixFromQName)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x2732990;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Schema::XmlAtomicValue>::get(),
                            "GetPrefixFromQName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::ICloneable
constexpr  System::Xml::Schema::XmlAtomicValue::operator System::ICloneable() const noexcept {
return System::ICloneable(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Xml::Schema::XmlAtomicValue::__set_xmlType(System::Xml::Schema::XmlSchemaType value)  {
::cordl_internals::setInstanceField<System::Xml::Schema::XmlSchemaType, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Xml::Schema::XmlSchemaType>(value));
}
constexpr System::Xml::Schema::XmlSchemaType System::Xml::Schema::XmlAtomicValue::__get_xmlType() const {
return ::cordl_internals::getInstanceField<System::Xml::Schema::XmlSchemaType, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Xml::Schema::XmlAtomicValue::__set_objVal(::bs_hook::Il2CppWrapperType value)  {
::cordl_internals::setInstanceField<::bs_hook::Il2CppWrapperType, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::bs_hook::Il2CppWrapperType>(value));
}
constexpr ::bs_hook::Il2CppWrapperType System::Xml::Schema::XmlAtomicValue::__get_objVal() const {
return ::cordl_internals::getInstanceField<::bs_hook::Il2CppWrapperType, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Xml::Schema::XmlAtomicValue::__set_clrType(System::TypeCode value)  {
::cordl_internals::setInstanceField<System::TypeCode, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::TypeCode>(value));
}
constexpr System::TypeCode System::Xml::Schema::XmlAtomicValue::__get_clrType() const {
return ::cordl_internals::getInstanceField<System::TypeCode, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Xml::Schema::XmlAtomicValue::__set_unionVal(System::Xml::Schema::System__Xml__Schema__XmlAtomicValue__Union value)  {
::cordl_internals::setInstanceField<System::Xml::Schema::System__Xml__Schema__XmlAtomicValue__Union, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Xml::Schema::System__Xml__Schema__XmlAtomicValue__Union>(value));
}
constexpr System::Xml::Schema::System__Xml__Schema__XmlAtomicValue__Union System::Xml::Schema::XmlAtomicValue::__get_unionVal() const {
return ::cordl_internals::getInstanceField<System::Xml::Schema::System__Xml__Schema__XmlAtomicValue__Union, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Xml::Schema::XmlAtomicValue::__set_nsPrefix(System::Xml::Schema::System__Xml__Schema__XmlAtomicValue__NamespacePrefixForQName value)  {
::cordl_internals::setInstanceField<System::Xml::Schema::System__Xml__Schema__XmlAtomicValue__NamespacePrefixForQName, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Xml::Schema::System__Xml__Schema__XmlAtomicValue__NamespacePrefixForQName>(value));
}
constexpr System::Xml::Schema::System__Xml__Schema__XmlAtomicValue__NamespacePrefixForQName System::Xml::Schema::XmlAtomicValue::__get_nsPrefix() const {
return ::cordl_internals::getInstanceField<System::Xml::Schema::System__Xml__Schema__XmlAtomicValue__NamespacePrefixForQName, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "xmlType", ty: "System::Xml::Schema::XmlSchemaType", modifiers: "", def_value: None }, CppParam { name: "value", ty: "bool", modifiers: "", def_value: None }]
 System::Xml::Schema::XmlAtomicValue::XmlAtomicValue(System::Xml::Schema::XmlSchemaType xmlType, bool value)  : System::Xml::XPath::XPathItem(THROW_UNLESS(::il2cpp_utils::New<XmlAtomicValue>(xmlType, value))) {}
 void System::Xml::Schema::XmlAtomicValue::_ctor(System::Xml::Schema::XmlSchemaType xmlType, bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Schema::XmlAtomicValue>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::Schema::XmlSchemaType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, xmlType, value);
}
// Ctor Parameters [CppParam { name: "xmlType", ty: "System::Xml::Schema::XmlSchemaType", modifiers: "", def_value: None }, CppParam { name: "value", ty: "System::DateTime", modifiers: "", def_value: None }]
 System::Xml::Schema::XmlAtomicValue::XmlAtomicValue(System::Xml::Schema::XmlSchemaType xmlType, System::DateTime value)  : System::Xml::XPath::XPathItem(THROW_UNLESS(::il2cpp_utils::New<XmlAtomicValue>(xmlType, value))) {}
 void System::Xml::Schema::XmlAtomicValue::_ctor(System::Xml::Schema::XmlSchemaType xmlType, System::DateTime value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Schema::XmlAtomicValue>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::Schema::XmlSchemaType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::DateTime>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, xmlType, value);
}
// Ctor Parameters [CppParam { name: "xmlType", ty: "System::Xml::Schema::XmlSchemaType", modifiers: "", def_value: None }, CppParam { name: "value", ty: "double_t", modifiers: "", def_value: None }]
 System::Xml::Schema::XmlAtomicValue::XmlAtomicValue(System::Xml::Schema::XmlSchemaType xmlType, double_t value)  : System::Xml::XPath::XPathItem(THROW_UNLESS(::il2cpp_utils::New<XmlAtomicValue>(xmlType, value))) {}
 void System::Xml::Schema::XmlAtomicValue::_ctor(System::Xml::Schema::XmlSchemaType xmlType, double_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Schema::XmlAtomicValue>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::Schema::XmlSchemaType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, xmlType, value);
}
// Ctor Parameters [CppParam { name: "xmlType", ty: "System::Xml::Schema::XmlSchemaType", modifiers: "", def_value: None }, CppParam { name: "value", ty: "int32_t", modifiers: "", def_value: None }]
 System::Xml::Schema::XmlAtomicValue::XmlAtomicValue(System::Xml::Schema::XmlSchemaType xmlType, int32_t value)  : System::Xml::XPath::XPathItem(THROW_UNLESS(::il2cpp_utils::New<XmlAtomicValue>(xmlType, value))) {}
 void System::Xml::Schema::XmlAtomicValue::_ctor(System::Xml::Schema::XmlSchemaType xmlType, int32_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Schema::XmlAtomicValue>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::Schema::XmlSchemaType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, xmlType, value);
}
// Ctor Parameters [CppParam { name: "xmlType", ty: "System::Xml::Schema::XmlSchemaType", modifiers: "", def_value: None }, CppParam { name: "value", ty: "int64_t", modifiers: "", def_value: None }]
 System::Xml::Schema::XmlAtomicValue::XmlAtomicValue(System::Xml::Schema::XmlSchemaType xmlType, int64_t value)  : System::Xml::XPath::XPathItem(THROW_UNLESS(::il2cpp_utils::New<XmlAtomicValue>(xmlType, value))) {}
 void System::Xml::Schema::XmlAtomicValue::_ctor(System::Xml::Schema::XmlSchemaType xmlType, int64_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Schema::XmlAtomicValue>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::Schema::XmlSchemaType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, xmlType, value);
}
// Ctor Parameters [CppParam { name: "xmlType", ty: "System::Xml::Schema::XmlSchemaType", modifiers: "", def_value: None }, CppParam { name: "value", ty: "::StringW", modifiers: "", def_value: None }]
 System::Xml::Schema::XmlAtomicValue::XmlAtomicValue(System::Xml::Schema::XmlSchemaType xmlType, ::StringW value)  : System::Xml::XPath::XPathItem(THROW_UNLESS(::il2cpp_utils::New<XmlAtomicValue>(xmlType, value))) {}
 void System::Xml::Schema::XmlAtomicValue::_ctor(System::Xml::Schema::XmlSchemaType xmlType, ::StringW value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Schema::XmlAtomicValue>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::Schema::XmlSchemaType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, xmlType, value);
}
// Ctor Parameters [CppParam { name: "xmlType", ty: "System::Xml::Schema::XmlSchemaType", modifiers: "", def_value: None }, CppParam { name: "value", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "nsResolver", ty: "System::Xml::IXmlNamespaceResolver", modifiers: "", def_value: None }]
 System::Xml::Schema::XmlAtomicValue::XmlAtomicValue(System::Xml::Schema::XmlSchemaType xmlType, ::StringW value, System::Xml::IXmlNamespaceResolver nsResolver)  : System::Xml::XPath::XPathItem(THROW_UNLESS(::il2cpp_utils::New<XmlAtomicValue>(xmlType, value, nsResolver))) {}
 void System::Xml::Schema::XmlAtomicValue::_ctor(System::Xml::Schema::XmlSchemaType xmlType, ::StringW value, System::Xml::IXmlNamespaceResolver nsResolver)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Schema::XmlAtomicValue>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::Schema::XmlSchemaType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::IXmlNamespaceResolver>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, xmlType, value, nsResolver);
}
// Ctor Parameters [CppParam { name: "xmlType", ty: "System::Xml::Schema::XmlSchemaType", modifiers: "", def_value: None }, CppParam { name: "value", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }]
 System::Xml::Schema::XmlAtomicValue::XmlAtomicValue(System::Xml::Schema::XmlSchemaType xmlType, ::bs_hook::Il2CppWrapperType value)  : System::Xml::XPath::XPathItem(THROW_UNLESS(::il2cpp_utils::New<XmlAtomicValue>(xmlType, value))) {}
 void System::Xml::Schema::XmlAtomicValue::_ctor(System::Xml::Schema::XmlSchemaType xmlType, ::bs_hook::Il2CppWrapperType value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Schema::XmlAtomicValue>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::Schema::XmlSchemaType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, xmlType, value);
}
// Ctor Parameters [CppParam { name: "xmlType", ty: "System::Xml::Schema::XmlSchemaType", modifiers: "", def_value: None }, CppParam { name: "value", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "nsResolver", ty: "System::Xml::IXmlNamespaceResolver", modifiers: "", def_value: None }]
 System::Xml::Schema::XmlAtomicValue::XmlAtomicValue(System::Xml::Schema::XmlSchemaType xmlType, ::bs_hook::Il2CppWrapperType value, System::Xml::IXmlNamespaceResolver nsResolver)  : System::Xml::XPath::XPathItem(THROW_UNLESS(::il2cpp_utils::New<XmlAtomicValue>(xmlType, value, nsResolver))) {}
 void System::Xml::Schema::XmlAtomicValue::_ctor(System::Xml::Schema::XmlSchemaType xmlType, ::bs_hook::Il2CppWrapperType value, System::Xml::IXmlNamespaceResolver nsResolver)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Schema::XmlAtomicValue>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::Schema::XmlSchemaType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::IXmlNamespaceResolver>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, xmlType, value, nsResolver);
}
 ::bs_hook::Il2CppWrapperType System::Xml::Schema::XmlAtomicValue::System_ICloneable_Clone()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Schema::XmlAtomicValue>::get(),
                            "System.ICloneable.Clone",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Xml::Schema::XmlSchemaType System::Xml::Schema::XmlAtomicValue::get_XmlType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Schema::XmlAtomicValue>::get(),
                            "get_XmlType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Xml::Schema::XmlSchemaType, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Type System::Xml::Schema::XmlAtomicValue::get_ValueType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Schema::XmlAtomicValue>::get(),
                            "get_ValueType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Type, false>(const_cast<void*>(instance), ___internal_method);
}
 ::bs_hook::Il2CppWrapperType System::Xml::Schema::XmlAtomicValue::get_TypedValue()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Schema::XmlAtomicValue>::get(),
                            "get_TypedValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Xml::Schema::XmlAtomicValue::get_ValueAsBoolean()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Schema::XmlAtomicValue>::get(),
                            "get_ValueAsBoolean",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 System::DateTime System::Xml::Schema::XmlAtomicValue::get_ValueAsDateTime()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Schema::XmlAtomicValue>::get(),
                            "get_ValueAsDateTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::DateTime, false>(const_cast<void*>(instance), ___internal_method);
}
 double_t System::Xml::Schema::XmlAtomicValue::get_ValueAsDouble()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Schema::XmlAtomicValue>::get(),
                            "get_ValueAsDouble",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<double_t, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t System::Xml::Schema::XmlAtomicValue::get_ValueAsInt()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Schema::XmlAtomicValue>::get(),
                            "get_ValueAsInt",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 int64_t System::Xml::Schema::XmlAtomicValue::get_ValueAsLong()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Schema::XmlAtomicValue>::get(),
                            "get_ValueAsLong",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t, false>(const_cast<void*>(instance), ___internal_method);
}
 ::bs_hook::Il2CppWrapperType System::Xml::Schema::XmlAtomicValue::ValueAs(System::Type type, System::Xml::IXmlNamespaceResolver nsResolver)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Schema::XmlAtomicValue>::get(),
                            "ValueAs",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::IXmlNamespaceResolver>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method, type, nsResolver);
}
 ::StringW System::Xml::Schema::XmlAtomicValue::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Schema::XmlAtomicValue>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW System::Xml::Schema::XmlAtomicValue::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Schema::XmlAtomicValue>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW System::Xml::Schema::XmlAtomicValue::GetPrefixFromQName(::StringW value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Schema::XmlAtomicValue>::get(),
                            "GetPrefixFromQName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method, value);
}
