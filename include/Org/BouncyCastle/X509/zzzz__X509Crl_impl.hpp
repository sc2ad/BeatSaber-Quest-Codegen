#pragma once
#include "Org/BouncyCastle/X509/zzzz__X509ExtensionBase_impl.hpp"
#include "Org/BouncyCastle/X509/zzzz__X509Crl_def.hpp"
#include "Org/BouncyCastle/X509/zzzz__X509Certificate_def.hpp"
#include "Org/BouncyCastle/Math/zzzz__BigInteger_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__X509Extensions_def.hpp"
#include "Org/BouncyCastle/Utilities/Collections/zzzz__ISet_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__X509Name_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__AsymmetricKeyParameter_def.hpp"
#include "Org/BouncyCastle/Utilities/Date/zzzz__DateTimeObject_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IVerifierFactory_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IVerifierFactoryProvider_def.hpp"
#include "Org/BouncyCastle/X509/zzzz__X509CrlEntry_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__CertificateList_def.hpp"
//  Writing Method size for method: Org::BouncyCastle::X509::X509Crl._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::X509::X509Crl::*)(Org::BouncyCastle::Asn1::X509::CertificateList)>(&Org::BouncyCastle::X509::X509Crl::_ctor)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x10f0e7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::X509::X509Crl>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::X509::CertificateList>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::X509::X509Crl.GetX509Extensions
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::X509::X509Extensions (Org::BouncyCastle::X509::X509Crl::*)()>(&Org::BouncyCastle::X509::X509Crl::GetX509Extensions)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x10f1038;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::X509::X509Crl),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::X509::X509Crl>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::X509::X509Crl.GetEncoded
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (Org::BouncyCastle::X509::X509Crl::*)()>(&Org::BouncyCastle::X509::X509Crl::GetEncoded)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x10f107c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::X509::X509Crl),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::X509::X509Crl>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::X509::X509Crl.Verify
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::X509::X509Crl::*)(Org::BouncyCastle::Crypto::AsymmetricKeyParameter)>(&Org::BouncyCastle::X509::X509Crl::Verify)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x10f1174;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::X509::X509Crl),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::X509::X509Crl>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::X509::X509Crl.Verify
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::X509::X509Crl::*)(Org::BouncyCastle::Crypto::IVerifierFactoryProvider)>(&Org::BouncyCastle::X509::X509Crl::Verify)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x10f11f4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::X509::X509Crl),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::X509::X509Crl>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::X509::X509Crl.CheckSignature
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::X509::X509Crl::*)(Org::BouncyCastle::Crypto::IVerifierFactory)>(&Org::BouncyCastle::X509::X509Crl::CheckSignature)> {
  constexpr static std::size_t size = 0x3ec;
  constexpr static std::size_t addrs = 0x10f12bc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::X509::X509Crl),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::X509::X509Crl>::get(),
                                  16
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::X509::X509Crl.get_Version
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (Org::BouncyCastle::X509::X509Crl::*)()>(&Org::BouncyCastle::X509::X509Crl::get_Version)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x10f16a8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::X509::X509Crl),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::X509::X509Crl>::get(),
                                  17
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::X509::X509Crl.get_IssuerDN
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::X509::X509Name (Org::BouncyCastle::X509::X509Crl::*)()>(&Org::BouncyCastle::X509::X509Crl::get_IssuerDN)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x10f16c4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::X509::X509Crl),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::X509::X509Crl>::get(),
                                  18
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::X509::X509Crl.get_ThisUpdate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::DateTime (Org::BouncyCastle::X509::X509Crl::*)()>(&Org::BouncyCastle::X509::X509Crl::get_ThisUpdate)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x10f16e0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::X509::X509Crl),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::X509::X509Crl>::get(),
                                  19
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::X509::X509Crl.get_NextUpdate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Utilities::Date::DateTimeObject (Org::BouncyCastle::X509::X509Crl::*)()>(&Org::BouncyCastle::X509::X509Crl::get_NextUpdate)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x10f1708;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::X509::X509Crl),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::X509::X509Crl>::get(),
                                  20
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::X509::X509Crl.LoadCrlEntries
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Utilities::Collections::ISet (Org::BouncyCastle::X509::X509Crl::*)()>(&Org::BouncyCastle::X509::X509Crl::LoadCrlEntries)> {
  constexpr static std::size_t size = 0x46c;
  constexpr static std::size_t addrs = 0x10f17ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::X509::X509Crl>::get(),
                            "LoadCrlEntries",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::X509::X509Crl.GetRevokedCertificate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::X509::X509CrlEntry (Org::BouncyCastle::X509::X509Crl::*)(Org::BouncyCastle::Math::BigInteger)>(&Org::BouncyCastle::X509::X509Crl::GetRevokedCertificate)> {
  constexpr static std::size_t size = 0x438;
  constexpr static std::size_t addrs = 0x10f1c64;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::X509::X509Crl),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::X509::X509Crl>::get(),
                                  21
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::X509::X509Crl.GetRevokedCertificates
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Utilities::Collections::ISet (Org::BouncyCastle::X509::X509Crl::*)()>(&Org::BouncyCastle::X509::X509Crl::GetRevokedCertificates)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x10f209c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::X509::X509Crl),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::X509::X509Crl>::get(),
                                  22
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::X509::X509Crl.GetTbsCertList
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (Org::BouncyCastle::X509::X509Crl::*)()>(&Org::BouncyCastle::X509::X509Crl::GetTbsCertList)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x10f2154;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::X509::X509Crl),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::X509::X509Crl>::get(),
                                  23
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::X509::X509Crl.GetSignature
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (Org::BouncyCastle::X509::X509Crl::*)()>(&Org::BouncyCastle::X509::X509Crl::GetSignature)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x10f225c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::X509::X509Crl),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::X509::X509Crl>::get(),
                                  24
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::X509::X509Crl.get_SigAlgName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Org::BouncyCastle::X509::X509Crl::*)()>(&Org::BouncyCastle::X509::X509Crl::get_SigAlgName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x10f2278;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::X509::X509Crl),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::X509::X509Crl>::get(),
                                  25
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::X509::X509Crl.get_SigAlgOid
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Org::BouncyCastle::X509::X509Crl::*)()>(&Org::BouncyCastle::X509::X509Crl::get_SigAlgOid)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x10f2280;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::X509::X509Crl),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::X509::X509Crl>::get(),
                                  26
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::X509::X509Crl.GetSigAlgParams
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (Org::BouncyCastle::X509::X509Crl::*)()>(&Org::BouncyCastle::X509::X509Crl::GetSigAlgParams)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x10f22b4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::X509::X509Crl),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::X509::X509Crl>::get(),
                                  27
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::X509::X509Crl.Equals
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Org::BouncyCastle::X509::X509Crl::*)(::bs_hook::Il2CppWrapperType)>(&Org::BouncyCastle::X509::X509Crl::Equals)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x10f2310;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::X509::X509Crl),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::X509::X509Crl>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::X509::X509Crl.GetHashCode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (Org::BouncyCastle::X509::X509Crl::*)()>(&Org::BouncyCastle::X509::X509Crl::GetHashCode)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x10f2428;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::X509::X509Crl),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::X509::X509Crl>::get(),
                                  2
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::X509::X509Crl.ToString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Org::BouncyCastle::X509::X509Crl::*)()>(&Org::BouncyCastle::X509::X509Crl::ToString)> {
  constexpr static std::size_t size = 0xfe0;
  constexpr static std::size_t addrs = 0x10f2484;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::X509::X509Crl),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::X509::X509Crl>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::X509::X509Crl.IsRevoked
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Org::BouncyCastle::X509::X509Crl::*)(Org::BouncyCastle::X509::X509Certificate)>(&Org::BouncyCastle::X509::X509Crl::IsRevoked)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x10f3464;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::X509::X509Crl),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::X509::X509Crl>::get(),
                                  28
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::X509::X509Crl.get_IsIndirectCrl
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Org::BouncyCastle::X509::X509Crl::*)()>(&Org::BouncyCastle::X509::X509Crl::get_IsIndirectCrl)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x10f3528;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::X509::X509Crl),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::X509::X509Crl>::get(),
                                  29
                                ));
    return ___internal_method;
  }
};
constexpr void Org::BouncyCastle::X509::X509Crl::__set_c(Org::BouncyCastle::Asn1::X509::CertificateList value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Asn1::X509::CertificateList, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Asn1::X509::CertificateList>(value));
}
constexpr Org::BouncyCastle::Asn1::X509::CertificateList Org::BouncyCastle::X509::X509Crl::__get_c() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Asn1::X509::CertificateList, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::X509::X509Crl::__set_sigAlgName(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW Org::BouncyCastle::X509::X509Crl::__get_sigAlgName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::X509::X509Crl::__set_sigAlgParams(::ArrayW<uint8_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<uint8_t>>(value));
}
constexpr ::ArrayW<uint8_t> Org::BouncyCastle::X509::X509Crl::__get_sigAlgParams() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::X509::X509Crl::__set_isIndirect(bool value)  {
::cordl_internals::setInstanceField<bool, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool Org::BouncyCastle::X509::X509Crl::__get_isIndirect() const {
return ::cordl_internals::getInstanceField<bool, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::X509::X509Crl::__set_hashValueSet(bool value)  {
::cordl_internals::setInstanceField<bool, 0x29>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool Org::BouncyCastle::X509::X509Crl::__get_hashValueSet() const {
return ::cordl_internals::getInstanceField<bool, 0x29>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::X509::X509Crl::__set_hashValue(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x2c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t Org::BouncyCastle::X509::X509Crl::__get_hashValue() const {
return ::cordl_internals::getInstanceField<int32_t, 0x2c>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "c", ty: "Org::BouncyCastle::Asn1::X509::CertificateList", modifiers: "", def_value: None }]
 Org::BouncyCastle::X509::X509Crl::X509Crl(Org::BouncyCastle::Asn1::X509::CertificateList c)  : Org::BouncyCastle::X509::X509ExtensionBase(THROW_UNLESS(::il2cpp_utils::New<X509Crl>(c))) {}
 void Org::BouncyCastle::X509::X509Crl::_ctor(Org::BouncyCastle::Asn1::X509::CertificateList c)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::X509::X509Crl>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::X509::CertificateList>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, c);
}
 Org::BouncyCastle::Asn1::X509::X509Extensions Org::BouncyCastle::X509::X509Crl::GetX509Extensions()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::X509::X509Crl>::get(),
                            "GetX509Extensions",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Asn1::X509::X509Extensions, false>(const_cast<void*>(instance), ___internal_method);
}
 ::ArrayW<uint8_t> Org::BouncyCastle::X509::X509Crl::GetEncoded()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::X509::X509Crl>::get(),
                            "GetEncoded",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(const_cast<void*>(instance), ___internal_method);
}
 void Org::BouncyCastle::X509::X509Crl::Verify(Org::BouncyCastle::Crypto::AsymmetricKeyParameter publicKey)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::X509::X509Crl>::get(),
                            "Verify",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::AsymmetricKeyParameter>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, publicKey);
}
 void Org::BouncyCastle::X509::X509Crl::Verify(Org::BouncyCastle::Crypto::IVerifierFactoryProvider verifierProvider)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::X509::X509Crl>::get(),
                            "Verify",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::IVerifierFactoryProvider>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, verifierProvider);
}
 void Org::BouncyCastle::X509::X509Crl::CheckSignature(Org::BouncyCastle::Crypto::IVerifierFactory verifier)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::X509::X509Crl>::get(),
                            "CheckSignature",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::IVerifierFactory>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, verifier);
}
 int32_t Org::BouncyCastle::X509::X509Crl::get_Version()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::X509::X509Crl>::get(),
                            "get_Version",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 Org::BouncyCastle::Asn1::X509::X509Name Org::BouncyCastle::X509::X509Crl::get_IssuerDN()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::X509::X509Crl>::get(),
                            "get_IssuerDN",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Asn1::X509::X509Name, false>(const_cast<void*>(instance), ___internal_method);
}
 System::DateTime Org::BouncyCastle::X509::X509Crl::get_ThisUpdate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::X509::X509Crl>::get(),
                            "get_ThisUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::DateTime, false>(const_cast<void*>(instance), ___internal_method);
}
 Org::BouncyCastle::Utilities::Date::DateTimeObject Org::BouncyCastle::X509::X509Crl::get_NextUpdate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::X509::X509Crl>::get(),
                            "get_NextUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Utilities::Date::DateTimeObject, false>(const_cast<void*>(instance), ___internal_method);
}
 Org::BouncyCastle::Utilities::Collections::ISet Org::BouncyCastle::X509::X509Crl::LoadCrlEntries()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::X509::X509Crl>::get(),
                            "LoadCrlEntries",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Utilities::Collections::ISet, false>(const_cast<void*>(instance), ___internal_method);
}
 Org::BouncyCastle::X509::X509CrlEntry Org::BouncyCastle::X509::X509Crl::GetRevokedCertificate(Org::BouncyCastle::Math::BigInteger serialNumber)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::X509::X509Crl>::get(),
                            "GetRevokedCertificate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::BigInteger>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::X509::X509CrlEntry, false>(const_cast<void*>(instance), ___internal_method, serialNumber);
}
 Org::BouncyCastle::Utilities::Collections::ISet Org::BouncyCastle::X509::X509Crl::GetRevokedCertificates()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::X509::X509Crl>::get(),
                            "GetRevokedCertificates",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Utilities::Collections::ISet, false>(const_cast<void*>(instance), ___internal_method);
}
 ::ArrayW<uint8_t> Org::BouncyCastle::X509::X509Crl::GetTbsCertList()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::X509::X509Crl>::get(),
                            "GetTbsCertList",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(const_cast<void*>(instance), ___internal_method);
}
 ::ArrayW<uint8_t> Org::BouncyCastle::X509::X509Crl::GetSignature()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::X509::X509Crl>::get(),
                            "GetSignature",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW Org::BouncyCastle::X509::X509Crl::get_SigAlgName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::X509::X509Crl>::get(),
                            "get_SigAlgName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW Org::BouncyCastle::X509::X509Crl::get_SigAlgOid()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::X509::X509Crl>::get(),
                            "get_SigAlgOid",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 ::ArrayW<uint8_t> Org::BouncyCastle::X509::X509Crl::GetSigAlgParams()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::X509::X509Crl>::get(),
                            "GetSigAlgParams",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(const_cast<void*>(instance), ___internal_method);
}
 bool Org::BouncyCastle::X509::X509Crl::Equals(::bs_hook::Il2CppWrapperType other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::X509::X509Crl>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, other);
}
 int32_t Org::BouncyCastle::X509::X509Crl::GetHashCode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::X509::X509Crl>::get(),
                            "GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW Org::BouncyCastle::X509::X509Crl::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::X509::X509Crl>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 bool Org::BouncyCastle::X509::X509Crl::IsRevoked(Org::BouncyCastle::X509::X509Certificate cert)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::X509::X509Crl>::get(),
                            "IsRevoked",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::X509::X509Certificate>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, cert);
}
 bool Org::BouncyCastle::X509::X509Crl::get_IsIndirectCrl()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::X509::X509Crl>::get(),
                            "get_IsIndirectCrl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
