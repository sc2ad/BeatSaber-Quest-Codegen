#pragma once
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__RsaBlindingParameters_def.hpp"
#include "Org/BouncyCastle/Math/zzzz__BigInteger_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ICipherParameters_def.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__RsaKeyParameters_def.hpp"
//  Writing Method size for method: Org::BouncyCastle::Crypto::Parameters::RsaBlindingParameters._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Parameters::RsaBlindingParameters::*)(Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters, Org::BouncyCastle::Math::BigInteger)>(&Org::BouncyCastle::Crypto::Parameters::RsaBlindingParameters::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xeab3c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Parameters::RsaBlindingParameters>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::BigInteger>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Parameters::RsaBlindingParameters.get_PublicKey
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters (Org::BouncyCastle::Crypto::Parameters::RsaBlindingParameters::*)()>(&Org::BouncyCastle::Crypto::Parameters::RsaBlindingParameters::get_PublicKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xeab450;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Parameters::RsaBlindingParameters>::get(),
                            "get_PublicKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Parameters::RsaBlindingParameters.get_BlindingFactor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::BigInteger (Org::BouncyCastle::Crypto::Parameters::RsaBlindingParameters::*)()>(&Org::BouncyCastle::Crypto::Parameters::RsaBlindingParameters::get_BlindingFactor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xeab458;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Parameters::RsaBlindingParameters>::get(),
                            "get_BlindingFactor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to Org::BouncyCastle::Crypto::ICipherParameters
constexpr  Org::BouncyCastle::Crypto::Parameters::RsaBlindingParameters::operator Org::BouncyCastle::Crypto::ICipherParameters() const noexcept {
return Org::BouncyCastle::Crypto::ICipherParameters(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Crypto::Parameters::RsaBlindingParameters::__set_publicKey(Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters>(value));
}
constexpr Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters Org::BouncyCastle::Crypto::Parameters::RsaBlindingParameters::__get_publicKey() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Crypto::Parameters::RsaBlindingParameters::__set_blindingFactor(Org::BouncyCastle::Math::BigInteger value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Math::BigInteger, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Math::BigInteger>(value));
}
constexpr Org::BouncyCastle::Math::BigInteger Org::BouncyCastle::Crypto::Parameters::RsaBlindingParameters::__get_blindingFactor() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Math::BigInteger, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "publicKey", ty: "Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters", modifiers: "", def_value: None }, CppParam { name: "blindingFactor", ty: "Org::BouncyCastle::Math::BigInteger", modifiers: "", def_value: None }]
 Org::BouncyCastle::Crypto::Parameters::RsaBlindingParameters::RsaBlindingParameters(Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters publicKey, Org::BouncyCastle::Math::BigInteger blindingFactor)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<RsaBlindingParameters>(publicKey, blindingFactor))) {}
 void Org::BouncyCastle::Crypto::Parameters::RsaBlindingParameters::_ctor(Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters publicKey, Org::BouncyCastle::Math::BigInteger blindingFactor)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Parameters::RsaBlindingParameters>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::BigInteger>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, publicKey, blindingFactor);
}
 Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters Org::BouncyCastle::Crypto::Parameters::RsaBlindingParameters::get_PublicKey()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Parameters::RsaBlindingParameters>::get(),
                            "get_PublicKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters, false>(const_cast<void*>(instance), ___internal_method);
}
 Org::BouncyCastle::Math::BigInteger Org::BouncyCastle::Crypto::Parameters::RsaBlindingParameters::get_BlindingFactor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Parameters::RsaBlindingParameters>::get(),
                            "get_BlindingFactor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Math::BigInteger, false>(const_cast<void*>(instance), ___internal_method);
}
