#pragma once
#include "Org/BouncyCastle/X509/zzzz__X509SignatureUtilities_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Null_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ISigner_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerObjectIdentifier_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__AlgorithmIdentifier_def.hpp"
//  Writing Method size for method: Org::BouncyCastle::X509::X509SignatureUtilities.SetSignatureParameters
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(Org::BouncyCastle::Crypto::ISigner, Org::BouncyCastle::Asn1::Asn1Encodable)>(&Org::BouncyCastle::X509::X509SignatureUtilities::SetSignatureParameters)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x10f4da0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::X509::X509SignatureUtilities>::get(),
                            "SetSignatureParameters",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::ISigner>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::Asn1Encodable>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::X509::X509SignatureUtilities.GetSignatureName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier)>(&Org::BouncyCastle::X509::X509SignatureUtilities::GetSignatureName)> {
  constexpr static std::size_t size = 0x2e4;
  constexpr static std::size_t addrs = 0x10ed3b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::X509::X509SignatureUtilities>::get(),
                            "GetSignatureName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::X509::X509SignatureUtilities.GetDigestAlgName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(Org::BouncyCastle::Asn1::DerObjectIdentifier)>(&Org::BouncyCastle::X509::X509SignatureUtilities::GetDigestAlgName)> {
  constexpr static std::size_t size = 0x370;
  constexpr static std::size_t addrs = 0x10f4e1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::X509::X509SignatureUtilities>::get(),
                            "GetDigestAlgName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::DerObjectIdentifier>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::X509::X509SignatureUtilities._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::X509::X509SignatureUtilities::*)()>(&Org::BouncyCastle::X509::X509SignatureUtilities::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x10f5204;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::X509::X509SignatureUtilities>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 void Org::BouncyCastle::X509::X509SignatureUtilities::__set_derNull(Org::BouncyCastle::Asn1::Asn1Null value)  {
::cordl_internals::setStaticField<Org::BouncyCastle::Asn1::Asn1Null, "derNull", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::X509::X509SignatureUtilities>::get>(std::forward<Org::BouncyCastle::Asn1::Asn1Null>(value));
}
 Org::BouncyCastle::Asn1::Asn1Null Org::BouncyCastle::X509::X509SignatureUtilities::__get_derNull()  {
return ::cordl_internals::getStaticField<Org::BouncyCastle::Asn1::Asn1Null, "derNull", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::X509::X509SignatureUtilities>::get>();
}
 void Org::BouncyCastle::X509::X509SignatureUtilities::SetSignatureParameters(Org::BouncyCastle::Crypto::ISigner signature, Org::BouncyCastle::Asn1::Asn1Encodable parameters)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::X509::X509SignatureUtilities>::get(),
                            "SetSignatureParameters",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::ISigner>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::Asn1Encodable>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, signature, parameters);
}
 ::StringW Org::BouncyCastle::X509::X509SignatureUtilities::GetSignatureName(Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier sigAlgId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::X509::X509SignatureUtilities>::get(),
                            "GetSignatureName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, sigAlgId);
}
 ::StringW Org::BouncyCastle::X509::X509SignatureUtilities::GetDigestAlgName(Org::BouncyCastle::Asn1::DerObjectIdentifier digestAlgOID)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::X509::X509SignatureUtilities>::get(),
                            "GetDigestAlgName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::DerObjectIdentifier>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, digestAlgOID);
}
// Ctor Parameters []
 Org::BouncyCastle::X509::X509SignatureUtilities::X509SignatureUtilities()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<X509SignatureUtilities>())) {}
 void Org::BouncyCastle::X509::X509SignatureUtilities::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::X509::X509SignatureUtilities>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
