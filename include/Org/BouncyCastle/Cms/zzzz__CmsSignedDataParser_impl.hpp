#pragma once
#include "Org/BouncyCastle/Cms/zzzz__CmsContentInfoParser_impl.hpp"
#include "Org/BouncyCastle/Cms/zzzz__CmsSignedDataParser_def.hpp"
#include "Org/BouncyCastle/Cms/zzzz__SignerInformationStore_def.hpp"
#include "Org/BouncyCastle/Cms/zzzz__CmsTypedStream_def.hpp"
#include "Org/BouncyCastle/Cms/zzzz__CmsSignedHelper_def.hpp"
#include "Org/BouncyCastle/Utilities/Collections/zzzz__ISet_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1SetParser_def.hpp"
#include "System/Collections/zzzz__IDictionary_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "Org/BouncyCastle/Asn1/Cms/zzzz__SignedDataParser_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Set_def.hpp"
#include "Org/BouncyCastle/X509/Store/zzzz__IX509Store_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerObjectIdentifier_def.hpp"
//  Writing Method size for method: Org::BouncyCastle::Cms::CmsSignedDataParser._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Cms::CmsSignedDataParser::*)(::ArrayW<uint8_t>)>(&Org::BouncyCastle::Cms::CmsSignedDataParser::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x1162714;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsSignedDataParser>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Cms::CmsSignedDataParser._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Cms::CmsSignedDataParser::*)(Org::BouncyCastle::Cms::CmsTypedStream, ::ArrayW<uint8_t>)>(&Org::BouncyCastle::Cms::CmsSignedDataParser::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x116279c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsSignedDataParser>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Cms::CmsTypedStream>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Cms::CmsSignedDataParser._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Cms::CmsSignedDataParser::*)(System::IO::Stream)>(&Org::BouncyCastle::Cms::CmsSignedDataParser::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x1162790;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsSignedDataParser>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::Stream>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Cms::CmsSignedDataParser._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Cms::CmsSignedDataParser::*)(Org::BouncyCastle::Cms::CmsTypedStream, System::IO::Stream)>(&Org::BouncyCastle::Cms::CmsSignedDataParser::_ctor)> {
  constexpr static std::size_t size = 0x784;
  constexpr static std::size_t addrs = 0x116281c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsSignedDataParser>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Cms::CmsTypedStream>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::Stream>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Cms::CmsSignedDataParser.get_Version
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (Org::BouncyCastle::Cms::CmsSignedDataParser::*)()>(&Org::BouncyCastle::Cms::CmsSignedDataParser::get_Version)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x1163010;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsSignedDataParser>::get(),
                            "get_Version",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Cms::CmsSignedDataParser.get_DigestOids
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Utilities::Collections::ISet (Org::BouncyCastle::Cms::CmsSignedDataParser::*)()>(&Org::BouncyCastle::Cms::CmsSignedDataParser::get_DigestOids)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x1163034;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsSignedDataParser>::get(),
                            "get_DigestOids",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Cms::CmsSignedDataParser.GetSignerInfos
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Cms::SignerInformationStore (Org::BouncyCastle::Cms::CmsSignedDataParser::*)()>(&Org::BouncyCastle::Cms::CmsSignedDataParser::GetSignerInfos)> {
  constexpr static std::size_t size = 0x9b8;
  constexpr static std::size_t addrs = 0x116309c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsSignedDataParser>::get(),
                            "GetSignerInfos",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Cms::CmsSignedDataParser.GetAttributeCertificates
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::X509::Store::IX509Store (Org::BouncyCastle::Cms::CmsSignedDataParser::*)(::StringW)>(&Org::BouncyCastle::Cms::CmsSignedDataParser::GetAttributeCertificates)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x1163bcc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsSignedDataParser>::get(),
                            "GetAttributeCertificates",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Cms::CmsSignedDataParser.GetCertificates
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::X509::Store::IX509Store (Org::BouncyCastle::Cms::CmsSignedDataParser::*)(::StringW)>(&Org::BouncyCastle::Cms::CmsSignedDataParser::GetCertificates)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x1163c54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsSignedDataParser>::get(),
                            "GetCertificates",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Cms::CmsSignedDataParser.GetCrls
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::X509::Store::IX509Store (Org::BouncyCastle::Cms::CmsSignedDataParser::*)(::StringW)>(&Org::BouncyCastle::Cms::CmsSignedDataParser::GetCrls)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x1163cdc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsSignedDataParser>::get(),
                            "GetCrls",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Cms::CmsSignedDataParser.PopulateCertCrlSets
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Cms::CmsSignedDataParser::*)()>(&Org::BouncyCastle::Cms::CmsSignedDataParser::PopulateCertCrlSets)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x1163a54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsSignedDataParser>::get(),
                            "PopulateCertCrlSets",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Cms::CmsSignedDataParser.get_SignedContentType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::DerObjectIdentifier (Org::BouncyCastle::Cms::CmsSignedDataParser::*)()>(&Org::BouncyCastle::Cms::CmsSignedDataParser::get_SignedContentType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1163e14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsSignedDataParser>::get(),
                            "get_SignedContentType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Cms::CmsSignedDataParser.GetSignedContent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Cms::CmsTypedStream (Org::BouncyCastle::Cms::CmsSignedDataParser::*)()>(&Org::BouncyCastle::Cms::CmsSignedDataParser::GetSignedContent)> {
  constexpr static std::size_t size = 0x464;
  constexpr static std::size_t addrs = 0x1163e1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsSignedDataParser>::get(),
                            "GetSignedContent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Cms::CmsSignedDataParser.ReplaceSigners
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IO::Stream (*)(System::IO::Stream, Org::BouncyCastle::Cms::SignerInformationStore, System::IO::Stream)>(&Org::BouncyCastle::Cms::CmsSignedDataParser::ReplaceSigners)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x1164280;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsSignedDataParser>::get(),
                            "ReplaceSigners",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::Stream>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Cms::SignerInformationStore>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::Stream>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Cms::CmsSignedDataParser.ReplaceCertificatesAndCrls
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IO::Stream (*)(System::IO::Stream, Org::BouncyCastle::X509::Store::IX509Store, Org::BouncyCastle::X509::Store::IX509Store, Org::BouncyCastle::X509::Store::IX509Store, System::IO::Stream)>(&Org::BouncyCastle::Cms::CmsSignedDataParser::ReplaceCertificatesAndCrls)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x11644f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsSignedDataParser>::get(),
                            "ReplaceCertificatesAndCrls",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::Stream>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::X509::Store::IX509Store>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::X509::Store::IX509Store>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::X509::Store::IX509Store>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::Stream>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Cms::CmsSignedDataParser.GetAsn1Set
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::Asn1Set (*)(Org::BouncyCastle::Asn1::Asn1SetParser)>(&Org::BouncyCastle::Cms::CmsSignedDataParser::GetAsn1Set)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1163d64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsSignedDataParser>::get(),
                            "GetAsn1Set",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::Asn1SetParser>::get()}
                        )));
    return ___internal_method;
  }
};
 void Org::BouncyCastle::Cms::CmsSignedDataParser::__set_Helper(Org::BouncyCastle::Cms::CmsSignedHelper value)  {
::cordl_internals::setStaticField<Org::BouncyCastle::Cms::CmsSignedHelper, "Helper", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsSignedDataParser>::get>(std::forward<Org::BouncyCastle::Cms::CmsSignedHelper>(value));
}
 Org::BouncyCastle::Cms::CmsSignedHelper Org::BouncyCastle::Cms::CmsSignedDataParser::__get_Helper()  {
return ::cordl_internals::getStaticField<Org::BouncyCastle::Cms::CmsSignedHelper, "Helper", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsSignedDataParser>::get>();
}
constexpr void Org::BouncyCastle::Cms::CmsSignedDataParser::__set__signedData(Org::BouncyCastle::Asn1::Cms::SignedDataParser value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Asn1::Cms::SignedDataParser, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Asn1::Cms::SignedDataParser>(value));
}
constexpr Org::BouncyCastle::Asn1::Cms::SignedDataParser Org::BouncyCastle::Cms::CmsSignedDataParser::__get__signedData() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Asn1::Cms::SignedDataParser, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Cms::CmsSignedDataParser::__set__signedContentType(Org::BouncyCastle::Asn1::DerObjectIdentifier value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Asn1::DerObjectIdentifier, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Asn1::DerObjectIdentifier>(value));
}
constexpr Org::BouncyCastle::Asn1::DerObjectIdentifier Org::BouncyCastle::Cms::CmsSignedDataParser::__get__signedContentType() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Asn1::DerObjectIdentifier, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Cms::CmsSignedDataParser::__set__signedContent(Org::BouncyCastle::Cms::CmsTypedStream value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Cms::CmsTypedStream, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Cms::CmsTypedStream>(value));
}
constexpr Org::BouncyCastle::Cms::CmsTypedStream Org::BouncyCastle::Cms::CmsSignedDataParser::__get__signedContent() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Cms::CmsTypedStream, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Cms::CmsSignedDataParser::__set__digests(System::Collections::IDictionary value)  {
::cordl_internals::setInstanceField<System::Collections::IDictionary, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::IDictionary>(value));
}
constexpr System::Collections::IDictionary Org::BouncyCastle::Cms::CmsSignedDataParser::__get__digests() const {
return ::cordl_internals::getInstanceField<System::Collections::IDictionary, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Cms::CmsSignedDataParser::__set__digestOids(Org::BouncyCastle::Utilities::Collections::ISet value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Utilities::Collections::ISet, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Utilities::Collections::ISet>(value));
}
constexpr Org::BouncyCastle::Utilities::Collections::ISet Org::BouncyCastle::Cms::CmsSignedDataParser::__get__digestOids() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Utilities::Collections::ISet, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Cms::CmsSignedDataParser::__set__signerInfoStore(Org::BouncyCastle::Cms::SignerInformationStore value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Cms::SignerInformationStore, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Cms::SignerInformationStore>(value));
}
constexpr Org::BouncyCastle::Cms::SignerInformationStore Org::BouncyCastle::Cms::CmsSignedDataParser::__get__signerInfoStore() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Cms::SignerInformationStore, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Cms::CmsSignedDataParser::__set__certSet(Org::BouncyCastle::Asn1::Asn1Set value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Asn1::Asn1Set, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Asn1::Asn1Set>(value));
}
constexpr Org::BouncyCastle::Asn1::Asn1Set Org::BouncyCastle::Cms::CmsSignedDataParser::__get__certSet() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Asn1::Asn1Set, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Cms::CmsSignedDataParser::__set__crlSet(Org::BouncyCastle::Asn1::Asn1Set value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Asn1::Asn1Set, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Asn1::Asn1Set>(value));
}
constexpr Org::BouncyCastle::Asn1::Asn1Set Org::BouncyCastle::Cms::CmsSignedDataParser::__get__crlSet() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Asn1::Asn1Set, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Cms::CmsSignedDataParser::__set__isCertCrlParsed(bool value)  {
::cordl_internals::setInstanceField<bool, 0x60>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool Org::BouncyCastle::Cms::CmsSignedDataParser::__get__isCertCrlParsed() const {
return ::cordl_internals::getInstanceField<bool, 0x60>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Cms::CmsSignedDataParser::__set__attributeStore(Org::BouncyCastle::X509::Store::IX509Store value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::X509::Store::IX509Store, 0x68>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::X509::Store::IX509Store>(value));
}
constexpr Org::BouncyCastle::X509::Store::IX509Store Org::BouncyCastle::Cms::CmsSignedDataParser::__get__attributeStore() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::X509::Store::IX509Store, 0x68>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Cms::CmsSignedDataParser::__set__certificateStore(Org::BouncyCastle::X509::Store::IX509Store value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::X509::Store::IX509Store, 0x70>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::X509::Store::IX509Store>(value));
}
constexpr Org::BouncyCastle::X509::Store::IX509Store Org::BouncyCastle::Cms::CmsSignedDataParser::__get__certificateStore() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::X509::Store::IX509Store, 0x70>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Cms::CmsSignedDataParser::__set__crlStore(Org::BouncyCastle::X509::Store::IX509Store value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::X509::Store::IX509Store, 0x78>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::X509::Store::IX509Store>(value));
}
constexpr Org::BouncyCastle::X509::Store::IX509Store Org::BouncyCastle::Cms::CmsSignedDataParser::__get__crlStore() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::X509::Store::IX509Store, 0x78>(this->::bs_hook::Il2CppWrapperType::instance);
}
 Org::BouncyCastle::Cms::CmsSignedDataParser Org::BouncyCastle::Cms::CmsSignedDataParser::New_ctor(::ArrayW<uint8_t> sigBlock)  {
Org::BouncyCastle::Cms::CmsSignedDataParser o{THROW_UNLESS(::il2cpp_utils::New<Org::BouncyCastle::Cms::CmsSignedDataParser>(sigBlock))};
return o;
}
 void Org::BouncyCastle::Cms::CmsSignedDataParser::_ctor(::ArrayW<uint8_t> sigBlock)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsSignedDataParser>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, sigBlock);
}
 Org::BouncyCastle::Cms::CmsSignedDataParser Org::BouncyCastle::Cms::CmsSignedDataParser::New_ctor(Org::BouncyCastle::Cms::CmsTypedStream signedContent, ::ArrayW<uint8_t> sigBlock)  {
Org::BouncyCastle::Cms::CmsSignedDataParser o{THROW_UNLESS(::il2cpp_utils::New<Org::BouncyCastle::Cms::CmsSignedDataParser>(signedContent, sigBlock))};
return o;
}
 void Org::BouncyCastle::Cms::CmsSignedDataParser::_ctor(Org::BouncyCastle::Cms::CmsTypedStream signedContent, ::ArrayW<uint8_t> sigBlock)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsSignedDataParser>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Cms::CmsTypedStream>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, signedContent, sigBlock);
}
 Org::BouncyCastle::Cms::CmsSignedDataParser Org::BouncyCastle::Cms::CmsSignedDataParser::New_ctor(System::IO::Stream sigData)  {
Org::BouncyCastle::Cms::CmsSignedDataParser o{THROW_UNLESS(::il2cpp_utils::New<Org::BouncyCastle::Cms::CmsSignedDataParser>(sigData))};
return o;
}
 void Org::BouncyCastle::Cms::CmsSignedDataParser::_ctor(System::IO::Stream sigData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsSignedDataParser>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::Stream>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, sigData);
}
 Org::BouncyCastle::Cms::CmsSignedDataParser Org::BouncyCastle::Cms::CmsSignedDataParser::New_ctor(Org::BouncyCastle::Cms::CmsTypedStream signedContent, System::IO::Stream sigData)  {
Org::BouncyCastle::Cms::CmsSignedDataParser o{THROW_UNLESS(::il2cpp_utils::New<Org::BouncyCastle::Cms::CmsSignedDataParser>(signedContent, sigData))};
return o;
}
 void Org::BouncyCastle::Cms::CmsSignedDataParser::_ctor(Org::BouncyCastle::Cms::CmsTypedStream signedContent, System::IO::Stream sigData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsSignedDataParser>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Cms::CmsTypedStream>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::Stream>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, signedContent, sigData);
}
 int32_t Org::BouncyCastle::Cms::CmsSignedDataParser::get_Version()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsSignedDataParser>::get(),
                            "get_Version",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 Org::BouncyCastle::Utilities::Collections::ISet Org::BouncyCastle::Cms::CmsSignedDataParser::get_DigestOids()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsSignedDataParser>::get(),
                            "get_DigestOids",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Utilities::Collections::ISet, false>(const_cast<void*>(instance), ___internal_method);
}
 Org::BouncyCastle::Cms::SignerInformationStore Org::BouncyCastle::Cms::CmsSignedDataParser::GetSignerInfos()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsSignedDataParser>::get(),
                            "GetSignerInfos",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Cms::SignerInformationStore, false>(const_cast<void*>(instance), ___internal_method);
}
 Org::BouncyCastle::X509::Store::IX509Store Org::BouncyCastle::Cms::CmsSignedDataParser::GetAttributeCertificates(::StringW type)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsSignedDataParser>::get(),
                            "GetAttributeCertificates",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::X509::Store::IX509Store, false>(const_cast<void*>(instance), ___internal_method, type);
}
 Org::BouncyCastle::X509::Store::IX509Store Org::BouncyCastle::Cms::CmsSignedDataParser::GetCertificates(::StringW type)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsSignedDataParser>::get(),
                            "GetCertificates",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::X509::Store::IX509Store, false>(const_cast<void*>(instance), ___internal_method, type);
}
 Org::BouncyCastle::X509::Store::IX509Store Org::BouncyCastle::Cms::CmsSignedDataParser::GetCrls(::StringW type)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsSignedDataParser>::get(),
                            "GetCrls",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::X509::Store::IX509Store, false>(const_cast<void*>(instance), ___internal_method, type);
}
 void Org::BouncyCastle::Cms::CmsSignedDataParser::PopulateCertCrlSets()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsSignedDataParser>::get(),
                            "PopulateCertCrlSets",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 Org::BouncyCastle::Asn1::DerObjectIdentifier Org::BouncyCastle::Cms::CmsSignedDataParser::get_SignedContentType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsSignedDataParser>::get(),
                            "get_SignedContentType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Asn1::DerObjectIdentifier, false>(const_cast<void*>(instance), ___internal_method);
}
 Org::BouncyCastle::Cms::CmsTypedStream Org::BouncyCastle::Cms::CmsSignedDataParser::GetSignedContent()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsSignedDataParser>::get(),
                            "GetSignedContent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Cms::CmsTypedStream, false>(const_cast<void*>(instance), ___internal_method);
}
 System::IO::Stream Org::BouncyCastle::Cms::CmsSignedDataParser::ReplaceSigners(System::IO::Stream original, Org::BouncyCastle::Cms::SignerInformationStore signerInformationStore, System::IO::Stream outStr)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsSignedDataParser>::get(),
                            "ReplaceSigners",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::Stream>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Cms::SignerInformationStore>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::Stream>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::IO::Stream, false>(nullptr, ___internal_method, original, signerInformationStore, outStr);
}
 System::IO::Stream Org::BouncyCastle::Cms::CmsSignedDataParser::ReplaceCertificatesAndCrls(System::IO::Stream original, Org::BouncyCastle::X509::Store::IX509Store x509Certs, Org::BouncyCastle::X509::Store::IX509Store x509Crls, Org::BouncyCastle::X509::Store::IX509Store x509AttrCerts, System::IO::Stream outStr)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsSignedDataParser>::get(),
                            "ReplaceCertificatesAndCrls",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::Stream>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::X509::Store::IX509Store>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::X509::Store::IX509Store>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::X509::Store::IX509Store>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::Stream>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::IO::Stream, false>(nullptr, ___internal_method, original, x509Certs, x509Crls, x509AttrCerts, outStr);
}
 Org::BouncyCastle::Asn1::Asn1Set Org::BouncyCastle::Cms::CmsSignedDataParser::GetAsn1Set(Org::BouncyCastle::Asn1::Asn1SetParser asn1SetParser)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsSignedDataParser>::get(),
                            "GetAsn1Set",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::Asn1SetParser>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Asn1::Asn1Set, false>(nullptr, ___internal_method, asn1SetParser);
}
