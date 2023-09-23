#pragma once
#include "Org/BouncyCastle/Crypto/Operators/zzzz__Asn1VerifierFactoryProvider_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__AsymmetricKeyParameter_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IVerifierFactory_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IVerifierFactoryProvider_def.hpp"
//  Writing Method size for method: Org::BouncyCastle::Crypto::Operators::Asn1VerifierFactoryProvider._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Operators::Asn1VerifierFactoryProvider::*)(Org::BouncyCastle::Crypto::AsymmetricKeyParameter)>(&Org::BouncyCastle::Crypto::Operators::Asn1VerifierFactoryProvider::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xe9ff1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Operators::Asn1VerifierFactoryProvider>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::AsymmetricKeyParameter>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Operators::Asn1VerifierFactoryProvider.CreateVerifierFactory
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Crypto::IVerifierFactory (Org::BouncyCastle::Crypto::Operators::Asn1VerifierFactoryProvider::*)(::bs_hook::Il2CppWrapperType)>(&Org::BouncyCastle::Crypto::Operators::Asn1VerifierFactoryProvider::CreateVerifierFactory)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0xe9ff44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Operators::Asn1VerifierFactoryProvider>::get(),
                            "CreateVerifierFactory",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Operators::Asn1VerifierFactoryProvider.get_SignatureAlgNames
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IEnumerable (Org::BouncyCastle::Crypto::Operators::Asn1VerifierFactoryProvider::*)()>(&Org::BouncyCastle::Crypto::Operators::Asn1VerifierFactoryProvider::get_SignatureAlgNames)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xea0008;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Operators::Asn1VerifierFactoryProvider>::get(),
                            "get_SignatureAlgNames",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to Org::BouncyCastle::Crypto::IVerifierFactoryProvider
constexpr  Org::BouncyCastle::Crypto::Operators::Asn1VerifierFactoryProvider::operator Org::BouncyCastle::Crypto::IVerifierFactoryProvider() const noexcept {
return Org::BouncyCastle::Crypto::IVerifierFactoryProvider(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Crypto::Operators::Asn1VerifierFactoryProvider::__set_publicKey(Org::BouncyCastle::Crypto::AsymmetricKeyParameter value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Crypto::AsymmetricKeyParameter, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Crypto::AsymmetricKeyParameter>(value));
}
constexpr Org::BouncyCastle::Crypto::AsymmetricKeyParameter Org::BouncyCastle::Crypto::Operators::Asn1VerifierFactoryProvider::__get_publicKey() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Crypto::AsymmetricKeyParameter, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "publicKey", ty: "Org::BouncyCastle::Crypto::AsymmetricKeyParameter", modifiers: "", def_value: None }]
 Org::BouncyCastle::Crypto::Operators::Asn1VerifierFactoryProvider::Asn1VerifierFactoryProvider(Org::BouncyCastle::Crypto::AsymmetricKeyParameter publicKey)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<Asn1VerifierFactoryProvider>(publicKey))) {}
 void Org::BouncyCastle::Crypto::Operators::Asn1VerifierFactoryProvider::_ctor(Org::BouncyCastle::Crypto::AsymmetricKeyParameter publicKey)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Operators::Asn1VerifierFactoryProvider>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::AsymmetricKeyParameter>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, publicKey);
}
 Org::BouncyCastle::Crypto::IVerifierFactory Org::BouncyCastle::Crypto::Operators::Asn1VerifierFactoryProvider::CreateVerifierFactory(::bs_hook::Il2CppWrapperType algorithmDetails)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Operators::Asn1VerifierFactoryProvider>::get(),
                            "CreateVerifierFactory",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Crypto::IVerifierFactory, false>(const_cast<void*>(instance), ___internal_method, algorithmDetails);
}
 System::Collections::IEnumerable Org::BouncyCastle::Crypto::Operators::Asn1VerifierFactoryProvider::get_SignatureAlgNames()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Operators::Asn1VerifierFactoryProvider>::get(),
                            "get_SignatureAlgNames",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::IEnumerable, false>(const_cast<void*>(instance), ___internal_method);
}
