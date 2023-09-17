#pragma once
namespace {
#include "Org/BouncyCastle/Asn1/Cms/zzzz__EncryptedContentInfoParser_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__AlgorithmIdentifier_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1TaggedObjectParser_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1SequenceParser_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__IAsn1Convertible_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerObjectIdentifier_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cms::EncryptedContentInfoParser._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Asn1::Cms::EncryptedContentInfoParser::*)(::Org::BouncyCastle::Asn1::Asn1SequenceParser)>(&::Org::BouncyCastle::Asn1::Cms::EncryptedContentInfoParser::_ctor)> {
  constexpr static std::size_t size = 0x2b8;
  constexpr static std::size_t addrs = 0xde7c78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Cms::EncryptedContentInfoParser>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1SequenceParser>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cms::EncryptedContentInfoParser.get_ContentType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::DerObjectIdentifier (::Org::BouncyCastle::Asn1::Cms::EncryptedContentInfoParser::*)()>(&::Org::BouncyCastle::Asn1::Cms::EncryptedContentInfoParser::get_ContentType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xde953c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Cms::EncryptedContentInfoParser>::get(),
                            "get_ContentType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cms::EncryptedContentInfoParser.get_ContentEncryptionAlgorithm
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier (::Org::BouncyCastle::Asn1::Cms::EncryptedContentInfoParser::*)()>(&::Org::BouncyCastle::Asn1::Cms::EncryptedContentInfoParser::get_ContentEncryptionAlgorithm)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xde9544;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Cms::EncryptedContentInfoParser>::get(),
                            "get_ContentEncryptionAlgorithm",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cms::EncryptedContentInfoParser.GetEncryptedContent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::IAsn1Convertible (::Org::BouncyCastle::Asn1::Cms::EncryptedContentInfoParser::*)(int32_t)>(&::Org::BouncyCastle::Asn1::Cms::EncryptedContentInfoParser::GetEncryptedContent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xde954c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Cms::EncryptedContentInfoParser>::get(),
                            "GetEncryptedContent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void ::Org::BouncyCastle::Asn1::Cms::EncryptedContentInfoParser::__set__contentType(::Org::BouncyCastle::Asn1::DerObjectIdentifier value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Asn1::DerObjectIdentifier, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier>(value));
}
constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier ::Org::BouncyCastle::Asn1::Cms::EncryptedContentInfoParser::__get__contentType() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Asn1::DerObjectIdentifier, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Org::BouncyCastle::Asn1::Cms::EncryptedContentInfoParser::__set__contentEncryptionAlgorithm(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier>(value));
}
constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier ::Org::BouncyCastle::Asn1::Cms::EncryptedContentInfoParser::__get__contentEncryptionAlgorithm() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Org::BouncyCastle::Asn1::Cms::EncryptedContentInfoParser::__set__encryptedContent(::Org::BouncyCastle::Asn1::Asn1TaggedObjectParser value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Asn1::Asn1TaggedObjectParser, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::Org::BouncyCastle::Asn1::Asn1TaggedObjectParser>(value));
}
constexpr ::Org::BouncyCastle::Asn1::Asn1TaggedObjectParser ::Org::BouncyCastle::Asn1::Cms::EncryptedContentInfoParser::__get__encryptedContent() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Asn1::Asn1TaggedObjectParser, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "seq", ty: "::Org::BouncyCastle::Asn1::Asn1SequenceParser", modifiers: "", def_value: None }]
 ::Org::BouncyCastle::Asn1::Cms::EncryptedContentInfoParser::EncryptedContentInfoParser(::Org::BouncyCastle::Asn1::Asn1SequenceParser seq)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<EncryptedContentInfoParser>(seq))) {}
 void ::Org::BouncyCastle::Asn1::Cms::EncryptedContentInfoParser::_ctor(::Org::BouncyCastle::Asn1::Asn1SequenceParser seq)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Cms::EncryptedContentInfoParser>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1SequenceParser>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, seq);
}
 ::Org::BouncyCastle::Asn1::DerObjectIdentifier ::Org::BouncyCastle::Asn1::Cms::EncryptedContentInfoParser::get_ContentType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Cms::EncryptedContentInfoParser>::get(),
                            "get_ContentType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::DerObjectIdentifier, false>(const_cast<void*>(instance), ___internal_method);
}
 ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier ::Org::BouncyCastle::Asn1::Cms::EncryptedContentInfoParser::get_ContentEncryptionAlgorithm()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Cms::EncryptedContentInfoParser>::get(),
                            "get_ContentEncryptionAlgorithm",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier, false>(const_cast<void*>(instance), ___internal_method);
}
 ::Org::BouncyCastle::Asn1::IAsn1Convertible ::Org::BouncyCastle::Asn1::Cms::EncryptedContentInfoParser::GetEncryptedContent(int32_t tag)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Cms::EncryptedContentInfoParser>::get(),
                            "GetEncryptedContent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::IAsn1Convertible, false>(const_cast<void*>(instance), ___internal_method, tag);
}
} // end anonymous namespace
