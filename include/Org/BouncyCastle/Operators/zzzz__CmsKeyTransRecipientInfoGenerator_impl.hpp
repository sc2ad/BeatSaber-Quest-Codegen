#pragma once
#include "Org/BouncyCastle/Cms/zzzz__KeyTransRecipientInfoGenerator_impl.hpp"
#include "Org/BouncyCastle/Operators/zzzz__CmsKeyTransRecipientInfoGenerator_def.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__KeyParameter_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IKeyWrapper_def.hpp"
#include "Org/BouncyCastle/X509/zzzz__X509Certificate_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__AlgorithmIdentifier_def.hpp"
//  Writing Method size for method: Org::BouncyCastle::Operators::CmsKeyTransRecipientInfoGenerator._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Operators::CmsKeyTransRecipientInfoGenerator::*)(Org::BouncyCastle::X509::X509Certificate, Org::BouncyCastle::Crypto::IKeyWrapper)>(&Org::BouncyCastle::Operators::CmsKeyTransRecipientInfoGenerator::_ctor)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0xea07e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Operators::CmsKeyTransRecipientInfoGenerator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::X509::X509Certificate>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::IKeyWrapper>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Operators::CmsKeyTransRecipientInfoGenerator._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Operators::CmsKeyTransRecipientInfoGenerator::*)(::ArrayW<uint8_t>, Org::BouncyCastle::Crypto::IKeyWrapper)>(&Org::BouncyCastle::Operators::CmsKeyTransRecipientInfoGenerator::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xea0930;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Operators::CmsKeyTransRecipientInfoGenerator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::IKeyWrapper>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Operators::CmsKeyTransRecipientInfoGenerator.get_AlgorithmDetails
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier (Org::BouncyCastle::Operators::CmsKeyTransRecipientInfoGenerator::*)()>(&Org::BouncyCastle::Operators::CmsKeyTransRecipientInfoGenerator::get_AlgorithmDetails)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0xea09a4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Operators::CmsKeyTransRecipientInfoGenerator),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Operators::CmsKeyTransRecipientInfoGenerator>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Operators::CmsKeyTransRecipientInfoGenerator.GenerateWrappedKey
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (Org::BouncyCastle::Operators::CmsKeyTransRecipientInfoGenerator::*)(Org::BouncyCastle::Crypto::Parameters::KeyParameter)>(&Org::BouncyCastle::Operators::CmsKeyTransRecipientInfoGenerator::GenerateWrappedKey)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0xea0a90;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Operators::CmsKeyTransRecipientInfoGenerator),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Operators::CmsKeyTransRecipientInfoGenerator>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
constexpr void Org::BouncyCastle::Operators::CmsKeyTransRecipientInfoGenerator::__set_keyWrapper(Org::BouncyCastle::Crypto::IKeyWrapper value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Crypto::IKeyWrapper, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Crypto::IKeyWrapper>(value));
}
constexpr Org::BouncyCastle::Crypto::IKeyWrapper Org::BouncyCastle::Operators::CmsKeyTransRecipientInfoGenerator::__get_keyWrapper() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Crypto::IKeyWrapper, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "recipCert", ty: "Org::BouncyCastle::X509::X509Certificate", modifiers: "", def_value: None }, CppParam { name: "keyWrapper", ty: "Org::BouncyCastle::Crypto::IKeyWrapper", modifiers: "", def_value: None }]
 Org::BouncyCastle::Operators::CmsKeyTransRecipientInfoGenerator::CmsKeyTransRecipientInfoGenerator(Org::BouncyCastle::X509::X509Certificate recipCert, Org::BouncyCastle::Crypto::IKeyWrapper keyWrapper)  : Org::BouncyCastle::Cms::KeyTransRecipientInfoGenerator(THROW_UNLESS(::il2cpp_utils::New<CmsKeyTransRecipientInfoGenerator>(recipCert, keyWrapper))) {}
 void Org::BouncyCastle::Operators::CmsKeyTransRecipientInfoGenerator::_ctor(Org::BouncyCastle::X509::X509Certificate recipCert, Org::BouncyCastle::Crypto::IKeyWrapper keyWrapper)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Operators::CmsKeyTransRecipientInfoGenerator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::X509::X509Certificate>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::IKeyWrapper>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, recipCert, keyWrapper);
}
// Ctor Parameters [CppParam { name: "subjectKeyID", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "keyWrapper", ty: "Org::BouncyCastle::Crypto::IKeyWrapper", modifiers: "", def_value: None }]
 Org::BouncyCastle::Operators::CmsKeyTransRecipientInfoGenerator::CmsKeyTransRecipientInfoGenerator(::ArrayW<uint8_t> subjectKeyID, Org::BouncyCastle::Crypto::IKeyWrapper keyWrapper)  : Org::BouncyCastle::Cms::KeyTransRecipientInfoGenerator(THROW_UNLESS(::il2cpp_utils::New<CmsKeyTransRecipientInfoGenerator>(subjectKeyID, keyWrapper))) {}
 void Org::BouncyCastle::Operators::CmsKeyTransRecipientInfoGenerator::_ctor(::ArrayW<uint8_t> subjectKeyID, Org::BouncyCastle::Crypto::IKeyWrapper keyWrapper)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Operators::CmsKeyTransRecipientInfoGenerator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::IKeyWrapper>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, subjectKeyID, keyWrapper);
}
 Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier Org::BouncyCastle::Operators::CmsKeyTransRecipientInfoGenerator::get_AlgorithmDetails()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Operators::CmsKeyTransRecipientInfoGenerator>::get(),
                            "get_AlgorithmDetails",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier, false>(const_cast<void*>(instance), ___internal_method);
}
 ::ArrayW<uint8_t> Org::BouncyCastle::Operators::CmsKeyTransRecipientInfoGenerator::GenerateWrappedKey(Org::BouncyCastle::Crypto::Parameters::KeyParameter contentKey)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Operators::CmsKeyTransRecipientInfoGenerator>::get(),
                            "GenerateWrappedKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::Parameters::KeyParameter>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(const_cast<void*>(instance), ___internal_method, contentKey);
}
