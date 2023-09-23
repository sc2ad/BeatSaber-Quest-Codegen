#pragma once
#include "System/Xml/zzzz__XmlWriter_impl.hpp"
#include "System/zzzz__Enum_impl.hpp"
#include "System/zzzz__ValueType_impl.hpp"
#include "System/Xml/zzzz__XmlWellFormedWriter_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/Xml/zzzz__XmlWriter_def.hpp"
#include "System/Xml/zzzz__IXmlNamespaceResolver_def.hpp"
#include "System/Xml/zzzz__XmlStandalone_def.hpp"
#include "System/Xml/zzzz__XmlCharType_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Xml/zzzz__XmlException_def.hpp"
#include "System/Xml/zzzz__WriteState_def.hpp"
#include "System/Xml/zzzz__XmlRawWriter_def.hpp"
#include "System/Xml/zzzz__ConformanceLevel_def.hpp"
#include "System/Xml/zzzz__XmlWriterSettings_def.hpp"
#include "System/Xml/zzzz__SecureStringHasher_def.hpp"
#include "System/Xml/zzzz__XmlSpace_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr System::Xml::System__Xml__XmlWellFormedWriter__State::System__Xml__XmlWellFormedWriter__State(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void System::Xml::System__Xml__XmlWellFormedWriter__State::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Xml::System__Xml__XmlWellFormedWriter__State::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr System::Xml::System__Xml__XmlWellFormedWriter__State  System::Xml::System__Xml__XmlWellFormedWriter__State::Start{0};
constexpr System::Xml::System__Xml__XmlWellFormedWriter__State  System::Xml::System__Xml__XmlWellFormedWriter__State::TopLevel{1};
constexpr System::Xml::System__Xml__XmlWellFormedWriter__State  System::Xml::System__Xml__XmlWellFormedWriter__State::Document{2};
constexpr System::Xml::System__Xml__XmlWellFormedWriter__State  System::Xml::System__Xml__XmlWellFormedWriter__State::Element{3};
constexpr System::Xml::System__Xml__XmlWellFormedWriter__State  System::Xml::System__Xml__XmlWellFormedWriter__State::Content{4};
constexpr System::Xml::System__Xml__XmlWellFormedWriter__State  System::Xml::System__Xml__XmlWellFormedWriter__State::B64Content{5};
constexpr System::Xml::System__Xml__XmlWellFormedWriter__State  System::Xml::System__Xml__XmlWellFormedWriter__State::B64Attribute{6};
constexpr System::Xml::System__Xml__XmlWellFormedWriter__State  System::Xml::System__Xml__XmlWellFormedWriter__State::AfterRootEle{7};
constexpr System::Xml::System__Xml__XmlWellFormedWriter__State  System::Xml::System__Xml__XmlWellFormedWriter__State::Attribute{8};
constexpr System::Xml::System__Xml__XmlWellFormedWriter__State  System::Xml::System__Xml__XmlWellFormedWriter__State::SpecialAttr{9};
constexpr System::Xml::System__Xml__XmlWellFormedWriter__State  System::Xml::System__Xml__XmlWellFormedWriter__State::EndDocument{10};
constexpr System::Xml::System__Xml__XmlWellFormedWriter__State  System::Xml::System__Xml__XmlWellFormedWriter__State::RootLevelAttr{11};
constexpr System::Xml::System__Xml__XmlWellFormedWriter__State  System::Xml::System__Xml__XmlWellFormedWriter__State::RootLevelSpecAttr{12};
constexpr System::Xml::System__Xml__XmlWellFormedWriter__State  System::Xml::System__Xml__XmlWellFormedWriter__State::RootLevelB64Attr{13};
constexpr System::Xml::System__Xml__XmlWellFormedWriter__State  System::Xml::System__Xml__XmlWellFormedWriter__State::AfterRootLevelAttr{14};
constexpr System::Xml::System__Xml__XmlWellFormedWriter__State  System::Xml::System__Xml__XmlWellFormedWriter__State::Closed{15};
constexpr System::Xml::System__Xml__XmlWellFormedWriter__State  System::Xml::System__Xml__XmlWellFormedWriter__State::Error{16};
constexpr System::Xml::System__Xml__XmlWellFormedWriter__State  System::Xml::System__Xml__XmlWellFormedWriter__State::StartContent{101};
constexpr System::Xml::System__Xml__XmlWellFormedWriter__State  System::Xml::System__Xml__XmlWellFormedWriter__State::StartContentEle{102};
constexpr System::Xml::System__Xml__XmlWellFormedWriter__State  System::Xml::System__Xml__XmlWellFormedWriter__State::StartContentB64{103};
constexpr System::Xml::System__Xml__XmlWellFormedWriter__State  System::Xml::System__Xml__XmlWellFormedWriter__State::StartDoc{104};
constexpr System::Xml::System__Xml__XmlWellFormedWriter__State  System::Xml::System__Xml__XmlWellFormedWriter__State::StartDocEle{106};
constexpr System::Xml::System__Xml__XmlWellFormedWriter__State  System::Xml::System__Xml__XmlWellFormedWriter__State::EndAttrSEle{107};
constexpr System::Xml::System__Xml__XmlWellFormedWriter__State  System::Xml::System__Xml__XmlWellFormedWriter__State::EndAttrEEle{108};
constexpr System::Xml::System__Xml__XmlWellFormedWriter__State  System::Xml::System__Xml__XmlWellFormedWriter__State::EndAttrSCont{109};
constexpr System::Xml::System__Xml__XmlWellFormedWriter__State  System::Xml::System__Xml__XmlWellFormedWriter__State::EndAttrSAttr{111};
constexpr System::Xml::System__Xml__XmlWellFormedWriter__State  System::Xml::System__Xml__XmlWellFormedWriter__State::PostB64Cont{112};
constexpr System::Xml::System__Xml__XmlWellFormedWriter__State  System::Xml::System__Xml__XmlWellFormedWriter__State::PostB64Attr{113};
constexpr System::Xml::System__Xml__XmlWellFormedWriter__State  System::Xml::System__Xml__XmlWellFormedWriter__State::PostB64RootAttr{114};
constexpr System::Xml::System__Xml__XmlWellFormedWriter__State  System::Xml::System__Xml__XmlWellFormedWriter__State::StartFragEle{115};
constexpr System::Xml::System__Xml__XmlWellFormedWriter__State  System::Xml::System__Xml__XmlWellFormedWriter__State::StartFragCont{116};
constexpr System::Xml::System__Xml__XmlWellFormedWriter__State  System::Xml::System__Xml__XmlWellFormedWriter__State::StartFragB64{117};
constexpr System::Xml::System__Xml__XmlWellFormedWriter__State  System::Xml::System__Xml__XmlWellFormedWriter__State::StartRootLevelAttr{118};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr System::Xml::System__Xml__XmlWellFormedWriter__Token::System__Xml__XmlWellFormedWriter__Token(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void System::Xml::System__Xml__XmlWellFormedWriter__Token::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Xml::System__Xml__XmlWellFormedWriter__Token::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr System::Xml::System__Xml__XmlWellFormedWriter__Token  System::Xml::System__Xml__XmlWellFormedWriter__Token::StartDocument{0};
constexpr System::Xml::System__Xml__XmlWellFormedWriter__Token  System::Xml::System__Xml__XmlWellFormedWriter__Token::EndDocument{1};
constexpr System::Xml::System__Xml__XmlWellFormedWriter__Token  System::Xml::System__Xml__XmlWellFormedWriter__Token::PI{2};
constexpr System::Xml::System__Xml__XmlWellFormedWriter__Token  System::Xml::System__Xml__XmlWellFormedWriter__Token::Comment{3};
constexpr System::Xml::System__Xml__XmlWellFormedWriter__Token  System::Xml::System__Xml__XmlWellFormedWriter__Token::Dtd{4};
constexpr System::Xml::System__Xml__XmlWellFormedWriter__Token  System::Xml::System__Xml__XmlWellFormedWriter__Token::StartElement{5};
constexpr System::Xml::System__Xml__XmlWellFormedWriter__Token  System::Xml::System__Xml__XmlWellFormedWriter__Token::EndElement{6};
constexpr System::Xml::System__Xml__XmlWellFormedWriter__Token  System::Xml::System__Xml__XmlWellFormedWriter__Token::StartAttribute{7};
constexpr System::Xml::System__Xml__XmlWellFormedWriter__Token  System::Xml::System__Xml__XmlWellFormedWriter__Token::EndAttribute{8};
constexpr System::Xml::System__Xml__XmlWellFormedWriter__Token  System::Xml::System__Xml__XmlWellFormedWriter__Token::Text{9};
constexpr System::Xml::System__Xml__XmlWellFormedWriter__Token  System::Xml::System__Xml__XmlWellFormedWriter__Token::CData{10};
constexpr System::Xml::System__Xml__XmlWellFormedWriter__Token  System::Xml::System__Xml__XmlWellFormedWriter__Token::AtomicValue{11};
constexpr System::Xml::System__Xml__XmlWellFormedWriter__Token  System::Xml::System__Xml__XmlWellFormedWriter__Token::Base64{12};
constexpr System::Xml::System__Xml__XmlWellFormedWriter__Token  System::Xml::System__Xml__XmlWellFormedWriter__Token::RawData{13};
constexpr System::Xml::System__Xml__XmlWellFormedWriter__Token  System::Xml::System__Xml__XmlWellFormedWriter__Token::Whitespace{14};
//  Writing Method size for method: System::Xml::System__Xml__XmlWellFormedWriter__NamespaceResolverProxy._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::System__Xml__XmlWellFormedWriter__NamespaceResolverProxy::*)(System::Xml::XmlWellFormedWriter)>(&System::Xml::System__Xml__XmlWellFormedWriter__NamespaceResolverProxy::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x26e5558;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::System__Xml__XmlWellFormedWriter__NamespaceResolverProxy>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::XmlWellFormedWriter>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::System__Xml__XmlWellFormedWriter__NamespaceResolverProxy.System_Xml_IXmlNamespaceResolver_LookupNamespace
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::System__Xml__XmlWellFormedWriter__NamespaceResolverProxy::*)(::StringW)>(&System::Xml::System__Xml__XmlWellFormedWriter__NamespaceResolverProxy::System_Xml_IXmlNamespaceResolver_LookupNamespace)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x26ec8c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::System__Xml__XmlWellFormedWriter__NamespaceResolverProxy>::get(),
                            "System.Xml.IXmlNamespaceResolver.LookupNamespace",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::System__Xml__XmlWellFormedWriter__NamespaceResolverProxy.System_Xml_IXmlNamespaceResolver_LookupPrefix
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::System__Xml__XmlWellFormedWriter__NamespaceResolverProxy::*)(::StringW)>(&System::Xml::System__Xml__XmlWellFormedWriter__NamespaceResolverProxy::System_Xml_IXmlNamespaceResolver_LookupPrefix)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x26ec8e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::System__Xml__XmlWellFormedWriter__NamespaceResolverProxy>::get(),
                            "System.Xml.IXmlNamespaceResolver.LookupPrefix",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Xml::IXmlNamespaceResolver
