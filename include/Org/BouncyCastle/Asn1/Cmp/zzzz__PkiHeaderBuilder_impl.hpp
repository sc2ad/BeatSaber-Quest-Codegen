#pragma once
#include "Org/BouncyCastle/Asn1/Cmp/zzzz__PkiHeaderBuilder_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__GeneralName_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1OctetString_def.hpp"
#include "Org/BouncyCastle/Asn1/Cmp/zzzz__PkiFreeText_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerGeneralizedTime_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__AlgorithmIdentifier_def.hpp"
#include "Org/BouncyCastle/Asn1/Cmp/zzzz__InfoTypeAndValue_def.hpp"
#include "Org/BouncyCastle/Asn1/Cmp/zzzz__PkiHeader_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1EncodableVector_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Sequence_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerInteger_def.hpp"
//  Writing Method size for method: Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder::*)(int32_t, Org::BouncyCastle::Asn1::X509::GeneralName, Org::BouncyCastle::Asn1::X509::GeneralName)>(&Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xddf118;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::X509::GeneralName>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::X509::GeneralName>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder::*)(Org::BouncyCastle::Asn1::DerInteger, Org::BouncyCastle::Asn1::X509::GeneralName, Org::BouncyCastle::Asn1::X509::GeneralName)>(&Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xddf1a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::DerInteger>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::X509::GeneralName>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::X509::GeneralName>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder.SetMessageTime
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder (Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder::*)(Org::BouncyCastle::Asn1::DerGeneralizedTime)>(&Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder::SetMessageTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xddf1e4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder.SetProtectionAlg
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder (Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder::*)(Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier)>(&Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder::SetProtectionAlg)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xddf1ec;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder.SetSenderKID
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder (Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder::*)(::ArrayW<uint8_t>)>(&Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder::SetSenderKID)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xddf1f4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder.SetSenderKID
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder (Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder::*)(Org::BouncyCastle::Asn1::Asn1OctetString)>(&Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder::SetSenderKID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xddf278;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder.SetRecipKID
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder (Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder::*)(::ArrayW<uint8_t>)>(&Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder::SetRecipKID)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xddf280;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder.SetRecipKID
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder (Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder::*)(Org::BouncyCastle::Asn1::Asn1OctetString)>(&Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder::SetRecipKID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xddf304;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder>::get(),
                                  9
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder.SetTransactionID
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder (Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder::*)(::ArrayW<uint8_t>)>(&Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder::SetTransactionID)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xddf30c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder>::get(),
                                  10
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder.SetTransactionID
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder (Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder::*)(Org::BouncyCastle::Asn1::Asn1OctetString)>(&Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder::SetTransactionID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xddf390;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder>::get(),
                                  11
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder.SetSenderNonce
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder (Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder::*)(::ArrayW<uint8_t>)>(&Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder::SetSenderNonce)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xddf398;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder.SetSenderNonce
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder (Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder::*)(Org::BouncyCastle::Asn1::Asn1OctetString)>(&Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder::SetSenderNonce)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xddf420;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder.SetRecipNonce
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder (Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder::*)(::ArrayW<uint8_t>)>(&Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder::SetRecipNonce)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xddf428;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder.SetRecipNonce
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder (Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder::*)(Org::BouncyCastle::Asn1::Asn1OctetString)>(&Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder::SetRecipNonce)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xddf4b0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder.SetFreeText
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder (Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder::*)(Org::BouncyCastle::Asn1::Cmp::PkiFreeText)>(&Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder::SetFreeText)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xddf4b8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder>::get(),
                                  16
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder.SetGeneralInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder (Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder::*)(Org::BouncyCastle::Asn1::Cmp::InfoTypeAndValue)>(&Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder::SetGeneralInfo)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xddf4c0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder>::get(),
                                  17
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder.SetGeneralInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder (Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder::*)(::ArrayW<Org::BouncyCastle::Asn1::Cmp::InfoTypeAndValue>)>(&Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder::SetGeneralInfo)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xddf550;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder>::get(),
                                  18
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder.SetGeneralInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder (Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder::*)(Org::BouncyCastle::Asn1::Asn1Sequence)>(&Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder::SetGeneralInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xddf65c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder>::get(),
                                  19
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder.MakeGeneralInfoSeq
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::Asn1Sequence (*)(Org::BouncyCastle::Asn1::Cmp::InfoTypeAndValue)>(&Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder::MakeGeneralInfoSeq)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xddf4ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder>::get(),
                            "MakeGeneralInfoSeq",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::Cmp::InfoTypeAndValue>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder.MakeGeneralInfoSeq
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::Asn1Sequence (*)(::ArrayW<Org::BouncyCastle::Asn1::Cmp::InfoTypeAndValue>)>(&Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder::MakeGeneralInfoSeq)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0xddf57c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder>::get(),
                            "MakeGeneralInfoSeq",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<Org::BouncyCastle::Asn1::Cmp::InfoTypeAndValue>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder.Build
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::Cmp::PkiHeader (Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder::*)()>(&Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder::Build)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0xddf664;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder>::get(),
                                  20
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder.AddOptional
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder::*)(Org::BouncyCastle::Asn1::Asn1EncodableVector, int32_t, Org::BouncyCastle::Asn1::Asn1Encodable)>(&Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder::AddOptional)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xddf884;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder>::get(),
                            "AddOptional",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::Asn1EncodableVector>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::Asn1Encodable>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder::__set_pvno(Org::BouncyCastle::Asn1::DerInteger value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Asn1::DerInteger, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Asn1::DerInteger>(value));
}
constexpr Org::BouncyCastle::Asn1::DerInteger Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder::__get_pvno() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Asn1::DerInteger, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder::__set_sender(Org::BouncyCastle::Asn1::X509::GeneralName value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Asn1::X509::GeneralName, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Asn1::X509::GeneralName>(value));
}
constexpr Org::BouncyCastle::Asn1::X509::GeneralName Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder::__get_sender() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Asn1::X509::GeneralName, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder::__set_recipient(Org::BouncyCastle::Asn1::X509::GeneralName value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Asn1::X509::GeneralName, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Asn1::X509::GeneralName>(value));
}
constexpr Org::BouncyCastle::Asn1::X509::GeneralName Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder::__get_recipient() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Asn1::X509::GeneralName, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder::__set_messageTime(Org::BouncyCastle::Asn1::DerGeneralizedTime value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Asn1::DerGeneralizedTime, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Asn1::DerGeneralizedTime>(value));
}
constexpr Org::BouncyCastle::Asn1::DerGeneralizedTime Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder::__get_messageTime() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Asn1::DerGeneralizedTime, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder::__set_protectionAlg(Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier>(value));
}
constexpr Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder::__get_protectionAlg() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder::__set_senderKID(Org::BouncyCastle::Asn1::Asn1OctetString value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Asn1::Asn1OctetString, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Asn1::Asn1OctetString>(value));
}
constexpr Org::BouncyCastle::Asn1::Asn1OctetString Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder::__get_senderKID() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Asn1::Asn1OctetString, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder::__set_recipKID(Org::BouncyCastle::Asn1::Asn1OctetString value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Asn1::Asn1OctetString, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Asn1::Asn1OctetString>(value));
}
constexpr Org::BouncyCastle::Asn1::Asn1OctetString Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder::__get_recipKID() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Asn1::Asn1OctetString, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder::__set_transactionID(Org::BouncyCastle::Asn1::Asn1OctetString value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Asn1::Asn1OctetString, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Asn1::Asn1OctetString>(value));
}
constexpr Org::BouncyCastle::Asn1::Asn1OctetString Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder::__get_transactionID() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Asn1::Asn1OctetString, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder::__set_senderNonce(Org::BouncyCastle::Asn1::Asn1OctetString value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Asn1::Asn1OctetString, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Asn1::Asn1OctetString>(value));
}
constexpr Org::BouncyCastle::Asn1::Asn1OctetString Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder::__get_senderNonce() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Asn1::Asn1OctetString, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder::__set_recipNonce(Org::BouncyCastle::Asn1::Asn1OctetString value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Asn1::Asn1OctetString, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Asn1::Asn1OctetString>(value));
}
constexpr Org::BouncyCastle::Asn1::Asn1OctetString Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder::__get_recipNonce() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Asn1::Asn1OctetString, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder::__set_freeText(Org::BouncyCastle::Asn1::Cmp::PkiFreeText value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Asn1::Cmp::PkiFreeText, 0x60>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Asn1::Cmp::PkiFreeText>(value));
}
constexpr Org::BouncyCastle::Asn1::Cmp::PkiFreeText Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder::__get_freeText() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Asn1::Cmp::PkiFreeText, 0x60>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder::__set_generalInfo(Org::BouncyCastle::Asn1::Asn1Sequence value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Asn1::Asn1Sequence, 0x68>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Asn1::Asn1Sequence>(value));
}
constexpr Org::BouncyCastle::Asn1::Asn1Sequence Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder::__get_generalInfo() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Asn1::Asn1Sequence, 0x68>(this->::bs_hook::Il2CppWrapperType::instance);
}
 Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder::New_ctor(int32_t pvno, Org::BouncyCastle::Asn1::X509::GeneralName sender, Org::BouncyCastle::Asn1::X509::GeneralName recipient)  {
Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder o{THROW_UNLESS(::il2cpp_utils::New<Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder>(pvno, sender, recipient))};
return o;
}
 void Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder::_ctor(int32_t pvno, Org::BouncyCastle::Asn1::X509::GeneralName sender, Org::BouncyCastle::Asn1::X509::GeneralName recipient)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::X509::GeneralName>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::X509::GeneralName>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, pvno, sender, recipient);
}
 Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder::New_ctor(Org::BouncyCastle::Asn1::DerInteger pvno, Org::BouncyCastle::Asn1::X509::GeneralName sender, Org::BouncyCastle::Asn1::X509::GeneralName recipient)  {
Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder o{THROW_UNLESS(::il2cpp_utils::New<Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder>(pvno, sender, recipient))};
return o;
}
 void Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder::_ctor(Org::BouncyCastle::Asn1::DerInteger pvno, Org::BouncyCastle::Asn1::X509::GeneralName sender, Org::BouncyCastle::Asn1::X509::GeneralName recipient)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::DerInteger>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::X509::GeneralName>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::X509::GeneralName>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, pvno, sender, recipient);
}
 Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder::SetMessageTime(Org::BouncyCastle::Asn1::DerGeneralizedTime time)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder>::get(),
                            "SetMessageTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::DerGeneralizedTime>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder, false>(const_cast<void*>(instance), ___internal_method, time);
}
 Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder::SetProtectionAlg(Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier aid)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder>::get(),
                            "SetProtectionAlg",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder, false>(const_cast<void*>(instance), ___internal_method, aid);
}
 Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder::SetSenderKID(::ArrayW<uint8_t> kid)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder>::get(),
                            "SetSenderKID",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder, false>(const_cast<void*>(instance), ___internal_method, kid);
}
 Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder::SetSenderKID(Org::BouncyCastle::Asn1::Asn1OctetString kid)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder>::get(),
                            "SetSenderKID",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::Asn1OctetString>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder, false>(const_cast<void*>(instance), ___internal_method, kid);
}
 Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder::SetRecipKID(::ArrayW<uint8_t> kid)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder>::get(),
                            "SetRecipKID",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder, false>(const_cast<void*>(instance), ___internal_method, kid);
}
 Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder::SetRecipKID(Org::BouncyCastle::Asn1::Asn1OctetString kid)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder>::get(),
                            "SetRecipKID",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::Asn1OctetString>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder, false>(const_cast<void*>(instance), ___internal_method, kid);
}
 Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder::SetTransactionID(::ArrayW<uint8_t> tid)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder>::get(),
                            "SetTransactionID",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder, false>(const_cast<void*>(instance), ___internal_method, tid);
}
 Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder::SetTransactionID(Org::BouncyCastle::Asn1::Asn1OctetString tid)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder>::get(),
                            "SetTransactionID",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::Asn1OctetString>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder, false>(const_cast<void*>(instance), ___internal_method, tid);
}
 Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder::SetSenderNonce(::ArrayW<uint8_t> nonce)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder>::get(),
                            "SetSenderNonce",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder, false>(const_cast<void*>(instance), ___internal_method, nonce);
}
 Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder::SetSenderNonce(Org::BouncyCastle::Asn1::Asn1OctetString nonce)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder>::get(),
                            "SetSenderNonce",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::Asn1OctetString>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder, false>(const_cast<void*>(instance), ___internal_method, nonce);
}
 Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder::SetRecipNonce(::ArrayW<uint8_t> nonce)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder>::get(),
                            "SetRecipNonce",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder, false>(const_cast<void*>(instance), ___internal_method, nonce);
}
 Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder::SetRecipNonce(Org::BouncyCastle::Asn1::Asn1OctetString nonce)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder>::get(),
                            "SetRecipNonce",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::Asn1OctetString>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder, false>(const_cast<void*>(instance), ___internal_method, nonce);
}
 Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder::SetFreeText(Org::BouncyCastle::Asn1::Cmp::PkiFreeText text)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder>::get(),
                            "SetFreeText",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::Cmp::PkiFreeText>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder, false>(const_cast<void*>(instance), ___internal_method, text);
}
 Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder::SetGeneralInfo(Org::BouncyCastle::Asn1::Cmp::InfoTypeAndValue genInfo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder>::get(),
                            "SetGeneralInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::Cmp::InfoTypeAndValue>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder, false>(const_cast<void*>(instance), ___internal_method, genInfo);
}
 Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder::SetGeneralInfo(::ArrayW<Org::BouncyCastle::Asn1::Cmp::InfoTypeAndValue> genInfos)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder>::get(),
                            "SetGeneralInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<Org::BouncyCastle::Asn1::Cmp::InfoTypeAndValue>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder, false>(const_cast<void*>(instance), ___internal_method, genInfos);
}
 Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder::SetGeneralInfo(Org::BouncyCastle::Asn1::Asn1Sequence seqOfInfoTypeAndValue)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder>::get(),
                            "SetGeneralInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::Asn1Sequence>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder, false>(const_cast<void*>(instance), ___internal_method, seqOfInfoTypeAndValue);
}
 Org::BouncyCastle::Asn1::Asn1Sequence Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder::MakeGeneralInfoSeq(Org::BouncyCastle::Asn1::Cmp::InfoTypeAndValue generalInfo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder>::get(),
                            "MakeGeneralInfoSeq",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::Cmp::InfoTypeAndValue>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Asn1::Asn1Sequence, false>(nullptr, ___internal_method, generalInfo);
}
 Org::BouncyCastle::Asn1::Asn1Sequence Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder::MakeGeneralInfoSeq(::ArrayW<Org::BouncyCastle::Asn1::Cmp::InfoTypeAndValue> generalInfos)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder>::get(),
                            "MakeGeneralInfoSeq",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<Org::BouncyCastle::Asn1::Cmp::InfoTypeAndValue>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Asn1::Asn1Sequence, false>(nullptr, ___internal_method, generalInfos);
}
 Org::BouncyCastle::Asn1::Cmp::PkiHeader Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder::Build()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder>::get(),
                            "Build",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Asn1::Cmp::PkiHeader, false>(const_cast<void*>(instance), ___internal_method);
}
 void Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder::AddOptional(Org::BouncyCastle::Asn1::Asn1EncodableVector v, int32_t tagNo, Org::BouncyCastle::Asn1::Asn1Encodable obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder>::get(),
                            "AddOptional",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::Asn1EncodableVector>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::Asn1Encodable>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, v, tagNo, obj);
}
