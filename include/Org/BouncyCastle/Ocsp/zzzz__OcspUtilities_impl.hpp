#pragma once
namespace {
#include "Org/BouncyCastle/Ocsp/zzzz__OcspUtilities_def.hpp"
#include "Org/BouncyCastle/Utilities/Collections/zzzz__ISet_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerObjectIdentifier_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__AlgorithmIdentifier_def.hpp"
#include "System/Collections/zzzz__IDictionary_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Ocsp::OcspUtilities.GetAlgorithmOid
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::DerObjectIdentifier (*)(::StringW)>(&::Org::BouncyCastle::Ocsp::OcspUtilities::GetAlgorithmOid)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x10158b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Ocsp::OcspUtilities>::get(),
                            "GetAlgorithmOid",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Ocsp::OcspUtilities.GetAlgorithmName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::Org::BouncyCastle::Asn1::DerObjectIdentifier)>(&::Org::BouncyCastle::Ocsp::OcspUtilities::GetAlgorithmName)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x100ffa4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Ocsp::OcspUtilities>::get(),
                            "GetAlgorithmName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DerObjectIdentifier>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Ocsp::OcspUtilities.GetSigAlgID
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier (*)(::Org::BouncyCastle::Asn1::DerObjectIdentifier)>(&::Org::BouncyCastle::Ocsp::OcspUtilities::GetSigAlgID)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x1012514;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Ocsp::OcspUtilities>::get(),
                            "GetSigAlgID",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DerObjectIdentifier>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Ocsp::OcspUtilities.get_AlgNames
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerable (*)()>(&::Org::BouncyCastle::Ocsp::OcspUtilities::get_AlgNames)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x1012818;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Ocsp::OcspUtilities>::get(),
                            "get_AlgNames",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Ocsp::OcspUtilities._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Ocsp::OcspUtilities::*)()>(&::Org::BouncyCastle::Ocsp::OcspUtilities::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x10188e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Ocsp::OcspUtilities>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 void ::Org::BouncyCastle::Ocsp::OcspUtilities::__set_algorithms(::System::Collections::IDictionary value)  {
::cordl_internals::setStaticField<::System::Collections::IDictionary, "algorithms", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Ocsp::OcspUtilities>::get>(std::forward<::System::Collections::IDictionary>(value));
}
 ::System::Collections::IDictionary ::Org::BouncyCastle::Ocsp::OcspUtilities::__get_algorithms()  {
return ::cordl_internals::getStaticField<::System::Collections::IDictionary, "algorithms", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Ocsp::OcspUtilities>::get>();
}
 void ::Org::BouncyCastle::Ocsp::OcspUtilities::__set_oids(::System::Collections::IDictionary value)  {
::cordl_internals::setStaticField<::System::Collections::IDictionary, "oids", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Ocsp::OcspUtilities>::get>(std::forward<::System::Collections::IDictionary>(value));
}
 ::System::Collections::IDictionary ::Org::BouncyCastle::Ocsp::OcspUtilities::__get_oids()  {
return ::cordl_internals::getStaticField<::System::Collections::IDictionary, "oids", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Ocsp::OcspUtilities>::get>();
}
 void ::Org::BouncyCastle::Ocsp::OcspUtilities::__set_noParams(::Org::BouncyCastle::Utilities::Collections::ISet value)  {
::cordl_internals::setStaticField<::Org::BouncyCastle::Utilities::Collections::ISet, "noParams", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Ocsp::OcspUtilities>::get>(std::forward<::Org::BouncyCastle::Utilities::Collections::ISet>(value));
}
 ::Org::BouncyCastle::Utilities::Collections::ISet ::Org::BouncyCastle::Ocsp::OcspUtilities::__get_noParams()  {
return ::cordl_internals::getStaticField<::Org::BouncyCastle::Utilities::Collections::ISet, "noParams", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Ocsp::OcspUtilities>::get>();
}
 ::Org::BouncyCastle::Asn1::DerObjectIdentifier ::Org::BouncyCastle::Ocsp::OcspUtilities::GetAlgorithmOid(::StringW algorithmName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Ocsp::OcspUtilities>::get(),
                            "GetAlgorithmOid",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::DerObjectIdentifier, false>(nullptr, ___internal_method, algorithmName);
}
 ::StringW ::Org::BouncyCastle::Ocsp::OcspUtilities::GetAlgorithmName(::Org::BouncyCastle::Asn1::DerObjectIdentifier oid)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Ocsp::OcspUtilities>::get(),
                            "GetAlgorithmName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DerObjectIdentifier>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, oid);
}
 ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier ::Org::BouncyCastle::Ocsp::OcspUtilities::GetSigAlgID(::Org::BouncyCastle::Asn1::DerObjectIdentifier sigOid)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Ocsp::OcspUtilities>::get(),
                            "GetSigAlgID",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DerObjectIdentifier>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier, false>(nullptr, ___internal_method, sigOid);
}
 ::System::Collections::IEnumerable ::Org::BouncyCastle::Ocsp::OcspUtilities::get_AlgNames()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Ocsp::OcspUtilities>::get(),
                            "get_AlgNames",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerable, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
 ::Org::BouncyCastle::Ocsp::OcspUtilities::OcspUtilities()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<OcspUtilities>())) {}
 void ::Org::BouncyCastle::Ocsp::OcspUtilities::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Ocsp::OcspUtilities>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
