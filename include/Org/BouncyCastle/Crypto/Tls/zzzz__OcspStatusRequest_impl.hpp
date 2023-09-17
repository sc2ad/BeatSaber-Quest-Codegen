#pragma once
namespace {
#include "Org/BouncyCastle/Crypto/Tls/zzzz__OcspStatusRequest_def.hpp"
#include "System/Collections/zzzz__IList_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__X509Extensions_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::OcspStatusRequest._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::OcspStatusRequest::*)(::System::Collections::IList, ::Org::BouncyCastle::Asn1::X509::X509Extensions)>(&::Org::BouncyCastle::Crypto::Tls::OcspStatusRequest::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xf04f10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::OcspStatusRequest>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IList>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::X509Extensions>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::OcspStatusRequest.get_ResponderIDList
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IList (::Org::BouncyCastle::Crypto::Tls::OcspStatusRequest::*)()>(&::Org::BouncyCastle::Crypto::Tls::OcspStatusRequest::get_ResponderIDList)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xf04f3c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Crypto::Tls::OcspStatusRequest),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::OcspStatusRequest>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::OcspStatusRequest.get_RequestExtensions
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::X509::X509Extensions (::Org::BouncyCastle::Crypto::Tls::OcspStatusRequest::*)()>(&::Org::BouncyCastle::Crypto::Tls::OcspStatusRequest::get_RequestExtensions)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xf04f44;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Crypto::Tls::OcspStatusRequest),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::OcspStatusRequest>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::OcspStatusRequest.Encode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::OcspStatusRequest::*)(::System::IO::Stream)>(&::Org::BouncyCastle::Crypto::Tls::OcspStatusRequest::Encode)> {
  constexpr static std::size_t size = 0x3c0;
  constexpr static std::size_t addrs = 0xf04f4c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Crypto::Tls::OcspStatusRequest),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::OcspStatusRequest>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::OcspStatusRequest.Parse
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::Tls::OcspStatusRequest (*)(::System::IO::Stream)>(&::Org::BouncyCastle::Crypto::Tls::OcspStatusRequest::Parse)> {
  constexpr static std::size_t size = 0x2a8;
  constexpr static std::size_t addrs = 0xf0530c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::OcspStatusRequest>::get(),
                            "Parse",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void ::Org::BouncyCastle::Crypto::Tls::OcspStatusRequest::__set_mResponderIDList(::System::Collections::IList value)  {
::cordl_internals::setInstanceField<::System::Collections::IList, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::IList>(value));
}
constexpr ::System::Collections::IList ::Org::BouncyCastle::Crypto::Tls::OcspStatusRequest::__get_mResponderIDList() const {
return ::cordl_internals::getInstanceField<::System::Collections::IList, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Org::BouncyCastle::Crypto::Tls::OcspStatusRequest::__set_mRequestExtensions(::Org::BouncyCastle::Asn1::X509::X509Extensions value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Asn1::X509::X509Extensions, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::Org::BouncyCastle::Asn1::X509::X509Extensions>(value));
}
constexpr ::Org::BouncyCastle::Asn1::X509::X509Extensions ::Org::BouncyCastle::Crypto::Tls::OcspStatusRequest::__get_mRequestExtensions() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Asn1::X509::X509Extensions, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "responderIDList", ty: "::System::Collections::IList", modifiers: "", def_value: None }, CppParam { name: "requestExtensions", ty: "::Org::BouncyCastle::Asn1::X509::X509Extensions", modifiers: "", def_value: None }]
 ::Org::BouncyCastle::Crypto::Tls::OcspStatusRequest::OcspStatusRequest(::System::Collections::IList responderIDList, ::Org::BouncyCastle::Asn1::X509::X509Extensions requestExtensions)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<OcspStatusRequest>(responderIDList, requestExtensions))) {}
 void ::Org::BouncyCastle::Crypto::Tls::OcspStatusRequest::_ctor(::System::Collections::IList responderIDList, ::Org::BouncyCastle::Asn1::X509::X509Extensions requestExtensions)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::OcspStatusRequest>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IList>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::X509Extensions>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, responderIDList, requestExtensions);
}
 ::System::Collections::IList ::Org::BouncyCastle::Crypto::Tls::OcspStatusRequest::get_ResponderIDList()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::OcspStatusRequest>::get(),
                            "get_ResponderIDList",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IList, false>(const_cast<void*>(instance), ___internal_method);
}
 ::Org::BouncyCastle::Asn1::X509::X509Extensions ::Org::BouncyCastle::Crypto::Tls::OcspStatusRequest::get_RequestExtensions()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::OcspStatusRequest>::get(),
                            "get_RequestExtensions",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::X509Extensions, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::Org::BouncyCastle::Crypto::Tls::OcspStatusRequest::Encode(::System::IO::Stream output)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::OcspStatusRequest>::get(),
                            "Encode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, output);
}
 ::Org::BouncyCastle::Crypto::Tls::OcspStatusRequest ::Org::BouncyCastle::Crypto::Tls::OcspStatusRequest::Parse(::System::IO::Stream input)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::OcspStatusRequest>::get(),
                            "Parse",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Tls::OcspStatusRequest, false>(nullptr, ___internal_method, input);
}
} // end anonymous namespace
