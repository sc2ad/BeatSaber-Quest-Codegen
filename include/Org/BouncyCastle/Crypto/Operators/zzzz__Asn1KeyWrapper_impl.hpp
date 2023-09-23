#pragma once
#include "Org/BouncyCastle/Crypto/Operators/zzzz__Asn1KeyWrapper_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IKeyWrapper_def.hpp"
#include "Org/BouncyCastle/X509/zzzz__X509Certificate_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IBlockResult_def.hpp"
//  Writing Method size for method: Org::BouncyCastle::Crypto::Operators::Asn1KeyWrapper._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Operators::Asn1KeyWrapper::*)(::StringW, Org::BouncyCastle::X509::X509Certificate)>(&Org::BouncyCastle::Crypto::Operators::Asn1KeyWrapper::_ctor)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xe9b690;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Operators::Asn1KeyWrapper>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::X509::X509Certificate>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Operators::Asn1KeyWrapper.get_AlgorithmDetails
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (Org::BouncyCastle::Crypto::Operators::Asn1KeyWrapper::*)()>(&Org::BouncyCastle::Crypto::Operators::Asn1KeyWrapper::get_AlgorithmDetails)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xe9b96c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Operators::Asn1KeyWrapper>::get(),
                            "get_AlgorithmDetails",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Operators::Asn1KeyWrapper.Wrap
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Crypto::IBlockResult (Org::BouncyCastle::Crypto::Operators::Asn1KeyWrapper::*)(::ArrayW<uint8_t>)>(&Org::BouncyCastle::Crypto::Operators::Asn1KeyWrapper::Wrap)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xe9ba0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Operators::Asn1KeyWrapper>::get(),
                            "Wrap",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to Org::BouncyCastle::Crypto::IKeyWrapper
constexpr  Org::BouncyCastle::Crypto::Operators::Asn1KeyWrapper::operator Org::BouncyCastle::Crypto::IKeyWrapper() const noexcept {
return Org::BouncyCastle::Crypto::IKeyWrapper(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Crypto::Operators::Asn1KeyWrapper::__set_algorithm(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW Org::BouncyCastle::Crypto::Operators::Asn1KeyWrapper::__get_algorithm() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Crypto::Operators::Asn1KeyWrapper::__set_wrapper(Org::BouncyCastle::Crypto::IKeyWrapper value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Crypto::IKeyWrapper, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Crypto::IKeyWrapper>(value));
}
constexpr Org::BouncyCastle::Crypto::IKeyWrapper Org::BouncyCastle::Crypto::Operators::Asn1KeyWrapper::__get_wrapper() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Crypto::IKeyWrapper, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "algorithm", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "cert", ty: "Org::BouncyCastle::X509::X509Certificate", modifiers: "", def_value: None }]
 Org::BouncyCastle::Crypto::Operators::Asn1KeyWrapper::Asn1KeyWrapper(::StringW algorithm, Org::BouncyCastle::X509::X509Certificate cert)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<Asn1KeyWrapper>(algorithm, cert))) {}
 void Org::BouncyCastle::Crypto::Operators::Asn1KeyWrapper::_ctor(::StringW algorithm, Org::BouncyCastle::X509::X509Certificate cert)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Operators::Asn1KeyWrapper>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::X509::X509Certificate>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, algorithm, cert);
}
 ::bs_hook::Il2CppWrapperType Org::BouncyCastle::Crypto::Operators::Asn1KeyWrapper::get_AlgorithmDetails()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Operators::Asn1KeyWrapper>::get(),
                            "get_AlgorithmDetails",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method);
}
 Org::BouncyCastle::Crypto::IBlockResult Org::BouncyCastle::Crypto::Operators::Asn1KeyWrapper::Wrap(::ArrayW<uint8_t> keyData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Operators::Asn1KeyWrapper>::get(),
                            "Wrap",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Crypto::IBlockResult, false>(const_cast<void*>(instance), ___internal_method, keyData);
}
