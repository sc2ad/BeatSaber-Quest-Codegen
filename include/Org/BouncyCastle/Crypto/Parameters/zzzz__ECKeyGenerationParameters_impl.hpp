#pragma once
#include "Org/BouncyCastle/Crypto/zzzz__KeyGenerationParameters_impl.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__ECKeyGenerationParameters_def.hpp"
#include "Org/BouncyCastle/Security/zzzz__SecureRandom_def.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__ECDomainParameters_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerObjectIdentifier_def.hpp"
//  Writing Method size for method: Org::BouncyCastle::Crypto::Parameters::ECKeyGenerationParameters._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Parameters::ECKeyGenerationParameters::*)(Org::BouncyCastle::Crypto::Parameters::ECDomainParameters, Org::BouncyCastle::Security::SecureRandom)>(&Org::BouncyCastle::Crypto::Parameters::ECKeyGenerationParameters::_ctor)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xea5ea8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Parameters::ECKeyGenerationParameters>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::Parameters::ECDomainParameters>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Security::SecureRandom>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Parameters::ECKeyGenerationParameters._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Parameters::ECKeyGenerationParameters::*)(Org::BouncyCastle::Asn1::DerObjectIdentifier, Org::BouncyCastle::Security::SecureRandom)>(&Org::BouncyCastle::Crypto::Parameters::ECKeyGenerationParameters::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xea5ef4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Parameters::ECKeyGenerationParameters>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::DerObjectIdentifier>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Security::SecureRandom>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Parameters::ECKeyGenerationParameters.get_DomainParameters
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Crypto::Parameters::ECDomainParameters (Org::BouncyCastle::Crypto::Parameters::ECKeyGenerationParameters::*)()>(&Org::BouncyCastle::Crypto::Parameters::ECKeyGenerationParameters::get_DomainParameters)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xea6080;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Parameters::ECKeyGenerationParameters>::get(),
                            "get_DomainParameters",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Parameters::ECKeyGenerationParameters.get_PublicKeyParamSet
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::DerObjectIdentifier (Org::BouncyCastle::Crypto::Parameters::ECKeyGenerationParameters::*)()>(&Org::BouncyCastle::Crypto::Parameters::ECKeyGenerationParameters::get_PublicKeyParamSet)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xea6088;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Parameters::ECKeyGenerationParameters>::get(),
                            "get_PublicKeyParamSet",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void Org::BouncyCastle::Crypto::Parameters::ECKeyGenerationParameters::__set_domainParams(Org::BouncyCastle::Crypto::Parameters::ECDomainParameters value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Crypto::Parameters::ECDomainParameters, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Crypto::Parameters::ECDomainParameters>(value));
}
constexpr Org::BouncyCastle::Crypto::Parameters::ECDomainParameters Org::BouncyCastle::Crypto::Parameters::ECKeyGenerationParameters::__get_domainParams() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Crypto::Parameters::ECDomainParameters, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Crypto::Parameters::ECKeyGenerationParameters::__set_publicKeyParamSet(Org::BouncyCastle::Asn1::DerObjectIdentifier value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Asn1::DerObjectIdentifier, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Asn1::DerObjectIdentifier>(value));
}
constexpr Org::BouncyCastle::Asn1::DerObjectIdentifier Org::BouncyCastle::Crypto::Parameters::ECKeyGenerationParameters::__get_publicKeyParamSet() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Asn1::DerObjectIdentifier, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
 Org::BouncyCastle::Crypto::Parameters::ECKeyGenerationParameters Org::BouncyCastle::Crypto::Parameters::ECKeyGenerationParameters::New_ctor(Org::BouncyCastle::Crypto::Parameters::ECDomainParameters domainParameters, Org::BouncyCastle::Security::SecureRandom random)  {
Org::BouncyCastle::Crypto::Parameters::ECKeyGenerationParameters o{THROW_UNLESS(::il2cpp_utils::New<Org::BouncyCastle::Crypto::Parameters::ECKeyGenerationParameters>(domainParameters, random))};
return o;
}
 void Org::BouncyCastle::Crypto::Parameters::ECKeyGenerationParameters::_ctor(Org::BouncyCastle::Crypto::Parameters::ECDomainParameters domainParameters, Org::BouncyCastle::Security::SecureRandom random)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Parameters::ECKeyGenerationParameters>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::Parameters::ECDomainParameters>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Security::SecureRandom>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, domainParameters, random);
}
 Org::BouncyCastle::Crypto::Parameters::ECKeyGenerationParameters Org::BouncyCastle::Crypto::Parameters::ECKeyGenerationParameters::New_ctor(Org::BouncyCastle::Asn1::DerObjectIdentifier publicKeyParamSet, Org::BouncyCastle::Security::SecureRandom random)  {
Org::BouncyCastle::Crypto::Parameters::ECKeyGenerationParameters o{THROW_UNLESS(::il2cpp_utils::New<Org::BouncyCastle::Crypto::Parameters::ECKeyGenerationParameters>(publicKeyParamSet, random))};
return o;
}
 void Org::BouncyCastle::Crypto::Parameters::ECKeyGenerationParameters::_ctor(Org::BouncyCastle::Asn1::DerObjectIdentifier publicKeyParamSet, Org::BouncyCastle::Security::SecureRandom random)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Parameters::ECKeyGenerationParameters>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::DerObjectIdentifier>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Security::SecureRandom>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, publicKeyParamSet, random);
}
 Org::BouncyCastle::Crypto::Parameters::ECDomainParameters Org::BouncyCastle::Crypto::Parameters::ECKeyGenerationParameters::get_DomainParameters()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Parameters::ECKeyGenerationParameters>::get(),
                            "get_DomainParameters",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Crypto::Parameters::ECDomainParameters, false>(const_cast<void*>(instance), ___internal_method);
}
 Org::BouncyCastle::Asn1::DerObjectIdentifier Org::BouncyCastle::Crypto::Parameters::ECKeyGenerationParameters::get_PublicKeyParamSet()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Parameters::ECKeyGenerationParameters>::get(),
                            "get_PublicKeyParamSet",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Asn1::DerObjectIdentifier, false>(const_cast<void*>(instance), ___internal_method);
}
