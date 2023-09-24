#pragma once
#include "Org/BouncyCastle/Pkix/zzzz__PkixAttrCertChecker_def.hpp"
#include "System/Collections/zzzz__ICollection_def.hpp"
#include "Org/BouncyCastle/Utilities/Collections/zzzz__ISet_def.hpp"
#include "Org/BouncyCastle/Pkix/zzzz__PkixCertPath_def.hpp"
#include "Org/BouncyCastle/X509/zzzz__IX509AttributeCertificate_def.hpp"
//  Writing Method size for method: Org::BouncyCastle::Pkix::PkixAttrCertChecker.GetSupportedExtensions
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Utilities::Collections::ISet (Org::BouncyCastle::Pkix::PkixAttrCertChecker::*)()>(&Org::BouncyCastle::Pkix::PkixAttrCertChecker::GetSupportedExtensions)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Pkix::PkixAttrCertChecker),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixAttrCertChecker>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Pkix::PkixAttrCertChecker.Check
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Pkix::PkixAttrCertChecker::*)(Org::BouncyCastle::X509::IX509AttributeCertificate, Org::BouncyCastle::Pkix::PkixCertPath, Org::BouncyCastle::Pkix::PkixCertPath, System::Collections::ICollection)>(&Org::BouncyCastle::Pkix::PkixAttrCertChecker::Check)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Pkix::PkixAttrCertChecker),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixAttrCertChecker>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Pkix::PkixAttrCertChecker.Clone
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Pkix::PkixAttrCertChecker (Org::BouncyCastle::Pkix::PkixAttrCertChecker::*)()>(&Org::BouncyCastle::Pkix::PkixAttrCertChecker::Clone)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Pkix::PkixAttrCertChecker),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixAttrCertChecker>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Pkix::PkixAttrCertChecker._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Pkix::PkixAttrCertChecker::*)()>(&Org::BouncyCastle::Pkix::PkixAttrCertChecker::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x105c5b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixAttrCertChecker>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 Org::BouncyCastle::Utilities::Collections::ISet Org::BouncyCastle::Pkix::PkixAttrCertChecker::GetSupportedExtensions()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixAttrCertChecker>::get(),
                            "GetSupportedExtensions",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Utilities::Collections::ISet, false>(const_cast<void*>(instance), ___internal_method);
}
 void Org::BouncyCastle::Pkix::PkixAttrCertChecker::Check(Org::BouncyCastle::X509::IX509AttributeCertificate attrCert, Org::BouncyCastle::Pkix::PkixCertPath certPath, Org::BouncyCastle::Pkix::PkixCertPath holderCertPath, System::Collections::ICollection unresolvedCritExts)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixAttrCertChecker>::get(),
                            "Check",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::X509::IX509AttributeCertificate>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Pkix::PkixCertPath>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Pkix::PkixCertPath>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::ICollection>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, attrCert, certPath, holderCertPath, unresolvedCritExts);
}
 Org::BouncyCastle::Pkix::PkixAttrCertChecker Org::BouncyCastle::Pkix::PkixAttrCertChecker::Clone()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixAttrCertChecker>::get(),
                            "Clone",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Pkix::PkixAttrCertChecker, false>(const_cast<void*>(instance), ___internal_method);
}
 Org::BouncyCastle::Pkix::PkixAttrCertChecker Org::BouncyCastle::Pkix::PkixAttrCertChecker::New_ctor()  {
Org::BouncyCastle::Pkix::PkixAttrCertChecker o{THROW_UNLESS(::il2cpp_utils::New<Org::BouncyCastle::Pkix::PkixAttrCertChecker>())};
return o;
}
 void Org::BouncyCastle::Pkix::PkixAttrCertChecker::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::PkixAttrCertChecker>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
