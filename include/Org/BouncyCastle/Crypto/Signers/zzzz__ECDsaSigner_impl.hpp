#pragma once
namespace {
#include "Org/BouncyCastle/Crypto/Signers/zzzz__ECDsaSigner_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ICipherParameters_def.hpp"
#include "Org/BouncyCastle/Crypto/Signers/zzzz__IDsaKCalculator_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IDsaExt_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IDsa_def.hpp"
#include "Org/BouncyCastle/Math/EC/zzzz__ECPoint_def.hpp"
#include "Org/BouncyCastle/Math/EC/zzzz__ECFieldElement_def.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__ECKeyParameters_def.hpp"
#include "Org/BouncyCastle/Math/zzzz__BigInteger_def.hpp"
#include "Org/BouncyCastle/Math/EC/Multiplier/zzzz__ECMultiplier_def.hpp"
#include "Org/BouncyCastle/Security/zzzz__SecureRandom_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Signers::ECDsaSigner._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Signers::ECDsaSigner::*)()>(&::Org::BouncyCastle::Crypto::Signers::ECDsaSigner::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xeb9c54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::ECDsaSigner>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Signers::ECDsaSigner._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Signers::ECDsaSigner::*)(::Org::BouncyCastle::Crypto::Signers::IDsaKCalculator)>(&::Org::BouncyCastle::Crypto::Signers::ECDsaSigner::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xeb9cc4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::ECDsaSigner>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Signers::IDsaKCalculator>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Signers::ECDsaSigner.get_AlgorithmName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Org::BouncyCastle::Crypto::Signers::ECDsaSigner::*)()>(&::Org::BouncyCastle::Crypto::Signers::ECDsaSigner::get_AlgorithmName)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xeb9cf0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Crypto::Signers::ECDsaSigner),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::ECDsaSigner>::get(),
                                  9
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Signers::ECDsaSigner.Init
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Signers::ECDsaSigner::*)(bool, ::Org::BouncyCastle::Crypto::ICipherParameters)>(&::Org::BouncyCastle::Crypto::Signers::ECDsaSigner::Init)> {
  constexpr static std::size_t size = 0x28c;
  constexpr static std::size_t addrs = 0xeb9d30;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Crypto::Signers::ECDsaSigner),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::ECDsaSigner>::get(),
                                  10
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Signers::ECDsaSigner.get_Order
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::BigInteger (::Org::BouncyCastle::Crypto::Signers::ECDsaSigner::*)()>(&::Org::BouncyCastle::Crypto::Signers::ECDsaSigner::get_Order)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xeb9fbc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Crypto::Signers::ECDsaSigner),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::ECDsaSigner>::get(),
                                  11
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Signers::ECDsaSigner.GenerateSignature
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::Org::BouncyCastle::Math::BigInteger> (::Org::BouncyCastle::Crypto::Signers::ECDsaSigner::*)(::ArrayW<uint8_t>)>(&::Org::BouncyCastle::Crypto::Signers::ECDsaSigner::GenerateSignature)> {
  constexpr static std::size_t size = 0x480;
  constexpr static std::size_t addrs = 0xeb9fe0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Crypto::Signers::ECDsaSigner),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::ECDsaSigner>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Signers::ECDsaSigner.VerifySignature
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Org::BouncyCastle::Crypto::Signers::ECDsaSigner::*)(::ArrayW<uint8_t>, ::Org::BouncyCastle::Math::BigInteger, ::Org::BouncyCastle::Math::BigInteger)>(&::Org::BouncyCastle::Crypto::Signers::ECDsaSigner::VerifySignature)> {
  constexpr static std::size_t size = 0x388;
  constexpr static std::size_t addrs = 0xeba460;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Crypto::Signers::ECDsaSigner),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::ECDsaSigner>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Signers::ECDsaSigner.CalculateE
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::BigInteger (::Org::BouncyCastle::Crypto::Signers::ECDsaSigner::*)(::Org::BouncyCastle::Math::BigInteger, ::ArrayW<uint8_t>)>(&::Org::BouncyCastle::Crypto::Signers::ECDsaSigner::CalculateE)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0xeba7e8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Crypto::Signers::ECDsaSigner),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::ECDsaSigner>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Signers::ECDsaSigner.CreateBasePointMultiplier
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::EC::Multiplier::ECMultiplier (::Org::BouncyCastle::Crypto::Signers::ECDsaSigner::*)()>(&::Org::BouncyCastle::Crypto::Signers::ECDsaSigner::CreateBasePointMultiplier)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xeba8a8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Crypto::Signers::ECDsaSigner),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::ECDsaSigner>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Signers::ECDsaSigner.GetDenominator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::EC::ECFieldElement (::Org::BouncyCastle::Crypto::Signers::ECDsaSigner::*)(int32_t, ::Org::BouncyCastle::Math::EC::ECPoint)>(&::Org::BouncyCastle::Crypto::Signers::ECDsaSigner::GetDenominator)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xeba904;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Crypto::Signers::ECDsaSigner),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::ECDsaSigner>::get(),
                                  16
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Signers::ECDsaSigner.InitSecureRandom
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Security::SecureRandom (::Org::BouncyCastle::Crypto::Signers::ECDsaSigner::*)(bool, ::Org::BouncyCastle::Security::SecureRandom)>(&::Org::BouncyCastle::Crypto::Signers::ECDsaSigner::InitSecureRandom)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xeba998;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Crypto::Signers::ECDsaSigner),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::ECDsaSigner>::get(),
                                  17
                                ));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::Org::BouncyCastle::Crypto::IDsaExt
