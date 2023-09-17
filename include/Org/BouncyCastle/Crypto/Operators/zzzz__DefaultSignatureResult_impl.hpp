#pragma once
namespace {
#include "Org/BouncyCastle/Crypto/Operators/zzzz__DefaultSignatureResult_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IBlockResult_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ISigner_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Operators::DefaultSignatureResult._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Operators::DefaultSignatureResult::*)(::Org::BouncyCastle::Crypto::ISigner)>(&::Org::BouncyCastle::Crypto::Operators::DefaultSignatureResult::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xea0c4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Operators::DefaultSignatureResult>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::ISigner>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Operators::DefaultSignatureResult.Collect
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Crypto::Operators::DefaultSignatureResult::*)()>(&::Org::BouncyCastle::Crypto::Operators::DefaultSignatureResult::Collect)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xea0c74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Operators::DefaultSignatureResult>::get(),
                            "Collect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Operators::DefaultSignatureResult.Collect
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Operators::DefaultSignatureResult::*)(::ArrayW<uint8_t>, int32_t)>(&::Org::BouncyCastle::Crypto::Operators::DefaultSignatureResult::Collect)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xea0d18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Operators::DefaultSignatureResult>::get(),
                            "Collect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::Org::BouncyCastle::Crypto::IBlockResult
constexpr  ::Org::BouncyCastle::Crypto::Operators::DefaultSignatureResult::operator ::Org::BouncyCastle::Crypto::IBlockResult() const noexcept {
return ::Org::BouncyCastle::Crypto::IBlockResult(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Org::BouncyCastle::Crypto::Operators::DefaultSignatureResult::__set_mSigner(::Org::BouncyCastle::Crypto::ISigner value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Crypto::ISigner, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::Org::BouncyCastle::Crypto::ISigner>(value));
}
constexpr ::Org::BouncyCastle::Crypto::ISigner ::Org::BouncyCastle::Crypto::Operators::DefaultSignatureResult::__get_mSigner() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Crypto::ISigner, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "signer", ty: "::Org::BouncyCastle::Crypto::ISigner", modifiers: "", def_value: None }]
 ::Org::BouncyCastle::Crypto::Operators::DefaultSignatureResult::DefaultSignatureResult(::Org::BouncyCastle::Crypto::ISigner signer)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<DefaultSignatureResult>(signer))) {}
 void ::Org::BouncyCastle::Crypto::Operators::DefaultSignatureResult::_ctor(::Org::BouncyCastle::Crypto::ISigner signer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Operators::DefaultSignatureResult>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::ISigner>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, signer);
}
 ::ArrayW<uint8_t> ::Org::BouncyCastle::Crypto::Operators::DefaultSignatureResult::Collect()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Operators::DefaultSignatureResult>::get(),
                            "Collect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t ::Org::BouncyCastle::Crypto::Operators::DefaultSignatureResult::Collect(::ArrayW<uint8_t> sig, int32_t sigOff)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Operators::DefaultSignatureResult>::get(),
                            "Collect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, sig, sigOff);
}
} // end anonymous namespace
