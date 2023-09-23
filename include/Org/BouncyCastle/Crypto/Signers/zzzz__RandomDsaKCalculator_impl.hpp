#pragma once
#include "Org/BouncyCastle/Crypto/Signers/zzzz__RandomDsaKCalculator_def.hpp"
#include "Org/BouncyCastle/Security/zzzz__SecureRandom_def.hpp"
#include "Org/BouncyCastle/Math/zzzz__BigInteger_def.hpp"
#include "Org/BouncyCastle/Crypto/Signers/zzzz__IDsaKCalculator_def.hpp"
//  Writing Method size for method: Org::BouncyCastle::Crypto::Signers::RandomDsaKCalculator.get_IsDeterministic
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Org::BouncyCastle::Crypto::Signers::RandomDsaKCalculator::*)()>(&Org::BouncyCastle::Crypto::Signers::RandomDsaKCalculator::get_IsDeterministic)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xec6d0c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::Signers::RandomDsaKCalculator),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Signers::RandomDsaKCalculator>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Signers::RandomDsaKCalculator.Init
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Signers::RandomDsaKCalculator::*)(Org::BouncyCastle::Math::BigInteger, Org::BouncyCastle::Security::SecureRandom)>(&Org::BouncyCastle::Crypto::Signers::RandomDsaKCalculator::Init)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xec6d14;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::Signers::RandomDsaKCalculator),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Signers::RandomDsaKCalculator>::get(),
                                  9
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Signers::RandomDsaKCalculator.Init
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Signers::RandomDsaKCalculator::*)(Org::BouncyCastle::Math::BigInteger, Org::BouncyCastle::Math::BigInteger, ::ArrayW<uint8_t>)>(&Org::BouncyCastle::Crypto::Signers::RandomDsaKCalculator::Init)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xec6d1c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::Signers::RandomDsaKCalculator),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Signers::RandomDsaKCalculator>::get(),
                                  10
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Signers::RandomDsaKCalculator.NextK
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::BigInteger (Org::BouncyCastle::Crypto::Signers::RandomDsaKCalculator::*)()>(&Org::BouncyCastle::Crypto::Signers::RandomDsaKCalculator::NextK)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0xec6d6c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::Signers::RandomDsaKCalculator),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Signers::RandomDsaKCalculator>::get(),
                                  11
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Signers::RandomDsaKCalculator._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Signers::RandomDsaKCalculator::*)()>(&Org::BouncyCastle::Crypto::Signers::RandomDsaKCalculator::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xec6e30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Signers::RandomDsaKCalculator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to Org::BouncyCastle::Crypto::Signers::IDsaKCalculator
constexpr  Org::BouncyCastle::Crypto::Signers::RandomDsaKCalculator::operator Org::BouncyCastle::Crypto::Signers::IDsaKCalculator() const noexcept {
return Org::BouncyCastle::Crypto::Signers::IDsaKCalculator(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Crypto::Signers::RandomDsaKCalculator::__set_q(Org::BouncyCastle::Math::BigInteger value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Math::BigInteger, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Math::BigInteger>(value));
}
constexpr Org::BouncyCastle::Math::BigInteger Org::BouncyCastle::Crypto::Signers::RandomDsaKCalculator::__get_q() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Math::BigInteger, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Crypto::Signers::RandomDsaKCalculator::__set_random(Org::BouncyCastle::Security::SecureRandom value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Security::SecureRandom, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Security::SecureRandom>(value));
}
constexpr Org::BouncyCastle::Security::SecureRandom Org::BouncyCastle::Crypto::Signers::RandomDsaKCalculator::__get_random() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Security::SecureRandom, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 bool Org::BouncyCastle::Crypto::Signers::RandomDsaKCalculator::get_IsDeterministic()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Signers::RandomDsaKCalculator>::get(),
                            "get_IsDeterministic",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void Org::BouncyCastle::Crypto::Signers::RandomDsaKCalculator::Init(Org::BouncyCastle::Math::BigInteger n, Org::BouncyCastle::Security::SecureRandom random)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Signers::RandomDsaKCalculator>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::BigInteger>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Security::SecureRandom>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, n, random);
}
 void Org::BouncyCastle::Crypto::Signers::RandomDsaKCalculator::Init(Org::BouncyCastle::Math::BigInteger n, Org::BouncyCastle::Math::BigInteger d, ::ArrayW<uint8_t> message)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Signers::RandomDsaKCalculator>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::BigInteger>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::BigInteger>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, n, d, message);
}
 Org::BouncyCastle::Math::BigInteger Org::BouncyCastle::Crypto::Signers::RandomDsaKCalculator::NextK()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Signers::RandomDsaKCalculator>::get(),
                            "NextK",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Math::BigInteger, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 Org::BouncyCastle::Crypto::Signers::RandomDsaKCalculator::RandomDsaKCalculator()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<RandomDsaKCalculator>())) {}
 void Org::BouncyCastle::Crypto::Signers::RandomDsaKCalculator::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Signers::RandomDsaKCalculator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
