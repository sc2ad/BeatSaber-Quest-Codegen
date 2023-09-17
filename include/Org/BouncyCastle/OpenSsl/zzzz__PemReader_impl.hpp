#pragma once
#include "Org/BouncyCastle/Utilities/IO/Pem/zzzz__PemReader_impl.hpp"
namespace {
#include "Org/BouncyCastle/OpenSsl/zzzz__PemReader_def.hpp"
#include "Org/BouncyCastle/OpenSsl/zzzz__IPasswordFinder_def.hpp"
#include "Org/BouncyCastle/Asn1/X9/zzzz__X9ECParameters_def.hpp"
#include "Org/BouncyCastle/X509/zzzz__IX509AttributeCertificate_def.hpp"
#include "System/IO/zzzz__TextReader_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__AsymmetricKeyParameter_def.hpp"
#include "Org/BouncyCastle/X509/zzzz__X509Crl_def.hpp"
#include "Org/BouncyCastle/Pkcs/zzzz__Pkcs10CertificationRequest_def.hpp"
#include "Org/BouncyCastle/X509/zzzz__X509Certificate_def.hpp"
#include "Org/BouncyCastle/Utilities/IO/Pem/zzzz__PemObject_def.hpp"
#include "Org/BouncyCastle/Asn1/Cms/zzzz__ContentInfo_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::OpenSsl::PemReader._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::OpenSsl::PemReader::*)(::System::IO::TextReader)>(&::Org::BouncyCastle::OpenSsl::PemReader::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x10459a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::OpenSsl::PemReader>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::TextReader>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::OpenSsl::PemReader._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::OpenSsl::PemReader::*)(::System::IO::TextReader, ::Org::BouncyCastle::OpenSsl::IPasswordFinder)>(&::Org::BouncyCastle::OpenSsl::PemReader::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x10459c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::OpenSsl::PemReader>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::TextReader>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::OpenSsl::IPasswordFinder>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::OpenSsl::PemReader.ReadObject
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (::Org::BouncyCastle::OpenSsl::PemReader::*)()>(&::Org::BouncyCastle::OpenSsl::PemReader::ReadObject)> {
  constexpr static std::size_t size = 0x4e4;
  constexpr static std::size_t addrs = 0x10459e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::OpenSsl::PemReader>::get(),
                            "ReadObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::OpenSsl::PemReader.ReadRsaPublicKey
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter (::Org::BouncyCastle::OpenSsl::PemReader::*)(::Org::BouncyCastle::Utilities::IO::Pem::PemObject)>(&::Org::BouncyCastle::OpenSsl::PemReader::ReadRsaPublicKey)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x1047154;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::OpenSsl::PemReader>::get(),
                            "ReadRsaPublicKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Utilities::IO::Pem::PemObject>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::OpenSsl::PemReader.ReadPublicKey
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter (::Org::BouncyCastle::OpenSsl::PemReader::*)(::Org::BouncyCastle::Utilities::IO::Pem::PemObject)>(&::Org::BouncyCastle::OpenSsl::PemReader::ReadPublicKey)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x1047138;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::OpenSsl::PemReader>::get(),
                            "ReadPublicKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Utilities::IO::Pem::PemObject>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::OpenSsl::PemReader.ReadCertificate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::X509::X509Certificate (::Org::BouncyCastle::OpenSsl::PemReader::*)(::Org::BouncyCastle::Utilities::IO::Pem::PemObject)>(&::Org::BouncyCastle::OpenSsl::PemReader::ReadCertificate)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x1047338;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::OpenSsl::PemReader>::get(),
                            "ReadCertificate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Utilities::IO::Pem::PemObject>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::OpenSsl::PemReader.ReadCrl
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::X509::X509Crl (::Org::BouncyCastle::OpenSsl::PemReader::*)(::Org::BouncyCastle::Utilities::IO::Pem::PemObject)>(&::Org::BouncyCastle::OpenSsl::PemReader::ReadCrl)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x10475b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::OpenSsl::PemReader>::get(),
                            "ReadCrl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Utilities::IO::Pem::PemObject>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::OpenSsl::PemReader.ReadCertificateRequest
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Pkcs::Pkcs10CertificationRequest (::Org::BouncyCastle::OpenSsl::PemReader::*)(::Org::BouncyCastle::Utilities::IO::Pem::PemObject)>(&::Org::BouncyCastle::OpenSsl::PemReader::ReadCertificateRequest)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x10471e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::OpenSsl::PemReader>::get(),
                            "ReadCertificateRequest",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Utilities::IO::Pem::PemObject>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::OpenSsl::PemReader.ReadAttributeCertificate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::X509::IX509AttributeCertificate (::Org::BouncyCastle::OpenSsl::PemReader::*)(::Org::BouncyCastle::Utilities::IO::Pem::PemObject)>(&::Org::BouncyCastle::OpenSsl::PemReader::ReadAttributeCertificate)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x104771c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::OpenSsl::PemReader>::get(),
                            "ReadAttributeCertificate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Utilities::IO::Pem::PemObject>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::OpenSsl::PemReader.ReadPkcs7
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::Cms::ContentInfo (::Org::BouncyCastle::OpenSsl::PemReader::*)(::Org::BouncyCastle::Utilities::IO::Pem::PemObject)>(&::Org::BouncyCastle::OpenSsl::PemReader::ReadPkcs7)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x104749c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::OpenSsl::PemReader>::get(),
                            "ReadPkcs7",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Utilities::IO::Pem::PemObject>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::OpenSsl::PemReader.ReadPrivateKey
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (::Org::BouncyCastle::OpenSsl::PemReader::*)(::Org::BouncyCastle::Utilities::IO::Pem::PemObject)>(&::Org::BouncyCastle::OpenSsl::PemReader::ReadPrivateKey)> {
  constexpr static std::size_t size = 0x1270;
  constexpr static std::size_t addrs = 0x1045ec8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::OpenSsl::PemReader>::get(),
                            "ReadPrivateKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Utilities::IO::Pem::PemObject>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::OpenSsl::PemReader.GetCurveParameters
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::X9::X9ECParameters (*)(::StringW)>(&::Org::BouncyCastle::OpenSsl::PemReader::GetCurveParameters)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x1047820;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::OpenSsl::PemReader>::get(),
                            "GetCurveParameters",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void ::Org::BouncyCastle::OpenSsl::PemReader::__set_pFinder(::Org::BouncyCastle::OpenSsl::IPasswordFinder value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::OpenSsl::IPasswordFinder, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::Org::BouncyCastle::OpenSsl::IPasswordFinder>(value));
}
constexpr ::Org::BouncyCastle::OpenSsl::IPasswordFinder ::Org::BouncyCastle::OpenSsl::PemReader::__get_pFinder() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::OpenSsl::IPasswordFinder, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "reader", ty: "::System::IO::TextReader", modifiers: "", def_value: None }]
 ::Org::BouncyCastle::OpenSsl::PemReader::PemReader(::System::IO::TextReader reader)  : ::Org::BouncyCastle::Utilities::IO::Pem::PemReader(THROW_UNLESS(::il2cpp_utils::New<PemReader>(reader))) {}
 void ::Org::BouncyCastle::OpenSsl::PemReader::_ctor(::System::IO::TextReader reader)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::OpenSsl::PemReader>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::TextReader>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, reader);
}
// Ctor Parameters [CppParam { name: "reader", ty: "::System::IO::TextReader", modifiers: "", def_value: None }, CppParam { name: "pFinder", ty: "::Org::BouncyCastle::OpenSsl::IPasswordFinder", modifiers: "", def_value: None }]
 ::Org::BouncyCastle::OpenSsl::PemReader::PemReader(::System::IO::TextReader reader, ::Org::BouncyCastle::OpenSsl::IPasswordFinder pFinder)  : ::Org::BouncyCastle::Utilities::IO::Pem::PemReader(THROW_UNLESS(::il2cpp_utils::New<PemReader>(reader, pFinder))) {}
 void ::Org::BouncyCastle::OpenSsl::PemReader::_ctor(::System::IO::TextReader reader, ::Org::BouncyCastle::OpenSsl::IPasswordFinder pFinder)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::OpenSsl::PemReader>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::TextReader>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::OpenSsl::IPasswordFinder>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, reader, pFinder);
}
 ::bs_hook::Il2CppWrapperType ::Org::BouncyCastle::OpenSsl::PemReader::ReadObject()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::OpenSsl::PemReader>::get(),
                            "ReadObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method);
}
 ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter ::Org::BouncyCastle::OpenSsl::PemReader::ReadRsaPublicKey(::Org::BouncyCastle::Utilities::IO::Pem::PemObject pemObject)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::OpenSsl::PemReader>::get(),
                            "ReadRsaPublicKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Utilities::IO::Pem::PemObject>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter, false>(const_cast<void*>(instance), ___internal_method, pemObject);
}
 ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter ::Org::BouncyCastle::OpenSsl::PemReader::ReadPublicKey(::Org::BouncyCastle::Utilities::IO::Pem::PemObject pemObject)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::OpenSsl::PemReader>::get(),
                            "ReadPublicKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Utilities::IO::Pem::PemObject>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter, false>(const_cast<void*>(instance), ___internal_method, pemObject);
}
 ::Org::BouncyCastle::X509::X509Certificate ::Org::BouncyCastle::OpenSsl::PemReader::ReadCertificate(::Org::BouncyCastle::Utilities::IO::Pem::PemObject pemObject)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::OpenSsl::PemReader>::get(),
                            "ReadCertificate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Utilities::IO::Pem::PemObject>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::X509::X509Certificate, false>(const_cast<void*>(instance), ___internal_method, pemObject);
}
 ::Org::BouncyCastle::X509::X509Crl ::Org::BouncyCastle::OpenSsl::PemReader::ReadCrl(::Org::BouncyCastle::Utilities::IO::Pem::PemObject pemObject)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::OpenSsl::PemReader>::get(),
                            "ReadCrl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Utilities::IO::Pem::PemObject>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::X509::X509Crl, false>(const_cast<void*>(instance), ___internal_method, pemObject);
}
 ::Org::BouncyCastle::Pkcs::Pkcs10CertificationRequest ::Org::BouncyCastle::OpenSsl::PemReader::ReadCertificateRequest(::Org::BouncyCastle::Utilities::IO::Pem::PemObject pemObject)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::OpenSsl::PemReader>::get(),
                            "ReadCertificateRequest",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Utilities::IO::Pem::PemObject>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Pkcs::Pkcs10CertificationRequest, false>(const_cast<void*>(instance), ___internal_method, pemObject);
}
 ::Org::BouncyCastle::X509::IX509AttributeCertificate ::Org::BouncyCastle::OpenSsl::PemReader::ReadAttributeCertificate(::Org::BouncyCastle::Utilities::IO::Pem::PemObject pemObject)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::OpenSsl::PemReader>::get(),
                            "ReadAttributeCertificate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Utilities::IO::Pem::PemObject>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::X509::IX509AttributeCertificate, false>(const_cast<void*>(instance), ___internal_method, pemObject);
}
 ::Org::BouncyCastle::Asn1::Cms::ContentInfo ::Org::BouncyCastle::OpenSsl::PemReader::ReadPkcs7(::Org::BouncyCastle::Utilities::IO::Pem::PemObject pemObject)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::OpenSsl::PemReader>::get(),
                            "ReadPkcs7",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Utilities::IO::Pem::PemObject>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Cms::ContentInfo, false>(const_cast<void*>(instance), ___internal_method, pemObject);
}
 ::bs_hook::Il2CppWrapperType ::Org::BouncyCastle::OpenSsl::PemReader::ReadPrivateKey(::Org::BouncyCastle::Utilities::IO::Pem::PemObject pemObject)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::OpenSsl::PemReader>::get(),
                            "ReadPrivateKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Utilities::IO::Pem::PemObject>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method, pemObject);
}
 ::Org::BouncyCastle::Asn1::X9::X9ECParameters ::Org::BouncyCastle::OpenSsl::PemReader::GetCurveParameters(::StringW name)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::OpenSsl::PemReader>::get(),
                            "GetCurveParameters",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X9::X9ECParameters, false>(nullptr, ___internal_method, name);
}
} // end anonymous namespace
