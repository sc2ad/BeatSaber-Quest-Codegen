#pragma once
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__Gost3410KeyParameters_impl.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__Gost3410PublicKeyParameters_def.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__Gost3410Parameters_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerObjectIdentifier_def.hpp"
#include "Org/BouncyCastle/Math/zzzz__BigInteger_def.hpp"
//  Writing Method size for method: Org::BouncyCastle::Crypto::Parameters::Gost3410PublicKeyParameters._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Parameters::Gost3410PublicKeyParameters::*)(Org::BouncyCastle::Math::BigInteger, Org::BouncyCastle::Crypto::Parameters::Gost3410Parameters)>(&Org::BouncyCastle::Crypto::Parameters::Gost3410PublicKeyParameters::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0xea94a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Parameters::Gost3410PublicKeyParameters>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::BigInteger>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::Parameters::Gost3410Parameters>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Parameters::Gost3410PublicKeyParameters._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Parameters::Gost3410PublicKeyParameters::*)(Org::BouncyCastle::Math::BigInteger, Org::BouncyCastle::Asn1::DerObjectIdentifier)>(&Org::BouncyCastle::Crypto::Parameters::Gost3410PublicKeyParameters::_ctor)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0xea9560;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Parameters::Gost3410PublicKeyParameters>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::BigInteger>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::DerObjectIdentifier>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Parameters::Gost3410PublicKeyParameters.get_Y
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::BigInteger (Org::BouncyCastle::Crypto::Parameters::Gost3410PublicKeyParameters::*)()>(&Org::BouncyCastle::Crypto::Parameters::Gost3410PublicKeyParameters::get_Y)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xea9628;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Parameters::Gost3410PublicKeyParameters>::get(),
                            "get_Y",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void Org::BouncyCastle::Crypto::Parameters::Gost3410PublicKeyParameters::__set_y(Org::BouncyCastle::Math::BigInteger value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Math::BigInteger, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Math::BigInteger>(value));
}
constexpr Org::BouncyCastle::Math::BigInteger Org::BouncyCastle::Crypto::Parameters::Gost3410PublicKeyParameters::__get_y() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Math::BigInteger, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
 Org::BouncyCastle::Crypto::Parameters::Gost3410PublicKeyParameters Org::BouncyCastle::Crypto::Parameters::Gost3410PublicKeyParameters::New_ctor(Org::BouncyCastle::Math::BigInteger y, Org::BouncyCastle::Crypto::Parameters::Gost3410Parameters parameters)  {
Org::BouncyCastle::Crypto::Parameters::Gost3410PublicKeyParameters o{THROW_UNLESS(::il2cpp_utils::New<Org::BouncyCastle::Crypto::Parameters::Gost3410PublicKeyParameters>(y, parameters))};
return o;
}
 void Org::BouncyCastle::Crypto::Parameters::Gost3410PublicKeyParameters::_ctor(Org::BouncyCastle::Math::BigInteger y, Org::BouncyCastle::Crypto::Parameters::Gost3410Parameters parameters)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Parameters::Gost3410PublicKeyParameters>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::BigInteger>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::Parameters::Gost3410Parameters>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, y, parameters);
}
 Org::BouncyCastle::Crypto::Parameters::Gost3410PublicKeyParameters Org::BouncyCastle::Crypto::Parameters::Gost3410PublicKeyParameters::New_ctor(Org::BouncyCastle::Math::BigInteger y, Org::BouncyCastle::Asn1::DerObjectIdentifier publicKeyParamSet)  {
Org::BouncyCastle::Crypto::Parameters::Gost3410PublicKeyParameters o{THROW_UNLESS(::il2cpp_utils::New<Org::BouncyCastle::Crypto::Parameters::Gost3410PublicKeyParameters>(y, publicKeyParamSet))};
return o;
}
 void Org::BouncyCastle::Crypto::Parameters::Gost3410PublicKeyParameters::_ctor(Org::BouncyCastle::Math::BigInteger y, Org::BouncyCastle::Asn1::DerObjectIdentifier publicKeyParamSet)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Parameters::Gost3410PublicKeyParameters>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::BigInteger>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::DerObjectIdentifier>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, y, publicKeyParamSet);
}
 Org::BouncyCastle::Math::BigInteger Org::BouncyCastle::Crypto::Parameters::Gost3410PublicKeyParameters::get_Y()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Parameters::Gost3410PublicKeyParameters>::get(),
                            "get_Y",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Math::BigInteger, false>(const_cast<void*>(instance), ___internal_method);
}
