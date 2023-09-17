#pragma once
namespace {
#include "Org/BouncyCastle/Asn1/Cms/zzzz__CompressedDataParser_def.hpp"
#include "Org/BouncyCastle/Asn1/Cms/zzzz__ContentInfoParser_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__AlgorithmIdentifier_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1SequenceParser_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerInteger_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cms::CompressedDataParser._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Asn1::Cms::CompressedDataParser::*)(::Org::BouncyCastle::Asn1::Asn1SequenceParser)>(&::Org::BouncyCastle::Asn1::Cms::CompressedDataParser::_ctor)> {
  constexpr static std::size_t size = 0x2bc;
  constexpr static std::size_t addrs = 0xde8a3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Cms::CompressedDataParser>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1SequenceParser>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cms::CompressedDataParser.get_Version
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::DerInteger (::Org::BouncyCastle::Asn1::Cms::CompressedDataParser::*)()>(&::Org::BouncyCastle::Asn1::Cms::CompressedDataParser::get_Version)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xde8cf8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Cms::CompressedDataParser>::get(),
                            "get_Version",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cms::CompressedDataParser.get_CompressionAlgorithmIdentifier
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier (::Org::BouncyCastle::Asn1::Cms::CompressedDataParser::*)()>(&::Org::BouncyCastle::Asn1::Cms::CompressedDataParser::get_CompressionAlgorithmIdentifier)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xde8d00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Cms::CompressedDataParser>::get(),
                            "get_CompressionAlgorithmIdentifier",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cms::CompressedDataParser.GetEncapContentInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::Cms::ContentInfoParser (::Org::BouncyCastle::Asn1::Cms::CompressedDataParser::*)()>(&::Org::BouncyCastle::Asn1::Cms::CompressedDataParser::GetEncapContentInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xde8d08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Cms::CompressedDataParser>::get(),
                            "GetEncapContentInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::Org::BouncyCastle::Asn1::Cms::CompressedDataParser::__set__version(::Org::BouncyCastle::Asn1::DerInteger value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Asn1::DerInteger, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::Org::BouncyCastle::Asn1::DerInteger>(value));
}
constexpr ::Org::BouncyCastle::Asn1::DerInteger ::Org::BouncyCastle::Asn1::Cms::CompressedDataParser::__get__version() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Asn1::DerInteger, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Org::BouncyCastle::Asn1::Cms::CompressedDataParser::__set__compressionAlgorithm(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier>(value));
}
constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier ::Org::BouncyCastle::Asn1::Cms::CompressedDataParser::__get__compressionAlgorithm() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Org::BouncyCastle::Asn1::Cms::CompressedDataParser::__set__encapContentInfo(::Org::BouncyCastle::Asn1::Cms::ContentInfoParser value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Asn1::Cms::ContentInfoParser, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::Org::BouncyCastle::Asn1::Cms::ContentInfoParser>(value));
}
constexpr ::Org::BouncyCastle::Asn1::Cms::ContentInfoParser ::Org::BouncyCastle::Asn1::Cms::CompressedDataParser::__get__encapContentInfo() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Asn1::Cms::ContentInfoParser, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "seq", ty: "::Org::BouncyCastle::Asn1::Asn1SequenceParser", modifiers: "", def_value: None }]
 ::Org::BouncyCastle::Asn1::Cms::CompressedDataParser::CompressedDataParser(::Org::BouncyCastle::Asn1::Asn1SequenceParser seq)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<CompressedDataParser>(seq))) {}
 void ::Org::BouncyCastle::Asn1::Cms::CompressedDataParser::_ctor(::Org::BouncyCastle::Asn1::Asn1SequenceParser seq)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Cms::CompressedDataParser>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1SequenceParser>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, seq);
}
 ::Org::BouncyCastle::Asn1::DerInteger ::Org::BouncyCastle::Asn1::Cms::CompressedDataParser::get_Version()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Cms::CompressedDataParser>::get(),
                            "get_Version",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::DerInteger, false>(const_cast<void*>(instance), ___internal_method);
}
 ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier ::Org::BouncyCastle::Asn1::Cms::CompressedDataParser::get_CompressionAlgorithmIdentifier()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Cms::CompressedDataParser>::get(),
                            "get_CompressionAlgorithmIdentifier",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier, false>(const_cast<void*>(instance), ___internal_method);
}
 ::Org::BouncyCastle::Asn1::Cms::ContentInfoParser ::Org::BouncyCastle::Asn1::Cms::CompressedDataParser::GetEncapContentInfo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Cms::CompressedDataParser>::get(),
                            "GetEncapContentInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Cms::ContentInfoParser, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