constexpr  System::Xml::System__Xml__XmlWellFormedWriter__NamespaceResolverProxy::operator System::Xml::IXmlNamespaceResolver() const noexcept {
return System::Xml::IXmlNamespaceResolver(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Xml::System__Xml__XmlWellFormedWriter__NamespaceResolverProxy::__set_wfWriter(System::Xml::XmlWellFormedWriter value)  {
::cordl_internals::setInstanceField<System::Xml::XmlWellFormedWriter, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Xml::XmlWellFormedWriter>(value));
}
constexpr System::Xml::XmlWellFormedWriter System::Xml::System__Xml__XmlWellFormedWriter__NamespaceResolverProxy::__get_wfWriter() const {
return ::cordl_internals::getInstanceField<System::Xml::XmlWellFormedWriter, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "wfWriter", ty: "System::Xml::XmlWellFormedWriter", modifiers: "", def_value: None }]
 System::Xml::System__Xml__XmlWellFormedWriter__NamespaceResolverProxy::System__Xml__XmlWellFormedWriter__NamespaceResolverProxy(System::Xml::XmlWellFormedWriter wfWriter)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<System__Xml__XmlWellFormedWriter__NamespaceResolverProxy>(wfWriter))) {}
 void System::Xml::System__Xml__XmlWellFormedWriter__NamespaceResolverProxy::_ctor(System::Xml::XmlWellFormedWriter wfWriter)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::System__Xml__XmlWellFormedWriter__NamespaceResolverProxy>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::XmlWellFormedWriter>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, wfWriter);
}
 ::StringW System::Xml::System__Xml__XmlWellFormedWriter__NamespaceResolverProxy::System_Xml_IXmlNamespaceResolver_LookupNamespace(::StringW prefix)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::System__Xml__XmlWellFormedWriter__NamespaceResolverProxy>::get(),
                            "System.Xml.IXmlNamespaceResolver.LookupNamespace",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method, prefix);
}
 ::StringW System::Xml::System__Xml__XmlWellFormedWriter__NamespaceResolverProxy::System_Xml_IXmlNamespaceResolver_LookupPrefix(::StringW namespaceName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::System__Xml__XmlWellFormedWriter__NamespaceResolverProxy>::get(),
                            "System.Xml.IXmlNamespaceResolver.LookupPrefix",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method, namespaceName);
}
//  Writing Method size for method: System::Xml::System__Xml__XmlWellFormedWriter__ElementScope.Set
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::System__Xml__XmlWellFormedWriter__ElementScope::*)(::StringW, ::StringW, ::StringW, int32_t)>(&System::Xml::System__Xml__XmlWellFormedWriter__ElementScope::Set)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x26e5590;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::System__Xml__XmlWellFormedWriter__ElementScope>::get(),
                            "Set",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::System__Xml__XmlWellFormedWriter__ElementScope.WriteEndElement
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::System__Xml__XmlWellFormedWriter__ElementScope::*)(System::Xml::XmlRawWriter)>(&System::Xml::System__Xml__XmlWellFormedWriter__ElementScope::WriteEndElement)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x26e6d70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::System__Xml__XmlWellFormedWriter__ElementScope>::get(),
                            "WriteEndElement",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::XmlRawWriter>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::System__Xml__XmlWellFormedWriter__ElementScope.WriteFullEndElement
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::System__Xml__XmlWellFormedWriter__ElementScope::*)(System::Xml::XmlRawWriter)>(&System::Xml::System__Xml__XmlWellFormedWriter__ElementScope::WriteFullEndElement)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x26e7060;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::System__Xml__XmlWellFormedWriter__ElementScope>::get(),
                            "WriteFullEndElement",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::XmlRawWriter>::get()}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "prevNSTop", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "prefix", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "localName", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "namespaceUri", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "xmlSpace", ty: "System::Xml::XmlSpace", modifiers: "", def_value: Some("{}") }, CppParam { name: "xmlLang", ty: "::StringW", modifiers: "", def_value: Some("csnull") }]
constexpr System::Xml::System__Xml__XmlWellFormedWriter__ElementScope::System__Xml__XmlWellFormedWriter__ElementScope(int32_t prevNSTop, ::StringW prefix, ::StringW localName, ::StringW namespaceUri, System::Xml::XmlSpace xmlSpace, ::StringW xmlLang) noexcept : ::bs_hook::ValueTypeWrapper() {this->prevNSTop = prevNSTop;
this->prefix = prefix;
this->localName = localName;
this->namespaceUri = namespaceUri;
this->xmlSpace = xmlSpace;
this->xmlLang = xmlLang;
}
constexpr void System::Xml::System__Xml__XmlWellFormedWriter__ElementScope::__set_prevNSTop(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Xml::System__Xml__XmlWellFormedWriter__ElementScope::__get_prevNSTop() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void System::Xml::System__Xml__XmlWellFormedWriter__ElementScope::__set_prefix(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x8>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW System::Xml::System__Xml__XmlWellFormedWriter__ElementScope::__get_prefix() const {
return ::cordl_internals::getInstanceField<::StringW, 0x8>(this->__instance);
}
constexpr void System::Xml::System__Xml__XmlWellFormedWriter__ElementScope::__set_localName(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW System::Xml::System__Xml__XmlWellFormedWriter__ElementScope::__get_localName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this->__instance);
}
constexpr void System::Xml::System__Xml__XmlWellFormedWriter__ElementScope::__set_namespaceUri(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x18>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW System::Xml::System__Xml__XmlWellFormedWriter__ElementScope::__get_namespaceUri() const {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this->__instance);
}
constexpr void System::Xml::System__Xml__XmlWellFormedWriter__ElementScope::__set_xmlSpace(System::Xml::XmlSpace value)  {
::cordl_internals::setInstanceField<System::Xml::XmlSpace, 0x20>(this->__instance, std::forward<System::Xml::XmlSpace>(value));
}
constexpr System::Xml::XmlSpace System::Xml::System__Xml__XmlWellFormedWriter__ElementScope::__get_xmlSpace() const {
return ::cordl_internals::getInstanceField<System::Xml::XmlSpace, 0x20>(this->__instance);
}
constexpr void System::Xml::System__Xml__XmlWellFormedWriter__ElementScope::__set_xmlLang(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x28>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW System::Xml::System__Xml__XmlWellFormedWriter__ElementScope::__get_xmlLang() const {
return ::cordl_internals::getInstanceField<::StringW, 0x28>(this->__instance);
}
 void System::Xml::System__Xml__XmlWellFormedWriter__ElementScope::Set(::StringW prefix, ::StringW localName, ::StringW namespaceUri, int32_t prevNSTop)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::System__Xml__XmlWellFormedWriter__ElementScope>::get(),
                            "Set",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, prefix, localName, namespaceUri, prevNSTop);
}
 void System::Xml::System__Xml__XmlWellFormedWriter__ElementScope::WriteEndElement(System::Xml::XmlRawWriter rawWriter)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::System__Xml__XmlWellFormedWriter__ElementScope>::get(),
                            "WriteEndElement",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::XmlRawWriter>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, rawWriter);
}
 void System::Xml::System__Xml__XmlWellFormedWriter__ElementScope::WriteFullEndElement(System::Xml::XmlRawWriter rawWriter)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::System__Xml__XmlWellFormedWriter__ElementScope>::get(),
                            "WriteFullEndElement",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::XmlRawWriter>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, rawWriter);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr System::Xml::System__Xml__XmlWellFormedWriter__NamespaceKind::System__Xml__XmlWellFormedWriter__NamespaceKind(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void System::Xml::System__Xml__XmlWellFormedWriter__NamespaceKind::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Xml::System__Xml__XmlWellFormedWriter__NamespaceKind::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr System::Xml::System__Xml__XmlWellFormedWriter__NamespaceKind  System::Xml::System__Xml__XmlWellFormedWriter__NamespaceKind::Written{0};
constexpr System::Xml::System__Xml__XmlWellFormedWriter__NamespaceKind  System::Xml::System__Xml__XmlWellFormedWriter__NamespaceKind::NeedToWrite{1};
constexpr System::Xml::System__Xml__XmlWellFormedWriter__NamespaceKind  System::Xml::System__Xml__XmlWellFormedWriter__NamespaceKind::Implied{2};
constexpr System::Xml::System__Xml__XmlWellFormedWriter__NamespaceKind  System::Xml::System__Xml__XmlWellFormedWriter__NamespaceKind::Special{3};
//  Writing Method size for method: System::Xml::System__Xml__XmlWellFormedWriter__Namespace.Set
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::System__Xml__XmlWellFormedWriter__Namespace::*)(::StringW, ::StringW, System::Xml::System__Xml__XmlWellFormedWriter__NamespaceKind)>(&System::Xml::System__Xml__XmlWellFormedWriter__Namespace::Set)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x26e5580;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::System__Xml__XmlWellFormedWriter__Namespace>::get(),
                            "Set",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::System__Xml__XmlWellFormedWriter__NamespaceKind>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::System__Xml__XmlWellFormedWriter__Namespace.WriteDecl
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::System__Xml__XmlWellFormedWriter__Namespace::*)(System::Xml::XmlWriter, System::Xml::XmlRawWriter)>(&System::Xml::System__Xml__XmlWellFormedWriter__Namespace::WriteDecl)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x26ebb04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::System__Xml__XmlWellFormedWriter__Namespace>::get(),
                            "WriteDecl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::XmlWriter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::XmlRawWriter>::get()}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "prefix", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "namespaceUri", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "kind", ty: "System::Xml::System__Xml__XmlWellFormedWriter__NamespaceKind", modifiers: "", def_value: Some("{}") }, CppParam { name: "prevNsIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr System::Xml::System__Xml__XmlWellFormedWriter__Namespace::System__Xml__XmlWellFormedWriter__Namespace(::StringW prefix, ::StringW namespaceUri, System::Xml::System__Xml__XmlWellFormedWriter__NamespaceKind kind, int32_t prevNsIndex) noexcept : ::bs_hook::ValueTypeWrapper() {this->prefix = prefix;
this->namespaceUri = namespaceUri;
this->kind = kind;
this->prevNsIndex = prevNsIndex;
}
constexpr void System::Xml::System__Xml__XmlWellFormedWriter__Namespace::__set_prefix(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x0>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW System::Xml::System__Xml__XmlWellFormedWriter__Namespace::__get_prefix() const {
return ::cordl_internals::getInstanceField<::StringW, 0x0>(this->__instance);
}
constexpr void System::Xml::System__Xml__XmlWellFormedWriter__Namespace::__set_namespaceUri(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x8>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW System::Xml::System__Xml__XmlWellFormedWriter__Namespace::__get_namespaceUri() const {
return ::cordl_internals::getInstanceField<::StringW, 0x8>(this->__instance);
}
constexpr void System::Xml::System__Xml__XmlWellFormedWriter__Namespace::__set_kind(System::Xml::System__Xml__XmlWellFormedWriter__NamespaceKind value)  {
::cordl_internals::setInstanceField<System::Xml::System__Xml__XmlWellFormedWriter__NamespaceKind, 0x10>(this->__instance, std::forward<System::Xml::System__Xml__XmlWellFormedWriter__NamespaceKind>(value));
}
constexpr System::Xml::System__Xml__XmlWellFormedWriter__NamespaceKind System::Xml::System__Xml__XmlWellFormedWriter__Namespace::__get_kind() const {
return ::cordl_internals::getInstanceField<System::Xml::System__Xml__XmlWellFormedWriter__NamespaceKind, 0x10>(this->__instance);
}
constexpr void System::Xml::System__Xml__XmlWellFormedWriter__Namespace::__set_prevNsIndex(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x14>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Xml::System__Xml__XmlWellFormedWriter__Namespace::__get_prevNsIndex() const {
return ::cordl_internals::getInstanceField<int32_t, 0x14>(this->__instance);
}
 void System::Xml::System__Xml__XmlWellFormedWriter__Namespace::Set(::StringW prefix, ::StringW namespaceUri, System::Xml::System__Xml__XmlWellFormedWriter__NamespaceKind kind)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::System__Xml__XmlWellFormedWriter__Namespace>::get(),
                            "Set",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::System__Xml__XmlWellFormedWriter__NamespaceKind>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, prefix, namespaceUri, kind);
}
 void System::Xml::System__Xml__XmlWellFormedWriter__Namespace::WriteDecl(System::Xml::XmlWriter writer, System::Xml::XmlRawWriter rawWriter)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::System__Xml__XmlWellFormedWriter__Namespace>::get(),
                            "WriteDecl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::XmlWriter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::XmlRawWriter>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, writer, rawWriter);
}
//  Writing Method size for method: System::Xml::System__Xml__XmlWellFormedWriter__AttrName.Set
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::System__Xml__XmlWellFormedWriter__AttrName::*)(::StringW, ::StringW, ::StringW)>(&System::Xml::System__Xml__XmlWellFormedWriter__AttrName::Set)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x26ebdb0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::System__Xml__XmlWellFormedWriter__AttrName>::get(),
                            "Set",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::System__Xml__XmlWellFormedWriter__AttrName.IsDuplicate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::System__Xml__XmlWellFormedWriter__AttrName::*)(::StringW, ::StringW, ::StringW)>(&System::Xml::System__Xml__XmlWellFormedWriter__AttrName::IsDuplicate)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x26ebdc0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::System__Xml__XmlWellFormedWriter__AttrName>::get(),
                            "IsDuplicate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "prefix", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "namespaceUri", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "localName", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "prev", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr System::Xml::System__Xml__XmlWellFormedWriter__AttrName::System__Xml__XmlWellFormedWriter__AttrName(::StringW prefix, ::StringW namespaceUri, ::StringW localName, int32_t prev) noexcept : ::bs_hook::ValueTypeWrapper() {this->prefix = prefix;
