#pragma once
#include "Org/BouncyCastle/Pkix/zzzz__PkixCertPathValidator_def.hpp"
#include "Org/BouncyCastle/X509/zzzz__X509Certificate_def.hpp"
#include "Org/BouncyCastle/Pkix/zzzz__PkixCertPathValidatorResult_def.hpp"
#include "Org/BouncyCastle/Pkix/zzzz__PkixCertPath_def.hpp"
#include "Org/BouncyCastle/Pkix/zzzz__PkixParameters_def.hpp"
//  Writing Method size for method: Org::BouncyCastle::Pkix::PkixCertPathValidator.Validate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Pkix::PkixCertPathValidatorResult (Org::BouncyCastle::Pkix::PkixCertPathValidator::*)(Org::BouncyCastle::Pkix::PkixCertPath, Org::BouncyCastle::Pkix::PkixParameters)>(&Org::BouncyCastle::Pkix::PkixCertPathValidator::Validate)> {
  constexpr static std::size_t size = 0x1eec;
  constexpr static std::size_t addrs = 0x1068270;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Pkix::PkixCertPathValidator),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixCertPathValidator>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Pkix::PkixCertPathValidator.CheckCertificate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(Org::BouncyCastle::X509::X509Certificate)>(&Org::BouncyCastle::Pkix::PkixCertPathValidator::CheckCertificate)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x106a87c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixCertPathValidator>::get(),
                            "CheckCertificate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::X509::X509Certificate>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Pkix::PkixCertPathValidator._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Pkix::PkixCertPathValidator::*)()>(&Org::BouncyCastle::Pkix::PkixCertPathValidator::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1067cb8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixCertPathValidator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 Org::BouncyCastle::Pkix::PkixCertPathValidatorResult Org::BouncyCastle::Pkix::PkixCertPathValidator::Validate(Org::BouncyCastle::Pkix::PkixCertPath certPath, Org::BouncyCastle::Pkix::PkixParameters paramsPkix)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixCertPathValidator>::get(),
                            "Validate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Pkix::PkixCertPath>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Pkix::PkixParameters>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Pkix::PkixCertPathValidatorResult, false>(const_cast<void*>(instance), ___internal_method, certPath, paramsPkix);
}
 void Org::BouncyCastle::Pkix::PkixCertPathValidator::CheckCertificate(Org::BouncyCastle::X509::X509Certificate cert)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixCertPathValidator>::get(),
                            "CheckCertificate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::X509::X509Certificate>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, cert);
}
 Org::BouncyCastle::Pkix::PkixCertPathValidator Org::BouncyCastle::Pkix::PkixCertPathValidator::New_ctor()  {
Org::BouncyCastle::Pkix::PkixCertPathValidator o{THROW_UNLESS(::il2cpp_utils::New<Org::BouncyCastle::Pkix::PkixCertPathValidator>())};
return o;
}
 void Org::BouncyCastle::Pkix::PkixCertPathValidator::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixCertPathValidator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
