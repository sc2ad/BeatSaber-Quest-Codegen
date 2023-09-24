#pragma once
#include "Org/BouncyCastle/Crypto/Operators/zzzz__RsaOaepWrapper_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ICipherParameters_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerObjectIdentifier_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IAsymmetricBlockCipher_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IKeyUnwrapper_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__AlgorithmIdentifier_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IBlockResult_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IKeyWrapper_def.hpp"
//  Writing Method size for method: Org::BouncyCastle::Crypto::Operators::RsaOaepWrapper._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Operators::RsaOaepWrapper::*)(bool, Org::BouncyCastle::Crypto::ICipherParameters, Org::BouncyCastle::Asn1::DerObjectIdentifier)>(&Org::BouncyCastle::Crypto::Operators::RsaOaepWrapper::_ctor)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0xe9c198;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Operators::RsaOaepWrapper>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::ICipherParameters>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::DerObjectIdentifier>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Operators::RsaOaepWrapper.get_AlgorithmDetails
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (Org::BouncyCastle::Crypto::Operators::RsaOaepWrapper::*)()>(&Org::BouncyCastle::Crypto::Operators::RsaOaepWrapper::get_AlgorithmDetails)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe9c438;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Operators::RsaOaepWrapper>::get(),
                            "get_AlgorithmDetails",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Operators::RsaOaepWrapper.Unwrap
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Crypto::IBlockResult (Org::BouncyCastle::Crypto::Operators::RsaOaepWrapper::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&Org::BouncyCastle::Crypto::Operators::RsaOaepWrapper::Unwrap)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0xe9c440;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Operators::RsaOaepWrapper>::get(),
                            "Unwrap",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Operators::RsaOaepWrapper.Wrap
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Crypto::IBlockResult (Org::BouncyCastle::Crypto::Operators::RsaOaepWrapper::*)(::ArrayW<uint8_t>)>(&Org::BouncyCastle::Crypto::Operators::RsaOaepWrapper::Wrap)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0xe9c544;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Operators::RsaOaepWrapper>::get(),
                            "Wrap",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to Org::BouncyCastle::Crypto::IKeyWrapper
constexpr  Org::BouncyCastle::Crypto::Operators::RsaOaepWrapper::operator Org::BouncyCastle::Crypto::IKeyWrapper() const noexcept {
return Org::BouncyCastle::Crypto::IKeyWrapper(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to Org::BouncyCastle::Crypto::IKeyUnwrapper
constexpr  Org::BouncyCastle::Crypto::Operators::RsaOaepWrapper::operator Org::BouncyCastle::Crypto::IKeyUnwrapper() const noexcept {
return Org::BouncyCastle::Crypto::IKeyUnwrapper(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Crypto::Operators::RsaOaepWrapper::__set_algId(Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier>(value));
}
constexpr Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier Org::BouncyCastle::Crypto::Operators::RsaOaepWrapper::__get_algId() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Crypto::Operators::RsaOaepWrapper::__set_engine(Org::BouncyCastle::Crypto::IAsymmetricBlockCipher value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Crypto::IAsymmetricBlockCipher, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Crypto::IAsymmetricBlockCipher>(value));
}
constexpr Org::BouncyCastle::Crypto::IAsymmetricBlockCipher Org::BouncyCastle::Crypto::Operators::RsaOaepWrapper::__get_engine() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Crypto::IAsymmetricBlockCipher, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 Org::BouncyCastle::Crypto::Operators::RsaOaepWrapper Org::BouncyCastle::Crypto::Operators::RsaOaepWrapper::New_ctor(bool forWrapping, Org::BouncyCastle::Crypto::ICipherParameters parameters, Org::BouncyCastle::Asn1::DerObjectIdentifier digestOid)  {
Org::BouncyCastle::Crypto::Operators::RsaOaepWrapper o{THROW_UNLESS(::il2cpp_utils::New<Org::BouncyCastle::Crypto::Operators::RsaOaepWrapper>(forWrapping, parameters, digestOid))};
return o;
}
 void Org::BouncyCastle::Crypto::Operators::RsaOaepWrapper::_ctor(bool forWrapping, Org::BouncyCastle::Crypto::ICipherParameters parameters, Org::BouncyCastle::Asn1::DerObjectIdentifier digestOid)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Operators::RsaOaepWrapper>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::ICipherParameters>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::DerObjectIdentifier>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, forWrapping, parameters, digestOid);
}
 ::bs_hook::Il2CppWrapperType Org::BouncyCastle::Crypto::Operators::RsaOaepWrapper::get_AlgorithmDetails()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Operators::RsaOaepWrapper>::get(),
                            "get_AlgorithmDetails",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method);
}
 Org::BouncyCastle::Crypto::IBlockResult Org::BouncyCastle::Crypto::Operators::RsaOaepWrapper::Unwrap(::ArrayW<uint8_t> cipherText, int32_t offset, int32_t length)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Operators::RsaOaepWrapper>::get(),
                            "Unwrap",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Crypto::IBlockResult, false>(const_cast<void*>(instance), ___internal_method, cipherText, offset, length);
}
 Org::BouncyCastle::Crypto::IBlockResult Org::BouncyCastle::Crypto::Operators::RsaOaepWrapper::Wrap(::ArrayW<uint8_t> keyData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Operators::RsaOaepWrapper>::get(),
                            "Wrap",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Crypto::IBlockResult, false>(const_cast<void*>(instance), ___internal_method, keyData);
}
