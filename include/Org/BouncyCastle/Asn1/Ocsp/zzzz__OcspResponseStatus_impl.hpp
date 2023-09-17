#pragma once
#include "Org/BouncyCastle/Asn1/zzzz__DerEnumerated_impl.hpp"
namespace {
#include "Org/BouncyCastle/Asn1/Ocsp/zzzz__OcspResponseStatus_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerEnumerated_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Ocsp::OcspResponseStatus._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Asn1::Ocsp::OcspResponseStatus::*)(int32_t)>(&::Org::BouncyCastle::Asn1::Ocsp::OcspResponseStatus::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xef3eec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Ocsp::OcspResponseStatus>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Ocsp::OcspResponseStatus._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Asn1::Ocsp::OcspResponseStatus::*)(::Org::BouncyCastle::Asn1::DerEnumerated)>(&::Org::BouncyCastle::Asn1::Ocsp::OcspResponseStatus::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xef3398;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Ocsp::OcspResponseStatus>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DerEnumerated>::get()}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "value", ty: "int32_t", modifiers: "", def_value: None }]
 ::Org::BouncyCastle::Asn1::Ocsp::OcspResponseStatus::OcspResponseStatus(int32_t value)  : ::Org::BouncyCastle::Asn1::DerEnumerated(THROW_UNLESS(::il2cpp_utils::New<OcspResponseStatus>(value))) {}
 void ::Org::BouncyCastle::Asn1::Ocsp::OcspResponseStatus::_ctor(int32_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Ocsp::OcspResponseStatus>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "value", ty: "::Org::BouncyCastle::Asn1::DerEnumerated", modifiers: "", def_value: None }]
 ::Org::BouncyCastle::Asn1::Ocsp::OcspResponseStatus::OcspResponseStatus(::Org::BouncyCastle::Asn1::DerEnumerated value)  : ::Org::BouncyCastle::Asn1::DerEnumerated(THROW_UNLESS(::il2cpp_utils::New<OcspResponseStatus>(value))) {}
 void ::Org::BouncyCastle::Asn1::Ocsp::OcspResponseStatus::_ctor(::Org::BouncyCastle::Asn1::DerEnumerated value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Ocsp::OcspResponseStatus>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DerEnumerated>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
} // end anonymous namespace
