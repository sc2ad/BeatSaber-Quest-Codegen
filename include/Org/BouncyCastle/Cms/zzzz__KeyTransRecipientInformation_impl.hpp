#pragma once
#include "Org/BouncyCastle/Cms/zzzz__RecipientInformation_impl.hpp"
#include "Org/BouncyCastle/Cms/zzzz__KeyTransRecipientInformation_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__AlgorithmIdentifier_def.hpp"
#include "Org/BouncyCastle/Cms/zzzz__CmsSecureReadable_def.hpp"
#include "Org/BouncyCastle/Asn1/Cms/zzzz__KeyTransRecipientInfo_def.hpp"
#include "Org/BouncyCastle/Cms/zzzz__CmsTypedStream_def.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__KeyParameter_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ICipherParameters_def.hpp"
//  Writing Method size for method: Org::BouncyCastle::Cms::KeyTransRecipientInformation._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Cms::KeyTransRecipientInformation::*)(Org::BouncyCastle::Asn1::Cms::KeyTransRecipientInfo, Org::BouncyCastle::Cms::CmsSecureReadable)>(&Org::BouncyCastle::Cms::KeyTransRecipientInformation::_ctor)> {
  constexpr static std::size_t size = 0x21c;
  constexpr static std::size_t addrs = 0x115854c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::KeyTransRecipientInformation>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::Cms::KeyTransRecipientInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Cms::CmsSecureReadable>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Cms::KeyTransRecipientInformation.GetExchangeEncryptionAlgorithmName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Org::BouncyCastle::Cms::KeyTransRecipientInformation::*)(Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier)>(&Org::BouncyCastle::Cms::KeyTransRecipientInformation::GetExchangeEncryptionAlgorithmName)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x1179e94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::KeyTransRecipientInformation>::get(),
                            "GetExchangeEncryptionAlgorithmName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Cms::KeyTransRecipientInformation.UnwrapKey
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Crypto::Parameters::KeyParameter (Org::BouncyCastle::Cms::KeyTransRecipientInformation::*)(Org::BouncyCastle::Crypto::ICipherParameters)>(&Org::BouncyCastle::Cms::KeyTransRecipientInformation::UnwrapKey)> {
  constexpr static std::size_t size = 0x388;
  constexpr static std::size_t addrs = 0x117a058;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::KeyTransRecipientInformation>::get(),
                            "UnwrapKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::ICipherParameters>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Cms::KeyTransRecipientInformation.GetContentStream
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Cms::CmsTypedStream (Org::BouncyCastle::Cms::KeyTransRecipientInformation::*)(Org::BouncyCastle::Crypto::ICipherParameters)>(&Org::BouncyCastle::Cms::KeyTransRecipientInformation::GetContentStream)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x117a3e0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Cms::KeyTransRecipientInformation),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::KeyTransRecipientInformation>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
constexpr void Org::BouncyCastle::Cms::KeyTransRecipientInformation::__set_info(Org::BouncyCastle::Asn1::Cms::KeyTransRecipientInfo value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Asn1::Cms::KeyTransRecipientInfo, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Asn1::Cms::KeyTransRecipientInfo>(value));
}
constexpr Org::BouncyCastle::Asn1::Cms::KeyTransRecipientInfo Org::BouncyCastle::Cms::KeyTransRecipientInformation::__get_info() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Asn1::Cms::KeyTransRecipientInfo, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "info", ty: "Org::BouncyCastle::Asn1::Cms::KeyTransRecipientInfo", modifiers: "", def_value: None }, CppParam { name: "secureReadable", ty: "Org::BouncyCastle::Cms::CmsSecureReadable", modifiers: "", def_value: None }]
 Org::BouncyCastle::Cms::KeyTransRecipientInformation::KeyTransRecipientInformation(Org::BouncyCastle::Asn1::Cms::KeyTransRecipientInfo info, Org::BouncyCastle::Cms::CmsSecureReadable secureReadable)  : Org::BouncyCastle::Cms::RecipientInformation(THROW_UNLESS(::il2cpp_utils::New<KeyTransRecipientInformation>(info, secureReadable))) {}
 void Org::BouncyCastle::Cms::KeyTransRecipientInformation::_ctor(Org::BouncyCastle::Asn1::Cms::KeyTransRecipientInfo info, Org::BouncyCastle::Cms::CmsSecureReadable secureReadable)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::KeyTransRecipientInformation>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::Cms::KeyTransRecipientInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Cms::CmsSecureReadable>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, info, secureReadable);
}
 ::StringW Org::BouncyCastle::Cms::KeyTransRecipientInformation::GetExchangeEncryptionAlgorithmName(Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier algo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::KeyTransRecipientInformation>::get(),
                            "GetExchangeEncryptionAlgorithmName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method, algo);
}
 Org::BouncyCastle::Crypto::Parameters::KeyParameter Org::BouncyCastle::Cms::KeyTransRecipientInformation::UnwrapKey(Org::BouncyCastle::Crypto::ICipherParameters key)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::KeyTransRecipientInformation>::get(),
                            "UnwrapKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::ICipherParameters>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Crypto::Parameters::KeyParameter, false>(const_cast<void*>(instance), ___internal_method, key);
}
 Org::BouncyCastle::Cms::CmsTypedStream Org::BouncyCastle::Cms::KeyTransRecipientInformation::GetContentStream(Org::BouncyCastle::Crypto::ICipherParameters key)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::KeyTransRecipientInformation>::get(),
                            "GetContentStream",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::ICipherParameters>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Cms::CmsTypedStream, false>(const_cast<void*>(instance), ___internal_method, key);
}
