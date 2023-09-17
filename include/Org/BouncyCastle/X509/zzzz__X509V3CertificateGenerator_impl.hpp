#pragma once
namespace {
#include "Org/BouncyCastle/X509/zzzz__X509V3CertificateGenerator_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__TbsCertificateStructure_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "Org/BouncyCastle/X509/zzzz__X509Certificate_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__AlgorithmIdentifier_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__AsymmetricKeyParameter_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__V3TbsCertificateGenerator_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerObjectIdentifier_def.hpp"
#include "Org/BouncyCastle/Math/zzzz__BigInteger_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__X509ExtensionsGenerator_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerBitString_def.hpp"
#include "Org/BouncyCastle/Security/zzzz__SecureRandom_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ISignatureFactory_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__X509Name_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509V3CertificateGenerator._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::X509::X509V3CertificateGenerator::*)()>(&::Org::BouncyCastle::X509::X509V3CertificateGenerator::_ctor)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x10fc208;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::X509V3CertificateGenerator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509V3CertificateGenerator.Reset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::X509::X509V3CertificateGenerator::*)()>(&::Org::BouncyCastle::X509::X509V3CertificateGenerator::Reset)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x10fc2a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::X509V3CertificateGenerator>::get(),
                            "Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509V3CertificateGenerator.SetSerialNumber
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::X509::X509V3CertificateGenerator::*)(::Org::BouncyCastle::Math::BigInteger)>(&::Org::BouncyCastle::X509::X509V3CertificateGenerator::SetSerialNumber)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x10fc310;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::X509V3CertificateGenerator>::get(),
                            "SetSerialNumber",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::BigInteger>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509V3CertificateGenerator.SetIssuerDN
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::X509::X509V3CertificateGenerator::*)(::Org::BouncyCastle::Asn1::X509::X509Name)>(&::Org::BouncyCastle::X509::X509V3CertificateGenerator::SetIssuerDN)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x10fc3f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::X509V3CertificateGenerator>::get(),
                            "SetIssuerDN",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::X509Name>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509V3CertificateGenerator.SetNotBefore
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::X509::X509V3CertificateGenerator::*)(::System::DateTime)>(&::Org::BouncyCastle::X509::X509V3CertificateGenerator::SetNotBefore)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x10fc40c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::X509V3CertificateGenerator>::get(),
                            "SetNotBefore",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509V3CertificateGenerator.SetNotAfter
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::X509::X509V3CertificateGenerator::*)(::System::DateTime)>(&::Org::BouncyCastle::X509::X509V3CertificateGenerator::SetNotAfter)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x10fc484;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::X509V3CertificateGenerator>::get(),
                            "SetNotAfter",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509V3CertificateGenerator.SetSubjectDN
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::X509::X509V3CertificateGenerator::*)(::Org::BouncyCastle::Asn1::X509::X509Name)>(&::Org::BouncyCastle::X509::X509V3CertificateGenerator::SetSubjectDN)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x10fc4fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::X509V3CertificateGenerator>::get(),
                            "SetSubjectDN",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::X509Name>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509V3CertificateGenerator.SetPublicKey
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::X509::X509V3CertificateGenerator::*)(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter)>(&::Org::BouncyCastle::X509::X509V3CertificateGenerator::SetPublicKey)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x10fc518;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::X509V3CertificateGenerator>::get(),
                            "SetPublicKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509V3CertificateGenerator.SetSignatureAlgorithm
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::X509::X509V3CertificateGenerator::*)(::StringW)>(&::Org::BouncyCastle::X509::X509V3CertificateGenerator::SetSignatureAlgorithm)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x10fc53c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::X509V3CertificateGenerator>::get(),
                            "SetSignatureAlgorithm",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509V3CertificateGenerator.SetSubjectUniqueID
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::X509::X509V3CertificateGenerator::*)(::ArrayW<bool>)>(&::Org::BouncyCastle::X509::X509V3CertificateGenerator::SetSubjectUniqueID)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x10fc6a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::X509V3CertificateGenerator>::get(),
                            "SetSubjectUniqueID",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<bool>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509V3CertificateGenerator.SetIssuerUniqueID
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::X509::X509V3CertificateGenerator::*)(::ArrayW<bool>)>(&::Org::BouncyCastle::X509::X509V3CertificateGenerator::SetIssuerUniqueID)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x10fc820;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::X509V3CertificateGenerator>::get(),
                            "SetIssuerUniqueID",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<bool>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509V3CertificateGenerator.booleanToBitString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::DerBitString (::Org::BouncyCastle::X509::X509V3CertificateGenerator::*)(::ArrayW<bool>)>(&::Org::BouncyCastle::X509::X509V3CertificateGenerator::booleanToBitString)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x10fc6c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::X509V3CertificateGenerator>::get(),
                            "booleanToBitString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<bool>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509V3CertificateGenerator.AddExtension
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::X509::X509V3CertificateGenerator::*)(::StringW, bool, ::Org::BouncyCastle::Asn1::Asn1Encodable)>(&::Org::BouncyCastle::X509::X509V3CertificateGenerator::AddExtension)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x10fc840;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::X509V3CertificateGenerator>::get(),
                            "AddExtension",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1Encodable>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509V3CertificateGenerator.AddExtension
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::X509::X509V3CertificateGenerator::*)(::Org::BouncyCastle::Asn1::DerObjectIdentifier, bool, ::Org::BouncyCastle::Asn1::Asn1Encodable)>(&::Org::BouncyCastle::X509::X509V3CertificateGenerator::AddExtension)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x10fc8d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::X509V3CertificateGenerator>::get(),
                            "AddExtension",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DerObjectIdentifier>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1Encodable>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509V3CertificateGenerator.AddExtension
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::X509::X509V3CertificateGenerator::*)(::StringW, bool, ::ArrayW<uint8_t>)>(&::Org::BouncyCastle::X509::X509V3CertificateGenerator::AddExtension)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x10fc8f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::X509V3CertificateGenerator>::get(),
                            "AddExtension",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509V3CertificateGenerator.AddExtension
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::X509::X509V3CertificateGenerator::*)(::Org::BouncyCastle::Asn1::DerObjectIdentifier, bool, ::ArrayW<uint8_t>)>(&::Org::BouncyCastle::X509::X509V3CertificateGenerator::AddExtension)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x10fc9c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::X509V3CertificateGenerator>::get(),
                            "AddExtension",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DerObjectIdentifier>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509V3CertificateGenerator.CopyAndAddExtension
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::X509::X509V3CertificateGenerator::*)(::StringW, bool, ::Org::BouncyCastle::X509::X509Certificate)>(&::Org::BouncyCastle::X509::X509V3CertificateGenerator::CopyAndAddExtension)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x10fca58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::X509V3CertificateGenerator>::get(),
                            "CopyAndAddExtension",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::X509Certificate>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509V3CertificateGenerator.CopyAndAddExtension
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::X509::X509V3CertificateGenerator::*)(::Org::BouncyCastle::Asn1::DerObjectIdentifier, bool, ::Org::BouncyCastle::X509::X509Certificate)>(&::Org::BouncyCastle::X509::X509V3CertificateGenerator::CopyAndAddExtension)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x10fcae4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::X509V3CertificateGenerator>::get(),
                            "CopyAndAddExtension",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DerObjectIdentifier>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::X509Certificate>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509V3CertificateGenerator.Generate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::X509::X509Certificate (::Org::BouncyCastle::X509::X509V3CertificateGenerator::*)(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter)>(&::Org::BouncyCastle::X509::X509V3CertificateGenerator::Generate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x10fcc90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::X509V3CertificateGenerator>::get(),
                            "Generate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509V3CertificateGenerator.Generate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::X509::X509Certificate (::Org::BouncyCastle::X509::X509V3CertificateGenerator::*)(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter, ::Org::BouncyCastle::Security::SecureRandom)>(&::Org::BouncyCastle::X509::X509V3CertificateGenerator::Generate)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x10fcc98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::X509V3CertificateGenerator>::get(),
                            "Generate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Security::SecureRandom>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509V3CertificateGenerator.Generate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::X509::X509Certificate (::Org::BouncyCastle::X509::X509V3CertificateGenerator::*)(::Org::BouncyCastle::Crypto::ISignatureFactory)>(&::Org::BouncyCastle::X509::X509V3CertificateGenerator::Generate)> {
  constexpr static std::size_t size = 0x4a8;
  constexpr static std::size_t addrs = 0x10fcd1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::X509V3CertificateGenerator>::get(),
                            "Generate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::ISignatureFactory>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509V3CertificateGenerator.GenerateJcaObject
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::X509::X509Certificate (::Org::BouncyCastle::X509::X509V3CertificateGenerator::*)(::Org::BouncyCastle::Asn1::X509::TbsCertificateStructure, ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier, ::ArrayW<uint8_t>)>(&::Org::BouncyCastle::X509::X509V3CertificateGenerator::GenerateJcaObject)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x10fd1c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::X509V3CertificateGenerator>::get(),
                            "GenerateJcaObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::TbsCertificateStructure>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509V3CertificateGenerator.get_SignatureAlgNames
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerable (::Org::BouncyCastle::X509::X509V3CertificateGenerator::*)()>(&::Org::BouncyCastle::X509::X509V3CertificateGenerator::get_SignatureAlgNames)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x10fd29c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::X509V3CertificateGenerator>::get(),
                            "get_SignatureAlgNames",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::Org::BouncyCastle::X509::X509V3CertificateGenerator::__set_extGenerator(::Org::BouncyCastle::Asn1::X509::X509ExtensionsGenerator value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Asn1::X509::X509ExtensionsGenerator, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::Org::BouncyCastle::Asn1::X509::X509ExtensionsGenerator>(value));
}
constexpr ::Org::BouncyCastle::Asn1::X509::X509ExtensionsGenerator ::Org::BouncyCastle::X509::X509V3CertificateGenerator::__get_extGenerator() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Asn1::X509::X509ExtensionsGenerator, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Org::BouncyCastle::X509::X509V3CertificateGenerator::__set_tbsGen(::Org::BouncyCastle::Asn1::X509::V3TbsCertificateGenerator value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Asn1::X509::V3TbsCertificateGenerator, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::Org::BouncyCastle::Asn1::X509::V3TbsCertificateGenerator>(value));
}
constexpr ::Org::BouncyCastle::Asn1::X509::V3TbsCertificateGenerator ::Org::BouncyCastle::X509::X509V3CertificateGenerator::__get_tbsGen() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Asn1::X509::V3TbsCertificateGenerator, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Org::BouncyCastle::X509::X509V3CertificateGenerator::__set_sigOid(::Org::BouncyCastle::Asn1::DerObjectIdentifier value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Asn1::DerObjectIdentifier, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier>(value));
}
constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier ::Org::BouncyCastle::X509::X509V3CertificateGenerator::__get_sigOid() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Asn1::DerObjectIdentifier, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Org::BouncyCastle::X509::X509V3CertificateGenerator::__set_sigAlgId(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier>(value));
}
constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier ::Org::BouncyCastle::X509::X509V3CertificateGenerator::__get_sigAlgId() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Org::BouncyCastle::X509::X509V3CertificateGenerator::__set_signatureAlgorithm(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::Org::BouncyCastle::X509::X509V3CertificateGenerator::__get_signatureAlgorithm() const {
return ::cordl_internals::getInstanceField<::StringW, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 ::Org::BouncyCastle::X509::X509V3CertificateGenerator::X509V3CertificateGenerator()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<X509V3CertificateGenerator>())) {}
 void ::Org::BouncyCastle::X509::X509V3CertificateGenerator::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::X509V3CertificateGenerator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::Org::BouncyCastle::X509::X509V3CertificateGenerator::Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::X509V3CertificateGenerator>::get(),
                            "Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::Org::BouncyCastle::X509::X509V3CertificateGenerator::SetSerialNumber(::Org::BouncyCastle::Math::BigInteger serialNumber)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::X509V3CertificateGenerator>::get(),
                            "SetSerialNumber",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::BigInteger>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, serialNumber);
}
 void ::Org::BouncyCastle::X509::X509V3CertificateGenerator::SetIssuerDN(::Org::BouncyCastle::Asn1::X509::X509Name issuer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::X509V3CertificateGenerator>::get(),
                            "SetIssuerDN",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::X509Name>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, issuer);
}
 void ::Org::BouncyCastle::X509::X509V3CertificateGenerator::SetNotBefore(::System::DateTime date)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::X509V3CertificateGenerator>::get(),
                            "SetNotBefore",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, date);
}
 void ::Org::BouncyCastle::X509::X509V3CertificateGenerator::SetNotAfter(::System::DateTime date)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::X509V3CertificateGenerator>::get(),
                            "SetNotAfter",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, date);
}
 void ::Org::BouncyCastle::X509::X509V3CertificateGenerator::SetSubjectDN(::Org::BouncyCastle::Asn1::X509::X509Name subject)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::X509V3CertificateGenerator>::get(),
                            "SetSubjectDN",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::X509Name>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, subject);
}
 void ::Org::BouncyCastle::X509::X509V3CertificateGenerator::SetPublicKey(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter publicKey)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::X509V3CertificateGenerator>::get(),
                            "SetPublicKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, publicKey);
}
 void ::Org::BouncyCastle::X509::X509V3CertificateGenerator::SetSignatureAlgorithm(::StringW signatureAlgorithm)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::X509V3CertificateGenerator>::get(),
                            "SetSignatureAlgorithm",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, signatureAlgorithm);
}
 void ::Org::BouncyCastle::X509::X509V3CertificateGenerator::SetSubjectUniqueID(::ArrayW<bool> uniqueID)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::X509V3CertificateGenerator>::get(),
                            "SetSubjectUniqueID",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<bool>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, uniqueID);
}
 void ::Org::BouncyCastle::X509::X509V3CertificateGenerator::SetIssuerUniqueID(::ArrayW<bool> uniqueID)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::X509V3CertificateGenerator>::get(),
                            "SetIssuerUniqueID",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<bool>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, uniqueID);
}
 ::Org::BouncyCastle::Asn1::DerBitString ::Org::BouncyCastle::X509::X509V3CertificateGenerator::booleanToBitString(::ArrayW<bool> id)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::X509V3CertificateGenerator>::get(),
                            "booleanToBitString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<bool>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::DerBitString, false>(const_cast<void*>(instance), ___internal_method, id);
}
 void ::Org::BouncyCastle::X509::X509V3CertificateGenerator::AddExtension(::StringW oid, bool critical, ::Org::BouncyCastle::Asn1::Asn1Encodable extensionValue)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::X509V3CertificateGenerator>::get(),
                            "AddExtension",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1Encodable>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, oid, critical, extensionValue);
}
 void ::Org::BouncyCastle::X509::X509V3CertificateGenerator::AddExtension(::Org::BouncyCastle::Asn1::DerObjectIdentifier oid, bool critical, ::Org::BouncyCastle::Asn1::Asn1Encodable extensionValue)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::X509V3CertificateGenerator>::get(),
                            "AddExtension",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DerObjectIdentifier>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1Encodable>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, oid, critical, extensionValue);
}
 void ::Org::BouncyCastle::X509::X509V3CertificateGenerator::AddExtension(::StringW oid, bool critical, ::ArrayW<uint8_t> extensionValue)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::X509V3CertificateGenerator>::get(),
                            "AddExtension",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, oid, critical, extensionValue);
}
 void ::Org::BouncyCastle::X509::X509V3CertificateGenerator::AddExtension(::Org::BouncyCastle::Asn1::DerObjectIdentifier oid, bool critical, ::ArrayW<uint8_t> extensionValue)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::X509V3CertificateGenerator>::get(),
                            "AddExtension",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DerObjectIdentifier>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, oid, critical, extensionValue);
}
 void ::Org::BouncyCastle::X509::X509V3CertificateGenerator::CopyAndAddExtension(::StringW oid, bool critical, ::Org::BouncyCastle::X509::X509Certificate cert)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::X509V3CertificateGenerator>::get(),
                            "CopyAndAddExtension",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::X509Certificate>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, oid, critical, cert);
}
 void ::Org::BouncyCastle::X509::X509V3CertificateGenerator::CopyAndAddExtension(::Org::BouncyCastle::Asn1::DerObjectIdentifier oid, bool critical, ::Org::BouncyCastle::X509::X509Certificate cert)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::X509V3CertificateGenerator>::get(),
                            "CopyAndAddExtension",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DerObjectIdentifier>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::X509Certificate>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, oid, critical, cert);
}
 ::Org::BouncyCastle::X509::X509Certificate ::Org::BouncyCastle::X509::X509V3CertificateGenerator::Generate(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter privateKey)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::X509V3CertificateGenerator>::get(),
                            "Generate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::X509::X509Certificate, false>(const_cast<void*>(instance), ___internal_method, privateKey);
}
 ::Org::BouncyCastle::X509::X509Certificate ::Org::BouncyCastle::X509::X509V3CertificateGenerator::Generate(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter privateKey, ::Org::BouncyCastle::Security::SecureRandom random)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::X509V3CertificateGenerator>::get(),
                            "Generate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Security::SecureRandom>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::X509::X509Certificate, false>(const_cast<void*>(instance), ___internal_method, privateKey, random);
}
 ::Org::BouncyCastle::X509::X509Certificate ::Org::BouncyCastle::X509::X509V3CertificateGenerator::Generate(::Org::BouncyCastle::Crypto::ISignatureFactory signatureCalculatorFactory)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::X509V3CertificateGenerator>::get(),
                            "Generate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::ISignatureFactory>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::X509::X509Certificate, false>(const_cast<void*>(instance), ___internal_method, signatureCalculatorFactory);
}
 ::Org::BouncyCastle::X509::X509Certificate ::Org::BouncyCastle::X509::X509V3CertificateGenerator::GenerateJcaObject(::Org::BouncyCastle::Asn1::X509::TbsCertificateStructure tbsCert, ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier sigAlg, ::ArrayW<uint8_t> signature)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::X509V3CertificateGenerator>::get(),
                            "GenerateJcaObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::TbsCertificateStructure>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::X509::X509Certificate, false>(const_cast<void*>(instance), ___internal_method, tbsCert, sigAlg, signature);
}
 ::System::Collections::IEnumerable ::Org::BouncyCastle::X509::X509V3CertificateGenerator::get_SignatureAlgNames()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::X509V3CertificateGenerator>::get(),
                            "get_SignatureAlgNames",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerable, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
