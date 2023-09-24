#pragma once
#include "Org/BouncyCastle/Ocsp/zzzz__OcspReqGenerator_def.hpp"
#include "Org/BouncyCastle/Ocsp/zzzz__CertificateID_def.hpp"
#include "Org/BouncyCastle/Ocsp/zzzz__OcspReq_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__X509Name_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerObjectIdentifier_def.hpp"
#include "Org/BouncyCastle/Security/zzzz__SecureRandom_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__X509Extensions_def.hpp"
#include "Org/BouncyCastle/Ocsp/zzzz__OcspReqGenerator_def.hpp"
#include "System/Collections/zzzz__IList_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__AsymmetricKeyParameter_def.hpp"
#include "Org/BouncyCastle/X509/zzzz__X509Certificate_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__GeneralName_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "Org/BouncyCastle/Asn1/Ocsp/zzzz__Request_def.hpp"
//  Writing Method size for method: Org::BouncyCastle::Ocsp::Org__BouncyCastle__Ocsp__OcspReqGenerator__RequestObject._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Ocsp::Org__BouncyCastle__Ocsp__OcspReqGenerator__RequestObject::*)(Org::BouncyCastle::Ocsp::CertificateID, Org::BouncyCastle::Asn1::X509::X509Extensions)>(&Org::BouncyCastle::Ocsp::Org__BouncyCastle__Ocsp__OcspReqGenerator__RequestObject::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x101480c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Ocsp::Org__BouncyCastle__Ocsp__OcspReqGenerator__RequestObject>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Ocsp::CertificateID>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::X509::X509Extensions>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Ocsp::Org__BouncyCastle__Ocsp__OcspReqGenerator__RequestObject.ToRequest
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::Ocsp::Request (Org::BouncyCastle::Ocsp::Org__BouncyCastle__Ocsp__OcspReqGenerator__RequestObject::*)()>(&Org::BouncyCastle::Ocsp::Org__BouncyCastle__Ocsp__OcspReqGenerator__RequestObject::ToRequest)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x1015674;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Ocsp::Org__BouncyCastle__Ocsp__OcspReqGenerator__RequestObject>::get(),
                            "ToRequest",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void Org::BouncyCastle::Ocsp::Org__BouncyCastle__Ocsp__OcspReqGenerator__RequestObject::__set_certId(Org::BouncyCastle::Ocsp::CertificateID value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Ocsp::CertificateID, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Ocsp::CertificateID>(value));
}
constexpr Org::BouncyCastle::Ocsp::CertificateID Org::BouncyCastle::Ocsp::Org__BouncyCastle__Ocsp__OcspReqGenerator__RequestObject::__get_certId() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Ocsp::CertificateID, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Ocsp::Org__BouncyCastle__Ocsp__OcspReqGenerator__RequestObject::__set_extensions(Org::BouncyCastle::Asn1::X509::X509Extensions value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Asn1::X509::X509Extensions, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Asn1::X509::X509Extensions>(value));
}
constexpr Org::BouncyCastle::Asn1::X509::X509Extensions Org::BouncyCastle::Ocsp::Org__BouncyCastle__Ocsp__OcspReqGenerator__RequestObject::__get_extensions() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Asn1::X509::X509Extensions, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 Org::BouncyCastle::Ocsp::Org__BouncyCastle__Ocsp__OcspReqGenerator__RequestObject Org::BouncyCastle::Ocsp::Org__BouncyCastle__Ocsp__OcspReqGenerator__RequestObject::New_ctor(Org::BouncyCastle::Ocsp::CertificateID certId, Org::BouncyCastle::Asn1::X509::X509Extensions extensions)  {
Org::BouncyCastle::Ocsp::Org__BouncyCastle__Ocsp__OcspReqGenerator__RequestObject o{THROW_UNLESS(::il2cpp_utils::New<Org::BouncyCastle::Ocsp::Org__BouncyCastle__Ocsp__OcspReqGenerator__RequestObject>(certId, extensions))};
return o;
}
 void Org::BouncyCastle::Ocsp::Org__BouncyCastle__Ocsp__OcspReqGenerator__RequestObject::_ctor(Org::BouncyCastle::Ocsp::CertificateID certId, Org::BouncyCastle::Asn1::X509::X509Extensions extensions)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Ocsp::Org__BouncyCastle__Ocsp__OcspReqGenerator__RequestObject>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Ocsp::CertificateID>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::X509::X509Extensions>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, certId, extensions);
}
 Org::BouncyCastle::Asn1::Ocsp::Request Org::BouncyCastle::Ocsp::Org__BouncyCastle__Ocsp__OcspReqGenerator__RequestObject::ToRequest()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Ocsp::Org__BouncyCastle__Ocsp__OcspReqGenerator__RequestObject>::get(),
                            "ToRequest",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Asn1::Ocsp::Request, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: Org::BouncyCastle::Ocsp::OcspReqGenerator.AddRequest
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Ocsp::OcspReqGenerator::*)(Org::BouncyCastle::Ocsp::CertificateID)>(&Org::BouncyCastle::Ocsp::OcspReqGenerator::AddRequest)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x1014728;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Ocsp::OcspReqGenerator>::get(),
                            "AddRequest",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Ocsp::CertificateID>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Ocsp::OcspReqGenerator.AddRequest
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Ocsp::OcspReqGenerator::*)(Org::BouncyCastle::Ocsp::CertificateID, Org::BouncyCastle::Asn1::X509::X509Extensions)>(&Org::BouncyCastle::Ocsp::OcspReqGenerator::AddRequest)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x1014838;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Ocsp::OcspReqGenerator>::get(),
                            "AddRequest",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Ocsp::CertificateID>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::X509::X509Extensions>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Ocsp::OcspReqGenerator.SetRequestorName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Ocsp::OcspReqGenerator::*)(Org::BouncyCastle::Asn1::X509::X509Name)>(&Org::BouncyCastle::Ocsp::OcspReqGenerator::SetRequestorName)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x1014920;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Ocsp::OcspReqGenerator>::get(),
                            "SetRequestorName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::X509::X509Name>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Ocsp::OcspReqGenerator.SetRequestorName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Ocsp::OcspReqGenerator::*)(Org::BouncyCastle::Asn1::X509::GeneralName)>(&Org::BouncyCastle::Ocsp::OcspReqGenerator::SetRequestorName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1014a58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Ocsp::OcspReqGenerator>::get(),
                            "SetRequestorName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::X509::GeneralName>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Ocsp::OcspReqGenerator.SetRequestExtensions
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Ocsp::OcspReqGenerator::*)(Org::BouncyCastle::Asn1::X509::X509Extensions)>(&Org::BouncyCastle::Ocsp::OcspReqGenerator::SetRequestExtensions)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1014a60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Ocsp::OcspReqGenerator>::get(),
                            "SetRequestExtensions",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::X509::X509Extensions>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Ocsp::OcspReqGenerator.GenerateRequest
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Ocsp::OcspReq (Org::BouncyCastle::Ocsp::OcspReqGenerator::*)(Org::BouncyCastle::Asn1::DerObjectIdentifier, Org::BouncyCastle::Crypto::AsymmetricKeyParameter, ::ArrayW<Org::BouncyCastle::X509::X509Certificate>, Org::BouncyCastle::Security::SecureRandom)>(&Org::BouncyCastle::Ocsp::OcspReqGenerator::GenerateRequest)> {
  constexpr static std::size_t size = 0xc0c;
  constexpr static std::size_t addrs = 0x1014a68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Ocsp::OcspReqGenerator>::get(),
                            "GenerateRequest",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::DerObjectIdentifier>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::AsymmetricKeyParameter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<Org::BouncyCastle::X509::X509Certificate>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Security::SecureRandom>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Ocsp::OcspReqGenerator.Generate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Ocsp::OcspReq (Org::BouncyCastle::Ocsp::OcspReqGenerator::*)()>(&Org::BouncyCastle::Ocsp::OcspReqGenerator::Generate)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x10156ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Ocsp::OcspReqGenerator>::get(),
                            "Generate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Ocsp::OcspReqGenerator.Generate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Ocsp::OcspReq (Org::BouncyCastle::Ocsp::OcspReqGenerator::*)(::StringW, Org::BouncyCastle::Crypto::AsymmetricKeyParameter, ::ArrayW<Org::BouncyCastle::X509::X509Certificate>)>(&Org::BouncyCastle::Ocsp::OcspReqGenerator::Generate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1015700;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Ocsp::OcspReqGenerator>::get(),
                            "Generate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::AsymmetricKeyParameter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<Org::BouncyCastle::X509::X509Certificate>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Ocsp::OcspReqGenerator.Generate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Ocsp::OcspReq (Org::BouncyCastle::Ocsp::OcspReqGenerator::*)(::StringW, Org::BouncyCastle::Crypto::AsymmetricKeyParameter, ::ArrayW<Org::BouncyCastle::X509::X509Certificate>, Org::BouncyCastle::Security::SecureRandom)>(&Org::BouncyCastle::Ocsp::OcspReqGenerator::Generate)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x1015708;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Ocsp::OcspReqGenerator>::get(),
                            "Generate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::AsymmetricKeyParameter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<Org::BouncyCastle::X509::X509Certificate>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Security::SecureRandom>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Ocsp::OcspReqGenerator.get_SignatureAlgNames
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IEnumerable (Org::BouncyCastle::Ocsp::OcspReqGenerator::*)()>(&Org::BouncyCastle::Ocsp::OcspReqGenerator::get_SignatureAlgNames)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x1015ac4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Ocsp::OcspReqGenerator>::get(),
                            "get_SignatureAlgNames",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Ocsp::OcspReqGenerator._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Ocsp::OcspReqGenerator::*)()>(&Org::BouncyCastle::Ocsp::OcspReqGenerator::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x1015b10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Ocsp::OcspReqGenerator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void Org::BouncyCastle::Ocsp::OcspReqGenerator::__set_list(System::Collections::IList value)  {
::cordl_internals::setInstanceField<System::Collections::IList, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::IList>(value));
}
constexpr System::Collections::IList Org::BouncyCastle::Ocsp::OcspReqGenerator::__get_list() const {
return ::cordl_internals::getInstanceField<System::Collections::IList, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Ocsp::OcspReqGenerator::__set_requestorName(Org::BouncyCastle::Asn1::X509::GeneralName value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Asn1::X509::GeneralName, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Asn1::X509::GeneralName>(value));
}
constexpr Org::BouncyCastle::Asn1::X509::GeneralName Org::BouncyCastle::Ocsp::OcspReqGenerator::__get_requestorName() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Asn1::X509::GeneralName, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Ocsp::OcspReqGenerator::__set_requestExtensions(Org::BouncyCastle::Asn1::X509::X509Extensions value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Asn1::X509::X509Extensions, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Asn1::X509::X509Extensions>(value));
}
constexpr Org::BouncyCastle::Asn1::X509::X509Extensions Org::BouncyCastle::Ocsp::OcspReqGenerator::__get_requestExtensions() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Asn1::X509::X509Extensions, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void Org::BouncyCastle::Ocsp::OcspReqGenerator::AddRequest(Org::BouncyCastle::Ocsp::CertificateID certId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Ocsp::OcspReqGenerator>::get(),
                            "AddRequest",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Ocsp::CertificateID>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, certId);
}
 void Org::BouncyCastle::Ocsp::OcspReqGenerator::AddRequest(Org::BouncyCastle::Ocsp::CertificateID certId, Org::BouncyCastle::Asn1::X509::X509Extensions singleRequestExtensions)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Ocsp::OcspReqGenerator>::get(),
                            "AddRequest",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Ocsp::CertificateID>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::X509::X509Extensions>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, certId, singleRequestExtensions);
}
 void Org::BouncyCastle::Ocsp::OcspReqGenerator::SetRequestorName(Org::BouncyCastle::Asn1::X509::X509Name requestorName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Ocsp::OcspReqGenerator>::get(),
                            "SetRequestorName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::X509::X509Name>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, requestorName);
}
 void Org::BouncyCastle::Ocsp::OcspReqGenerator::SetRequestorName(Org::BouncyCastle::Asn1::X509::GeneralName requestorName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Ocsp::OcspReqGenerator>::get(),
                            "SetRequestorName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::X509::GeneralName>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, requestorName);
}
 void Org::BouncyCastle::Ocsp::OcspReqGenerator::SetRequestExtensions(Org::BouncyCastle::Asn1::X509::X509Extensions requestExtensions)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Ocsp::OcspReqGenerator>::get(),
                            "SetRequestExtensions",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::X509::X509Extensions>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, requestExtensions);
}
 Org::BouncyCastle::Ocsp::OcspReq Org::BouncyCastle::Ocsp::OcspReqGenerator::GenerateRequest(Org::BouncyCastle::Asn1::DerObjectIdentifier signingAlgorithm, Org::BouncyCastle::Crypto::AsymmetricKeyParameter privateKey, ::ArrayW<Org::BouncyCastle::X509::X509Certificate> chain, Org::BouncyCastle::Security::SecureRandom random)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Ocsp::OcspReqGenerator>::get(),
                            "GenerateRequest",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::DerObjectIdentifier>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::AsymmetricKeyParameter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<Org::BouncyCastle::X509::X509Certificate>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Security::SecureRandom>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Ocsp::OcspReq, false>(const_cast<void*>(instance), ___internal_method, signingAlgorithm, privateKey, chain, random);
}
 Org::BouncyCastle::Ocsp::OcspReq Org::BouncyCastle::Ocsp::OcspReqGenerator::Generate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Ocsp::OcspReqGenerator>::get(),
                            "Generate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Ocsp::OcspReq, false>(const_cast<void*>(instance), ___internal_method);
}
 Org::BouncyCastle::Ocsp::OcspReq Org::BouncyCastle::Ocsp::OcspReqGenerator::Generate(::StringW signingAlgorithm, Org::BouncyCastle::Crypto::AsymmetricKeyParameter privateKey, ::ArrayW<Org::BouncyCastle::X509::X509Certificate> chain)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Ocsp::OcspReqGenerator>::get(),
                            "Generate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::AsymmetricKeyParameter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<Org::BouncyCastle::X509::X509Certificate>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Ocsp::OcspReq, false>(const_cast<void*>(instance), ___internal_method, signingAlgorithm, privateKey, chain);
}
 Org::BouncyCastle::Ocsp::OcspReq Org::BouncyCastle::Ocsp::OcspReqGenerator::Generate(::StringW signingAlgorithm, Org::BouncyCastle::Crypto::AsymmetricKeyParameter privateKey, ::ArrayW<Org::BouncyCastle::X509::X509Certificate> chain, Org::BouncyCastle::Security::SecureRandom random)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Ocsp::OcspReqGenerator>::get(),
                            "Generate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::AsymmetricKeyParameter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<Org::BouncyCastle::X509::X509Certificate>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Security::SecureRandom>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Ocsp::OcspReq, false>(const_cast<void*>(instance), ___internal_method, signingAlgorithm, privateKey, chain, random);
}
 System::Collections::IEnumerable Org::BouncyCastle::Ocsp::OcspReqGenerator::get_SignatureAlgNames()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Ocsp::OcspReqGenerator>::get(),
                            "get_SignatureAlgNames",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::IEnumerable, false>(const_cast<void*>(instance), ___internal_method);
}
 Org::BouncyCastle::Ocsp::OcspReqGenerator Org::BouncyCastle::Ocsp::OcspReqGenerator::New_ctor()  {
Org::BouncyCastle::Ocsp::OcspReqGenerator o{THROW_UNLESS(::il2cpp_utils::New<Org::BouncyCastle::Ocsp::OcspReqGenerator>())};
return o;
}
 void Org::BouncyCastle::Ocsp::OcspReqGenerator::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Ocsp::OcspReqGenerator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
