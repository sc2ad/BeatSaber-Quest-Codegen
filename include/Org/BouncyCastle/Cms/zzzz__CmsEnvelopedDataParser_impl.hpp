#pragma once
#include "Org/BouncyCastle/Cms/zzzz__CmsContentInfoParser_impl.hpp"
#include "Org/BouncyCastle/Cms/zzzz__CmsEnvelopedDataParser_def.hpp"
#include "Org/BouncyCastle/Asn1/Cms/zzzz__EnvelopedDataParser_def.hpp"
#include "Org/BouncyCastle/Cms/zzzz__RecipientInformationStore_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__AlgorithmIdentifier_def.hpp"
#include "Org/BouncyCastle/Asn1/Cms/zzzz__AttributeTable_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
//  Writing Method size for method: Org::BouncyCastle::Cms::CmsEnvelopedDataParser._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Cms::CmsEnvelopedDataParser::*)(::ArrayW<uint8_t>)>(&Org::BouncyCastle::Cms::CmsEnvelopedDataParser::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x1155478;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsEnvelopedDataParser>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Cms::CmsEnvelopedDataParser._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Cms::CmsEnvelopedDataParser::*)(System::IO::Stream)>(&Org::BouncyCastle::Cms::CmsEnvelopedDataParser::_ctor)> {
  constexpr static std::size_t size = 0x2f8;
  constexpr static std::size_t addrs = 0x11554f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsEnvelopedDataParser>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::Stream>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Cms::CmsEnvelopedDataParser.get_EncryptionAlgorithmID
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier (Org::BouncyCastle::Cms::CmsEnvelopedDataParser::*)()>(&Org::BouncyCastle::Cms::CmsEnvelopedDataParser::get_EncryptionAlgorithmID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x11557e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsEnvelopedDataParser>::get(),
                            "get_EncryptionAlgorithmID",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Cms::CmsEnvelopedDataParser.get_EncryptionAlgOid
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Org::BouncyCastle::Cms::CmsEnvelopedDataParser::*)()>(&Org::BouncyCastle::Cms::CmsEnvelopedDataParser::get_EncryptionAlgOid)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x11557f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsEnvelopedDataParser>::get(),
                            "get_EncryptionAlgOid",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Cms::CmsEnvelopedDataParser.get_EncryptionAlgParams
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::Asn1Object (Org::BouncyCastle::Cms::CmsEnvelopedDataParser::*)()>(&Org::BouncyCastle::Cms::CmsEnvelopedDataParser::get_EncryptionAlgParams)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x115581c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsEnvelopedDataParser>::get(),
                            "get_EncryptionAlgParams",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Cms::CmsEnvelopedDataParser.GetRecipientInfos
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Cms::RecipientInformationStore (Org::BouncyCastle::Cms::CmsEnvelopedDataParser::*)()>(&Org::BouncyCastle::Cms::CmsEnvelopedDataParser::GetRecipientInfos)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1155854;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsEnvelopedDataParser>::get(),
                            "GetRecipientInfos",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Cms::CmsEnvelopedDataParser.GetUnprotectedAttributes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::Cms::AttributeTable (Org::BouncyCastle::Cms::CmsEnvelopedDataParser::*)()>(&Org::BouncyCastle::Cms::CmsEnvelopedDataParser::GetUnprotectedAttributes)> {
  constexpr static std::size_t size = 0x24c;
  constexpr static std::size_t addrs = 0x115585c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsEnvelopedDataParser>::get(),
                            "GetUnprotectedAttributes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void Org::BouncyCastle::Cms::CmsEnvelopedDataParser::__set_recipientInfoStore(Org::BouncyCastle::Cms::RecipientInformationStore value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Cms::RecipientInformationStore, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Cms::RecipientInformationStore>(value));
}
constexpr Org::BouncyCastle::Cms::RecipientInformationStore Org::BouncyCastle::Cms::CmsEnvelopedDataParser::__get_recipientInfoStore() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Cms::RecipientInformationStore, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Cms::CmsEnvelopedDataParser::__set_envelopedData(Org::BouncyCastle::Asn1::Cms::EnvelopedDataParser value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Asn1::Cms::EnvelopedDataParser, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Asn1::Cms::EnvelopedDataParser>(value));
}
constexpr Org::BouncyCastle::Asn1::Cms::EnvelopedDataParser Org::BouncyCastle::Cms::CmsEnvelopedDataParser::__get_envelopedData() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Asn1::Cms::EnvelopedDataParser, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Cms::CmsEnvelopedDataParser::__set__encAlg(Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier>(value));
}
constexpr Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier Org::BouncyCastle::Cms::CmsEnvelopedDataParser::__get__encAlg() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Cms::CmsEnvelopedDataParser::__set__unprotectedAttributes(Org::BouncyCastle::Asn1::Cms::AttributeTable value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Asn1::Cms::AttributeTable, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Asn1::Cms::AttributeTable>(value));
}
constexpr Org::BouncyCastle::Asn1::Cms::AttributeTable Org::BouncyCastle::Cms::CmsEnvelopedDataParser::__get__unprotectedAttributes() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Asn1::Cms::AttributeTable, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Cms::CmsEnvelopedDataParser::__set__attrNotRead(bool value)  {
::cordl_internals::setInstanceField<bool, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool Org::BouncyCastle::Cms::CmsEnvelopedDataParser::__get__attrNotRead() const {
return ::cordl_internals::getInstanceField<bool, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "envelopedData", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
 Org::BouncyCastle::Cms::CmsEnvelopedDataParser::CmsEnvelopedDataParser(::ArrayW<uint8_t> envelopedData)  : Org::BouncyCastle::Cms::CmsContentInfoParser(THROW_UNLESS(::il2cpp_utils::New<CmsEnvelopedDataParser>(envelopedData))) {}
 void Org::BouncyCastle::Cms::CmsEnvelopedDataParser::_ctor(::ArrayW<uint8_t> envelopedData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsEnvelopedDataParser>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, envelopedData);
}
// Ctor Parameters [CppParam { name: "envelopedData", ty: "System::IO::Stream", modifiers: "", def_value: None }]
 Org::BouncyCastle::Cms::CmsEnvelopedDataParser::CmsEnvelopedDataParser(System::IO::Stream envelopedData)  : Org::BouncyCastle::Cms::CmsContentInfoParser(THROW_UNLESS(::il2cpp_utils::New<CmsEnvelopedDataParser>(envelopedData))) {}
 void Org::BouncyCastle::Cms::CmsEnvelopedDataParser::_ctor(System::IO::Stream envelopedData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsEnvelopedDataParser>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::Stream>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, envelopedData);
}
 Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier Org::BouncyCastle::Cms::CmsEnvelopedDataParser::get_EncryptionAlgorithmID()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsEnvelopedDataParser>::get(),
                            "get_EncryptionAlgorithmID",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW Org::BouncyCastle::Cms::CmsEnvelopedDataParser::get_EncryptionAlgOid()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsEnvelopedDataParser>::get(),
                            "get_EncryptionAlgOid",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 Org::BouncyCastle::Asn1::Asn1Object Org::BouncyCastle::Cms::CmsEnvelopedDataParser::get_EncryptionAlgParams()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsEnvelopedDataParser>::get(),
                            "get_EncryptionAlgParams",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Asn1::Asn1Object, false>(const_cast<void*>(instance), ___internal_method);
}
 Org::BouncyCastle::Cms::RecipientInformationStore Org::BouncyCastle::Cms::CmsEnvelopedDataParser::GetRecipientInfos()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsEnvelopedDataParser>::get(),
                            "GetRecipientInfos",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Cms::RecipientInformationStore, false>(const_cast<void*>(instance), ___internal_method);
}
 Org::BouncyCastle::Asn1::Cms::AttributeTable Org::BouncyCastle::Cms::CmsEnvelopedDataParser::GetUnprotectedAttributes()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsEnvelopedDataParser>::get(),
                            "GetUnprotectedAttributes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Asn1::Cms::AttributeTable, false>(const_cast<void*>(instance), ___internal_method);
}