this->namespaceUri = namespaceUri;
this->localName = localName;
this->prev = prev;
}
constexpr void System::Xml::System__Xml__XmlWellFormedWriter__AttrName::__set_prefix(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x0>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW System::Xml::System__Xml__XmlWellFormedWriter__AttrName::__get_prefix() const {
return ::cordl_internals::getInstanceField<::StringW, 0x0>(this->__instance);
}
constexpr void System::Xml::System__Xml__XmlWellFormedWriter__AttrName::__set_namespaceUri(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x8>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW System::Xml::System__Xml__XmlWellFormedWriter__AttrName::__get_namespaceUri() const {
return ::cordl_internals::getInstanceField<::StringW, 0x8>(this->__instance);
}
constexpr void System::Xml::System__Xml__XmlWellFormedWriter__AttrName::__set_localName(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW System::Xml::System__Xml__XmlWellFormedWriter__AttrName::__get_localName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this->__instance);
}
constexpr void System::Xml::System__Xml__XmlWellFormedWriter__AttrName::__set_prev(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Xml::System__Xml__XmlWellFormedWriter__AttrName::__get_prev() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this->__instance);
}
 void System::Xml::System__Xml__XmlWellFormedWriter__AttrName::Set(::StringW prefix, ::StringW localName, ::StringW namespaceUri)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::System__Xml__XmlWellFormedWriter__AttrName>::get(),
                            "Set",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, prefix, localName, namespaceUri);
}
 bool System::Xml::System__Xml__XmlWellFormedWriter__AttrName::IsDuplicate(::StringW prefix, ::StringW localName, ::StringW namespaceUri)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::System__Xml__XmlWellFormedWriter__AttrName>::get(),
                            "IsDuplicate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, prefix, localName, namespaceUri);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr System::Xml::System__Xml__XmlWellFormedWriter__SpecialAttribute::System__Xml__XmlWellFormedWriter__SpecialAttribute(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void System::Xml::System__Xml__XmlWellFormedWriter__SpecialAttribute::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Xml::System__Xml__XmlWellFormedWriter__SpecialAttribute::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr System::Xml::System__Xml__XmlWellFormedWriter__SpecialAttribute  System::Xml::System__Xml__XmlWellFormedWriter__SpecialAttribute::No{0};
