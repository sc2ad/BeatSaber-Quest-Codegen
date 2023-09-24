#pragma once
#include "Org/BouncyCastle/Cmp/zzzz__ProtectedPkiMessageBuilder_def.hpp"
#include "Org/BouncyCastle/Asn1/Cmp/zzzz__PkiFreeText_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerGeneralizedTime_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__GeneralName_def.hpp"
#include "Org/BouncyCastle/X509/zzzz__X509Certificate_def.hpp"
#include "Org/BouncyCastle/Asn1/Cmp/zzzz__PkiHeader_def.hpp"
#include "Org/BouncyCastle/Asn1/Cmp/zzzz__PkiHeaderBuilder_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IMacFactory_def.hpp"
#include "Org/BouncyCastle/Asn1/Cmp/zzzz__PkiBody_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerBitString_def.hpp"
#include "System/Collections/zzzz__IList_def.hpp"
#include "Org/BouncyCastle/Cmp/zzzz__ProtectedPkiMessage_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__AlgorithmIdentifier_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ISignatureFactory_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IStreamCalculator_def.hpp"
#include "Org/BouncyCastle/Asn1/Cmp/zzzz__InfoTypeAndValue_def.hpp"
//  Writing Method size for method: Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder::*)(Org::BouncyCastle::Asn1::X509::GeneralName, Org::BouncyCastle::Asn1::X509::GeneralName)>(&Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x114ca28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::X509::GeneralName>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::X509::GeneralName>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder::*)(int32_t, Org::BouncyCastle::Asn1::X509::GeneralName, Org::BouncyCastle::Asn1::X509::GeneralName)>(&Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder::_ctor)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x114caa0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::X509::GeneralName>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::X509::GeneralName>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder.SetTransactionId
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder (Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder::*)(::ArrayW<uint8_t>)>(&Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder::SetTransactionId)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x114cb70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder>::get(),
                            "SetTransactionId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder.SetFreeText
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder (Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder::*)(Org::BouncyCastle::Asn1::Cmp::PkiFreeText)>(&Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder::SetFreeText)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x114cb9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder>::get(),
                            "SetFreeText",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::Cmp::PkiFreeText>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder.AddGeneralInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder (Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder::*)(Org::BouncyCastle::Asn1::Cmp::InfoTypeAndValue)>(&Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder::AddGeneralInfo)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x114cbcc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder>::get(),
                            "AddGeneralInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::Cmp::InfoTypeAndValue>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder.SetMessageTime
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder (Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder::*)(Org::BouncyCastle::Asn1::DerGeneralizedTime)>(&Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder::SetMessageTime)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x114cc80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder>::get(),
                            "SetMessageTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::DerGeneralizedTime>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder.SetRecipKID
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder (Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder::*)(::ArrayW<uint8_t>)>(&Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder::SetRecipKID)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x114ccac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder>::get(),
                            "SetRecipKID",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder.SetRecipNonce
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder (Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder::*)(::ArrayW<uint8_t>)>(&Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder::SetRecipNonce)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x114ccd8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder>::get(),
                            "SetRecipNonce",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder.SetSenderKID
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder (Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder::*)(::ArrayW<uint8_t>)>(&Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder::SetSenderKID)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x114cd08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder>::get(),
                            "SetSenderKID",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder.SetSenderNonce
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder (Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder::*)(::ArrayW<uint8_t>)>(&Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder::SetSenderNonce)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x114cd34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder>::get(),
                            "SetSenderNonce",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder.SetBody
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder (Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder::*)(Org::BouncyCastle::Asn1::Cmp::PkiBody)>(&Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder::SetBody)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x114cd60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder>::get(),
                            "SetBody",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::Cmp::PkiBody>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder.AddCmpCertificate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder (Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder::*)(Org::BouncyCastle::X509::X509Certificate)>(&Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder::AddCmpCertificate)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x114cd68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder>::get(),
                            "AddCmpCertificate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::X509::X509Certificate>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder.Build
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Cmp::ProtectedPkiMessage (Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder::*)(Org::BouncyCastle::Crypto::ISignatureFactory)>(&Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder::Build)> {
  constexpr static std::size_t size = 0x2ec;
  constexpr static std::size_t addrs = 0x114ce1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder>::get(),
                            "Build",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::ISignatureFactory>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder.Build
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Cmp::ProtectedPkiMessage (Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder::*)(Org::BouncyCastle::Crypto::IMacFactory)>(&Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder::Build)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0x114dac4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder>::get(),
                            "Build",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::IMacFactory>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder.FinalizeHeader
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder::*)(Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier)>(&Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder::FinalizeHeader)> {
  constexpr static std::size_t size = 0x2e0;
  constexpr static std::size_t addrs = 0x114d108;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder>::get(),
                            "FinalizeHeader",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder.FinalizeMessage
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Cmp::ProtectedPkiMessage (Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder::*)(Org::BouncyCastle::Asn1::Cmp::PkiHeader, Org::BouncyCastle::Asn1::DerBitString)>(&Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder::FinalizeMessage)> {
  constexpr static std::size_t size = 0x364;
  constexpr static std::size_t addrs = 0x114d760;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder>::get(),
                            "FinalizeMessage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::Cmp::PkiHeader>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::DerBitString>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder.CalculateSignature
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder::*)(Org::BouncyCastle::Crypto::IStreamCalculator, Org::BouncyCastle::Asn1::Cmp::PkiHeader, Org::BouncyCastle::Asn1::Cmp::PkiBody)>(&Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder::CalculateSignature)> {
  constexpr static std::size_t size = 0x378;
  constexpr static std::size_t addrs = 0x114d3e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder>::get(),
                            "CalculateSignature",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::IStreamCalculator>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::Cmp::PkiHeader>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::Cmp::PkiBody>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder::__set_hdrBuilBuilder(Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder>(value));
}
constexpr Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder::__get_hdrBuilBuilder() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder::__set_body(Org::BouncyCastle::Asn1::Cmp::PkiBody value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Asn1::Cmp::PkiBody, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Asn1::Cmp::PkiBody>(value));
}
constexpr Org::BouncyCastle::Asn1::Cmp::PkiBody Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder::__get_body() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Asn1::Cmp::PkiBody, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder::__set_generalInfos(System::Collections::IList value)  {
::cordl_internals::setInstanceField<System::Collections::IList, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::IList>(value));
}
constexpr System::Collections::IList Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder::__get_generalInfos() const {
return ::cordl_internals::getInstanceField<System::Collections::IList, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder::__set_extraCerts(System::Collections::IList value)  {
::cordl_internals::setInstanceField<System::Collections::IList, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::IList>(value));
}
constexpr System::Collections::IList Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder::__get_extraCerts() const {
return ::cordl_internals::getInstanceField<System::Collections::IList, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
 Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder::New_ctor(Org::BouncyCastle::Asn1::X509::GeneralName sender, Org::BouncyCastle::Asn1::X509::GeneralName recipient)  {
Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder o{THROW_UNLESS(::il2cpp_utils::New<Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder>(sender, recipient))};
return o;
}
 void Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder::_ctor(Org::BouncyCastle::Asn1::X509::GeneralName sender, Org::BouncyCastle::Asn1::X509::GeneralName recipient)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::X509::GeneralName>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::X509::GeneralName>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, sender, recipient);
}
 Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder::New_ctor(int32_t pvno, Org::BouncyCastle::Asn1::X509::GeneralName sender, Org::BouncyCastle::Asn1::X509::GeneralName recipient)  {
Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder o{THROW_UNLESS(::il2cpp_utils::New<Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder>(pvno, sender, recipient))};
return o;
}
 void Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder::_ctor(int32_t pvno, Org::BouncyCastle::Asn1::X509::GeneralName sender, Org::BouncyCastle::Asn1::X509::GeneralName recipient)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::X509::GeneralName>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::X509::GeneralName>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, pvno, sender, recipient);
}
 Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder::SetTransactionId(::ArrayW<uint8_t> tid)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder>::get(),
                            "SetTransactionId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder, false>(const_cast<void*>(instance), ___internal_method, tid);
}
 Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder::SetFreeText(Org::BouncyCastle::Asn1::Cmp::PkiFreeText freeText)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder>::get(),
                            "SetFreeText",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::Cmp::PkiFreeText>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder, false>(const_cast<void*>(instance), ___internal_method, freeText);
}
 Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder::AddGeneralInfo(Org::BouncyCastle::Asn1::Cmp::InfoTypeAndValue genInfo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder>::get(),
                            "AddGeneralInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::Cmp::InfoTypeAndValue>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder, false>(const_cast<void*>(instance), ___internal_method, genInfo);
}
 Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder::SetMessageTime(Org::BouncyCastle::Asn1::DerGeneralizedTime generalizedTime)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder>::get(),
                            "SetMessageTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::DerGeneralizedTime>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder, false>(const_cast<void*>(instance), ___internal_method, generalizedTime);
}
 Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder::SetRecipKID(::ArrayW<uint8_t> id)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder>::get(),
                            "SetRecipKID",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder, false>(const_cast<void*>(instance), ___internal_method, id);
}
 Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder::SetRecipNonce(::ArrayW<uint8_t> nonce)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder>::get(),
                            "SetRecipNonce",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder, false>(const_cast<void*>(instance), ___internal_method, nonce);
}
 Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder::SetSenderKID(::ArrayW<uint8_t> id)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder>::get(),
                            "SetSenderKID",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder, false>(const_cast<void*>(instance), ___internal_method, id);
}
 Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder::SetSenderNonce(::ArrayW<uint8_t> nonce)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder>::get(),
                            "SetSenderNonce",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder, false>(const_cast<void*>(instance), ___internal_method, nonce);
}
 Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder::SetBody(Org::BouncyCastle::Asn1::Cmp::PkiBody body)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder>::get(),
                            "SetBody",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::Cmp::PkiBody>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder, false>(const_cast<void*>(instance), ___internal_method, body);
}
 Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder::AddCmpCertificate(Org::BouncyCastle::X509::X509Certificate certificate)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder>::get(),
                            "AddCmpCertificate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::X509::X509Certificate>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder, false>(const_cast<void*>(instance), ___internal_method, certificate);
}
 Org::BouncyCastle::Cmp::ProtectedPkiMessage Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder::Build(Org::BouncyCastle::Crypto::ISignatureFactory signatureFactory)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder>::get(),
                            "Build",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::ISignatureFactory>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Cmp::ProtectedPkiMessage, false>(const_cast<void*>(instance), ___internal_method, signatureFactory);
}
 Org::BouncyCastle::Cmp::ProtectedPkiMessage Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder::Build(Org::BouncyCastle::Crypto::IMacFactory factory)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder>::get(),
                            "Build",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::IMacFactory>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Cmp::ProtectedPkiMessage, false>(const_cast<void*>(instance), ___internal_method, factory);
}
 void Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder::FinalizeHeader(Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier algorithmIdentifier)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder>::get(),
                            "FinalizeHeader",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, algorithmIdentifier);
}
 Org::BouncyCastle::Cmp::ProtectedPkiMessage Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder::FinalizeMessage(Org::BouncyCastle::Asn1::Cmp::PkiHeader header, Org::BouncyCastle::Asn1::DerBitString protection)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder>::get(),
                            "FinalizeMessage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::Cmp::PkiHeader>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::DerBitString>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Cmp::ProtectedPkiMessage, false>(const_cast<void*>(instance), ___internal_method, header, protection);
}
 ::ArrayW<uint8_t> Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder::CalculateSignature(Org::BouncyCastle::Crypto::IStreamCalculator signer, Org::BouncyCastle::Asn1::Cmp::PkiHeader header, Org::BouncyCastle::Asn1::Cmp::PkiBody body)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder>::get(),
                            "CalculateSignature",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::IStreamCalculator>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::Cmp::PkiHeader>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::Cmp::PkiBody>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(const_cast<void*>(instance), ___internal_method, signer, header, body);
}