constexpr  ::Org::BouncyCastle::Crypto::Signers::ECDsaSigner::operator ::Org::BouncyCastle::Crypto::IDsaExt() const noexcept {
return ::Org::BouncyCastle::Crypto::IDsaExt(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to ::Org::BouncyCastle::Crypto::IDsa
constexpr  ::Org::BouncyCastle::Crypto::Signers::ECDsaSigner::operator ::Org::BouncyCastle::Crypto::IDsa() const noexcept {
return ::Org::BouncyCastle::Crypto::IDsa(::bs_hook::Il2CppWrapperType::instance);
}
 void ::Org::BouncyCastle::Crypto::Signers::ECDsaSigner::__set_Eight(::Org::BouncyCastle::Math::BigInteger value)  {
::cordl_internals::setStaticField<::Org::BouncyCastle::Math::BigInteger, "Eight", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::ECDsaSigner>::get>(std::forward<::Org::BouncyCastle::Math::BigInteger>(value));
}
 ::Org::BouncyCastle::Math::BigInteger ::Org::BouncyCastle::Crypto::Signers::ECDsaSigner::__get_Eight()  {
return ::cordl_internals::getStaticField<::Org::BouncyCastle::Math::BigInteger, "Eight", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::ECDsaSigner>::get>();
}
constexpr void ::Org::BouncyCastle::Crypto::Signers::ECDsaSigner::__set_kCalculator(::Org::BouncyCastle::Crypto::Signers::IDsaKCalculator value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Crypto::Signers::IDsaKCalculator, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::Org::BouncyCastle::Crypto::Signers::IDsaKCalculator>(value));
}
constexpr ::Org::BouncyCastle::Crypto::Signers::IDsaKCalculator ::Org::BouncyCastle::Crypto::Signers::ECDsaSigner::__get_kCalculator() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Crypto::Signers::IDsaKCalculator, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Org::BouncyCastle::Crypto::Signers::ECDsaSigner::__set_key(::Org::BouncyCastle::Crypto::Parameters::ECKeyParameters value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Crypto::Parameters::ECKeyParameters, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::Org::BouncyCastle::Crypto::Parameters::ECKeyParameters>(value));
}
constexpr ::Org::BouncyCastle::Crypto::Parameters::ECKeyParameters ::Org::BouncyCastle::Crypto::Signers::ECDsaSigner::__get_key() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Crypto::Parameters::ECKeyParameters, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Org::BouncyCastle::Crypto::Signers::ECDsaSigner::__set_random(::Org::BouncyCastle::Security::SecureRandom value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Security::SecureRandom, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::Org::BouncyCastle::Security::SecureRandom>(value));
}
constexpr ::Org::BouncyCastle::Security::SecureRandom ::Org::BouncyCastle::Crypto::Signers::ECDsaSigner::__get_random() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Security::SecureRandom, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 ::Org::BouncyCastle::Crypto::Signers::ECDsaSigner::ECDsaSigner()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<ECDsaSigner>())) {}
 void ::Org::BouncyCastle::Crypto::Signers::ECDsaSigner::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::ECDsaSigner>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters [CppParam { name: "kCalculator", ty: "::Org::BouncyCastle::Crypto::Signers::IDsaKCalculator", modifiers: "", def_value: None }]
 ::Org::BouncyCastle::Crypto::Signers::ECDsaSigner::ECDsaSigner(::Org::BouncyCastle::Crypto::Signers::IDsaKCalculator kCalculator)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<ECDsaSigner>(kCalculator))) {}
 void ::Org::BouncyCastle::Crypto::Signers::ECDsaSigner::_ctor(::Org::BouncyCastle::Crypto::Signers::IDsaKCalculator kCalculator)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::ECDsaSigner>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Signers::IDsaKCalculator>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, kCalculator);
}
 ::StringW ::Org::BouncyCastle::Crypto::Signers::ECDsaSigner::get_AlgorithmName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::ECDsaSigner>::get(),
                            "get_AlgorithmName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::Org::BouncyCastle::Crypto::Signers::ECDsaSigner::Init(bool forSigning, ::Org::BouncyCastle::Crypto::ICipherParameters parameters)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::ECDsaSigner>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::ICipherParameters>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, forSigning, parameters);
}
 ::Org::BouncyCastle::Math::BigInteger ::Org::BouncyCastle::Crypto::Signers::ECDsaSigner::get_Order()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::ECDsaSigner>::get(),
                            "get_Order",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::BigInteger, false>(const_cast<void*>(instance), ___internal_method);
}
 ::ArrayW<::Org::BouncyCastle::Math::BigInteger> ::Org::BouncyCastle::Crypto::Signers::ECDsaSigner::GenerateSignature(::ArrayW<uint8_t> message)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::ECDsaSigner>::get(),
                            "GenerateSignature",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::Org::BouncyCastle::Math::BigInteger>, false>(const_cast<void*>(instance), ___internal_method, message);
}
 bool ::Org::BouncyCastle::Crypto::Signers::ECDsaSigner::VerifySignature(::ArrayW<uint8_t> message, ::Org::BouncyCastle::Math::BigInteger r, ::Org::BouncyCastle::Math::BigInteger s)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::ECDsaSigner>::get(),
                            "VerifySignature",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::BigInteger>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::BigInteger>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, message, r, s);
}
 ::Org::BouncyCastle::Math::BigInteger ::Org::BouncyCastle::Crypto::Signers::ECDsaSigner::CalculateE(::Org::BouncyCastle::Math::BigInteger n, ::ArrayW<uint8_t> message)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::ECDsaSigner>::get(),
                            "CalculateE",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::BigInteger>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::BigInteger, false>(const_cast<void*>(instance), ___internal_method, n, message);
}
 ::Org::BouncyCastle::Math::EC::Multiplier::ECMultiplier ::Org::BouncyCastle::Crypto::Signers::ECDsaSigner::CreateBasePointMultiplier()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::ECDsaSigner>::get(),
                            "CreateBasePointMultiplier",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::Multiplier::ECMultiplier, false>(const_cast<void*>(instance), ___internal_method);
}
 ::Org::BouncyCastle::Math::EC::ECFieldElement ::Org::BouncyCastle::Crypto::Signers::ECDsaSigner::GetDenominator(int32_t coordinateSystem, ::Org::BouncyCastle::Math::EC::ECPoint p)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::ECDsaSigner>::get(),
                            "GetDenominator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::ECPoint>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::ECFieldElement, false>(const_cast<void*>(instance), ___internal_method, coordinateSystem, p);
}
 ::Org::BouncyCastle::Security::SecureRandom ::Org::BouncyCastle::Crypto::Signers::ECDsaSigner::InitSecureRandom(bool needed, ::Org::BouncyCastle::Security::SecureRandom provided)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::ECDsaSigner>::get(),
                            "InitSecureRandom",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Security::SecureRandom>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Security::SecureRandom, false>(const_cast<void*>(instance), ___internal_method, needed, provided);
}
} // end anonymous namespace
