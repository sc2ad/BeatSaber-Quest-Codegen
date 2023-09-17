#pragma once
#include "Org/BouncyCastle/Asn1/zzzz__DerBitString_impl.hpp"
namespace {
#include "Org/BouncyCastle/Asn1/X509/zzzz__ReasonFlags_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerBitString_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::ReasonFlags._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Asn1::X509::ReasonFlags::*)(int32_t)>(&::Org::BouncyCastle::Asn1::X509::ReasonFlags::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x110b49c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X509::ReasonFlags>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::ReasonFlags._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Asn1::X509::ReasonFlags::*)(::Org::BouncyCastle::Asn1::DerBitString)>(&::Org::BouncyCastle::Asn1::X509::ReasonFlags::_ctor)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x1101e08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X509::ReasonFlags>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DerBitString>::get()}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "reasons", ty: "int32_t", modifiers: "", def_value: None }]
 ::Org::BouncyCastle::Asn1::X509::ReasonFlags::ReasonFlags(int32_t reasons)  : ::Org::BouncyCastle::Asn1::DerBitString(THROW_UNLESS(::il2cpp_utils::New<ReasonFlags>(reasons))) {}
 void ::Org::BouncyCastle::Asn1::X509::ReasonFlags::_ctor(int32_t reasons)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X509::ReasonFlags>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, reasons);
}
// Ctor Parameters [CppParam { name: "reasons", ty: "::Org::BouncyCastle::Asn1::DerBitString", modifiers: "", def_value: None }]
 ::Org::BouncyCastle::Asn1::X509::ReasonFlags::ReasonFlags(::Org::BouncyCastle::Asn1::DerBitString reasons)  : ::Org::BouncyCastle::Asn1::DerBitString(THROW_UNLESS(::il2cpp_utils::New<ReasonFlags>(reasons))) {}
 void ::Org::BouncyCastle::Asn1::X509::ReasonFlags::_ctor(::Org::BouncyCastle::Asn1::DerBitString reasons)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X509::ReasonFlags>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DerBitString>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, reasons);
}
} // end anonymous namespace
