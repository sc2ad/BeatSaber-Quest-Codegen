#pragma once
#include "Org/BouncyCastle/Cms/zzzz__CmsContentInfoParser_impl.hpp"
#include "Org/BouncyCastle/Cms/zzzz__CmsAuthenticatedDataParser_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__AlgorithmIdentifier_def.hpp"
#include "Org/BouncyCastle/Asn1/Cms/zzzz__AuthenticatedDataParser_def.hpp"
#include "Org/BouncyCastle/Asn1/Cms/zzzz__AttributeTable_def.hpp"
#include "Org/BouncyCastle/Cms/zzzz__RecipientInformationStore_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
//  Writing Method size for method: Org::BouncyCastle::Cms::CmsAuthenticatedDataParser._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Cms::CmsAuthenticatedDataParser::*)(::ArrayW<uint8_t>)>(&Org::BouncyCastle::Cms::CmsAuthenticatedDataParser::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x1150638;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsAuthenticatedDataParser>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Cms::CmsAuthenticatedDataParser._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Cms::CmsAuthenticatedDataParser::*)(System::IO::Stream)>(&Org::BouncyCastle::Cms::CmsAuthenticatedDataParser::_ctor)> {
  constexpr static std::size_t size = 0x308;
  constexpr static std::size_t addrs = 0x11506b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsAuthenticatedDataParser>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::Stream>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Cms::CmsAuthenticatedDataParser.get_MacAlgorithmID
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier (Org::BouncyCastle::Cms::CmsAuthenticatedDataParser::*)()>(&Org::BouncyCastle::Cms::CmsAuthenticatedDataParser::get_MacAlgorithmID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x11509b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsAuthenticatedDataParser>::get(),
                            "get_MacAlgorithmID",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Cms::CmsAuthenticatedDataParser.get_MacAlgOid
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Org::BouncyCastle::Cms::CmsAuthenticatedDataParser::*)()>(&Org::BouncyCastle::Cms::CmsAuthenticatedDataParser::get_MacAlgOid)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x11509c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsAuthenticatedDataParser>::get(),
                            "get_MacAlgOid",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Cms::CmsAuthenticatedDataParser.get_MacAlgParams
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::Asn1Object (Org::BouncyCastle::Cms::CmsAuthenticatedDataParser::*)()>(&Org::BouncyCastle::Cms::CmsAuthenticatedDataParser::get_MacAlgParams)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x11509ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsAuthenticatedDataParser>::get(),
                            "get_MacAlgParams",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Cms::CmsAuthenticatedDataParser.GetRecipientInfos
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Cms::RecipientInformationStore (Org::BouncyCastle::Cms::CmsAuthenticatedDataParser::*)()>(&Org::BouncyCastle::Cms::CmsAuthenticatedDataParser::GetRecipientInfos)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1150a24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsAuthenticatedDataParser>::get(),
                            "GetRecipientInfos",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Cms::CmsAuthenticatedDataParser.GetMac
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (Org::BouncyCastle::Cms::CmsAuthenticatedDataParser::*)()>(&Org::BouncyCastle::Cms::CmsAuthenticatedDataParser::GetMac)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x1150a2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsAuthenticatedDataParser>::get(),
                            "GetMac",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Cms::CmsAuthenticatedDataParser.GetAuthAttrs
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::Cms::AttributeTable (Org::BouncyCastle::Cms::CmsAuthenticatedDataParser::*)()>(&Org::BouncyCastle::Cms::CmsAuthenticatedDataParser::GetAuthAttrs)> {
  constexpr static std::size_t size = 0x24c;
  constexpr static std::size_t addrs = 0x1150ac0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsAuthenticatedDataParser>::get(),
                            "GetAuthAttrs",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Cms::CmsAuthenticatedDataParser.GetUnauthAttrs
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::Cms::AttributeTable (Org::BouncyCastle::Cms::CmsAuthenticatedDataParser::*)()>(&Org::BouncyCastle::Cms::CmsAuthenticatedDataParser::GetUnauthAttrs)> {
  constexpr static std::size_t size = 0x24c;
  constexpr static std::size_t addrs = 0x1150d0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsAuthenticatedDataParser>::get(),
                            "GetUnauthAttrs",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void Org::BouncyCastle::Cms::CmsAuthenticatedDataParser::__set__recipientInfoStore(Org::BouncyCastle::Cms::RecipientInformationStore value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Cms::RecipientInformationStore, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Cms::RecipientInformationStore>(value));
}
constexpr Org::BouncyCastle::Cms::RecipientInformationStore Org::BouncyCastle::Cms::CmsAuthenticatedDataParser::__get__recipientInfoStore() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Cms::RecipientInformationStore, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Cms::CmsAuthenticatedDataParser::__set_authData(Org::BouncyCastle::Asn1::Cms::AuthenticatedDataParser value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Asn1::Cms::AuthenticatedDataParser, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Asn1::Cms::AuthenticatedDataParser>(value));
}
constexpr Org::BouncyCastle::Asn1::Cms::AuthenticatedDataParser Org::BouncyCastle::Cms::CmsAuthenticatedDataParser::__get_authData() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Asn1::Cms::AuthenticatedDataParser, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Cms::CmsAuthenticatedDataParser::__set_macAlg(Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier>(value));
}
constexpr Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier Org::BouncyCastle::Cms::CmsAuthenticatedDataParser::__get_macAlg() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Cms::CmsAuthenticatedDataParser::__set_mac(::ArrayW<uint8_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t>, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<uint8_t>>(value));
}
constexpr ::ArrayW<uint8_t> Org::BouncyCastle::Cms::CmsAuthenticatedDataParser::__get_mac() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t>, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Cms::CmsAuthenticatedDataParser::__set_authAttrs(Org::BouncyCastle::Asn1::Cms::AttributeTable value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Asn1::Cms::AttributeTable, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Asn1::Cms::AttributeTable>(value));
}
constexpr Org::BouncyCastle::Asn1::Cms::AttributeTable Org::BouncyCastle::Cms::CmsAuthenticatedDataParser::__get_authAttrs() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Asn1::Cms::AttributeTable, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Cms::CmsAuthenticatedDataParser::__set_unauthAttrs(Org::BouncyCastle::Asn1::Cms::AttributeTable value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Asn1::Cms::AttributeTable, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Asn1::Cms::AttributeTable>(value));
}
constexpr Org::BouncyCastle::Asn1::Cms::AttributeTable Org::BouncyCastle::Cms::CmsAuthenticatedDataParser::__get_unauthAttrs() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Asn1::Cms::AttributeTable, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Cms::CmsAuthenticatedDataParser::__set_authAttrNotRead(bool value)  {
::cordl_internals::setInstanceField<bool, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool Org::BouncyCastle::Cms::CmsAuthenticatedDataParser::__get_authAttrNotRead() const {
return ::cordl_internals::getInstanceField<bool, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Cms::CmsAuthenticatedDataParser::__set_unauthAttrNotRead(bool value)  {
::cordl_internals::setInstanceField<bool, 0x51>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool Org::BouncyCastle::Cms::CmsAuthenticatedDataParser::__get_unauthAttrNotRead() const {
return ::cordl_internals::getInstanceField<bool, 0x51>(this->::bs_hook::Il2CppWrapperType::instance);
}
 Org::BouncyCastle::Cms::CmsAuthenticatedDataParser Org::BouncyCastle::Cms::CmsAuthenticatedDataParser::New_ctor(::ArrayW<uint8_t> envelopedData)  {
Org::BouncyCastle::Cms::CmsAuthenticatedDataParser o{THROW_UNLESS(::il2cpp_utils::New<Org::BouncyCastle::Cms::CmsAuthenticatedDataParser>(envelopedData))};
return o;
}
 void Org::BouncyCastle::Cms::CmsAuthenticatedDataParser::_ctor(::ArrayW<uint8_t> envelopedData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsAuthenticatedDataParser>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, envelopedData);
}
 Org::BouncyCastle::Cms::CmsAuthenticatedDataParser Org::BouncyCastle::Cms::CmsAuthenticatedDataParser::New_ctor(System::IO::Stream envelopedData)  {
Org::BouncyCastle::Cms::CmsAuthenticatedDataParser o{THROW_UNLESS(::il2cpp_utils::New<Org::BouncyCastle::Cms::CmsAuthenticatedDataParser>(envelopedData))};
return o;
}
 void Org::BouncyCastle::Cms::CmsAuthenticatedDataParser::_ctor(System::IO::Stream envelopedData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsAuthenticatedDataParser>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::Stream>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, envelopedData);
}
 Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier Org::BouncyCastle::Cms::CmsAuthenticatedDataParser::get_MacAlgorithmID()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsAuthenticatedDataParser>::get(),
                            "get_MacAlgorithmID",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW Org::BouncyCastle::Cms::CmsAuthenticatedDataParser::get_MacAlgOid()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsAuthenticatedDataParser>::get(),
                            "get_MacAlgOid",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 Org::BouncyCastle::Asn1::Asn1Object Org::BouncyCastle::Cms::CmsAuthenticatedDataParser::get_MacAlgParams()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsAuthenticatedDataParser>::get(),
                            "get_MacAlgParams",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Asn1::Asn1Object, false>(const_cast<void*>(instance), ___internal_method);
}
 Org::BouncyCastle::Cms::RecipientInformationStore Org::BouncyCastle::Cms::CmsAuthenticatedDataParser::GetRecipientInfos()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsAuthenticatedDataParser>::get(),
                            "GetRecipientInfos",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Cms::RecipientInformationStore, false>(const_cast<void*>(instance), ___internal_method);
}
 ::ArrayW<uint8_t> Org::BouncyCastle::Cms::CmsAuthenticatedDataParser::GetMac()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsAuthenticatedDataParser>::get(),
                            "GetMac",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(const_cast<void*>(instance), ___internal_method);
}
 Org::BouncyCastle::Asn1::Cms::AttributeTable Org::BouncyCastle::Cms::CmsAuthenticatedDataParser::GetAuthAttrs()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsAuthenticatedDataParser>::get(),
                            "GetAuthAttrs",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Asn1::Cms::AttributeTable, false>(const_cast<void*>(instance), ___internal_method);
}
 Org::BouncyCastle::Asn1::Cms::AttributeTable Org::BouncyCastle::Cms::CmsAuthenticatedDataParser::GetUnauthAttrs()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsAuthenticatedDataParser>::get(),
                            "GetUnauthAttrs",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Asn1::Cms::AttributeTable, false>(const_cast<void*>(instance), ___internal_method);
}
