#pragma once
#include "Org/BouncyCastle/Ocsp/zzzz__BasicOcspRespGenerator_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "Org/BouncyCastle/Ocsp/zzzz__BasicOcspResp_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ISignatureFactory_def.hpp"
#include "Org/BouncyCastle/Ocsp/zzzz__CertificateStatus_def.hpp"
#include "System/Collections/zzzz__IList_def.hpp"
#include "Org/BouncyCastle/Ocsp/zzzz__RespID_def.hpp"
#include "Org/BouncyCastle/X509/zzzz__X509Certificate_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__AsymmetricKeyParameter_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__X509Extensions_def.hpp"
#include "Org/BouncyCastle/Ocsp/zzzz__CertificateID_def.hpp"
#include "Org/BouncyCastle/Ocsp/zzzz__BasicOcspRespGenerator_def.hpp"
#include "Org/BouncyCastle/Security/zzzz__SecureRandom_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerGeneralizedTime_def.hpp"
#include "Org/BouncyCastle/Asn1/Ocsp/zzzz__SingleResponse_def.hpp"
#include "Org/BouncyCastle/Asn1/Ocsp/zzzz__CertStatus_def.hpp"
//  Writing Method size for method: Org::BouncyCastle::Ocsp::Org__BouncyCastle__Ocsp__BasicOcspRespGenerator__ResponseObject._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Ocsp::Org__BouncyCastle__Ocsp__BasicOcspRespGenerator__ResponseObject::*)(Org::BouncyCastle::Ocsp::CertificateID, Org::BouncyCastle::Ocsp::CertificateStatus, System::DateTime, Org::BouncyCastle::Asn1::X509::X509Extensions)>(&Org::BouncyCastle::Ocsp::Org__BouncyCastle__Ocsp__BasicOcspRespGenerator__ResponseObject::_ctor)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x1011398;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Ocsp::Org__BouncyCastle__Ocsp__BasicOcspRespGenerator__ResponseObject>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Ocsp::CertificateID>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Ocsp::CertificateStatus>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::DateTime>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::X509::X509Extensions>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Ocsp::Org__BouncyCastle__Ocsp__BasicOcspRespGenerator__ResponseObject._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Ocsp::Org__BouncyCastle__Ocsp__BasicOcspRespGenerator__ResponseObject::*)(Org::BouncyCastle::Ocsp::CertificateID, Org::BouncyCastle::Ocsp::CertificateStatus, System::DateTime, System::DateTime, Org::BouncyCastle::Asn1::X509::X509Extensions)>(&Org::BouncyCastle::Ocsp::Org__BouncyCastle__Ocsp__BasicOcspRespGenerator__ResponseObject::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1011698;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Ocsp::Org__BouncyCastle__Ocsp__BasicOcspRespGenerator__ResponseObject>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Ocsp::CertificateID>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Ocsp::CertificateStatus>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::DateTime>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::DateTime>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::X509::X509Extensions>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Ocsp::Org__BouncyCastle__Ocsp__BasicOcspRespGenerator__ResponseObject._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Ocsp::Org__BouncyCastle__Ocsp__BasicOcspRespGenerator__ResponseObject::*)(Org::BouncyCastle::Ocsp::CertificateID, Org::BouncyCastle::Ocsp::CertificateStatus, Org::BouncyCastle::Asn1::DerGeneralizedTime, Org::BouncyCastle::Asn1::DerGeneralizedTime, Org::BouncyCastle::Asn1::X509::X509Extensions)>(&Org::BouncyCastle::Ocsp::Org__BouncyCastle__Ocsp__BasicOcspRespGenerator__ResponseObject::_ctor)> {
  constexpr static std::size_t size = 0x264;
  constexpr static std::size_t addrs = 0x1012924;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Ocsp::Org__BouncyCastle__Ocsp__BasicOcspRespGenerator__ResponseObject>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Ocsp::CertificateID>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Ocsp::CertificateStatus>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::DerGeneralizedTime>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::DerGeneralizedTime>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::X509::X509Extensions>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Ocsp::Org__BouncyCastle__Ocsp__BasicOcspRespGenerator__ResponseObject.ToResponse
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::Ocsp::SingleResponse (Org::BouncyCastle::Ocsp::Org__BouncyCastle__Ocsp__BasicOcspRespGenerator__ResponseObject::*)()>(&Org::BouncyCastle::Ocsp::Org__BouncyCastle__Ocsp__BasicOcspRespGenerator__ResponseObject::ToResponse)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x101247c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Ocsp::Org__BouncyCastle__Ocsp__BasicOcspRespGenerator__ResponseObject>::get(),
                            "ToResponse",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void Org::BouncyCastle::Ocsp::Org__BouncyCastle__Ocsp__BasicOcspRespGenerator__ResponseObject::__set_certId(Org::BouncyCastle::Ocsp::CertificateID value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Ocsp::CertificateID, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Ocsp::CertificateID>(value));
}
constexpr Org::BouncyCastle::Ocsp::CertificateID Org::BouncyCastle::Ocsp::Org__BouncyCastle__Ocsp__BasicOcspRespGenerator__ResponseObject::__get_certId() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Ocsp::CertificateID, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Ocsp::Org__BouncyCastle__Ocsp__BasicOcspRespGenerator__ResponseObject::__set_certStatus(Org::BouncyCastle::Asn1::Ocsp::CertStatus value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Asn1::Ocsp::CertStatus, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Asn1::Ocsp::CertStatus>(value));
}
constexpr Org::BouncyCastle::Asn1::Ocsp::CertStatus Org::BouncyCastle::Ocsp::Org__BouncyCastle__Ocsp__BasicOcspRespGenerator__ResponseObject::__get_certStatus() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Asn1::Ocsp::CertStatus, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Ocsp::Org__BouncyCastle__Ocsp__BasicOcspRespGenerator__ResponseObject::__set_thisUpdate(Org::BouncyCastle::Asn1::DerGeneralizedTime value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Asn1::DerGeneralizedTime, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Asn1::DerGeneralizedTime>(value));
}
constexpr Org::BouncyCastle::Asn1::DerGeneralizedTime Org::BouncyCastle::Ocsp::Org__BouncyCastle__Ocsp__BasicOcspRespGenerator__ResponseObject::__get_thisUpdate() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Asn1::DerGeneralizedTime, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Ocsp::Org__BouncyCastle__Ocsp__BasicOcspRespGenerator__ResponseObject::__set_nextUpdate(Org::BouncyCastle::Asn1::DerGeneralizedTime value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Asn1::DerGeneralizedTime, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Asn1::DerGeneralizedTime>(value));
}
constexpr Org::BouncyCastle::Asn1::DerGeneralizedTime Org::BouncyCastle::Ocsp::Org__BouncyCastle__Ocsp__BasicOcspRespGenerator__ResponseObject::__get_nextUpdate() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Asn1::DerGeneralizedTime, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Ocsp::Org__BouncyCastle__Ocsp__BasicOcspRespGenerator__ResponseObject::__set_extensions(Org::BouncyCastle::Asn1::X509::X509Extensions value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Asn1::X509::X509Extensions, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Asn1::X509::X509Extensions>(value));
}
constexpr Org::BouncyCastle::Asn1::X509::X509Extensions Org::BouncyCastle::Ocsp::Org__BouncyCastle__Ocsp__BasicOcspRespGenerator__ResponseObject::__get_extensions() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Asn1::X509::X509Extensions, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
 Org::BouncyCastle::Ocsp::Org__BouncyCastle__Ocsp__BasicOcspRespGenerator__ResponseObject Org::BouncyCastle::Ocsp::Org__BouncyCastle__Ocsp__BasicOcspRespGenerator__ResponseObject::New_ctor(Org::BouncyCastle::Ocsp::CertificateID certId, Org::BouncyCastle::Ocsp::CertificateStatus certStatus, System::DateTime thisUpdate, Org::BouncyCastle::Asn1::X509::X509Extensions extensions)  {
Org::BouncyCastle::Ocsp::Org__BouncyCastle__Ocsp__BasicOcspRespGenerator__ResponseObject o{THROW_UNLESS(::il2cpp_utils::New<Org::BouncyCastle::Ocsp::Org__BouncyCastle__Ocsp__BasicOcspRespGenerator__ResponseObject>(certId, certStatus, thisUpdate, extensions))};
return o;
}
 void Org::BouncyCastle::Ocsp::Org__BouncyCastle__Ocsp__BasicOcspRespGenerator__ResponseObject::_ctor(Org::BouncyCastle::Ocsp::CertificateID certId, Org::BouncyCastle::Ocsp::CertificateStatus certStatus, System::DateTime thisUpdate, Org::BouncyCastle::Asn1::X509::X509Extensions extensions)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Ocsp::Org__BouncyCastle__Ocsp__BasicOcspRespGenerator__ResponseObject>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Ocsp::CertificateID>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Ocsp::CertificateStatus>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::DateTime>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::X509::X509Extensions>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, certId, certStatus, thisUpdate, extensions);
}
 Org::BouncyCastle::Ocsp::Org__BouncyCastle__Ocsp__BasicOcspRespGenerator__ResponseObject Org::BouncyCastle::Ocsp::Org__BouncyCastle__Ocsp__BasicOcspRespGenerator__ResponseObject::New_ctor(Org::BouncyCastle::Ocsp::CertificateID certId, Org::BouncyCastle::Ocsp::CertificateStatus certStatus, System::DateTime thisUpdate, System::DateTime nextUpdate, Org::BouncyCastle::Asn1::X509::X509Extensions extensions)  {
Org::BouncyCastle::Ocsp::Org__BouncyCastle__Ocsp__BasicOcspRespGenerator__ResponseObject o{THROW_UNLESS(::il2cpp_utils::New<Org::BouncyCastle::Ocsp::Org__BouncyCastle__Ocsp__BasicOcspRespGenerator__ResponseObject>(certId, certStatus, thisUpdate, nextUpdate, extensions))};
return o;
}
 void Org::BouncyCastle::Ocsp::Org__BouncyCastle__Ocsp__BasicOcspRespGenerator__ResponseObject::_ctor(Org::BouncyCastle::Ocsp::CertificateID certId, Org::BouncyCastle::Ocsp::CertificateStatus certStatus, System::DateTime thisUpdate, System::DateTime nextUpdate, Org::BouncyCastle::Asn1::X509::X509Extensions extensions)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Ocsp::Org__BouncyCastle__Ocsp__BasicOcspRespGenerator__ResponseObject>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Ocsp::CertificateID>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Ocsp::CertificateStatus>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::DateTime>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::DateTime>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::X509::X509Extensions>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, certId, certStatus, thisUpdate, nextUpdate, extensions);
}
 Org::BouncyCastle::Ocsp::Org__BouncyCastle__Ocsp__BasicOcspRespGenerator__ResponseObject Org::BouncyCastle::Ocsp::Org__BouncyCastle__Ocsp__BasicOcspRespGenerator__ResponseObject::New_ctor(Org::BouncyCastle::Ocsp::CertificateID certId, Org::BouncyCastle::Ocsp::CertificateStatus certStatus, Org::BouncyCastle::Asn1::DerGeneralizedTime thisUpdate, Org::BouncyCastle::Asn1::DerGeneralizedTime nextUpdate, Org::BouncyCastle::Asn1::X509::X509Extensions extensions)  {
Org::BouncyCastle::Ocsp::Org__BouncyCastle__Ocsp__BasicOcspRespGenerator__ResponseObject o{THROW_UNLESS(::il2cpp_utils::New<Org::BouncyCastle::Ocsp::Org__BouncyCastle__Ocsp__BasicOcspRespGenerator__ResponseObject>(certId, certStatus, thisUpdate, nextUpdate, extensions))};
return o;
}
 void Org::BouncyCastle::Ocsp::Org__BouncyCastle__Ocsp__BasicOcspRespGenerator__ResponseObject::_ctor(Org::BouncyCastle::Ocsp::CertificateID certId, Org::BouncyCastle::Ocsp::CertificateStatus certStatus, Org::BouncyCastle::Asn1::DerGeneralizedTime thisUpdate, Org::BouncyCastle::Asn1::DerGeneralizedTime nextUpdate, Org::BouncyCastle::Asn1::X509::X509Extensions extensions)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Ocsp::Org__BouncyCastle__Ocsp__BasicOcspRespGenerator__ResponseObject>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Ocsp::CertificateID>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Ocsp::CertificateStatus>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::DerGeneralizedTime>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::DerGeneralizedTime>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::X509::X509Extensions>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, certId, certStatus, thisUpdate, nextUpdate, extensions);
}
 Org::BouncyCastle::Asn1::Ocsp::SingleResponse Org::BouncyCastle::Ocsp::Org__BouncyCastle__Ocsp__BasicOcspRespGenerator__ResponseObject::ToResponse()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Ocsp::Org__BouncyCastle__Ocsp__BasicOcspRespGenerator__ResponseObject>::get(),
                            "ToResponse",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Asn1::Ocsp::SingleResponse, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: Org::BouncyCastle::Ocsp::BasicOcspRespGenerator._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Ocsp::BasicOcspRespGenerator::*)(Org::BouncyCastle::Ocsp::RespID)>(&Org::BouncyCastle::Ocsp::BasicOcspRespGenerator::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x1010f44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Ocsp::BasicOcspRespGenerator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Ocsp::RespID>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Ocsp::BasicOcspRespGenerator._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Ocsp::BasicOcspRespGenerator::*)(Org::BouncyCastle::Crypto::AsymmetricKeyParameter)>(&Org::BouncyCastle::Ocsp::BasicOcspRespGenerator::_ctor)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x1010fbc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Ocsp::BasicOcspRespGenerator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::AsymmetricKeyParameter>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Ocsp::BasicOcspRespGenerator.AddResponse
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Ocsp::BasicOcspRespGenerator::*)(Org::BouncyCastle::Ocsp::CertificateID, Org::BouncyCastle::Ocsp::CertificateStatus)>(&Org::BouncyCastle::Ocsp::BasicOcspRespGenerator::AddResponse)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x1011274;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Ocsp::BasicOcspRespGenerator>::get(),
                            "AddResponse",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Ocsp::CertificateID>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Ocsp::CertificateStatus>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Ocsp::BasicOcspRespGenerator.AddResponse
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Ocsp::BasicOcspRespGenerator::*)(Org::BouncyCastle::Ocsp::CertificateID, Org::BouncyCastle::Ocsp::CertificateStatus, Org::BouncyCastle::Asn1::X509::X509Extensions)>(&Org::BouncyCastle::Ocsp::BasicOcspRespGenerator::AddResponse)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x1011430;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Ocsp::BasicOcspRespGenerator>::get(),
                            "AddResponse",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Ocsp::CertificateID>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Ocsp::CertificateStatus>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::X509::X509Extensions>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Ocsp::BasicOcspRespGenerator.AddResponse
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Ocsp::BasicOcspRespGenerator::*)(Org::BouncyCastle::Ocsp::CertificateID, Org::BouncyCastle::Ocsp::CertificateStatus, System::DateTime, Org::BouncyCastle::Asn1::X509::X509Extensions)>(&Org::BouncyCastle::Ocsp::BasicOcspRespGenerator::AddResponse)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x1011560;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Ocsp::BasicOcspRespGenerator>::get(),
                            "AddResponse",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Ocsp::CertificateID>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Ocsp::CertificateStatus>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::DateTime>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::X509::X509Extensions>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Ocsp::BasicOcspRespGenerator.AddResponse
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Ocsp::BasicOcspRespGenerator::*)(Org::BouncyCastle::Ocsp::CertificateID, Org::BouncyCastle::Ocsp::CertificateStatus, System::DateTime, System::DateTime, Org::BouncyCastle::Asn1::X509::X509Extensions)>(&Org::BouncyCastle::Ocsp::BasicOcspRespGenerator::AddResponse)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x1011758;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Ocsp::BasicOcspRespGenerator>::get(),
                            "AddResponse",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Ocsp::CertificateID>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Ocsp::CertificateStatus>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::DateTime>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::DateTime>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::X509::X509Extensions>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Ocsp::BasicOcspRespGenerator.SetResponseExtensions
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Ocsp::BasicOcspRespGenerator::*)(Org::BouncyCastle::Asn1::X509::X509Extensions)>(&Org::BouncyCastle::Ocsp::BasicOcspRespGenerator::SetResponseExtensions)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1011868;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Ocsp::BasicOcspRespGenerator>::get(),
                            "SetResponseExtensions",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::X509::X509Extensions>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Ocsp::BasicOcspRespGenerator.GenerateResponse
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Ocsp::BasicOcspResp (Org::BouncyCastle::Ocsp::BasicOcspRespGenerator::*)(Org::BouncyCastle::Crypto::ISignatureFactory, ::ArrayW<Org::BouncyCastle::X509::X509Certificate>, System::DateTime)>(&Org::BouncyCastle::Ocsp::BasicOcspRespGenerator::GenerateResponse)> {
  constexpr static std::size_t size = 0xc0c;
  constexpr static std::size_t addrs = 0x1011870;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Ocsp::BasicOcspRespGenerator>::get(),
                            "GenerateResponse",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::ISignatureFactory>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<Org::BouncyCastle::X509::X509Certificate>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::DateTime>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Ocsp::BasicOcspRespGenerator.Generate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Ocsp::BasicOcspResp (Org::BouncyCastle::Ocsp::BasicOcspRespGenerator::*)(::StringW, Org::BouncyCastle::Crypto::AsymmetricKeyParameter, ::ArrayW<Org::BouncyCastle::X509::X509Certificate>, System::DateTime)>(&Org::BouncyCastle::Ocsp::BasicOcspRespGenerator::Generate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1012680;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Ocsp::BasicOcspRespGenerator>::get(),
                            "Generate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::AsymmetricKeyParameter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<Org::BouncyCastle::X509::X509Certificate>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::DateTime>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Ocsp::BasicOcspRespGenerator.Generate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Ocsp::BasicOcspResp (Org::BouncyCastle::Ocsp::BasicOcspRespGenerator::*)(::StringW, Org::BouncyCastle::Crypto::AsymmetricKeyParameter, ::ArrayW<Org::BouncyCastle::X509::X509Certificate>, System::DateTime, Org::BouncyCastle::Security::SecureRandom)>(&Org::BouncyCastle::Ocsp::BasicOcspRespGenerator::Generate)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x1012688;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Ocsp::BasicOcspRespGenerator>::get(),
                            "Generate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::AsymmetricKeyParameter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<Org::BouncyCastle::X509::X509Certificate>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::DateTime>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Security::SecureRandom>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Ocsp::BasicOcspRespGenerator.Generate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Ocsp::BasicOcspResp (Org::BouncyCastle::Ocsp::BasicOcspRespGenerator::*)(Org::BouncyCastle::Crypto::ISignatureFactory, ::ArrayW<Org::BouncyCastle::X509::X509Certificate>, System::DateTime)>(&Org::BouncyCastle::Ocsp::BasicOcspRespGenerator::Generate)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x1012774;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Ocsp::BasicOcspRespGenerator>::get(),
                            "Generate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::ISignatureFactory>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<Org::BouncyCastle::X509::X509Certificate>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::DateTime>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Ocsp::BasicOcspRespGenerator.get_SignatureAlgNames
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IEnumerable (Org::BouncyCastle::Ocsp::BasicOcspRespGenerator::*)()>(&Org::BouncyCastle::Ocsp::BasicOcspRespGenerator::get_SignatureAlgNames)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x10127cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Ocsp::BasicOcspRespGenerator>::get(),
                            "get_SignatureAlgNames",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void Org::BouncyCastle::Ocsp::BasicOcspRespGenerator::__set_list(System::Collections::IList value)  {
::cordl_internals::setInstanceField<System::Collections::IList, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::IList>(value));
}
constexpr System::Collections::IList Org::BouncyCastle::Ocsp::BasicOcspRespGenerator::__get_list() const {
return ::cordl_internals::getInstanceField<System::Collections::IList, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Ocsp::BasicOcspRespGenerator::__set_responseExtensions(Org::BouncyCastle::Asn1::X509::X509Extensions value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Asn1::X509::X509Extensions, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Asn1::X509::X509Extensions>(value));
}
constexpr Org::BouncyCastle::Asn1::X509::X509Extensions Org::BouncyCastle::Ocsp::BasicOcspRespGenerator::__get_responseExtensions() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Asn1::X509::X509Extensions, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Ocsp::BasicOcspRespGenerator::__set_responderID(Org::BouncyCastle::Ocsp::RespID value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Ocsp::RespID, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Ocsp::RespID>(value));
}
constexpr Org::BouncyCastle::Ocsp::RespID Org::BouncyCastle::Ocsp::BasicOcspRespGenerator::__get_responderID() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Ocsp::RespID, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
 Org::BouncyCastle::Ocsp::BasicOcspRespGenerator Org::BouncyCastle::Ocsp::BasicOcspRespGenerator::New_ctor(Org::BouncyCastle::Ocsp::RespID responderID)  {
Org::BouncyCastle::Ocsp::BasicOcspRespGenerator o{THROW_UNLESS(::il2cpp_utils::New<Org::BouncyCastle::Ocsp::BasicOcspRespGenerator>(responderID))};
return o;
}
 void Org::BouncyCastle::Ocsp::BasicOcspRespGenerator::_ctor(Org::BouncyCastle::Ocsp::RespID responderID)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Ocsp::BasicOcspRespGenerator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Ocsp::RespID>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, responderID);
}
 Org::BouncyCastle::Ocsp::BasicOcspRespGenerator Org::BouncyCastle::Ocsp::BasicOcspRespGenerator::New_ctor(Org::BouncyCastle::Crypto::AsymmetricKeyParameter publicKey)  {
Org::BouncyCastle::Ocsp::BasicOcspRespGenerator o{THROW_UNLESS(::il2cpp_utils::New<Org::BouncyCastle::Ocsp::BasicOcspRespGenerator>(publicKey))};
return o;
}
 void Org::BouncyCastle::Ocsp::BasicOcspRespGenerator::_ctor(Org::BouncyCastle::Crypto::AsymmetricKeyParameter publicKey)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Ocsp::BasicOcspRespGenerator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::AsymmetricKeyParameter>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, publicKey);
}
 void Org::BouncyCastle::Ocsp::BasicOcspRespGenerator::AddResponse(Org::BouncyCastle::Ocsp::CertificateID certID, Org::BouncyCastle::Ocsp::CertificateStatus certStatus)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Ocsp::BasicOcspRespGenerator>::get(),
                            "AddResponse",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Ocsp::CertificateID>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Ocsp::CertificateStatus>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, certID, certStatus);
}
 void Org::BouncyCastle::Ocsp::BasicOcspRespGenerator::AddResponse(Org::BouncyCastle::Ocsp::CertificateID certID, Org::BouncyCastle::Ocsp::CertificateStatus certStatus, Org::BouncyCastle::Asn1::X509::X509Extensions singleExtensions)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Ocsp::BasicOcspRespGenerator>::get(),
                            "AddResponse",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Ocsp::CertificateID>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Ocsp::CertificateStatus>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::X509::X509Extensions>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, certID, certStatus, singleExtensions);
}
 void Org::BouncyCastle::Ocsp::BasicOcspRespGenerator::AddResponse(Org::BouncyCastle::Ocsp::CertificateID certID, Org::BouncyCastle::Ocsp::CertificateStatus certStatus, System::DateTime nextUpdate, Org::BouncyCastle::Asn1::X509::X509Extensions singleExtensions)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Ocsp::BasicOcspRespGenerator>::get(),
                            "AddResponse",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Ocsp::CertificateID>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Ocsp::CertificateStatus>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::DateTime>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::X509::X509Extensions>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, certID, certStatus, nextUpdate, singleExtensions);
}
 void Org::BouncyCastle::Ocsp::BasicOcspRespGenerator::AddResponse(Org::BouncyCastle::Ocsp::CertificateID certID, Org::BouncyCastle::Ocsp::CertificateStatus certStatus, System::DateTime thisUpdate, System::DateTime nextUpdate, Org::BouncyCastle::Asn1::X509::X509Extensions singleExtensions)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Ocsp::BasicOcspRespGenerator>::get(),
                            "AddResponse",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Ocsp::CertificateID>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Ocsp::CertificateStatus>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::DateTime>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::DateTime>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::X509::X509Extensions>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, certID, certStatus, thisUpdate, nextUpdate, singleExtensions);
}
 void Org::BouncyCastle::Ocsp::BasicOcspRespGenerator::SetResponseExtensions(Org::BouncyCastle::Asn1::X509::X509Extensions responseExtensions)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Ocsp::BasicOcspRespGenerator>::get(),
                            "SetResponseExtensions",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::X509::X509Extensions>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, responseExtensions);
}
 Org::BouncyCastle::Ocsp::BasicOcspResp Org::BouncyCastle::Ocsp::BasicOcspRespGenerator::GenerateResponse(Org::BouncyCastle::Crypto::ISignatureFactory signatureCalculator, ::ArrayW<Org::BouncyCastle::X509::X509Certificate> chain, System::DateTime producedAt)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Ocsp::BasicOcspRespGenerator>::get(),
                            "GenerateResponse",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::ISignatureFactory>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<Org::BouncyCastle::X509::X509Certificate>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::DateTime>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Ocsp::BasicOcspResp, false>(const_cast<void*>(instance), ___internal_method, signatureCalculator, chain, producedAt);
}
 Org::BouncyCastle::Ocsp::BasicOcspResp Org::BouncyCastle::Ocsp::BasicOcspRespGenerator::Generate(::StringW signingAlgorithm, Org::BouncyCastle::Crypto::AsymmetricKeyParameter privateKey, ::ArrayW<Org::BouncyCastle::X509::X509Certificate> chain, System::DateTime thisUpdate)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Ocsp::BasicOcspRespGenerator>::get(),
                            "Generate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::AsymmetricKeyParameter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<Org::BouncyCastle::X509::X509Certificate>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::DateTime>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Ocsp::BasicOcspResp, false>(const_cast<void*>(instance), ___internal_method, signingAlgorithm, privateKey, chain, thisUpdate);
}
 Org::BouncyCastle::Ocsp::BasicOcspResp Org::BouncyCastle::Ocsp::BasicOcspRespGenerator::Generate(::StringW signingAlgorithm, Org::BouncyCastle::Crypto::AsymmetricKeyParameter privateKey, ::ArrayW<Org::BouncyCastle::X509::X509Certificate> chain, System::DateTime producedAt, Org::BouncyCastle::Security::SecureRandom random)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Ocsp::BasicOcspRespGenerator>::get(),
                            "Generate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::AsymmetricKeyParameter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<Org::BouncyCastle::X509::X509Certificate>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::DateTime>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Security::SecureRandom>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Ocsp::BasicOcspResp, false>(const_cast<void*>(instance), ___internal_method, signingAlgorithm, privateKey, chain, producedAt, random);
}
 Org::BouncyCastle::Ocsp::BasicOcspResp Org::BouncyCastle::Ocsp::BasicOcspRespGenerator::Generate(Org::BouncyCastle::Crypto::ISignatureFactory signatureCalculatorFactory, ::ArrayW<Org::BouncyCastle::X509::X509Certificate> chain, System::DateTime producedAt)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Ocsp::BasicOcspRespGenerator>::get(),
                            "Generate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::ISignatureFactory>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<Org::BouncyCastle::X509::X509Certificate>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::DateTime>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Ocsp::BasicOcspResp, false>(const_cast<void*>(instance), ___internal_method, signatureCalculatorFactory, chain, producedAt);
}
 System::Collections::IEnumerable Org::BouncyCastle::Ocsp::BasicOcspRespGenerator::get_SignatureAlgNames()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Ocsp::BasicOcspRespGenerator>::get(),
                            "get_SignatureAlgNames",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::IEnumerable, false>(const_cast<void*>(instance), ___internal_method);
}
