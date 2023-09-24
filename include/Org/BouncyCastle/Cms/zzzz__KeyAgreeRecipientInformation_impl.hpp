#pragma once
#include "Org/BouncyCastle/Cms/zzzz__RecipientInformation_impl.hpp"
#include "Org/BouncyCastle/Cms/zzzz__KeyAgreeRecipientInformation_def.hpp"
#include "Org/BouncyCastle/Cms/zzzz__OriginatorID_def.hpp"
#include "System/Collections/zzzz__IList_def.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__KeyParameter_def.hpp"
#include "Org/BouncyCastle/Asn1/Cms/zzzz__OriginatorIdentifierOrKey_def.hpp"
#include "Org/BouncyCastle/Asn1/Cms/zzzz__KeyAgreeRecipientInfo_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ICipherParameters_def.hpp"
#include "Org/BouncyCastle/Cms/zzzz__CmsTypedStream_def.hpp"
#include "Org/BouncyCastle/Asn1/Cms/zzzz__OriginatorPublicKey_def.hpp"
#include "Org/BouncyCastle/Cms/zzzz__RecipientID_def.hpp"
#include "Org/BouncyCastle/Cms/zzzz__CmsSecureReadable_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1OctetString_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__AsymmetricKeyParameter_def.hpp"
//  Writing Method size for method: Org::BouncyCastle::Cms::KeyAgreeRecipientInformation.ReadRecipientInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::Collections::IList, Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientInfo, Org::BouncyCastle::Cms::CmsSecureReadable)>(&Org::BouncyCastle::Cms::KeyAgreeRecipientInformation::ReadRecipientInfo)> {
  constexpr static std::size_t size = 0x57c;
  constexpr static std::size_t addrs = 0x115881c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::KeyAgreeRecipientInformation>::get(),
                            "ReadRecipientInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::IList>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Cms::CmsSecureReadable>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Cms::KeyAgreeRecipientInformation._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Cms::KeyAgreeRecipientInformation::*)(Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientInfo, Org::BouncyCastle::Cms::RecipientID, Org::BouncyCastle::Asn1::Asn1OctetString, Org::BouncyCastle::Cms::CmsSecureReadable)>(&Org::BouncyCastle::Cms::KeyAgreeRecipientInformation::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x1178d48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::KeyAgreeRecipientInformation>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Cms::RecipientID>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::Asn1OctetString>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Cms::CmsSecureReadable>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Cms::KeyAgreeRecipientInformation.GetSenderPublicKey
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Crypto::AsymmetricKeyParameter (Org::BouncyCastle::Cms::KeyAgreeRecipientInformation::*)(Org::BouncyCastle::Crypto::AsymmetricKeyParameter, Org::BouncyCastle::Asn1::Cms::OriginatorIdentifierOrKey)>(&Org::BouncyCastle::Cms::KeyAgreeRecipientInformation::GetSenderPublicKey)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x1178d90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::KeyAgreeRecipientInformation>::get(),
                            "GetSenderPublicKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::AsymmetricKeyParameter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::Cms::OriginatorIdentifierOrKey>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Cms::KeyAgreeRecipientInformation.GetPublicKeyFromOriginatorPublicKey
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Crypto::AsymmetricKeyParameter (Org::BouncyCastle::Cms::KeyAgreeRecipientInformation::*)(Org::BouncyCastle::Crypto::AsymmetricKeyParameter, Org::BouncyCastle::Asn1::Cms::OriginatorPublicKey)>(&Org::BouncyCastle::Cms::KeyAgreeRecipientInformation::GetPublicKeyFromOriginatorPublicKey)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1178e6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::KeyAgreeRecipientInformation>::get(),
                            "GetPublicKeyFromOriginatorPublicKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::AsymmetricKeyParameter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::Cms::OriginatorPublicKey>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Cms::KeyAgreeRecipientInformation.GetPublicKeyFromOriginatorID
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Crypto::AsymmetricKeyParameter (Org::BouncyCastle::Cms::KeyAgreeRecipientInformation::*)(Org::BouncyCastle::Cms::OriginatorID)>(&Org::BouncyCastle::Cms::KeyAgreeRecipientInformation::GetPublicKeyFromOriginatorID)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1178f2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::KeyAgreeRecipientInformation>::get(),
                            "GetPublicKeyFromOriginatorID",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Cms::OriginatorID>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Cms::KeyAgreeRecipientInformation.CalculateAgreedWrapKey
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Crypto::Parameters::KeyParameter (Org::BouncyCastle::Cms::KeyAgreeRecipientInformation::*)(::StringW, Org::BouncyCastle::Crypto::AsymmetricKeyParameter, Org::BouncyCastle::Crypto::AsymmetricKeyParameter)>(&Org::BouncyCastle::Cms::KeyAgreeRecipientInformation::CalculateAgreedWrapKey)> {
  constexpr static std::size_t size = 0x3d4;
  constexpr static std::size_t addrs = 0x1178f7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::KeyAgreeRecipientInformation>::get(),
                            "CalculateAgreedWrapKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::AsymmetricKeyParameter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::AsymmetricKeyParameter>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Cms::KeyAgreeRecipientInformation.UnwrapSessionKey
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Crypto::Parameters::KeyParameter (Org::BouncyCastle::Cms::KeyAgreeRecipientInformation::*)(::StringW, Org::BouncyCastle::Crypto::Parameters::KeyParameter)>(&Org::BouncyCastle::Cms::KeyAgreeRecipientInformation::UnwrapSessionKey)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x1179350;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::KeyAgreeRecipientInformation>::get(),
                            "UnwrapSessionKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::Parameters::KeyParameter>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Cms::KeyAgreeRecipientInformation.GetSessionKey
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Crypto::Parameters::KeyParameter (Org::BouncyCastle::Cms::KeyAgreeRecipientInformation::*)(Org::BouncyCastle::Crypto::AsymmetricKeyParameter)>(&Org::BouncyCastle::Cms::KeyAgreeRecipientInformation::GetSessionKey)> {
  constexpr static std::size_t size = 0x258;
  constexpr static std::size_t addrs = 0x1179510;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::KeyAgreeRecipientInformation>::get(),
                            "GetSessionKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::AsymmetricKeyParameter>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Cms::KeyAgreeRecipientInformation.GetContentStream
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Cms::CmsTypedStream (Org::BouncyCastle::Cms::KeyAgreeRecipientInformation::*)(Org::BouncyCastle::Crypto::ICipherParameters)>(&Org::BouncyCastle::Cms::KeyAgreeRecipientInformation::GetContentStream)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x1179768;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Cms::KeyAgreeRecipientInformation),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::KeyAgreeRecipientInformation>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
constexpr void Org::BouncyCastle::Cms::KeyAgreeRecipientInformation::__set_info(Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientInfo value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientInfo, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientInfo>(value));
}
constexpr Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientInfo Org::BouncyCastle::Cms::KeyAgreeRecipientInformation::__get_info() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientInfo, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Cms::KeyAgreeRecipientInformation::__set_encryptedKey(Org::BouncyCastle::Asn1::Asn1OctetString value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Asn1::Asn1OctetString, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Asn1::Asn1OctetString>(value));
}
constexpr Org::BouncyCastle::Asn1::Asn1OctetString Org::BouncyCastle::Cms::KeyAgreeRecipientInformation::__get_encryptedKey() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Asn1::Asn1OctetString, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void Org::BouncyCastle::Cms::KeyAgreeRecipientInformation::ReadRecipientInfo(System::Collections::IList infos, Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientInfo info, Org::BouncyCastle::Cms::CmsSecureReadable secureReadable)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::KeyAgreeRecipientInformation>::get(),
                            "ReadRecipientInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::IList>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Cms::CmsSecureReadable>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, infos, info, secureReadable);
}
 Org::BouncyCastle::Cms::KeyAgreeRecipientInformation Org::BouncyCastle::Cms::KeyAgreeRecipientInformation::New_ctor(Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientInfo info, Org::BouncyCastle::Cms::RecipientID rid, Org::BouncyCastle::Asn1::Asn1OctetString encryptedKey, Org::BouncyCastle::Cms::CmsSecureReadable secureReadable)  {
Org::BouncyCastle::Cms::KeyAgreeRecipientInformation o{THROW_UNLESS(::il2cpp_utils::New<Org::BouncyCastle::Cms::KeyAgreeRecipientInformation>(info, rid, encryptedKey, secureReadable))};
return o;
}
 void Org::BouncyCastle::Cms::KeyAgreeRecipientInformation::_ctor(Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientInfo info, Org::BouncyCastle::Cms::RecipientID rid, Org::BouncyCastle::Asn1::Asn1OctetString encryptedKey, Org::BouncyCastle::Cms::CmsSecureReadable secureReadable)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::KeyAgreeRecipientInformation>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Cms::RecipientID>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::Asn1OctetString>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Cms::CmsSecureReadable>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, info, rid, encryptedKey, secureReadable);
}
 Org::BouncyCastle::Crypto::AsymmetricKeyParameter Org::BouncyCastle::Cms::KeyAgreeRecipientInformation::GetSenderPublicKey(Org::BouncyCastle::Crypto::AsymmetricKeyParameter receiverPrivateKey, Org::BouncyCastle::Asn1::Cms::OriginatorIdentifierOrKey originator)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::KeyAgreeRecipientInformation>::get(),
                            "GetSenderPublicKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::AsymmetricKeyParameter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::Cms::OriginatorIdentifierOrKey>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Crypto::AsymmetricKeyParameter, false>(const_cast<void*>(instance), ___internal_method, receiverPrivateKey, originator);
}
 Org::BouncyCastle::Crypto::AsymmetricKeyParameter Org::BouncyCastle::Cms::KeyAgreeRecipientInformation::GetPublicKeyFromOriginatorPublicKey(Org::BouncyCastle::Crypto::AsymmetricKeyParameter receiverPrivateKey, Org::BouncyCastle::Asn1::Cms::OriginatorPublicKey originatorPublicKey)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::KeyAgreeRecipientInformation>::get(),
                            "GetPublicKeyFromOriginatorPublicKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::AsymmetricKeyParameter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::Cms::OriginatorPublicKey>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Crypto::AsymmetricKeyParameter, false>(const_cast<void*>(instance), ___internal_method, receiverPrivateKey, originatorPublicKey);
}
 Org::BouncyCastle::Crypto::AsymmetricKeyParameter Org::BouncyCastle::Cms::KeyAgreeRecipientInformation::GetPublicKeyFromOriginatorID(Org::BouncyCastle::Cms::OriginatorID origID)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::KeyAgreeRecipientInformation>::get(),
                            "GetPublicKeyFromOriginatorID",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Cms::OriginatorID>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Crypto::AsymmetricKeyParameter, false>(const_cast<void*>(instance), ___internal_method, origID);
}
 Org::BouncyCastle::Crypto::Parameters::KeyParameter Org::BouncyCastle::Cms::KeyAgreeRecipientInformation::CalculateAgreedWrapKey(::StringW wrapAlg, Org::BouncyCastle::Crypto::AsymmetricKeyParameter senderPublicKey, Org::BouncyCastle::Crypto::AsymmetricKeyParameter receiverPrivateKey)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::KeyAgreeRecipientInformation>::get(),
                            "CalculateAgreedWrapKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::AsymmetricKeyParameter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::AsymmetricKeyParameter>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Crypto::Parameters::KeyParameter, false>(const_cast<void*>(instance), ___internal_method, wrapAlg, senderPublicKey, receiverPrivateKey);
}
 Org::BouncyCastle::Crypto::Parameters::KeyParameter Org::BouncyCastle::Cms::KeyAgreeRecipientInformation::UnwrapSessionKey(::StringW wrapAlg, Org::BouncyCastle::Crypto::Parameters::KeyParameter agreedKey)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::KeyAgreeRecipientInformation>::get(),
                            "UnwrapSessionKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::Parameters::KeyParameter>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Crypto::Parameters::KeyParameter, false>(const_cast<void*>(instance), ___internal_method, wrapAlg, agreedKey);
}
 Org::BouncyCastle::Crypto::Parameters::KeyParameter Org::BouncyCastle::Cms::KeyAgreeRecipientInformation::GetSessionKey(Org::BouncyCastle::Crypto::AsymmetricKeyParameter receiverPrivateKey)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::KeyAgreeRecipientInformation>::get(),
                            "GetSessionKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::AsymmetricKeyParameter>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Crypto::Parameters::KeyParameter, false>(const_cast<void*>(instance), ___internal_method, receiverPrivateKey);
}
 Org::BouncyCastle::Cms::CmsTypedStream Org::BouncyCastle::Cms::KeyAgreeRecipientInformation::GetContentStream(Org::BouncyCastle::Crypto::ICipherParameters key)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::KeyAgreeRecipientInformation>::get(),
                            "GetContentStream",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::ICipherParameters>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Cms::CmsTypedStream, false>(const_cast<void*>(instance), ___internal_method, key);
}
