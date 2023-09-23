#pragma once
#include "Org/BouncyCastle/Pkix/zzzz__PkixCertPathValidatorResult_impl.hpp"
#include "Org/BouncyCastle/Pkix/zzzz__PkixCertPathBuilderResult_def.hpp"
#include "Org/BouncyCastle/Pkix/zzzz__PkixCertPath_def.hpp"
#include "Org/BouncyCastle/Pkix/zzzz__PkixPolicyNode_def.hpp"
#include "Org/BouncyCastle/Pkix/zzzz__TrustAnchor_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__AsymmetricKeyParameter_def.hpp"
//  Writing Method size for method: Org::BouncyCastle::Pkix::PkixCertPathBuilderResult._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Pkix::PkixCertPathBuilderResult::*)(Org::BouncyCastle::Pkix::PkixCertPath, Org::BouncyCastle::Pkix::TrustAnchor, Org::BouncyCastle::Pkix::PkixPolicyNode, Org::BouncyCastle::Crypto::AsymmetricKeyParameter)>(&Org::BouncyCastle::Pkix::PkixCertPathBuilderResult::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x105f294;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixCertPathBuilderResult>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Pkix::PkixCertPath>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Pkix::TrustAnchor>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Pkix::PkixPolicyNode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::AsymmetricKeyParameter>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Pkix::PkixCertPathBuilderResult.get_CertPath
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Pkix::PkixCertPath (Org::BouncyCastle::Pkix::PkixCertPathBuilderResult::*)()>(&Org::BouncyCastle::Pkix::PkixCertPathBuilderResult::get_CertPath)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x10680b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixCertPathBuilderResult>::get(),
                            "get_CertPath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Pkix::PkixCertPathBuilderResult.ToString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Org::BouncyCastle::Pkix::PkixCertPathBuilderResult::*)()>(&Org::BouncyCastle::Pkix::PkixCertPathBuilderResult::ToString)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x10680b8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Pkix::PkixCertPathBuilderResult),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixCertPathBuilderResult>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
constexpr void Org::BouncyCastle::Pkix::PkixCertPathBuilderResult::__set_certPath(Org::BouncyCastle::Pkix::PkixCertPath value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Pkix::PkixCertPath, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Pkix::PkixCertPath>(value));
}
constexpr Org::BouncyCastle::Pkix::PkixCertPath Org::BouncyCastle::Pkix::PkixCertPathBuilderResult::__get_certPath() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Pkix::PkixCertPath, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "certPath", ty: "Org::BouncyCastle::Pkix::PkixCertPath", modifiers: "", def_value: None }, CppParam { name: "trustAnchor", ty: "Org::BouncyCastle::Pkix::TrustAnchor", modifiers: "", def_value: None }, CppParam { name: "policyTree", ty: "Org::BouncyCastle::Pkix::PkixPolicyNode", modifiers: "", def_value: None }, CppParam { name: "subjectPublicKey", ty: "Org::BouncyCastle::Crypto::AsymmetricKeyParameter", modifiers: "", def_value: None }]
 Org::BouncyCastle::Pkix::PkixCertPathBuilderResult::PkixCertPathBuilderResult(Org::BouncyCastle::Pkix::PkixCertPath certPath, Org::BouncyCastle::Pkix::TrustAnchor trustAnchor, Org::BouncyCastle::Pkix::PkixPolicyNode policyTree, Org::BouncyCastle::Crypto::AsymmetricKeyParameter subjectPublicKey)  : Org::BouncyCastle::Pkix::PkixCertPathValidatorResult(THROW_UNLESS(::il2cpp_utils::New<PkixCertPathBuilderResult>(certPath, trustAnchor, policyTree, subjectPublicKey))) {}
 void Org::BouncyCastle::Pkix::PkixCertPathBuilderResult::_ctor(Org::BouncyCastle::Pkix::PkixCertPath certPath, Org::BouncyCastle::Pkix::TrustAnchor trustAnchor, Org::BouncyCastle::Pkix::PkixPolicyNode policyTree, Org::BouncyCastle::Crypto::AsymmetricKeyParameter subjectPublicKey)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixCertPathBuilderResult>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Pkix::PkixCertPath>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Pkix::TrustAnchor>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Pkix::PkixPolicyNode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::AsymmetricKeyParameter>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, certPath, trustAnchor, policyTree, subjectPublicKey);
}
 Org::BouncyCastle::Pkix::PkixCertPath Org::BouncyCastle::Pkix::PkixCertPathBuilderResult::get_CertPath()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixCertPathBuilderResult>::get(),
                            "get_CertPath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Pkix::PkixCertPath, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW Org::BouncyCastle::Pkix::PkixCertPathBuilderResult::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixCertPathBuilderResult>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
