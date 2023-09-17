#pragma once
#include "Org/BouncyCastle/X509/zzzz__X509ExtensionBase_impl.hpp"
namespace {
#include "Org/BouncyCastle/Ocsp/zzzz__Req_def.hpp"
#include "Org/BouncyCastle/Asn1/Ocsp/zzzz__Request_def.hpp"
#include "Org/BouncyCastle/Ocsp/zzzz__CertificateID_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__X509Extensions_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Ocsp::Req._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Ocsp::Req::*)(::Org::BouncyCastle::Asn1::Ocsp::Request)>(&::Org::BouncyCastle::Ocsp::Req::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x1013990;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Ocsp::Req>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Ocsp::Request>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Ocsp::Req.GetCertID
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Ocsp::CertificateID (::Org::BouncyCastle::Ocsp::Req::*)()>(&::Org::BouncyCastle::Ocsp::Req::GetCertID)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x10188f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Ocsp::Req>::get(),
                            "GetCertID",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Ocsp::Req.get_SingleRequestExtensions
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::X509::X509Extensions (::Org::BouncyCastle::Ocsp::Req::*)()>(&::Org::BouncyCastle::Ocsp::Req::get_SingleRequestExtensions)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x101895c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Ocsp::Req>::get(),
                            "get_SingleRequestExtensions",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Ocsp::Req.GetX509Extensions
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::X509::X509Extensions (::Org::BouncyCastle::Ocsp::Req::*)()>(&::Org::BouncyCastle::Ocsp::Req::GetX509Extensions)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x1018978;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Ocsp::Req),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Ocsp::Req>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
constexpr void ::Org::BouncyCastle::Ocsp::Req::__set_req(::Org::BouncyCastle::Asn1::Ocsp::Request value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Asn1::Ocsp::Request, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::Org::BouncyCastle::Asn1::Ocsp::Request>(value));
}
constexpr ::Org::BouncyCastle::Asn1::Ocsp::Request ::Org::BouncyCastle::Ocsp::Req::__get_req() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Asn1::Ocsp::Request, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "req", ty: "::Org::BouncyCastle::Asn1::Ocsp::Request", modifiers: "", def_value: None }]
 ::Org::BouncyCastle::Ocsp::Req::Req(::Org::BouncyCastle::Asn1::Ocsp::Request req)  : ::Org::BouncyCastle::X509::X509ExtensionBase(THROW_UNLESS(::il2cpp_utils::New<Req>(req))) {}
 void ::Org::BouncyCastle::Ocsp::Req::_ctor(::Org::BouncyCastle::Asn1::Ocsp::Request req)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Ocsp::Req>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Ocsp::Request>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, req);
}
 ::Org::BouncyCastle::Ocsp::CertificateID ::Org::BouncyCastle::Ocsp::Req::GetCertID()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Ocsp::Req>::get(),
                            "GetCertID",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Ocsp::CertificateID, false>(const_cast<void*>(instance), ___internal_method);
}
 ::Org::BouncyCastle::Asn1::X509::X509Extensions ::Org::BouncyCastle::Ocsp::Req::get_SingleRequestExtensions()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Ocsp::Req>::get(),
                            "get_SingleRequestExtensions",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::X509Extensions, false>(const_cast<void*>(instance), ___internal_method);
}
 ::Org::BouncyCastle::Asn1::X509::X509Extensions ::Org::BouncyCastle::Ocsp::Req::GetX509Extensions()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Ocsp::Req>::get(),
                            "GetX509Extensions",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::X509Extensions, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
