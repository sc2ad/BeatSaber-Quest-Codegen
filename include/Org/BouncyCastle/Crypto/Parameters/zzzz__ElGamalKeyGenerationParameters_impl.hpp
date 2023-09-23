#pragma once
#include "Org/BouncyCastle/Crypto/zzzz__KeyGenerationParameters_impl.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__ElGamalKeyGenerationParameters_def.hpp"
#include "Org/BouncyCastle/Security/zzzz__SecureRandom_def.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__ElGamalParameters_def.hpp"
//  Writing Method size for method: Org::BouncyCastle::Crypto::Parameters::ElGamalKeyGenerationParameters._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Parameters::ElGamalKeyGenerationParameters::*)(Org::BouncyCastle::Security::SecureRandom, Org::BouncyCastle::Crypto::Parameters::ElGamalParameters)>(&Org::BouncyCastle::Crypto::Parameters::ElGamalKeyGenerationParameters::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xea8498;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Parameters::ElGamalKeyGenerationParameters>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Security::SecureRandom>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::Parameters::ElGamalParameters>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Parameters::ElGamalKeyGenerationParameters.get_Parameters
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Crypto::Parameters::ElGamalParameters (Org::BouncyCastle::Crypto::Parameters::ElGamalKeyGenerationParameters::*)()>(&Org::BouncyCastle::Crypto::Parameters::ElGamalKeyGenerationParameters::get_Parameters)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xea8508;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Parameters::ElGamalKeyGenerationParameters>::get(),
                            "get_Parameters",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Parameters::ElGamalKeyGenerationParameters.GetStrength
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(Org::BouncyCastle::Crypto::Parameters::ElGamalParameters)>(&Org::BouncyCastle::Crypto::Parameters::ElGamalKeyGenerationParameters::GetStrength)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xea84d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Parameters::ElGamalKeyGenerationParameters>::get(),
                            "GetStrength",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::Parameters::ElGamalParameters>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void Org::BouncyCastle::Crypto::Parameters::ElGamalKeyGenerationParameters::__set_parameters(Org::BouncyCastle::Crypto::Parameters::ElGamalParameters value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Crypto::Parameters::ElGamalParameters, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Crypto::Parameters::ElGamalParameters>(value));
}
constexpr Org::BouncyCastle::Crypto::Parameters::ElGamalParameters Org::BouncyCastle::Crypto::Parameters::ElGamalKeyGenerationParameters::__get_parameters() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Crypto::Parameters::ElGamalParameters, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "random", ty: "Org::BouncyCastle::Security::SecureRandom", modifiers: "", def_value: None }, CppParam { name: "parameters", ty: "Org::BouncyCastle::Crypto::Parameters::ElGamalParameters", modifiers: "", def_value: None }]
 Org::BouncyCastle::Crypto::Parameters::ElGamalKeyGenerationParameters::ElGamalKeyGenerationParameters(Org::BouncyCastle::Security::SecureRandom random, Org::BouncyCastle::Crypto::Parameters::ElGamalParameters parameters)  : Org::BouncyCastle::Crypto::KeyGenerationParameters(THROW_UNLESS(::il2cpp_utils::New<ElGamalKeyGenerationParameters>(random, parameters))) {}
 void Org::BouncyCastle::Crypto::Parameters::ElGamalKeyGenerationParameters::_ctor(Org::BouncyCastle::Security::SecureRandom random, Org::BouncyCastle::Crypto::Parameters::ElGamalParameters parameters)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Parameters::ElGamalKeyGenerationParameters>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Security::SecureRandom>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::Parameters::ElGamalParameters>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, random, parameters);
}
 Org::BouncyCastle::Crypto::Parameters::ElGamalParameters Org::BouncyCastle::Crypto::Parameters::ElGamalKeyGenerationParameters::get_Parameters()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Parameters::ElGamalKeyGenerationParameters>::get(),
                            "get_Parameters",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Crypto::Parameters::ElGamalParameters, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t Org::BouncyCastle::Crypto::Parameters::ElGamalKeyGenerationParameters::GetStrength(Org::BouncyCastle::Crypto::Parameters::ElGamalParameters parameters)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Parameters::ElGamalKeyGenerationParameters>::get(),
                            "GetStrength",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::Parameters::ElGamalParameters>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, parameters);
}
