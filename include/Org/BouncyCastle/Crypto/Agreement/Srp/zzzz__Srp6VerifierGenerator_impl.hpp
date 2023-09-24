#pragma once
#include "Org/BouncyCastle/Crypto/Agreement/Srp/zzzz__Srp6VerifierGenerator_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IDigest_def.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__Srp6GroupParameters_def.hpp"
#include "Org/BouncyCastle/Math/zzzz__BigInteger_def.hpp"
//  Writing Method size for method: Org::BouncyCastle::Crypto::Agreement::Srp::Srp6VerifierGenerator._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Agreement::Srp::Srp6VerifierGenerator::*)()>(&Org::BouncyCastle::Crypto::Agreement::Srp::Srp6VerifierGenerator::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x118e130;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Agreement::Srp::Srp6VerifierGenerator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Agreement::Srp::Srp6VerifierGenerator.Init
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Agreement::Srp::Srp6VerifierGenerator::*)(Org::BouncyCastle::Math::BigInteger, Org::BouncyCastle::Math::BigInteger, Org::BouncyCastle::Crypto::IDigest)>(&Org::BouncyCastle::Crypto::Agreement::Srp::Srp6VerifierGenerator::Init)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x118e138;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::Agreement::Srp::Srp6VerifierGenerator),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Agreement::Srp::Srp6VerifierGenerator>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Agreement::Srp::Srp6VerifierGenerator.Init
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Agreement::Srp::Srp6VerifierGenerator::*)(Org::BouncyCastle::Crypto::Parameters::Srp6GroupParameters, Org::BouncyCastle::Crypto::IDigest)>(&Org::BouncyCastle::Crypto::Agreement::Srp::Srp6VerifierGenerator::Init)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x118e144;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::Agreement::Srp::Srp6VerifierGenerator),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Agreement::Srp::Srp6VerifierGenerator>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Agreement::Srp::Srp6VerifierGenerator.GenerateVerifier
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::BigInteger (Org::BouncyCastle::Crypto::Agreement::Srp::Srp6VerifierGenerator::*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>, ::ArrayW<uint8_t>)>(&Org::BouncyCastle::Crypto::Agreement::Srp::Srp6VerifierGenerator::GenerateVerifier)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x118e16c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::Agreement::Srp::Srp6VerifierGenerator),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Agreement::Srp::Srp6VerifierGenerator>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
constexpr void Org::BouncyCastle::Crypto::Agreement::Srp::Srp6VerifierGenerator::__set_N(Org::BouncyCastle::Math::BigInteger value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Math::BigInteger, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Math::BigInteger>(value));
}
constexpr Org::BouncyCastle::Math::BigInteger Org::BouncyCastle::Crypto::Agreement::Srp::Srp6VerifierGenerator::__get_N() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Math::BigInteger, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Crypto::Agreement::Srp::Srp6VerifierGenerator::__set_g(Org::BouncyCastle::Math::BigInteger value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Math::BigInteger, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Math::BigInteger>(value));
}
constexpr Org::BouncyCastle::Math::BigInteger Org::BouncyCastle::Crypto::Agreement::Srp::Srp6VerifierGenerator::__get_g() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Math::BigInteger, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Crypto::Agreement::Srp::Srp6VerifierGenerator::__set_digest(Org::BouncyCastle::Crypto::IDigest value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Crypto::IDigest, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Crypto::IDigest>(value));
}
constexpr Org::BouncyCastle::Crypto::IDigest Org::BouncyCastle::Crypto::Agreement::Srp::Srp6VerifierGenerator::__get_digest() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Crypto::IDigest, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
 Org::BouncyCastle::Crypto::Agreement::Srp::Srp6VerifierGenerator Org::BouncyCastle::Crypto::Agreement::Srp::Srp6VerifierGenerator::New_ctor()  {
Org::BouncyCastle::Crypto::Agreement::Srp::Srp6VerifierGenerator o{THROW_UNLESS(::il2cpp_utils::New<Org::BouncyCastle::Crypto::Agreement::Srp::Srp6VerifierGenerator>())};
return o;
}
 void Org::BouncyCastle::Crypto::Agreement::Srp::Srp6VerifierGenerator::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Agreement::Srp::Srp6VerifierGenerator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void Org::BouncyCastle::Crypto::Agreement::Srp::Srp6VerifierGenerator::Init(Org::BouncyCastle::Math::BigInteger N, Org::BouncyCastle::Math::BigInteger g, Org::BouncyCastle::Crypto::IDigest digest)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Agreement::Srp::Srp6VerifierGenerator>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::BigInteger>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::BigInteger>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::IDigest>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, N, g, digest);
}
 void Org::BouncyCastle::Crypto::Agreement::Srp::Srp6VerifierGenerator::Init(Org::BouncyCastle::Crypto::Parameters::Srp6GroupParameters group, Org::BouncyCastle::Crypto::IDigest digest)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Agreement::Srp::Srp6VerifierGenerator>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::Parameters::Srp6GroupParameters>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::IDigest>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, group, digest);
}
 Org::BouncyCastle::Math::BigInteger Org::BouncyCastle::Crypto::Agreement::Srp::Srp6VerifierGenerator::GenerateVerifier(::ArrayW<uint8_t> salt, ::ArrayW<uint8_t> identity, ::ArrayW<uint8_t> password)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Agreement::Srp::Srp6VerifierGenerator>::get(),
                            "GenerateVerifier",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Math::BigInteger, false>(const_cast<void*>(instance), ___internal_method, salt, identity, password);
}
