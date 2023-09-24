#pragma once
#include "Org/BouncyCastle/X509/zzzz__X509ExtensionBase_impl.hpp"
#include "Org/BouncyCastle/X509/zzzz__X509V2AttributeCertificate_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__AsymmetricKeyParameter_def.hpp"
#include "Org/BouncyCastle/Math/zzzz__BigInteger_def.hpp"
#include "Org/BouncyCastle/X509/zzzz__X509Attribute_def.hpp"
#include "Org/BouncyCastle/X509/zzzz__AttributeCertificateIssuer_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IVerifierFactory_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__AttributeCertificate_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__AlgorithmIdentifier_def.hpp"
#include "Org/BouncyCastle/X509/zzzz__IX509Extension_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "Org/BouncyCastle/X509/zzzz__IX509AttributeCertificate_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__X509Extensions_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IVerifierFactoryProvider_def.hpp"
#include "Org/BouncyCastle/X509/zzzz__AttributeCertificateHolder_def.hpp"
//  Writing Method size for method: Org::BouncyCastle::X509::X509V2AttributeCertificate.GetObject
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::X509::AttributeCertificate (*)(System::IO::Stream)>(&Org::BouncyCastle::X509::X509V2AttributeCertificate::GetObject)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x10f8cfc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::X509::X509V2AttributeCertificate>::get(),
                            "GetObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::Stream>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::X509::X509V2AttributeCertificate._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::X509::X509V2AttributeCertificate::*)(System::IO::Stream)>(&Org::BouncyCastle::X509::X509V2AttributeCertificate::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x10f8e20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::X509::X509V2AttributeCertificate>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::Stream>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::X509::X509V2AttributeCertificate._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::X509::X509V2AttributeCertificate::*)(::ArrayW<uint8_t>)>(&Org::BouncyCastle::X509::X509V2AttributeCertificate::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x10f8e40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::X509::X509V2AttributeCertificate>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::X509::X509V2AttributeCertificate._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::X509::X509V2AttributeCertificate::*)(Org::BouncyCastle::Asn1::X509::AttributeCertificate)>(&Org::BouncyCastle::X509::X509V2AttributeCertificate::_ctor)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x10ec320;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::X509::X509V2AttributeCertificate>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::X509::AttributeCertificate>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::X509::X509V2AttributeCertificate.get_Version
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (Org::BouncyCastle::X509::X509V2AttributeCertificate::*)()>(&Org::BouncyCastle::X509::X509V2AttributeCertificate::get_Version)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x10f8ec0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::X509::X509V2AttributeCertificate),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::X509::X509V2AttributeCertificate>::get(),
                                  29
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::X509::X509V2AttributeCertificate.get_SerialNumber
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::BigInteger (Org::BouncyCastle::X509::X509V2AttributeCertificate::*)()>(&Org::BouncyCastle::X509::X509V2AttributeCertificate::get_SerialNumber)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x10f8ef4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::X509::X509V2AttributeCertificate),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::X509::X509V2AttributeCertificate>::get(),
                                  30
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::X509::X509V2AttributeCertificate.get_Holder
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::X509::AttributeCertificateHolder (Org::BouncyCastle::X509::X509V2AttributeCertificate::*)()>(&Org::BouncyCastle::X509::X509V2AttributeCertificate::get_Holder)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x10f8f20;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::X509::X509V2AttributeCertificate),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::X509::X509V2AttributeCertificate>::get(),
                                  31
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::X509::X509V2AttributeCertificate.get_Issuer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::X509::AttributeCertificateIssuer (Org::BouncyCastle::X509::X509V2AttributeCertificate::*)()>(&Org::BouncyCastle::X509::X509V2AttributeCertificate::get_Issuer)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x10f9000;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::X509::X509V2AttributeCertificate),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::X509::X509V2AttributeCertificate>::get(),
                                  32
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::X509::X509V2AttributeCertificate.get_NotBefore
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::DateTime (Org::BouncyCastle::X509::X509V2AttributeCertificate::*)()>(&Org::BouncyCastle::X509::X509V2AttributeCertificate::get_NotBefore)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x10f9078;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::X509::X509V2AttributeCertificate),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::X509::X509V2AttributeCertificate>::get(),
                                  33
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::X509::X509V2AttributeCertificate.get_NotAfter
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::DateTime (Org::BouncyCastle::X509::X509V2AttributeCertificate::*)()>(&Org::BouncyCastle::X509::X509V2AttributeCertificate::get_NotAfter)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x10f9080;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::X509::X509V2AttributeCertificate),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::X509::X509V2AttributeCertificate>::get(),
                                  34
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::X509::X509V2AttributeCertificate.GetIssuerUniqueID
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<bool> (Org::BouncyCastle::X509::X509V2AttributeCertificate::*)()>(&Org::BouncyCastle::X509::X509V2AttributeCertificate::GetIssuerUniqueID)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x10f9088;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::X509::X509V2AttributeCertificate),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::X509::X509V2AttributeCertificate>::get(),
                                  35
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::X509::X509V2AttributeCertificate.get_IsValidNow
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Org::BouncyCastle::X509::X509V2AttributeCertificate::*)()>(&Org::BouncyCastle::X509::X509V2AttributeCertificate::get_IsValidNow)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x10f9198;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::X509::X509V2AttributeCertificate),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::X509::X509V2AttributeCertificate>::get(),
                                  36
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::X509::X509V2AttributeCertificate.IsValid
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Org::BouncyCastle::X509::X509V2AttributeCertificate::*)(System::DateTime)>(&Org::BouncyCastle::X509::X509V2AttributeCertificate::IsValid)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x10f9204;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::X509::X509V2AttributeCertificate),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::X509::X509V2AttributeCertificate>::get(),
                                  37
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::X509::X509V2AttributeCertificate.CheckValidity
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::X509::X509V2AttributeCertificate::*)()>(&Org::BouncyCastle::X509::X509V2AttributeCertificate::CheckValidity)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x10f92d4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::X509::X509V2AttributeCertificate),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::X509::X509V2AttributeCertificate>::get(),
                                  38
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::X509::X509V2AttributeCertificate.CheckValidity
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::X509::X509V2AttributeCertificate::*)(System::DateTime)>(&Org::BouncyCastle::X509::X509V2AttributeCertificate::CheckValidity)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x10f9340;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::X509::X509V2AttributeCertificate),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::X509::X509V2AttributeCertificate>::get(),
                                  39
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::X509::X509V2AttributeCertificate.get_SignatureAlgorithm
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier (Org::BouncyCastle::X509::X509V2AttributeCertificate::*)()>(&Org::BouncyCastle::X509::X509V2AttributeCertificate::get_SignatureAlgorithm)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x10f9508;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::X509::X509V2AttributeCertificate),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::X509::X509V2AttributeCertificate>::get(),
                                  40
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::X509::X509V2AttributeCertificate.GetSignature
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (Org::BouncyCastle::X509::X509V2AttributeCertificate::*)()>(&Org::BouncyCastle::X509::X509V2AttributeCertificate::GetSignature)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x10f9524;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::X509::X509V2AttributeCertificate),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::X509::X509V2AttributeCertificate>::get(),
                                  41
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::X509::X509V2AttributeCertificate.Verify
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::X509::X509V2AttributeCertificate::*)(Org::BouncyCastle::Crypto::AsymmetricKeyParameter)>(&Org::BouncyCastle::X509::X509V2AttributeCertificate::Verify)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x10f9540;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::X509::X509V2AttributeCertificate),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::X509::X509V2AttributeCertificate>::get(),
                                  42
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::X509::X509V2AttributeCertificate.Verify
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::X509::X509V2AttributeCertificate::*)(Org::BouncyCastle::Crypto::IVerifierFactoryProvider)>(&Org::BouncyCastle::X509::X509V2AttributeCertificate::Verify)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x10f95d0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::X509::X509V2AttributeCertificate),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::X509::X509V2AttributeCertificate>::get(),
                                  43
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::X509::X509V2AttributeCertificate.CheckSignature
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::X509::X509V2AttributeCertificate::*)(Org::BouncyCastle::Crypto::IVerifierFactory)>(&Org::BouncyCastle::X509::X509V2AttributeCertificate::CheckSignature)> {
  constexpr static std::size_t size = 0x4bc;
  constexpr static std::size_t addrs = 0x10f9698;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::X509::X509V2AttributeCertificate),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::X509::X509V2AttributeCertificate>::get(),
                                  44
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::X509::X509V2AttributeCertificate.GetEncoded
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (Org::BouncyCastle::X509::X509V2AttributeCertificate::*)()>(&Org::BouncyCastle::X509::X509V2AttributeCertificate::GetEncoded)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x10f9b54;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::X509::X509V2AttributeCertificate),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::X509::X509V2AttributeCertificate>::get(),
                                  45
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::X509::X509V2AttributeCertificate.GetX509Extensions
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::X509::X509Extensions (Org::BouncyCastle::X509::X509V2AttributeCertificate::*)()>(&Org::BouncyCastle::X509::X509V2AttributeCertificate::GetX509Extensions)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x10f9b70;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::X509::X509V2AttributeCertificate),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::X509::X509V2AttributeCertificate>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::X509::X509V2AttributeCertificate.GetAttributes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<Org::BouncyCastle::X509::X509Attribute> (Org::BouncyCastle::X509::X509V2AttributeCertificate::*)()>(&Org::BouncyCastle::X509::X509V2AttributeCertificate::GetAttributes)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x10f9b94;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::X509::X509V2AttributeCertificate),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::X509::X509V2AttributeCertificate>::get(),
                                  46
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::X509::X509V2AttributeCertificate.GetAttributes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<Org::BouncyCastle::X509::X509Attribute> (Org::BouncyCastle::X509::X509V2AttributeCertificate::*)(::StringW)>(&Org::BouncyCastle::X509::X509V2AttributeCertificate::GetAttributes)> {
  constexpr static std::size_t size = 0x438;
  constexpr static std::size_t addrs = 0x10f9cfc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::X509::X509V2AttributeCertificate),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::X509::X509V2AttributeCertificate>::get(),
                                  47
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::X509::X509V2AttributeCertificate.Equals
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Org::BouncyCastle::X509::X509V2AttributeCertificate::*)(::bs_hook::Il2CppWrapperType)>(&Org::BouncyCastle::X509::X509V2AttributeCertificate::Equals)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x10fa134;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::X509::X509V2AttributeCertificate),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::X509::X509V2AttributeCertificate>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::X509::X509V2AttributeCertificate.GetHashCode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (Org::BouncyCastle::X509::X509V2AttributeCertificate::*)()>(&Org::BouncyCastle::X509::X509V2AttributeCertificate::GetHashCode)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x10fa1e4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::X509::X509V2AttributeCertificate),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::X509::X509V2AttributeCertificate>::get(),
                                  2
                                ));
    return ___internal_method;
  }
};
/// @brief Convert operator to Org::BouncyCastle::X509::IX509AttributeCertificate
constexpr  Org::BouncyCastle::X509::X509V2AttributeCertificate::operator Org::BouncyCastle::X509::IX509AttributeCertificate() const noexcept {
return Org::BouncyCastle::X509::IX509AttributeCertificate(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to Org::BouncyCastle::X509::IX509Extension
constexpr  Org::BouncyCastle::X509::X509V2AttributeCertificate::operator Org::BouncyCastle::X509::IX509Extension() const noexcept {
return Org::BouncyCastle::X509::IX509Extension(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::X509::X509V2AttributeCertificate::__set_cert(Org::BouncyCastle::Asn1::X509::AttributeCertificate value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Asn1::X509::AttributeCertificate, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Asn1::X509::AttributeCertificate>(value));
}
constexpr Org::BouncyCastle::Asn1::X509::AttributeCertificate Org::BouncyCastle::X509::X509V2AttributeCertificate::__get_cert() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Asn1::X509::AttributeCertificate, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::X509::X509V2AttributeCertificate::__set_notBefore(System::DateTime value)  {
::cordl_internals::setInstanceField<System::DateTime, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::DateTime>(value));
}
constexpr System::DateTime Org::BouncyCastle::X509::X509V2AttributeCertificate::__get_notBefore() const {
return ::cordl_internals::getInstanceField<System::DateTime, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::X509::X509V2AttributeCertificate::__set_notAfter(System::DateTime value)  {
::cordl_internals::setInstanceField<System::DateTime, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::DateTime>(value));
}
constexpr System::DateTime Org::BouncyCastle::X509::X509V2AttributeCertificate::__get_notAfter() const {
return ::cordl_internals::getInstanceField<System::DateTime, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
 Org::BouncyCastle::Asn1::X509::AttributeCertificate Org::BouncyCastle::X509::X509V2AttributeCertificate::GetObject(System::IO::Stream input)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::X509::X509V2AttributeCertificate>::get(),
                            "GetObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::Stream>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Asn1::X509::AttributeCertificate, false>(nullptr, ___internal_method, input);
}
 Org::BouncyCastle::X509::X509V2AttributeCertificate Org::BouncyCastle::X509::X509V2AttributeCertificate::New_ctor(System::IO::Stream encIn)  {
Org::BouncyCastle::X509::X509V2AttributeCertificate o{THROW_UNLESS(::il2cpp_utils::New<Org::BouncyCastle::X509::X509V2AttributeCertificate>(encIn))};
return o;
}
 void Org::BouncyCastle::X509::X509V2AttributeCertificate::_ctor(System::IO::Stream encIn)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::X509::X509V2AttributeCertificate>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::Stream>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, encIn);
}
 Org::BouncyCastle::X509::X509V2AttributeCertificate Org::BouncyCastle::X509::X509V2AttributeCertificate::New_ctor(::ArrayW<uint8_t> encoded)  {
Org::BouncyCastle::X509::X509V2AttributeCertificate o{THROW_UNLESS(::il2cpp_utils::New<Org::BouncyCastle::X509::X509V2AttributeCertificate>(encoded))};
return o;
}
 void Org::BouncyCastle::X509::X509V2AttributeCertificate::_ctor(::ArrayW<uint8_t> encoded)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::X509::X509V2AttributeCertificate>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, encoded);
}
 Org::BouncyCastle::X509::X509V2AttributeCertificate Org::BouncyCastle::X509::X509V2AttributeCertificate::New_ctor(Org::BouncyCastle::Asn1::X509::AttributeCertificate cert)  {
Org::BouncyCastle::X509::X509V2AttributeCertificate o{THROW_UNLESS(::il2cpp_utils::New<Org::BouncyCastle::X509::X509V2AttributeCertificate>(cert))};
return o;
}
 void Org::BouncyCastle::X509::X509V2AttributeCertificate::_ctor(Org::BouncyCastle::Asn1::X509::AttributeCertificate cert)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::X509::X509V2AttributeCertificate>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::X509::AttributeCertificate>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, cert);
}
 int32_t Org::BouncyCastle::X509::X509V2AttributeCertificate::get_Version()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::X509::X509V2AttributeCertificate>::get(),
                            "get_Version",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 Org::BouncyCastle::Math::BigInteger Org::BouncyCastle::X509::X509V2AttributeCertificate::get_SerialNumber()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::X509::X509V2AttributeCertificate>::get(),
                            "get_SerialNumber",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Math::BigInteger, false>(const_cast<void*>(instance), ___internal_method);
}
 Org::BouncyCastle::X509::AttributeCertificateHolder Org::BouncyCastle::X509::X509V2AttributeCertificate::get_Holder()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::X509::X509V2AttributeCertificate>::get(),
                            "get_Holder",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::X509::AttributeCertificateHolder, false>(const_cast<void*>(instance), ___internal_method);
}
 Org::BouncyCastle::X509::AttributeCertificateIssuer Org::BouncyCastle::X509::X509V2AttributeCertificate::get_Issuer()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::X509::X509V2AttributeCertificate>::get(),
                            "get_Issuer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::X509::AttributeCertificateIssuer, false>(const_cast<void*>(instance), ___internal_method);
}
 System::DateTime Org::BouncyCastle::X509::X509V2AttributeCertificate::get_NotBefore()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::X509::X509V2AttributeCertificate>::get(),
                            "get_NotBefore",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::DateTime, false>(const_cast<void*>(instance), ___internal_method);
}
 System::DateTime Org::BouncyCastle::X509::X509V2AttributeCertificate::get_NotAfter()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::X509::X509V2AttributeCertificate>::get(),
                            "get_NotAfter",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::DateTime, false>(const_cast<void*>(instance), ___internal_method);
}
 ::ArrayW<bool> Org::BouncyCastle::X509::X509V2AttributeCertificate::GetIssuerUniqueID()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::X509::X509V2AttributeCertificate>::get(),
                            "GetIssuerUniqueID",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<bool>, false>(const_cast<void*>(instance), ___internal_method);
}
 bool Org::BouncyCastle::X509::X509V2AttributeCertificate::get_IsValidNow()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::X509::X509V2AttributeCertificate>::get(),
                            "get_IsValidNow",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool Org::BouncyCastle::X509::X509V2AttributeCertificate::IsValid(System::DateTime date)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::X509::X509V2AttributeCertificate>::get(),
                            "IsValid",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::DateTime>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, date);
}
 void Org::BouncyCastle::X509::X509V2AttributeCertificate::CheckValidity()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::X509::X509V2AttributeCertificate>::get(),
                            "CheckValidity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void Org::BouncyCastle::X509::X509V2AttributeCertificate::CheckValidity(System::DateTime date)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::X509::X509V2AttributeCertificate>::get(),
                            "CheckValidity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::DateTime>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, date);
}
 Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier Org::BouncyCastle::X509::X509V2AttributeCertificate::get_SignatureAlgorithm()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::X509::X509V2AttributeCertificate>::get(),
                            "get_SignatureAlgorithm",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier, false>(const_cast<void*>(instance), ___internal_method);
}
 ::ArrayW<uint8_t> Org::BouncyCastle::X509::X509V2AttributeCertificate::GetSignature()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::X509::X509V2AttributeCertificate>::get(),
                            "GetSignature",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(const_cast<void*>(instance), ___internal_method);
}
 void Org::BouncyCastle::X509::X509V2AttributeCertificate::Verify(Org::BouncyCastle::Crypto::AsymmetricKeyParameter key)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::X509::X509V2AttributeCertificate>::get(),
                            "Verify",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::AsymmetricKeyParameter>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, key);
}
 void Org::BouncyCastle::X509::X509V2AttributeCertificate::Verify(Org::BouncyCastle::Crypto::IVerifierFactoryProvider verifierProvider)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::X509::X509V2AttributeCertificate>::get(),
                            "Verify",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::IVerifierFactoryProvider>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, verifierProvider);
}
 void Org::BouncyCastle::X509::X509V2AttributeCertificate::CheckSignature(Org::BouncyCastle::Crypto::IVerifierFactory verifier)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::X509::X509V2AttributeCertificate>::get(),
                            "CheckSignature",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::IVerifierFactory>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, verifier);
}
 ::ArrayW<uint8_t> Org::BouncyCastle::X509::X509V2AttributeCertificate::GetEncoded()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::X509::X509V2AttributeCertificate>::get(),
                            "GetEncoded",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(const_cast<void*>(instance), ___internal_method);
}
 Org::BouncyCastle::Asn1::X509::X509Extensions Org::BouncyCastle::X509::X509V2AttributeCertificate::GetX509Extensions()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::X509::X509V2AttributeCertificate>::get(),
                            "GetX509Extensions",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Asn1::X509::X509Extensions, false>(const_cast<void*>(instance), ___internal_method);
}
 ::ArrayW<Org::BouncyCastle::X509::X509Attribute> Org::BouncyCastle::X509::X509V2AttributeCertificate::GetAttributes()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::X509::X509V2AttributeCertificate>::get(),
                            "GetAttributes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<Org::BouncyCastle::X509::X509Attribute>, false>(const_cast<void*>(instance), ___internal_method);
}
 ::ArrayW<Org::BouncyCastle::X509::X509Attribute> Org::BouncyCastle::X509::X509V2AttributeCertificate::GetAttributes(::StringW oid)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::X509::X509V2AttributeCertificate>::get(),
                            "GetAttributes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<Org::BouncyCastle::X509::X509Attribute>, false>(const_cast<void*>(instance), ___internal_method, oid);
}
 bool Org::BouncyCastle::X509::X509V2AttributeCertificate::Equals(::bs_hook::Il2CppWrapperType obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::X509::X509V2AttributeCertificate>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, obj);
}
 int32_t Org::BouncyCastle::X509::X509V2AttributeCertificate::GetHashCode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::X509::X509V2AttributeCertificate>::get(),
                            "GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
