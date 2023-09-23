#pragma once
#include "Org/BouncyCastle/Crmf/zzzz__CertificateRequestMessageBuilder_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__SubjectPublicKeyInfo_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__Time_def.hpp"
#include "Org/BouncyCastle/Asn1/Crmf/zzzz__SubsequentMessage_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ISignatureFactory_def.hpp"
#include "Org/BouncyCastle/Crmf/zzzz__PKMacBuilder_def.hpp"
#include "Org/BouncyCastle/Crmf/zzzz__IControl_def.hpp"
#include "System/Collections/zzzz__IList_def.hpp"
#include "Org/BouncyCastle/Asn1/Crmf/zzzz__PKMacValue_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerObjectIdentifier_def.hpp"
#include "Org/BouncyCastle/Asn1/Crmf/zzzz__CertTemplateBuilder_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__GeneralName_def.hpp"
#include "Org/BouncyCastle/Asn1/Crmf/zzzz__PopoPrivKey_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__X509ExtensionsGenerator_def.hpp"
#include "Org/BouncyCastle/Math/zzzz__BigInteger_def.hpp"
#include "Org/BouncyCastle/Crmf/zzzz__CertificateRequestMessage_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__X509Name_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Null_def.hpp"
//  Writing Method size for method: Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder::*)(Org::BouncyCastle::Math::BigInteger)>(&Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder::_ctor)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x11838d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::BigInteger>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder.SetPublicKey
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder (Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder::*)(Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo)>(&Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder::SetPublicKey)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x11839b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder>::get(),
                            "SetPublicKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder.SetIssuer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder (Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder::*)(Org::BouncyCastle::Asn1::X509::X509Name)>(&Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder::SetIssuer)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x11839e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder>::get(),
                            "SetIssuer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::X509::X509Name>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder.SetSubject
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder (Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder::*)(Org::BouncyCastle::Asn1::X509::X509Name)>(&Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder::SetSubject)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1183a14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder>::get(),
                            "SetSubject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::X509::X509Name>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder.SetSerialNumber
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder (Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder::*)(Org::BouncyCastle::Math::BigInteger)>(&Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder::SetSerialNumber)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1183a44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder>::get(),
                            "SetSerialNumber",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::BigInteger>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder.SetValidity
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder (Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder::*)(Org::BouncyCastle::Asn1::X509::Time, Org::BouncyCastle::Asn1::X509::Time)>(&Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder::SetValidity)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x1183ad4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder>::get(),
                            "SetValidity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::X509::Time>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::X509::Time>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder.AddExtension
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder (Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder::*)(Org::BouncyCastle::Asn1::DerObjectIdentifier, bool, Org::BouncyCastle::Asn1::Asn1Encodable)>(&Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder::AddExtension)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x1183b68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder>::get(),
                            "AddExtension",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::DerObjectIdentifier>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::Asn1Encodable>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder.AddExtension
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder (Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder::*)(Org::BouncyCastle::Asn1::DerObjectIdentifier, bool, ::ArrayW<uint8_t>)>(&Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder::AddExtension)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x1183b94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder>::get(),
                            "AddExtension",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::DerObjectIdentifier>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder.AddControl
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder (Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder::*)(Org::BouncyCastle::Crmf::IControl)>(&Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder::AddControl)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x1183bc0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder>::get(),
                            "AddControl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crmf::IControl>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder.SetProofOfPossessionSignKeySigner
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder (Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder::*)(Org::BouncyCastle::Crypto::ISignatureFactory)>(&Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder::SetProofOfPossessionSignKeySigner)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x1183c74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder>::get(),
                            "SetProofOfPossessionSignKeySigner",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::ISignatureFactory>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder.SetProofOfPossessionSubsequentMessage
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder (Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder::*)(Org::BouncyCastle::Asn1::Crmf::SubsequentMessage)>(&Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder::SetProofOfPossessionSubsequentMessage)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x1183ce8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder>::get(),
                            "SetProofOfPossessionSubsequentMessage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::Crmf::SubsequentMessage>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder.SetProofOfPossessionSubsequentMessage
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder (Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder::*)(int32_t, Org::BouncyCastle::Asn1::Crmf::SubsequentMessage)>(&Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder::SetProofOfPossessionSubsequentMessage)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x1183dc0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder>::get(),
                            "SetProofOfPossessionSubsequentMessage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::Crmf::SubsequentMessage>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder.SetProofOfPossessionAgreeMac
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder (Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder::*)(Org::BouncyCastle::Asn1::Crmf::PKMacValue)>(&Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder::SetProofOfPossessionAgreeMac)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x1183ee4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder>::get(),
                            "SetProofOfPossessionAgreeMac",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::Crmf::PKMacValue>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder.SetProofOfPossessionRaVerified
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder (Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder::*)()>(&Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder::SetProofOfPossessionRaVerified)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1183f58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder>::get(),
                            "SetProofOfPossessionRaVerified",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder.SetAuthInfoPKMAC
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder (Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder::*)(Org::BouncyCastle::Crmf::PKMacBuilder, ::ArrayW<char16_t>)>(&Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder::SetAuthInfoPKMAC)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1184018;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder>::get(),
                            "SetAuthInfoPKMAC",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crmf::PKMacBuilder>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder.SetAuthInfoSender
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder (Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder::*)(Org::BouncyCastle::Asn1::X509::X509Name)>(&Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder::SetAuthInfoSender)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x1184020;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder>::get(),
                            "SetAuthInfoSender",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::X509::X509Name>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder.SetAuthInfoSender
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder (Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder::*)(Org::BouncyCastle::Asn1::X509::GeneralName)>(&Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder::SetAuthInfoSender)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1184094;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder>::get(),
                            "SetAuthInfoSender",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::X509::GeneralName>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder.Build
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Crmf::CertificateRequestMessage (Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder::*)()>(&Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder::Build)> {
  constexpr static std::size_t size = 0x95c;
  constexpr static std::size_t addrs = 0x118409c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder>::get(),
                            "Build",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder::__set__certReqId(Org::BouncyCastle::Math::BigInteger value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Math::BigInteger, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Math::BigInteger>(value));
}
constexpr Org::BouncyCastle::Math::BigInteger Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder::__get__certReqId() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Math::BigInteger, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder::__set__extGenerator(Org::BouncyCastle::Asn1::X509::X509ExtensionsGenerator value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Asn1::X509::X509ExtensionsGenerator, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Asn1::X509::X509ExtensionsGenerator>(value));
}
constexpr Org::BouncyCastle::Asn1::X509::X509ExtensionsGenerator Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder::__get__extGenerator() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Asn1::X509::X509ExtensionsGenerator, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder::__set__templateBuilder(Org::BouncyCastle::Asn1::Crmf::CertTemplateBuilder value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Asn1::Crmf::CertTemplateBuilder, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Asn1::Crmf::CertTemplateBuilder>(value));
}
constexpr Org::BouncyCastle::Asn1::Crmf::CertTemplateBuilder Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder::__get__templateBuilder() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Asn1::Crmf::CertTemplateBuilder, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder::__set__controls(System::Collections::IList value)  {
::cordl_internals::setInstanceField<System::Collections::IList, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::IList>(value));
}
constexpr System::Collections::IList Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder::__get__controls() const {
return ::cordl_internals::getInstanceField<System::Collections::IList, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder::__set__popSigner(Org::BouncyCastle::Crypto::ISignatureFactory value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Crypto::ISignatureFactory, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Crypto::ISignatureFactory>(value));
}
constexpr Org::BouncyCastle::Crypto::ISignatureFactory Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder::__get__popSigner() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Crypto::ISignatureFactory, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder::__set__pkMacBuilder(Org::BouncyCastle::Crmf::PKMacBuilder value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Crmf::PKMacBuilder, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Crmf::PKMacBuilder>(value));
}
constexpr Org::BouncyCastle::Crmf::PKMacBuilder Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder::__get__pkMacBuilder() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Crmf::PKMacBuilder, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder::__set__password(::ArrayW<char16_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<char16_t>, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<char16_t>>(value));
}
constexpr ::ArrayW<char16_t> Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder::__get__password() const {
return ::cordl_internals::getInstanceField<::ArrayW<char16_t>, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder::__set__sender(Org::BouncyCastle::Asn1::X509::GeneralName value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Asn1::X509::GeneralName, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Asn1::X509::GeneralName>(value));
}
constexpr Org::BouncyCastle::Asn1::X509::GeneralName Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder::__get__sender() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Asn1::X509::GeneralName, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder::__set__popoType(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder::__get__popoType() const {
return ::cordl_internals::getInstanceField<int32_t, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder::__set__popoPrivKey(Org::BouncyCastle::Asn1::Crmf::PopoPrivKey value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Asn1::Crmf::PopoPrivKey, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Asn1::Crmf::PopoPrivKey>(value));
}
constexpr Org::BouncyCastle::Asn1::Crmf::PopoPrivKey Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder::__get__popoPrivKey() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Asn1::Crmf::PopoPrivKey, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder::__set__popRaVerified(Org::BouncyCastle::Asn1::Asn1Null value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Asn1::Asn1Null, 0x60>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Asn1::Asn1Null>(value));
}
constexpr Org::BouncyCastle::Asn1::Asn1Null Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder::__get__popRaVerified() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Asn1::Asn1Null, 0x60>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder::__set__agreeMac(Org::BouncyCastle::Asn1::Crmf::PKMacValue value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Asn1::Crmf::PKMacValue, 0x68>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Asn1::Crmf::PKMacValue>(value));
}
constexpr Org::BouncyCastle::Asn1::Crmf::PKMacValue Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder::__get__agreeMac() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Asn1::Crmf::PKMacValue, 0x68>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "certReqId", ty: "Org::BouncyCastle::Math::BigInteger", modifiers: "", def_value: None }]
 Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder::CertificateRequestMessageBuilder(Org::BouncyCastle::Math::BigInteger certReqId)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<CertificateRequestMessageBuilder>(certReqId))) {}
 void Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder::_ctor(Org::BouncyCastle::Math::BigInteger certReqId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::BigInteger>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, certReqId);
}
 Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder::SetPublicKey(Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo publicKeyInfo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder>::get(),
                            "SetPublicKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder, false>(const_cast<void*>(instance), ___internal_method, publicKeyInfo);
}
 Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder::SetIssuer(Org::BouncyCastle::Asn1::X509::X509Name issuer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder>::get(),
                            "SetIssuer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::X509::X509Name>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder, false>(const_cast<void*>(instance), ___internal_method, issuer);
}
 Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder::SetSubject(Org::BouncyCastle::Asn1::X509::X509Name subject)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder>::get(),
                            "SetSubject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::X509::X509Name>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder, false>(const_cast<void*>(instance), ___internal_method, subject);
}
 Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder::SetSerialNumber(Org::BouncyCastle::Math::BigInteger serialNumber)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder>::get(),
                            "SetSerialNumber",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::BigInteger>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder, false>(const_cast<void*>(instance), ___internal_method, serialNumber);
}
 Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder::SetValidity(Org::BouncyCastle::Asn1::X509::Time notBefore, Org::BouncyCastle::Asn1::X509::Time notAfter)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder>::get(),
                            "SetValidity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::X509::Time>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::X509::Time>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder, false>(const_cast<void*>(instance), ___internal_method, notBefore, notAfter);
}
 Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder::AddExtension(Org::BouncyCastle::Asn1::DerObjectIdentifier oid, bool critical, Org::BouncyCastle::Asn1::Asn1Encodable value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder>::get(),
                            "AddExtension",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::DerObjectIdentifier>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::Asn1Encodable>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder, false>(const_cast<void*>(instance), ___internal_method, oid, critical, value);
}
 Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder::AddExtension(Org::BouncyCastle::Asn1::DerObjectIdentifier oid, bool critical, ::ArrayW<uint8_t> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder>::get(),
                            "AddExtension",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::DerObjectIdentifier>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder, false>(const_cast<void*>(instance), ___internal_method, oid, critical, value);
}
 Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder::AddControl(Org::BouncyCastle::Crmf::IControl control)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder>::get(),
                            "AddControl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crmf::IControl>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder, false>(const_cast<void*>(instance), ___internal_method, control);
}
 Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder::SetProofOfPossessionSignKeySigner(Org::BouncyCastle::Crypto::ISignatureFactory popoSignatureFactory)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder>::get(),
                            "SetProofOfPossessionSignKeySigner",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::ISignatureFactory>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder, false>(const_cast<void*>(instance), ___internal_method, popoSignatureFactory);
}
 Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder::SetProofOfPossessionSubsequentMessage(Org::BouncyCastle::Asn1::Crmf::SubsequentMessage msg)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder>::get(),
                            "SetProofOfPossessionSubsequentMessage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::Crmf::SubsequentMessage>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder, false>(const_cast<void*>(instance), ___internal_method, msg);
}
 Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder::SetProofOfPossessionSubsequentMessage(int32_t type, Org::BouncyCastle::Asn1::Crmf::SubsequentMessage msg)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder>::get(),
                            "SetProofOfPossessionSubsequentMessage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::Crmf::SubsequentMessage>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder, false>(const_cast<void*>(instance), ___internal_method, type, msg);
}
 Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder::SetProofOfPossessionAgreeMac(Org::BouncyCastle::Asn1::Crmf::PKMacValue macValue)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder>::get(),
                            "SetProofOfPossessionAgreeMac",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::Crmf::PKMacValue>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder, false>(const_cast<void*>(instance), ___internal_method, macValue);
}
 Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder::SetProofOfPossessionRaVerified()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder>::get(),
                            "SetProofOfPossessionRaVerified",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder, false>(const_cast<void*>(instance), ___internal_method);
}
 Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder::SetAuthInfoPKMAC(Org::BouncyCastle::Crmf::PKMacBuilder pkmacFactory, ::ArrayW<char16_t> password)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder>::get(),
                            "SetAuthInfoPKMAC",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crmf::PKMacBuilder>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder, false>(const_cast<void*>(instance), ___internal_method, pkmacFactory, password);
}
 Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder::SetAuthInfoSender(Org::BouncyCastle::Asn1::X509::X509Name sender)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder>::get(),
                            "SetAuthInfoSender",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::X509::X509Name>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder, false>(const_cast<void*>(instance), ___internal_method, sender);
}
 Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder::SetAuthInfoSender(Org::BouncyCastle::Asn1::X509::GeneralName sender)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder>::get(),
                            "SetAuthInfoSender",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::X509::GeneralName>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder, false>(const_cast<void*>(instance), ___internal_method, sender);
}
 Org::BouncyCastle::Crmf::CertificateRequestMessage Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder::Build()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder>::get(),
                            "Build",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Crmf::CertificateRequestMessage, false>(const_cast<void*>(instance), ___internal_method);
}
