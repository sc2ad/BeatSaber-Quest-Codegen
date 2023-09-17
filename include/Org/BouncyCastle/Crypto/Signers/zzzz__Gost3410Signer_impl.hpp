#pragma once
namespace {
#include "Org/BouncyCastle/Crypto/Signers/zzzz__Gost3410Signer_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ICipherParameters_def.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__Gost3410KeyParameters_def.hpp"
#include "Org/BouncyCastle/Security/zzzz__SecureRandom_def.hpp"
#include "Org/BouncyCastle/Math/zzzz__BigInteger_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IDsaExt_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IDsa_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Signers::Gost3410Signer.get_AlgorithmName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Org::BouncyCastle::Crypto::Signers::Gost3410Signer::*)()>(&::Org::BouncyCastle::Crypto::Signers::Gost3410Signer::get_AlgorithmName)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xebfbd8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Crypto::Signers::Gost3410Signer),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::Gost3410Signer>::get(),
                                  9
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Signers::Gost3410Signer.Init
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Signers::Gost3410Signer::*)(bool, ::Org::BouncyCastle::Crypto::ICipherParameters)>(&::Org::BouncyCastle::Crypto::Signers::Gost3410Signer::Init)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0xebfc18;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Crypto::Signers::Gost3410Signer),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::Gost3410Signer>::get(),
                                  10
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Signers::Gost3410Signer.get_Order
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::BigInteger (::Org::BouncyCastle::Crypto::Signers::Gost3410Signer::*)()>(&::Org::BouncyCastle::Crypto::Signers::Gost3410Signer::get_Order)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xebfe04;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Crypto::Signers::Gost3410Signer),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::Gost3410Signer>::get(),
                                  11
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Signers::Gost3410Signer.GenerateSignature
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::Org::BouncyCastle::Math::BigInteger> (::Org::BouncyCastle::Crypto::Signers::Gost3410Signer::*)(::ArrayW<uint8_t>)>(&::Org::BouncyCastle::Crypto::Signers::Gost3410Signer::GenerateSignature)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0xebfe28;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Crypto::Signers::Gost3410Signer),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::Gost3410Signer>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Signers::Gost3410Signer.VerifySignature
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Org::BouncyCastle::Crypto::Signers::Gost3410Signer::*)(::ArrayW<uint8_t>, ::Org::BouncyCastle::Math::BigInteger, ::Org::BouncyCastle::Math::BigInteger)>(&::Org::BouncyCastle::Crypto::Signers::Gost3410Signer::VerifySignature)> {
  constexpr static std::size_t size = 0x2a4;
  constexpr static std::size_t addrs = 0xec0098;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Crypto::Signers::Gost3410Signer),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::Gost3410Signer>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Signers::Gost3410Signer._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Signers::Gost3410Signer::*)()>(&::Org::BouncyCastle::Crypto::Signers::Gost3410Signer::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xec033c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::Gost3410Signer>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::Org::BouncyCastle::Crypto::IDsaExt
constexpr  ::Org::BouncyCastle::Crypto::Signers::Gost3410Signer::operator ::Org::BouncyCastle::Crypto::IDsaExt() const noexcept {
return ::Org::BouncyCastle::Crypto::IDsaExt(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to ::Org::BouncyCastle::Crypto::IDsa
constexpr  ::Org::BouncyCastle::Crypto::Signers::Gost3410Signer::operator ::Org::BouncyCastle::Crypto::IDsa() const noexcept {
return ::Org::BouncyCastle::Crypto::IDsa(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Org::BouncyCastle::Crypto::Signers::Gost3410Signer::__set_key(::Org::BouncyCastle::Crypto::Parameters::Gost3410KeyParameters value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Crypto::Parameters::Gost3410KeyParameters, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::Org::BouncyCastle::Crypto::Parameters::Gost3410KeyParameters>(value));
}
constexpr ::Org::BouncyCastle::Crypto::Parameters::Gost3410KeyParameters ::Org::BouncyCastle::Crypto::Signers::Gost3410Signer::__get_key() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Crypto::Parameters::Gost3410KeyParameters, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Org::BouncyCastle::Crypto::Signers::Gost3410Signer::__set_random(::Org::BouncyCastle::Security::SecureRandom value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Security::SecureRandom, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::Org::BouncyCastle::Security::SecureRandom>(value));
}
constexpr ::Org::BouncyCastle::Security::SecureRandom ::Org::BouncyCastle::Crypto::Signers::Gost3410Signer::__get_random() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Security::SecureRandom, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 ::StringW ::Org::BouncyCastle::Crypto::Signers::Gost3410Signer::get_AlgorithmName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::Gost3410Signer>::get(),
                            "get_AlgorithmName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::Org::BouncyCastle::Crypto::Signers::Gost3410Signer::Init(bool forSigning, ::Org::BouncyCastle::Crypto::ICipherParameters parameters)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::Gost3410Signer>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::ICipherParameters>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, forSigning, parameters);
}
 ::Org::BouncyCastle::Math::BigInteger ::Org::BouncyCastle::Crypto::Signers::Gost3410Signer::get_Order()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::Gost3410Signer>::get(),
                            "get_Order",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::BigInteger, false>(const_cast<void*>(instance), ___internal_method);
}
 ::ArrayW<::Org::BouncyCastle::Math::BigInteger> ::Org::BouncyCastle::Crypto::Signers::Gost3410Signer::GenerateSignature(::ArrayW<uint8_t> message)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::Gost3410Signer>::get(),
                            "GenerateSignature",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::Org::BouncyCastle::Math::BigInteger>, false>(const_cast<void*>(instance), ___internal_method, message);
}
 bool ::Org::BouncyCastle::Crypto::Signers::Gost3410Signer::VerifySignature(::ArrayW<uint8_t> message, ::Org::BouncyCastle::Math::BigInteger r, ::Org::BouncyCastle::Math::BigInteger s)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::Gost3410Signer>::get(),
                            "VerifySignature",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::BigInteger>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::BigInteger>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, message, r, s);
}
// Ctor Parameters []
 ::Org::BouncyCastle::Crypto::Signers::Gost3410Signer::Gost3410Signer()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<Gost3410Signer>())) {}
 void ::Org::BouncyCastle::Crypto::Signers::Gost3410Signer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::Gost3410Signer>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
