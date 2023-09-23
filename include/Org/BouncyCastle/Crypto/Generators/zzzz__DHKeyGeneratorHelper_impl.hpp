#pragma once
#include "Org/BouncyCastle/Crypto/Generators/zzzz__DHKeyGeneratorHelper_def.hpp"
#include "Org/BouncyCastle/Security/zzzz__SecureRandom_def.hpp"
#include "Org/BouncyCastle/Math/zzzz__BigInteger_def.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__DHParameters_def.hpp"
//  Writing Method size for method: Org::BouncyCastle::Crypto::Generators::DHKeyGeneratorHelper._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Generators::DHKeyGeneratorHelper::*)()>(&Org::BouncyCastle::Crypto::Generators::DHKeyGeneratorHelper::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe6b500;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Generators::DHKeyGeneratorHelper>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Generators::DHKeyGeneratorHelper.CalculatePrivate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::BigInteger (Org::BouncyCastle::Crypto::Generators::DHKeyGeneratorHelper::*)(Org::BouncyCastle::Crypto::Parameters::DHParameters, Org::BouncyCastle::Security::SecureRandom)>(&Org::BouncyCastle::Crypto::Generators::DHKeyGeneratorHelper::CalculatePrivate)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0xe6b308;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Generators::DHKeyGeneratorHelper>::get(),
                            "CalculatePrivate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::Parameters::DHParameters>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Security::SecureRandom>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Generators::DHKeyGeneratorHelper.CalculatePublic
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::BigInteger (Org::BouncyCastle::Crypto::Generators::DHKeyGeneratorHelper::*)(Org::BouncyCastle::Crypto::Parameters::DHParameters, Org::BouncyCastle::Math::BigInteger)>(&Org::BouncyCastle::Crypto::Generators::DHKeyGeneratorHelper::CalculatePublic)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xe6b4cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Generators::DHKeyGeneratorHelper>::get(),
                            "CalculatePublic",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::Parameters::DHParameters>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::BigInteger>::get()}
                        )));
    return ___internal_method;
  }
};
 void Org::BouncyCastle::Crypto::Generators::DHKeyGeneratorHelper::__set_Instance(Org::BouncyCastle::Crypto::Generators::DHKeyGeneratorHelper value)  {
::cordl_internals::setStaticField<Org::BouncyCastle::Crypto::Generators::DHKeyGeneratorHelper, "Instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Generators::DHKeyGeneratorHelper>::get>(std::forward<Org::BouncyCastle::Crypto::Generators::DHKeyGeneratorHelper>(value));
}
 Org::BouncyCastle::Crypto::Generators::DHKeyGeneratorHelper Org::BouncyCastle::Crypto::Generators::DHKeyGeneratorHelper::__get_Instance()  {
return ::cordl_internals::getStaticField<Org::BouncyCastle::Crypto::Generators::DHKeyGeneratorHelper, "Instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Generators::DHKeyGeneratorHelper>::get>();
}
// Ctor Parameters []
 Org::BouncyCastle::Crypto::Generators::DHKeyGeneratorHelper::DHKeyGeneratorHelper()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<DHKeyGeneratorHelper>())) {}
 void Org::BouncyCastle::Crypto::Generators::DHKeyGeneratorHelper::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Generators::DHKeyGeneratorHelper>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 Org::BouncyCastle::Math::BigInteger Org::BouncyCastle::Crypto::Generators::DHKeyGeneratorHelper::CalculatePrivate(Org::BouncyCastle::Crypto::Parameters::DHParameters dhParams, Org::BouncyCastle::Security::SecureRandom random)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Generators::DHKeyGeneratorHelper>::get(),
                            "CalculatePrivate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::Parameters::DHParameters>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Security::SecureRandom>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Math::BigInteger, false>(const_cast<void*>(instance), ___internal_method, dhParams, random);
}
 Org::BouncyCastle::Math::BigInteger Org::BouncyCastle::Crypto::Generators::DHKeyGeneratorHelper::CalculatePublic(Org::BouncyCastle::Crypto::Parameters::DHParameters dhParams, Org::BouncyCastle::Math::BigInteger x)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Generators::DHKeyGeneratorHelper>::get(),
                            "CalculatePublic",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::Parameters::DHParameters>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::BigInteger>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Math::BigInteger, false>(const_cast<void*>(instance), ___internal_method, dhParams, x);
}
