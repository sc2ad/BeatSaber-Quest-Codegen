#pragma once
#include "Org/BouncyCastle/Crypto/Operators/zzzz__DefaultVerifierResult_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IVerifier_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ISigner_def.hpp"
//  Writing Method size for method: Org::BouncyCastle::Crypto::Operators::DefaultVerifierResult._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Operators::DefaultVerifierResult::*)(Org::BouncyCastle::Crypto::ISigner)>(&Org::BouncyCastle::Crypto::Operators::DefaultVerifierResult::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xea0de4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Operators::DefaultVerifierResult>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::ISigner>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Operators::DefaultVerifierResult.IsVerified
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Org::BouncyCastle::Crypto::Operators::DefaultVerifierResult::*)(::ArrayW<uint8_t>)>(&Org::BouncyCastle::Crypto::Operators::DefaultVerifierResult::IsVerified)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xea0e0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Operators::DefaultVerifierResult>::get(),
                            "IsVerified",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Operators::DefaultVerifierResult.IsVerified
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Org::BouncyCastle::Crypto::Operators::DefaultVerifierResult::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&Org::BouncyCastle::Crypto::Operators::DefaultVerifierResult::IsVerified)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xea0eb8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Operators::DefaultVerifierResult>::get(),
                            "IsVerified",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to Org::BouncyCastle::Crypto::IVerifier
constexpr  Org::BouncyCastle::Crypto::Operators::DefaultVerifierResult::operator Org::BouncyCastle::Crypto::IVerifier() const noexcept {
return Org::BouncyCastle::Crypto::IVerifier(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Crypto::Operators::DefaultVerifierResult::__set_mSigner(Org::BouncyCastle::Crypto::ISigner value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Crypto::ISigner, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Crypto::ISigner>(value));
}
constexpr Org::BouncyCastle::Crypto::ISigner Org::BouncyCastle::Crypto::Operators::DefaultVerifierResult::__get_mSigner() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Crypto::ISigner, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "signer", ty: "Org::BouncyCastle::Crypto::ISigner", modifiers: "", def_value: None }]
 Org::BouncyCastle::Crypto::Operators::DefaultVerifierResult::DefaultVerifierResult(Org::BouncyCastle::Crypto::ISigner signer)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<DefaultVerifierResult>(signer))) {}
 void Org::BouncyCastle::Crypto::Operators::DefaultVerifierResult::_ctor(Org::BouncyCastle::Crypto::ISigner signer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Operators::DefaultVerifierResult>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::ISigner>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, signer);
}
 bool Org::BouncyCastle::Crypto::Operators::DefaultVerifierResult::IsVerified(::ArrayW<uint8_t> signature)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Operators::DefaultVerifierResult>::get(),
                            "IsVerified",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, signature);
}
 bool Org::BouncyCastle::Crypto::Operators::DefaultVerifierResult::IsVerified(::ArrayW<uint8_t> sig, int32_t sigOff, int32_t sigLen)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Operators::DefaultVerifierResult>::get(),
                            "IsVerified",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, sig, sigOff, sigLen);
}
