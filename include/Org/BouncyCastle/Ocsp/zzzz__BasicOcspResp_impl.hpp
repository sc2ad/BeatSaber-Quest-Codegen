#pragma once
#include "Org/BouncyCastle/X509/zzzz__X509ExtensionBase_impl.hpp"
namespace {
#include "Org/BouncyCastle/Ocsp/zzzz__BasicOcspResp_def.hpp"
#include "Org/BouncyCastle/Asn1/Ocsp/zzzz__BasicOcspResponse_def.hpp"
#include "Org/BouncyCastle/Ocsp/zzzz__RespID_def.hpp"
#include "System/Collections/zzzz__IList_def.hpp"
#include "Org/BouncyCastle/Ocsp/zzzz__RespData_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "Org/BouncyCastle/X509/Store/zzzz__IX509Store_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__AsymmetricKeyParameter_def.hpp"
#include "Org/BouncyCastle/X509/zzzz__X509Certificate_def.hpp"
#include "Org/BouncyCastle/Asn1/Ocsp/zzzz__ResponseData_def.hpp"
#include "Org/BouncyCastle/Ocsp/zzzz__SingleResp_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__X509Extensions_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Ocsp::BasicOcspResp._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Ocsp::BasicOcspResp::*)(::Org::BouncyCastle::Asn1::Ocsp::BasicOcspResponse)>(&::Org::BouncyCastle::Ocsp::BasicOcspResp::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x100fb18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Ocsp::BasicOcspResp>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Ocsp::BasicOcspResponse>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Ocsp::BasicOcspResp.GetTbsResponseData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Ocsp::BasicOcspResp::*)()>(&::Org::BouncyCastle::Ocsp::BasicOcspResp::GetTbsResponseData)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x100fb50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Ocsp::BasicOcspResp>::get(),
                            "GetTbsResponseData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Ocsp::BasicOcspResp.get_Version
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Org::BouncyCastle::Ocsp::BasicOcspResp::*)()>(&::Org::BouncyCastle::Ocsp::BasicOcspResp::get_Version)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x100fca8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Ocsp::BasicOcspResp>::get(),
                            "get_Version",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Ocsp::BasicOcspResp.get_ResponderId
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Ocsp::RespID (::Org::BouncyCastle::Ocsp::BasicOcspResp::*)()>(&::Org::BouncyCastle::Ocsp::BasicOcspResp::get_ResponderId)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x100fcd4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Ocsp::BasicOcspResp>::get(),
                            "get_ResponderId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Ocsp::BasicOcspResp.get_ProducedAt
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::DateTime (::Org::BouncyCastle::Ocsp::BasicOcspResp::*)()>(&::Org::BouncyCastle::Ocsp::BasicOcspResp::get_ProducedAt)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x100fd6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Ocsp::BasicOcspResp>::get(),
                            "get_ProducedAt",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Ocsp::BasicOcspResp.get_Responses
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::Org::BouncyCastle::Ocsp::SingleResp> (::Org::BouncyCastle::Ocsp::BasicOcspResp::*)()>(&::Org::BouncyCastle::Ocsp::BasicOcspResp::get_Responses)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x100fd90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Ocsp::BasicOcspResp>::get(),
                            "get_Responses",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Ocsp::BasicOcspResp.get_ResponseExtensions
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::X509::X509Extensions (::Org::BouncyCastle::Ocsp::BasicOcspResp::*)()>(&::Org::BouncyCastle::Ocsp::BasicOcspResp::get_ResponseExtensions)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x100fef0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Ocsp::BasicOcspResp>::get(),
                            "get_ResponseExtensions",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Ocsp::BasicOcspResp.GetX509Extensions
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::X509::X509Extensions (::Org::BouncyCastle::Ocsp::BasicOcspResp::*)()>(&::Org::BouncyCastle::Ocsp::BasicOcspResp::GetX509Extensions)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x100ff0c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Ocsp::BasicOcspResp),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Ocsp::BasicOcspResp>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Ocsp::BasicOcspResp.get_SignatureAlgName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Org::BouncyCastle::Ocsp::BasicOcspResp::*)()>(&::Org::BouncyCastle::Ocsp::BasicOcspResp::get_SignatureAlgName)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x100ff28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Ocsp::BasicOcspResp>::get(),
                            "get_SignatureAlgName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Ocsp::BasicOcspResp.get_SignatureAlgOid
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Org::BouncyCastle::Ocsp::BasicOcspResp::*)()>(&::Org::BouncyCastle::Ocsp::BasicOcspResp::get_SignatureAlgOid)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x101013c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Ocsp::BasicOcspResp>::get(),
                            "get_SignatureAlgOid",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Ocsp::BasicOcspResp.GetResponseData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Ocsp::RespData (::Org::BouncyCastle::Ocsp::BasicOcspResp::*)()>(&::Org::BouncyCastle::Ocsp::BasicOcspResp::GetResponseData)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x1010170;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Ocsp::BasicOcspResp>::get(),
                            "GetResponseData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Ocsp::BasicOcspResp.GetSignature
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Ocsp::BasicOcspResp::*)()>(&::Org::BouncyCastle::Ocsp::BasicOcspResp::GetSignature)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x1010200;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Ocsp::BasicOcspResp>::get(),
                            "GetSignature",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Ocsp::BasicOcspResp.GetCertList
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IList (::Org::BouncyCastle::Ocsp::BasicOcspResp::*)()>(&::Org::BouncyCastle::Ocsp::BasicOcspResp::GetCertList)> {
  constexpr static std::size_t size = 0x558;
  constexpr static std::size_t addrs = 0x101021c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Ocsp::BasicOcspResp>::get(),
                            "GetCertList",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Ocsp::BasicOcspResp.GetCerts
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::Org::BouncyCastle::X509::X509Certificate> (::Org::BouncyCastle::Ocsp::BasicOcspResp::*)()>(&::Org::BouncyCastle::Ocsp::BasicOcspResp::GetCerts)> {
  constexpr static std::size_t size = 0x284;
  constexpr static std::size_t addrs = 0x1010774;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Ocsp::BasicOcspResp>::get(),
                            "GetCerts",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Ocsp::BasicOcspResp.GetCertificates
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::X509::Store::IX509Store (::Org::BouncyCastle::Ocsp::BasicOcspResp::*)(::StringW)>(&::Org::BouncyCastle::Ocsp::BasicOcspResp::GetCertificates)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x10109f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Ocsp::BasicOcspResp>::get(),
                            "GetCertificates",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Ocsp::BasicOcspResp.Verify
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Org::BouncyCastle::Ocsp::BasicOcspResp::*)(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter)>(&::Org::BouncyCastle::Ocsp::BasicOcspResp::Verify)> {
  constexpr static std::size_t size = 0x2e8;
  constexpr static std::size_t addrs = 0x1010b74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Ocsp::BasicOcspResp>::get(),
                            "Verify",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Ocsp::BasicOcspResp.GetEncoded
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Ocsp::BasicOcspResp::*)()>(&::Org::BouncyCastle::Ocsp::BasicOcspResp::GetEncoded)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x1010e5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Ocsp::BasicOcspResp>::get(),
                            "GetEncoded",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Ocsp::BasicOcspResp.Equals
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Org::BouncyCastle::Ocsp::BasicOcspResp::*)(::bs_hook::Il2CppWrapperType)>(&::Org::BouncyCastle::Ocsp::BasicOcspResp::Equals)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1010e78;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Ocsp::BasicOcspResp),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Ocsp::BasicOcspResp>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Ocsp::BasicOcspResp.GetHashCode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Org::BouncyCastle::Ocsp::BasicOcspResp::*)()>(&::Org::BouncyCastle::Ocsp::BasicOcspResp::GetHashCode)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x1010f28;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Ocsp::BasicOcspResp),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Ocsp::BasicOcspResp>::get(),
                                  2
                                ));
    return ___internal_method;
  }
};
constexpr void ::Org::BouncyCastle::Ocsp::BasicOcspResp::__set_resp(::Org::BouncyCastle::Asn1::Ocsp::BasicOcspResponse value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Asn1::Ocsp::BasicOcspResponse, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::Org::BouncyCastle::Asn1::Ocsp::BasicOcspResponse>(value));
}
constexpr ::Org::BouncyCastle::Asn1::Ocsp::BasicOcspResponse ::Org::BouncyCastle::Ocsp::BasicOcspResp::__get_resp() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Asn1::Ocsp::BasicOcspResponse, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Org::BouncyCastle::Ocsp::BasicOcspResp::__set_data(::Org::BouncyCastle::Asn1::Ocsp::ResponseData value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Asn1::Ocsp::ResponseData, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::Org::BouncyCastle::Asn1::Ocsp::ResponseData>(value));
}
constexpr ::Org::BouncyCastle::Asn1::Ocsp::ResponseData ::Org::BouncyCastle::Ocsp::BasicOcspResp::__get_data() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Asn1::Ocsp::ResponseData, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "resp", ty: "::Org::BouncyCastle::Asn1::Ocsp::BasicOcspResponse", modifiers: "", def_value: None }]
 ::Org::BouncyCastle::Ocsp::BasicOcspResp::BasicOcspResp(::Org::BouncyCastle::Asn1::Ocsp::BasicOcspResponse resp)  : ::Org::BouncyCastle::X509::X509ExtensionBase(THROW_UNLESS(::il2cpp_utils::New<BasicOcspResp>(resp))) {}
 void ::Org::BouncyCastle::Ocsp::BasicOcspResp::_ctor(::Org::BouncyCastle::Asn1::Ocsp::BasicOcspResponse resp)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Ocsp::BasicOcspResp>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Ocsp::BasicOcspResponse>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, resp);
}
 ::ArrayW<uint8_t> ::Org::BouncyCastle::Ocsp::BasicOcspResp::GetTbsResponseData()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Ocsp::BasicOcspResp>::get(),
                            "GetTbsResponseData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t ::Org::BouncyCastle::Ocsp::BasicOcspResp::get_Version()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Ocsp::BasicOcspResp>::get(),
                            "get_Version",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 ::Org::BouncyCastle::Ocsp::RespID ::Org::BouncyCastle::Ocsp::BasicOcspResp::get_ResponderId()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Ocsp::BasicOcspResp>::get(),
                            "get_ResponderId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Ocsp::RespID, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::DateTime ::Org::BouncyCastle::Ocsp::BasicOcspResp::get_ProducedAt()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Ocsp::BasicOcspResp>::get(),
                            "get_ProducedAt",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::DateTime, false>(const_cast<void*>(instance), ___internal_method);
}
 ::ArrayW<::Org::BouncyCastle::Ocsp::SingleResp> ::Org::BouncyCastle::Ocsp::BasicOcspResp::get_Responses()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Ocsp::BasicOcspResp>::get(),
                            "get_Responses",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::Org::BouncyCastle::Ocsp::SingleResp>, false>(const_cast<void*>(instance), ___internal_method);
}
 ::Org::BouncyCastle::Asn1::X509::X509Extensions ::Org::BouncyCastle::Ocsp::BasicOcspResp::get_ResponseExtensions()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Ocsp::BasicOcspResp>::get(),
                            "get_ResponseExtensions",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::X509Extensions, false>(const_cast<void*>(instance), ___internal_method);
}
 ::Org::BouncyCastle::Asn1::X509::X509Extensions ::Org::BouncyCastle::Ocsp::BasicOcspResp::GetX509Extensions()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Ocsp::BasicOcspResp>::get(),
                            "GetX509Extensions",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::X509Extensions, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW ::Org::BouncyCastle::Ocsp::BasicOcspResp::get_SignatureAlgName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Ocsp::BasicOcspResp>::get(),
                            "get_SignatureAlgName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW ::Org::BouncyCastle::Ocsp::BasicOcspResp::get_SignatureAlgOid()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Ocsp::BasicOcspResp>::get(),
                            "get_SignatureAlgOid",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 ::Org::BouncyCastle::Ocsp::RespData ::Org::BouncyCastle::Ocsp::BasicOcspResp::GetResponseData()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Ocsp::BasicOcspResp>::get(),
                            "GetResponseData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Ocsp::RespData, false>(const_cast<void*>(instance), ___internal_method);
}
 ::ArrayW<uint8_t> ::Org::BouncyCastle::Ocsp::BasicOcspResp::GetSignature()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Ocsp::BasicOcspResp>::get(),
                            "GetSignature",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::Collections::IList ::Org::BouncyCastle::Ocsp::BasicOcspResp::GetCertList()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Ocsp::BasicOcspResp>::get(),
                            "GetCertList",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IList, false>(const_cast<void*>(instance), ___internal_method);
}
 ::ArrayW<::Org::BouncyCastle::X509::X509Certificate> ::Org::BouncyCastle::Ocsp::BasicOcspResp::GetCerts()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Ocsp::BasicOcspResp>::get(),
                            "GetCerts",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::Org::BouncyCastle::X509::X509Certificate>, false>(const_cast<void*>(instance), ___internal_method);
}
 ::Org::BouncyCastle::X509::Store::IX509Store ::Org::BouncyCastle::Ocsp::BasicOcspResp::GetCertificates(::StringW type)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Ocsp::BasicOcspResp>::get(),
                            "GetCertificates",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::X509::Store::IX509Store, false>(const_cast<void*>(instance), ___internal_method, type);
}
 bool ::Org::BouncyCastle::Ocsp::BasicOcspResp::Verify(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter publicKey)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Ocsp::BasicOcspResp>::get(),
                            "Verify",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, publicKey);
}
 ::ArrayW<uint8_t> ::Org::BouncyCastle::Ocsp::BasicOcspResp::GetEncoded()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Ocsp::BasicOcspResp>::get(),
                            "GetEncoded",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::Org::BouncyCastle::Ocsp::BasicOcspResp::Equals(::bs_hook::Il2CppWrapperType obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Ocsp::BasicOcspResp>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, obj);
}
 int32_t ::Org::BouncyCastle::Ocsp::BasicOcspResp::GetHashCode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Ocsp::BasicOcspResp>::get(),
                            "GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
