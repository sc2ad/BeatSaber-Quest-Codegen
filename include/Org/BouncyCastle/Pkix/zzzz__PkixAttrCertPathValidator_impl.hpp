#pragma once
#include "Org/BouncyCastle/Pkix/zzzz__PkixAttrCertPathValidator_def.hpp"
#include "Org/BouncyCastle/Pkix/zzzz__PkixCertPath_def.hpp"
#include "Org/BouncyCastle/Pkix/zzzz__PkixParameters_def.hpp"
#include "Org/BouncyCastle/Pkix/zzzz__PkixCertPathValidatorResult_def.hpp"
//  Writing Method size for method: Org::BouncyCastle::Pkix::PkixAttrCertPathValidator.Validate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Pkix::PkixCertPathValidatorResult (Org::BouncyCastle::Pkix::PkixAttrCertPathValidator::*)(Org::BouncyCastle::Pkix::PkixCertPath, Org::BouncyCastle::Pkix::PkixParameters)>(&Org::BouncyCastle::Pkix::PkixAttrCertPathValidator::Validate)> {
  constexpr static std::size_t size = 0x3cc;
  constexpr static std::size_t addrs = 0x105fa58;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Pkix::PkixAttrCertPathValidator),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixAttrCertPathValidator>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Pkix::PkixAttrCertPathValidator._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Pkix::PkixAttrCertPathValidator::*)()>(&Org::BouncyCastle::Pkix::PkixAttrCertPathValidator::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x105f0f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixAttrCertPathValidator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 Org::BouncyCastle::Pkix::PkixCertPathValidatorResult Org::BouncyCastle::Pkix::PkixAttrCertPathValidator::Validate(Org::BouncyCastle::Pkix::PkixCertPath certPath, Org::BouncyCastle::Pkix::PkixParameters pkixParams)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixAttrCertPathValidator>::get(),
                            "Validate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Pkix::PkixCertPath>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Pkix::PkixParameters>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Pkix::PkixCertPathValidatorResult, false>(const_cast<void*>(instance), ___internal_method, certPath, pkixParams);
}
// Ctor Parameters []
 Org::BouncyCastle::Pkix::PkixAttrCertPathValidator::PkixAttrCertPathValidator()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<PkixAttrCertPathValidator>())) {}
 void Org::BouncyCastle::Pkix::PkixAttrCertPathValidator::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixAttrCertPathValidator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
