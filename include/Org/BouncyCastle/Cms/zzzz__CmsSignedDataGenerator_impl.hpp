#pragma once
#include "Org/BouncyCastle/Cms/zzzz__CmsSignedGenerator_impl.hpp"
#include "Org/BouncyCastle/Cms/zzzz__CmsSignedDataGenerator_def.hpp"
#include "Org/BouncyCastle/Cms/zzzz__CmsAttributeTableGenerator_def.hpp"
#include "Org/BouncyCastle/Cms/zzzz__CmsSignedData_def.hpp"
#include "Org/BouncyCastle/Cms/zzzz__CmsSignedHelper_def.hpp"
#include "Org/BouncyCastle/Asn1/Cms/zzzz__AttributeTable_def.hpp"
#include "System/Collections/zzzz__IList_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__AsymmetricKeyParameter_def.hpp"
#include "Org/BouncyCastle/X509/zzzz__X509Certificate_def.hpp"
#include "Org/BouncyCastle/Cms/zzzz__CmsProcessable_def.hpp"
#include "Org/BouncyCastle/Cms/zzzz__SignerInformation_def.hpp"
#include "Org/BouncyCastle/Security/zzzz__SecureRandom_def.hpp"
#include "Org/BouncyCastle/Cms/zzzz__SignerInformationStore_def.hpp"
#include "Org/BouncyCastle/Cms/zzzz__SignerInfoGenerator_def.hpp"
#include "Org/BouncyCastle/Asn1/Cms/zzzz__SignerIdentifier_def.hpp"
#include "Org/BouncyCastle/Cms/zzzz__CmsSignedGenerator_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerObjectIdentifier_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ISignatureFactory_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__AlgorithmIdentifier_def.hpp"
#include "Org/BouncyCastle/Asn1/Cms/zzzz__SignerInfo_def.hpp"
//  Writing Method size for method: Org::BouncyCastle::Cms::Org__BouncyCastle__Cms__CmsSignedDataGenerator__SignerInf._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Cms::Org__BouncyCastle__Cms__CmsSignedDataGenerator__SignerInf::*)(Org::BouncyCastle::Cms::CmsSignedGenerator, Org::BouncyCastle::Crypto::AsymmetricKeyParameter, Org::BouncyCastle::Asn1::Cms::SignerIdentifier, ::StringW, ::StringW, Org::BouncyCastle::Cms::CmsAttributeTableGenerator, Org::BouncyCastle::Cms::CmsAttributeTableGenerator, Org::BouncyCastle::Asn1::Cms::AttributeTable)>(&Org::BouncyCastle::Cms::Org__BouncyCastle__Cms__CmsSignedDataGenerator__SignerInf::_ctor)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x115fde0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::Org__BouncyCastle__Cms__CmsSignedDataGenerator__SignerInf>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Cms::CmsSignedGenerator>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::AsymmetricKeyParameter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::Cms::SignerIdentifier>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Cms::CmsAttributeTableGenerator>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Cms::CmsAttributeTableGenerator>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::Cms::AttributeTable>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Cms::Org__BouncyCastle__Cms__CmsSignedDataGenerator__SignerInf._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Cms::Org__BouncyCastle__Cms__CmsSignedDataGenerator__SignerInf::*)(Org::BouncyCastle::Cms::CmsSignedGenerator, Org::BouncyCastle::Crypto::ISignatureFactory, Org::BouncyCastle::Asn1::Cms::SignerIdentifier, Org::BouncyCastle::Cms::CmsAttributeTableGenerator, Org::BouncyCastle::Cms::CmsAttributeTableGenerator, Org::BouncyCastle::Asn1::Cms::AttributeTable)>(&Org::BouncyCastle::Cms::Org__BouncyCastle__Cms__CmsSignedDataGenerator__SignerInf::_ctor)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x115fba0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::Org__BouncyCastle__Cms__CmsSignedDataGenerator__SignerInf>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Cms::CmsSignedGenerator>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::ISignatureFactory>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::Cms::SignerIdentifier>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Cms::CmsAttributeTableGenerator>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Cms::CmsAttributeTableGenerator>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::Cms::AttributeTable>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Cms::Org__BouncyCastle__Cms__CmsSignedDataGenerator__SignerInf.get_DigestAlgorithmID
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier (Org::BouncyCastle::Cms::Org__BouncyCastle__Cms__CmsSignedDataGenerator__SignerInf::*)()>(&Org::BouncyCastle::Cms::Org__BouncyCastle__Cms__CmsSignedDataGenerator__SignerInf::get_DigestAlgorithmID)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x1160e24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::Org__BouncyCastle__Cms__CmsSignedDataGenerator__SignerInf>::get(),
                            "get_DigestAlgorithmID",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Cms::Org__BouncyCastle__Cms__CmsSignedDataGenerator__SignerInf.get_SignedAttributes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Cms::CmsAttributeTableGenerator (Org::BouncyCastle::Cms::Org__BouncyCastle__Cms__CmsSignedDataGenerator__SignerInf::*)()>(&Org::BouncyCastle::Cms::Org__BouncyCastle__Cms__CmsSignedDataGenerator__SignerInf::get_SignedAttributes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x11623d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::Org__BouncyCastle__Cms__CmsSignedDataGenerator__SignerInf>::get(),
                            "get_SignedAttributes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Cms::Org__BouncyCastle__Cms__CmsSignedDataGenerator__SignerInf.get_UnsignedAttributes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Cms::CmsAttributeTableGenerator (Org::BouncyCastle::Cms::Org__BouncyCastle__Cms__CmsSignedDataGenerator__SignerInf::*)()>(&Org::BouncyCastle::Cms::Org__BouncyCastle__Cms__CmsSignedDataGenerator__SignerInf::get_UnsignedAttributes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x11623e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::Org__BouncyCastle__Cms__CmsSignedDataGenerator__SignerInf>::get(),
                            "get_UnsignedAttributes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Cms::Org__BouncyCastle__Cms__CmsSignedDataGenerator__SignerInf.ToSignerInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::Cms::SignerInfo (Org::BouncyCastle::Cms::Org__BouncyCastle__Cms__CmsSignedDataGenerator__SignerInf::*)(Org::BouncyCastle::Asn1::DerObjectIdentifier, Org::BouncyCastle::Cms::CmsProcessable, Org::BouncyCastle::Security::SecureRandom)>(&Org::BouncyCastle::Cms::Org__BouncyCastle__Cms__CmsSignedDataGenerator__SignerInf::ToSignerInfo)> {
  constexpr static std::size_t size = 0xb58;
  constexpr static std::size_t addrs = 0x1160ef8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::Org__BouncyCastle__Cms__CmsSignedDataGenerator__SignerInf>::get(),
                            "ToSignerInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::DerObjectIdentifier>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Cms::CmsProcessable>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Security::SecureRandom>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void Org::BouncyCastle::Cms::Org__BouncyCastle__Cms__CmsSignedDataGenerator__SignerInf::__set_outer(Org::BouncyCastle::Cms::CmsSignedGenerator value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Cms::CmsSignedGenerator, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Cms::CmsSignedGenerator>(value));
}
constexpr Org::BouncyCastle::Cms::CmsSignedGenerator Org::BouncyCastle::Cms::Org__BouncyCastle__Cms__CmsSignedDataGenerator__SignerInf::__get_outer() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Cms::CmsSignedGenerator, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Cms::Org__BouncyCastle__Cms__CmsSignedDataGenerator__SignerInf::__set_sigCalc(Org::BouncyCastle::Crypto::ISignatureFactory value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Crypto::ISignatureFactory, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Crypto::ISignatureFactory>(value));
}
constexpr Org::BouncyCastle::Crypto::ISignatureFactory Org::BouncyCastle::Cms::Org__BouncyCastle__Cms__CmsSignedDataGenerator__SignerInf::__get_sigCalc() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Crypto::ISignatureFactory, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Cms::Org__BouncyCastle__Cms__CmsSignedDataGenerator__SignerInf::__set_signerIdentifier(Org::BouncyCastle::Asn1::Cms::SignerIdentifier value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Asn1::Cms::SignerIdentifier, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Asn1::Cms::SignerIdentifier>(value));
}
constexpr Org::BouncyCastle::Asn1::Cms::SignerIdentifier Org::BouncyCastle::Cms::Org__BouncyCastle__Cms__CmsSignedDataGenerator__SignerInf::__get_signerIdentifier() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Asn1::Cms::SignerIdentifier, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Cms::Org__BouncyCastle__Cms__CmsSignedDataGenerator__SignerInf::__set_digestOID(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW Org::BouncyCastle::Cms::Org__BouncyCastle__Cms__CmsSignedDataGenerator__SignerInf::__get_digestOID() const {
return ::cordl_internals::getInstanceField<::StringW, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Cms::Org__BouncyCastle__Cms__CmsSignedDataGenerator__SignerInf::__set_encOID(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW Org::BouncyCastle::Cms::Org__BouncyCastle__Cms__CmsSignedDataGenerator__SignerInf::__get_encOID() const {
return ::cordl_internals::getInstanceField<::StringW, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Cms::Org__BouncyCastle__Cms__CmsSignedDataGenerator__SignerInf::__set_sAttr(Org::BouncyCastle::Cms::CmsAttributeTableGenerator value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Cms::CmsAttributeTableGenerator, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Cms::CmsAttributeTableGenerator>(value));
}
constexpr Org::BouncyCastle::Cms::CmsAttributeTableGenerator Org::BouncyCastle::Cms::Org__BouncyCastle__Cms__CmsSignedDataGenerator__SignerInf::__get_sAttr() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Cms::CmsAttributeTableGenerator, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Cms::Org__BouncyCastle__Cms__CmsSignedDataGenerator__SignerInf::__set_unsAttr(Org::BouncyCastle::Cms::CmsAttributeTableGenerator value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Cms::CmsAttributeTableGenerator, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Cms::CmsAttributeTableGenerator>(value));
}
constexpr Org::BouncyCastle::Cms::CmsAttributeTableGenerator Org::BouncyCastle::Cms::Org__BouncyCastle__Cms__CmsSignedDataGenerator__SignerInf::__get_unsAttr() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Cms::CmsAttributeTableGenerator, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Cms::Org__BouncyCastle__Cms__CmsSignedDataGenerator__SignerInf::__set_baseSignedTable(Org::BouncyCastle::Asn1::Cms::AttributeTable value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Asn1::Cms::AttributeTable, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Asn1::Cms::AttributeTable>(value));
}
constexpr Org::BouncyCastle::Asn1::Cms::AttributeTable Org::BouncyCastle::Cms::Org__BouncyCastle__Cms__CmsSignedDataGenerator__SignerInf::__get_baseSignedTable() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Asn1::Cms::AttributeTable, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "outer", ty: "Org::BouncyCastle::Cms::CmsSignedGenerator", modifiers: "", def_value: None }, CppParam { name: "key", ty: "Org::BouncyCastle::Crypto::AsymmetricKeyParameter", modifiers: "", def_value: None }, CppParam { name: "signerIdentifier", ty: "Org::BouncyCastle::Asn1::Cms::SignerIdentifier", modifiers: "", def_value: None }, CppParam { name: "digestOID", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "encOID", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "sAttr", ty: "Org::BouncyCastle::Cms::CmsAttributeTableGenerator", modifiers: "", def_value: None }, CppParam { name: "unsAttr", ty: "Org::BouncyCastle::Cms::CmsAttributeTableGenerator", modifiers: "", def_value: None }, CppParam { name: "baseSignedTable", ty: "Org::BouncyCastle::Asn1::Cms::AttributeTable", modifiers: "", def_value: None }]
 Org::BouncyCastle::Cms::Org__BouncyCastle__Cms__CmsSignedDataGenerator__SignerInf::Org__BouncyCastle__Cms__CmsSignedDataGenerator__SignerInf(Org::BouncyCastle::Cms::CmsSignedGenerator outer, Org::BouncyCastle::Crypto::AsymmetricKeyParameter key, Org::BouncyCastle::Asn1::Cms::SignerIdentifier signerIdentifier, ::StringW digestOID, ::StringW encOID, Org::BouncyCastle::Cms::CmsAttributeTableGenerator sAttr, Org::BouncyCastle::Cms::CmsAttributeTableGenerator unsAttr, Org::BouncyCastle::Asn1::Cms::AttributeTable baseSignedTable)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<Org__BouncyCastle__Cms__CmsSignedDataGenerator__SignerInf>(outer, key, signerIdentifier, digestOID, encOID, sAttr, unsAttr, baseSignedTable))) {}
 void Org::BouncyCastle::Cms::Org__BouncyCastle__Cms__CmsSignedDataGenerator__SignerInf::_ctor(Org::BouncyCastle::Cms::CmsSignedGenerator outer, Org::BouncyCastle::Crypto::AsymmetricKeyParameter key, Org::BouncyCastle::Asn1::Cms::SignerIdentifier signerIdentifier, ::StringW digestOID, ::StringW encOID, Org::BouncyCastle::Cms::CmsAttributeTableGenerator sAttr, Org::BouncyCastle::Cms::CmsAttributeTableGenerator unsAttr, Org::BouncyCastle::Asn1::Cms::AttributeTable baseSignedTable)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::Org__BouncyCastle__Cms__CmsSignedDataGenerator__SignerInf>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Cms::CmsSignedGenerator>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::AsymmetricKeyParameter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::Cms::SignerIdentifier>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Cms::CmsAttributeTableGenerator>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Cms::CmsAttributeTableGenerator>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::Cms::AttributeTable>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, outer, key, signerIdentifier, digestOID, encOID, sAttr, unsAttr, baseSignedTable);
}
// Ctor Parameters [CppParam { name: "outer", ty: "Org::BouncyCastle::Cms::CmsSignedGenerator", modifiers: "", def_value: None }, CppParam { name: "sigCalc", ty: "Org::BouncyCastle::Crypto::ISignatureFactory", modifiers: "", def_value: None }, CppParam { name: "signerIdentifier", ty: "Org::BouncyCastle::Asn1::Cms::SignerIdentifier", modifiers: "", def_value: None }, CppParam { name: "sAttr", ty: "Org::BouncyCastle::Cms::CmsAttributeTableGenerator", modifiers: "", def_value: None }, CppParam { name: "unsAttr", ty: "Org::BouncyCastle::Cms::CmsAttributeTableGenerator", modifiers: "", def_value: None }, CppParam { name: "baseSignedTable", ty: "Org::BouncyCastle::Asn1::Cms::AttributeTable", modifiers: "", def_value: None }]
 Org::BouncyCastle::Cms::Org__BouncyCastle__Cms__CmsSignedDataGenerator__SignerInf::Org__BouncyCastle__Cms__CmsSignedDataGenerator__SignerInf(Org::BouncyCastle::Cms::CmsSignedGenerator outer, Org::BouncyCastle::Crypto::ISignatureFactory sigCalc, Org::BouncyCastle::Asn1::Cms::SignerIdentifier signerIdentifier, Org::BouncyCastle::Cms::CmsAttributeTableGenerator sAttr, Org::BouncyCastle::Cms::CmsAttributeTableGenerator unsAttr, Org::BouncyCastle::Asn1::Cms::AttributeTable baseSignedTable)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<Org__BouncyCastle__Cms__CmsSignedDataGenerator__SignerInf>(outer, sigCalc, signerIdentifier, sAttr, unsAttr, baseSignedTable))) {}
 void Org::BouncyCastle::Cms::Org__BouncyCastle__Cms__CmsSignedDataGenerator__SignerInf::_ctor(Org::BouncyCastle::Cms::CmsSignedGenerator outer, Org::BouncyCastle::Crypto::ISignatureFactory sigCalc, Org::BouncyCastle::Asn1::Cms::SignerIdentifier signerIdentifier, Org::BouncyCastle::Cms::CmsAttributeTableGenerator sAttr, Org::BouncyCastle::Cms::CmsAttributeTableGenerator unsAttr, Org::BouncyCastle::Asn1::Cms::AttributeTable baseSignedTable)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::Org__BouncyCastle__Cms__CmsSignedDataGenerator__SignerInf>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Cms::CmsSignedGenerator>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::ISignatureFactory>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::Cms::SignerIdentifier>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Cms::CmsAttributeTableGenerator>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Cms::CmsAttributeTableGenerator>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::Cms::AttributeTable>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, outer, sigCalc, signerIdentifier, sAttr, unsAttr, baseSignedTable);
}
 Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier Org::BouncyCastle::Cms::Org__BouncyCastle__Cms__CmsSignedDataGenerator__SignerInf::get_DigestAlgorithmID()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::Org__BouncyCastle__Cms__CmsSignedDataGenerator__SignerInf>::get(),
                            "get_DigestAlgorithmID",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier, false>(const_cast<void*>(instance), ___internal_method);
}
 Org::BouncyCastle::Cms::CmsAttributeTableGenerator Org::BouncyCastle::Cms::Org__BouncyCastle__Cms__CmsSignedDataGenerator__SignerInf::get_SignedAttributes()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::Org__BouncyCastle__Cms__CmsSignedDataGenerator__SignerInf>::get(),
                            "get_SignedAttributes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Cms::CmsAttributeTableGenerator, false>(const_cast<void*>(instance), ___internal_method);
}
 Org::BouncyCastle::Cms::CmsAttributeTableGenerator Org::BouncyCastle::Cms::Org__BouncyCastle__Cms__CmsSignedDataGenerator__SignerInf::get_UnsignedAttributes()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::Org__BouncyCastle__Cms__CmsSignedDataGenerator__SignerInf>::get(),
                            "get_UnsignedAttributes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Cms::CmsAttributeTableGenerator, false>(const_cast<void*>(instance), ___internal_method);
}
 Org::BouncyCastle::Asn1::Cms::SignerInfo Org::BouncyCastle::Cms::Org__BouncyCastle__Cms__CmsSignedDataGenerator__SignerInf::ToSignerInfo(Org::BouncyCastle::Asn1::DerObjectIdentifier contentType, Org::BouncyCastle::Cms::CmsProcessable content, Org::BouncyCastle::Security::SecureRandom random)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::Org__BouncyCastle__Cms__CmsSignedDataGenerator__SignerInf>::get(),
                            "ToSignerInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::DerObjectIdentifier>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Cms::CmsProcessable>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Security::SecureRandom>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Asn1::Cms::SignerInfo, false>(const_cast<void*>(instance), ___internal_method, contentType, content, random);
}
//  Writing Method size for method: Org::BouncyCastle::Cms::CmsSignedDataGenerator._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Cms::CmsSignedDataGenerator::*)()>(&Org::BouncyCastle::Cms::CmsSignedDataGenerator::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x115e914;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsSignedDataGenerator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Cms::CmsSignedDataGenerator._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Cms::CmsSignedDataGenerator::*)(Org::BouncyCastle::Security::SecureRandom)>(&Org::BouncyCastle::Cms::CmsSignedDataGenerator::_ctor)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x115e998;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsSignedDataGenerator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Security::SecureRandom>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Cms::CmsSignedDataGenerator.AddSigner
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Cms::CmsSignedDataGenerator::*)(Org::BouncyCastle::Crypto::AsymmetricKeyParameter, Org::BouncyCastle::X509::X509Certificate, ::StringW)>(&Org::BouncyCastle::Cms::CmsSignedDataGenerator::AddSigner)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x115ea2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsSignedDataGenerator>::get(),
                            "AddSigner",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::AsymmetricKeyParameter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::X509::X509Certificate>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Cms::CmsSignedDataGenerator.AddSigner
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Cms::CmsSignedDataGenerator::*)(Org::BouncyCastle::Crypto::AsymmetricKeyParameter, Org::BouncyCastle::X509::X509Certificate, ::StringW, ::StringW)>(&Org::BouncyCastle::Cms::CmsSignedDataGenerator::AddSigner)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x115efac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsSignedDataGenerator>::get(),
                            "AddSigner",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::AsymmetricKeyParameter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::X509::X509Certificate>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Cms::CmsSignedDataGenerator.AddSigner
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Cms::CmsSignedDataGenerator::*)(Org::BouncyCastle::Crypto::AsymmetricKeyParameter, ::ArrayW<uint8_t>, ::StringW)>(&Org::BouncyCastle::Cms::CmsSignedDataGenerator::AddSigner)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x115f220;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsSignedDataGenerator>::get(),
                            "AddSigner",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::AsymmetricKeyParameter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Cms::CmsSignedDataGenerator.AddSigner
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Cms::CmsSignedDataGenerator::*)(Org::BouncyCastle::Crypto::AsymmetricKeyParameter, ::ArrayW<uint8_t>, ::StringW, ::StringW)>(&Org::BouncyCastle::Cms::CmsSignedDataGenerator::AddSigner)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x115f2c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsSignedDataGenerator>::get(),
                            "AddSigner",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::AsymmetricKeyParameter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Cms::CmsSignedDataGenerator.AddSigner
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Cms::CmsSignedDataGenerator::*)(Org::BouncyCastle::Crypto::AsymmetricKeyParameter, Org::BouncyCastle::X509::X509Certificate, ::StringW, Org::BouncyCastle::Asn1::Cms::AttributeTable, Org::BouncyCastle::Asn1::Cms::AttributeTable)>(&Org::BouncyCastle::Cms::CmsSignedDataGenerator::AddSigner)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x115f398;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsSignedDataGenerator>::get(),
                            "AddSigner",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::AsymmetricKeyParameter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::X509::X509Certificate>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::Cms::AttributeTable>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::Cms::AttributeTable>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Cms::CmsSignedDataGenerator.AddSigner
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Cms::CmsSignedDataGenerator::*)(Org::BouncyCastle::Crypto::AsymmetricKeyParameter, Org::BouncyCastle::X509::X509Certificate, ::StringW, ::StringW, Org::BouncyCastle::Asn1::Cms::AttributeTable, Org::BouncyCastle::Asn1::Cms::AttributeTable)>(&Org::BouncyCastle::Cms::CmsSignedDataGenerator::AddSigner)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x115f450;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsSignedDataGenerator>::get(),
                            "AddSigner",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::AsymmetricKeyParameter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::X509::X509Certificate>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::Cms::AttributeTable>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::Cms::AttributeTable>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Cms::CmsSignedDataGenerator.AddSigner
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Cms::CmsSignedDataGenerator::*)(Org::BouncyCastle::Crypto::AsymmetricKeyParameter, ::ArrayW<uint8_t>, ::StringW, Org::BouncyCastle::Asn1::Cms::AttributeTable, Org::BouncyCastle::Asn1::Cms::AttributeTable)>(&Org::BouncyCastle::Cms::CmsSignedDataGenerator::AddSigner)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x115f5ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsSignedDataGenerator>::get(),
                            "AddSigner",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::AsymmetricKeyParameter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::Cms::AttributeTable>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::Cms::AttributeTable>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Cms::CmsSignedDataGenerator.AddSigner
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Cms::CmsSignedDataGenerator::*)(Org::BouncyCastle::Crypto::AsymmetricKeyParameter, ::ArrayW<uint8_t>, ::StringW, ::StringW, Org::BouncyCastle::Asn1::Cms::AttributeTable, Org::BouncyCastle::Asn1::Cms::AttributeTable)>(&Org::BouncyCastle::Cms::CmsSignedDataGenerator::AddSigner)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x115f6a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsSignedDataGenerator>::get(),
                            "AddSigner",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::AsymmetricKeyParameter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::Cms::AttributeTable>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::Cms::AttributeTable>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Cms::CmsSignedDataGenerator.AddSigner
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Cms::CmsSignedDataGenerator::*)(Org::BouncyCastle::Crypto::AsymmetricKeyParameter, Org::BouncyCastle::X509::X509Certificate, ::StringW, Org::BouncyCastle::Cms::CmsAttributeTableGenerator, Org::BouncyCastle::Cms::CmsAttributeTableGenerator)>(&Org::BouncyCastle::Cms::CmsSignedDataGenerator::AddSigner)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x115f7c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsSignedDataGenerator>::get(),
                            "AddSigner",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::AsymmetricKeyParameter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::X509::X509Certificate>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Cms::CmsAttributeTableGenerator>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Cms::CmsAttributeTableGenerator>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Cms::CmsSignedDataGenerator.AddSigner
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Cms::CmsSignedDataGenerator::*)(Org::BouncyCastle::Crypto::AsymmetricKeyParameter, Org::BouncyCastle::X509::X509Certificate, ::StringW, ::StringW, Org::BouncyCastle::Cms::CmsAttributeTableGenerator, Org::BouncyCastle::Cms::CmsAttributeTableGenerator)>(&Org::BouncyCastle::Cms::CmsSignedDataGenerator::AddSigner)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x115f878;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsSignedDataGenerator>::get(),
                            "AddSigner",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::AsymmetricKeyParameter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::X509::X509Certificate>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Cms::CmsAttributeTableGenerator>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Cms::CmsAttributeTableGenerator>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Cms::CmsSignedDataGenerator.AddSigner
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Cms::CmsSignedDataGenerator::*)(Org::BouncyCastle::Crypto::AsymmetricKeyParameter, ::ArrayW<uint8_t>, ::StringW, Org::BouncyCastle::Cms::CmsAttributeTableGenerator, Org::BouncyCastle::Cms::CmsAttributeTableGenerator)>(&Org::BouncyCastle::Cms::CmsSignedDataGenerator::AddSigner)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x115f92c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsSignedDataGenerator>::get(),
                            "AddSigner",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::AsymmetricKeyParameter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Cms::CmsAttributeTableGenerator>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Cms::CmsAttributeTableGenerator>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Cms::CmsSignedDataGenerator.AddSigner
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Cms::CmsSignedDataGenerator::*)(Org::BouncyCastle::Crypto::AsymmetricKeyParameter, ::ArrayW<uint8_t>, ::StringW, ::StringW, Org::BouncyCastle::Cms::CmsAttributeTableGenerator, Org::BouncyCastle::Cms::CmsAttributeTableGenerator)>(&Org::BouncyCastle::Cms::CmsSignedDataGenerator::AddSigner)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x115f9e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsSignedDataGenerator>::get(),
                            "AddSigner",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::AsymmetricKeyParameter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Cms::CmsAttributeTableGenerator>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Cms::CmsAttributeTableGenerator>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Cms::CmsSignedDataGenerator.AddSignerInfoGenerator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Cms::CmsSignedDataGenerator::*)(Org::BouncyCastle::Cms::SignerInfoGenerator)>(&Org::BouncyCastle::Cms::CmsSignedDataGenerator::AddSignerInfoGenerator)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x115fa98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsSignedDataGenerator>::get(),
                            "AddSignerInfoGenerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Cms::SignerInfoGenerator>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Cms::CmsSignedDataGenerator.doAddSigner
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Cms::CmsSignedDataGenerator::*)(Org::BouncyCastle::Crypto::AsymmetricKeyParameter, Org::BouncyCastle::Asn1::Cms::SignerIdentifier, ::StringW, ::StringW, Org::BouncyCastle::Cms::CmsAttributeTableGenerator, Org::BouncyCastle::Cms::CmsAttributeTableGenerator, Org::BouncyCastle::Asn1::Cms::AttributeTable)>(&Org::BouncyCastle::Cms::CmsSignedDataGenerator::doAddSigner)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x115f0ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsSignedDataGenerator>::get(),
                            "doAddSigner",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::AsymmetricKeyParameter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::Cms::SignerIdentifier>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Cms::CmsAttributeTableGenerator>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Cms::CmsAttributeTableGenerator>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::Cms::AttributeTable>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Cms::CmsSignedDataGenerator.Generate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Cms::CmsSignedData (Org::BouncyCastle::Cms::CmsSignedDataGenerator::*)(Org::BouncyCastle::Cms::CmsProcessable)>(&Org::BouncyCastle::Cms::CmsSignedDataGenerator::Generate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x115ff2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsSignedDataGenerator>::get(),
                            "Generate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Cms::CmsProcessable>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Cms::CmsSignedDataGenerator.Generate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Cms::CmsSignedData (Org::BouncyCastle::Cms::CmsSignedDataGenerator::*)(::StringW, Org::BouncyCastle::Cms::CmsProcessable, bool)>(&Org::BouncyCastle::Cms::CmsSignedDataGenerator::Generate)> {
  constexpr static std::size_t size = 0xe78;
  constexpr static std::size_t addrs = 0x115ffac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsSignedDataGenerator>::get(),
                            "Generate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Cms::CmsProcessable>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Cms::CmsSignedDataGenerator.Generate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Cms::CmsSignedData (Org::BouncyCastle::Cms::CmsSignedDataGenerator::*)(Org::BouncyCastle::Cms::CmsProcessable, bool)>(&Org::BouncyCastle::Cms::CmsSignedDataGenerator::Generate)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x115ff34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsSignedDataGenerator>::get(),
                            "Generate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Cms::CmsProcessable>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Cms::CmsSignedDataGenerator.GenerateCounterSigners
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Cms::SignerInformationStore (Org::BouncyCastle::Cms::CmsSignedDataGenerator::*)(Org::BouncyCastle::Cms::SignerInformation)>(&Org::BouncyCastle::Cms::CmsSignedDataGenerator::GenerateCounterSigners)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x1161de0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsSignedDataGenerator>::get(),
                            "GenerateCounterSigners",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Cms::SignerInformation>::get()}
                        )));
    return ___internal_method;
  }
};
 void Org::BouncyCastle::Cms::CmsSignedDataGenerator::__set_Helper(Org::BouncyCastle::Cms::CmsSignedHelper value)  {
::cordl_internals::setStaticField<Org::BouncyCastle::Cms::CmsSignedHelper, "Helper", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsSignedDataGenerator>::get>(std::forward<Org::BouncyCastle::Cms::CmsSignedHelper>(value));
}
 Org::BouncyCastle::Cms::CmsSignedHelper Org::BouncyCastle::Cms::CmsSignedDataGenerator::__get_Helper()  {
return ::cordl_internals::getStaticField<Org::BouncyCastle::Cms::CmsSignedHelper, "Helper", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsSignedDataGenerator>::get>();
}
constexpr void Org::BouncyCastle::Cms::CmsSignedDataGenerator::__set_signerInfs(System::Collections::IList value)  {
::cordl_internals::setInstanceField<System::Collections::IList, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::IList>(value));
}
constexpr System::Collections::IList Org::BouncyCastle::Cms::CmsSignedDataGenerator::__get_signerInfs() const {
return ::cordl_internals::getInstanceField<System::Collections::IList, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 Org::BouncyCastle::Cms::CmsSignedDataGenerator::CmsSignedDataGenerator()  : Org::BouncyCastle::Cms::CmsSignedGenerator(THROW_UNLESS(::il2cpp_utils::New<CmsSignedDataGenerator>())) {}
 void Org::BouncyCastle::Cms::CmsSignedDataGenerator::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsSignedDataGenerator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters [CppParam { name: "rand", ty: "Org::BouncyCastle::Security::SecureRandom", modifiers: "", def_value: None }]
 Org::BouncyCastle::Cms::CmsSignedDataGenerator::CmsSignedDataGenerator(Org::BouncyCastle::Security::SecureRandom rand)  : Org::BouncyCastle::Cms::CmsSignedGenerator(THROW_UNLESS(::il2cpp_utils::New<CmsSignedDataGenerator>(rand))) {}
 void Org::BouncyCastle::Cms::CmsSignedDataGenerator::_ctor(Org::BouncyCastle::Security::SecureRandom rand)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsSignedDataGenerator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Security::SecureRandom>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, rand);
}
 void Org::BouncyCastle::Cms::CmsSignedDataGenerator::AddSigner(Org::BouncyCastle::Crypto::AsymmetricKeyParameter privateKey, Org::BouncyCastle::X509::X509Certificate cert, ::StringW digestOID)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsSignedDataGenerator>::get(),
                            "AddSigner",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::AsymmetricKeyParameter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::X509::X509Certificate>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, privateKey, cert, digestOID);
}
 void Org::BouncyCastle::Cms::CmsSignedDataGenerator::AddSigner(Org::BouncyCastle::Crypto::AsymmetricKeyParameter privateKey, Org::BouncyCastle::X509::X509Certificate cert, ::StringW encryptionOID, ::StringW digestOID)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsSignedDataGenerator>::get(),
                            "AddSigner",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::AsymmetricKeyParameter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::X509::X509Certificate>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, privateKey, cert, encryptionOID, digestOID);
}
 void Org::BouncyCastle::Cms::CmsSignedDataGenerator::AddSigner(Org::BouncyCastle::Crypto::AsymmetricKeyParameter privateKey, ::ArrayW<uint8_t> subjectKeyID, ::StringW digestOID)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsSignedDataGenerator>::get(),
                            "AddSigner",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::AsymmetricKeyParameter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, privateKey, subjectKeyID, digestOID);
}
 void Org::BouncyCastle::Cms::CmsSignedDataGenerator::AddSigner(Org::BouncyCastle::Crypto::AsymmetricKeyParameter privateKey, ::ArrayW<uint8_t> subjectKeyID, ::StringW encryptionOID, ::StringW digestOID)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsSignedDataGenerator>::get(),
                            "AddSigner",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::AsymmetricKeyParameter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, privateKey, subjectKeyID, encryptionOID, digestOID);
}
 void Org::BouncyCastle::Cms::CmsSignedDataGenerator::AddSigner(Org::BouncyCastle::Crypto::AsymmetricKeyParameter privateKey, Org::BouncyCastle::X509::X509Certificate cert, ::StringW digestOID, Org::BouncyCastle::Asn1::Cms::AttributeTable signedAttr, Org::BouncyCastle::Asn1::Cms::AttributeTable unsignedAttr)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsSignedDataGenerator>::get(),
                            "AddSigner",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::AsymmetricKeyParameter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::X509::X509Certificate>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::Cms::AttributeTable>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::Cms::AttributeTable>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, privateKey, cert, digestOID, signedAttr, unsignedAttr);
}
 void Org::BouncyCastle::Cms::CmsSignedDataGenerator::AddSigner(Org::BouncyCastle::Crypto::AsymmetricKeyParameter privateKey, Org::BouncyCastle::X509::X509Certificate cert, ::StringW encryptionOID, ::StringW digestOID, Org::BouncyCastle::Asn1::Cms::AttributeTable signedAttr, Org::BouncyCastle::Asn1::Cms::AttributeTable unsignedAttr)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsSignedDataGenerator>::get(),
                            "AddSigner",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::AsymmetricKeyParameter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::X509::X509Certificate>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::Cms::AttributeTable>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::Cms::AttributeTable>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, privateKey, cert, encryptionOID, digestOID, signedAttr, unsignedAttr);
}
 void Org::BouncyCastle::Cms::CmsSignedDataGenerator::AddSigner(Org::BouncyCastle::Crypto::AsymmetricKeyParameter privateKey, ::ArrayW<uint8_t> subjectKeyID, ::StringW digestOID, Org::BouncyCastle::Asn1::Cms::AttributeTable signedAttr, Org::BouncyCastle::Asn1::Cms::AttributeTable unsignedAttr)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsSignedDataGenerator>::get(),
                            "AddSigner",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::AsymmetricKeyParameter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::Cms::AttributeTable>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::Cms::AttributeTable>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, privateKey, subjectKeyID, digestOID, signedAttr, unsignedAttr);
}
 void Org::BouncyCastle::Cms::CmsSignedDataGenerator::AddSigner(Org::BouncyCastle::Crypto::AsymmetricKeyParameter privateKey, ::ArrayW<uint8_t> subjectKeyID, ::StringW encryptionOID, ::StringW digestOID, Org::BouncyCastle::Asn1::Cms::AttributeTable signedAttr, Org::BouncyCastle::Asn1::Cms::AttributeTable unsignedAttr)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsSignedDataGenerator>::get(),
                            "AddSigner",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::AsymmetricKeyParameter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::Cms::AttributeTable>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::Cms::AttributeTable>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, privateKey, subjectKeyID, encryptionOID, digestOID, signedAttr, unsignedAttr);
}
 void Org::BouncyCastle::Cms::CmsSignedDataGenerator::AddSigner(Org::BouncyCastle::Crypto::AsymmetricKeyParameter privateKey, Org::BouncyCastle::X509::X509Certificate cert, ::StringW digestOID, Org::BouncyCastle::Cms::CmsAttributeTableGenerator signedAttrGen, Org::BouncyCastle::Cms::CmsAttributeTableGenerator unsignedAttrGen)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsSignedDataGenerator>::get(),
                            "AddSigner",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::AsymmetricKeyParameter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::X509::X509Certificate>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Cms::CmsAttributeTableGenerator>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Cms::CmsAttributeTableGenerator>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, privateKey, cert, digestOID, signedAttrGen, unsignedAttrGen);
}
 void Org::BouncyCastle::Cms::CmsSignedDataGenerator::AddSigner(Org::BouncyCastle::Crypto::AsymmetricKeyParameter privateKey, Org::BouncyCastle::X509::X509Certificate cert, ::StringW encryptionOID, ::StringW digestOID, Org::BouncyCastle::Cms::CmsAttributeTableGenerator signedAttrGen, Org::BouncyCastle::Cms::CmsAttributeTableGenerator unsignedAttrGen)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsSignedDataGenerator>::get(),
                            "AddSigner",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::AsymmetricKeyParameter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::X509::X509Certificate>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Cms::CmsAttributeTableGenerator>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Cms::CmsAttributeTableGenerator>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, privateKey, cert, encryptionOID, digestOID, signedAttrGen, unsignedAttrGen);
}
 void Org::BouncyCastle::Cms::CmsSignedDataGenerator::AddSigner(Org::BouncyCastle::Crypto::AsymmetricKeyParameter privateKey, ::ArrayW<uint8_t> subjectKeyID, ::StringW digestOID, Org::BouncyCastle::Cms::CmsAttributeTableGenerator signedAttrGen, Org::BouncyCastle::Cms::CmsAttributeTableGenerator unsignedAttrGen)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsSignedDataGenerator>::get(),
                            "AddSigner",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::AsymmetricKeyParameter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Cms::CmsAttributeTableGenerator>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Cms::CmsAttributeTableGenerator>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, privateKey, subjectKeyID, digestOID, signedAttrGen, unsignedAttrGen);
}
 void Org::BouncyCastle::Cms::CmsSignedDataGenerator::AddSigner(Org::BouncyCastle::Crypto::AsymmetricKeyParameter privateKey, ::ArrayW<uint8_t> subjectKeyID, ::StringW encryptionOID, ::StringW digestOID, Org::BouncyCastle::Cms::CmsAttributeTableGenerator signedAttrGen, Org::BouncyCastle::Cms::CmsAttributeTableGenerator unsignedAttrGen)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsSignedDataGenerator>::get(),
                            "AddSigner",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::AsymmetricKeyParameter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Cms::CmsAttributeTableGenerator>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Cms::CmsAttributeTableGenerator>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, privateKey, subjectKeyID, encryptionOID, digestOID, signedAttrGen, unsignedAttrGen);
}
 void Org::BouncyCastle::Cms::CmsSignedDataGenerator::AddSignerInfoGenerator(Org::BouncyCastle::Cms::SignerInfoGenerator signerInfoGenerator)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsSignedDataGenerator>::get(),
                            "AddSignerInfoGenerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Cms::SignerInfoGenerator>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, signerInfoGenerator);
}
 void Org::BouncyCastle::Cms::CmsSignedDataGenerator::doAddSigner(Org::BouncyCastle::Crypto::AsymmetricKeyParameter privateKey, Org::BouncyCastle::Asn1::Cms::SignerIdentifier signerIdentifier, ::StringW encryptionOID, ::StringW digestOID, Org::BouncyCastle::Cms::CmsAttributeTableGenerator signedAttrGen, Org::BouncyCastle::Cms::CmsAttributeTableGenerator unsignedAttrGen, Org::BouncyCastle::Asn1::Cms::AttributeTable baseSignedTable)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsSignedDataGenerator>::get(),
                            "doAddSigner",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::AsymmetricKeyParameter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::Cms::SignerIdentifier>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Cms::CmsAttributeTableGenerator>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Cms::CmsAttributeTableGenerator>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::Cms::AttributeTable>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, privateKey, signerIdentifier, encryptionOID, digestOID, signedAttrGen, unsignedAttrGen, baseSignedTable);
}
 Org::BouncyCastle::Cms::CmsSignedData Org::BouncyCastle::Cms::CmsSignedDataGenerator::Generate(Org::BouncyCastle::Cms::CmsProcessable content)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsSignedDataGenerator>::get(),
                            "Generate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Cms::CmsProcessable>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Cms::CmsSignedData, false>(const_cast<void*>(instance), ___internal_method, content);
}
 Org::BouncyCastle::Cms::CmsSignedData Org::BouncyCastle::Cms::CmsSignedDataGenerator::Generate(::StringW signedContentType, Org::BouncyCastle::Cms::CmsProcessable content, bool encapsulate)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsSignedDataGenerator>::get(),
                            "Generate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Cms::CmsProcessable>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Cms::CmsSignedData, false>(const_cast<void*>(instance), ___internal_method, signedContentType, content, encapsulate);
}
 Org::BouncyCastle::Cms::CmsSignedData Org::BouncyCastle::Cms::CmsSignedDataGenerator::Generate(Org::BouncyCastle::Cms::CmsProcessable content, bool encapsulate)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsSignedDataGenerator>::get(),
                            "Generate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Cms::CmsProcessable>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Cms::CmsSignedData, false>(const_cast<void*>(instance), ___internal_method, content, encapsulate);
}
 Org::BouncyCastle::Cms::SignerInformationStore Org::BouncyCastle::Cms::CmsSignedDataGenerator::GenerateCounterSigners(Org::BouncyCastle::Cms::SignerInformation signer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsSignedDataGenerator>::get(),
                            "GenerateCounterSigners",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Cms::SignerInformation>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Cms::SignerInformationStore, false>(const_cast<void*>(instance), ___internal_method, signer);
}
