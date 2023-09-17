#pragma once
namespace {
#include "Org/BouncyCastle/Pkix/zzzz__PkixParameters_def.hpp"
#include "Org/BouncyCastle/Utilities/Date/zzzz__DateTimeObject_def.hpp"
#include "Org/BouncyCastle/Utilities/Collections/zzzz__ISet_def.hpp"
#include "Org/BouncyCastle/X509/Store/zzzz__IX509Store_def.hpp"
#include "Org/BouncyCastle/X509/Store/zzzz__X509CertStoreSelector_def.hpp"
#include "Org/BouncyCastle/X509/Store/zzzz__IX509Selector_def.hpp"
#include "System/Collections/zzzz__IList_def.hpp"
#include "Org/BouncyCastle/Pkix/zzzz__PkixCertPathChecker_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixParameters._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Pkix::PkixParameters::*)(::Org::BouncyCastle::Utilities::Collections::ISet)>(&::Org::BouncyCastle::Pkix::PkixParameters::_ctor)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x10602c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixParameters>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Utilities::Collections::ISet>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixParameters.get_IsRevocationEnabled
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Org::BouncyCastle::Pkix::PkixParameters::*)()>(&::Org::BouncyCastle::Pkix::PkixParameters::get_IsRevocationEnabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1060424;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Pkix::PkixParameters),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixParameters>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixParameters.set_IsRevocationEnabled
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Pkix::PkixParameters::*)(bool)>(&::Org::BouncyCastle::Pkix::PkixParameters::set_IsRevocationEnabled)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x106042c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Pkix::PkixParameters),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixParameters>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixParameters.get_IsExplicitPolicyRequired
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Org::BouncyCastle::Pkix::PkixParameters::*)()>(&::Org::BouncyCastle::Pkix::PkixParameters::get_IsExplicitPolicyRequired)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1060438;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Pkix::PkixParameters),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixParameters>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixParameters.set_IsExplicitPolicyRequired
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Pkix::PkixParameters::*)(bool)>(&::Org::BouncyCastle::Pkix::PkixParameters::set_IsExplicitPolicyRequired)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x1060440;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Pkix::PkixParameters),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixParameters>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixParameters.get_IsAnyPolicyInhibited
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Org::BouncyCastle::Pkix::PkixParameters::*)()>(&::Org::BouncyCastle::Pkix::PkixParameters::get_IsAnyPolicyInhibited)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x106044c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Pkix::PkixParameters),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixParameters>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixParameters.set_IsAnyPolicyInhibited
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Pkix::PkixParameters::*)(bool)>(&::Org::BouncyCastle::Pkix::PkixParameters::set_IsAnyPolicyInhibited)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x1060454;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Pkix::PkixParameters),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixParameters>::get(),
                                  9
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixParameters.get_IsPolicyMappingInhibited
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Org::BouncyCastle::Pkix::PkixParameters::*)()>(&::Org::BouncyCastle::Pkix::PkixParameters::get_IsPolicyMappingInhibited)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1060460;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Pkix::PkixParameters),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixParameters>::get(),
                                  10
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixParameters.set_IsPolicyMappingInhibited
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Pkix::PkixParameters::*)(bool)>(&::Org::BouncyCastle::Pkix::PkixParameters::set_IsPolicyMappingInhibited)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x1060468;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Pkix::PkixParameters),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixParameters>::get(),
                                  11
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixParameters.get_IsPolicyQualifiersRejected
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Org::BouncyCastle::Pkix::PkixParameters::*)()>(&::Org::BouncyCastle::Pkix::PkixParameters::get_IsPolicyQualifiersRejected)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1060474;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Pkix::PkixParameters),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixParameters>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixParameters.set_IsPolicyQualifiersRejected
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Pkix::PkixParameters::*)(bool)>(&::Org::BouncyCastle::Pkix::PkixParameters::set_IsPolicyQualifiersRejected)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x106047c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Pkix::PkixParameters),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixParameters>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixParameters.get_Date
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Utilities::Date::DateTimeObject (::Org::BouncyCastle::Pkix::PkixParameters::*)()>(&::Org::BouncyCastle::Pkix::PkixParameters::get_Date)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1060488;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Pkix::PkixParameters),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixParameters>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixParameters.set_Date
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Pkix::PkixParameters::*)(::Org::BouncyCastle::Utilities::Date::DateTimeObject)>(&::Org::BouncyCastle::Pkix::PkixParameters::set_Date)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1060490;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Pkix::PkixParameters),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixParameters>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixParameters.GetTrustAnchors
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Utilities::Collections::ISet (::Org::BouncyCastle::Pkix::PkixParameters::*)()>(&::Org::BouncyCastle::Pkix::PkixParameters::GetTrustAnchors)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x1060498;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Pkix::PkixParameters),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixParameters>::get(),
                                  16
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixParameters.SetTrustAnchors
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Pkix::PkixParameters::*)(::Org::BouncyCastle::Utilities::Collections::ISet)>(&::Org::BouncyCastle::Pkix::PkixParameters::SetTrustAnchors)> {
  constexpr static std::size_t size = 0x4dc;
  constexpr static std::size_t addrs = 0x1060500;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Pkix::PkixParameters),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixParameters>::get(),
                                  17
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixParameters.GetTargetCertConstraints
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::X509::Store::X509CertStoreSelector (::Org::BouncyCastle::Pkix::PkixParameters::*)()>(&::Org::BouncyCastle::Pkix::PkixParameters::GetTargetCertConstraints)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x10609dc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Pkix::PkixParameters),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixParameters>::get(),
                                  18
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixParameters.SetTargetCertConstraints
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Pkix::PkixParameters::*)(::Org::BouncyCastle::X509::Store::IX509Selector)>(&::Org::BouncyCastle::Pkix::PkixParameters::SetTargetCertConstraints)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x1060acc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Pkix::PkixParameters),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixParameters>::get(),
                                  19
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixParameters.GetInitialPolicies
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Utilities::Collections::ISet (::Org::BouncyCastle::Pkix::PkixParameters::*)()>(&::Org::BouncyCastle::Pkix::PkixParameters::GetInitialPolicies)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x1060bd4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Pkix::PkixParameters),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixParameters>::get(),
                                  20
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixParameters.SetInitialPolicies
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Pkix::PkixParameters::*)(::Org::BouncyCastle::Utilities::Collections::ISet)>(&::Org::BouncyCastle::Pkix::PkixParameters::SetInitialPolicies)> {
  constexpr static std::size_t size = 0x3cc;
  constexpr static std::size_t addrs = 0x1060c58;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Pkix::PkixParameters),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixParameters>::get(),
                                  21
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixParameters.SetCertPathCheckers
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Pkix::PkixParameters::*)(::System::Collections::IList)>(&::Org::BouncyCastle::Pkix::PkixParameters::SetCertPathCheckers)> {
  constexpr static std::size_t size = 0x3fc;
  constexpr static std::size_t addrs = 0x1061024;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Pkix::PkixParameters),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixParameters>::get(),
                                  22
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixParameters.GetCertPathCheckers
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IList (::Org::BouncyCastle::Pkix::PkixParameters::*)()>(&::Org::BouncyCastle::Pkix::PkixParameters::GetCertPathCheckers)> {
  constexpr static std::size_t size = 0x3f0;
  constexpr static std::size_t addrs = 0x1061420;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Pkix::PkixParameters),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixParameters>::get(),
                                  23
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixParameters.AddCertPathChecker
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Pkix::PkixParameters::*)(::Org::BouncyCastle::Pkix::PkixCertPathChecker)>(&::Org::BouncyCastle::Pkix::PkixParameters::AddCertPathChecker)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1061810;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Pkix::PkixParameters),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixParameters>::get(),
                                  24
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixParameters.Clone
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (::Org::BouncyCastle::Pkix::PkixParameters::*)()>(&::Org::BouncyCastle::Pkix::PkixParameters::Clone)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x10618e0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Pkix::PkixParameters),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixParameters>::get(),
                                  25
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixParameters.SetParams
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Pkix::PkixParameters::*)(::Org::BouncyCastle::Pkix::PkixParameters)>(&::Org::BouncyCastle::Pkix::PkixParameters::SetParams)> {
  constexpr static std::size_t size = 0x394;
  constexpr static std::size_t addrs = 0x1061974;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Pkix::PkixParameters),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixParameters>::get(),
                                  26
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixParameters.get_IsUseDeltasEnabled
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Org::BouncyCastle::Pkix::PkixParameters::*)()>(&::Org::BouncyCastle::Pkix::PkixParameters::get_IsUseDeltasEnabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1061d08;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Pkix::PkixParameters),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixParameters>::get(),
                                  27
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixParameters.set_IsUseDeltasEnabled
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Pkix::PkixParameters::*)(bool)>(&::Org::BouncyCastle::Pkix::PkixParameters::set_IsUseDeltasEnabled)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x1061d10;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Pkix::PkixParameters),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixParameters>::get(),
                                  28
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixParameters.get_ValidityModel
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Org::BouncyCastle::Pkix::PkixParameters::*)()>(&::Org::BouncyCastle::Pkix::PkixParameters::get_ValidityModel)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1061d1c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Pkix::PkixParameters),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixParameters>::get(),
                                  29
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixParameters.set_ValidityModel
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Pkix::PkixParameters::*)(int32_t)>(&::Org::BouncyCastle::Pkix::PkixParameters::set_ValidityModel)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1061d24;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Pkix::PkixParameters),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixParameters>::get(),
                                  30
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixParameters.SetStores
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Pkix::PkixParameters::*)(::System::Collections::IList)>(&::Org::BouncyCastle::Pkix::PkixParameters::SetStores)> {
  constexpr static std::size_t size = 0x41c;
  constexpr static std::size_t addrs = 0x1061d2c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Pkix::PkixParameters),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixParameters>::get(),
                                  31
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixParameters.AddStore
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Pkix::PkixParameters::*)(::Org::BouncyCastle::X509::Store::IX509Store)>(&::Org::BouncyCastle::Pkix::PkixParameters::AddStore)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x1062148;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Pkix::PkixParameters),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixParameters>::get(),
                                  32
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixParameters.AddAdditionalStore
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Pkix::PkixParameters::*)(::Org::BouncyCastle::X509::Store::IX509Store)>(&::Org::BouncyCastle::Pkix::PkixParameters::AddAdditionalStore)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x1062204;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Pkix::PkixParameters),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixParameters>::get(),
                                  33
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixParameters.GetAdditionalStores
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IList (::Org::BouncyCastle::Pkix::PkixParameters::*)()>(&::Org::BouncyCastle::Pkix::PkixParameters::GetAdditionalStores)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x10622c0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Pkix::PkixParameters),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixParameters>::get(),
                                  34
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixParameters.GetStores
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IList (::Org::BouncyCastle::Pkix::PkixParameters::*)()>(&::Org::BouncyCastle::Pkix::PkixParameters::GetStores)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x106231c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Pkix::PkixParameters),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixParameters>::get(),
                                  35
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixParameters.get_IsAdditionalLocationsEnabled
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Org::BouncyCastle::Pkix::PkixParameters::*)()>(&::Org::BouncyCastle::Pkix::PkixParameters::get_IsAdditionalLocationsEnabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1062378;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Pkix::PkixParameters),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixParameters>::get(),
                                  36
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixParameters.SetAdditionalLocationsEnabled
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Pkix::PkixParameters::*)(bool)>(&::Org::BouncyCastle::Pkix::PkixParameters::SetAdditionalLocationsEnabled)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x1062380;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Pkix::PkixParameters),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixParameters>::get(),
                                  37
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixParameters.GetTargetConstraints
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::X509::Store::IX509Selector (::Org::BouncyCastle::Pkix::PkixParameters::*)()>(&::Org::BouncyCastle::Pkix::PkixParameters::GetTargetConstraints)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x106238c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Pkix::PkixParameters),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixParameters>::get(),
                                  38
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixParameters.SetTargetConstraints
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Pkix::PkixParameters::*)(::Org::BouncyCastle::X509::Store::IX509Selector)>(&::Org::BouncyCastle::Pkix::PkixParameters::SetTargetConstraints)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x106246c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Pkix::PkixParameters),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixParameters>::get(),
                                  39
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixParameters.GetTrustedACIssuers
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Utilities::Collections::ISet (::Org::BouncyCastle::Pkix::PkixParameters::*)()>(&::Org::BouncyCastle::Pkix::PkixParameters::GetTrustedACIssuers)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x1062574;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Pkix::PkixParameters),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixParameters>::get(),
                                  40
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixParameters.SetTrustedACIssuers
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Pkix::PkixParameters::*)(::Org::BouncyCastle::Utilities::Collections::ISet)>(&::Org::BouncyCastle::Pkix::PkixParameters::SetTrustedACIssuers)> {
  constexpr static std::size_t size = 0x458;
  constexpr static std::size_t addrs = 0x10625dc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Pkix::PkixParameters),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixParameters>::get(),
                                  41
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixParameters.GetNecessaryACAttributes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Utilities::Collections::ISet (::Org::BouncyCastle::Pkix::PkixParameters::*)()>(&::Org::BouncyCastle::Pkix::PkixParameters::GetNecessaryACAttributes)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x1062a34;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Pkix::PkixParameters),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixParameters>::get(),
                                  42
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixParameters.SetNecessaryACAttributes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Pkix::PkixParameters::*)(::Org::BouncyCastle::Utilities::Collections::ISet)>(&::Org::BouncyCastle::Pkix::PkixParameters::SetNecessaryACAttributes)> {
  constexpr static std::size_t size = 0x3b4;
  constexpr static std::size_t addrs = 0x1062a9c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Pkix::PkixParameters),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixParameters>::get(),
                                  43
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixParameters.GetProhibitedACAttributes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Utilities::Collections::ISet (::Org::BouncyCastle::Pkix::PkixParameters::*)()>(&::Org::BouncyCastle::Pkix::PkixParameters::GetProhibitedACAttributes)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x1062e50;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Pkix::PkixParameters),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixParameters>::get(),
                                  44
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixParameters.SetProhibitedACAttributes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Pkix::PkixParameters::*)(::Org::BouncyCastle::Utilities::Collections::ISet)>(&::Org::BouncyCastle::Pkix::PkixParameters::SetProhibitedACAttributes)> {
  constexpr static std::size_t size = 0x3b4;
  constexpr static std::size_t addrs = 0x1062eb8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Pkix::PkixParameters),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixParameters>::get(),
                                  45
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixParameters.GetAttrCertCheckers
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Utilities::Collections::ISet (::Org::BouncyCastle::Pkix::PkixParameters::*)()>(&::Org::BouncyCastle::Pkix::PkixParameters::GetAttrCertCheckers)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x106326c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Pkix::PkixParameters),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixParameters>::get(),
                                  46
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixParameters.SetAttrCertCheckers
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Pkix::PkixParameters::*)(::Org::BouncyCastle::Utilities::Collections::ISet)>(&::Org::BouncyCastle::Pkix::PkixParameters::SetAttrCertCheckers)> {
  constexpr static std::size_t size = 0x458;
  constexpr static std::size_t addrs = 0x10632d4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Pkix::PkixParameters),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixParameters>::get(),
                                  47
                                ));
    return ___internal_method;
  }
};
constexpr void ::Org::BouncyCastle::Pkix::PkixParameters::__set_trustAnchors(::Org::BouncyCastle::Utilities::Collections::ISet value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Utilities::Collections::ISet, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::Org::BouncyCastle::Utilities::Collections::ISet>(value));
}
constexpr ::Org::BouncyCastle::Utilities::Collections::ISet ::Org::BouncyCastle::Pkix::PkixParameters::__get_trustAnchors() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Utilities::Collections::ISet, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Org::BouncyCastle::Pkix::PkixParameters::__set_date(::Org::BouncyCastle::Utilities::Date::DateTimeObject value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Utilities::Date::DateTimeObject, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::Org::BouncyCastle::Utilities::Date::DateTimeObject>(value));
}
constexpr ::Org::BouncyCastle::Utilities::Date::DateTimeObject ::Org::BouncyCastle::Pkix::PkixParameters::__get_date() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Utilities::Date::DateTimeObject, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Org::BouncyCastle::Pkix::PkixParameters::__set_certPathCheckers(::System::Collections::IList value)  {
::cordl_internals::setInstanceField<::System::Collections::IList, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::IList>(value));
}
constexpr ::System::Collections::IList ::Org::BouncyCastle::Pkix::PkixParameters::__get_certPathCheckers() const {
return ::cordl_internals::getInstanceField<::System::Collections::IList, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Org::BouncyCastle::Pkix::PkixParameters::__set_revocationEnabled(bool value)  {
::cordl_internals::setInstanceField<bool, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::Org::BouncyCastle::Pkix::PkixParameters::__get_revocationEnabled() const {
return ::cordl_internals::getInstanceField<bool, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Org::BouncyCastle::Pkix::PkixParameters::__set_initialPolicies(::Org::BouncyCastle::Utilities::Collections::ISet value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Utilities::Collections::ISet, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::Org::BouncyCastle::Utilities::Collections::ISet>(value));
}
constexpr ::Org::BouncyCastle::Utilities::Collections::ISet ::Org::BouncyCastle::Pkix::PkixParameters::__get_initialPolicies() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Utilities::Collections::ISet, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Org::BouncyCastle::Pkix::PkixParameters::__set_explicitPolicyRequired(bool value)  {
::cordl_internals::setInstanceField<bool, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::Org::BouncyCastle::Pkix::PkixParameters::__get_explicitPolicyRequired() const {
return ::cordl_internals::getInstanceField<bool, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Org::BouncyCastle::Pkix::PkixParameters::__set_anyPolicyInhibited(bool value)  {
::cordl_internals::setInstanceField<bool, 0x39>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::Org::BouncyCastle::Pkix::PkixParameters::__get_anyPolicyInhibited() const {
return ::cordl_internals::getInstanceField<bool, 0x39>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Org::BouncyCastle::Pkix::PkixParameters::__set_policyMappingInhibited(bool value)  {
::cordl_internals::setInstanceField<bool, 0x3a>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::Org::BouncyCastle::Pkix::PkixParameters::__get_policyMappingInhibited() const {
return ::cordl_internals::getInstanceField<bool, 0x3a>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Org::BouncyCastle::Pkix::PkixParameters::__set_policyQualifiersRejected(bool value)  {
::cordl_internals::setInstanceField<bool, 0x3b>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::Org::BouncyCastle::Pkix::PkixParameters::__get_policyQualifiersRejected() const {
return ::cordl_internals::getInstanceField<bool, 0x3b>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Org::BouncyCastle::Pkix::PkixParameters::__set_certSelector(::Org::BouncyCastle::X509::Store::IX509Selector value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::X509::Store::IX509Selector, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::Org::BouncyCastle::X509::Store::IX509Selector>(value));
}
constexpr ::Org::BouncyCastle::X509::Store::IX509Selector ::Org::BouncyCastle::Pkix::PkixParameters::__get_certSelector() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::X509::Store::IX509Selector, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Org::BouncyCastle::Pkix::PkixParameters::__set_stores(::System::Collections::IList value)  {
::cordl_internals::setInstanceField<::System::Collections::IList, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::IList>(value));
}
constexpr ::System::Collections::IList ::Org::BouncyCastle::Pkix::PkixParameters::__get_stores() const {
return ::cordl_internals::getInstanceField<::System::Collections::IList, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Org::BouncyCastle::Pkix::PkixParameters::__set_selector(::Org::BouncyCastle::X509::Store::IX509Selector value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::X509::Store::IX509Selector, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::Org::BouncyCastle::X509::Store::IX509Selector>(value));
}
constexpr ::Org::BouncyCastle::X509::Store::IX509Selector ::Org::BouncyCastle::Pkix::PkixParameters::__get_selector() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::X509::Store::IX509Selector, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Org::BouncyCastle::Pkix::PkixParameters::__set_additionalLocationsEnabled(bool value)  {
::cordl_internals::setInstanceField<bool, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::Org::BouncyCastle::Pkix::PkixParameters::__get_additionalLocationsEnabled() const {
return ::cordl_internals::getInstanceField<bool, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Org::BouncyCastle::Pkix::PkixParameters::__set_additionalStores(::System::Collections::IList value)  {
::cordl_internals::setInstanceField<::System::Collections::IList, 0x60>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::IList>(value));
}
constexpr ::System::Collections::IList ::Org::BouncyCastle::Pkix::PkixParameters::__get_additionalStores() const {
return ::cordl_internals::getInstanceField<::System::Collections::IList, 0x60>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Org::BouncyCastle::Pkix::PkixParameters::__set_trustedACIssuers(::Org::BouncyCastle::Utilities::Collections::ISet value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Utilities::Collections::ISet, 0x68>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::Org::BouncyCastle::Utilities::Collections::ISet>(value));
}
constexpr ::Org::BouncyCastle::Utilities::Collections::ISet ::Org::BouncyCastle::Pkix::PkixParameters::__get_trustedACIssuers() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Utilities::Collections::ISet, 0x68>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Org::BouncyCastle::Pkix::PkixParameters::__set_necessaryACAttributes(::Org::BouncyCastle::Utilities::Collections::ISet value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Utilities::Collections::ISet, 0x70>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::Org::BouncyCastle::Utilities::Collections::ISet>(value));
}
constexpr ::Org::BouncyCastle::Utilities::Collections::ISet ::Org::BouncyCastle::Pkix::PkixParameters::__get_necessaryACAttributes() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Utilities::Collections::ISet, 0x70>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Org::BouncyCastle::Pkix::PkixParameters::__set_prohibitedACAttributes(::Org::BouncyCastle::Utilities::Collections::ISet value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Utilities::Collections::ISet, 0x78>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::Org::BouncyCastle::Utilities::Collections::ISet>(value));
}
constexpr ::Org::BouncyCastle::Utilities::Collections::ISet ::Org::BouncyCastle::Pkix::PkixParameters::__get_prohibitedACAttributes() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Utilities::Collections::ISet, 0x78>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Org::BouncyCastle::Pkix::PkixParameters::__set_attrCertCheckers(::Org::BouncyCastle::Utilities::Collections::ISet value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Utilities::Collections::ISet, 0x80>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::Org::BouncyCastle::Utilities::Collections::ISet>(value));
}
constexpr ::Org::BouncyCastle::Utilities::Collections::ISet ::Org::BouncyCastle::Pkix::PkixParameters::__get_attrCertCheckers() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Utilities::Collections::ISet, 0x80>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Org::BouncyCastle::Pkix::PkixParameters::__set_validityModel(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x88>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::Org::BouncyCastle::Pkix::PkixParameters::__get_validityModel() const {
return ::cordl_internals::getInstanceField<int32_t, 0x88>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Org::BouncyCastle::Pkix::PkixParameters::__set_useDeltas(bool value)  {
::cordl_internals::setInstanceField<bool, 0x8c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::Org::BouncyCastle::Pkix::PkixParameters::__get_useDeltas() const {
return ::cordl_internals::getInstanceField<bool, 0x8c>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "trustAnchors", ty: "::Org::BouncyCastle::Utilities::Collections::ISet", modifiers: "", def_value: None }]
 ::Org::BouncyCastle::Pkix::PkixParameters::PkixParameters(::Org::BouncyCastle::Utilities::Collections::ISet trustAnchors)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<PkixParameters>(trustAnchors))) {}
 void ::Org::BouncyCastle::Pkix::PkixParameters::_ctor(::Org::BouncyCastle::Utilities::Collections::ISet trustAnchors)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixParameters>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Utilities::Collections::ISet>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, trustAnchors);
}
 bool ::Org::BouncyCastle::Pkix::PkixParameters::get_IsRevocationEnabled()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixParameters>::get(),
                            "get_IsRevocationEnabled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::Org::BouncyCastle::Pkix::PkixParameters::set_IsRevocationEnabled(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixParameters>::get(),
                            "set_IsRevocationEnabled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 bool ::Org::BouncyCastle::Pkix::PkixParameters::get_IsExplicitPolicyRequired()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixParameters>::get(),
                            "get_IsExplicitPolicyRequired",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::Org::BouncyCastle::Pkix::PkixParameters::set_IsExplicitPolicyRequired(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixParameters>::get(),
                            "set_IsExplicitPolicyRequired",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 bool ::Org::BouncyCastle::Pkix::PkixParameters::get_IsAnyPolicyInhibited()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixParameters>::get(),
                            "get_IsAnyPolicyInhibited",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::Org::BouncyCastle::Pkix::PkixParameters::set_IsAnyPolicyInhibited(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixParameters>::get(),
                            "set_IsAnyPolicyInhibited",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 bool ::Org::BouncyCastle::Pkix::PkixParameters::get_IsPolicyMappingInhibited()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixParameters>::get(),
                            "get_IsPolicyMappingInhibited",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::Org::BouncyCastle::Pkix::PkixParameters::set_IsPolicyMappingInhibited(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixParameters>::get(),
                            "set_IsPolicyMappingInhibited",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 bool ::Org::BouncyCastle::Pkix::PkixParameters::get_IsPolicyQualifiersRejected()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixParameters>::get(),
                            "get_IsPolicyQualifiersRejected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::Org::BouncyCastle::Pkix::PkixParameters::set_IsPolicyQualifiersRejected(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixParameters>::get(),
                            "set_IsPolicyQualifiersRejected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::Org::BouncyCastle::Utilities::Date::DateTimeObject ::Org::BouncyCastle::Pkix::PkixParameters::get_Date()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixParameters>::get(),
                            "get_Date",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Utilities::Date::DateTimeObject, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::Org::BouncyCastle::Pkix::PkixParameters::set_Date(::Org::BouncyCastle::Utilities::Date::DateTimeObject value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixParameters>::get(),
                            "set_Date",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Utilities::Date::DateTimeObject>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::Org::BouncyCastle::Utilities::Collections::ISet ::Org::BouncyCastle::Pkix::PkixParameters::GetTrustAnchors()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixParameters>::get(),
                            "GetTrustAnchors",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Utilities::Collections::ISet, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::Org::BouncyCastle::Pkix::PkixParameters::SetTrustAnchors(::Org::BouncyCastle::Utilities::Collections::ISet tas)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixParameters>::get(),
                            "SetTrustAnchors",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Utilities::Collections::ISet>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, tas);
}
 ::Org::BouncyCastle::X509::Store::X509CertStoreSelector ::Org::BouncyCastle::Pkix::PkixParameters::GetTargetCertConstraints()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixParameters>::get(),
                            "GetTargetCertConstraints",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::X509::Store::X509CertStoreSelector, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::Org::BouncyCastle::Pkix::PkixParameters::SetTargetCertConstraints(::Org::BouncyCastle::X509::Store::IX509Selector selector)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixParameters>::get(),
                            "SetTargetCertConstraints",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::Store::IX509Selector>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, selector);
}
 ::Org::BouncyCastle::Utilities::Collections::ISet ::Org::BouncyCastle::Pkix::PkixParameters::GetInitialPolicies()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixParameters>::get(),
                            "GetInitialPolicies",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Utilities::Collections::ISet, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::Org::BouncyCastle::Pkix::PkixParameters::SetInitialPolicies(::Org::BouncyCastle::Utilities::Collections::ISet initialPolicies)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixParameters>::get(),
                            "SetInitialPolicies",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Utilities::Collections::ISet>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, initialPolicies);
}
 void ::Org::BouncyCastle::Pkix::PkixParameters::SetCertPathCheckers(::System::Collections::IList checkers)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixParameters>::get(),
                            "SetCertPathCheckers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IList>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, checkers);
}
 ::System::Collections::IList ::Org::BouncyCastle::Pkix::PkixParameters::GetCertPathCheckers()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixParameters>::get(),
                            "GetCertPathCheckers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IList, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::Org::BouncyCastle::Pkix::PkixParameters::AddCertPathChecker(::Org::BouncyCastle::Pkix::PkixCertPathChecker checker)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixParameters>::get(),
                            "AddCertPathChecker",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Pkix::PkixCertPathChecker>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, checker);
}
 ::bs_hook::Il2CppWrapperType ::Org::BouncyCastle::Pkix::PkixParameters::Clone()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixParameters>::get(),
                            "Clone",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::Org::BouncyCastle::Pkix::PkixParameters::SetParams(::Org::BouncyCastle::Pkix::PkixParameters parameters)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixParameters>::get(),
                            "SetParams",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Pkix::PkixParameters>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, parameters);
}
 bool ::Org::BouncyCastle::Pkix::PkixParameters::get_IsUseDeltasEnabled()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixParameters>::get(),
                            "get_IsUseDeltasEnabled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::Org::BouncyCastle::Pkix::PkixParameters::set_IsUseDeltasEnabled(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixParameters>::get(),
                            "set_IsUseDeltasEnabled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 int32_t ::Org::BouncyCastle::Pkix::PkixParameters::get_ValidityModel()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixParameters>::get(),
                            "get_ValidityModel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::Org::BouncyCastle::Pkix::PkixParameters::set_ValidityModel(int32_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixParameters>::get(),
                            "set_ValidityModel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void ::Org::BouncyCastle::Pkix::PkixParameters::SetStores(::System::Collections::IList stores)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixParameters>::get(),
                            "SetStores",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IList>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, stores);
}
 void ::Org::BouncyCastle::Pkix::PkixParameters::AddStore(::Org::BouncyCastle::X509::Store::IX509Store store)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixParameters>::get(),
                            "AddStore",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::Store::IX509Store>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, store);
}
 void ::Org::BouncyCastle::Pkix::PkixParameters::AddAdditionalStore(::Org::BouncyCastle::X509::Store::IX509Store store)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixParameters>::get(),
                            "AddAdditionalStore",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::Store::IX509Store>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, store);
}
 ::System::Collections::IList ::Org::BouncyCastle::Pkix::PkixParameters::GetAdditionalStores()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixParameters>::get(),
                            "GetAdditionalStores",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IList, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::Collections::IList ::Org::BouncyCastle::Pkix::PkixParameters::GetStores()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixParameters>::get(),
                            "GetStores",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IList, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::Org::BouncyCastle::Pkix::PkixParameters::get_IsAdditionalLocationsEnabled()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixParameters>::get(),
                            "get_IsAdditionalLocationsEnabled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::Org::BouncyCastle::Pkix::PkixParameters::SetAdditionalLocationsEnabled(bool enabled)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixParameters>::get(),
                            "SetAdditionalLocationsEnabled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, enabled);
}
 ::Org::BouncyCastle::X509::Store::IX509Selector ::Org::BouncyCastle::Pkix::PkixParameters::GetTargetConstraints()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixParameters>::get(),
                            "GetTargetConstraints",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::X509::Store::IX509Selector, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::Org::BouncyCastle::Pkix::PkixParameters::SetTargetConstraints(::Org::BouncyCastle::X509::Store::IX509Selector selector)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixParameters>::get(),
                            "SetTargetConstraints",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::Store::IX509Selector>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, selector);
}
 ::Org::BouncyCastle::Utilities::Collections::ISet ::Org::BouncyCastle::Pkix::PkixParameters::GetTrustedACIssuers()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixParameters>::get(),
                            "GetTrustedACIssuers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Utilities::Collections::ISet, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::Org::BouncyCastle::Pkix::PkixParameters::SetTrustedACIssuers(::Org::BouncyCastle::Utilities::Collections::ISet trustedACIssuers)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixParameters>::get(),
                            "SetTrustedACIssuers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Utilities::Collections::ISet>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, trustedACIssuers);
}
 ::Org::BouncyCastle::Utilities::Collections::ISet ::Org::BouncyCastle::Pkix::PkixParameters::GetNecessaryACAttributes()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixParameters>::get(),
                            "GetNecessaryACAttributes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Utilities::Collections::ISet, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::Org::BouncyCastle::Pkix::PkixParameters::SetNecessaryACAttributes(::Org::BouncyCastle::Utilities::Collections::ISet necessaryACAttributes)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixParameters>::get(),
                            "SetNecessaryACAttributes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Utilities::Collections::ISet>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, necessaryACAttributes);
}
 ::Org::BouncyCastle::Utilities::Collections::ISet ::Org::BouncyCastle::Pkix::PkixParameters::GetProhibitedACAttributes()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixParameters>::get(),
                            "GetProhibitedACAttributes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Utilities::Collections::ISet, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::Org::BouncyCastle::Pkix::PkixParameters::SetProhibitedACAttributes(::Org::BouncyCastle::Utilities::Collections::ISet prohibitedACAttributes)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixParameters>::get(),
                            "SetProhibitedACAttributes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Utilities::Collections::ISet>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, prohibitedACAttributes);
}
 ::Org::BouncyCastle::Utilities::Collections::ISet ::Org::BouncyCastle::Pkix::PkixParameters::GetAttrCertCheckers()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixParameters>::get(),
                            "GetAttrCertCheckers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Utilities::Collections::ISet, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::Org::BouncyCastle::Pkix::PkixParameters::SetAttrCertCheckers(::Org::BouncyCastle::Utilities::Collections::ISet attrCertCheckers)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixParameters>::get(),
                            "SetAttrCertCheckers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Utilities::Collections::ISet>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, attrCertCheckers);
}
} // end anonymous namespace
