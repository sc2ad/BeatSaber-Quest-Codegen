#pragma once
#include "Org/BouncyCastle/Crmf/zzzz__PkiArchiveControlBuilder_def.hpp"
#include "Org/BouncyCastle/Cms/zzzz__CmsProcessableByteArray_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ICipherBuilderWithKey_def.hpp"
#include "Org/BouncyCastle/Asn1/Pkcs/zzzz__PrivateKeyInfo_def.hpp"
#include "Org/BouncyCastle/Cms/zzzz__CmsEnvelopedDataGenerator_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__GeneralName_def.hpp"
#include "Org/BouncyCastle/Cms/zzzz__RecipientInfoGenerator_def.hpp"
#include "Org/BouncyCastle/Crmf/zzzz__PkiArchiveControl_def.hpp"
//  Writing Method size for method: Org::BouncyCastle::Crmf::PkiArchiveControlBuilder._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crmf::PkiArchiveControlBuilder::*)(Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo, Org::BouncyCastle::Asn1::X509::GeneralName)>(&Org::BouncyCastle::Crmf::PkiArchiveControlBuilder::_ctor)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0x11869d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crmf::PkiArchiveControlBuilder>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::X509::GeneralName>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crmf::PkiArchiveControlBuilder.AddRecipientGenerator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Crmf::PkiArchiveControlBuilder (Org::BouncyCastle::Crmf::PkiArchiveControlBuilder::*)(Org::BouncyCastle::Cms::RecipientInfoGenerator)>(&Org::BouncyCastle::Crmf::PkiArchiveControlBuilder::AddRecipientGenerator)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x1186bd0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crmf::PkiArchiveControlBuilder>::get(),
                            "AddRecipientGenerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Cms::RecipientInfoGenerator>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crmf::PkiArchiveControlBuilder.Build
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Crmf::PkiArchiveControl (Org::BouncyCastle::Crmf::PkiArchiveControlBuilder::*)(Org::BouncyCastle::Crypto::ICipherBuilderWithKey)>(&Org::BouncyCastle::Crmf::PkiArchiveControlBuilder::Build)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1186bf8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crmf::PkiArchiveControlBuilder>::get(),
                            "Build",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::ICipherBuilderWithKey>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void Org::BouncyCastle::Crmf::PkiArchiveControlBuilder::__set_envGen(Org::BouncyCastle::Cms::CmsEnvelopedDataGenerator value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Cms::CmsEnvelopedDataGenerator, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Cms::CmsEnvelopedDataGenerator>(value));
}
constexpr Org::BouncyCastle::Cms::CmsEnvelopedDataGenerator Org::BouncyCastle::Crmf::PkiArchiveControlBuilder::__get_envGen() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Cms::CmsEnvelopedDataGenerator, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Crmf::PkiArchiveControlBuilder::__set_keyContent(Org::BouncyCastle::Cms::CmsProcessableByteArray value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Cms::CmsProcessableByteArray, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Cms::CmsProcessableByteArray>(value));
}
constexpr Org::BouncyCastle::Cms::CmsProcessableByteArray Org::BouncyCastle::Crmf::PkiArchiveControlBuilder::__get_keyContent() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Cms::CmsProcessableByteArray, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "privateKeyInfo", ty: "Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo", modifiers: "", def_value: None }, CppParam { name: "generalName", ty: "Org::BouncyCastle::Asn1::X509::GeneralName", modifiers: "", def_value: None }]
 Org::BouncyCastle::Crmf::PkiArchiveControlBuilder::PkiArchiveControlBuilder(Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo privateKeyInfo, Org::BouncyCastle::Asn1::X509::GeneralName generalName)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<PkiArchiveControlBuilder>(privateKeyInfo, generalName))) {}
 void Org::BouncyCastle::Crmf::PkiArchiveControlBuilder::_ctor(Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo privateKeyInfo, Org::BouncyCastle::Asn1::X509::GeneralName generalName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crmf::PkiArchiveControlBuilder>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::X509::GeneralName>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, privateKeyInfo, generalName);
}
 Org::BouncyCastle::Crmf::PkiArchiveControlBuilder Org::BouncyCastle::Crmf::PkiArchiveControlBuilder::AddRecipientGenerator(Org::BouncyCastle::Cms::RecipientInfoGenerator recipientGen)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crmf::PkiArchiveControlBuilder>::get(),
                            "AddRecipientGenerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Cms::RecipientInfoGenerator>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Crmf::PkiArchiveControlBuilder, false>(const_cast<void*>(instance), ___internal_method, recipientGen);
}
 Org::BouncyCastle::Crmf::PkiArchiveControl Org::BouncyCastle::Crmf::PkiArchiveControlBuilder::Build(Org::BouncyCastle::Crypto::ICipherBuilderWithKey contentEncryptor)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crmf::PkiArchiveControlBuilder>::get(),
                            "Build",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::ICipherBuilderWithKey>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Crmf::PkiArchiveControl, false>(const_cast<void*>(instance), ___internal_method, contentEncryptor);
}
