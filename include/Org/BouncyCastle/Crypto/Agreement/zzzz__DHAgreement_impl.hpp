#pragma once
#include "Org/BouncyCastle/Crypto/Agreement/zzzz__DHAgreement_def.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__DHParameters_def.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__DHPrivateKeyParameters_def.hpp"
#include "Org/BouncyCastle/Security/zzzz__SecureRandom_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ICipherParameters_def.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__DHPublicKeyParameters_def.hpp"
#include "Org/BouncyCastle/Math/zzzz__BigInteger_def.hpp"
//  Writing Method size for method: Org::BouncyCastle::Crypto::Agreement::DHAgreement.Init
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Agreement::DHAgreement::*)(Org::BouncyCastle::Crypto::ICipherParameters)>(&Org::BouncyCastle::Crypto::Agreement::DHAgreement::Init)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x118e1ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Agreement::DHAgreement>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::ICipherParameters>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Agreement::DHAgreement.CalculateMessage
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::BigInteger (Org::BouncyCastle::Crypto::Agreement::DHAgreement::*)()>(&Org::BouncyCastle::Crypto::Agreement::DHAgreement::CalculateMessage)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x118e364;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Agreement::DHAgreement>::get(),
                            "CalculateMessage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Agreement::DHAgreement.CalculateAgreement
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::BigInteger (Org::BouncyCastle::Crypto::Agreement::DHAgreement::*)(Org::BouncyCastle::Crypto::Parameters::DHPublicKeyParameters, Org::BouncyCastle::Math::BigInteger)>(&Org::BouncyCastle::Crypto::Agreement::DHAgreement::CalculateAgreement)> {
  constexpr static std::size_t size = 0x298;
  constexpr static std::size_t addrs = 0x118e4f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Agreement::DHAgreement>::get(),
                            "CalculateAgreement",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::Parameters::DHPublicKeyParameters>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::BigInteger>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Agreement::DHAgreement._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Agreement::DHAgreement::*)()>(&Org::BouncyCastle::Crypto::Agreement::DHAgreement::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x118e790;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Agreement::DHAgreement>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void Org::BouncyCastle::Crypto::Agreement::DHAgreement::__set_key(Org::BouncyCastle::Crypto::Parameters::DHPrivateKeyParameters value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Crypto::Parameters::DHPrivateKeyParameters, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Crypto::Parameters::DHPrivateKeyParameters>(value));
}
constexpr Org::BouncyCastle::Crypto::Parameters::DHPrivateKeyParameters Org::BouncyCastle::Crypto::Agreement::DHAgreement::__get_key() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Crypto::Parameters::DHPrivateKeyParameters, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Crypto::Agreement::DHAgreement::__set_dhParams(Org::BouncyCastle::Crypto::Parameters::DHParameters value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Crypto::Parameters::DHParameters, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Crypto::Parameters::DHParameters>(value));
}
constexpr Org::BouncyCastle::Crypto::Parameters::DHParameters Org::BouncyCastle::Crypto::Agreement::DHAgreement::__get_dhParams() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Crypto::Parameters::DHParameters, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Crypto::Agreement::DHAgreement::__set_privateValue(Org::BouncyCastle::Math::BigInteger value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Math::BigInteger, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Math::BigInteger>(value));
}
constexpr Org::BouncyCastle::Math::BigInteger Org::BouncyCastle::Crypto::Agreement::DHAgreement::__get_privateValue() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Math::BigInteger, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Crypto::Agreement::DHAgreement::__set_random(Org::BouncyCastle::Security::SecureRandom value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Security::SecureRandom, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Security::SecureRandom>(value));
}
constexpr Org::BouncyCastle::Security::SecureRandom Org::BouncyCastle::Crypto::Agreement::DHAgreement::__get_random() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Security::SecureRandom, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void Org::BouncyCastle::Crypto::Agreement::DHAgreement::Init(Org::BouncyCastle::Crypto::ICipherParameters parameters)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Agreement::DHAgreement>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::ICipherParameters>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, parameters);
}
 Org::BouncyCastle::Math::BigInteger Org::BouncyCastle::Crypto::Agreement::DHAgreement::CalculateMessage()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Agreement::DHAgreement>::get(),
                            "CalculateMessage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Math::BigInteger, false>(const_cast<void*>(instance), ___internal_method);
}
 Org::BouncyCastle::Math::BigInteger Org::BouncyCastle::Crypto::Agreement::DHAgreement::CalculateAgreement(Org::BouncyCastle::Crypto::Parameters::DHPublicKeyParameters pub, Org::BouncyCastle::Math::BigInteger message)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Agreement::DHAgreement>::get(),
                            "CalculateAgreement",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::Parameters::DHPublicKeyParameters>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::BigInteger>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Math::BigInteger, false>(const_cast<void*>(instance), ___internal_method, pub, message);
}
// Ctor Parameters []
 Org::BouncyCastle::Crypto::Agreement::DHAgreement::DHAgreement()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<DHAgreement>())) {}
 void Org::BouncyCastle::Crypto::Agreement::DHAgreement::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Agreement::DHAgreement>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
