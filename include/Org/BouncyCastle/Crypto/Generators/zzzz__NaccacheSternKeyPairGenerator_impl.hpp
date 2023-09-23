#pragma once
#include "Org/BouncyCastle/Crypto/Generators/zzzz__NaccacheSternKeyPairGenerator_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__KeyGenerationParameters_def.hpp"
#include "Org/BouncyCastle/Security/zzzz__SecureRandom_def.hpp"
#include "Org/BouncyCastle/Math/zzzz__BigInteger_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__AsymmetricCipherKeyPair_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IAsymmetricCipherKeyPairGenerator_def.hpp"
#include "System/Collections/zzzz__IList_def.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__NaccacheSternKeyGenerationParameters_def.hpp"
//  Writing Method size for method: Org::BouncyCastle::Crypto::Generators::NaccacheSternKeyPairGenerator.Init
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Generators::NaccacheSternKeyPairGenerator::*)(Org::BouncyCastle::Crypto::KeyGenerationParameters)>(&Org::BouncyCastle::Crypto::Generators::NaccacheSternKeyPairGenerator::Init)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xe7392c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Generators::NaccacheSternKeyPairGenerator>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::KeyGenerationParameters>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Generators::NaccacheSternKeyPairGenerator.GenerateKeyPair
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair (Org::BouncyCastle::Crypto::Generators::NaccacheSternKeyPairGenerator::*)()>(&Org::BouncyCastle::Crypto::Generators::NaccacheSternKeyPairGenerator::GenerateKeyPair)> {
  constexpr static std::size_t size = 0xf74;
  constexpr static std::size_t addrs = 0xe739d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Generators::NaccacheSternKeyPairGenerator>::get(),
                            "GenerateKeyPair",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Generators::NaccacheSternKeyPairGenerator.generatePrime
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::BigInteger (*)(int32_t, int32_t, Org::BouncyCastle::Security::SecureRandom)>(&Org::BouncyCastle::Crypto::Generators::NaccacheSternKeyPairGenerator::generatePrime)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xe74f6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Generators::NaccacheSternKeyPairGenerator>::get(),
                            "generatePrime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Security::SecureRandom>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Generators::NaccacheSternKeyPairGenerator.permuteList
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IList (*)(System::Collections::IList, Org::BouncyCastle::Security::SecureRandom)>(&Org::BouncyCastle::Crypto::Generators::NaccacheSternKeyPairGenerator::permuteList)> {
  constexpr static std::size_t size = 0x4a4;
  constexpr static std::size_t addrs = 0xe74ac8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Generators::NaccacheSternKeyPairGenerator>::get(),
                            "permuteList",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::IList>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Security::SecureRandom>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Generators::NaccacheSternKeyPairGenerator.findFirstPrimes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IList (*)(int32_t)>(&Org::BouncyCastle::Crypto::Generators::NaccacheSternKeyPairGenerator::findFirstPrimes)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0xe74944;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Generators::NaccacheSternKeyPairGenerator>::get(),
                            "findFirstPrimes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Generators::NaccacheSternKeyPairGenerator._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Generators::NaccacheSternKeyPairGenerator::*)()>(&Org::BouncyCastle::Crypto::Generators::NaccacheSternKeyPairGenerator::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe7507c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Generators::NaccacheSternKeyPairGenerator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to Org::BouncyCastle::Crypto::IAsymmetricCipherKeyPairGenerator
constexpr  Org::BouncyCastle::Crypto::Generators::NaccacheSternKeyPairGenerator::operator Org::BouncyCastle::Crypto::IAsymmetricCipherKeyPairGenerator() const noexcept {
return Org::BouncyCastle::Crypto::IAsymmetricCipherKeyPairGenerator(::bs_hook::Il2CppWrapperType::instance);
}
 void Org::BouncyCastle::Crypto::Generators::NaccacheSternKeyPairGenerator::__set_smallPrimes(::ArrayW<int32_t> value)  {
::cordl_internals::setStaticField<::ArrayW<int32_t>, "smallPrimes", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Generators::NaccacheSternKeyPairGenerator>::get>(std::forward<::ArrayW<int32_t>>(value));
}
 ::ArrayW<int32_t> Org::BouncyCastle::Crypto::Generators::NaccacheSternKeyPairGenerator::__get_smallPrimes()  {
return ::cordl_internals::getStaticField<::ArrayW<int32_t>, "smallPrimes", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Generators::NaccacheSternKeyPairGenerator>::get>();
}
constexpr void Org::BouncyCastle::Crypto::Generators::NaccacheSternKeyPairGenerator::__set_param(Org::BouncyCastle::Crypto::Parameters::NaccacheSternKeyGenerationParameters value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Crypto::Parameters::NaccacheSternKeyGenerationParameters, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Crypto::Parameters::NaccacheSternKeyGenerationParameters>(value));
}
constexpr Org::BouncyCastle::Crypto::Parameters::NaccacheSternKeyGenerationParameters Org::BouncyCastle::Crypto::Generators::NaccacheSternKeyPairGenerator::__get_param() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Crypto::Parameters::NaccacheSternKeyGenerationParameters, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void Org::BouncyCastle::Crypto::Generators::NaccacheSternKeyPairGenerator::Init(Org::BouncyCastle::Crypto::KeyGenerationParameters parameters)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Generators::NaccacheSternKeyPairGenerator>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::KeyGenerationParameters>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, parameters);
}
 Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair Org::BouncyCastle::Crypto::Generators::NaccacheSternKeyPairGenerator::GenerateKeyPair()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Generators::NaccacheSternKeyPairGenerator>::get(),
                            "GenerateKeyPair",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair, false>(const_cast<void*>(instance), ___internal_method);
}
 Org::BouncyCastle::Math::BigInteger Org::BouncyCastle::Crypto::Generators::NaccacheSternKeyPairGenerator::generatePrime(int32_t bitLength, int32_t certainty, Org::BouncyCastle::Security::SecureRandom rand)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Generators::NaccacheSternKeyPairGenerator>::get(),
                            "generatePrime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Security::SecureRandom>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Math::BigInteger, false>(nullptr, ___internal_method, bitLength, certainty, rand);
}
 System::Collections::IList Org::BouncyCastle::Crypto::Generators::NaccacheSternKeyPairGenerator::permuteList(System::Collections::IList arr, Org::BouncyCastle::Security::SecureRandom rand)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Generators::NaccacheSternKeyPairGenerator>::get(),
                            "permuteList",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::IList>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Security::SecureRandom>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::IList, false>(nullptr, ___internal_method, arr, rand);
}
 System::Collections::IList Org::BouncyCastle::Crypto::Generators::NaccacheSternKeyPairGenerator::findFirstPrimes(int32_t count)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Generators::NaccacheSternKeyPairGenerator>::get(),
                            "findFirstPrimes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::IList, false>(nullptr, ___internal_method, count);
}
// Ctor Parameters []
 Org::BouncyCastle::Crypto::Generators::NaccacheSternKeyPairGenerator::NaccacheSternKeyPairGenerator()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<NaccacheSternKeyPairGenerator>())) {}
 void Org::BouncyCastle::Crypto::Generators::NaccacheSternKeyPairGenerator::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Generators::NaccacheSternKeyPairGenerator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
