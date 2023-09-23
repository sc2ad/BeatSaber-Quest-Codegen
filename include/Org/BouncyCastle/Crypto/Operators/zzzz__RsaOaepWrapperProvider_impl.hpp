#pragma once
#include "Org/BouncyCastle/Crypto/Operators/zzzz__RsaOaepWrapperProvider_def.hpp"
#include "Org/BouncyCastle/Crypto/Operators/zzzz__WrapperProvider_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ICipherParameters_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerObjectIdentifier_def.hpp"
//  Writing Method size for method: Org::BouncyCastle::Crypto::Operators::RsaOaepWrapperProvider._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Operators::RsaOaepWrapperProvider::*)(Org::BouncyCastle::Asn1::DerObjectIdentifier)>(&Org::BouncyCastle::Crypto::Operators::RsaOaepWrapperProvider::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xe9bf30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Operators::RsaOaepWrapperProvider>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::DerObjectIdentifier>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Operators::RsaOaepWrapperProvider.Org_BouncyCastle_Crypto_Operators_WrapperProvider_CreateWrapper
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (Org::BouncyCastle::Crypto::Operators::RsaOaepWrapperProvider::*)(bool, Org::BouncyCastle::Crypto::ICipherParameters)>(&Org::BouncyCastle::Crypto::Operators::RsaOaepWrapperProvider::Org_BouncyCastle_Crypto_Operators_WrapperProvider_CreateWrapper)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xe9c648;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Operators::RsaOaepWrapperProvider>::get(),
                            "Org.BouncyCastle.Crypto.Operators.WrapperProvider.CreateWrapper",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::ICipherParameters>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to Org::BouncyCastle::Crypto::Operators::WrapperProvider
constexpr  Org::BouncyCastle::Crypto::Operators::RsaOaepWrapperProvider::operator Org::BouncyCastle::Crypto::Operators::WrapperProvider() const noexcept {
return Org::BouncyCastle::Crypto::Operators::WrapperProvider(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Crypto::Operators::RsaOaepWrapperProvider::__set_digestOid(Org::BouncyCastle::Asn1::DerObjectIdentifier value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Asn1::DerObjectIdentifier, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Asn1::DerObjectIdentifier>(value));
}
constexpr Org::BouncyCastle::Asn1::DerObjectIdentifier Org::BouncyCastle::Crypto::Operators::RsaOaepWrapperProvider::__get_digestOid() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Asn1::DerObjectIdentifier, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "digestOid", ty: "Org::BouncyCastle::Asn1::DerObjectIdentifier", modifiers: "", def_value: None }]
 Org::BouncyCastle::Crypto::Operators::RsaOaepWrapperProvider::RsaOaepWrapperProvider(Org::BouncyCastle::Asn1::DerObjectIdentifier digestOid)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<RsaOaepWrapperProvider>(digestOid))) {}
 void Org::BouncyCastle::Crypto::Operators::RsaOaepWrapperProvider::_ctor(Org::BouncyCastle::Asn1::DerObjectIdentifier digestOid)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Operators::RsaOaepWrapperProvider>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::DerObjectIdentifier>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, digestOid);
}
 ::bs_hook::Il2CppWrapperType Org::BouncyCastle::Crypto::Operators::RsaOaepWrapperProvider::Org_BouncyCastle_Crypto_Operators_WrapperProvider_CreateWrapper(bool forWrapping, Org::BouncyCastle::Crypto::ICipherParameters parameters)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Operators::RsaOaepWrapperProvider>::get(),
                            "Org.BouncyCastle.Crypto.Operators.WrapperProvider.CreateWrapper",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::ICipherParameters>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method, forWrapping, parameters);
}
