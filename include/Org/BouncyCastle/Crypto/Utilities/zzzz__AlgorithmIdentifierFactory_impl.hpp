#pragma once
namespace {
#include "Org/BouncyCastle/Crypto/Utilities/zzzz__AlgorithmIdentifierFactory_def.hpp"
#include "Org/BouncyCastle/Security/zzzz__SecureRandom_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerObjectIdentifier_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__AlgorithmIdentifier_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Utilities::AlgorithmIdentifierFactory.GenerateEncryptionAlgID
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier (*)(::Org::BouncyCastle::Asn1::DerObjectIdentifier, int32_t, ::Org::BouncyCastle::Security::SecureRandom)>(&::Org::BouncyCastle::Crypto::Utilities::AlgorithmIdentifierFactory::GenerateEncryptionAlgID)> {
  constexpr static std::size_t size = 0x55c;
  constexpr static std::size_t addrs = 0xf32f64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Utilities::AlgorithmIdentifierFactory>::get(),
                            "GenerateEncryptionAlgID",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DerObjectIdentifier>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Security::SecureRandom>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Utilities::AlgorithmIdentifierFactory._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Utilities::AlgorithmIdentifierFactory::*)()>(&::Org::BouncyCastle::Crypto::Utilities::AlgorithmIdentifierFactory::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xf335e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Utilities::AlgorithmIdentifierFactory>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 void ::Org::BouncyCastle::Crypto::Utilities::AlgorithmIdentifierFactory::__set_IDEA_CBC(::Org::BouncyCastle::Asn1::DerObjectIdentifier value)  {
::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier, "IDEA_CBC", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Utilities::AlgorithmIdentifierFactory>::get>(std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier>(value));
}
 ::Org::BouncyCastle::Asn1::DerObjectIdentifier ::Org::BouncyCastle::Crypto::Utilities::AlgorithmIdentifierFactory::__get_IDEA_CBC()  {
return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier, "IDEA_CBC", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Utilities::AlgorithmIdentifierFactory>::get>();
}
 void ::Org::BouncyCastle::Crypto::Utilities::AlgorithmIdentifierFactory::__set_CAST5_CBC(::Org::BouncyCastle::Asn1::DerObjectIdentifier value)  {
::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier, "CAST5_CBC", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Utilities::AlgorithmIdentifierFactory>::get>(std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier>(value));
}
 ::Org::BouncyCastle::Asn1::DerObjectIdentifier ::Org::BouncyCastle::Crypto::Utilities::AlgorithmIdentifierFactory::__get_CAST5_CBC()  {
return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier, "CAST5_CBC", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Utilities::AlgorithmIdentifierFactory>::get>();
}
 void ::Org::BouncyCastle::Crypto::Utilities::AlgorithmIdentifierFactory::__set_rc2Table(::ArrayW<int16_t> value)  {
::cordl_internals::setStaticField<::ArrayW<int16_t>, "rc2Table", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Utilities::AlgorithmIdentifierFactory>::get>(std::forward<::ArrayW<int16_t>>(value));
}
 ::ArrayW<int16_t> ::Org::BouncyCastle::Crypto::Utilities::AlgorithmIdentifierFactory::__get_rc2Table()  {
return ::cordl_internals::getStaticField<::ArrayW<int16_t>, "rc2Table", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Utilities::AlgorithmIdentifierFactory>::get>();
}
 ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier ::Org::BouncyCastle::Crypto::Utilities::AlgorithmIdentifierFactory::GenerateEncryptionAlgID(::Org::BouncyCastle::Asn1::DerObjectIdentifier encryptionOID, int32_t keySize, ::Org::BouncyCastle::Security::SecureRandom random)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Utilities::AlgorithmIdentifierFactory>::get(),
                            "GenerateEncryptionAlgID",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DerObjectIdentifier>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Security::SecureRandom>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier, false>(nullptr, ___internal_method, encryptionOID, keySize, random);
}
// Ctor Parameters []
 ::Org::BouncyCastle::Crypto::Utilities::AlgorithmIdentifierFactory::AlgorithmIdentifierFactory()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<AlgorithmIdentifierFactory>())) {}
 void ::Org::BouncyCastle::Crypto::Utilities::AlgorithmIdentifierFactory::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Utilities::AlgorithmIdentifierFactory>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
