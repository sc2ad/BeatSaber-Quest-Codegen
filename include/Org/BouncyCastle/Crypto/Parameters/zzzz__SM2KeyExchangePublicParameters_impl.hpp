#pragma once
namespace {
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__SM2KeyExchangePublicParameters_def.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__ECPublicKeyParameters_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ICipherParameters_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Parameters::SM2KeyExchangePublicParameters._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Parameters::SM2KeyExchangePublicParameters::*)(::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters, ::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters)>(&::Org::BouncyCastle::Crypto::Parameters::SM2KeyExchangePublicParameters::_ctor)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0xead5ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Parameters::SM2KeyExchangePublicParameters>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Parameters::SM2KeyExchangePublicParameters.get_StaticPublicKey
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters (::Org::BouncyCastle::Crypto::Parameters::SM2KeyExchangePublicParameters::*)()>(&::Org::BouncyCastle::Crypto::Parameters::SM2KeyExchangePublicParameters::get_StaticPublicKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xead6e8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Crypto::Parameters::SM2KeyExchangePublicParameters),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Parameters::SM2KeyExchangePublicParameters>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Parameters::SM2KeyExchangePublicParameters.get_EphemeralPublicKey
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters (::Org::BouncyCastle::Crypto::Parameters::SM2KeyExchangePublicParameters::*)()>(&::Org::BouncyCastle::Crypto::Parameters::SM2KeyExchangePublicParameters::get_EphemeralPublicKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xead6f0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Crypto::Parameters::SM2KeyExchangePublicParameters),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Parameters::SM2KeyExchangePublicParameters>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::Org::BouncyCastle::Crypto::ICipherParameters
constexpr  ::Org::BouncyCastle::Crypto::Parameters::SM2KeyExchangePublicParameters::operator ::Org::BouncyCastle::Crypto::ICipherParameters() const noexcept {
return ::Org::BouncyCastle::Crypto::ICipherParameters(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Org::BouncyCastle::Crypto::Parameters::SM2KeyExchangePublicParameters::__set_mStaticPublicKey(::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters>(value));
}
constexpr ::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters ::Org::BouncyCastle::Crypto::Parameters::SM2KeyExchangePublicParameters::__get_mStaticPublicKey() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Org::BouncyCastle::Crypto::Parameters::SM2KeyExchangePublicParameters::__set_mEphemeralPublicKey(::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters>(value));
}
constexpr ::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters ::Org::BouncyCastle::Crypto::Parameters::SM2KeyExchangePublicParameters::__get_mEphemeralPublicKey() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "staticPublicKey", ty: "::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters", modifiers: "", def_value: None }, CppParam { name: "ephemeralPublicKey", ty: "::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters", modifiers: "", def_value: None }]
 ::Org::BouncyCastle::Crypto::Parameters::SM2KeyExchangePublicParameters::SM2KeyExchangePublicParameters(::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters staticPublicKey, ::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters ephemeralPublicKey)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<SM2KeyExchangePublicParameters>(staticPublicKey, ephemeralPublicKey))) {}
 void ::Org::BouncyCastle::Crypto::Parameters::SM2KeyExchangePublicParameters::_ctor(::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters staticPublicKey, ::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters ephemeralPublicKey)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Parameters::SM2KeyExchangePublicParameters>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, staticPublicKey, ephemeralPublicKey);
}
 ::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters ::Org::BouncyCastle::Crypto::Parameters::SM2KeyExchangePublicParameters::get_StaticPublicKey()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Parameters::SM2KeyExchangePublicParameters>::get(),
                            "get_StaticPublicKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters, false>(const_cast<void*>(instance), ___internal_method);
}
 ::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters ::Org::BouncyCastle::Crypto::Parameters::SM2KeyExchangePublicParameters::get_EphemeralPublicKey()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Parameters::SM2KeyExchangePublicParameters>::get(),
                            "get_EphemeralPublicKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
