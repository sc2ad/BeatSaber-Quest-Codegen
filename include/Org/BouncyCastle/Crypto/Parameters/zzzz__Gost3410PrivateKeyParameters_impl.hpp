#pragma once
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__Gost3410KeyParameters_impl.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__Gost3410PrivateKeyParameters_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerObjectIdentifier_def.hpp"
#include "Org/BouncyCastle/Math/zzzz__BigInteger_def.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__Gost3410Parameters_def.hpp"
//  Writing Method size for method: Org::BouncyCastle::Crypto::Parameters::Gost3410PrivateKeyParameters._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Parameters::Gost3410PrivateKeyParameters::*)(Org::BouncyCastle::Math::BigInteger, Org::BouncyCastle::Crypto::Parameters::Gost3410Parameters)>(&Org::BouncyCastle::Crypto::Parameters::Gost3410PrivateKeyParameters::_ctor)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0xea92d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Parameters::Gost3410PrivateKeyParameters>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::BigInteger>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::Parameters::Gost3410Parameters>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Parameters::Gost3410PrivateKeyParameters._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Parameters::Gost3410PrivateKeyParameters::*)(Org::BouncyCastle::Math::BigInteger, Org::BouncyCastle::Asn1::DerObjectIdentifier)>(&Org::BouncyCastle::Crypto::Parameters::Gost3410PrivateKeyParameters::_ctor)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0xea93b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Parameters::Gost3410PrivateKeyParameters>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::BigInteger>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::DerObjectIdentifier>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Parameters::Gost3410PrivateKeyParameters.get_X
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::BigInteger (Org::BouncyCastle::Crypto::Parameters::Gost3410PrivateKeyParameters::*)()>(&Org::BouncyCastle::Crypto::Parameters::Gost3410PrivateKeyParameters::get_X)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xea9498;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Parameters::Gost3410PrivateKeyParameters>::get(),
                            "get_X",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void Org::BouncyCastle::Crypto::Parameters::Gost3410PrivateKeyParameters::__set_x(Org::BouncyCastle::Math::BigInteger value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Math::BigInteger, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Math::BigInteger>(value));
}
constexpr Org::BouncyCastle::Math::BigInteger Org::BouncyCastle::Crypto::Parameters::Gost3410PrivateKeyParameters::__get_x() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Math::BigInteger, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "x", ty: "Org::BouncyCastle::Math::BigInteger", modifiers: "", def_value: None }, CppParam { name: "parameters", ty: "Org::BouncyCastle::Crypto::Parameters::Gost3410Parameters", modifiers: "", def_value: None }]
 Org::BouncyCastle::Crypto::Parameters::Gost3410PrivateKeyParameters::Gost3410PrivateKeyParameters(Org::BouncyCastle::Math::BigInteger x, Org::BouncyCastle::Crypto::Parameters::Gost3410Parameters parameters)  : Org::BouncyCastle::Crypto::Parameters::Gost3410KeyParameters(THROW_UNLESS(::il2cpp_utils::New<Gost3410PrivateKeyParameters>(x, parameters))) {}
 void Org::BouncyCastle::Crypto::Parameters::Gost3410PrivateKeyParameters::_ctor(Org::BouncyCastle::Math::BigInteger x, Org::BouncyCastle::Crypto::Parameters::Gost3410Parameters parameters)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Parameters::Gost3410PrivateKeyParameters>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::BigInteger>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::Parameters::Gost3410Parameters>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, x, parameters);
}
// Ctor Parameters [CppParam { name: "x", ty: "Org::BouncyCastle::Math::BigInteger", modifiers: "", def_value: None }, CppParam { name: "publicKeyParamSet", ty: "Org::BouncyCastle::Asn1::DerObjectIdentifier", modifiers: "", def_value: None }]
 Org::BouncyCastle::Crypto::Parameters::Gost3410PrivateKeyParameters::Gost3410PrivateKeyParameters(Org::BouncyCastle::Math::BigInteger x, Org::BouncyCastle::Asn1::DerObjectIdentifier publicKeyParamSet)  : Org::BouncyCastle::Crypto::Parameters::Gost3410KeyParameters(THROW_UNLESS(::il2cpp_utils::New<Gost3410PrivateKeyParameters>(x, publicKeyParamSet))) {}
 void Org::BouncyCastle::Crypto::Parameters::Gost3410PrivateKeyParameters::_ctor(Org::BouncyCastle::Math::BigInteger x, Org::BouncyCastle::Asn1::DerObjectIdentifier publicKeyParamSet)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Parameters::Gost3410PrivateKeyParameters>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::BigInteger>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::DerObjectIdentifier>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, x, publicKeyParamSet);
}
 Org::BouncyCastle::Math::BigInteger Org::BouncyCastle::Crypto::Parameters::Gost3410PrivateKeyParameters::get_X()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Parameters::Gost3410PrivateKeyParameters>::get(),
                            "get_X",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Math::BigInteger, false>(const_cast<void*>(instance), ___internal_method);
}
