#pragma once
#include "Org/BouncyCastle/Ocsp/zzzz__CertificateStatus_impl.hpp"
namespace {
#include "Org/BouncyCastle/Ocsp/zzzz__RevokedStatus_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "Org/BouncyCastle/Asn1/Ocsp/zzzz__RevokedInfo_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Ocsp::RevokedStatus._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Ocsp::RevokedStatus::*)(::Org::BouncyCastle::Asn1::Ocsp::RevokedInfo)>(&::Org::BouncyCastle::Ocsp::RevokedStatus::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x1018d14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Ocsp::RevokedStatus>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Ocsp::RevokedInfo>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Ocsp::RevokedStatus._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Ocsp::RevokedStatus::*)(::System::DateTime, int32_t)>(&::Org::BouncyCastle::Ocsp::RevokedStatus::_ctor)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x1018d80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Ocsp::RevokedStatus>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Ocsp::RevokedStatus.get_RevocationTime
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::DateTime (::Org::BouncyCastle::Ocsp::RevokedStatus::*)()>(&::Org::BouncyCastle::Ocsp::RevokedStatus::get_RevocationTime)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x1012c1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Ocsp::RevokedStatus>::get(),
                            "get_RevocationTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Ocsp::RevokedStatus.get_HasRevocationReason
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Org::BouncyCastle::Ocsp::RevokedStatus::*)()>(&::Org::BouncyCastle::Ocsp::RevokedStatus::get_HasRevocationReason)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x1012b88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Ocsp::RevokedStatus>::get(),
                            "get_HasRevocationReason",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Ocsp::RevokedStatus.get_RevocationReason
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Org::BouncyCastle::Ocsp::RevokedStatus::*)()>(&::Org::BouncyCastle::Ocsp::RevokedStatus::get_RevocationReason)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1012bac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Ocsp::RevokedStatus>::get(),
                            "get_RevocationReason",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::Org::BouncyCastle::Ocsp::RevokedStatus::__set_info(::Org::BouncyCastle::Asn1::Ocsp::RevokedInfo value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Asn1::Ocsp::RevokedInfo, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::Org::BouncyCastle::Asn1::Ocsp::RevokedInfo>(value));
}
constexpr ::Org::BouncyCastle::Asn1::Ocsp::RevokedInfo ::Org::BouncyCastle::Ocsp::RevokedStatus::__get_info() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Asn1::Ocsp::RevokedInfo, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "info", ty: "::Org::BouncyCastle::Asn1::Ocsp::RevokedInfo", modifiers: "", def_value: None }]
 ::Org::BouncyCastle::Ocsp::RevokedStatus::RevokedStatus(::Org::BouncyCastle::Asn1::Ocsp::RevokedInfo info)  : ::Org::BouncyCastle::Ocsp::CertificateStatus(THROW_UNLESS(::il2cpp_utils::New<RevokedStatus>(info))) {}
 void ::Org::BouncyCastle::Ocsp::RevokedStatus::_ctor(::Org::BouncyCastle::Asn1::Ocsp::RevokedInfo info)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Ocsp::RevokedStatus>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Ocsp::RevokedInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, info);
}
// Ctor Parameters [CppParam { name: "revocationDate", ty: "::System::DateTime", modifiers: "", def_value: None }, CppParam { name: "reason", ty: "int32_t", modifiers: "", def_value: None }]
 ::Org::BouncyCastle::Ocsp::RevokedStatus::RevokedStatus(::System::DateTime revocationDate, int32_t reason)  : ::Org::BouncyCastle::Ocsp::CertificateStatus(THROW_UNLESS(::il2cpp_utils::New<RevokedStatus>(revocationDate, reason))) {}
 void ::Org::BouncyCastle::Ocsp::RevokedStatus::_ctor(::System::DateTime revocationDate, int32_t reason)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Ocsp::RevokedStatus>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, revocationDate, reason);
}
 ::System::DateTime ::Org::BouncyCastle::Ocsp::RevokedStatus::get_RevocationTime()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Ocsp::RevokedStatus>::get(),
                            "get_RevocationTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::DateTime, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::Org::BouncyCastle::Ocsp::RevokedStatus::get_HasRevocationReason()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Ocsp::RevokedStatus>::get(),
                            "get_HasRevocationReason",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t ::Org::BouncyCastle::Ocsp::RevokedStatus::get_RevocationReason()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Ocsp::RevokedStatus>::get(),
                            "get_RevocationReason",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
