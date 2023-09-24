#pragma once
#include "Org/BouncyCastle/Crypto/Signers/zzzz__DsaSigner_def.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__DsaKeyParameters_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IDsaExt_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IDsa_def.hpp"
#include "Org/BouncyCastle/Security/zzzz__SecureRandom_def.hpp"
#include "Org/BouncyCastle/Crypto/Signers/zzzz__IDsaKCalculator_def.hpp"
#include "Org/BouncyCastle/Math/zzzz__BigInteger_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ICipherParameters_def.hpp"
//  Writing Method size for method: Org::BouncyCastle::Crypto::Signers::DsaSigner._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Signers::DsaSigner::*)()>(&Org::BouncyCastle::Crypto::Signers::DsaSigner::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xeb91a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Signers::DsaSigner>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Signers::DsaSigner._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Signers::DsaSigner::*)(Org::BouncyCastle::Crypto::Signers::IDsaKCalculator)>(&Org::BouncyCastle::Crypto::Signers::DsaSigner::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xeb9214;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Signers::DsaSigner>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::Signers::IDsaKCalculator>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Signers::DsaSigner.get_AlgorithmName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Org::BouncyCastle::Crypto::Signers::DsaSigner::*)()>(&Org::BouncyCastle::Crypto::Signers::DsaSigner::get_AlgorithmName)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xeb9240;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::Signers::DsaSigner),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Signers::DsaSigner>::get(),
                                  9
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Signers::DsaSigner.Init
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Signers::DsaSigner::*)(bool, Org::BouncyCastle::Crypto::ICipherParameters)>(&Org::BouncyCastle::Crypto::Signers::DsaSigner::Init)> {
  constexpr static std::size_t size = 0x28c;
  constexpr static std::size_t addrs = 0xeb9280;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::Signers::DsaSigner),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Signers::DsaSigner>::get(),
                                  10
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Signers::DsaSigner.get_Order
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::BigInteger (Org::BouncyCastle::Crypto::Signers::DsaSigner::*)()>(&Org::BouncyCastle::Crypto::Signers::DsaSigner::get_Order)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xeb950c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::Signers::DsaSigner),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Signers::DsaSigner>::get(),
                                  11
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Signers::DsaSigner.GenerateSignature
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<Org::BouncyCastle::Math::BigInteger> (Org::BouncyCastle::Crypto::Signers::DsaSigner::*)(::ArrayW<uint8_t>)>(&Org::BouncyCastle::Crypto::Signers::DsaSigner::GenerateSignature)> {
  constexpr static std::size_t size = 0x3b8;
  constexpr static std::size_t addrs = 0xeb9530;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::Signers::DsaSigner),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Signers::DsaSigner>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Signers::DsaSigner.VerifySignature
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Org::BouncyCastle::Crypto::Signers::DsaSigner::*)(::ArrayW<uint8_t>, Org::BouncyCastle::Math::BigInteger, Org::BouncyCastle::Math::BigInteger)>(&Org::BouncyCastle::Crypto::Signers::DsaSigner::VerifySignature)> {
  constexpr static std::size_t size = 0x21c;
  constexpr static std::size_t addrs = 0xeb98e8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::Signers::DsaSigner),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Signers::DsaSigner>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Signers::DsaSigner.CalculateE
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::BigInteger (Org::BouncyCastle::Crypto::Signers::DsaSigner::*)(Org::BouncyCastle::Math::BigInteger, ::ArrayW<uint8_t>)>(&Org::BouncyCastle::Crypto::Signers::DsaSigner::CalculateE)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0xeb9b04;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::Signers::DsaSigner),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Signers::DsaSigner>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Signers::DsaSigner.InitSecureRandom
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Security::SecureRandom (Org::BouncyCastle::Crypto::Signers::DsaSigner::*)(bool, Org::BouncyCastle::Security::SecureRandom)>(&Org::BouncyCastle::Crypto::Signers::DsaSigner::InitSecureRandom)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xeb9be4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::Signers::DsaSigner),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Signers::DsaSigner>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
/// @brief Convert operator to Org::BouncyCastle::Crypto::IDsaExt
constexpr  Org::BouncyCastle::Crypto::Signers::DsaSigner::operator Org::BouncyCastle::Crypto::IDsaExt() const noexcept {
return Org::BouncyCastle::Crypto::IDsaExt(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to Org::BouncyCastle::Crypto::IDsa
constexpr  Org::BouncyCastle::Crypto::Signers::DsaSigner::operator Org::BouncyCastle::Crypto::IDsa() const noexcept {
return Org::BouncyCastle::Crypto::IDsa(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Crypto::Signers::DsaSigner::__set_kCalculator(Org::BouncyCastle::Crypto::Signers::IDsaKCalculator value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Crypto::Signers::IDsaKCalculator, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Crypto::Signers::IDsaKCalculator>(value));
}
constexpr Org::BouncyCastle::Crypto::Signers::IDsaKCalculator Org::BouncyCastle::Crypto::Signers::DsaSigner::__get_kCalculator() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Crypto::Signers::IDsaKCalculator, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Crypto::Signers::DsaSigner::__set_key(Org::BouncyCastle::Crypto::Parameters::DsaKeyParameters value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Crypto::Parameters::DsaKeyParameters, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Crypto::Parameters::DsaKeyParameters>(value));
}
constexpr Org::BouncyCastle::Crypto::Parameters::DsaKeyParameters Org::BouncyCastle::Crypto::Signers::DsaSigner::__get_key() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Crypto::Parameters::DsaKeyParameters, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Crypto::Signers::DsaSigner::__set_random(Org::BouncyCastle::Security::SecureRandom value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Security::SecureRandom, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Security::SecureRandom>(value));
}
constexpr Org::BouncyCastle::Security::SecureRandom Org::BouncyCastle::Crypto::Signers::DsaSigner::__get_random() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Security::SecureRandom, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
 Org::BouncyCastle::Crypto::Signers::DsaSigner Org::BouncyCastle::Crypto::Signers::DsaSigner::New_ctor()  {
Org::BouncyCastle::Crypto::Signers::DsaSigner o{THROW_UNLESS(::il2cpp_utils::New<Org::BouncyCastle::Crypto::Signers::DsaSigner>())};
return o;
}
 void Org::BouncyCastle::Crypto::Signers::DsaSigner::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Signers::DsaSigner>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 Org::BouncyCastle::Crypto::Signers::DsaSigner Org::BouncyCastle::Crypto::Signers::DsaSigner::New_ctor(Org::BouncyCastle::Crypto::Signers::IDsaKCalculator kCalculator)  {
Org::BouncyCastle::Crypto::Signers::DsaSigner o{THROW_UNLESS(::il2cpp_utils::New<Org::BouncyCastle::Crypto::Signers::DsaSigner>(kCalculator))};
return o;
}
 void Org::BouncyCastle::Crypto::Signers::DsaSigner::_ctor(Org::BouncyCastle::Crypto::Signers::IDsaKCalculator kCalculator)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Signers::DsaSigner>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::Signers::IDsaKCalculator>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, kCalculator);
}
 ::StringW Org::BouncyCastle::Crypto::Signers::DsaSigner::get_AlgorithmName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Signers::DsaSigner>::get(),
                            "get_AlgorithmName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 void Org::BouncyCastle::Crypto::Signers::DsaSigner::Init(bool forSigning, Org::BouncyCastle::Crypto::ICipherParameters parameters)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Signers::DsaSigner>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::ICipherParameters>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, forSigning, parameters);
}
 Org::BouncyCastle::Math::BigInteger Org::BouncyCastle::Crypto::Signers::DsaSigner::get_Order()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Signers::DsaSigner>::get(),
                            "get_Order",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Math::BigInteger, false>(const_cast<void*>(instance), ___internal_method);
}
 ::ArrayW<Org::BouncyCastle::Math::BigInteger> Org::BouncyCastle::Crypto::Signers::DsaSigner::GenerateSignature(::ArrayW<uint8_t> message)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Signers::DsaSigner>::get(),
                            "GenerateSignature",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<Org::BouncyCastle::Math::BigInteger>, false>(const_cast<void*>(instance), ___internal_method, message);
}
 bool Org::BouncyCastle::Crypto::Signers::DsaSigner::VerifySignature(::ArrayW<uint8_t> message, Org::BouncyCastle::Math::BigInteger r, Org::BouncyCastle::Math::BigInteger s)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Signers::DsaSigner>::get(),
                            "VerifySignature",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::BigInteger>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::BigInteger>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, message, r, s);
}
 Org::BouncyCastle::Math::BigInteger Org::BouncyCastle::Crypto::Signers::DsaSigner::CalculateE(Org::BouncyCastle::Math::BigInteger n, ::ArrayW<uint8_t> message)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Signers::DsaSigner>::get(),
                            "CalculateE",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::BigInteger>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Math::BigInteger, false>(const_cast<void*>(instance), ___internal_method, n, message);
}
 Org::BouncyCastle::Security::SecureRandom Org::BouncyCastle::Crypto::Signers::DsaSigner::InitSecureRandom(bool needed, Org::BouncyCastle::Security::SecureRandom provided)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Signers::DsaSigner>::get(),
                            "InitSecureRandom",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Security::SecureRandom>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Security::SecureRandom, false>(const_cast<void*>(instance), ___internal_method, needed, provided);
}
