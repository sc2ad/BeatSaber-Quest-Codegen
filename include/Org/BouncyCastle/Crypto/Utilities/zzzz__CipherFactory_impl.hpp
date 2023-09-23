#pragma once
#include "Org/BouncyCastle/Crypto/Utilities/zzzz__CipherFactory_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerObjectIdentifier_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ICipherParameters_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__AlgorithmIdentifier_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__BufferedBlockCipher_def.hpp"
//  Writing Method size for method: Org::BouncyCastle::Crypto::Utilities::CipherFactory._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Utilities::CipherFactory::*)()>(&Org::BouncyCastle::Crypto::Utilities::CipherFactory::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xf335ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Utilities::CipherFactory>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Utilities::CipherFactory.CreateContentCipher
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (*)(bool, Org::BouncyCastle::Crypto::ICipherParameters, Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier)>(&Org::BouncyCastle::Crypto::Utilities::CipherFactory::CreateContentCipher)> {
  constexpr static std::size_t size = 0x758;
  constexpr static std::size_t addrs = 0xf335f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Utilities::CipherFactory>::get(),
                            "CreateContentCipher",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::ICipherParameters>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Utilities::CipherFactory.CreateCipher
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Crypto::BufferedBlockCipher (*)(Org::BouncyCastle::Asn1::DerObjectIdentifier)>(&Org::BouncyCastle::Crypto::Utilities::CipherFactory::CreateCipher)> {
  constexpr static std::size_t size = 0x3b8;
  constexpr static std::size_t addrs = 0xf33d4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Utilities::CipherFactory>::get(),
                            "CreateCipher",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::DerObjectIdentifier>::get()}
                        )));
    return ___internal_method;
  }
};
 void Org::BouncyCastle::Crypto::Utilities::CipherFactory::__set_rc2Ekb(::ArrayW<int16_t> value)  {
::cordl_internals::setStaticField<::ArrayW<int16_t>, "rc2Ekb", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Utilities::CipherFactory>::get>(std::forward<::ArrayW<int16_t>>(value));
}
 ::ArrayW<int16_t> Org::BouncyCastle::Crypto::Utilities::CipherFactory::__get_rc2Ekb()  {
return ::cordl_internals::getStaticField<::ArrayW<int16_t>, "rc2Ekb", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Utilities::CipherFactory>::get>();
}
// Ctor Parameters []
 Org::BouncyCastle::Crypto::Utilities::CipherFactory::CipherFactory()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<CipherFactory>())) {}
 void Org::BouncyCastle::Crypto::Utilities::CipherFactory::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Utilities::CipherFactory>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::bs_hook::Il2CppWrapperType Org::BouncyCastle::Crypto::Utilities::CipherFactory::CreateContentCipher(bool forEncryption, Org::BouncyCastle::Crypto::ICipherParameters encKey, Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier encryptionAlgID)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Utilities::CipherFactory>::get(),
                            "CreateContentCipher",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::ICipherParameters>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(nullptr, ___internal_method, forEncryption, encKey, encryptionAlgID);
}
 Org::BouncyCastle::Crypto::BufferedBlockCipher Org::BouncyCastle::Crypto::Utilities::CipherFactory::CreateCipher(Org::BouncyCastle::Asn1::DerObjectIdentifier algorithm)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Utilities::CipherFactory>::get(),
                            "CreateCipher",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::DerObjectIdentifier>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Crypto::BufferedBlockCipher, false>(nullptr, ___internal_method, algorithm);
}
