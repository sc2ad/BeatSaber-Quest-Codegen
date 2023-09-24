#pragma once
#include "Org/BouncyCastle/Cms/zzzz__RecipientInformation_impl.hpp"
#include "Org/BouncyCastle/Cms/zzzz__PasswordRecipientInformation_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ICipherParameters_def.hpp"
#include "Org/BouncyCastle/Cms/zzzz__CmsTypedStream_def.hpp"
#include "Org/BouncyCastle/Cms/zzzz__CmsSecureReadable_def.hpp"
#include "Org/BouncyCastle/Asn1/Cms/zzzz__PasswordRecipientInfo_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__AlgorithmIdentifier_def.hpp"
//  Writing Method size for method: Org::BouncyCastle::Cms::PasswordRecipientInformation._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Cms::PasswordRecipientInformation::*)(Org::BouncyCastle::Asn1::Cms::PasswordRecipientInfo, Org::BouncyCastle::Cms::CmsSecureReadable)>(&Org::BouncyCastle::Cms::PasswordRecipientInformation::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1158d98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::PasswordRecipientInformation>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::Cms::PasswordRecipientInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Cms::CmsSecureReadable>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Cms::PasswordRecipientInformation.get_KeyDerivationAlgorithm
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier (Org::BouncyCastle::Cms::PasswordRecipientInformation::*)()>(&Org::BouncyCastle::Cms::PasswordRecipientInformation::get_KeyDerivationAlgorithm)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x117c92c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Cms::PasswordRecipientInformation),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::PasswordRecipientInformation>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Cms::PasswordRecipientInformation.GetContentStream
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Cms::CmsTypedStream (Org::BouncyCastle::Cms::PasswordRecipientInformation::*)(Org::BouncyCastle::Crypto::ICipherParameters)>(&Org::BouncyCastle::Cms::PasswordRecipientInformation::GetContentStream)> {
  constexpr static std::size_t size = 0x574;
  constexpr static std::size_t addrs = 0x117c948;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Cms::PasswordRecipientInformation),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::PasswordRecipientInformation>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
constexpr void Org::BouncyCastle::Cms::PasswordRecipientInformation::__set_info(Org::BouncyCastle::Asn1::Cms::PasswordRecipientInfo value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Asn1::Cms::PasswordRecipientInfo, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Asn1::Cms::PasswordRecipientInfo>(value));
}
constexpr Org::BouncyCastle::Asn1::Cms::PasswordRecipientInfo Org::BouncyCastle::Cms::PasswordRecipientInformation::__get_info() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Asn1::Cms::PasswordRecipientInfo, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
 Org::BouncyCastle::Cms::PasswordRecipientInformation Org::BouncyCastle::Cms::PasswordRecipientInformation::New_ctor(Org::BouncyCastle::Asn1::Cms::PasswordRecipientInfo info, Org::BouncyCastle::Cms::CmsSecureReadable secureReadable)  {
Org::BouncyCastle::Cms::PasswordRecipientInformation o{THROW_UNLESS(::il2cpp_utils::New<Org::BouncyCastle::Cms::PasswordRecipientInformation>(info, secureReadable))};
return o;
}
 void Org::BouncyCastle::Cms::PasswordRecipientInformation::_ctor(Org::BouncyCastle::Asn1::Cms::PasswordRecipientInfo info, Org::BouncyCastle::Cms::CmsSecureReadable secureReadable)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::PasswordRecipientInformation>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::Cms::PasswordRecipientInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Cms::CmsSecureReadable>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, info, secureReadable);
}
 Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier Org::BouncyCastle::Cms::PasswordRecipientInformation::get_KeyDerivationAlgorithm()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::PasswordRecipientInformation>::get(),
                            "get_KeyDerivationAlgorithm",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier, false>(const_cast<void*>(instance), ___internal_method);
}
 Org::BouncyCastle::Cms::CmsTypedStream Org::BouncyCastle::Cms::PasswordRecipientInformation::GetContentStream(Org::BouncyCastle::Crypto::ICipherParameters key)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::PasswordRecipientInformation>::get(),
                            "GetContentStream",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::ICipherParameters>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Cms::CmsTypedStream, false>(const_cast<void*>(instance), ___internal_method, key);
}