constexpr System::Xml::System__Xml__XmlWellFormedWriter__SpecialAttribute  System::Xml::System__Xml__XmlWellFormedWriter__SpecialAttribute::DefaultXmlns{1};
constexpr System::Xml::System__Xml__XmlWellFormedWriter__SpecialAttribute  System::Xml::System__Xml__XmlWellFormedWriter__SpecialAttribute::PrefixedXmlns{2};
constexpr System::Xml::System__Xml__XmlWellFormedWriter__SpecialAttribute  System::Xml::System__Xml__XmlWellFormedWriter__SpecialAttribute::XmlSpace{3};
constexpr System::Xml::System__Xml__XmlWellFormedWriter__SpecialAttribute  System::Xml::System__Xml__XmlWellFormedWriter__SpecialAttribute::XmlLang{4};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::System__Xml__XmlWellFormedWriter__AttributeValueCache__ItemType::System__Xml__XmlWellFormedWriter__AttributeValueCache__ItemType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void GlobalNamespace::System__Xml__XmlWellFormedWriter__AttributeValueCache__ItemType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::System__Xml__XmlWellFormedWriter__AttributeValueCache__ItemType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr GlobalNamespace::System__Xml__XmlWellFormedWriter__AttributeValueCache__ItemType  GlobalNamespace::System__Xml__XmlWellFormedWriter__AttributeValueCache__ItemType::EntityRef{0};
constexpr GlobalNamespace::System__Xml__XmlWellFormedWriter__AttributeValueCache__ItemType  GlobalNamespace::System__Xml__XmlWellFormedWriter__AttributeValueCache__ItemType::CharEntity{1};
constexpr GlobalNamespace::System__Xml__XmlWellFormedWriter__AttributeValueCache__ItemType  GlobalNamespace::System__Xml__XmlWellFormedWriter__AttributeValueCache__ItemType::SurrogateCharEntity{2};
constexpr GlobalNamespace::System__Xml__XmlWellFormedWriter__AttributeValueCache__ItemType  GlobalNamespace::System__Xml__XmlWellFormedWriter__AttributeValueCache__ItemType::Whitespace{3};
constexpr GlobalNamespace::System__Xml__XmlWellFormedWriter__AttributeValueCache__ItemType  GlobalNamespace::System__Xml__XmlWellFormedWriter__AttributeValueCache__ItemType::String{4};
constexpr GlobalNamespace::System__Xml__XmlWellFormedWriter__AttributeValueCache__ItemType  GlobalNamespace::System__Xml__XmlWellFormedWriter__AttributeValueCache__ItemType::StringChars{5};
constexpr GlobalNamespace::System__Xml__XmlWellFormedWriter__AttributeValueCache__ItemType  GlobalNamespace::System__Xml__XmlWellFormedWriter__AttributeValueCache__ItemType::Raw{6};
constexpr GlobalNamespace::System__Xml__XmlWellFormedWriter__AttributeValueCache__ItemType  GlobalNamespace::System__Xml__XmlWellFormedWriter__AttributeValueCache__ItemType::RawChars{7};
constexpr GlobalNamespace::System__Xml__XmlWellFormedWriter__AttributeValueCache__ItemType  GlobalNamespace::System__Xml__XmlWellFormedWriter__AttributeValueCache__ItemType::ValueString{8};
//  Writing Method size for method: GlobalNamespace::System__Xml__XmlWellFormedWriter__AttributeValueCache__Item._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::System__Xml__XmlWellFormedWriter__AttributeValueCache__Item::*)()>(&GlobalNamespace::System__Xml__XmlWellFormedWriter__AttributeValueCache__Item::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26ecaf0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::System__Xml__XmlWellFormedWriter__AttributeValueCache__Item>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::System__Xml__XmlWellFormedWriter__AttributeValueCache__Item.Set
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::System__Xml__XmlWellFormedWriter__AttributeValueCache__Item::*)(GlobalNamespace::System__Xml__XmlWellFormedWriter__AttributeValueCache__ItemType, ::bs_hook::Il2CppWrapperType)>(&GlobalNamespace::System__Xml__XmlWellFormedWriter__AttributeValueCache__Item::Set)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x26ecaf8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::System__Xml__XmlWellFormedWriter__AttributeValueCache__Item>::get(),
                            "Set",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::System__Xml__XmlWellFormedWriter__AttributeValueCache__ItemType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::System__Xml__XmlWellFormedWriter__AttributeValueCache__Item::__set_type(GlobalNamespace::System__Xml__XmlWellFormedWriter__AttributeValueCache__ItemType value)  {
::cordl_internals::setInstanceField<GlobalNamespace::System__Xml__XmlWellFormedWriter__AttributeValueCache__ItemType, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::System__Xml__XmlWellFormedWriter__AttributeValueCache__ItemType>(value));
}
constexpr GlobalNamespace::System__Xml__XmlWellFormedWriter__AttributeValueCache__ItemType GlobalNamespace::System__Xml__XmlWellFormedWriter__AttributeValueCache__Item::__get_type() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::System__Xml__XmlWellFormedWriter__AttributeValueCache__ItemType, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::System__Xml__XmlWellFormedWriter__AttributeValueCache__Item::__set_data(::bs_hook::Il2CppWrapperType value)  {
::cordl_internals::setInstanceField<::bs_hook::Il2CppWrapperType, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::bs_hook::Il2CppWrapperType>(value));
}
constexpr ::bs_hook::Il2CppWrapperType GlobalNamespace::System__Xml__XmlWellFormedWriter__AttributeValueCache__Item::__get_data() const {
return ::cordl_internals::getInstanceField<::bs_hook::Il2CppWrapperType, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 GlobalNamespace::System__Xml__XmlWellFormedWriter__AttributeValueCache__Item::System__Xml__XmlWellFormedWriter__AttributeValueCache__Item()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<System__Xml__XmlWellFormedWriter__AttributeValueCache__Item>())) {}
 void GlobalNamespace::System__Xml__XmlWellFormedWriter__AttributeValueCache__Item::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::System__Xml__XmlWellFormedWriter__AttributeValueCache__Item>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::System__Xml__XmlWellFormedWriter__AttributeValueCache__Item::Set(GlobalNamespace::System__Xml__XmlWellFormedWriter__AttributeValueCache__ItemType type, ::bs_hook::Il2CppWrapperType data)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::System__Xml__XmlWellFormedWriter__AttributeValueCache__Item>::get(),
                            "Set",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::System__Xml__XmlWellFormedWriter__AttributeValueCache__ItemType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, type, data);
}
//  Writing Method size for method: GlobalNamespace::System__Xml__XmlWellFormedWriter__AttributeValueCache__BufferChunk._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::System__Xml__XmlWellFormedWriter__AttributeValueCache__BufferChunk::*)(::ArrayW<char16_t>, int32_t, int32_t)>(&GlobalNamespace::System__Xml__XmlWellFormedWriter__AttributeValueCache__BufferChunk::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x26ecab4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::System__Xml__XmlWellFormedWriter__AttributeValueCache__BufferChunk>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::System__Xml__XmlWellFormedWriter__AttributeValueCache__BufferChunk::__set_buffer(::ArrayW<char16_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<char16_t>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<char16_t>>(value));
}
constexpr ::ArrayW<char16_t> GlobalNamespace::System__Xml__XmlWellFormedWriter__AttributeValueCache__BufferChunk::__get_buffer() const {
return ::cordl_internals::getInstanceField<::ArrayW<char16_t>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::System__Xml__XmlWellFormedWriter__AttributeValueCache__BufferChunk::__set_index(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::System__Xml__XmlWellFormedWriter__AttributeValueCache__BufferChunk::__get_index() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::System__Xml__XmlWellFormedWriter__AttributeValueCache__BufferChunk::__set_count(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::System__Xml__XmlWellFormedWriter__AttributeValueCache__BufferChunk::__get_count() const {
return ::cordl_internals::getInstanceField<int32_t, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "buffer", ty: "::ArrayW<char16_t>", modifiers: "", def_value: None }, CppParam { name: "index", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "count", ty: "int32_t", modifiers: "", def_value: None }]
 GlobalNamespace::System__Xml__XmlWellFormedWriter__AttributeValueCache__BufferChunk::System__Xml__XmlWellFormedWriter__AttributeValueCache__BufferChunk(::ArrayW<char16_t> buffer, int32_t index, int32_t count)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<System__Xml__XmlWellFormedWriter__AttributeValueCache__BufferChunk>(buffer, index, count))) {}
 void GlobalNamespace::System__Xml__XmlWellFormedWriter__AttributeValueCache__BufferChunk::_ctor(::ArrayW<char16_t> buffer, int32_t index, int32_t count)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::System__Xml__XmlWellFormedWriter__AttributeValueCache__BufferChunk>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, buffer, index, count);
}
//  Writing Method size for method: System::Xml::System__Xml__XmlWellFormedWriter__AttributeValueCache.get_StringValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::System__Xml__XmlWellFormedWriter__AttributeValueCache::*)()>(&System::Xml::System__Xml__XmlWellFormedWriter__AttributeValueCache::get_StringValue)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x26e8498;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::System__Xml__XmlWellFormedWriter__AttributeValueCache>::get(),
                            "get_StringValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::System__Xml__XmlWellFormedWriter__AttributeValueCache.WriteEntityRef
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::System__Xml__XmlWellFormedWriter__AttributeValueCache::*)(::StringW)>(&System::Xml::System__Xml__XmlWellFormedWriter__AttributeValueCache::WriteEntityRef)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x26e9790;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::System__Xml__XmlWellFormedWriter__AttributeValueCache>::get(),
                            "WriteEntityRef",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::System__Xml__XmlWellFormedWriter__AttributeValueCache.WriteCharEntity
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::System__Xml__XmlWellFormedWriter__AttributeValueCache::*)(char16_t)>(&System::Xml::System__Xml__XmlWellFormedWriter__AttributeValueCache::WriteCharEntity)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x26e9ad8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::System__Xml__XmlWellFormedWriter__AttributeValueCache>::get(),
                            "WriteCharEntity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::System__Xml__XmlWellFormedWriter__AttributeValueCache.WriteSurrogateCharEntity
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::System__Xml__XmlWellFormedWriter__AttributeValueCache::*)(char16_t, char16_t)>(&System::Xml::System__Xml__XmlWellFormedWriter__AttributeValueCache::WriteSurrogateCharEntity)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x26e9d10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::System__Xml__XmlWellFormedWriter__AttributeValueCache>::get(),
                            "WriteSurrogateCharEntity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::System__Xml__XmlWellFormedWriter__AttributeValueCache.WriteWhitespace
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::System__Xml__XmlWellFormedWriter__AttributeValueCache::*)(::StringW)>(&System::Xml::System__Xml__XmlWellFormedWriter__AttributeValueCache::WriteWhitespace)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x26e9f94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::System__Xml__XmlWellFormedWriter__AttributeValueCache>::get(),
                            "WriteWhitespace",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::System__Xml__XmlWellFormedWriter__AttributeValueCache.WriteString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::System__Xml__XmlWellFormedWriter__AttributeValueCache::*)(::StringW)>(&System::Xml::System__Xml__XmlWellFormedWriter__AttributeValueCache::WriteString)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x26ea0d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::System__Xml__XmlWellFormedWriter__AttributeValueCache>::get(),
                            "WriteString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::System__Xml__XmlWellFormedWriter__AttributeValueCache.WriteChars
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::System__Xml__XmlWellFormedWriter__AttributeValueCache::*)(::ArrayW<char16_t>, int32_t, int32_t)>(&System::Xml::System__Xml__XmlWellFormedWriter__AttributeValueCache::WriteChars)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x26ea3c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::System__Xml__XmlWellFormedWriter__AttributeValueCache>::get(),
                            "WriteChars",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::System__Xml__XmlWellFormedWriter__AttributeValueCache.WriteRaw
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::System__Xml__XmlWellFormedWriter__AttributeValueCache::*)(::ArrayW<char16_t>, int32_t, int32_t)>(&System::Xml::System__Xml__XmlWellFormedWriter__AttributeValueCache::WriteRaw)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x26ea6ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::System__Xml__XmlWellFormedWriter__AttributeValueCache>::get(),
                            "WriteRaw",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::System__Xml__XmlWellFormedWriter__AttributeValueCache.WriteRaw
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::System__Xml__XmlWellFormedWriter__AttributeValueCache::*)(::StringW)>(&System::Xml::System__Xml__XmlWellFormedWriter__AttributeValueCache::WriteRaw)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x26ea88c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::System__Xml__XmlWellFormedWriter__AttributeValueCache>::get(),
                            "WriteRaw",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::System__Xml__XmlWellFormedWriter__AttributeValueCache.WriteValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::System__Xml__XmlWellFormedWriter__AttributeValueCache::*)(::StringW)>(&System::Xml::System__Xml__XmlWellFormedWriter__AttributeValueCache::WriteValue)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x26eb148;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::System__Xml__XmlWellFormedWriter__AttributeValueCache>::get(),
                            "WriteValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::System__Xml__XmlWellFormedWriter__AttributeValueCache.Replay
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::System__Xml__XmlWellFormedWriter__AttributeValueCache::*)(System::Xml::XmlWriter)>(&System::Xml::System__Xml__XmlWellFormedWriter__AttributeValueCache::Replay)> {
  constexpr static std::size_t size = 0x324;
  constexpr static std::size_t addrs = 0x26e89a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::System__Xml__XmlWellFormedWriter__AttributeValueCache>::get(),
                            "Replay",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::XmlWriter>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::System__Xml__XmlWellFormedWriter__AttributeValueCache.Trim
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::System__Xml__XmlWellFormedWriter__AttributeValueCache::*)()>(&System::Xml::System__Xml__XmlWellFormedWriter__AttributeValueCache::Trim)> {
  constexpr static std::size_t size = 0x454;
  constexpr static std::size_t addrs = 0x26e8ccc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::System__Xml__XmlWellFormedWriter__AttributeValueCache>::get(),
                            "Trim",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::System__Xml__XmlWellFormedWriter__AttributeValueCache.Clear
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::System__Xml__XmlWellFormedWriter__AttributeValueCache::*)()>(&System::Xml::System__Xml__XmlWellFormedWriter__AttributeValueCache::Clear)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x26e9120;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::System__Xml__XmlWellFormedWriter__AttributeValueCache>::get(),
                            "Clear",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::System__Xml__XmlWellFormedWriter__AttributeValueCache.StartComplexValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::System__Xml__XmlWellFormedWriter__AttributeValueCache::*)()>(&System::Xml::System__Xml__XmlWellFormedWriter__AttributeValueCache::StartComplexValue)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x26ec904;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::System__Xml__XmlWellFormedWriter__AttributeValueCache>::get(),
                            "StartComplexValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::System__Xml__XmlWellFormedWriter__AttributeValueCache.AddItem
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::System__Xml__XmlWellFormedWriter__AttributeValueCache::*)(GlobalNamespace::System__Xml__XmlWellFormedWriter__AttributeValueCache__ItemType, ::bs_hook::Il2CppWrapperType)>(&System::Xml::System__Xml__XmlWellFormedWriter__AttributeValueCache::AddItem)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x26ec940;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::System__Xml__XmlWellFormedWriter__AttributeValueCache>::get(),
                            "AddItem",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::System__Xml__XmlWellFormedWriter__AttributeValueCache__ItemType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::System__Xml__XmlWellFormedWriter__AttributeValueCache._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::System__Xml__XmlWellFormedWriter__AttributeValueCache::*)()>(&System::Xml::System__Xml__XmlWellFormedWriter__AttributeValueCache::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x26eb300;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::System__Xml__XmlWellFormedWriter__AttributeValueCache>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Xml::System__Xml__XmlWellFormedWriter__AttributeValueCache::__set_stringValue(System::Text::StringBuilder value)  {
::cordl_internals::setInstanceField<System::Text::StringBuilder, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Text::StringBuilder>(value));
}
constexpr System::Text::StringBuilder System::Xml::System__Xml__XmlWellFormedWriter__AttributeValueCache::__get_stringValue() const {
return ::cordl_internals::getInstanceField<System::Text::StringBuilder, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Xml::System__Xml__XmlWellFormedWriter__AttributeValueCache::__set_singleStringValue(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW System::Xml::System__Xml__XmlWellFormedWriter__AttributeValueCache::__get_singleStringValue() const {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Xml::System__Xml__XmlWellFormedWriter__AttributeValueCache::__set_items(::ArrayW<GlobalNamespace::System__Xml__XmlWellFormedWriter__AttributeValueCache__Item> value)  {
::cordl_internals::setInstanceField<::ArrayW<GlobalNamespace::System__Xml__XmlWellFormedWriter__AttributeValueCache__Item>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<GlobalNamespace::System__Xml__XmlWellFormedWriter__AttributeValueCache__Item>>(value));
}
constexpr ::ArrayW<GlobalNamespace::System__Xml__XmlWellFormedWriter__AttributeValueCache__Item> System::Xml::System__Xml__XmlWellFormedWriter__AttributeValueCache::__get_items() const {
return ::cordl_internals::getInstanceField<::ArrayW<GlobalNamespace::System__Xml__XmlWellFormedWriter__AttributeValueCache__Item>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Xml::System__Xml__XmlWellFormedWriter__AttributeValueCache::__set_firstItem(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Xml::System__Xml__XmlWellFormedWriter__AttributeValueCache::__get_firstItem() const {
return ::cordl_internals::getInstanceField<int32_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Xml::System__Xml__XmlWellFormedWriter__AttributeValueCache::__set_lastItem(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x2c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Xml::System__Xml__XmlWellFormedWriter__AttributeValueCache::__get_lastItem() const {
return ::cordl_internals::getInstanceField<int32_t, 0x2c>(this->::bs_hook::Il2CppWrapperType::instance);
}
 ::StringW System::Xml::System__Xml__XmlWellFormedWriter__AttributeValueCache::get_StringValue()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::System__Xml__XmlWellFormedWriter__AttributeValueCache>::get(),
                            "get_StringValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Xml::System__Xml__XmlWellFormedWriter__AttributeValueCache::WriteEntityRef(::StringW name)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::System__Xml__XmlWellFormedWriter__AttributeValueCache>::get(),
                            "WriteEntityRef",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, name);
}
 void System::Xml::System__Xml__XmlWellFormedWriter__AttributeValueCache::WriteCharEntity(char16_t ch)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::System__Xml__XmlWellFormedWriter__AttributeValueCache>::get(),
                            "WriteCharEntity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, ch);
}
 void System::Xml::System__Xml__XmlWellFormedWriter__AttributeValueCache::WriteSurrogateCharEntity(char16_t lowChar, char16_t highChar)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::System__Xml__XmlWellFormedWriter__AttributeValueCache>::get(),
                            "WriteSurrogateCharEntity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, lowChar, highChar);
}
 void System::Xml::System__Xml__XmlWellFormedWriter__AttributeValueCache::WriteWhitespace(::StringW ws)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::System__Xml__XmlWellFormedWriter__AttributeValueCache>::get(),
                            "WriteWhitespace",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, ws);
}
 void System::Xml::System__Xml__XmlWellFormedWriter__AttributeValueCache::WriteString(::StringW text)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::System__Xml__XmlWellFormedWriter__AttributeValueCache>::get(),
                            "WriteString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, text);
}
 void System::Xml::System__Xml__XmlWellFormedWriter__AttributeValueCache::WriteChars(::ArrayW<char16_t> buffer, int32_t index, int32_t count)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::System__Xml__XmlWellFormedWriter__AttributeValueCache>::get(),
                            "WriteChars",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, buffer, index, count);
}
 void System::Xml::System__Xml__XmlWellFormedWriter__AttributeValueCache::WriteRaw(::ArrayW<char16_t> buffer, int32_t index, int32_t count)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::System__Xml__XmlWellFormedWriter__AttributeValueCache>::get(),
                            "WriteRaw",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, buffer, index, count);
}
 void System::Xml::System__Xml__XmlWellFormedWriter__AttributeValueCache::WriteRaw(::StringW data)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::System__Xml__XmlWellFormedWriter__AttributeValueCache>::get(),
                            "WriteRaw",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, data);
}
 void System::Xml::System__Xml__XmlWellFormedWriter__AttributeValueCache::WriteValue(::StringW value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::System__Xml__XmlWellFormedWriter__AttributeValueCache>::get(),
                            "WriteValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void System::Xml::System__Xml__XmlWellFormedWriter__AttributeValueCache::Replay(System::Xml::XmlWriter writer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::System__Xml__XmlWellFormedWriter__AttributeValueCache>::get(),
                            "Replay",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::XmlWriter>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, writer);
}
 void System::Xml::System__Xml__XmlWellFormedWriter__AttributeValueCache::Trim()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::System__Xml__XmlWellFormedWriter__AttributeValueCache>::get(),
                            "Trim",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Xml::System__Xml__XmlWellFormedWriter__AttributeValueCache::Clear()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::System__Xml__XmlWellFormedWriter__AttributeValueCache>::get(),
                            "Clear",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Xml::System__Xml__XmlWellFormedWriter__AttributeValueCache::StartComplexValue()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::System__Xml__XmlWellFormedWriter__AttributeValueCache>::get(),
                            "StartComplexValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Xml::System__Xml__XmlWellFormedWriter__AttributeValueCache::AddItem(GlobalNamespace::System__Xml__XmlWellFormedWriter__AttributeValueCache__ItemType type, ::bs_hook::Il2CppWrapperType data)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::System__Xml__XmlWellFormedWriter__AttributeValueCache>::get(),
                            "AddItem",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::System__Xml__XmlWellFormedWriter__AttributeValueCache__ItemType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, type, data);
}
// Ctor Parameters []
 System::Xml::System__Xml__XmlWellFormedWriter__AttributeValueCache::System__Xml__XmlWellFormedWriter__AttributeValueCache()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<System__Xml__XmlWellFormedWriter__AttributeValueCache>())) {}
 void System::Xml::System__Xml__XmlWellFormedWriter__AttributeValueCache::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::System__Xml__XmlWellFormedWriter__AttributeValueCache>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: System::Xml::XmlWellFormedWriter._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlWellFormedWriter::*)(System::Xml::XmlWriter, System::Xml::XmlWriterSettings)>(&System::Xml::XmlWellFormedWriter::_ctor)> {
  constexpr static std::size_t size = 0x3e4;
  constexpr static std::size_t addrs = 0x26e516c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlWellFormedWriter>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::XmlWriter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::XmlWriterSettings>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlWellFormedWriter.get_WriteState
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Xml::WriteState (System::Xml::XmlWellFormedWriter::*)()>(&System::Xml::XmlWellFormedWriter::get_WriteState)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x26e55ac;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Xml::XmlWellFormedWriter),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlWellFormedWriter>::get(),
                                  27
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlWellFormedWriter.WriteStartDocument
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlWellFormedWriter::*)()>(&System::Xml::XmlWellFormedWriter::WriteStartDocument)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26e5640;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Xml::XmlWellFormedWriter),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlWellFormedWriter>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlWellFormedWriter.WriteStartDocument
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlWellFormedWriter::*)(bool)>(&System::Xml::XmlWellFormedWriter::WriteStartDocument)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x26e57fc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Xml::XmlWellFormedWriter),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlWellFormedWriter>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlWellFormedWriter.WriteEndDocument
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlWellFormedWriter::*)()>(&System::Xml::XmlWellFormedWriter::WriteEndDocument)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x26e5818;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Xml::XmlWellFormedWriter),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlWellFormedWriter>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlWellFormedWriter.WriteDocType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlWellFormedWriter::*)(::StringW, ::StringW, ::StringW, ::StringW)>(&System::Xml::XmlWellFormedWriter::WriteDocType)> {
  constexpr static std::size_t size = 0x4ec;
  constexpr static std::size_t addrs = 0x26e5c80;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Xml::XmlWellFormedWriter),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlWellFormedWriter>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlWellFormedWriter.WriteStartElement
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlWellFormedWriter::*)(::StringW, ::StringW, ::StringW)>(&System::Xml::XmlWellFormedWriter::WriteStartElement)> {
  constexpr static std::size_t size = 0x3b8;
  constexpr static std::size_t addrs = 0x26e616c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Xml::XmlWellFormedWriter),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlWellFormedWriter>::get(),
                                  9
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlWellFormedWriter.WriteEndElement
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlWellFormedWriter::*)()>(&System::Xml::XmlWellFormedWriter::WriteEndElement)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x26e6b84;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Xml::XmlWellFormedWriter),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlWellFormedWriter>::get(),
                                  10
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlWellFormedWriter.WriteFullEndElement
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlWellFormedWriter::*)()>(&System::Xml::XmlWellFormedWriter::WriteFullEndElement)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x26e6e74;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Xml::XmlWellFormedWriter),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlWellFormedWriter>::get(),
                                  11
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlWellFormedWriter.WriteStartAttribute
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlWellFormedWriter::*)(::StringW, ::StringW, ::StringW)>(&System::Xml::XmlWellFormedWriter::WriteStartAttribute)> {
  constexpr static std::size_t size = 0x6d4;
  constexpr static std::size_t addrs = 0x26e7090;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Xml::XmlWellFormedWriter),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlWellFormedWriter>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlWellFormedWriter.WriteEndAttribute
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlWellFormedWriter::*)()>(&System::Xml::XmlWellFormedWriter::WriteEndAttribute)> {
  constexpr static std::size_t size = 0x82c;
  constexpr static std::size_t addrs = 0x26e7c6c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Xml::XmlWellFormedWriter),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlWellFormedWriter>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlWellFormedWriter.WriteCData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlWellFormedWriter::*)(::StringW)>(&System::Xml::XmlWellFormedWriter::WriteCData)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x26e9150;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Xml::XmlWellFormedWriter),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlWellFormedWriter>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlWellFormedWriter.WriteComment
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlWellFormedWriter::*)(::StringW)>(&System::Xml::XmlWellFormedWriter::WriteComment)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x26e9254;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Xml::XmlWellFormedWriter),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlWellFormedWriter>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlWellFormedWriter.WriteProcessingInstruction
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlWellFormedWriter::*)(::StringW, ::StringW)>(&System::Xml::XmlWellFormedWriter::WriteProcessingInstruction)> {
  constexpr static std::size_t size = 0x2bc;
  constexpr static std::size_t addrs = 0x26e9358;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Xml::XmlWellFormedWriter),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlWellFormedWriter>::get(),
                                  16
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlWellFormedWriter.WriteEntityRef
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlWellFormedWriter::*)(::StringW)>(&System::Xml::XmlWellFormedWriter::WriteEntityRef)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x26e9614;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Xml::XmlWellFormedWriter),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlWellFormedWriter>::get(),
                                  17
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlWellFormedWriter.WriteCharEntity
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlWellFormedWriter::*)(char16_t)>(&System::Xml::XmlWellFormedWriter::WriteCharEntity)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x26e992c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Xml::XmlWellFormedWriter),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlWellFormedWriter>::get(),
                                  18
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlWellFormedWriter.WriteSurrogateCharEntity
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlWellFormedWriter::*)(char16_t, char16_t)>(&System::Xml::XmlWellFormedWriter::WriteSurrogateCharEntity)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x26e9b6c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Xml::XmlWellFormedWriter),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlWellFormedWriter>::get(),
                                  21
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlWellFormedWriter.WriteWhitespace
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlWellFormedWriter::*)(::StringW)>(&System::Xml::XmlWellFormedWriter::WriteWhitespace)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x26e9dd4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Xml::XmlWellFormedWriter),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlWellFormedWriter>::get(),
                                  19
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlWellFormedWriter.WriteString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlWellFormedWriter::*)(::StringW)>(&System::Xml::XmlWellFormedWriter::WriteString)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x26e9fe4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Xml::XmlWellFormedWriter),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlWellFormedWriter>::get(),
                                  20
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlWellFormedWriter.WriteChars
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlWellFormedWriter::*)(::ArrayW<char16_t>, int32_t, int32_t)>(&System::Xml::XmlWellFormedWriter::WriteChars)> {
  constexpr static std::size_t size = 0x27c;
  constexpr static std::size_t addrs = 0x26ea144;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Xml::XmlWellFormedWriter),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlWellFormedWriter>::get(),
                                  22
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlWellFormedWriter.WriteRaw
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlWellFormedWriter::*)(::ArrayW<char16_t>, int32_t, int32_t)>(&System::Xml::XmlWellFormedWriter::WriteRaw)> {
  constexpr static std::size_t size = 0x27c;
  constexpr static std::size_t addrs = 0x26ea470;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Xml::XmlWellFormedWriter),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlWellFormedWriter>::get(),
                                  23
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlWellFormedWriter.WriteRaw
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlWellFormedWriter::*)(::StringW)>(&System::Xml::XmlWellFormedWriter::WriteRaw)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x26ea79c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Xml::XmlWellFormedWriter),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlWellFormedWriter>::get(),
                                  24
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlWellFormedWriter.WriteBase64
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlWellFormedWriter::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&System::Xml::XmlWellFormedWriter::WriteBase64)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x26ea8dc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Xml::XmlWellFormedWriter),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlWellFormedWriter>::get(),
                                  25
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlWellFormedWriter.Close
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlWellFormedWriter::*)()>(&System::Xml::XmlWellFormedWriter::Close)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x26eab2c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Xml::XmlWellFormedWriter),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlWellFormedWriter>::get(),
                                  28
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlWellFormedWriter.Flush
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlWellFormedWriter::*)()>(&System::Xml::XmlWellFormedWriter::Flush)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x26ead14;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Xml::XmlWellFormedWriter),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlWellFormedWriter>::get(),
                                  29
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlWellFormedWriter.LookupPrefix
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::XmlWellFormedWriter::*)(::StringW)>(&System::Xml::XmlWellFormedWriter::LookupPrefix)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0x26eadc8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Xml::XmlWellFormedWriter),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlWellFormedWriter>::get(),
                                  30
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlWellFormedWriter.WriteValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlWellFormedWriter::*)(::StringW)>(&System::Xml::XmlWellFormedWriter::WriteValue)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x26eb048;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Xml::XmlWellFormedWriter),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlWellFormedWriter>::get(),
                                  31
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlWellFormedWriter.WriteBinHex
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlWellFormedWriter::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&System::Xml::XmlWellFormedWriter::WriteBinHex)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x26eb198;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Xml::XmlWellFormedWriter),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlWellFormedWriter>::get(),
                                  26
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlWellFormedWriter.get_RawWriter
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Xml::XmlRawWriter (System::Xml::XmlWellFormedWriter::*)()>(&System::Xml::XmlWellFormedWriter::get_RawWriter)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26eb2f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlWellFormedWriter>::get(),
                            "get_RawWriter",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlWellFormedWriter.get_SaveAttrValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::XmlWellFormedWriter::*)()>(&System::Xml::XmlWellFormedWriter::get_SaveAttrValue)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x26e9780;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlWellFormedWriter>::get(),
                            "get_SaveAttrValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlWellFormedWriter.get_InBase64
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::XmlWellFormedWriter::*)()>(&System::Xml::XmlWellFormedWriter::get_InBase64)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x26eace8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlWellFormedWriter>::get(),
                            "get_InBase64",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlWellFormedWriter.SetSpecialAttribute
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlWellFormedWriter::*)(System::Xml::System__Xml__XmlWellFormedWriter__SpecialAttribute)>(&System::Xml::XmlWellFormedWriter::SetSpecialAttribute)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x26e7764;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlWellFormedWriter>::get(),
                            "SetSpecialAttribute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::System__Xml__XmlWellFormedWriter__SpecialAttribute>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlWellFormedWriter.WriteStartDocumentImpl
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlWellFormedWriter::*)(System::Xml::XmlStandalone)>(&System::Xml::XmlWellFormedWriter::WriteStartDocumentImpl)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x26e5648;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlWellFormedWriter>::get(),
                            "WriteStartDocumentImpl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::XmlStandalone>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlWellFormedWriter.StartFragment
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlWellFormedWriter::*)()>(&System::Xml::XmlWellFormedWriter::StartFragment)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x26eb370;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlWellFormedWriter>::get(),
                            "StartFragment",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlWellFormedWriter.PushNamespaceImplicit
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlWellFormedWriter::*)(::StringW, ::StringW)>(&System::Xml::XmlWellFormedWriter::PushNamespaceImplicit)> {
  constexpr static std::size_t size = 0x42c;
  constexpr static std::size_t addrs = 0x26e6758;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlWellFormedWriter>::get(),
                            "PushNamespaceImplicit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlWellFormedWriter.PushNamespaceExplicit
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::XmlWellFormedWriter::*)(::StringW, ::StringW)>(&System::Xml::XmlWellFormedWriter::PushNamespaceExplicit)> {
  constexpr static std::size_t size = 0x4dc;
  constexpr static std::size_t addrs = 0x26e84cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlWellFormedWriter>::get(),
                            "PushNamespaceExplicit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlWellFormedWriter.AddNamespace
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlWellFormedWriter::*)(::StringW, ::StringW, System::Xml::System__Xml__XmlWellFormedWriter__NamespaceKind)>(&System::Xml::XmlWellFormedWriter::AddNamespace)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x26eb458;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlWellFormedWriter>::get(),
                            "AddNamespace",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::System__Xml__XmlWellFormedWriter__NamespaceKind>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlWellFormedWriter.AddToNamespaceHashtable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlWellFormedWriter::*)(int32_t)>(&System::Xml::XmlWellFormedWriter::AddToNamespaceHashtable)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x26eb6e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlWellFormedWriter>::get(),
                            "AddToNamespaceHashtable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlWellFormedWriter.LookupNamespaceIndex
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Xml::XmlWellFormedWriter::*)(::StringW)>(&System::Xml::XmlWellFormedWriter::LookupNamespaceIndex)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x26eb37c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlWellFormedWriter>::get(),
                            "LookupNamespaceIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlWellFormedWriter.PopNamespaces
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlWellFormedWriter::*)(int32_t, int32_t)>(&System::Xml::XmlWellFormedWriter::PopNamespaces)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x26e6da0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlWellFormedWriter>::get(),
                            "PopNamespaces",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlWellFormedWriter.DupAttrException
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Xml::XmlException (*)(::StringW, ::StringW)>(&System::Xml::XmlWellFormedWriter::DupAttrException)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x26eb5d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlWellFormedWriter>::get(),
                            "DupAttrException",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlWellFormedWriter.AdvanceState
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlWellFormedWriter::*)(System::Xml::System__Xml__XmlWellFormedWriter__Token)>(&System::Xml::XmlWellFormedWriter::AdvanceState)> {
  constexpr static std::size_t size = 0x30c;
  constexpr static std::size_t addrs = 0x26e5974;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlWellFormedWriter>::get(),
                            "AdvanceState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::System__Xml__XmlWellFormedWriter__Token>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlWellFormedWriter.StartElementContent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlWellFormedWriter::*)()>(&System::Xml::XmlWellFormedWriter::StartElementContent)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x26eba3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlWellFormedWriter>::get(),
                            "StartElementContent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlWellFormedWriter.GetStateName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(System::Xml::System__Xml__XmlWellFormedWriter__State)>(&System::Xml::XmlWellFormedWriter::GetStateName)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x26eb7c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlWellFormedWriter>::get(),
                            "GetStateName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::System__Xml__XmlWellFormedWriter__State>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlWellFormedWriter.LookupNamespace
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::XmlWellFormedWriter::*)(::StringW)>(&System::Xml::XmlWellFormedWriter::LookupNamespace)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x26e6624;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlWellFormedWriter>::get(),
                            "LookupNamespace",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlWellFormedWriter.LookupLocalNamespace
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::XmlWellFormedWriter::*)(::StringW)>(&System::Xml::XmlWellFormedWriter::LookupLocalNamespace)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x26e7928;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlWellFormedWriter>::get(),
                            "LookupLocalNamespace",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlWellFormedWriter.GeneratePrefix
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::XmlWellFormedWriter::*)()>(&System::Xml::XmlWellFormedWriter::GeneratePrefix)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x26e77f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlWellFormedWriter>::get(),
                            "GeneratePrefix",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlWellFormedWriter.CheckNCName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlWellFormedWriter::*)(::StringW)>(&System::Xml::XmlWellFormedWriter::CheckNCName)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x26e6524;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlWellFormedWriter>::get(),
                            "CheckNCName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlWellFormedWriter.InvalidCharsException
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Exception (*)(::StringW, int32_t)>(&System::Xml::XmlWellFormedWriter::InvalidCharsException)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x26ebc30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlWellFormedWriter>::get(),
                            "InvalidCharsException",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlWellFormedWriter.ThrowInvalidStateTransition
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlWellFormedWriter::*)(System::Xml::System__Xml__XmlWellFormedWriter__Token, System::Xml::System__Xml__XmlWellFormedWriter__State)>(&System::Xml::XmlWellFormedWriter::ThrowInvalidStateTransition)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x26eb868;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlWellFormedWriter>::get(),
                            "ThrowInvalidStateTransition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::System__Xml__XmlWellFormedWriter__Token>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::System__Xml__XmlWellFormedWriter__State>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlWellFormedWriter.get_IsClosedOrErrorState
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::XmlWellFormedWriter::*)()>(&System::Xml::XmlWellFormedWriter::get_IsClosedOrErrorState)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x26eb2cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlWellFormedWriter>::get(),
                            "get_IsClosedOrErrorState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlWellFormedWriter.AddAttribute
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlWellFormedWriter::*)(::StringW, ::StringW, ::StringW)>(&System::Xml::XmlWellFormedWriter::AddAttribute)> {
  constexpr static std::size_t size = 0x274;
  constexpr static std::size_t addrs = 0x26e79f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlWellFormedWriter>::get(),
                            "AddAttribute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlWellFormedWriter.AddToAttrHashTable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlWellFormedWriter::*)(int32_t)>(&System::Xml::XmlWellFormedWriter::AddToAttrHashTable)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x26ebe2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlWellFormedWriter>::get(),
                            "AddToAttrHashTable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Xml::XmlWellFormedWriter::__set_writer(System::Xml::XmlWriter value)  {
::cordl_internals::setInstanceField<System::Xml::XmlWriter, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Xml::XmlWriter>(value));
}
constexpr System::Xml::XmlWriter System::Xml::XmlWellFormedWriter::__get_writer() const {
return ::cordl_internals::getInstanceField<System::Xml::XmlWriter, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Xml::XmlWellFormedWriter::__set_rawWriter(System::Xml::XmlRawWriter value)  {
::cordl_internals::setInstanceField<System::Xml::XmlRawWriter, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Xml::XmlRawWriter>(value));
}
constexpr System::Xml::XmlRawWriter System::Xml::XmlWellFormedWriter::__get_rawWriter() const {
return ::cordl_internals::getInstanceField<System::Xml::XmlRawWriter, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Xml::XmlWellFormedWriter::__set_predefinedNamespaces(System::Xml::IXmlNamespaceResolver value)  {
::cordl_internals::setInstanceField<System::Xml::IXmlNamespaceResolver, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Xml::IXmlNamespaceResolver>(value));
}
constexpr System::Xml::IXmlNamespaceResolver System::Xml::XmlWellFormedWriter::__get_predefinedNamespaces() const {
return ::cordl_internals::getInstanceField<System::Xml::IXmlNamespaceResolver, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Xml::XmlWellFormedWriter::__set_nsStack(::ArrayW<System::Xml::System__Xml__XmlWellFormedWriter__Namespace> value)  {
::cordl_internals::setInstanceField<::ArrayW<System::Xml::System__Xml__XmlWellFormedWriter__Namespace>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<System::Xml::System__Xml__XmlWellFormedWriter__Namespace>>(value));
}
constexpr ::ArrayW<System::Xml::System__Xml__XmlWellFormedWriter__Namespace> System::Xml::XmlWellFormedWriter::__get_nsStack() const {
return ::cordl_internals::getInstanceField<::ArrayW<System::Xml::System__Xml__XmlWellFormedWriter__Namespace>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Xml::XmlWellFormedWriter::__set_nsTop(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Xml::XmlWellFormedWriter::__get_nsTop() const {
return ::cordl_internals::getInstanceField<int32_t, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Xml::XmlWellFormedWriter::__set_nsHashtable(System::Collections::Generic::Dictionary_2<::StringW,int32_t> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::Dictionary_2<::StringW,int32_t>, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::Dictionary_2<::StringW,int32_t>>(value));
}
constexpr System::Collections::Generic::Dictionary_2<::StringW,int32_t> System::Xml::XmlWellFormedWriter::__get_nsHashtable() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::Dictionary_2<::StringW,int32_t>, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Xml::XmlWellFormedWriter::__set_useNsHashtable(bool value)  {
::cordl_internals::setInstanceField<bool, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool System::Xml::XmlWellFormedWriter::__get_useNsHashtable() const {
return ::cordl_internals::getInstanceField<bool, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Xml::XmlWellFormedWriter::__set_elemScopeStack(::ArrayW<System::Xml::System__Xml__XmlWellFormedWriter__ElementScope> value)  {
::cordl_internals::setInstanceField<::ArrayW<System::Xml::System__Xml__XmlWellFormedWriter__ElementScope>, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<System::Xml::System__Xml__XmlWellFormedWriter__ElementScope>>(value));
}
constexpr ::ArrayW<System::Xml::System__Xml__XmlWellFormedWriter__ElementScope> System::Xml::XmlWellFormedWriter::__get_elemScopeStack() const {
return ::cordl_internals::getInstanceField<::ArrayW<System::Xml::System__Xml__XmlWellFormedWriter__ElementScope>, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Xml::XmlWellFormedWriter::__set_elemTop(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Xml::XmlWellFormedWriter::__get_elemTop() const {
return ::cordl_internals::getInstanceField<int32_t, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Xml::XmlWellFormedWriter::__set_attrStack(::ArrayW<System::Xml::System__Xml__XmlWellFormedWriter__AttrName> value)  {
::cordl_internals::setInstanceField<::ArrayW<System::Xml::System__Xml__XmlWellFormedWriter__AttrName>, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<System::Xml::System__Xml__XmlWellFormedWriter__AttrName>>(value));
}
constexpr ::ArrayW<System::Xml::System__Xml__XmlWellFormedWriter__AttrName> System::Xml::XmlWellFormedWriter::__get_attrStack() const {
return ::cordl_internals::getInstanceField<::ArrayW<System::Xml::System__Xml__XmlWellFormedWriter__AttrName>, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Xml::XmlWellFormedWriter::__set_attrCount(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x60>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Xml::XmlWellFormedWriter::__get_attrCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x60>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Xml::XmlWellFormedWriter::__set_attrHashTable(System::Collections::Generic::Dictionary_2<::StringW,int32_t> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::Dictionary_2<::StringW,int32_t>, 0x68>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::Dictionary_2<::StringW,int32_t>>(value));
}
constexpr System::Collections::Generic::Dictionary_2<::StringW,int32_t> System::Xml::XmlWellFormedWriter::__get_attrHashTable() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::Dictionary_2<::StringW,int32_t>, 0x68>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Xml::XmlWellFormedWriter::__set_specAttr(System::Xml::System__Xml__XmlWellFormedWriter__SpecialAttribute value)  {
::cordl_internals::setInstanceField<System::Xml::System__Xml__XmlWellFormedWriter__SpecialAttribute, 0x70>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Xml::System__Xml__XmlWellFormedWriter__SpecialAttribute>(value));
}
constexpr System::Xml::System__Xml__XmlWellFormedWriter__SpecialAttribute System::Xml::XmlWellFormedWriter::__get_specAttr() const {
return ::cordl_internals::getInstanceField<System::Xml::System__Xml__XmlWellFormedWriter__SpecialAttribute, 0x70>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Xml::XmlWellFormedWriter::__set_attrValueCache(System::Xml::System__Xml__XmlWellFormedWriter__AttributeValueCache value)  {
::cordl_internals::setInstanceField<System::Xml::System__Xml__XmlWellFormedWriter__AttributeValueCache, 0x78>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Xml::System__Xml__XmlWellFormedWriter__AttributeValueCache>(value));
}
constexpr System::Xml::System__Xml__XmlWellFormedWriter__AttributeValueCache System::Xml::XmlWellFormedWriter::__get_attrValueCache() const {
return ::cordl_internals::getInstanceField<System::Xml::System__Xml__XmlWellFormedWriter__AttributeValueCache, 0x78>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Xml::XmlWellFormedWriter::__set_curDeclPrefix(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x80>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW System::Xml::XmlWellFormedWriter::__get_curDeclPrefix() const {
return ::cordl_internals::getInstanceField<::StringW, 0x80>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Xml::XmlWellFormedWriter::__set_stateTable(::ArrayW<System::Xml::System__Xml__XmlWellFormedWriter__State> value)  {
::cordl_internals::setInstanceField<::ArrayW<System::Xml::System__Xml__XmlWellFormedWriter__State>, 0x88>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<System::Xml::System__Xml__XmlWellFormedWriter__State>>(value));
}
constexpr ::ArrayW<System::Xml::System__Xml__XmlWellFormedWriter__State> System::Xml::XmlWellFormedWriter::__get_stateTable() const {
return ::cordl_internals::getInstanceField<::ArrayW<System::Xml::System__Xml__XmlWellFormedWriter__State>, 0x88>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Xml::XmlWellFormedWriter::__set_currentState(System::Xml::System__Xml__XmlWellFormedWriter__State value)  {
::cordl_internals::setInstanceField<System::Xml::System__Xml__XmlWellFormedWriter__State, 0x90>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Xml::System__Xml__XmlWellFormedWriter__State>(value));
}
constexpr System::Xml::System__Xml__XmlWellFormedWriter__State System::Xml::XmlWellFormedWriter::__get_currentState() const {
return ::cordl_internals::getInstanceField<System::Xml::System__Xml__XmlWellFormedWriter__State, 0x90>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Xml::XmlWellFormedWriter::__set_checkCharacters(bool value)  {
::cordl_internals::setInstanceField<bool, 0x94>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool System::Xml::XmlWellFormedWriter::__get_checkCharacters() const {
return ::cordl_internals::getInstanceField<bool, 0x94>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Xml::XmlWellFormedWriter::__set_omitDuplNamespaces(bool value)  {
::cordl_internals::setInstanceField<bool, 0x95>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool System::Xml::XmlWellFormedWriter::__get_omitDuplNamespaces() const {
return ::cordl_internals::getInstanceField<bool, 0x95>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Xml::XmlWellFormedWriter::__set_writeEndDocumentOnClose(bool value)  {
::cordl_internals::setInstanceField<bool, 0x96>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool System::Xml::XmlWellFormedWriter::__get_writeEndDocumentOnClose() const {
return ::cordl_internals::getInstanceField<bool, 0x96>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Xml::XmlWellFormedWriter::__set_conformanceLevel(System::Xml::ConformanceLevel value)  {
::cordl_internals::setInstanceField<System::Xml::ConformanceLevel, 0x98>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Xml::ConformanceLevel>(value));
}
constexpr System::Xml::ConformanceLevel System::Xml::XmlWellFormedWriter::__get_conformanceLevel() const {
return ::cordl_internals::getInstanceField<System::Xml::ConformanceLevel, 0x98>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Xml::XmlWellFormedWriter::__set_dtdWritten(bool value)  {
::cordl_internals::setInstanceField<bool, 0x9c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool System::Xml::XmlWellFormedWriter::__get_dtdWritten() const {
return ::cordl_internals::getInstanceField<bool, 0x9c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Xml::XmlWellFormedWriter::__set_xmlDeclFollows(bool value)  {
::cordl_internals::setInstanceField<bool, 0x9d>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool System::Xml::XmlWellFormedWriter::__get_xmlDeclFollows() const {
return ::cordl_internals::getInstanceField<bool, 0x9d>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Xml::XmlWellFormedWriter::__set_xmlCharType(System::Xml::XmlCharType value)  {
::cordl_internals::setInstanceField<System::Xml::XmlCharType, 0xa0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Xml::XmlCharType>(value));
}
constexpr System::Xml::XmlCharType System::Xml::XmlWellFormedWriter::__get_xmlCharType() const {
return ::cordl_internals::getInstanceField<System::Xml::XmlCharType, 0xa0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Xml::XmlWellFormedWriter::__set_hasher(System::Xml::SecureStringHasher value)  {
::cordl_internals::setInstanceField<System::Xml::SecureStringHasher, 0xa8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Xml::SecureStringHasher>(value));
}
constexpr System::Xml::SecureStringHasher System::Xml::XmlWellFormedWriter::__get_hasher() const {
return ::cordl_internals::getInstanceField<System::Xml::SecureStringHasher, 0xa8>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void System::Xml::XmlWellFormedWriter::__set_stateName(::ArrayW<::StringW> value)  {
::cordl_internals::setStaticField<::ArrayW<::StringW>, "stateName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlWellFormedWriter>::get>(std::forward<::ArrayW<::StringW>>(value));
}
 ::ArrayW<::StringW> System::Xml::XmlWellFormedWriter::__get_stateName()  {
return ::cordl_internals::getStaticField<::ArrayW<::StringW>, "stateName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlWellFormedWriter>::get>();
}
 void System::Xml::XmlWellFormedWriter::__set_tokenName(::ArrayW<::StringW> value)  {
::cordl_internals::setStaticField<::ArrayW<::StringW>, "tokenName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlWellFormedWriter>::get>(std::forward<::ArrayW<::StringW>>(value));
}
 ::ArrayW<::StringW> System::Xml::XmlWellFormedWriter::__get_tokenName()  {
return ::cordl_internals::getStaticField<::ArrayW<::StringW>, "tokenName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlWellFormedWriter>::get>();
}
 void System::Xml::XmlWellFormedWriter::__set_state2WriteState(::ArrayW<System::Xml::WriteState> value)  {
::cordl_internals::setStaticField<::ArrayW<System::Xml::WriteState>, "state2WriteState", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlWellFormedWriter>::get>(std::forward<::ArrayW<System::Xml::WriteState>>(value));
}
 ::ArrayW<System::Xml::WriteState> System::Xml::XmlWellFormedWriter::__get_state2WriteState()  {
return ::cordl_internals::getStaticField<::ArrayW<System::Xml::WriteState>, "state2WriteState", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlWellFormedWriter>::get>();
}
 void System::Xml::XmlWellFormedWriter::__set_StateTableDocument(::ArrayW<System::Xml::System__Xml__XmlWellFormedWriter__State> value)  {
::cordl_internals::setStaticField<::ArrayW<System::Xml::System__Xml__XmlWellFormedWriter__State>, "StateTableDocument", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlWellFormedWriter>::get>(std::forward<::ArrayW<System::Xml::System__Xml__XmlWellFormedWriter__State>>(value));
}
 ::ArrayW<System::Xml::System__Xml__XmlWellFormedWriter__State> System::Xml::XmlWellFormedWriter::__get_StateTableDocument()  {
return ::cordl_internals::getStaticField<::ArrayW<System::Xml::System__Xml__XmlWellFormedWriter__State>, "StateTableDocument", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlWellFormedWriter>::get>();
}
 void System::Xml::XmlWellFormedWriter::__set_StateTableAuto(::ArrayW<System::Xml::System__Xml__XmlWellFormedWriter__State> value)  {
::cordl_internals::setStaticField<::ArrayW<System::Xml::System__Xml__XmlWellFormedWriter__State>, "StateTableAuto", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlWellFormedWriter>::get>(std::forward<::ArrayW<System::Xml::System__Xml__XmlWellFormedWriter__State>>(value));
}
 ::ArrayW<System::Xml::System__Xml__XmlWellFormedWriter__State> System::Xml::XmlWellFormedWriter::__get_StateTableAuto()  {
return ::cordl_internals::getStaticField<::ArrayW<System::Xml::System__Xml__XmlWellFormedWriter__State>, "StateTableAuto", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlWellFormedWriter>::get>();
}
// Ctor Parameters [CppParam { name: "writer", ty: "System::Xml::XmlWriter", modifiers: "", def_value: None }, CppParam { name: "settings", ty: "System::Xml::XmlWriterSettings", modifiers: "", def_value: None }]
 System::Xml::XmlWellFormedWriter::XmlWellFormedWriter(System::Xml::XmlWriter writer, System::Xml::XmlWriterSettings settings)  : System::Xml::XmlWriter(THROW_UNLESS(::il2cpp_utils::New<XmlWellFormedWriter>(writer, settings))) {}
 void System::Xml::XmlWellFormedWriter::_ctor(System::Xml::XmlWriter writer, System::Xml::XmlWriterSettings settings)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlWellFormedWriter>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::XmlWriter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::XmlWriterSettings>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, writer, settings);
}
 System::Xml::WriteState System::Xml::XmlWellFormedWriter::get_WriteState()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlWellFormedWriter>::get(),
                            "get_WriteState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Xml::WriteState, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Xml::XmlWellFormedWriter::WriteStartDocument()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlWellFormedWriter>::get(),
                            "WriteStartDocument",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Xml::XmlWellFormedWriter::WriteStartDocument(bool standalone)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlWellFormedWriter>::get(),
                            "WriteStartDocument",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, standalone);
}
 void System::Xml::XmlWellFormedWriter::WriteEndDocument()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlWellFormedWriter>::get(),
                            "WriteEndDocument",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Xml::XmlWellFormedWriter::WriteDocType(::StringW name, ::StringW pubid, ::StringW sysid, ::StringW subset)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlWellFormedWriter>::get(),
                            "WriteDocType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, name, pubid, sysid, subset);
}
 void System::Xml::XmlWellFormedWriter::WriteStartElement(::StringW prefix, ::StringW localName, ::StringW ns)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlWellFormedWriter>::get(),
                            "WriteStartElement",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, prefix, localName, ns);
}
 void System::Xml::XmlWellFormedWriter::WriteEndElement()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlWellFormedWriter>::get(),
                            "WriteEndElement",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Xml::XmlWellFormedWriter::WriteFullEndElement()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlWellFormedWriter>::get(),
                            "WriteFullEndElement",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Xml::XmlWellFormedWriter::WriteStartAttribute(::StringW prefix, ::StringW localName, ::StringW namespaceName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlWellFormedWriter>::get(),
                            "WriteStartAttribute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, prefix, localName, namespaceName);
}
 void System::Xml::XmlWellFormedWriter::WriteEndAttribute()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlWellFormedWriter>::get(),
                            "WriteEndAttribute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Xml::XmlWellFormedWriter::WriteCData(::StringW text)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlWellFormedWriter>::get(),
                            "WriteCData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, text);
}
 void System::Xml::XmlWellFormedWriter::WriteComment(::StringW text)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlWellFormedWriter>::get(),
                            "WriteComment",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, text);
}
 void System::Xml::XmlWellFormedWriter::WriteProcessingInstruction(::StringW name, ::StringW text)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlWellFormedWriter>::get(),
                            "WriteProcessingInstruction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, name, text);
}
 void System::Xml::XmlWellFormedWriter::WriteEntityRef(::StringW name)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlWellFormedWriter>::get(),
                            "WriteEntityRef",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, name);
}
 void System::Xml::XmlWellFormedWriter::WriteCharEntity(char16_t ch)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlWellFormedWriter>::get(),
                            "WriteCharEntity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, ch);
}
 void System::Xml::XmlWellFormedWriter::WriteSurrogateCharEntity(char16_t lowChar, char16_t highChar)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlWellFormedWriter>::get(),
                            "WriteSurrogateCharEntity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, lowChar, highChar);
}
 void System::Xml::XmlWellFormedWriter::WriteWhitespace(::StringW ws)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlWellFormedWriter>::get(),
                            "WriteWhitespace",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, ws);
}
 void System::Xml::XmlWellFormedWriter::WriteString(::StringW text)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlWellFormedWriter>::get(),
                            "WriteString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, text);
}
 void System::Xml::XmlWellFormedWriter::WriteChars(::ArrayW<char16_t> buffer, int32_t index, int32_t count)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlWellFormedWriter>::get(),
                            "WriteChars",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, buffer, index, count);
}
 void System::Xml::XmlWellFormedWriter::WriteRaw(::ArrayW<char16_t> buffer, int32_t index, int32_t count)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlWellFormedWriter>::get(),
                            "WriteRaw",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, buffer, index, count);
}
 void System::Xml::XmlWellFormedWriter::WriteRaw(::StringW data)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlWellFormedWriter>::get(),
                            "WriteRaw",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, data);
}
 void System::Xml::XmlWellFormedWriter::WriteBase64(::ArrayW<uint8_t> buffer, int32_t index, int32_t count)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlWellFormedWriter>::get(),
                            "WriteBase64",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, buffer, index, count);
}
 void System::Xml::XmlWellFormedWriter::Close()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlWellFormedWriter>::get(),
                            "Close",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Xml::XmlWellFormedWriter::Flush()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlWellFormedWriter>::get(),
                            "Flush",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW System::Xml::XmlWellFormedWriter::LookupPrefix(::StringW ns)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlWellFormedWriter>::get(),
                            "LookupPrefix",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method, ns);
}
 void System::Xml::XmlWellFormedWriter::WriteValue(::StringW value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlWellFormedWriter>::get(),
                            "WriteValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void System::Xml::XmlWellFormedWriter::WriteBinHex(::ArrayW<uint8_t> buffer, int32_t index, int32_t count)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlWellFormedWriter>::get(),
                            "WriteBinHex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, buffer, index, count);
}
 System::Xml::XmlRawWriter System::Xml::XmlWellFormedWriter::get_RawWriter()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlWellFormedWriter>::get(),
                            "get_RawWriter",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Xml::XmlRawWriter, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Xml::XmlWellFormedWriter::get_SaveAttrValue()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlWellFormedWriter>::get(),
                            "get_SaveAttrValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Xml::XmlWellFormedWriter::get_InBase64()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlWellFormedWriter>::get(),
                            "get_InBase64",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Xml::XmlWellFormedWriter::SetSpecialAttribute(System::Xml::System__Xml__XmlWellFormedWriter__SpecialAttribute special)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlWellFormedWriter>::get(),
                            "SetSpecialAttribute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::System__Xml__XmlWellFormedWriter__SpecialAttribute>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, special);
}
 void System::Xml::XmlWellFormedWriter::WriteStartDocumentImpl(System::Xml::XmlStandalone standalone)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlWellFormedWriter>::get(),
                            "WriteStartDocumentImpl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::XmlStandalone>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, standalone);
}
 void System::Xml::XmlWellFormedWriter::StartFragment()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlWellFormedWriter>::get(),
                            "StartFragment",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Xml::XmlWellFormedWriter::PushNamespaceImplicit(::StringW prefix, ::StringW ns)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlWellFormedWriter>::get(),
                            "PushNamespaceImplicit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, prefix, ns);
}
 bool System::Xml::XmlWellFormedWriter::PushNamespaceExplicit(::StringW prefix, ::StringW ns)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlWellFormedWriter>::get(),
                            "PushNamespaceExplicit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, prefix, ns);
}
 void System::Xml::XmlWellFormedWriter::AddNamespace(::StringW prefix, ::StringW ns, System::Xml::System__Xml__XmlWellFormedWriter__NamespaceKind kind)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlWellFormedWriter>::get(),
                            "AddNamespace",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::System__Xml__XmlWellFormedWriter__NamespaceKind>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, prefix, ns, kind);
}
 void System::Xml::XmlWellFormedWriter::AddToNamespaceHashtable(int32_t namespaceIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlWellFormedWriter>::get(),
                            "AddToNamespaceHashtable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, namespaceIndex);
}
 int32_t System::Xml::XmlWellFormedWriter::LookupNamespaceIndex(::StringW prefix)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlWellFormedWriter>::get(),
                            "LookupNamespaceIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, prefix);
}
 void System::Xml::XmlWellFormedWriter::PopNamespaces(int32_t indexFrom, int32_t indexTo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlWellFormedWriter>::get(),
                            "PopNamespaces",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, indexFrom, indexTo);
}
 System::Xml::XmlException System::Xml::XmlWellFormedWriter::DupAttrException(::StringW prefix, ::StringW localName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlWellFormedWriter>::get(),
                            "DupAttrException",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Xml::XmlException, false>(nullptr, ___internal_method, prefix, localName);
}
 void System::Xml::XmlWellFormedWriter::AdvanceState(System::Xml::System__Xml__XmlWellFormedWriter__Token token)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlWellFormedWriter>::get(),
                            "AdvanceState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::System__Xml__XmlWellFormedWriter__Token>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, token);
}
 void System::Xml::XmlWellFormedWriter::StartElementContent()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlWellFormedWriter>::get(),
                            "StartElementContent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW System::Xml::XmlWellFormedWriter::GetStateName(System::Xml::System__Xml__XmlWellFormedWriter__State state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlWellFormedWriter>::get(),
                            "GetStateName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::System__Xml__XmlWellFormedWriter__State>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, state);
}
 ::StringW System::Xml::XmlWellFormedWriter::LookupNamespace(::StringW prefix)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlWellFormedWriter>::get(),
                            "LookupNamespace",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method, prefix);
}
 ::StringW System::Xml::XmlWellFormedWriter::LookupLocalNamespace(::StringW prefix)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlWellFormedWriter>::get(),
                            "LookupLocalNamespace",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method, prefix);
}
 ::StringW System::Xml::XmlWellFormedWriter::GeneratePrefix()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlWellFormedWriter>::get(),
                            "GeneratePrefix",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Xml::XmlWellFormedWriter::CheckNCName(::StringW ncname)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlWellFormedWriter>::get(),
                            "CheckNCName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, ncname);
}
 System::Exception System::Xml::XmlWellFormedWriter::InvalidCharsException(::StringW name, int32_t badCharIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlWellFormedWriter>::get(),
                            "InvalidCharsException",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Exception, false>(nullptr, ___internal_method, name, badCharIndex);
}
 void System::Xml::XmlWellFormedWriter::ThrowInvalidStateTransition(System::Xml::System__Xml__XmlWellFormedWriter__Token token, System::Xml::System__Xml__XmlWellFormedWriter__State currentState)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlWellFormedWriter>::get(),
                            "ThrowInvalidStateTransition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::System__Xml__XmlWellFormedWriter__Token>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::System__Xml__XmlWellFormedWriter__State>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, token, currentState);
}
 bool System::Xml::XmlWellFormedWriter::get_IsClosedOrErrorState()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlWellFormedWriter>::get(),
                            "get_IsClosedOrErrorState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Xml::XmlWellFormedWriter::AddAttribute(::StringW prefix, ::StringW localName, ::StringW namespaceName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlWellFormedWriter>::get(),
                            "AddAttribute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, prefix, localName, namespaceName);
}
 void System::Xml::XmlWellFormedWriter::AddToAttrHashTable(int32_t attributeIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlWellFormedWriter>::get(),
                            "AddToAttrHashTable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, attributeIndex);
}
