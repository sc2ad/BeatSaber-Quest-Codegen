#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "System/zzzz__ValueType_impl.hpp"
#include "System/zzzz__Uri_def.hpp"
#include "System/zzzz__UriIdnScope_def.hpp"
#include "System/zzzz__UriHostNameType_def.hpp"
#include "System/zzzz__UriParser_def.hpp"
#include "System/Runtime/Serialization/zzzz__ISerializable_def.hpp"
#include "System/zzzz__UriKind_def.hpp"
#include "System/zzzz__UriFormat_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationInfo_def.hpp"
#include "System/zzzz__UriFormatException_def.hpp"
#include "System/zzzz__ParsingError_def.hpp"
#include "System/zzzz__UriComponents_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint64_t", modifiers: "", def_value: Some("{}") }]
constexpr System::System__Uri__Flags::System__Uri__Flags(uint64_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void System::System__Uri__Flags::__set_value__(uint64_t value)  {
::cordl_internals::setInstanceField<uint64_t, 0x0>(this->__instance, std::forward<uint64_t>(value));
}
constexpr uint64_t System::System__Uri__Flags::__get_value__() const {
return ::cordl_internals::getInstanceField<uint64_t, 0x0>(this->__instance);
}
constexpr System::System__Uri__Flags  System::System__Uri__Flags::Zero{0u};
constexpr System::System__Uri__Flags  System::System__Uri__Flags::SchemeNotCanonical{1u};
constexpr System::System__Uri__Flags  System::System__Uri__Flags::UserNotCanonical{2u};
constexpr System::System__Uri__Flags  System::System__Uri__Flags::HostNotCanonical{4u};
constexpr System::System__Uri__Flags  System::System__Uri__Flags::PortNotCanonical{8u};
constexpr System::System__Uri__Flags  System::System__Uri__Flags::PathNotCanonical{16u};
constexpr System::System__Uri__Flags  System::System__Uri__Flags::QueryNotCanonical{32u};
constexpr System::System__Uri__Flags  System::System__Uri__Flags::FragmentNotCanonical{64u};
constexpr System::System__Uri__Flags  System::System__Uri__Flags::CannotDisplayCanonical{127u};
constexpr System::System__Uri__Flags  System::System__Uri__Flags::E_UserNotCanonical{128u};
constexpr System::System__Uri__Flags  System::System__Uri__Flags::E_HostNotCanonical{256u};
constexpr System::System__Uri__Flags  System::System__Uri__Flags::E_PortNotCanonical{512u};
constexpr System::System__Uri__Flags  System::System__Uri__Flags::E_PathNotCanonical{1024u};
constexpr System::System__Uri__Flags  System::System__Uri__Flags::E_QueryNotCanonical{2048u};
constexpr System::System__Uri__Flags  System::System__Uri__Flags::E_FragmentNotCanonical{4096u};
constexpr System::System__Uri__Flags  System::System__Uri__Flags::E_CannotDisplayCanonical{8064u};
constexpr System::System__Uri__Flags  System::System__Uri__Flags::ShouldBeCompressed{8192u};
constexpr System::System__Uri__Flags  System::System__Uri__Flags::FirstSlashAbsent{16384u};
constexpr System::System__Uri__Flags  System::System__Uri__Flags::BackslashInPath{32768u};
constexpr System::System__Uri__Flags  System::System__Uri__Flags::IndexMask{65535u};
constexpr System::System__Uri__Flags  System::System__Uri__Flags::HostTypeMask{458752u};
constexpr System::System__Uri__Flags  System::System__Uri__Flags::HostNotParsed{0u};
constexpr System::System__Uri__Flags  System::System__Uri__Flags::IPv6HostType{65536u};
constexpr System::System__Uri__Flags  System::System__Uri__Flags::IPv4HostType{131072u};
constexpr System::System__Uri__Flags  System::System__Uri__Flags::DnsHostType{196608u};
constexpr System::System__Uri__Flags  System::System__Uri__Flags::UncHostType{262144u};
constexpr System::System__Uri__Flags  System::System__Uri__Flags::BasicHostType{327680u};
constexpr System::System__Uri__Flags  System::System__Uri__Flags::UnusedHostType{393216u};
constexpr System::System__Uri__Flags  System::System__Uri__Flags::UnknownHostType{458752u};
constexpr System::System__Uri__Flags  System::System__Uri__Flags::UserEscaped{524288u};
constexpr System::System__Uri__Flags  System::System__Uri__Flags::AuthorityFound{1048576u};
constexpr System::System__Uri__Flags  System::System__Uri__Flags::HasUserInfo{2097152u};
constexpr System::System__Uri__Flags  System::System__Uri__Flags::LoopbackHost{4194304u};
constexpr System::System__Uri__Flags  System::System__Uri__Flags::NotDefaultPort{8388608u};
constexpr System::System__Uri__Flags  System::System__Uri__Flags::UserDrivenParsing{16777216u};
constexpr System::System__Uri__Flags  System::System__Uri__Flags::CanonicalDnsHost{33554432u};
constexpr System::System__Uri__Flags  System::System__Uri__Flags::ErrorOrParsingRecursion{67108864u};
constexpr System::System__Uri__Flags  System::System__Uri__Flags::DosPath{134217728u};
constexpr System::System__Uri__Flags  System::System__Uri__Flags::UncPath{268435456u};
constexpr System::System__Uri__Flags  System::System__Uri__Flags::ImplicitFile{536870912u};
constexpr System::System__Uri__Flags  System::System__Uri__Flags::MinimalUriInfoSet{1073741824u};
constexpr System::System__Uri__Flags  System::System__Uri__Flags::AllUriInfoSet{2147483648u};
constexpr System::System__Uri__Flags  System::System__Uri__Flags::IdnHost{4294967296u};
constexpr System::System__Uri__Flags  System::System__Uri__Flags::HasUnicode{8589934592u};
constexpr System::System__Uri__Flags  System::System__Uri__Flags::HostUnicodeNormalized{17179869184u};
constexpr System::System__Uri__Flags  System::System__Uri__Flags::RestUnicodeNormalized{34359738368u};
constexpr System::System__Uri__Flags  System::System__Uri__Flags::UnicodeHost{68719476736u};
constexpr System::System__Uri__Flags  System::System__Uri__Flags::IntranetUri{137438953472u};
constexpr System::System__Uri__Flags  System::System__Uri__Flags::UseOrigUncdStrOffset{274877906944u};
constexpr System::System__Uri__Flags  System::System__Uri__Flags::UserIriCanonical{549755813888u};
constexpr System::System__Uri__Flags  System::System__Uri__Flags::PathIriCanonical{1099511627776u};
constexpr System::System__Uri__Flags  System::System__Uri__Flags::QueryIriCanonical{2199023255552u};
constexpr System::System__Uri__Flags  System::System__Uri__Flags::FragmentIriCanonical{4398046511104u};
constexpr System::System__Uri__Flags  System::System__Uri__Flags::IriCanonical{8246337208320u};
constexpr System::System__Uri__Flags  System::System__Uri__Flags::CompressedSlashes{17592186044416u};
//  Writing Method size for method: System::System__Uri__UriInfo._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::System__Uri__UriInfo::*)()>(&System::System__Uri__UriInfo::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27b8014;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::System__Uri__UriInfo>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void System::System__Uri__UriInfo::__set_Host(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW System::System__Uri__UriInfo::__get_Host() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::System__Uri__UriInfo::__set_ScopeId(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW System::System__Uri__UriInfo::__get_ScopeId() const {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::System__Uri__UriInfo::__set_String(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW System::System__Uri__UriInfo::__get_String() const {
return ::cordl_internals::getInstanceField<::StringW, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::System__Uri__UriInfo::__set_Offset(System::System__Uri__Offset value)  {
::cordl_internals::setInstanceField<System::System__Uri__Offset, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::System__Uri__Offset>(value));
}
constexpr System::System__Uri__Offset System::System__Uri__UriInfo::__get_Offset() const {
return ::cordl_internals::getInstanceField<System::System__Uri__Offset, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::System__Uri__UriInfo::__set_DnsSafeHost(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW System::System__Uri__UriInfo::__get_DnsSafeHost() const {
return ::cordl_internals::getInstanceField<::StringW, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::System__Uri__UriInfo::__set_MoreInfo(System::System__Uri__MoreInfo value)  {
::cordl_internals::setInstanceField<System::System__Uri__MoreInfo, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::System__Uri__MoreInfo>(value));
}
constexpr System::System__Uri__MoreInfo System::System__Uri__UriInfo::__get_MoreInfo() const {
return ::cordl_internals::getInstanceField<System::System__Uri__MoreInfo, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 System::System__Uri__UriInfo::System__Uri__UriInfo()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<System__Uri__UriInfo>())) {}
 void System::System__Uri__UriInfo::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::System__Uri__UriInfo>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters [CppParam { name: "Scheme", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "User", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "Host", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "PortValue", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "Path", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "Query", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "Fragment", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "End", ty: "uint16_t", modifiers: "", def_value: Some("{}") }]
constexpr System::System__Uri__Offset::System__Uri__Offset(uint16_t Scheme, uint16_t User, uint16_t Host, uint16_t PortValue, uint16_t Path, uint16_t Query, uint16_t Fragment, uint16_t End) noexcept : ::bs_hook::ValueTypeWrapper() {this->Scheme = Scheme;
this->User = User;
this->Host = Host;
this->PortValue = PortValue;
this->Path = Path;
this->Query = Query;
this->Fragment = Fragment;
this->End = End;
}
constexpr void System::System__Uri__Offset::__set_Scheme(uint16_t value)  {
::cordl_internals::setInstanceField<uint16_t, 0x0>(this->__instance, std::forward<uint16_t>(value));
}
constexpr uint16_t System::System__Uri__Offset::__get_Scheme() const {
return ::cordl_internals::getInstanceField<uint16_t, 0x0>(this->__instance);
}
constexpr void System::System__Uri__Offset::__set_User(uint16_t value)  {
::cordl_internals::setInstanceField<uint16_t, 0x2>(this->__instance, std::forward<uint16_t>(value));
}
constexpr uint16_t System::System__Uri__Offset::__get_User() const {
return ::cordl_internals::getInstanceField<uint16_t, 0x2>(this->__instance);
}
constexpr void System::System__Uri__Offset::__set_Host(uint16_t value)  {
::cordl_internals::setInstanceField<uint16_t, 0x4>(this->__instance, std::forward<uint16_t>(value));
}
constexpr uint16_t System::System__Uri__Offset::__get_Host() const {
return ::cordl_internals::getInstanceField<uint16_t, 0x4>(this->__instance);
}
constexpr void System::System__Uri__Offset::__set_PortValue(uint16_t value)  {
::cordl_internals::setInstanceField<uint16_t, 0x6>(this->__instance, std::forward<uint16_t>(value));
}
constexpr uint16_t System::System__Uri__Offset::__get_PortValue() const {
return ::cordl_internals::getInstanceField<uint16_t, 0x6>(this->__instance);
}
constexpr void System::System__Uri__Offset::__set_Path(uint16_t value)  {
::cordl_internals::setInstanceField<uint16_t, 0x8>(this->__instance, std::forward<uint16_t>(value));
}
constexpr uint16_t System::System__Uri__Offset::__get_Path() const {
return ::cordl_internals::getInstanceField<uint16_t, 0x8>(this->__instance);
}
constexpr void System::System__Uri__Offset::__set_Query(uint16_t value)  {
::cordl_internals::setInstanceField<uint16_t, 0xa>(this->__instance, std::forward<uint16_t>(value));
}
constexpr uint16_t System::System__Uri__Offset::__get_Query() const {
return ::cordl_internals::getInstanceField<uint16_t, 0xa>(this->__instance);
}
constexpr void System::System__Uri__Offset::__set_Fragment(uint16_t value)  {
::cordl_internals::setInstanceField<uint16_t, 0xc>(this->__instance, std::forward<uint16_t>(value));
}
constexpr uint16_t System::System__Uri__Offset::__get_Fragment() const {
return ::cordl_internals::getInstanceField<uint16_t, 0xc>(this->__instance);
}
constexpr void System::System__Uri__Offset::__set_End(uint16_t value)  {
::cordl_internals::setInstanceField<uint16_t, 0xe>(this->__instance, std::forward<uint16_t>(value));
}
constexpr uint16_t System::System__Uri__Offset::__get_End() const {
return ::cordl_internals::getInstanceField<uint16_t, 0xe>(this->__instance);
}
//  Writing Method size for method: System::System__Uri__MoreInfo._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::System__Uri__MoreInfo::*)()>(&System::System__Uri__MoreInfo::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27b801c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::System__Uri__MoreInfo>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void System::System__Uri__MoreInfo::__set_Path(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW System::System__Uri__MoreInfo::__get_Path() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::System__Uri__MoreInfo::__set_Query(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW System::System__Uri__MoreInfo::__get_Query() const {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::System__Uri__MoreInfo::__set_Fragment(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW System::System__Uri__MoreInfo::__get_Fragment() const {
return ::cordl_internals::getInstanceField<::StringW, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::System__Uri__MoreInfo::__set_AbsoluteUri(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW System::System__Uri__MoreInfo::__get_AbsoluteUri() const {
return ::cordl_internals::getInstanceField<::StringW, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::System__Uri__MoreInfo::__set_Hash(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::System__Uri__MoreInfo::__get_Hash() const {
return ::cordl_internals::getInstanceField<int32_t, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::System__Uri__MoreInfo::__set_RemoteUrl(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW System::System__Uri__MoreInfo::__get_RemoteUrl() const {
return ::cordl_internals::getInstanceField<::StringW, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 System::System__Uri__MoreInfo::System__Uri__MoreInfo()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<System__Uri__MoreInfo>())) {}
 void System::System__Uri__MoreInfo::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::System__Uri__MoreInfo>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr System::System__Uri__Check::System__Uri__Check(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void System::System__Uri__Check::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::System__Uri__Check::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr System::System__Uri__Check  System::System__Uri__Check::None{0};
constexpr System::System__Uri__Check  System::System__Uri__Check::EscapedCanonical{1};
constexpr System::System__Uri__Check  System::System__Uri__Check::DisplayCanonical{2};
constexpr System::System__Uri__Check  System::System__Uri__Check::DotSlashAttn{4};
constexpr System::System__Uri__Check  System::System__Uri__Check::DotSlashEscaped{128};
constexpr System::System__Uri__Check  System::System__Uri__Check::BackslashInPath{16};
constexpr System::System__Uri__Check  System::System__Uri__Check::ReservedFound{32};
constexpr System::System__Uri__Check  System::System__Uri__Check::NotIriCanonical{64};
constexpr System::System__Uri__Check  System::System__Uri__Check::FoundNonAscii{8};
//  Writing Method size for method: System::Uri.get_IsImplicitFile
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Uri::*)()>(&System::Uri::get_IsImplicitFile)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2757eec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                            "get_IsImplicitFile",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Uri.get_IsUncOrDosPath
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Uri::*)()>(&System::Uri::get_IsUncOrDosPath)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2757ef8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                            "get_IsUncOrDosPath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Uri.get_IsDosPath
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Uri::*)()>(&System::Uri::get_IsDosPath)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2757f08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                            "get_IsDosPath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Uri.get_IsUncPath
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Uri::*)()>(&System::Uri::get_IsUncPath)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2757f14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                            "get_IsUncPath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Uri.get_HostType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::System__Uri__Flags (System::Uri::*)()>(&System::Uri::get_HostType)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2757f20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                            "get_HostType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Uri.get_Syntax
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::UriParser (System::Uri::*)()>(&System::Uri::get_Syntax)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2757f2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                            "get_Syntax",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Uri.get_IsNotAbsoluteUri
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Uri::*)()>(&System::Uri::get_IsNotAbsoluteUri)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2757f34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                            "get_IsNotAbsoluteUri",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Uri.IriParsingStatic
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(System::UriParser)>(&System::Uri::IriParsingStatic)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x2757f44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                            "IriParsingStatic",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::UriParser>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Uri.get_AllowIdn
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Uri::*)()>(&System::Uri::get_AllowIdn)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x2757fd0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                            "get_AllowIdn",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Uri.AllowIdnStatic
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Uri::*)(System::UriParser, System::System__Uri__Flags)>(&System::Uri::AllowIdnStatic)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x275809c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                            "AllowIdnStatic",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::UriParser>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::System__Uri__Flags>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Uri.IsIntranet
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Uri::*)(::StringW)>(&System::Uri::IsIntranet)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2758170;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                            "IsIntranet",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Uri.get_UserDrivenParsing
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Uri::*)()>(&System::Uri::get_UserDrivenParsing)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2758178;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                            "get_UserDrivenParsing",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Uri.SetUserDrivenParsing
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Uri::*)()>(&System::Uri::SetUserDrivenParsing)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2758184;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                            "SetUserDrivenParsing",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Uri.get_SecuredPathIndex
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint16_t (System::Uri::*)()>(&System::Uri::get_SecuredPathIndex)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2758198;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                            "get_SecuredPathIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Uri.NotAny
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Uri::*)(System::System__Uri__Flags)>(&System::Uri::NotAny)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x275808c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                            "NotAny",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::System__Uri__Flags>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Uri.InFact
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Uri::*)(System::System__Uri__Flags)>(&System::Uri::InFact)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x27581f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                            "InFact",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::System__Uri__Flags>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Uri.StaticNotAny
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(System::System__Uri__Flags, System::System__Uri__Flags)>(&System::Uri::StaticNotAny)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2758164;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                            "StaticNotAny",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::System__Uri__Flags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::System__Uri__Flags>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Uri.StaticInFact
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(System::System__Uri__Flags, System::System__Uri__Flags)>(&System::Uri::StaticInFact)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2758204;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                            "StaticInFact",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::System__Uri__Flags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::System__Uri__Flags>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Uri.EnsureUriInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::System__Uri__UriInfo (System::Uri::*)()>(&System::Uri::EnsureUriInfo)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2758210;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                            "EnsureUriInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Uri.EnsureParseRemaining
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Uri::*)()>(&System::Uri::EnsureParseRemaining)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x27587c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                            "EnsureParseRemaining",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Uri.EnsureHostString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Uri::*)(bool)>(&System::Uri::EnsureHostString)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2759390;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                            "EnsureHostString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Uri._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Uri::*)(::StringW)>(&System::Uri::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x27597ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Uri._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Uri::*)(::StringW, System::UriKind)>(&System::Uri::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2759a30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::UriKind>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Uri._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Uri::*)(System::Uri, ::StringW)>(&System::Uri::_ctor)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x2759ab8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Uri>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Uri.CreateUri
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Uri::*)(System::Uri, ::StringW, bool)>(&System::Uri::CreateUri)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x2759b90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                            "CreateUri",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Uri>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Uri._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Uri::*)(System::Uri, System::Uri)>(&System::Uri::_ctor)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0x275a33c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Uri>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Uri>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Uri.GetCombinedString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::ParsingError (*)(System::Uri, ::StringW, bool, ByRef<::StringW>)>(&System::Uri::GetCombinedString)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x275a560;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                            "GetCombinedString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Uri>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Uri.GetException
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::UriFormatException (*)(System::ParsingError)>(&System::Uri::GetException)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x275b380;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                            "GetException",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ParsingError>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Uri._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Uri::*)(System::Runtime::Serialization::SerializationInfo, System::Runtime::Serialization::StreamingContext)>(&System::Uri::_ctor)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x275b520;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::SerializationInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::StreamingContext>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Uri.System_Runtime_Serialization_ISerializable_GetObjectData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Uri::*)(System::Runtime::Serialization::SerializationInfo, System::Runtime::Serialization::StreamingContext)>(&System::Uri::System_Runtime_Serialization_ISerializable_GetObjectData)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x275b624;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                            "System.Runtime.Serialization.ISerializable.GetObjectData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::SerializationInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::StreamingContext>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Uri.GetObjectData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Uri::*)(System::Runtime::Serialization::SerializationInfo, System::Runtime::Serialization::StreamingContext)>(&System::Uri::GetObjectData)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x275b628;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                            "GetObjectData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::SerializationInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::StreamingContext>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Uri.get_AbsolutePath
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Uri::*)()>(&System::Uri::get_AbsolutePath)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x275b704;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                            "get_AbsolutePath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Uri.get_PrivateAbsolutePath
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Uri::*)()>(&System::Uri::get_PrivateAbsolutePath)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x275b7cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                            "get_PrivateAbsolutePath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Uri.get_AbsoluteUri
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Uri::*)()>(&System::Uri::get_AbsoluteUri)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x275b874;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                            "get_AbsoluteUri",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Uri.get_LocalPath
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Uri::*)()>(&System::Uri::get_LocalPath)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x275b978;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                            "get_LocalPath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Uri.get_Authority
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Uri::*)()>(&System::Uri::get_Authority)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x275bfe0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                            "get_Authority",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Uri.get_HostNameType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::UriHostNameType (System::Uri::*)()>(&System::Uri::get_HostNameType)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x275c05c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                            "get_HostNameType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Uri.get_IsDefaultPort
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Uri::*)()>(&System::Uri::get_IsDefaultPort)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x275c15c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                            "get_IsDefaultPort",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Uri.get_IsFile
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Uri::*)()>(&System::Uri::get_IsFile)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x275c20c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                            "get_IsFile",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Uri.get_IsLoopback
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Uri::*)()>(&System::Uri::get_IsLoopback)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x275c2d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                            "get_IsLoopback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Uri.get_PathAndQuery
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Uri::*)()>(&System::Uri::get_PathAndQuery)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x275c35c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                            "get_PathAndQuery",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Uri.get_Segments
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW> (System::Uri::*)()>(&System::Uri::get_Segments)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x275c42c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                            "get_Segments",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Uri.get_IsUnc
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Uri::*)()>(&System::Uri::get_IsUnc)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x275c63c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                            "get_IsUnc",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Uri.get_Host
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Uri::*)()>(&System::Uri::get_Host)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x275c6b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                            "get_Host",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Uri.StaticIsFile
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(System::UriParser)>(&System::Uri::StaticIsFile)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x275c734;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                            "StaticIsFile",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::UriParser>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Uri.get_InitializeLock
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (*)()>(&System::Uri::get_InitializeLock)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x275c74c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                            "get_InitializeLock",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Uri.InitializeUriConfig
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Uri::InitializeUriConfig)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x275c820;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                            "InitializeUriConfig",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Uri.GetLocalPath
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Uri::*)()>(&System::Uri::GetLocalPath)> {
  constexpr static std::size_t size = 0x5f4;
  constexpr static std::size_t addrs = 0x275b9ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                            "GetLocalPath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Uri.get_Port
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Uri::*)()>(&System::Uri::get_Port)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x275cf68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                            "get_Port",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Uri.get_Query
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Uri::*)()>(&System::Uri::get_Query)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x275d034;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                            "get_Query",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Uri.get_Fragment
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Uri::*)()>(&System::Uri::get_Fragment)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x275d13c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                            "get_Fragment",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Uri.get_Scheme
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Uri::*)()>(&System::Uri::get_Scheme)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x275d244;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                            "get_Scheme",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Uri.get_OriginalStringSwitched
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Uri::*)()>(&System::Uri::get_OriginalStringSwitched)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x275d2bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                            "get_OriginalStringSwitched",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Uri.get_OriginalString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Uri::*)()>(&System::Uri::get_OriginalString)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x275a8e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                            "get_OriginalString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Uri.get_DnsSafeHost
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Uri::*)()>(&System::Uri::get_DnsSafeHost)> {
  constexpr static std::size_t size = 0x254;
  constexpr static std::size_t addrs = 0x275d304;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                            "get_DnsSafeHost",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Uri.get_IsAbsoluteUri
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Uri::*)()>(&System::Uri::get_IsAbsoluteUri)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2759b80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                            "get_IsAbsoluteUri",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Uri.get_UserEscaped
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Uri::*)()>(&System::Uri::get_UserEscaped)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x275d558;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                            "get_UserEscaped",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Uri.get_UserInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Uri::*)()>(&System::Uri::get_UserInfo)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x275d564;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                            "get_UserInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Uri.IsGenDelim
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(char16_t)>(&System::Uri::IsGenDelim)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x275d5e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                            "IsGenDelim",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Uri.CheckSchemeName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW)>(&System::Uri::CheckSchemeName)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x275d62c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                            "CheckSchemeName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Uri.IsHexDigit
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(char16_t)>(&System::Uri::IsHexDigit)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x275d814;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                            "IsHexDigit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Uri.FromHex
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(char16_t)>(&System::Uri::FromHex)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x275d850;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                            "FromHex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Uri.GetHashCode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Uri::*)()>(&System::Uri::GetHashCode)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x275d900;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Uri),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                                  2
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Uri.ToString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Uri::*)()>(&System::Uri::ToString)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x275dad8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Uri),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Uri.op_Equality
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(System::Uri, System::Uri)>(&System::Uri::op_Equality)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x275ddbc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                            "op_Equality",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Uri>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Uri>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Uri.op_Inequality
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(System::Uri, System::Uri)>(&System::Uri::op_Inequality)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x275a1d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                            "op_Inequality",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Uri>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Uri>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Uri.Equals
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Uri::*)(::bs_hook::Il2CppWrapperType)>(&System::Uri::Equals)> {
  constexpr static std::size_t size = 0x588;
  constexpr static std::size_t addrs = 0x275ddf0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Uri),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Uri.CheckForColonInFirstPathSegment
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW)>(&System::Uri::CheckForColonInFirstPathSegment)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x275e430;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                            "CheckForColonInFirstPathSegment",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Uri.InternalEscapeString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&System::Uri::InternalEscapeString)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x275e4e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                            "InternalEscapeString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Uri.ParseScheme
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::ParsingError (*)(::StringW, ByRef<System::System__Uri__Flags>, ByRef<System::UriParser>)>(&System::Uri::ParseScheme)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x275e5c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                            "ParseScheme",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::System__Uri__Flags>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::UriParser>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Uri.ParseMinimal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::UriFormatException (System::Uri::*)()>(&System::Uri::ParseMinimal)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x275ebf0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                            "ParseMinimal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Uri.PrivateParseMinimal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::ParsingError (System::Uri::*)()>(&System::Uri::PrivateParseMinimal)> {
  constexpr static std::size_t size = 0x668;
  constexpr static std::size_t addrs = 0x275ec70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                            "PrivateParseMinimal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Uri.PrivateParseMinimalIri
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Uri::*)(::StringW, uint16_t)>(&System::Uri::PrivateParseMinimalIri)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x276011c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                            "PrivateParseMinimalIri",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Uri.CreateUriInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Uri::*)(System::System__Uri__Flags)>(&System::Uri::CreateUriInfo)> {
  constexpr static std::size_t size = 0x594;
  constexpr static std::size_t addrs = 0x2758234;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                            "CreateUriInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::System__Uri__Flags>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Uri.CreateHostString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Uri::*)()>(&System::Uri::CreateHostString)> {
  constexpr static std::size_t size = 0x3fc;
  constexpr static std::size_t addrs = 0x27593f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                            "CreateHostString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Uri.CreateHostStringHelper
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW, uint16_t, uint16_t, ByRef<System::System__Uri__Flags>, ByRef<::StringW>)>(&System::Uri::CreateHostStringHelper)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x2760630;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                            "CreateHostStringHelper",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::System__Uri__Flags>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Uri.GetHostViaCustomSyntax
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Uri::*)()>(&System::Uri::GetHostViaCustomSyntax)> {
  constexpr static std::size_t size = 0x440;
  constexpr static std::size_t addrs = 0x27601f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                            "GetHostViaCustomSyntax",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Uri.GetParts
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Uri::*)(System::UriComponents, System::UriFormat)>(&System::Uri::GetParts)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x275b700;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                            "GetParts",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::UriComponents>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::UriFormat>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Uri.GetEscapedParts
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Uri::*)(System::UriComponents)>(&System::Uri::GetEscapedParts)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x2760de8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                            "GetEscapedParts",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::UriComponents>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Uri.GetUnescapedParts
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Uri::*)(System::UriComponents, System::UriFormat)>(&System::Uri::GetUnescapedParts)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x275ce98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                            "GetUnescapedParts",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::UriComponents>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::UriFormat>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Uri.ReCreateParts
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Uri::*)(System::UriComponents, uint16_t, System::UriFormat)>(&System::Uri::ReCreateParts)> {
  constexpr static std::size_t size = 0xc8c;
  constexpr static std::size_t addrs = 0x2761460;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                            "ReCreateParts",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::UriComponents>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::UriFormat>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Uri.GetUriPartsFromUserString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Uri::*)(System::UriComponents)>(&System::Uri::GetUriPartsFromUserString)> {
  constexpr static std::size_t size = 0x5b0;
  constexpr static std::size_t addrs = 0x2760eb0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                            "GetUriPartsFromUserString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::UriComponents>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Uri.ParseRemaining
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Uri::*)()>(&System::Uri::ParseRemaining)> {
  constexpr static std::size_t size = 0xbb8;
  constexpr static std::size_t addrs = 0x27587d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                            "ParseRemaining",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Uri.ParseSchemeCheckImplicitFile
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint16_t (*)(void*, uint16_t, ByRef<System::ParsingError>, ByRef<System::System__Uri__Flags>, ByRef<System::UriParser>)>(&System::Uri::ParseSchemeCheckImplicitFile)> {
  constexpr static std::size_t size = 0x548;
  constexpr static std::size_t addrs = 0x275e6a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                            "ParseSchemeCheckImplicitFile",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::ParsingError>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::System__Uri__Flags>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::UriParser>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Uri.CheckKnownSchemes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(void*, uint16_t, ByRef<System::UriParser>)>(&System::Uri::CheckKnownSchemes)> {
  constexpr static std::size_t size = 0x500;
  constexpr static std::size_t addrs = 0x27627f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                            "CheckKnownSchemes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::UriParser>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Uri.CheckSchemeSyntax
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::ParsingError (*)(void*, uint16_t, ByRef<System::UriParser>)>(&System::Uri::CheckSchemeSyntax)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x275a7b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                            "CheckSchemeSyntax",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::UriParser>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Uri.CheckAuthorityHelper
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint16_t (System::Uri::*)(void*, uint16_t, uint16_t, ByRef<System::ParsingError>, ByRef<System::System__Uri__Flags>, System::UriParser, ByRef<::StringW>)>(&System::Uri::CheckAuthorityHelper)> {
  constexpr static std::size_t size = 0xe04;
  constexpr static std::size_t addrs = 0x275f318;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                            "CheckAuthorityHelper",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::ParsingError>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::System__Uri__Flags>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::UriParser>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Uri.CheckAuthorityHelperHandleDnsIri
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Uri::*)(void*, uint16_t, int32_t, int32_t, bool, bool, System::UriParser, ::StringW, ByRef<System::System__Uri__Flags>, ByRef<bool>, ByRef<::StringW>, ByRef<System::ParsingError>)>(&System::Uri::CheckAuthorityHelperHandleDnsIri)> {
  constexpr static std::size_t size = 0x350;
  constexpr static std::size_t addrs = 0x2762cf8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                            "CheckAuthorityHelperHandleDnsIri",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::UriParser>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::System__Uri__Flags>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::ParsingError>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Uri.CheckAuthorityHelperHandleAnyHostIri
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Uri::*)(void*, int32_t, int32_t, bool, bool, System::UriParser, ByRef<System::System__Uri__Flags>, ByRef<::StringW>, ByRef<System::ParsingError>)>(&System::Uri::CheckAuthorityHelperHandleAnyHostIri)> {
  constexpr static std::size_t size = 0x2c4;
  constexpr static std::size_t addrs = 0x2763048;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                            "CheckAuthorityHelperHandleAnyHostIri",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::UriParser>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::System__Uri__Flags>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::ParsingError>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Uri.FindEndOfComponent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Uri::*)(::StringW, ByRef<uint16_t>, uint16_t, char16_t)>(&System::Uri::FindEndOfComponent)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2762754;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                            "FindEndOfComponent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Uri.FindEndOfComponent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Uri::*)(void*, ByRef<uint16_t>, uint16_t, char16_t)>(&System::Uri::FindEndOfComponent)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x2763484;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                            "FindEndOfComponent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Uri.CheckCanonical
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::System__Uri__Check (System::Uri::*)(void*, ByRef<uint16_t>, uint16_t, char16_t)>(&System::Uri::CheckCanonical)> {
  constexpr static std::size_t size = 0x3f8;
  constexpr static std::size_t addrs = 0x2760814;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                            "CheckCanonical",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Uri.GetCanonicalPath
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<char16_t> (System::Uri::*)(::ArrayW<char16_t>, ByRef<int32_t>, System::UriFormat)>(&System::Uri::GetCanonicalPath)> {
  constexpr static std::size_t size = 0x668;
  constexpr static std::size_t addrs = 0x27620ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                            "GetCanonicalPath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::UriFormat>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Uri.UnescapeOnly
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(void*, int32_t, ByRef<int32_t>, char16_t, char16_t, char16_t)>(&System::Uri::UnescapeOnly)> {
  constexpr static std::size_t size = 0x21c;
  constexpr static std::size_t addrs = 0x2763518;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                            "UnescapeOnly",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Uri.Compress
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<char16_t> (*)(::ArrayW<char16_t>, uint16_t, ByRef<int32_t>, System::UriParser)>(&System::Uri::Compress)> {
  constexpr static std::size_t size = 0x4d8;
  constexpr static std::size_t addrs = 0x275c9c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                            "Compress",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::UriParser>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Uri.CalculateCaseInsensitiveHashCode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::StringW)>(&System::Uri::CalculateCaseInsensitiveHashCode)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x275da38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                            "CalculateCaseInsensitiveHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Uri.CombineUri
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(System::Uri, ::StringW, System::UriFormat)>(&System::Uri::CombineUri)> {
  constexpr static std::size_t size = 0xa74;
  constexpr static std::size_t addrs = 0x275a90c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                            "CombineUri",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Uri>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::UriFormat>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Uri.get_HasAuthority
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Uri::*)()>(&System::Uri::get_HasAuthority)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2763734;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                            "get_HasAuthority",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Uri.IsLWS
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(char16_t)>(&System::Uri::IsLWS)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x275f2d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                            "IsLWS",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Uri.IsAsciiLetter
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(char16_t)>(&System::Uri::IsAsciiLetter)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x275d76c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                            "IsAsciiLetter",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Uri.IsAsciiLetterOrDigit
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(char16_t)>(&System::Uri::IsAsciiLetterOrDigit)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x275d798;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                            "IsAsciiLetterOrDigit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Uri.IsBidiControlCharacter
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(char16_t)>(&System::Uri::IsBidiControlCharacter)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2763740;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                            "IsBidiControlCharacter",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Uri.StripBidiControlCharacter
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(void*, int32_t, int32_t)>(&System::Uri::StripBidiControlCharacter)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x276330c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                            "StripBidiControlCharacter",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Uri.CreateThis
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Uri::*)(::StringW, bool, System::UriKind)>(&System::Uri::CreateThis)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x2759870;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                            "CreateThis",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::UriKind>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Uri.InitializeUri
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Uri::*)(System::ParsingError, System::UriKind, ByRef<System::UriFormatException>)>(&System::Uri::InitializeUri)> {
  constexpr static std::size_t size = 0x4d4;
  constexpr static std::size_t addrs = 0x2763788;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                            "InitializeUri",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ParsingError>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::UriKind>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::UriFormatException>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Uri.CheckForConfigLoad
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Uri::*)(::StringW)>(&System::Uri::CheckForConfigLoad)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x2763c5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                            "CheckForConfigLoad",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Uri.CheckForUnicode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Uri::*)(::StringW)>(&System::Uri::CheckForUnicode)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x2763d08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                            "CheckForUnicode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Uri.CheckForEscapedUnreserved
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Uri::*)(::StringW)>(&System::Uri::CheckForEscapedUnreserved)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x2763e20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                            "CheckForEscapedUnreserved",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Uri.TryCreate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, System::UriKind, ByRef<System::Uri>)>(&System::Uri::TryCreate)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x275e378;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                            "TryCreate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::UriKind>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Uri>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Uri.TryCreate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(System::Uri, ::StringW, ByRef<System::Uri>)>(&System::Uri::TryCreate)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x2764240;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                            "TryCreate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Uri>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Uri>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Uri.TryCreate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(System::Uri, System::Uri, ByRef<System::Uri>)>(&System::Uri::TryCreate)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x2764310;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                            "TryCreate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Uri>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Uri>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Uri>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Uri.GetComponents
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Uri::*)(System::UriComponents, System::UriFormat)>(&System::Uri::GetComponents)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x2760c0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                            "GetComponents",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::UriComponents>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::UriFormat>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Uri.IsWellFormedOriginalString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Uri::*)()>(&System::Uri::IsWellFormedOriginalString)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x27646a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                            "IsWellFormedOriginalString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Uri.IsWellFormedUriString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, System::UriKind)>(&System::Uri::IsWellFormedUriString)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2764b6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                            "IsWellFormedUriString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::UriKind>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Uri.InternalIsWellFormedOriginalString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Uri::*)()>(&System::Uri::InternalIsWellFormedOriginalString)> {
  constexpr static std::size_t size = 0x484;
  constexpr static std::size_t addrs = 0x27646e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                            "InternalIsWellFormedOriginalString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Uri.UnescapeDataString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&System::Uri::UnescapeDataString)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x2764c08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                            "UnescapeDataString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Uri.EscapeUnescapeIri
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Uri::*)(::StringW, int32_t, int32_t, System::UriComponents)>(&System::Uri::EscapeUnescapeIri)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x27627a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                            "EscapeUnescapeIri",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::UriComponents>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Uri._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Uri::*)(System::System__Uri__Flags, System::UriParser, ::StringW)>(&System::Uri::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2764db0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::System__Uri__Flags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::UriParser>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Uri.CreateHelper
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Uri (*)(::StringW, bool, System::UriKind, ByRef<System::UriFormatException>)>(&System::Uri::CreateHelper)> {
  constexpr static std::size_t size = 0x274;
  constexpr static std::size_t addrs = 0x2763fcc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                            "CreateHelper",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::UriKind>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::UriFormatException>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Uri.ResolveHelper
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Uri (*)(System::Uri, System::Uri, ByRef<::StringW>, ByRef<bool>, ByRef<System::UriFormatException>)>(&System::Uri::ResolveHelper)> {
  constexpr static std::size_t size = 0x4bc;
  constexpr static std::size_t addrs = 0x2759d18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                            "ResolveHelper",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Uri>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Uri>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::UriFormatException>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Uri.GetRelativeSerializationString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Uri::*)(System::UriFormat)>(&System::Uri::GetRelativeSerializationString)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x2764484;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                            "GetRelativeSerializationString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::UriFormat>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Uri.GetComponentsHelper
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Uri::*)(System::UriComponents, System::UriFormat)>(&System::Uri::GetComponentsHelper)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0x275dba4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                            "GetComponentsHelper",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::UriComponents>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::UriFormat>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Uri.IsBaseOf
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Uri::*)(System::Uri)>(&System::Uri::IsBaseOf)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x2764df0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                            "IsBaseOf",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Uri>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Uri.IsBaseOfHelper
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Uri::*)(System::Uri)>(&System::Uri::IsBaseOfHelper)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x2764ea8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                            "IsBaseOfHelper",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Uri>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Uri.CreateThisFromUri
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Uri::*)(System::Uri)>(&System::Uri::CreateThisFromUri)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x275a21c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                            "CreateThisFromUri",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Uri>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Runtime::Serialization::ISerializable
constexpr  System::Uri::operator System::Runtime::Serialization::ISerializable() const noexcept {
return System::Runtime::Serialization::ISerializable(::bs_hook::Il2CppWrapperType::instance);
}
 void System::Uri::__set_UriSchemeFile(::StringW value)  {
::cordl_internals::setStaticField<::StringW, "UriSchemeFile", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get>(std::forward<::StringW>(value));
}
 ::StringW System::Uri::__get_UriSchemeFile()  {
return ::cordl_internals::getStaticField<::StringW, "UriSchemeFile", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get>();
}
 void System::Uri::__set_UriSchemeFtp(::StringW value)  {
::cordl_internals::setStaticField<::StringW, "UriSchemeFtp", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get>(std::forward<::StringW>(value));
}
 ::StringW System::Uri::__get_UriSchemeFtp()  {
return ::cordl_internals::getStaticField<::StringW, "UriSchemeFtp", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get>();
}
 void System::Uri::__set_UriSchemeGopher(::StringW value)  {
::cordl_internals::setStaticField<::StringW, "UriSchemeGopher", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get>(std::forward<::StringW>(value));
}
 ::StringW System::Uri::__get_UriSchemeGopher()  {
return ::cordl_internals::getStaticField<::StringW, "UriSchemeGopher", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get>();
}
 void System::Uri::__set_UriSchemeHttp(::StringW value)  {
::cordl_internals::setStaticField<::StringW, "UriSchemeHttp", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get>(std::forward<::StringW>(value));
}
 ::StringW System::Uri::__get_UriSchemeHttp()  {
return ::cordl_internals::getStaticField<::StringW, "UriSchemeHttp", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get>();
}
 void System::Uri::__set_UriSchemeHttps(::StringW value)  {
::cordl_internals::setStaticField<::StringW, "UriSchemeHttps", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get>(std::forward<::StringW>(value));
}
 ::StringW System::Uri::__get_UriSchemeHttps()  {
return ::cordl_internals::getStaticField<::StringW, "UriSchemeHttps", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get>();
}
 void System::Uri::__set_UriSchemeWs(::StringW value)  {
::cordl_internals::setStaticField<::StringW, "UriSchemeWs", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get>(std::forward<::StringW>(value));
}
 ::StringW System::Uri::__get_UriSchemeWs()  {
return ::cordl_internals::getStaticField<::StringW, "UriSchemeWs", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get>();
}
 void System::Uri::__set_UriSchemeWss(::StringW value)  {
::cordl_internals::setStaticField<::StringW, "UriSchemeWss", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get>(std::forward<::StringW>(value));
}
 ::StringW System::Uri::__get_UriSchemeWss()  {
return ::cordl_internals::getStaticField<::StringW, "UriSchemeWss", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get>();
}
 void System::Uri::__set_UriSchemeMailto(::StringW value)  {
::cordl_internals::setStaticField<::StringW, "UriSchemeMailto", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get>(std::forward<::StringW>(value));
}
 ::StringW System::Uri::__get_UriSchemeMailto()  {
return ::cordl_internals::getStaticField<::StringW, "UriSchemeMailto", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get>();
}
 void System::Uri::__set_UriSchemeNews(::StringW value)  {
::cordl_internals::setStaticField<::StringW, "UriSchemeNews", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get>(std::forward<::StringW>(value));
}
 ::StringW System::Uri::__get_UriSchemeNews()  {
return ::cordl_internals::getStaticField<::StringW, "UriSchemeNews", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get>();
}
 void System::Uri::__set_UriSchemeNntp(::StringW value)  {
::cordl_internals::setStaticField<::StringW, "UriSchemeNntp", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get>(std::forward<::StringW>(value));
}
 ::StringW System::Uri::__get_UriSchemeNntp()  {
return ::cordl_internals::getStaticField<::StringW, "UriSchemeNntp", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get>();
}
 void System::Uri::__set_UriSchemeNetTcp(::StringW value)  {
::cordl_internals::setStaticField<::StringW, "UriSchemeNetTcp", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get>(std::forward<::StringW>(value));
}
 ::StringW System::Uri::__get_UriSchemeNetTcp()  {
return ::cordl_internals::getStaticField<::StringW, "UriSchemeNetTcp", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get>();
}
 void System::Uri::__set_UriSchemeNetPipe(::StringW value)  {
::cordl_internals::setStaticField<::StringW, "UriSchemeNetPipe", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get>(std::forward<::StringW>(value));
}
 ::StringW System::Uri::__get_UriSchemeNetPipe()  {
return ::cordl_internals::getStaticField<::StringW, "UriSchemeNetPipe", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get>();
}
 void System::Uri::__set_SchemeDelimiter(::StringW value)  {
::cordl_internals::setStaticField<::StringW, "SchemeDelimiter", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get>(std::forward<::StringW>(value));
}
 ::StringW System::Uri::__get_SchemeDelimiter()  {
return ::cordl_internals::getStaticField<::StringW, "SchemeDelimiter", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get>();
}
constexpr void System::Uri::__set_m_String(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW System::Uri::__get_m_String() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Uri::__set_m_originalUnicodeString(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW System::Uri::__get_m_originalUnicodeString() const {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Uri::__set_m_Syntax(System::UriParser value)  {
::cordl_internals::setInstanceField<System::UriParser, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::UriParser>(value));
}
constexpr System::UriParser System::Uri::__get_m_Syntax() const {
return ::cordl_internals::getInstanceField<System::UriParser, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Uri::__set_m_DnsSafeHost(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW System::Uri::__get_m_DnsSafeHost() const {
return ::cordl_internals::getInstanceField<::StringW, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Uri::__set_m_Flags(System::System__Uri__Flags value)  {
::cordl_internals::setInstanceField<System::System__Uri__Flags, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::System__Uri__Flags>(value));
}
constexpr System::System__Uri__Flags System::Uri::__get_m_Flags() const {
return ::cordl_internals::getInstanceField<System::System__Uri__Flags, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Uri::__set_m_Info(System::System__Uri__UriInfo value)  {
::cordl_internals::setInstanceField<System::System__Uri__UriInfo, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::System__Uri__UriInfo>(value));
}
constexpr System::System__Uri__UriInfo System::Uri::__get_m_Info() const {
return ::cordl_internals::getInstanceField<System::System__Uri__UriInfo, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Uri::__set_m_iriParsing(bool value)  {
::cordl_internals::setInstanceField<bool, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool System::Uri::__get_m_iriParsing() const {
return ::cordl_internals::getInstanceField<bool, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void System::Uri::__set_s_ConfigInitialized(bool value)  {
::cordl_internals::setStaticField<bool, "s_ConfigInitialized", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get>(std::forward<bool>(value));
}
 bool System::Uri::__get_s_ConfigInitialized()  {
return ::cordl_internals::getStaticField<bool, "s_ConfigInitialized", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get>();
}
 void System::Uri::__set_s_ConfigInitializing(bool value)  {
::cordl_internals::setStaticField<bool, "s_ConfigInitializing", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get>(std::forward<bool>(value));
}
 bool System::Uri::__get_s_ConfigInitializing()  {
return ::cordl_internals::getStaticField<bool, "s_ConfigInitializing", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get>();
}
 void System::Uri::__set_s_IdnScope(System::UriIdnScope value)  {
::cordl_internals::setStaticField<System::UriIdnScope, "s_IdnScope", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get>(std::forward<System::UriIdnScope>(value));
}
 System::UriIdnScope System::Uri::__get_s_IdnScope()  {
return ::cordl_internals::getStaticField<System::UriIdnScope, "s_IdnScope", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get>();
}
 void System::Uri::__set_s_IriParsing(bool value)  {
::cordl_internals::setStaticField<bool, "s_IriParsing", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get>(std::forward<bool>(value));
}
 bool System::Uri::__get_s_IriParsing()  {
return ::cordl_internals::getStaticField<bool, "s_IriParsing", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get>();
}
 void System::Uri::__set_useDotNetRelativeOrAbsolute(bool value)  {
::cordl_internals::setStaticField<bool, "useDotNetRelativeOrAbsolute", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get>(std::forward<bool>(value));
}
 bool System::Uri::__get_useDotNetRelativeOrAbsolute()  {
return ::cordl_internals::getStaticField<bool, "useDotNetRelativeOrAbsolute", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get>();
}
constexpr System::UriKind  System::Uri::DotNetRelativeOrAbsolute{300};
 void System::Uri::__set_IsWindowsFileSystem(bool value)  {
::cordl_internals::setStaticField<bool, "IsWindowsFileSystem", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get>(std::forward<bool>(value));
}
 bool System::Uri::__get_IsWindowsFileSystem()  {
return ::cordl_internals::getStaticField<bool, "IsWindowsFileSystem", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get>();
}
 void System::Uri::__set_s_initLock(::bs_hook::Il2CppWrapperType value)  {
::cordl_internals::setStaticField<::bs_hook::Il2CppWrapperType, "s_initLock", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get>(std::forward<::bs_hook::Il2CppWrapperType>(value));
}
 ::bs_hook::Il2CppWrapperType System::Uri::__get_s_initLock()  {
return ::cordl_internals::getStaticField<::bs_hook::Il2CppWrapperType, "s_initLock", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get>();
}
constexpr System::UriFormat  System::Uri::V1ToStringUnescape{32767};
 void System::Uri::__set_HexLowerChars(::ArrayW<char16_t> value)  {
::cordl_internals::setStaticField<::ArrayW<char16_t>, "HexLowerChars", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get>(std::forward<::ArrayW<char16_t>>(value));
}
 ::ArrayW<char16_t> System::Uri::__get_HexLowerChars()  {
return ::cordl_internals::getStaticField<::ArrayW<char16_t>, "HexLowerChars", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get>();
}
 void System::Uri::__set__WSchars(::ArrayW<char16_t> value)  {
::cordl_internals::setStaticField<::ArrayW<char16_t>, "_WSchars", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get>(std::forward<::ArrayW<char16_t>>(value));
}
 ::ArrayW<char16_t> System::Uri::__get__WSchars()  {
return ::cordl_internals::getStaticField<::ArrayW<char16_t>, "_WSchars", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get>();
}
 bool System::Uri::get_IsImplicitFile()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                            "get_IsImplicitFile",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Uri::get_IsUncOrDosPath()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                            "get_IsUncOrDosPath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Uri::get_IsDosPath()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                            "get_IsDosPath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Uri::get_IsUncPath()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                            "get_IsUncPath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 System::System__Uri__Flags System::Uri::get_HostType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                            "get_HostType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::System__Uri__Flags, false>(const_cast<void*>(instance), ___internal_method);
}
 System::UriParser System::Uri::get_Syntax()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                            "get_Syntax",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::UriParser, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Uri::get_IsNotAbsoluteUri()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                            "get_IsNotAbsoluteUri",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Uri::IriParsingStatic(System::UriParser syntax)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                            "IriParsingStatic",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::UriParser>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, syntax);
}
 bool System::Uri::get_AllowIdn()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                            "get_AllowIdn",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Uri::AllowIdnStatic(System::UriParser syntax, System::System__Uri__Flags flags)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                            "AllowIdnStatic",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::UriParser>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::System__Uri__Flags>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, syntax, flags);
}
 bool System::Uri::IsIntranet(::StringW schemeHost)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                            "IsIntranet",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, schemeHost);
}
 bool System::Uri::get_UserDrivenParsing()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                            "get_UserDrivenParsing",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Uri::SetUserDrivenParsing()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                            "SetUserDrivenParsing",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 uint16_t System::Uri::get_SecuredPathIndex()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                            "get_SecuredPathIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<uint16_t, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Uri::NotAny(System::System__Uri__Flags flags)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                            "NotAny",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::System__Uri__Flags>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, flags);
}
 bool System::Uri::InFact(System::System__Uri__Flags flags)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                            "InFact",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::System__Uri__Flags>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, flags);
}
 bool System::Uri::StaticNotAny(System::System__Uri__Flags allFlags, System::System__Uri__Flags checkFlags)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                            "StaticNotAny",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::System__Uri__Flags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::System__Uri__Flags>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, allFlags, checkFlags);
}
 bool System::Uri::StaticInFact(System::System__Uri__Flags allFlags, System::System__Uri__Flags checkFlags)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                            "StaticInFact",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::System__Uri__Flags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::System__Uri__Flags>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, allFlags, checkFlags);
}
 System::System__Uri__UriInfo System::Uri::EnsureUriInfo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                            "EnsureUriInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::System__Uri__UriInfo, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Uri::EnsureParseRemaining()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                            "EnsureParseRemaining",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Uri::EnsureHostString(bool allowDnsOptimization)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                            "EnsureHostString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, allowDnsOptimization);
}
// Ctor Parameters [CppParam { name: "uriString", ty: "::StringW", modifiers: "", def_value: None }]
 System::Uri::Uri(::StringW uriString)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<Uri>(uriString))) {}
 void System::Uri::_ctor(::StringW uriString)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, uriString);
}
// Ctor Parameters [CppParam { name: "uriString", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "uriKind", ty: "System::UriKind", modifiers: "", def_value: None }]
 System::Uri::Uri(::StringW uriString, System::UriKind uriKind)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<Uri>(uriString, uriKind))) {}
 void System::Uri::_ctor(::StringW uriString, System::UriKind uriKind)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::UriKind>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, uriString, uriKind);
}
// Ctor Parameters [CppParam { name: "baseUri", ty: "System::Uri", modifiers: "", def_value: None }, CppParam { name: "relativeUri", ty: "::StringW", modifiers: "", def_value: None }]
 System::Uri::Uri(System::Uri baseUri, ::StringW relativeUri)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<Uri>(baseUri, relativeUri))) {}
 void System::Uri::_ctor(System::Uri baseUri, ::StringW relativeUri)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Uri>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, baseUri, relativeUri);
}
 void System::Uri::CreateUri(System::Uri baseUri, ::StringW relativeUri, bool dontEscape)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                            "CreateUri",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Uri>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, baseUri, relativeUri, dontEscape);
}
// Ctor Parameters [CppParam { name: "baseUri", ty: "System::Uri", modifiers: "", def_value: None }, CppParam { name: "relativeUri", ty: "System::Uri", modifiers: "", def_value: None }]
 System::Uri::Uri(System::Uri baseUri, System::Uri relativeUri)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<Uri>(baseUri, relativeUri))) {}
 void System::Uri::_ctor(System::Uri baseUri, System::Uri relativeUri)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Uri>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Uri>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, baseUri, relativeUri);
}
 System::ParsingError System::Uri::GetCombinedString(System::Uri baseUri, ::StringW relativeStr, bool dontEscape, ByRef<::StringW> result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                            "GetCombinedString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Uri>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::ParsingError, false>(nullptr, ___internal_method, baseUri, relativeStr, dontEscape, result);
}
 System::UriFormatException System::Uri::GetException(System::ParsingError err)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                            "GetException",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ParsingError>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::UriFormatException, false>(nullptr, ___internal_method, err);
}
// Ctor Parameters [CppParam { name: "serializationInfo", ty: "System::Runtime::Serialization::SerializationInfo", modifiers: "", def_value: None }, CppParam { name: "streamingContext", ty: "System::Runtime::Serialization::StreamingContext", modifiers: "", def_value: None }]
 System::Uri::Uri(System::Runtime::Serialization::SerializationInfo serializationInfo, System::Runtime::Serialization::StreamingContext streamingContext)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<Uri>(serializationInfo, streamingContext))) {}
 void System::Uri::_ctor(System::Runtime::Serialization::SerializationInfo serializationInfo, System::Runtime::Serialization::StreamingContext streamingContext)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::SerializationInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::StreamingContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, serializationInfo, streamingContext);
}
 void System::Uri::System_Runtime_Serialization_ISerializable_GetObjectData(System::Runtime::Serialization::SerializationInfo serializationInfo, System::Runtime::Serialization::StreamingContext streamingContext)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                            "System.Runtime.Serialization.ISerializable.GetObjectData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::SerializationInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::StreamingContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, serializationInfo, streamingContext);
}
 void System::Uri::GetObjectData(System::Runtime::Serialization::SerializationInfo serializationInfo, System::Runtime::Serialization::StreamingContext streamingContext)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                            "GetObjectData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::SerializationInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::StreamingContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, serializationInfo, streamingContext);
}
 ::StringW System::Uri::get_AbsolutePath()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                            "get_AbsolutePath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW System::Uri::get_PrivateAbsolutePath()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                            "get_PrivateAbsolutePath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW System::Uri::get_AbsoluteUri()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                            "get_AbsoluteUri",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW System::Uri::get_LocalPath()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                            "get_LocalPath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW System::Uri::get_Authority()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                            "get_Authority",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 System::UriHostNameType System::Uri::get_HostNameType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                            "get_HostNameType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::UriHostNameType, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Uri::get_IsDefaultPort()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                            "get_IsDefaultPort",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Uri::get_IsFile()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                            "get_IsFile",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Uri::get_IsLoopback()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                            "get_IsLoopback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW System::Uri::get_PathAndQuery()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                            "get_PathAndQuery",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 ::ArrayW<::StringW> System::Uri::get_Segments()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                            "get_Segments",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Uri::get_IsUnc()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                            "get_IsUnc",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW System::Uri::get_Host()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                            "get_Host",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Uri::StaticIsFile(System::UriParser syntax)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                            "StaticIsFile",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::UriParser>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, syntax);
}
 ::bs_hook::Il2CppWrapperType System::Uri::get_InitializeLock()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                            "get_InitializeLock",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(nullptr, ___internal_method);
}
 void System::Uri::InitializeUriConfig()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                            "InitializeUriConfig",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
 ::StringW System::Uri::GetLocalPath()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                            "GetLocalPath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t System::Uri::get_Port()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                            "get_Port",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW System::Uri::get_Query()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                            "get_Query",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW System::Uri::get_Fragment()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                            "get_Fragment",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW System::Uri::get_Scheme()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                            "get_Scheme",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Uri::get_OriginalStringSwitched()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                            "get_OriginalStringSwitched",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW System::Uri::get_OriginalString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                            "get_OriginalString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW System::Uri::get_DnsSafeHost()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                            "get_DnsSafeHost",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Uri::get_IsAbsoluteUri()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                            "get_IsAbsoluteUri",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Uri::get_UserEscaped()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                            "get_UserEscaped",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW System::Uri::get_UserInfo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                            "get_UserInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Uri::IsGenDelim(char16_t ch)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                            "IsGenDelim",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, ch);
}
 bool System::Uri::CheckSchemeName(::StringW schemeName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                            "CheckSchemeName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, schemeName);
}
 bool System::Uri::IsHexDigit(char16_t character)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                            "IsHexDigit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, character);
}
 int32_t System::Uri::FromHex(char16_t digit)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                            "FromHex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, digit);
}
 int32_t System::Uri::GetHashCode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                            "GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW System::Uri::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Uri::op_Equality(System::Uri uri1, System::Uri uri2)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                            "op_Equality",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Uri>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Uri>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, uri1, uri2);
}
 bool System::Uri::op_Inequality(System::Uri uri1, System::Uri uri2)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                            "op_Inequality",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Uri>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Uri>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, uri1, uri2);
}
 bool System::Uri::Equals(::bs_hook::Il2CppWrapperType comparand)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, comparand);
}
 bool System::Uri::CheckForColonInFirstPathSegment(::StringW uriString)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                            "CheckForColonInFirstPathSegment",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, uriString);
}
 ::StringW System::Uri::InternalEscapeString(::StringW rawString)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                            "InternalEscapeString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, rawString);
}
 System::ParsingError System::Uri::ParseScheme(::StringW uriString, ByRef<System::System__Uri__Flags> flags, ByRef<System::UriParser> syntax)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                            "ParseScheme",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::System__Uri__Flags>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::UriParser>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::ParsingError, false>(nullptr, ___internal_method, uriString, flags, syntax);
}
 System::UriFormatException System::Uri::ParseMinimal()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                            "ParseMinimal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::UriFormatException, false>(const_cast<void*>(instance), ___internal_method);
}
 System::ParsingError System::Uri::PrivateParseMinimal()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                            "PrivateParseMinimal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::ParsingError, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Uri::PrivateParseMinimalIri(::StringW newHost, uint16_t idx)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                            "PrivateParseMinimalIri",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, newHost, idx);
}
 void System::Uri::CreateUriInfo(System::System__Uri__Flags cF)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                            "CreateUriInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::System__Uri__Flags>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, cF);
}
 void System::Uri::CreateHostString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                            "CreateHostString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW System::Uri::CreateHostStringHelper(::StringW str, uint16_t idx, uint16_t end, ByRef<System::System__Uri__Flags> flags, ByRef<::StringW> scopeId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                            "CreateHostStringHelper",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::System__Uri__Flags>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, str, idx, end, flags, scopeId);
}
 void System::Uri::GetHostViaCustomSyntax()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                            "GetHostViaCustomSyntax",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW System::Uri::GetParts(System::UriComponents uriParts, System::UriFormat formatAs)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                            "GetParts",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::UriComponents>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::UriFormat>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method, uriParts, formatAs);
}
 ::StringW System::Uri::GetEscapedParts(System::UriComponents uriParts)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                            "GetEscapedParts",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::UriComponents>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method, uriParts);
}
 ::StringW System::Uri::GetUnescapedParts(System::UriComponents uriParts, System::UriFormat formatAs)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                            "GetUnescapedParts",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::UriComponents>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::UriFormat>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method, uriParts, formatAs);
}
 ::StringW System::Uri::ReCreateParts(System::UriComponents parts, uint16_t nonCanonical, System::UriFormat formatAs)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                            "ReCreateParts",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::UriComponents>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::UriFormat>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method, parts, nonCanonical, formatAs);
}
 ::StringW System::Uri::GetUriPartsFromUserString(System::UriComponents uriParts)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                            "GetUriPartsFromUserString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::UriComponents>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method, uriParts);
}
 void System::Uri::ParseRemaining()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                            "ParseRemaining",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 uint16_t System::Uri::ParseSchemeCheckImplicitFile(void* uriString, uint16_t length, ByRef<System::ParsingError> err, ByRef<System::System__Uri__Flags> flags, ByRef<System::UriParser> syntax)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                            "ParseSchemeCheckImplicitFile",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::ParsingError>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::System__Uri__Flags>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::UriParser>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<uint16_t, false>(nullptr, ___internal_method, uriString, length, err, flags, syntax);
}
 bool System::Uri::CheckKnownSchemes(void* lptr, uint16_t nChars, ByRef<System::UriParser> syntax)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                            "CheckKnownSchemes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::UriParser>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, lptr, nChars, syntax);
}
 System::ParsingError System::Uri::CheckSchemeSyntax(void* ptr, uint16_t length, ByRef<System::UriParser> syntax)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                            "CheckSchemeSyntax",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::UriParser>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::ParsingError, false>(nullptr, ___internal_method, ptr, length, syntax);
}
 uint16_t System::Uri::CheckAuthorityHelper(void* pString, uint16_t idx, uint16_t length, ByRef<System::ParsingError> err, ByRef<System::System__Uri__Flags> flags, System::UriParser syntax, ByRef<::StringW> newHost)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                            "CheckAuthorityHelper",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::ParsingError>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::System__Uri__Flags>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::UriParser>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<uint16_t, false>(const_cast<void*>(instance), ___internal_method, pString, idx, length, err, flags, syntax, newHost);
}
 void System::Uri::CheckAuthorityHelperHandleDnsIri(void* pString, uint16_t start, int32_t end, int32_t startInput, bool iriParsing, bool hasUnicode, System::UriParser syntax, ::StringW userInfoString, ByRef<System::System__Uri__Flags> flags, ByRef<bool> justNormalized, ByRef<::StringW> newHost, ByRef<System::ParsingError> err)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                            "CheckAuthorityHelperHandleDnsIri",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::UriParser>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::System__Uri__Flags>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::ParsingError>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, pString, start, end, startInput, iriParsing, hasUnicode, syntax, userInfoString, flags, justNormalized, newHost, err);
}
 void System::Uri::CheckAuthorityHelperHandleAnyHostIri(void* pString, int32_t startInput, int32_t end, bool iriParsing, bool hasUnicode, System::UriParser syntax, ByRef<System::System__Uri__Flags> flags, ByRef<::StringW> newHost, ByRef<System::ParsingError> err)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                            "CheckAuthorityHelperHandleAnyHostIri",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::UriParser>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::System__Uri__Flags>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::ParsingError>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, pString, startInput, end, iriParsing, hasUnicode, syntax, flags, newHost, err);
}
 void System::Uri::FindEndOfComponent(::StringW input, ByRef<uint16_t> idx, uint16_t end, char16_t delim)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                            "FindEndOfComponent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, input, idx, end, delim);
}
 void System::Uri::FindEndOfComponent(void* str, ByRef<uint16_t> idx, uint16_t end, char16_t delim)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                            "FindEndOfComponent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, str, idx, end, delim);
}
 System::System__Uri__Check System::Uri::CheckCanonical(void* str, ByRef<uint16_t> idx, uint16_t end, char16_t delim)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                            "CheckCanonical",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::System__Uri__Check, false>(const_cast<void*>(instance), ___internal_method, str, idx, end, delim);
}
 ::ArrayW<char16_t> System::Uri::GetCanonicalPath(::ArrayW<char16_t> dest, ByRef<int32_t> pos, System::UriFormat formatAs)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                            "GetCanonicalPath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::UriFormat>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<char16_t>, false>(const_cast<void*>(instance), ___internal_method, dest, pos, formatAs);
}
 void System::Uri::UnescapeOnly(void* pch, int32_t start, ByRef<int32_t> end, char16_t ch1, char16_t ch2, char16_t ch3)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                            "UnescapeOnly",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, pch, start, end, ch1, ch2, ch3);
}
 ::ArrayW<char16_t> System::Uri::Compress(::ArrayW<char16_t> dest, uint16_t start, ByRef<int32_t> destLength, System::UriParser syntax)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                            "Compress",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::UriParser>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<char16_t>, false>(nullptr, ___internal_method, dest, start, destLength, syntax);
}
 int32_t System::Uri::CalculateCaseInsensitiveHashCode(::StringW text)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                            "CalculateCaseInsensitiveHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, text);
}
 ::StringW System::Uri::CombineUri(System::Uri basePart, ::StringW relativePart, System::UriFormat uriFormat)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                            "CombineUri",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Uri>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::UriFormat>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, basePart, relativePart, uriFormat);
}
 bool System::Uri::get_HasAuthority()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                            "get_HasAuthority",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Uri::IsLWS(char16_t ch)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                            "IsLWS",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, ch);
}
 bool System::Uri::IsAsciiLetter(char16_t character)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                            "IsAsciiLetter",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, character);
}
 bool System::Uri::IsAsciiLetterOrDigit(char16_t character)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                            "IsAsciiLetterOrDigit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, character);
}
 bool System::Uri::IsBidiControlCharacter(char16_t ch)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                            "IsBidiControlCharacter",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, ch);
}
 ::StringW System::Uri::StripBidiControlCharacter(void* strToClean, int32_t start, int32_t length)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                            "StripBidiControlCharacter",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, strToClean, start, length);
}
 void System::Uri::CreateThis(::StringW uri, bool dontEscape, System::UriKind uriKind)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                            "CreateThis",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::UriKind>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, uri, dontEscape, uriKind);
}
 void System::Uri::InitializeUri(System::ParsingError err, System::UriKind uriKind, ByRef<System::UriFormatException> e)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                            "InitializeUri",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ParsingError>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::UriKind>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::UriFormatException>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, err, uriKind, e);
}
 bool System::Uri::CheckForConfigLoad(::StringW data)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                            "CheckForConfigLoad",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, data);
}
 bool System::Uri::CheckForUnicode(::StringW data)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                            "CheckForUnicode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, data);
}
 bool System::Uri::CheckForEscapedUnreserved(::StringW data)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                            "CheckForEscapedUnreserved",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, data);
}
 bool System::Uri::TryCreate(::StringW uriString, System::UriKind uriKind, ByRef<System::Uri> result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                            "TryCreate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::UriKind>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Uri>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, uriString, uriKind, result);
}
 bool System::Uri::TryCreate(System::Uri baseUri, ::StringW relativeUri, ByRef<System::Uri> result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                            "TryCreate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Uri>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Uri>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, baseUri, relativeUri, result);
}
 bool System::Uri::TryCreate(System::Uri baseUri, System::Uri relativeUri, ByRef<System::Uri> result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                            "TryCreate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Uri>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Uri>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Uri>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, baseUri, relativeUri, result);
}
 ::StringW System::Uri::GetComponents(System::UriComponents components, System::UriFormat format)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                            "GetComponents",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::UriComponents>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::UriFormat>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method, components, format);
}
 bool System::Uri::IsWellFormedOriginalString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                            "IsWellFormedOriginalString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Uri::IsWellFormedUriString(::StringW uriString, System::UriKind uriKind)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                            "IsWellFormedUriString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::UriKind>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, uriString, uriKind);
}
 bool System::Uri::InternalIsWellFormedOriginalString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                            "InternalIsWellFormedOriginalString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW System::Uri::UnescapeDataString(::StringW stringToUnescape)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                            "UnescapeDataString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, stringToUnescape);
}
 ::StringW System::Uri::EscapeUnescapeIri(::StringW input, int32_t start, int32_t end, System::UriComponents component)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                            "EscapeUnescapeIri",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::UriComponents>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method, input, start, end, component);
}
// Ctor Parameters [CppParam { name: "flags", ty: "System::System__Uri__Flags", modifiers: "", def_value: None }, CppParam { name: "uriParser", ty: "System::UriParser", modifiers: "", def_value: None }, CppParam { name: "uri", ty: "::StringW", modifiers: "", def_value: None }]
 System::Uri::Uri(System::System__Uri__Flags flags, System::UriParser uriParser, ::StringW uri)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<Uri>(flags, uriParser, uri))) {}
 void System::Uri::_ctor(System::System__Uri__Flags flags, System::UriParser uriParser, ::StringW uri)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::System__Uri__Flags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::UriParser>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, flags, uriParser, uri);
}
 System::Uri System::Uri::CreateHelper(::StringW uriString, bool dontEscape, System::UriKind uriKind, ByRef<System::UriFormatException> e)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                            "CreateHelper",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::UriKind>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::UriFormatException>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Uri, false>(nullptr, ___internal_method, uriString, dontEscape, uriKind, e);
}
 System::Uri System::Uri::ResolveHelper(System::Uri baseUri, System::Uri relativeUri, ByRef<::StringW> newUriString, ByRef<bool> userEscaped, ByRef<System::UriFormatException> e)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                            "ResolveHelper",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Uri>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Uri>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::UriFormatException>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Uri, false>(nullptr, ___internal_method, baseUri, relativeUri, newUriString, userEscaped, e);
}
 ::StringW System::Uri::GetRelativeSerializationString(System::UriFormat format)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                            "GetRelativeSerializationString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::UriFormat>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method, format);
}
 ::StringW System::Uri::GetComponentsHelper(System::UriComponents uriComponents, System::UriFormat uriFormat)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                            "GetComponentsHelper",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::UriComponents>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::UriFormat>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method, uriComponents, uriFormat);
}
 bool System::Uri::IsBaseOf(System::Uri uri)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                            "IsBaseOf",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Uri>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, uri);
}
 bool System::Uri::IsBaseOfHelper(System::Uri uriLink)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                            "IsBaseOfHelper",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Uri>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, uriLink);
}
 void System::Uri::CreateThisFromUri(System::Uri otherUri)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Uri>::get(),
                            "CreateThisFromUri",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Uri>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, otherUri);
}
