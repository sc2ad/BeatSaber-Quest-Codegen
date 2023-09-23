#pragma once
#include "Org/BouncyCastle/Cms/zzzz__RecipientInformation_def.hpp"
#include "Org/BouncyCastle/Cms/zzzz__RecipientID_def.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__KeyParameter_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__AlgorithmIdentifier_def.hpp"
#include "Org/BouncyCastle/Cms/zzzz__CmsSecureReadable_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ICipherParameters_def.hpp"
#include "Org/BouncyCastle/Cms/zzzz__CmsTypedStream_def.hpp"
//  Writing Method size for method: Org::BouncyCastle::Cms::RecipientInformation._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Cms::RecipientInformation::*)(Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier, Org::BouncyCastle::Cms::CmsSecureReadable)>(&Org::BouncyCastle::Cms::RecipientInformation::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x1176ebc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::RecipientInformation>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Cms::CmsSecureReadable>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Cms::RecipientInformation.GetContentAlgorithmName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Org::BouncyCastle::Cms::RecipientInformation::*)()>(&Org::BouncyCastle::Cms::RecipientInformation::GetContentAlgorithmName)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x1176f54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::RecipientInformation>::get(),
                            "GetContentAlgorithmName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Cms::RecipientInformation.get_RecipientID
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Cms::RecipientID (Org::BouncyCastle::Cms::RecipientInformation::*)()>(&Org::BouncyCastle::Cms::RecipientInformation::get_RecipientID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1177010;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::RecipientInformation>::get(),
                            "get_RecipientID",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Cms::RecipientInformation.get_KeyEncryptionAlgorithmID
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier (Org::BouncyCastle::Cms::RecipientInformation::*)()>(&Org::BouncyCastle::Cms::RecipientInformation::get_KeyEncryptionAlgorithmID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1177018;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::RecipientInformation>::get(),
                            "get_KeyEncryptionAlgorithmID",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Cms::RecipientInformation.get_KeyEncryptionAlgOid
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Org::BouncyCastle::Cms::RecipientInformation::*)()>(&Org::BouncyCastle::Cms::RecipientInformation::get_KeyEncryptionAlgOid)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x1177020;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::RecipientInformation>::get(),
                            "get_KeyEncryptionAlgOid",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Cms::RecipientInformation.get_KeyEncryptionAlgParams
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::Asn1Object (Org::BouncyCastle::Cms::RecipientInformation::*)()>(&Org::BouncyCastle::Cms::RecipientInformation::get_KeyEncryptionAlgParams)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x117704c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::RecipientInformation>::get(),
                            "get_KeyEncryptionAlgParams",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Cms::RecipientInformation.GetContentFromSessionKey
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Cms::CmsTypedStream (Org::BouncyCastle::Cms::RecipientInformation::*)(Org::BouncyCastle::Crypto::Parameters::KeyParameter)>(&Org::BouncyCastle::Cms::RecipientInformation::GetContentFromSessionKey)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0x1177084;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::RecipientInformation>::get(),
                            "GetContentFromSessionKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::Parameters::KeyParameter>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Cms::RecipientInformation.GetContent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (Org::BouncyCastle::Cms::RecipientInformation::*)(Org::BouncyCastle::Crypto::ICipherParameters)>(&Org::BouncyCastle::Cms::RecipientInformation::GetContent)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x11772b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::RecipientInformation>::get(),
                            "GetContent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::ICipherParameters>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Cms::RecipientInformation.GetMac
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (Org::BouncyCastle::Cms::RecipientInformation::*)()>(&Org::BouncyCastle::Cms::RecipientInformation::GetMac)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x11773b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::RecipientInformation>::get(),
                            "GetMac",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Cms::RecipientInformation.GetContentStream
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Cms::CmsTypedStream (Org::BouncyCastle::Cms::RecipientInformation::*)(Org::BouncyCastle::Crypto::ICipherParameters)>(&Org::BouncyCastle::Cms::RecipientInformation::GetContentStream)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Cms::RecipientInformation),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::RecipientInformation>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
constexpr void Org::BouncyCastle::Cms::RecipientInformation::__set_rid(Org::BouncyCastle::Cms::RecipientID value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Cms::RecipientID, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Cms::RecipientID>(value));
}
constexpr Org::BouncyCastle::Cms::RecipientID Org::BouncyCastle::Cms::RecipientInformation::__get_rid() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Cms::RecipientID, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Cms::RecipientInformation::__set_keyEncAlg(Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier>(value));
}
constexpr Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier Org::BouncyCastle::Cms::RecipientInformation::__get_keyEncAlg() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Cms::RecipientInformation::__set_secureReadable(Org::BouncyCastle::Cms::CmsSecureReadable value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Cms::CmsSecureReadable, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Cms::CmsSecureReadable>(value));
}
constexpr Org::BouncyCastle::Cms::CmsSecureReadable Org::BouncyCastle::Cms::RecipientInformation::__get_secureReadable() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Cms::CmsSecureReadable, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Cms::RecipientInformation::__set_resultMac(::ArrayW<uint8_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<uint8_t>>(value));
}
constexpr ::ArrayW<uint8_t> Org::BouncyCastle::Cms::RecipientInformation::__get_resultMac() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "keyEncAlg", ty: "Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier", modifiers: "", def_value: None }, CppParam { name: "secureReadable", ty: "Org::BouncyCastle::Cms::CmsSecureReadable", modifiers: "", def_value: None }]
 Org::BouncyCastle::Cms::RecipientInformation::RecipientInformation(Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier keyEncAlg, Org::BouncyCastle::Cms::CmsSecureReadable secureReadable)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<RecipientInformation>(keyEncAlg, secureReadable))) {}
 void Org::BouncyCastle::Cms::RecipientInformation::_ctor(Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier keyEncAlg, Org::BouncyCastle::Cms::CmsSecureReadable secureReadable)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::RecipientInformation>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Cms::CmsSecureReadable>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, keyEncAlg, secureReadable);
}
 ::StringW Org::BouncyCastle::Cms::RecipientInformation::GetContentAlgorithmName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::RecipientInformation>::get(),
                            "GetContentAlgorithmName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 Org::BouncyCastle::Cms::RecipientID Org::BouncyCastle::Cms::RecipientInformation::get_RecipientID()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::RecipientInformation>::get(),
                            "get_RecipientID",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Cms::RecipientID, false>(const_cast<void*>(instance), ___internal_method);
}
 Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier Org::BouncyCastle::Cms::RecipientInformation::get_KeyEncryptionAlgorithmID()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::RecipientInformation>::get(),
                            "get_KeyEncryptionAlgorithmID",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW Org::BouncyCastle::Cms::RecipientInformation::get_KeyEncryptionAlgOid()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::RecipientInformation>::get(),
                            "get_KeyEncryptionAlgOid",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 Org::BouncyCastle::Asn1::Asn1Object Org::BouncyCastle::Cms::RecipientInformation::get_KeyEncryptionAlgParams()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::RecipientInformation>::get(),
                            "get_KeyEncryptionAlgParams",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Asn1::Asn1Object, false>(const_cast<void*>(instance), ___internal_method);
}
 Org::BouncyCastle::Cms::CmsTypedStream Org::BouncyCastle::Cms::RecipientInformation::GetContentFromSessionKey(Org::BouncyCastle::Crypto::Parameters::KeyParameter sKey)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::RecipientInformation>::get(),
                            "GetContentFromSessionKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::Parameters::KeyParameter>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Cms::CmsTypedStream, false>(const_cast<void*>(instance), ___internal_method, sKey);
}
 ::ArrayW<uint8_t> Org::BouncyCastle::Cms::RecipientInformation::GetContent(Org::BouncyCastle::Crypto::ICipherParameters key)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::RecipientInformation>::get(),
                            "GetContent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::ICipherParameters>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(const_cast<void*>(instance), ___internal_method, key);
}
 ::ArrayW<uint8_t> Org::BouncyCastle::Cms::RecipientInformation::GetMac()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::RecipientInformation>::get(),
                            "GetMac",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(const_cast<void*>(instance), ___internal_method);
}
 Org::BouncyCastle::Cms::CmsTypedStream Org::BouncyCastle::Cms::RecipientInformation::GetContentStream(Org::BouncyCastle::Crypto::ICipherParameters key)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::RecipientInformation>::get(),
                            "GetContentStream",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::ICipherParameters>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Cms::CmsTypedStream, false>(const_cast<void*>(instance), ___internal_method, key);
}
