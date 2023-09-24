#pragma once
#include "Org/BouncyCastle/Cms/zzzz__DefaultSignatureAlgorithmIdentifierFinder_def.hpp"
#include "Org/BouncyCastle/Asn1/Pkcs/zzzz__RsassaPssParameters_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerObjectIdentifier_def.hpp"
#include "System/Collections/zzzz__IDictionary_def.hpp"
#include "Org/BouncyCastle/Utilities/Collections/zzzz__ISet_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__AlgorithmIdentifier_def.hpp"
//  Writing Method size for method: Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder.Generate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier (*)(::StringW)>(&Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder::Generate)> {
  constexpr static std::size_t size = 0x6c0;
  constexpr static std::size_t addrs = 0x116fc7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder>::get(),
                            "Generate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder.CreatePssParams
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::Pkcs::RsassaPssParameters (*)(Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier, int32_t)>(&Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder::CreatePssParams)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x116fb50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder>::get(),
                            "CreatePssParams",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder.Find
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier (Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder::*)(::StringW)>(&Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder::Find)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x117033c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder>::get(),
                            "Find",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder::*)()>(&Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1170390;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 void Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder::__set_algorithms(System::Collections::IDictionary value)  {
::cordl_internals::setStaticField<System::Collections::IDictionary, "algorithms", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder>::get>(std::forward<System::Collections::IDictionary>(value));
}
 System::Collections::IDictionary Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder::__get_algorithms()  {
return ::cordl_internals::getStaticField<System::Collections::IDictionary, "algorithms", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder>::get>();
}
 void Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder::__set_noParams(Org::BouncyCastle::Utilities::Collections::ISet value)  {
::cordl_internals::setStaticField<Org::BouncyCastle::Utilities::Collections::ISet, "noParams", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder>::get>(std::forward<Org::BouncyCastle::Utilities::Collections::ISet>(value));
}
 Org::BouncyCastle::Utilities::Collections::ISet Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder::__get_noParams()  {
return ::cordl_internals::getStaticField<Org::BouncyCastle::Utilities::Collections::ISet, "noParams", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder>::get>();
}
 void Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder::__set__params(System::Collections::IDictionary value)  {
::cordl_internals::setStaticField<System::Collections::IDictionary, "_params", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder>::get>(std::forward<System::Collections::IDictionary>(value));
}
 System::Collections::IDictionary Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder::__get__params()  {
return ::cordl_internals::getStaticField<System::Collections::IDictionary, "_params", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder>::get>();
}
 void Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder::__set_pkcs15RsaEncryption(Org::BouncyCastle::Utilities::Collections::ISet value)  {
::cordl_internals::setStaticField<Org::BouncyCastle::Utilities::Collections::ISet, "pkcs15RsaEncryption", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder>::get>(std::forward<Org::BouncyCastle::Utilities::Collections::ISet>(value));
}
 Org::BouncyCastle::Utilities::Collections::ISet Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder::__get_pkcs15RsaEncryption()  {
return ::cordl_internals::getStaticField<Org::BouncyCastle::Utilities::Collections::ISet, "pkcs15RsaEncryption", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder>::get>();
}
 void Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder::__set_digestOids(System::Collections::IDictionary value)  {
::cordl_internals::setStaticField<System::Collections::IDictionary, "digestOids", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder>::get>(std::forward<System::Collections::IDictionary>(value));
}
 System::Collections::IDictionary Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder::__get_digestOids()  {
return ::cordl_internals::getStaticField<System::Collections::IDictionary, "digestOids", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder>::get>();
}
 void Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder::__set_digestBuilders(System::Collections::IDictionary value)  {
::cordl_internals::setStaticField<System::Collections::IDictionary, "digestBuilders", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder>::get>(std::forward<System::Collections::IDictionary>(value));
}
 System::Collections::IDictionary Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder::__get_digestBuilders()  {
return ::cordl_internals::getStaticField<System::Collections::IDictionary, "digestBuilders", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder>::get>();
}
 void Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder::__set_ENCRYPTION_RSA(Org::BouncyCastle::Asn1::DerObjectIdentifier value)  {
::cordl_internals::setStaticField<Org::BouncyCastle::Asn1::DerObjectIdentifier, "ENCRYPTION_RSA", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder>::get>(std::forward<Org::BouncyCastle::Asn1::DerObjectIdentifier>(value));
}
 Org::BouncyCastle::Asn1::DerObjectIdentifier Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder::__get_ENCRYPTION_RSA()  {
return ::cordl_internals::getStaticField<Org::BouncyCastle::Asn1::DerObjectIdentifier, "ENCRYPTION_RSA", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder>::get>();
}
 void Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder::__set_ENCRYPTION_DSA(Org::BouncyCastle::Asn1::DerObjectIdentifier value)  {
::cordl_internals::setStaticField<Org::BouncyCastle::Asn1::DerObjectIdentifier, "ENCRYPTION_DSA", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder>::get>(std::forward<Org::BouncyCastle::Asn1::DerObjectIdentifier>(value));
}
 Org::BouncyCastle::Asn1::DerObjectIdentifier Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder::__get_ENCRYPTION_DSA()  {
return ::cordl_internals::getStaticField<Org::BouncyCastle::Asn1::DerObjectIdentifier, "ENCRYPTION_DSA", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder>::get>();
}
 void Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder::__set_ENCRYPTION_ECDSA(Org::BouncyCastle::Asn1::DerObjectIdentifier value)  {
::cordl_internals::setStaticField<Org::BouncyCastle::Asn1::DerObjectIdentifier, "ENCRYPTION_ECDSA", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder>::get>(std::forward<Org::BouncyCastle::Asn1::DerObjectIdentifier>(value));
}
 Org::BouncyCastle::Asn1::DerObjectIdentifier Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder::__get_ENCRYPTION_ECDSA()  {
return ::cordl_internals::getStaticField<Org::BouncyCastle::Asn1::DerObjectIdentifier, "ENCRYPTION_ECDSA", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder>::get>();
}
 void Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder::__set_ENCRYPTION_RSA_PSS(Org::BouncyCastle::Asn1::DerObjectIdentifier value)  {
::cordl_internals::setStaticField<Org::BouncyCastle::Asn1::DerObjectIdentifier, "ENCRYPTION_RSA_PSS", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder>::get>(std::forward<Org::BouncyCastle::Asn1::DerObjectIdentifier>(value));
}
 Org::BouncyCastle::Asn1::DerObjectIdentifier Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder::__get_ENCRYPTION_RSA_PSS()  {
return ::cordl_internals::getStaticField<Org::BouncyCastle::Asn1::DerObjectIdentifier, "ENCRYPTION_RSA_PSS", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder>::get>();
}
 void Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder::__set_ENCRYPTION_GOST3410(Org::BouncyCastle::Asn1::DerObjectIdentifier value)  {
::cordl_internals::setStaticField<Org::BouncyCastle::Asn1::DerObjectIdentifier, "ENCRYPTION_GOST3410", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder>::get>(std::forward<Org::BouncyCastle::Asn1::DerObjectIdentifier>(value));
}
 Org::BouncyCastle::Asn1::DerObjectIdentifier Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder::__get_ENCRYPTION_GOST3410()  {
return ::cordl_internals::getStaticField<Org::BouncyCastle::Asn1::DerObjectIdentifier, "ENCRYPTION_GOST3410", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder>::get>();
}
 void Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder::__set_ENCRYPTION_ECGOST3410(Org::BouncyCastle::Asn1::DerObjectIdentifier value)  {
::cordl_internals::setStaticField<Org::BouncyCastle::Asn1::DerObjectIdentifier, "ENCRYPTION_ECGOST3410", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder>::get>(std::forward<Org::BouncyCastle::Asn1::DerObjectIdentifier>(value));
}
 Org::BouncyCastle::Asn1::DerObjectIdentifier Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder::__get_ENCRYPTION_ECGOST3410()  {
return ::cordl_internals::getStaticField<Org::BouncyCastle::Asn1::DerObjectIdentifier, "ENCRYPTION_ECGOST3410", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder>::get>();
}
 void Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder::__set_ENCRYPTION_ECGOST3410_2012_256(Org::BouncyCastle::Asn1::DerObjectIdentifier value)  {
::cordl_internals::setStaticField<Org::BouncyCastle::Asn1::DerObjectIdentifier, "ENCRYPTION_ECGOST3410_2012_256", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder>::get>(std::forward<Org::BouncyCastle::Asn1::DerObjectIdentifier>(value));
}
 Org::BouncyCastle::Asn1::DerObjectIdentifier Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder::__get_ENCRYPTION_ECGOST3410_2012_256()  {
return ::cordl_internals::getStaticField<Org::BouncyCastle::Asn1::DerObjectIdentifier, "ENCRYPTION_ECGOST3410_2012_256", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder>::get>();
}
 void Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder::__set_ENCRYPTION_ECGOST3410_2012_512(Org::BouncyCastle::Asn1::DerObjectIdentifier value)  {
::cordl_internals::setStaticField<Org::BouncyCastle::Asn1::DerObjectIdentifier, "ENCRYPTION_ECGOST3410_2012_512", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder>::get>(std::forward<Org::BouncyCastle::Asn1::DerObjectIdentifier>(value));
}
 Org::BouncyCastle::Asn1::DerObjectIdentifier Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder::__get_ENCRYPTION_ECGOST3410_2012_512()  {
return ::cordl_internals::getStaticField<Org::BouncyCastle::Asn1::DerObjectIdentifier, "ENCRYPTION_ECGOST3410_2012_512", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder>::get>();
}
 Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder::Generate(::StringW signatureAlgorithm)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder>::get(),
                            "Generate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier, false>(nullptr, ___internal_method, signatureAlgorithm);
}
 Org::BouncyCastle::Asn1::Pkcs::RsassaPssParameters Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder::CreatePssParams(Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier hashAlgId, int32_t saltSize)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder>::get(),
                            "CreatePssParams",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Asn1::Pkcs::RsassaPssParameters, false>(nullptr, ___internal_method, hashAlgId, saltSize);
}
 Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder::Find(::StringW sigAlgName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder>::get(),
                            "Find",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier, false>(const_cast<void*>(instance), ___internal_method, sigAlgName);
}
 Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder::New_ctor()  {
Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder o{THROW_UNLESS(::il2cpp_utils::New<Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder>())};
return o;
}
 void Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
