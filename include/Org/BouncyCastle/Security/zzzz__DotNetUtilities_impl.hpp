#pragma once
namespace {
#include "Org/BouncyCastle/Security/zzzz__DotNetUtilities_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509Certificate_def.hpp"
#include "System/Security/Cryptography/zzzz__RSAParameters_def.hpp"
#include "Org/BouncyCastle/Math/zzzz__BigInteger_def.hpp"
#include "Org/BouncyCastle/X509/zzzz__X509Certificate_def.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__RsaKeyParameters_def.hpp"
#include "System/Security/Cryptography/zzzz__CspParameters_def.hpp"
#include "System/Security/Cryptography/zzzz__DSA_def.hpp"
#include "System/Security/Cryptography/zzzz__DSAParameters_def.hpp"
#include "System/Security/Cryptography/zzzz__AsymmetricAlgorithm_def.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__RsaPrivateCrtKeyParameters_def.hpp"
#include "System/Security/Cryptography/zzzz__RSA_def.hpp"
#include "Org/BouncyCastle/Asn1/Pkcs/zzzz__RsaPrivateKeyStructure_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__AsymmetricCipherKeyPair_def.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__DsaPublicKeyParameters_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__X509CertificateStructure_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Security::DotNetUtilities._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Security::DotNetUtilities::*)()>(&::Org::BouncyCastle::Security::DotNetUtilities::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x109ced8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::DotNetUtilities>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Security::DotNetUtilities.ToX509Certificate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::X509Certificates::X509Certificate (*)(::Org::BouncyCastle::Asn1::X509::X509CertificateStructure)>(&::Org::BouncyCastle::Security::DotNetUtilities::ToX509Certificate)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x109cee0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::DotNetUtilities>::get(),
                            "ToX509Certificate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::X509CertificateStructure>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Security::DotNetUtilities.ToX509Certificate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::X509Certificates::X509Certificate (*)(::Org::BouncyCastle::X509::X509Certificate)>(&::Org::BouncyCastle::Security::DotNetUtilities::ToX509Certificate)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x109cf5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::DotNetUtilities>::get(),
                            "ToX509Certificate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::X509Certificate>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Security::DotNetUtilities.FromX509Certificate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::X509::X509Certificate (*)(::System::Security::Cryptography::X509Certificates::X509Certificate)>(&::Org::BouncyCastle::Security::DotNetUtilities::FromX509Certificate)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x109cfe0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::DotNetUtilities>::get(),
                            "FromX509Certificate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X509Certificate>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Security::DotNetUtilities.GetDsaKeyPair
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair (*)(::System::Security::Cryptography::DSA)>(&::Org::BouncyCastle::Security::DotNetUtilities::GetDsaKeyPair)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x109d05c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::DotNetUtilities>::get(),
                            "GetDsaKeyPair",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::DSA>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Security::DotNetUtilities.GetDsaKeyPair
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair (*)(::System::Security::Cryptography::DSAParameters)>(&::Org::BouncyCastle::Security::DotNetUtilities::GetDsaKeyPair)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0x109d0ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::DotNetUtilities>::get(),
                            "GetDsaKeyPair",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::DSAParameters>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Security::DotNetUtilities.GetDsaPublicKey
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::Parameters::DsaPublicKeyParameters (*)(::System::Security::Cryptography::DSA)>(&::Org::BouncyCastle::Security::DotNetUtilities::GetDsaPublicKey)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x109d2e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::DotNetUtilities>::get(),
                            "GetDsaPublicKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::DSA>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Security::DotNetUtilities.GetDsaPublicKey
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::Parameters::DsaPublicKeyParameters (*)(::System::Security::Cryptography::DSAParameters)>(&::Org::BouncyCastle::Security::DotNetUtilities::GetDsaPublicKey)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x109d330;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::DotNetUtilities>::get(),
                            "GetDsaPublicKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::DSAParameters>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Security::DotNetUtilities.GetRsaKeyPair
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair (*)(::System::Security::Cryptography::RSA)>(&::Org::BouncyCastle::Security::DotNetUtilities::GetRsaKeyPair)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x109d4d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::DotNetUtilities>::get(),
                            "GetRsaKeyPair",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::RSA>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Security::DotNetUtilities.GetRsaKeyPair
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair (*)(::System::Security::Cryptography::RSAParameters)>(&::Org::BouncyCastle::Security::DotNetUtilities::GetRsaKeyPair)> {
  constexpr static std::size_t size = 0x244;
  constexpr static std::size_t addrs = 0x109d528;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::DotNetUtilities>::get(),
                            "GetRsaKeyPair",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::RSAParameters>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Security::DotNetUtilities.GetRsaPublicKey
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters (*)(::System::Security::Cryptography::RSA)>(&::Org::BouncyCastle::Security::DotNetUtilities::GetRsaPublicKey)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x109d76c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::DotNetUtilities>::get(),
                            "GetRsaPublicKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::RSA>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Security::DotNetUtilities.GetRsaPublicKey
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters (*)(::System::Security::Cryptography::RSAParameters)>(&::Org::BouncyCastle::Security::DotNetUtilities::GetRsaPublicKey)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x109d7bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::DotNetUtilities>::get(),
                            "GetRsaPublicKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::RSAParameters>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Security::DotNetUtilities.GetKeyPair
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair (*)(::System::Security::Cryptography::AsymmetricAlgorithm)>(&::Org::BouncyCastle::Security::DotNetUtilities::GetKeyPair)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x109d88c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::DotNetUtilities>::get(),
                            "GetKeyPair",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::AsymmetricAlgorithm>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Security::DotNetUtilities.ToRSA
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::RSA (*)(::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters)>(&::Org::BouncyCastle::Security::DotNetUtilities::ToRSA)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x109d9a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::DotNetUtilities>::get(),
                            "ToRSA",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Security::DotNetUtilities.ToRSA
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::RSA (*)(::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters, ::System::Security::Cryptography::CspParameters)>(&::Org::BouncyCastle::Security::DotNetUtilities::ToRSA)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x109db9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::DotNetUtilities>::get(),
                            "ToRSA",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::CspParameters>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Security::DotNetUtilities.ToRSA
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::RSA (*)(::Org::BouncyCastle::Crypto::Parameters::RsaPrivateCrtKeyParameters)>(&::Org::BouncyCastle::Security::DotNetUtilities::ToRSA)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x109dc78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::DotNetUtilities>::get(),
                            "ToRSA",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Parameters::RsaPrivateCrtKeyParameters>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Security::DotNetUtilities.ToRSA
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::RSA (*)(::Org::BouncyCastle::Crypto::Parameters::RsaPrivateCrtKeyParameters, ::System::Security::Cryptography::CspParameters)>(&::Org::BouncyCastle::Security::DotNetUtilities::ToRSA)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x109dd90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::DotNetUtilities>::get(),
                            "ToRSA",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Parameters::RsaPrivateCrtKeyParameters>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::CspParameters>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Security::DotNetUtilities.ToRSA
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::RSA (*)(::Org::BouncyCastle::Asn1::Pkcs::RsaPrivateKeyStructure)>(&::Org::BouncyCastle::Security::DotNetUtilities::ToRSA)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x109ddbc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::DotNetUtilities>::get(),
                            "ToRSA",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Pkcs::RsaPrivateKeyStructure>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Security::DotNetUtilities.ToRSA
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::RSA (*)(::Org::BouncyCastle::Asn1::Pkcs::RsaPrivateKeyStructure, ::System::Security::Cryptography::CspParameters)>(&::Org::BouncyCastle::Security::DotNetUtilities::ToRSA)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x109ded4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::DotNetUtilities>::get(),
                            "ToRSA",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Pkcs::RsaPrivateKeyStructure>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::CspParameters>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Security::DotNetUtilities.ToRSAParameters
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::RSAParameters (*)(::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters)>(&::Org::BouncyCastle::Security::DotNetUtilities::ToRSAParameters)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x109d9cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::DotNetUtilities>::get(),
                            "ToRSAParameters",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Security::DotNetUtilities.ToRSAParameters
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::RSAParameters (*)(::Org::BouncyCastle::Crypto::Parameters::RsaPrivateCrtKeyParameters)>(&::Org::BouncyCastle::Security::DotNetUtilities::ToRSAParameters)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x109dc9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::DotNetUtilities>::get(),
                            "ToRSAParameters",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Parameters::RsaPrivateCrtKeyParameters>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Security::DotNetUtilities.ToRSAParameters
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::RSAParameters (*)(::Org::BouncyCastle::Asn1::Pkcs::RsaPrivateKeyStructure)>(&::Org::BouncyCastle::Security::DotNetUtilities::ToRSAParameters)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x109dde0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::DotNetUtilities>::get(),
                            "ToRSAParameters",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Pkcs::RsaPrivateKeyStructure>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Security::DotNetUtilities.ConvertRSAParametersField
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (*)(::Org::BouncyCastle::Math::BigInteger, int32_t)>(&::Org::BouncyCastle::Security::DotNetUtilities::ConvertRSAParametersField)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x109df00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::DotNetUtilities>::get(),
                            "ConvertRSAParametersField",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::BigInteger>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Security::DotNetUtilities.CreateRSAProvider
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::RSA (*)(::System::Security::Cryptography::RSAParameters)>(&::Org::BouncyCastle::Security::DotNetUtilities::CreateRSAProvider)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x109da68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::DotNetUtilities>::get(),
                            "CreateRSAProvider",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::RSAParameters>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Security::DotNetUtilities.CreateRSAProvider
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::RSA (*)(::System::Security::Cryptography::RSAParameters, ::System::Security::Cryptography::CspParameters)>(&::Org::BouncyCastle::Security::DotNetUtilities::CreateRSAProvider)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x109dbc8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::DotNetUtilities>::get(),
                            "CreateRSAProvider",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::RSAParameters>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::CspParameters>::get()}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters []
 ::Org::BouncyCastle::Security::DotNetUtilities::DotNetUtilities()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<DotNetUtilities>())) {}
 void ::Org::BouncyCastle::Security::DotNetUtilities::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::DotNetUtilities>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::Security::Cryptography::X509Certificates::X509Certificate ::Org::BouncyCastle::Security::DotNetUtilities::ToX509Certificate(::Org::BouncyCastle::Asn1::X509::X509CertificateStructure x509Struct)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::DotNetUtilities>::get(),
                            "ToX509Certificate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::X509CertificateStructure>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::X509Certificates::X509Certificate, false>(nullptr, ___internal_method, x509Struct);
}
 ::System::Security::Cryptography::X509Certificates::X509Certificate ::Org::BouncyCastle::Security::DotNetUtilities::ToX509Certificate(::Org::BouncyCastle::X509::X509Certificate x509Cert)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::DotNetUtilities>::get(),
                            "ToX509Certificate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::X509Certificate>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::X509Certificates::X509Certificate, false>(nullptr, ___internal_method, x509Cert);
}
 ::Org::BouncyCastle::X509::X509Certificate ::Org::BouncyCastle::Security::DotNetUtilities::FromX509Certificate(::System::Security::Cryptography::X509Certificates::X509Certificate x509Cert)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::DotNetUtilities>::get(),
                            "FromX509Certificate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X509Certificate>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::X509::X509Certificate, false>(nullptr, ___internal_method, x509Cert);
}
 ::Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair ::Org::BouncyCastle::Security::DotNetUtilities::GetDsaKeyPair(::System::Security::Cryptography::DSA dsa)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::DotNetUtilities>::get(),
                            "GetDsaKeyPair",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::DSA>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair, false>(nullptr, ___internal_method, dsa);
}
 ::Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair ::Org::BouncyCastle::Security::DotNetUtilities::GetDsaKeyPair(::System::Security::Cryptography::DSAParameters dp)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::DotNetUtilities>::get(),
                            "GetDsaKeyPair",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::DSAParameters>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair, false>(nullptr, ___internal_method, dp);
}
 ::Org::BouncyCastle::Crypto::Parameters::DsaPublicKeyParameters ::Org::BouncyCastle::Security::DotNetUtilities::GetDsaPublicKey(::System::Security::Cryptography::DSA dsa)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::DotNetUtilities>::get(),
                            "GetDsaPublicKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::DSA>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Parameters::DsaPublicKeyParameters, false>(nullptr, ___internal_method, dsa);
}
 ::Org::BouncyCastle::Crypto::Parameters::DsaPublicKeyParameters ::Org::BouncyCastle::Security::DotNetUtilities::GetDsaPublicKey(::System::Security::Cryptography::DSAParameters dp)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::DotNetUtilities>::get(),
                            "GetDsaPublicKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::DSAParameters>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Parameters::DsaPublicKeyParameters, false>(nullptr, ___internal_method, dp);
}
 ::Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair ::Org::BouncyCastle::Security::DotNetUtilities::GetRsaKeyPair(::System::Security::Cryptography::RSA rsa)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::DotNetUtilities>::get(),
                            "GetRsaKeyPair",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::RSA>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair, false>(nullptr, ___internal_method, rsa);
}
 ::Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair ::Org::BouncyCastle::Security::DotNetUtilities::GetRsaKeyPair(::System::Security::Cryptography::RSAParameters rp)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::DotNetUtilities>::get(),
                            "GetRsaKeyPair",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::RSAParameters>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair, false>(nullptr, ___internal_method, rp);
}
 ::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters ::Org::BouncyCastle::Security::DotNetUtilities::GetRsaPublicKey(::System::Security::Cryptography::RSA rsa)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::DotNetUtilities>::get(),
                            "GetRsaPublicKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::RSA>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters, false>(nullptr, ___internal_method, rsa);
}
 ::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters ::Org::BouncyCastle::Security::DotNetUtilities::GetRsaPublicKey(::System::Security::Cryptography::RSAParameters rp)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::DotNetUtilities>::get(),
                            "GetRsaPublicKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::RSAParameters>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters, false>(nullptr, ___internal_method, rp);
}
 ::Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair ::Org::BouncyCastle::Security::DotNetUtilities::GetKeyPair(::System::Security::Cryptography::AsymmetricAlgorithm privateKey)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::DotNetUtilities>::get(),
                            "GetKeyPair",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::AsymmetricAlgorithm>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair, false>(nullptr, ___internal_method, privateKey);
}
 ::System::Security::Cryptography::RSA ::Org::BouncyCastle::Security::DotNetUtilities::ToRSA(::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters rsaKey)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::DotNetUtilities>::get(),
                            "ToRSA",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::RSA, false>(nullptr, ___internal_method, rsaKey);
}
 ::System::Security::Cryptography::RSA ::Org::BouncyCastle::Security::DotNetUtilities::ToRSA(::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters rsaKey, ::System::Security::Cryptography::CspParameters csp)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::DotNetUtilities>::get(),
                            "ToRSA",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::CspParameters>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::RSA, false>(nullptr, ___internal_method, rsaKey, csp);
}
 ::System::Security::Cryptography::RSA ::Org::BouncyCastle::Security::DotNetUtilities::ToRSA(::Org::BouncyCastle::Crypto::Parameters::RsaPrivateCrtKeyParameters privKey)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::DotNetUtilities>::get(),
                            "ToRSA",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Parameters::RsaPrivateCrtKeyParameters>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::RSA, false>(nullptr, ___internal_method, privKey);
}
 ::System::Security::Cryptography::RSA ::Org::BouncyCastle::Security::DotNetUtilities::ToRSA(::Org::BouncyCastle::Crypto::Parameters::RsaPrivateCrtKeyParameters privKey, ::System::Security::Cryptography::CspParameters csp)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::DotNetUtilities>::get(),
                            "ToRSA",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Parameters::RsaPrivateCrtKeyParameters>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::CspParameters>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::RSA, false>(nullptr, ___internal_method, privKey, csp);
}
 ::System::Security::Cryptography::RSA ::Org::BouncyCastle::Security::DotNetUtilities::ToRSA(::Org::BouncyCastle::Asn1::Pkcs::RsaPrivateKeyStructure privKey)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::DotNetUtilities>::get(),
                            "ToRSA",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Pkcs::RsaPrivateKeyStructure>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::RSA, false>(nullptr, ___internal_method, privKey);
}
 ::System::Security::Cryptography::RSA ::Org::BouncyCastle::Security::DotNetUtilities::ToRSA(::Org::BouncyCastle::Asn1::Pkcs::RsaPrivateKeyStructure privKey, ::System::Security::Cryptography::CspParameters csp)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::DotNetUtilities>::get(),
                            "ToRSA",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Pkcs::RsaPrivateKeyStructure>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::CspParameters>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::RSA, false>(nullptr, ___internal_method, privKey, csp);
}
 ::System::Security::Cryptography::RSAParameters ::Org::BouncyCastle::Security::DotNetUtilities::ToRSAParameters(::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters rsaKey)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::DotNetUtilities>::get(),
                            "ToRSAParameters",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::RSAParameters, false>(nullptr, ___internal_method, rsaKey);
}
 ::System::Security::Cryptography::RSAParameters ::Org::BouncyCastle::Security::DotNetUtilities::ToRSAParameters(::Org::BouncyCastle::Crypto::Parameters::RsaPrivateCrtKeyParameters privKey)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::DotNetUtilities>::get(),
                            "ToRSAParameters",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Parameters::RsaPrivateCrtKeyParameters>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::RSAParameters, false>(nullptr, ___internal_method, privKey);
}
 ::System::Security::Cryptography::RSAParameters ::Org::BouncyCastle::Security::DotNetUtilities::ToRSAParameters(::Org::BouncyCastle::Asn1::Pkcs::RsaPrivateKeyStructure privKey)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::DotNetUtilities>::get(),
                            "ToRSAParameters",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Pkcs::RsaPrivateKeyStructure>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::RSAParameters, false>(nullptr, ___internal_method, privKey);
}
 ::ArrayW<uint8_t> ::Org::BouncyCastle::Security::DotNetUtilities::ConvertRSAParametersField(::Org::BouncyCastle::Math::BigInteger n, int32_t size)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::DotNetUtilities>::get(),
                            "ConvertRSAParametersField",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::BigInteger>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(nullptr, ___internal_method, n, size);
}
 ::System::Security::Cryptography::RSA ::Org::BouncyCastle::Security::DotNetUtilities::CreateRSAProvider(::System::Security::Cryptography::RSAParameters rp)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::DotNetUtilities>::get(),
                            "CreateRSAProvider",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::RSAParameters>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::RSA, false>(nullptr, ___internal_method, rp);
}
 ::System::Security::Cryptography::RSA ::Org::BouncyCastle::Security::DotNetUtilities::CreateRSAProvider(::System::Security::Cryptography::RSAParameters rp, ::System::Security::Cryptography::CspParameters csp)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Security::DotNetUtilities>::get(),
                            "CreateRSAProvider",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::RSAParameters>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::CspParameters>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::RSA, false>(nullptr, ___internal_method, rp, csp);
}
} // end anonymous namespace
