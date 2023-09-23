#pragma once
#include "Org/BouncyCastle/Crypto/zzzz__KeyGenerationParameters_impl.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__RsaKeyGenerationParameters_def.hpp"
#include "Org/BouncyCastle/Math/zzzz__BigInteger_def.hpp"
#include "Org/BouncyCastle/Security/zzzz__SecureRandom_def.hpp"
//  Writing Method size for method: Org::BouncyCastle::Crypto::Parameters::RsaKeyGenerationParameters._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Parameters::RsaKeyGenerationParameters::*)(Org::BouncyCastle::Math::BigInteger, Org::BouncyCastle::Security::SecureRandom, int32_t, int32_t)>(&Org::BouncyCastle::Crypto::Parameters::RsaKeyGenerationParameters::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xeab460;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Parameters::RsaKeyGenerationParameters>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::BigInteger>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Security::SecureRandom>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Parameters::RsaKeyGenerationParameters.get_PublicExponent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::BigInteger (Org::BouncyCastle::Crypto::Parameters::RsaKeyGenerationParameters::*)()>(&Org::BouncyCastle::Crypto::Parameters::RsaKeyGenerationParameters::get_PublicExponent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xeab498;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Parameters::RsaKeyGenerationParameters>::get(),
                            "get_PublicExponent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Parameters::RsaKeyGenerationParameters.get_Certainty
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (Org::BouncyCastle::Crypto::Parameters::RsaKeyGenerationParameters::*)()>(&Org::BouncyCastle::Crypto::Parameters::RsaKeyGenerationParameters::get_Certainty)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xeab4a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Parameters::RsaKeyGenerationParameters>::get(),
                            "get_Certainty",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Parameters::RsaKeyGenerationParameters.Equals
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Org::BouncyCastle::Crypto::Parameters::RsaKeyGenerationParameters::*)(::bs_hook::Il2CppWrapperType)>(&Org::BouncyCastle::Crypto::Parameters::RsaKeyGenerationParameters::Equals)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xeab4a8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::Parameters::RsaKeyGenerationParameters),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Parameters::RsaKeyGenerationParameters>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Parameters::RsaKeyGenerationParameters.GetHashCode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (Org::BouncyCastle::Crypto::Parameters::RsaKeyGenerationParameters::*)()>(&Org::BouncyCastle::Crypto::Parameters::RsaKeyGenerationParameters::GetHashCode)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xeab55c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::Parameters::RsaKeyGenerationParameters),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Parameters::RsaKeyGenerationParameters>::get(),
                                  2
                                ));
    return ___internal_method;
  }
};
constexpr void Org::BouncyCastle::Crypto::Parameters::RsaKeyGenerationParameters::__set_publicExponent(Org::BouncyCastle::Math::BigInteger value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Math::BigInteger, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Math::BigInteger>(value));
}
constexpr Org::BouncyCastle::Math::BigInteger Org::BouncyCastle::Crypto::Parameters::RsaKeyGenerationParameters::__get_publicExponent() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Math::BigInteger, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Crypto::Parameters::RsaKeyGenerationParameters::__set_certainty(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t Org::BouncyCastle::Crypto::Parameters::RsaKeyGenerationParameters::__get_certainty() const {
return ::cordl_internals::getInstanceField<int32_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "publicExponent", ty: "Org::BouncyCastle::Math::BigInteger", modifiers: "", def_value: None }, CppParam { name: "random", ty: "Org::BouncyCastle::Security::SecureRandom", modifiers: "", def_value: None }, CppParam { name: "strength", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "certainty", ty: "int32_t", modifiers: "", def_value: None }]
 Org::BouncyCastle::Crypto::Parameters::RsaKeyGenerationParameters::RsaKeyGenerationParameters(Org::BouncyCastle::Math::BigInteger publicExponent, Org::BouncyCastle::Security::SecureRandom random, int32_t strength, int32_t certainty)  : Org::BouncyCastle::Crypto::KeyGenerationParameters(THROW_UNLESS(::il2cpp_utils::New<RsaKeyGenerationParameters>(publicExponent, random, strength, certainty))) {}
 void Org::BouncyCastle::Crypto::Parameters::RsaKeyGenerationParameters::_ctor(Org::BouncyCastle::Math::BigInteger publicExponent, Org::BouncyCastle::Security::SecureRandom random, int32_t strength, int32_t certainty)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Parameters::RsaKeyGenerationParameters>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::BigInteger>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Security::SecureRandom>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, publicExponent, random, strength, certainty);
}
 Org::BouncyCastle::Math::BigInteger Org::BouncyCastle::Crypto::Parameters::RsaKeyGenerationParameters::get_PublicExponent()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Parameters::RsaKeyGenerationParameters>::get(),
                            "get_PublicExponent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Math::BigInteger, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t Org::BouncyCastle::Crypto::Parameters::RsaKeyGenerationParameters::get_Certainty()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Parameters::RsaKeyGenerationParameters>::get(),
                            "get_Certainty",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 bool Org::BouncyCastle::Crypto::Parameters::RsaKeyGenerationParameters::Equals(::bs_hook::Il2CppWrapperType obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Parameters::RsaKeyGenerationParameters>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, obj);
}
 int32_t Org::BouncyCastle::Crypto::Parameters::RsaKeyGenerationParameters::GetHashCode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Parameters::RsaKeyGenerationParameters>::get(),
                            "GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
