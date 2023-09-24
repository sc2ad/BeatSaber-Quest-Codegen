#pragma once
#include "Org/BouncyCastle/Cms/zzzz__CmsSignedGenerator_impl.hpp"
#include "Org/BouncyCastle/Utilities/IO/zzzz__BaseOutputStream_impl.hpp"
#include "Org/BouncyCastle/Cms/zzzz__CmsSignedDataStreamGenerator_def.hpp"
#include "Org/BouncyCastle/Asn1/Cms/zzzz__AttributeTable_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "Org/BouncyCastle/Security/zzzz__SecureRandom_def.hpp"
#include "Org/BouncyCastle/X509/zzzz__X509Certificate_def.hpp"
#include "Org/BouncyCastle/Asn1/Cms/zzzz__SignerIdentifier_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerInteger_def.hpp"
#include "Org/BouncyCastle/Cms/zzzz__CmsSignedDataStreamGenerator_def.hpp"
#include "Org/BouncyCastle/Cms/zzzz__CmsProcessable_def.hpp"
#include "Org/BouncyCastle/Utilities/Collections/zzzz__ISet_def.hpp"
#include "Org/BouncyCastle/Cms/zzzz__CmsSignedHelper_def.hpp"
#include "Org/BouncyCastle/Cms/zzzz__CmsAttributeTableGenerator_def.hpp"
#include "Org/BouncyCastle/Cms/zzzz__SignerInformation_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__AsymmetricKeyParameter_def.hpp"
#include "System/Collections/zzzz__IDictionary_def.hpp"
#include "System/Collections/zzzz__IList_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerObjectIdentifier_def.hpp"
#include "System/Collections/zzzz__ICollection_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__BerSequenceGenerator_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Generator_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "Org/BouncyCastle/Cms/zzzz__ISignerInfoGenerator_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__AlgorithmIdentifier_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ISigner_def.hpp"
#include "Org/BouncyCastle/Asn1/Cms/zzzz__SignerInfo_def.hpp"
//  Writing Method size for method: Org::BouncyCastle::Cms::Org__BouncyCastle__Cms__CmsSignedDataStreamGenerator__DigestAndSignerInfoGeneratorHolder._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Cms::Org__BouncyCastle__Cms__CmsSignedDataStreamGenerator__DigestAndSignerInfoGeneratorHolder::*)(Org::BouncyCastle::Cms::ISignerInfoGenerator, ::StringW)>(&Org::BouncyCastle::Cms::Org__BouncyCastle__Cms__CmsSignedDataStreamGenerator__DigestAndSignerInfoGeneratorHolder::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x1165940;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::Org__BouncyCastle__Cms__CmsSignedDataStreamGenerator__DigestAndSignerInfoGeneratorHolder>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Cms::ISignerInfoGenerator>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Cms::Org__BouncyCastle__Cms__CmsSignedDataStreamGenerator__DigestAndSignerInfoGeneratorHolder.get_DigestAlgorithm
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier (Org::BouncyCastle::Cms::Org__BouncyCastle__Cms__CmsSignedDataStreamGenerator__DigestAndSignerInfoGeneratorHolder::*)()>(&Org::BouncyCastle::Cms::Org__BouncyCastle__Cms__CmsSignedDataStreamGenerator__DigestAndSignerInfoGeneratorHolder::get_DigestAlgorithm)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x1167694;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::Org__BouncyCastle__Cms__CmsSignedDataStreamGenerator__DigestAndSignerInfoGeneratorHolder>::get(),
                            "get_DigestAlgorithm",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void Org::BouncyCastle::Cms::Org__BouncyCastle__Cms__CmsSignedDataStreamGenerator__DigestAndSignerInfoGeneratorHolder::__set_signerInf(Org::BouncyCastle::Cms::ISignerInfoGenerator value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Cms::ISignerInfoGenerator, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Cms::ISignerInfoGenerator>(value));
}
constexpr Org::BouncyCastle::Cms::ISignerInfoGenerator Org::BouncyCastle::Cms::Org__BouncyCastle__Cms__CmsSignedDataStreamGenerator__DigestAndSignerInfoGeneratorHolder::__get_signerInf() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Cms::ISignerInfoGenerator, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Cms::Org__BouncyCastle__Cms__CmsSignedDataStreamGenerator__DigestAndSignerInfoGeneratorHolder::__set_digestOID(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW Org::BouncyCastle::Cms::Org__BouncyCastle__Cms__CmsSignedDataStreamGenerator__DigestAndSignerInfoGeneratorHolder::__get_digestOID() const {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 Org::BouncyCastle::Cms::Org__BouncyCastle__Cms__CmsSignedDataStreamGenerator__DigestAndSignerInfoGeneratorHolder Org::BouncyCastle::Cms::Org__BouncyCastle__Cms__CmsSignedDataStreamGenerator__DigestAndSignerInfoGeneratorHolder::New_ctor(Org::BouncyCastle::Cms::ISignerInfoGenerator signerInf, ::StringW digestOID)  {
Org::BouncyCastle::Cms::Org__BouncyCastle__Cms__CmsSignedDataStreamGenerator__DigestAndSignerInfoGeneratorHolder o{THROW_UNLESS(::il2cpp_utils::New<Org::BouncyCastle::Cms::Org__BouncyCastle__Cms__CmsSignedDataStreamGenerator__DigestAndSignerInfoGeneratorHolder>(signerInf, digestOID))};
return o;
}
 void Org::BouncyCastle::Cms::Org__BouncyCastle__Cms__CmsSignedDataStreamGenerator__DigestAndSignerInfoGeneratorHolder::_ctor(Org::BouncyCastle::Cms::ISignerInfoGenerator signerInf, ::StringW digestOID)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::Org__BouncyCastle__Cms__CmsSignedDataStreamGenerator__DigestAndSignerInfoGeneratorHolder>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Cms::ISignerInfoGenerator>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, signerInf, digestOID);
}
 Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier Org::BouncyCastle::Cms::Org__BouncyCastle__Cms__CmsSignedDataStreamGenerator__DigestAndSignerInfoGeneratorHolder::get_DigestAlgorithm()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::Org__BouncyCastle__Cms__CmsSignedDataStreamGenerator__DigestAndSignerInfoGeneratorHolder>::get(),
                            "get_DigestAlgorithm",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: Org::BouncyCastle::Cms::Org__BouncyCastle__Cms__CmsSignedDataStreamGenerator__SignerInfoGeneratorImpl._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Cms::Org__BouncyCastle__Cms__CmsSignedDataStreamGenerator__SignerInfoGeneratorImpl::*)(Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator, Org::BouncyCastle::Crypto::AsymmetricKeyParameter, Org::BouncyCastle::Asn1::Cms::SignerIdentifier, ::StringW, ::StringW, Org::BouncyCastle::Cms::CmsAttributeTableGenerator, Org::BouncyCastle::Cms::CmsAttributeTableGenerator)>(&Org::BouncyCastle::Cms::Org__BouncyCastle__Cms__CmsSignedDataStreamGenerator__SignerInfoGeneratorImpl::_ctor)> {
  constexpr static std::size_t size = 0x324;
  constexpr static std::size_t addrs = 0x116561c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::Org__BouncyCastle__Cms__CmsSignedDataStreamGenerator__SignerInfoGeneratorImpl>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::AsymmetricKeyParameter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::Cms::SignerIdentifier>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Cms::CmsAttributeTableGenerator>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Cms::CmsAttributeTableGenerator>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Cms::Org__BouncyCastle__Cms__CmsSignedDataStreamGenerator__SignerInfoGeneratorImpl.Generate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::Cms::SignerInfo (Org::BouncyCastle::Cms::Org__BouncyCastle__Cms__CmsSignedDataStreamGenerator__SignerInfoGeneratorImpl::*)(Org::BouncyCastle::Asn1::DerObjectIdentifier, Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier, ::ArrayW<uint8_t>)>(&Org::BouncyCastle::Cms::Org__BouncyCastle__Cms__CmsSignedDataStreamGenerator__SignerInfoGeneratorImpl::Generate)> {
  constexpr static std::size_t size = 0x8f0;
  constexpr static std::size_t addrs = 0x11677c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::Org__BouncyCastle__Cms__CmsSignedDataStreamGenerator__SignerInfoGeneratorImpl>::get(),
                            "Generate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::DerObjectIdentifier>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to Org::BouncyCastle::Cms::ISignerInfoGenerator
constexpr  Org::BouncyCastle::Cms::Org__BouncyCastle__Cms__CmsSignedDataStreamGenerator__SignerInfoGeneratorImpl::operator Org::BouncyCastle::Cms::ISignerInfoGenerator() const noexcept {
return Org::BouncyCastle::Cms::ISignerInfoGenerator(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Cms::Org__BouncyCastle__Cms__CmsSignedDataStreamGenerator__SignerInfoGeneratorImpl::__set_outer(Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator>(value));
}
constexpr Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator Org::BouncyCastle::Cms::Org__BouncyCastle__Cms__CmsSignedDataStreamGenerator__SignerInfoGeneratorImpl::__get_outer() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Cms::Org__BouncyCastle__Cms__CmsSignedDataStreamGenerator__SignerInfoGeneratorImpl::__set__signerIdentifier(Org::BouncyCastle::Asn1::Cms::SignerIdentifier value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Asn1::Cms::SignerIdentifier, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Asn1::Cms::SignerIdentifier>(value));
}
constexpr Org::BouncyCastle::Asn1::Cms::SignerIdentifier Org::BouncyCastle::Cms::Org__BouncyCastle__Cms__CmsSignedDataStreamGenerator__SignerInfoGeneratorImpl::__get__signerIdentifier() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Asn1::Cms::SignerIdentifier, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Cms::Org__BouncyCastle__Cms__CmsSignedDataStreamGenerator__SignerInfoGeneratorImpl::__set__digestOID(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW Org::BouncyCastle::Cms::Org__BouncyCastle__Cms__CmsSignedDataStreamGenerator__SignerInfoGeneratorImpl::__get__digestOID() const {
return ::cordl_internals::getInstanceField<::StringW, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Cms::Org__BouncyCastle__Cms__CmsSignedDataStreamGenerator__SignerInfoGeneratorImpl::__set__encOID(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW Org::BouncyCastle::Cms::Org__BouncyCastle__Cms__CmsSignedDataStreamGenerator__SignerInfoGeneratorImpl::__get__encOID() const {
return ::cordl_internals::getInstanceField<::StringW, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Cms::Org__BouncyCastle__Cms__CmsSignedDataStreamGenerator__SignerInfoGeneratorImpl::__set__sAttr(Org::BouncyCastle::Cms::CmsAttributeTableGenerator value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Cms::CmsAttributeTableGenerator, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Cms::CmsAttributeTableGenerator>(value));
}
constexpr Org::BouncyCastle::Cms::CmsAttributeTableGenerator Org::BouncyCastle::Cms::Org__BouncyCastle__Cms__CmsSignedDataStreamGenerator__SignerInfoGeneratorImpl::__get__sAttr() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Cms::CmsAttributeTableGenerator, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Cms::Org__BouncyCastle__Cms__CmsSignedDataStreamGenerator__SignerInfoGeneratorImpl::__set__unsAttr(Org::BouncyCastle::Cms::CmsAttributeTableGenerator value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Cms::CmsAttributeTableGenerator, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Cms::CmsAttributeTableGenerator>(value));
}
constexpr Org::BouncyCastle::Cms::CmsAttributeTableGenerator Org::BouncyCastle::Cms::Org__BouncyCastle__Cms__CmsSignedDataStreamGenerator__SignerInfoGeneratorImpl::__get__unsAttr() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Cms::CmsAttributeTableGenerator, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Cms::Org__BouncyCastle__Cms__CmsSignedDataStreamGenerator__SignerInfoGeneratorImpl::__set__encName(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW Org::BouncyCastle::Cms::Org__BouncyCastle__Cms__CmsSignedDataStreamGenerator__SignerInfoGeneratorImpl::__get__encName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Cms::Org__BouncyCastle__Cms__CmsSignedDataStreamGenerator__SignerInfoGeneratorImpl::__set__sig(Org::BouncyCastle::Crypto::ISigner value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Crypto::ISigner, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Crypto::ISigner>(value));
}
constexpr Org::BouncyCastle::Crypto::ISigner Org::BouncyCastle::Cms::Org__BouncyCastle__Cms__CmsSignedDataStreamGenerator__SignerInfoGeneratorImpl::__get__sig() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Crypto::ISigner, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
 Org::BouncyCastle::Cms::Org__BouncyCastle__Cms__CmsSignedDataStreamGenerator__SignerInfoGeneratorImpl Org::BouncyCastle::Cms::Org__BouncyCastle__Cms__CmsSignedDataStreamGenerator__SignerInfoGeneratorImpl::New_ctor(Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator outer, Org::BouncyCastle::Crypto::AsymmetricKeyParameter key, Org::BouncyCastle::Asn1::Cms::SignerIdentifier signerIdentifier, ::StringW digestOID, ::StringW encOID, Org::BouncyCastle::Cms::CmsAttributeTableGenerator sAttr, Org::BouncyCastle::Cms::CmsAttributeTableGenerator unsAttr)  {
Org::BouncyCastle::Cms::Org__BouncyCastle__Cms__CmsSignedDataStreamGenerator__SignerInfoGeneratorImpl o{THROW_UNLESS(::il2cpp_utils::New<Org::BouncyCastle::Cms::Org__BouncyCastle__Cms__CmsSignedDataStreamGenerator__SignerInfoGeneratorImpl>(outer, key, signerIdentifier, digestOID, encOID, sAttr, unsAttr))};
return o;
}
 void Org::BouncyCastle::Cms::Org__BouncyCastle__Cms__CmsSignedDataStreamGenerator__SignerInfoGeneratorImpl::_ctor(Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator outer, Org::BouncyCastle::Crypto::AsymmetricKeyParameter key, Org::BouncyCastle::Asn1::Cms::SignerIdentifier signerIdentifier, ::StringW digestOID, ::StringW encOID, Org::BouncyCastle::Cms::CmsAttributeTableGenerator sAttr, Org::BouncyCastle::Cms::CmsAttributeTableGenerator unsAttr)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::Org__BouncyCastle__Cms__CmsSignedDataStreamGenerator__SignerInfoGeneratorImpl>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::AsymmetricKeyParameter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::Cms::SignerIdentifier>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Cms::CmsAttributeTableGenerator>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Cms::CmsAttributeTableGenerator>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, outer, key, signerIdentifier, digestOID, encOID, sAttr, unsAttr);
}
 Org::BouncyCastle::Asn1::Cms::SignerInfo Org::BouncyCastle::Cms::Org__BouncyCastle__Cms__CmsSignedDataStreamGenerator__SignerInfoGeneratorImpl::Generate(Org::BouncyCastle::Asn1::DerObjectIdentifier contentType, Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier digestAlgorithm, ::ArrayW<uint8_t> calculatedDigest)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::Org__BouncyCastle__Cms__CmsSignedDataStreamGenerator__SignerInfoGeneratorImpl>::get(),
                            "Generate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::DerObjectIdentifier>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Asn1::Cms::SignerInfo, false>(const_cast<void*>(instance), ___internal_method, contentType, digestAlgorithm, calculatedDigest);
}
//  Writing Method size for method: Org::BouncyCastle::Cms::Org__BouncyCastle__Cms__CmsSignedDataStreamGenerator__CmsSignedDataOutputStream._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Cms::Org__BouncyCastle__Cms__CmsSignedDataStreamGenerator__CmsSignedDataOutputStream::*)(Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator, System::IO::Stream, ::StringW, Org::BouncyCastle::Asn1::BerSequenceGenerator, Org::BouncyCastle::Asn1::BerSequenceGenerator, Org::BouncyCastle::Asn1::BerSequenceGenerator)>(&Org::BouncyCastle::Cms::Org__BouncyCastle__Cms__CmsSignedDataStreamGenerator__CmsSignedDataOutputStream::_ctor)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x116707c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::Org__BouncyCastle__Cms__CmsSignedDataStreamGenerator__CmsSignedDataOutputStream>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::Stream>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::BerSequenceGenerator>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::BerSequenceGenerator>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::BerSequenceGenerator>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Cms::Org__BouncyCastle__Cms__CmsSignedDataStreamGenerator__CmsSignedDataOutputStream.WriteByte
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Cms::Org__BouncyCastle__Cms__CmsSignedDataStreamGenerator__CmsSignedDataOutputStream::*)(uint8_t)>(&Org::BouncyCastle::Cms::Org__BouncyCastle__Cms__CmsSignedDataStreamGenerator__CmsSignedDataOutputStream::WriteByte)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x11680b8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Cms::Org__BouncyCastle__Cms__CmsSignedDataStreamGenerator__CmsSignedDataOutputStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::Org__BouncyCastle__Cms__CmsSignedDataStreamGenerator__CmsSignedDataOutputStream>::get(),
                                  38
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Cms::Org__BouncyCastle__Cms__CmsSignedDataStreamGenerator__CmsSignedDataOutputStream.Write
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Cms::Org__BouncyCastle__Cms__CmsSignedDataStreamGenerator__CmsSignedDataOutputStream::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&Org::BouncyCastle::Cms::Org__BouncyCastle__Cms__CmsSignedDataStreamGenerator__CmsSignedDataOutputStream::Write)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x11680dc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Cms::Org__BouncyCastle__Cms__CmsSignedDataStreamGenerator__CmsSignedDataOutputStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::Org__BouncyCastle__Cms__CmsSignedDataStreamGenerator__CmsSignedDataOutputStream>::get(),
                                  36
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Cms::Org__BouncyCastle__Cms__CmsSignedDataStreamGenerator__CmsSignedDataOutputStream.Close
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Cms::Org__BouncyCastle__Cms__CmsSignedDataStreamGenerator__CmsSignedDataOutputStream::*)()>(&Org::BouncyCastle::Cms::Org__BouncyCastle__Cms__CmsSignedDataStreamGenerator__CmsSignedDataOutputStream::Close)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x1168100;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Cms::Org__BouncyCastle__Cms__CmsSignedDataStreamGenerator__CmsSignedDataOutputStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::Org__BouncyCastle__Cms__CmsSignedDataStreamGenerator__CmsSignedDataOutputStream>::get(),
                                  19
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Cms::Org__BouncyCastle__Cms__CmsSignedDataStreamGenerator__CmsSignedDataOutputStream.DoClose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Cms::Org__BouncyCastle__Cms__CmsSignedDataStreamGenerator__CmsSignedDataOutputStream::*)()>(&Org::BouncyCastle::Cms::Org__BouncyCastle__Cms__CmsSignedDataStreamGenerator__CmsSignedDataOutputStream::DoClose)> {
  constexpr static std::size_t size = 0xfd0;
  constexpr static std::size_t addrs = 0x116811c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::Org__BouncyCastle__Cms__CmsSignedDataStreamGenerator__CmsSignedDataOutputStream>::get(),
                            "DoClose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Cms::Org__BouncyCastle__Cms__CmsSignedDataStreamGenerator__CmsSignedDataOutputStream.WriteToGenerator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(Org::BouncyCastle::Asn1::Asn1Generator, Org::BouncyCastle::Asn1::Asn1Encodable)>(&Org::BouncyCastle::Cms::Org__BouncyCastle__Cms__CmsSignedDataStreamGenerator__CmsSignedDataOutputStream::WriteToGenerator)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x11690ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::Org__BouncyCastle__Cms__CmsSignedDataStreamGenerator__CmsSignedDataOutputStream>::get(),
                            "WriteToGenerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::Asn1Generator>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::Asn1Encodable>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void Org::BouncyCastle::Cms::Org__BouncyCastle__Cms__CmsSignedDataStreamGenerator__CmsSignedDataOutputStream::__set_outer(Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator>(value));
}
constexpr Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator Org::BouncyCastle::Cms::Org__BouncyCastle__Cms__CmsSignedDataStreamGenerator__CmsSignedDataOutputStream::__get_outer() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Cms::Org__BouncyCastle__Cms__CmsSignedDataStreamGenerator__CmsSignedDataOutputStream::__set__out(System::IO::Stream value)  {
::cordl_internals::setInstanceField<System::IO::Stream, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::IO::Stream>(value));
}
constexpr System::IO::Stream Org::BouncyCastle::Cms::Org__BouncyCastle__Cms__CmsSignedDataStreamGenerator__CmsSignedDataOutputStream::__get__out() const {
return ::cordl_internals::getInstanceField<System::IO::Stream, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Cms::Org__BouncyCastle__Cms__CmsSignedDataStreamGenerator__CmsSignedDataOutputStream::__set__contentOID(Org::BouncyCastle::Asn1::DerObjectIdentifier value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Asn1::DerObjectIdentifier, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Asn1::DerObjectIdentifier>(value));
}
constexpr Org::BouncyCastle::Asn1::DerObjectIdentifier Org::BouncyCastle::Cms::Org__BouncyCastle__Cms__CmsSignedDataStreamGenerator__CmsSignedDataOutputStream::__get__contentOID() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Asn1::DerObjectIdentifier, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Cms::Org__BouncyCastle__Cms__CmsSignedDataStreamGenerator__CmsSignedDataOutputStream::__set__sGen(Org::BouncyCastle::Asn1::BerSequenceGenerator value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Asn1::BerSequenceGenerator, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Asn1::BerSequenceGenerator>(value));
}
constexpr Org::BouncyCastle::Asn1::BerSequenceGenerator Org::BouncyCastle::Cms::Org__BouncyCastle__Cms__CmsSignedDataStreamGenerator__CmsSignedDataOutputStream::__get__sGen() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Asn1::BerSequenceGenerator, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Cms::Org__BouncyCastle__Cms__CmsSignedDataStreamGenerator__CmsSignedDataOutputStream::__set__sigGen(Org::BouncyCastle::Asn1::BerSequenceGenerator value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Asn1::BerSequenceGenerator, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Asn1::BerSequenceGenerator>(value));
}
constexpr Org::BouncyCastle::Asn1::BerSequenceGenerator Org::BouncyCastle::Cms::Org__BouncyCastle__Cms__CmsSignedDataStreamGenerator__CmsSignedDataOutputStream::__get__sigGen() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Asn1::BerSequenceGenerator, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Cms::Org__BouncyCastle__Cms__CmsSignedDataStreamGenerator__CmsSignedDataOutputStream::__set__eiGen(Org::BouncyCastle::Asn1::BerSequenceGenerator value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Asn1::BerSequenceGenerator, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Asn1::BerSequenceGenerator>(value));
}
constexpr Org::BouncyCastle::Asn1::BerSequenceGenerator Org::BouncyCastle::Cms::Org__BouncyCastle__Cms__CmsSignedDataStreamGenerator__CmsSignedDataOutputStream::__get__eiGen() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Asn1::BerSequenceGenerator, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
 Org::BouncyCastle::Cms::Org__BouncyCastle__Cms__CmsSignedDataStreamGenerator__CmsSignedDataOutputStream Org::BouncyCastle::Cms::Org__BouncyCastle__Cms__CmsSignedDataStreamGenerator__CmsSignedDataOutputStream::New_ctor(Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator outer, System::IO::Stream outStream, ::StringW contentOID, Org::BouncyCastle::Asn1::BerSequenceGenerator sGen, Org::BouncyCastle::Asn1::BerSequenceGenerator sigGen, Org::BouncyCastle::Asn1::BerSequenceGenerator eiGen)  {
Org::BouncyCastle::Cms::Org__BouncyCastle__Cms__CmsSignedDataStreamGenerator__CmsSignedDataOutputStream o{THROW_UNLESS(::il2cpp_utils::New<Org::BouncyCastle::Cms::Org__BouncyCastle__Cms__CmsSignedDataStreamGenerator__CmsSignedDataOutputStream>(outer, outStream, contentOID, sGen, sigGen, eiGen))};
return o;
}
 void Org::BouncyCastle::Cms::Org__BouncyCastle__Cms__CmsSignedDataStreamGenerator__CmsSignedDataOutputStream::_ctor(Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator outer, System::IO::Stream outStream, ::StringW contentOID, Org::BouncyCastle::Asn1::BerSequenceGenerator sGen, Org::BouncyCastle::Asn1::BerSequenceGenerator sigGen, Org::BouncyCastle::Asn1::BerSequenceGenerator eiGen)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::Org__BouncyCastle__Cms__CmsSignedDataStreamGenerator__CmsSignedDataOutputStream>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::Stream>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::BerSequenceGenerator>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::BerSequenceGenerator>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::BerSequenceGenerator>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, outer, outStream, contentOID, sGen, sigGen, eiGen);
}
 void Org::BouncyCastle::Cms::Org__BouncyCastle__Cms__CmsSignedDataStreamGenerator__CmsSignedDataOutputStream::WriteByte(uint8_t b)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::Org__BouncyCastle__Cms__CmsSignedDataStreamGenerator__CmsSignedDataOutputStream>::get(),
                            "WriteByte",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, b);
}
 void Org::BouncyCastle::Cms::Org__BouncyCastle__Cms__CmsSignedDataStreamGenerator__CmsSignedDataOutputStream::Write(::ArrayW<uint8_t> bytes, int32_t off, int32_t len)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::Org__BouncyCastle__Cms__CmsSignedDataStreamGenerator__CmsSignedDataOutputStream>::get(),
                            "Write",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, bytes, off, len);
}
 void Org::BouncyCastle::Cms::Org__BouncyCastle__Cms__CmsSignedDataStreamGenerator__CmsSignedDataOutputStream::Close()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::Org__BouncyCastle__Cms__CmsSignedDataStreamGenerator__CmsSignedDataOutputStream>::get(),
                            "Close",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void Org::BouncyCastle::Cms::Org__BouncyCastle__Cms__CmsSignedDataStreamGenerator__CmsSignedDataOutputStream::DoClose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::Org__BouncyCastle__Cms__CmsSignedDataStreamGenerator__CmsSignedDataOutputStream>::get(),
                            "DoClose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void Org::BouncyCastle::Cms::Org__BouncyCastle__Cms__CmsSignedDataStreamGenerator__CmsSignedDataOutputStream::WriteToGenerator(Org::BouncyCastle::Asn1::Asn1Generator ag, Org::BouncyCastle::Asn1::Asn1Encodable ae)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::Org__BouncyCastle__Cms__CmsSignedDataStreamGenerator__CmsSignedDataOutputStream>::get(),
                            "WriteToGenerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::Asn1Generator>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::Asn1Encodable>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, ag, ae);
}
//  Writing Method size for method: Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator::*)()>(&Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator::_ctor)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x116441c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator::*)(Org::BouncyCastle::Security::SecureRandom)>(&Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator::_ctor)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1164a30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Security::SecureRandom>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator.SetBufferSize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator::*)(int32_t)>(&Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator::SetBufferSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1164b10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator>::get(),
                            "SetBufferSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator.AddDigests
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator::*)(::ArrayW<::StringW>)>(&Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator::AddDigests)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x1164b18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator>::get(),
                            "AddDigests",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator.AddDigests
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator::*)(System::Collections::IEnumerable)>(&Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator::AddDigests)> {
  constexpr static std::size_t size = 0x31c;
  constexpr static std::size_t addrs = 0x116469c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator>::get(),
                            "AddDigests",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::IEnumerable>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator.AddSigner
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator::*)(Org::BouncyCastle::Crypto::AsymmetricKeyParameter, Org::BouncyCastle::X509::X509Certificate, ::StringW)>(&Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator::AddSigner)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x1164d4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator>::get(),
                            "AddSigner",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::AsymmetricKeyParameter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::X509::X509Certificate>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator.AddSigner
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator::*)(Org::BouncyCastle::Crypto::AsymmetricKeyParameter, Org::BouncyCastle::X509::X509Certificate, ::StringW, ::StringW)>(&Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator::AddSigner)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x1164e90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator>::get(),
                            "AddSigner",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::AsymmetricKeyParameter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::X509::X509Certificate>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator.AddSigner
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator::*)(Org::BouncyCastle::Crypto::AsymmetricKeyParameter, Org::BouncyCastle::X509::X509Certificate, ::StringW, Org::BouncyCastle::Asn1::Cms::AttributeTable, Org::BouncyCastle::Asn1::Cms::AttributeTable)>(&Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator::AddSigner)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1164fc8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator>::get(),
                            "AddSigner",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::AsymmetricKeyParameter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::X509::X509Certificate>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::Cms::AttributeTable>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::Cms::AttributeTable>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator.AddSigner
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator::*)(Org::BouncyCastle::Crypto::AsymmetricKeyParameter, Org::BouncyCastle::X509::X509Certificate, ::StringW, ::StringW, Org::BouncyCastle::Asn1::Cms::AttributeTable, Org::BouncyCastle::Asn1::Cms::AttributeTable)>(&Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator::AddSigner)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x1165098;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator>::get(),
                            "AddSigner",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::AsymmetricKeyParameter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::X509::X509Certificate>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::Cms::AttributeTable>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::Cms::AttributeTable>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator.AddSigner
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator::*)(Org::BouncyCastle::Crypto::AsymmetricKeyParameter, Org::BouncyCastle::X509::X509Certificate, ::StringW, Org::BouncyCastle::Cms::CmsAttributeTableGenerator, Org::BouncyCastle::Cms::CmsAttributeTableGenerator)>(&Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator::AddSigner)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x1164dd8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator>::get(),
                            "AddSigner",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::AsymmetricKeyParameter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::X509::X509Certificate>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Cms::CmsAttributeTableGenerator>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Cms::CmsAttributeTableGenerator>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator.AddSigner
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator::*)(Org::BouncyCastle::Crypto::AsymmetricKeyParameter, Org::BouncyCastle::X509::X509Certificate, ::StringW, ::StringW, Org::BouncyCastle::Cms::CmsAttributeTableGenerator, Org::BouncyCastle::Cms::CmsAttributeTableGenerator)>(&Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator::AddSigner)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x1164f24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator>::get(),
                            "AddSigner",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::AsymmetricKeyParameter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::X509::X509Certificate>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Cms::CmsAttributeTableGenerator>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Cms::CmsAttributeTableGenerator>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator.AddSigner
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator::*)(Org::BouncyCastle::Crypto::AsymmetricKeyParameter, ::ArrayW<uint8_t>, ::StringW)>(&Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator::AddSigner)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x11652d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator>::get(),
                            "AddSigner",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::AsymmetricKeyParameter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator.AddSigner
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator::*)(Org::BouncyCastle::Crypto::AsymmetricKeyParameter, ::ArrayW<uint8_t>, ::StringW, ::StringW)>(&Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator::AddSigner)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x1165414;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator>::get(),
                            "AddSigner",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::AsymmetricKeyParameter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator.AddSigner
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator::*)(Org::BouncyCastle::Crypto::AsymmetricKeyParameter, ::ArrayW<uint8_t>, ::StringW, Org::BouncyCastle::Asn1::Cms::AttributeTable, Org::BouncyCastle::Asn1::Cms::AttributeTable)>(&Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator::AddSigner)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x116554c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator>::get(),
                            "AddSigner",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::AsymmetricKeyParameter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::Cms::AttributeTable>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::Cms::AttributeTable>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator.AddSigner
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator::*)(Org::BouncyCastle::Crypto::AsymmetricKeyParameter, ::ArrayW<uint8_t>, ::StringW, Org::BouncyCastle::Cms::CmsAttributeTableGenerator, Org::BouncyCastle::Cms::CmsAttributeTableGenerator)>(&Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator::AddSigner)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x116535c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator>::get(),
                            "AddSigner",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::AsymmetricKeyParameter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Cms::CmsAttributeTableGenerator>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Cms::CmsAttributeTableGenerator>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator.AddSigner
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator::*)(Org::BouncyCastle::Crypto::AsymmetricKeyParameter, ::ArrayW<uint8_t>, ::StringW, ::StringW, Org::BouncyCastle::Cms::CmsAttributeTableGenerator, Org::BouncyCastle::Cms::CmsAttributeTableGenerator)>(&Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator::AddSigner)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x11654a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator>::get(),
                            "AddSigner",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::AsymmetricKeyParameter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Cms::CmsAttributeTableGenerator>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Cms::CmsAttributeTableGenerator>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator.DoAddSigner
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator::*)(Org::BouncyCastle::Crypto::AsymmetricKeyParameter, Org::BouncyCastle::Asn1::Cms::SignerIdentifier, ::StringW, ::StringW, Org::BouncyCastle::Cms::CmsAttributeTableGenerator, Org::BouncyCastle::Cms::CmsAttributeTableGenerator)>(&Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator::DoAddSigner)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x1165170;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator>::get(),
                            "DoAddSigner",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::AsymmetricKeyParameter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::Cms::SignerIdentifier>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Cms::CmsAttributeTableGenerator>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Cms::CmsAttributeTableGenerator>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator.AddSignerCallback
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator::*)(Org::BouncyCastle::Cms::SignerInformation)>(&Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator::AddSignerCallback)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x116596c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator.Open
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IO::Stream (Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator::*)(System::IO::Stream)>(&Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator::Open)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1165b04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator>::get(),
                            "Open",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::Stream>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator.Open
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IO::Stream (Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator::*)(System::IO::Stream, bool)>(&Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator::Open)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x1165b0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator>::get(),
                            "Open",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::Stream>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator.Open
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IO::Stream (Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator::*)(System::IO::Stream, bool, System::IO::Stream)>(&Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator::Open)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x1165b88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator>::get(),
                            "Open",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::Stream>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::Stream>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator.Open
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IO::Stream (Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator::*)(System::IO::Stream, ::StringW, bool)>(&Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator::Open)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x11644ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator>::get(),
                            "Open",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::Stream>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator.Open
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IO::Stream (Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator::*)(System::IO::Stream, ::StringW, bool, System::IO::Stream)>(&Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator::Open)> {
  constexpr static std::size_t size = 0x848;
  constexpr static std::size_t addrs = 0x1165c10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator>::get(),
                            "Open",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::Stream>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::Stream>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator.RegisterDigestOid
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator::*)(::StringW)>(&Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator::RegisterDigestOid)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x11659a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator>::get(),
                            "RegisterDigestOid",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator.ConfigureDigest
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator::*)(::StringW)>(&Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator::ConfigureDigest)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x1164b1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator>::get(),
                            "ConfigureDigest",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator.Generate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator::*)(System::IO::Stream, ::StringW, bool, System::IO::Stream, Org::BouncyCastle::Cms::CmsProcessable)>(&Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator::Generate)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x1167124;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator>::get(),
                            "Generate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::Stream>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::Stream>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Cms::CmsProcessable>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator.CalculateVersion
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::DerInteger (Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator::*)(Org::BouncyCastle::Asn1::DerObjectIdentifier)>(&Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator::CalculateVersion)> {
  constexpr static std::size_t size = 0x720;
  constexpr static std::size_t addrs = 0x1166458;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator>::get(),
                            "CalculateVersion",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::DerObjectIdentifier>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator.CheckForVersion3
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator::*)(System::Collections::IList)>(&Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator::CheckForVersion3)> {
  constexpr static std::size_t size = 0x388;
  constexpr static std::size_t addrs = 0x1167230;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator>::get(),
                            "CheckForVersion3",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::IList>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator.AttachDigestsToOutputStream
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IO::Stream (*)(System::Collections::ICollection, System::IO::Stream)>(&Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator::AttachDigestsToOutputStream)> {
  constexpr static std::size_t size = 0x3b4;
  constexpr static std::size_t addrs = 0x1166cc8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator>::get(),
                            "AttachDigestsToOutputStream",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::ICollection>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::Stream>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator.GetSafeOutputStream
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IO::Stream (*)(System::IO::Stream)>(&Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator::GetSafeOutputStream)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x11675b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator>::get(),
                            "GetSafeOutputStream",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::Stream>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator.GetSafeTeeOutputStream
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IO::Stream (*)(System::IO::Stream, System::IO::Stream)>(&Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator::GetSafeTeeOutputStream)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1166c08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator>::get(),
                            "GetSafeTeeOutputStream",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::Stream>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::Stream>::get()}
                        )));
    return ___internal_method;
  }
};
 void Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator::__set_Helper(Org::BouncyCastle::Cms::CmsSignedHelper value)  {
::cordl_internals::setStaticField<Org::BouncyCastle::Cms::CmsSignedHelper, "Helper", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator>::get>(std::forward<Org::BouncyCastle::Cms::CmsSignedHelper>(value));
}
 Org::BouncyCastle::Cms::CmsSignedHelper Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator::__get_Helper()  {
return ::cordl_internals::getStaticField<Org::BouncyCastle::Cms::CmsSignedHelper, "Helper", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator>::get>();
}
constexpr void Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator::__set__signerInfs(System::Collections::IList value)  {
::cordl_internals::setInstanceField<System::Collections::IList, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::IList>(value));
}
constexpr System::Collections::IList Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator::__get__signerInfs() const {
return ::cordl_internals::getInstanceField<System::Collections::IList, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator::__set__messageDigestOids(Org::BouncyCastle::Utilities::Collections::ISet value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Utilities::Collections::ISet, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Utilities::Collections::ISet>(value));
}
constexpr Org::BouncyCastle::Utilities::Collections::ISet Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator::__get__messageDigestOids() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Utilities::Collections::ISet, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator::__set__messageDigests(System::Collections::IDictionary value)  {
::cordl_internals::setInstanceField<System::Collections::IDictionary, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::IDictionary>(value));
}
constexpr System::Collections::IDictionary Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator::__get__messageDigests() const {
return ::cordl_internals::getInstanceField<System::Collections::IDictionary, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator::__set__messageHashes(System::Collections::IDictionary value)  {
::cordl_internals::setInstanceField<System::Collections::IDictionary, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::IDictionary>(value));
}
constexpr System::Collections::IDictionary Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator::__get__messageHashes() const {
return ::cordl_internals::getInstanceField<System::Collections::IDictionary, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator::__set__messageDigestsLocked(bool value)  {
::cordl_internals::setInstanceField<bool, 0x60>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator::__get__messageDigestsLocked() const {
return ::cordl_internals::getInstanceField<bool, 0x60>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator::__set__bufferSize(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x64>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator::__get__bufferSize() const {
return ::cordl_internals::getInstanceField<int32_t, 0x64>(this->::bs_hook::Il2CppWrapperType::instance);
}
 Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator::New_ctor()  {
Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator o{THROW_UNLESS(::il2cpp_utils::New<Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator>())};
return o;
}
 void Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator::New_ctor(Org::BouncyCastle::Security::SecureRandom rand)  {
Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator o{THROW_UNLESS(::il2cpp_utils::New<Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator>(rand))};
return o;
}
 void Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator::_ctor(Org::BouncyCastle::Security::SecureRandom rand)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Security::SecureRandom>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, rand);
}
 void Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator::SetBufferSize(int32_t bufferSize)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator>::get(),
                            "SetBufferSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, bufferSize);
}
 void Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator::AddDigests(::ArrayW<::StringW> digestOids)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator>::get(),
                            "AddDigests",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, digestOids);
}
 void Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator::AddDigests(System::Collections::IEnumerable digestOids)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator>::get(),
                            "AddDigests",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::IEnumerable>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, digestOids);
}
 void Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator::AddSigner(Org::BouncyCastle::Crypto::AsymmetricKeyParameter privateKey, Org::BouncyCastle::X509::X509Certificate cert, ::StringW digestOid)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator>::get(),
                            "AddSigner",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::AsymmetricKeyParameter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::X509::X509Certificate>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, privateKey, cert, digestOid);
}
 void Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator::AddSigner(Org::BouncyCastle::Crypto::AsymmetricKeyParameter privateKey, Org::BouncyCastle::X509::X509Certificate cert, ::StringW encryptionOid, ::StringW digestOid)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator>::get(),
                            "AddSigner",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::AsymmetricKeyParameter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::X509::X509Certificate>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, privateKey, cert, encryptionOid, digestOid);
}
 void Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator::AddSigner(Org::BouncyCastle::Crypto::AsymmetricKeyParameter privateKey, Org::BouncyCastle::X509::X509Certificate cert, ::StringW digestOid, Org::BouncyCastle::Asn1::Cms::AttributeTable signedAttr, Org::BouncyCastle::Asn1::Cms::AttributeTable unsignedAttr)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator>::get(),
                            "AddSigner",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::AsymmetricKeyParameter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::X509::X509Certificate>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::Cms::AttributeTable>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::Cms::AttributeTable>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, privateKey, cert, digestOid, signedAttr, unsignedAttr);
}
 void Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator::AddSigner(Org::BouncyCastle::Crypto::AsymmetricKeyParameter privateKey, Org::BouncyCastle::X509::X509Certificate cert, ::StringW encryptionOid, ::StringW digestOid, Org::BouncyCastle::Asn1::Cms::AttributeTable signedAttr, Org::BouncyCastle::Asn1::Cms::AttributeTable unsignedAttr)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator>::get(),
                            "AddSigner",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::AsymmetricKeyParameter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::X509::X509Certificate>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::Cms::AttributeTable>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::Cms::AttributeTable>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, privateKey, cert, encryptionOid, digestOid, signedAttr, unsignedAttr);
}
 void Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator::AddSigner(Org::BouncyCastle::Crypto::AsymmetricKeyParameter privateKey, Org::BouncyCastle::X509::X509Certificate cert, ::StringW digestOid, Org::BouncyCastle::Cms::CmsAttributeTableGenerator signedAttrGenerator, Org::BouncyCastle::Cms::CmsAttributeTableGenerator unsignedAttrGenerator)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator>::get(),
                            "AddSigner",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::AsymmetricKeyParameter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::X509::X509Certificate>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Cms::CmsAttributeTableGenerator>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Cms::CmsAttributeTableGenerator>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, privateKey, cert, digestOid, signedAttrGenerator, unsignedAttrGenerator);
}
 void Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator::AddSigner(Org::BouncyCastle::Crypto::AsymmetricKeyParameter privateKey, Org::BouncyCastle::X509::X509Certificate cert, ::StringW encryptionOid, ::StringW digestOid, Org::BouncyCastle::Cms::CmsAttributeTableGenerator signedAttrGenerator, Org::BouncyCastle::Cms::CmsAttributeTableGenerator unsignedAttrGenerator)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator>::get(),
                            "AddSigner",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::AsymmetricKeyParameter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::X509::X509Certificate>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Cms::CmsAttributeTableGenerator>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Cms::CmsAttributeTableGenerator>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, privateKey, cert, encryptionOid, digestOid, signedAttrGenerator, unsignedAttrGenerator);
}
 void Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator::AddSigner(Org::BouncyCastle::Crypto::AsymmetricKeyParameter privateKey, ::ArrayW<uint8_t> subjectKeyID, ::StringW digestOid)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator>::get(),
                            "AddSigner",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::AsymmetricKeyParameter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, privateKey, subjectKeyID, digestOid);
}
 void Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator::AddSigner(Org::BouncyCastle::Crypto::AsymmetricKeyParameter privateKey, ::ArrayW<uint8_t> subjectKeyID, ::StringW encryptionOid, ::StringW digestOid)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator>::get(),
                            "AddSigner",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::AsymmetricKeyParameter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, privateKey, subjectKeyID, encryptionOid, digestOid);
}
 void Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator::AddSigner(Org::BouncyCastle::Crypto::AsymmetricKeyParameter privateKey, ::ArrayW<uint8_t> subjectKeyID, ::StringW digestOid, Org::BouncyCastle::Asn1::Cms::AttributeTable signedAttr, Org::BouncyCastle::Asn1::Cms::AttributeTable unsignedAttr)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator>::get(),
                            "AddSigner",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::AsymmetricKeyParameter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::Cms::AttributeTable>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::Cms::AttributeTable>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, privateKey, subjectKeyID, digestOid, signedAttr, unsignedAttr);
}
 void Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator::AddSigner(Org::BouncyCastle::Crypto::AsymmetricKeyParameter privateKey, ::ArrayW<uint8_t> subjectKeyID, ::StringW digestOid, Org::BouncyCastle::Cms::CmsAttributeTableGenerator signedAttrGenerator, Org::BouncyCastle::Cms::CmsAttributeTableGenerator unsignedAttrGenerator)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator>::get(),
                            "AddSigner",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::AsymmetricKeyParameter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Cms::CmsAttributeTableGenerator>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Cms::CmsAttributeTableGenerator>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, privateKey, subjectKeyID, digestOid, signedAttrGenerator, unsignedAttrGenerator);
}
 void Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator::AddSigner(Org::BouncyCastle::Crypto::AsymmetricKeyParameter privateKey, ::ArrayW<uint8_t> subjectKeyID, ::StringW encryptionOid, ::StringW digestOid, Org::BouncyCastle::Cms::CmsAttributeTableGenerator signedAttrGenerator, Org::BouncyCastle::Cms::CmsAttributeTableGenerator unsignedAttrGenerator)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator>::get(),
                            "AddSigner",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::AsymmetricKeyParameter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Cms::CmsAttributeTableGenerator>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Cms::CmsAttributeTableGenerator>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, privateKey, subjectKeyID, encryptionOid, digestOid, signedAttrGenerator, unsignedAttrGenerator);
}
 void Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator::DoAddSigner(Org::BouncyCastle::Crypto::AsymmetricKeyParameter privateKey, Org::BouncyCastle::Asn1::Cms::SignerIdentifier signerIdentifier, ::StringW encryptionOid, ::StringW digestOid, Org::BouncyCastle::Cms::CmsAttributeTableGenerator signedAttrGenerator, Org::BouncyCastle::Cms::CmsAttributeTableGenerator unsignedAttrGenerator)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator>::get(),
                            "DoAddSigner",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::AsymmetricKeyParameter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::Cms::SignerIdentifier>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Cms::CmsAttributeTableGenerator>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Cms::CmsAttributeTableGenerator>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, privateKey, signerIdentifier, encryptionOid, digestOid, signedAttrGenerator, unsignedAttrGenerator);
}
 void Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator::AddSignerCallback(Org::BouncyCastle::Cms::SignerInformation si)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator>::get(),
                            "AddSignerCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Cms::SignerInformation>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, si);
}
 System::IO::Stream Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator::Open(System::IO::Stream outStream)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator>::get(),
                            "Open",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::Stream>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::IO::Stream, false>(const_cast<void*>(instance), ___internal_method, outStream);
}
 System::IO::Stream Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator::Open(System::IO::Stream outStream, bool encapsulate)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator>::get(),
                            "Open",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::Stream>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::IO::Stream, false>(const_cast<void*>(instance), ___internal_method, outStream, encapsulate);
}
 System::IO::Stream Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator::Open(System::IO::Stream outStream, bool encapsulate, System::IO::Stream dataOutputStream)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator>::get(),
                            "Open",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::Stream>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::Stream>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::IO::Stream, false>(const_cast<void*>(instance), ___internal_method, outStream, encapsulate, dataOutputStream);
}
 System::IO::Stream Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator::Open(System::IO::Stream outStream, ::StringW signedContentType, bool encapsulate)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator>::get(),
                            "Open",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::Stream>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::IO::Stream, false>(const_cast<void*>(instance), ___internal_method, outStream, signedContentType, encapsulate);
}
 System::IO::Stream Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator::Open(System::IO::Stream outStream, ::StringW signedContentType, bool encapsulate, System::IO::Stream dataOutputStream)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator>::get(),
                            "Open",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::Stream>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::Stream>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::IO::Stream, false>(const_cast<void*>(instance), ___internal_method, outStream, signedContentType, encapsulate, dataOutputStream);
}
 void Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator::RegisterDigestOid(::StringW digestOid)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator>::get(),
                            "RegisterDigestOid",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, digestOid);
}
 void Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator::ConfigureDigest(::StringW digestOid)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator>::get(),
                            "ConfigureDigest",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, digestOid);
}
 void Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator::Generate(System::IO::Stream outStream, ::StringW eContentType, bool encapsulate, System::IO::Stream dataOutputStream, Org::BouncyCastle::Cms::CmsProcessable content)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator>::get(),
                            "Generate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::Stream>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::Stream>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Cms::CmsProcessable>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, outStream, eContentType, encapsulate, dataOutputStream, content);
}
 Org::BouncyCastle::Asn1::DerInteger Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator::CalculateVersion(Org::BouncyCastle::Asn1::DerObjectIdentifier contentOid)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator>::get(),
                            "CalculateVersion",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::DerObjectIdentifier>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Asn1::DerInteger, false>(const_cast<void*>(instance), ___internal_method, contentOid);
}
 bool Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator::CheckForVersion3(System::Collections::IList signerInfos)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator>::get(),
                            "CheckForVersion3",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::IList>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, signerInfos);
}
 System::IO::Stream Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator::AttachDigestsToOutputStream(System::Collections::ICollection digests, System::IO::Stream s)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator>::get(),
                            "AttachDigestsToOutputStream",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::ICollection>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::Stream>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::IO::Stream, false>(nullptr, ___internal_method, digests, s);
}
 System::IO::Stream Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator::GetSafeOutputStream(System::IO::Stream s)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator>::get(),
                            "GetSafeOutputStream",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::Stream>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::IO::Stream, false>(nullptr, ___internal_method, s);
}
 System::IO::Stream Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator::GetSafeTeeOutputStream(System::IO::Stream s1, System::IO::Stream s2)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator>::get(),
                            "GetSafeTeeOutputStream",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::Stream>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::Stream>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::IO::Stream, false>(nullptr, ___internal_method, s1, s2);
}
