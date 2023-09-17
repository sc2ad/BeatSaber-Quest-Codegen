#pragma once
namespace {
#include "Org/BouncyCastle/Crypto/Agreement/zzzz__SM2KeyExchange_def.hpp"
#include "Org/BouncyCastle/Math/EC/zzzz__ECPoint_def.hpp"
#include "Org/BouncyCastle/Math/zzzz__BigInteger_def.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__ECDomainParameters_def.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__SM2KeyExchangePublicParameters_def.hpp"
#include "Org/BouncyCastle/Math/EC/zzzz__ECFieldElement_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ICipherParameters_def.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__ECPrivateKeyParameters_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IDigest_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange::*)()>(&::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x11905dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange::*)(::Org::BouncyCastle::Crypto::IDigest)>(&::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x1190648;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::IDigest>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange.Init
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange::*)(::Org::BouncyCastle::Crypto::ICipherParameters)>(&::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange::Init)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x1190670;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange.CalculateKey
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange::*)(int32_t, ::Org::BouncyCastle::Crypto::ICipherParameters)>(&::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange::CalculateKey)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x1190844;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange.CalculateKeyWithConfirmation
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::ArrayW<uint8_t>> (::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange::*)(int32_t, ::ArrayW<uint8_t>, ::Org::BouncyCastle::Crypto::ICipherParameters)>(&::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange::CalculateKeyWithConfirmation)> {
  constexpr static std::size_t size = 0x4b0;
  constexpr static std::size_t addrs = 0x1190b68;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange.CalculateU
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::EC::ECPoint (::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange::*)(::Org::BouncyCastle::Crypto::Parameters::SM2KeyExchangePublicParameters)>(&::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange::CalculateU)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x1191510;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange.Kdf
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange::*)(::Org::BouncyCastle::Math::EC::ECPoint, ::ArrayW<uint8_t>, ::ArrayW<uint8_t>, int32_t)>(&::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange::Kdf)> {
  constexpr static std::size_t size = 0x650;
  constexpr static std::size_t addrs = 0x1191790;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange.Reduce
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::BigInteger (::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange::*)(::Org::BouncyCastle::Math::BigInteger)>(&::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange::Reduce)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x11916dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange>::get(),
                            "Reduce",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::BigInteger>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange.S1
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange::*)(::Org::BouncyCastle::Crypto::IDigest, ::Org::BouncyCastle::Math::EC::ECPoint, ::ArrayW<uint8_t>)>(&::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange::S1)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x1191228;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange>::get(),
                            "S1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::IDigest>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::ECPoint>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange.CalculateInnerHash
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange::*)(::Org::BouncyCastle::Crypto::IDigest, ::Org::BouncyCastle::Math::EC::ECPoint, ::ArrayW<uint8_t>, ::ArrayW<uint8_t>, ::Org::BouncyCastle::Math::EC::ECPoint, ::Org::BouncyCastle::Math::EC::ECPoint)>(&::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange::CalculateInnerHash)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x1191018;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange>::get(),
                            "CalculateInnerHash",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::IDigest>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::ECPoint>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::ECPoint>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::ECPoint>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange.S2
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange::*)(::Org::BouncyCastle::Crypto::IDigest, ::Org::BouncyCastle::Math::EC::ECPoint, ::ArrayW<uint8_t>)>(&::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange::S2)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x119139c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange>::get(),
                            "S2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::IDigest>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::ECPoint>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange.GetZ
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange::*)(::Org::BouncyCastle::Crypto::IDigest, ::ArrayW<uint8_t>, ::Org::BouncyCastle::Math::EC::ECPoint)>(&::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange::GetZ)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x1190a08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange>::get(),
                            "GetZ",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::IDigest>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::ECPoint>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange.AddUserID
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange::*)(::Org::BouncyCastle::Crypto::IDigest, ::ArrayW<uint8_t>)>(&::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange::AddUserID)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x1191eb4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange>::get(),
                            "AddUserID",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::IDigest>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange.AddFieldElement
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange::*)(::Org::BouncyCastle::Crypto::IDigest, ::Org::BouncyCastle::Math::EC::ECFieldElement)>(&::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange::AddFieldElement)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x1191de0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange>::get(),
                            "AddFieldElement",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::IDigest>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::ECFieldElement>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void ::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange::__set_mDigest(::Org::BouncyCastle::Crypto::IDigest value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Crypto::IDigest, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::Org::BouncyCastle::Crypto::IDigest>(value));
}
constexpr ::Org::BouncyCastle::Crypto::IDigest ::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange::__get_mDigest() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Crypto::IDigest, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange::__set_mUserID(::ArrayW<uint8_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<uint8_t>>(value));
}
constexpr ::ArrayW<uint8_t> ::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange::__get_mUserID() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange::__set_mStaticKey(::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters>(value));
}
constexpr ::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters ::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange::__get_mStaticKey() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange::__set_mStaticPubPoint(::Org::BouncyCastle::Math::EC::ECPoint value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Math::EC::ECPoint, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::Org::BouncyCastle::Math::EC::ECPoint>(value));
}
constexpr ::Org::BouncyCastle::Math::EC::ECPoint ::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange::__get_mStaticPubPoint() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Math::EC::ECPoint, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange::__set_mEphemeralPubPoint(::Org::BouncyCastle::Math::EC::ECPoint value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Math::EC::ECPoint, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::Org::BouncyCastle::Math::EC::ECPoint>(value));
}
constexpr ::Org::BouncyCastle::Math::EC::ECPoint ::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange::__get_mEphemeralPubPoint() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Math::EC::ECPoint, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange::__set_mECParams(::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters>(value));
}
constexpr ::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters ::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange::__get_mECParams() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange::__set_mW(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange::__get_mW() const {
return ::cordl_internals::getInstanceField<int32_t, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange::__set_mEphemeralKey(::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters>(value));
}
constexpr ::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters ::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange::__get_mEphemeralKey() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange::__set_mInitiator(bool value)  {
::cordl_internals::setInstanceField<bool, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange::__get_mInitiator() const {
return ::cordl_internals::getInstanceField<bool, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 ::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange::SM2KeyExchange()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<SM2KeyExchange>())) {}
 void ::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters [CppParam { name: "digest", ty: "::Org::BouncyCastle::Crypto::IDigest", modifiers: "", def_value: None }]
 ::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange::SM2KeyExchange(::Org::BouncyCastle::Crypto::IDigest digest)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<SM2KeyExchange>(digest))) {}
 void ::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange::_ctor(::Org::BouncyCastle::Crypto::IDigest digest)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::IDigest>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, digest);
}
 void ::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange::Init(::Org::BouncyCastle::Crypto::ICipherParameters privParam)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::ICipherParameters>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, privParam);
}
 ::ArrayW<uint8_t> ::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange::CalculateKey(int32_t kLen, ::Org::BouncyCastle::Crypto::ICipherParameters pubParam)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange>::get(),
                            "CalculateKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::ICipherParameters>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(const_cast<void*>(instance), ___internal_method, kLen, pubParam);
}
 ::ArrayW<::ArrayW<uint8_t>> ::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange::CalculateKeyWithConfirmation(int32_t kLen, ::ArrayW<uint8_t> confirmationTag, ::Org::BouncyCastle::Crypto::ICipherParameters pubParam)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange>::get(),
                            "CalculateKeyWithConfirmation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::ICipherParameters>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::ArrayW<uint8_t>>, false>(const_cast<void*>(instance), ___internal_method, kLen, confirmationTag, pubParam);
}
 ::Org::BouncyCastle::Math::EC::ECPoint ::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange::CalculateU(::Org::BouncyCastle::Crypto::Parameters::SM2KeyExchangePublicParameters otherPub)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange>::get(),
                            "CalculateU",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Parameters::SM2KeyExchangePublicParameters>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::ECPoint, false>(const_cast<void*>(instance), ___internal_method, otherPub);
}
 ::ArrayW<uint8_t> ::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange::Kdf(::Org::BouncyCastle::Math::EC::ECPoint u, ::ArrayW<uint8_t> za, ::ArrayW<uint8_t> zb, int32_t klen)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange>::get(),
                            "Kdf",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::ECPoint>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(const_cast<void*>(instance), ___internal_method, u, za, zb, klen);
}
 ::Org::BouncyCastle::Math::BigInteger ::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange::Reduce(::Org::BouncyCastle::Math::BigInteger x)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange>::get(),
                            "Reduce",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::BigInteger>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::BigInteger, false>(const_cast<void*>(instance), ___internal_method, x);
}
 ::ArrayW<uint8_t> ::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange::S1(::Org::BouncyCastle::Crypto::IDigest digest, ::Org::BouncyCastle::Math::EC::ECPoint u, ::ArrayW<uint8_t> inner)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange>::get(),
                            "S1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::IDigest>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::ECPoint>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(const_cast<void*>(instance), ___internal_method, digest, u, inner);
}
 ::ArrayW<uint8_t> ::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange::CalculateInnerHash(::Org::BouncyCastle::Crypto::IDigest digest, ::Org::BouncyCastle::Math::EC::ECPoint u, ::ArrayW<uint8_t> za, ::ArrayW<uint8_t> zb, ::Org::BouncyCastle::Math::EC::ECPoint p1, ::Org::BouncyCastle::Math::EC::ECPoint p2)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange>::get(),
                            "CalculateInnerHash",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::IDigest>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::ECPoint>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::ECPoint>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::ECPoint>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(const_cast<void*>(instance), ___internal_method, digest, u, za, zb, p1, p2);
}
 ::ArrayW<uint8_t> ::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange::S2(::Org::BouncyCastle::Crypto::IDigest digest, ::Org::BouncyCastle::Math::EC::ECPoint u, ::ArrayW<uint8_t> inner)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange>::get(),
                            "S2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::IDigest>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::ECPoint>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(const_cast<void*>(instance), ___internal_method, digest, u, inner);
}
 ::ArrayW<uint8_t> ::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange::GetZ(::Org::BouncyCastle::Crypto::IDigest digest, ::ArrayW<uint8_t> userID, ::Org::BouncyCastle::Math::EC::ECPoint pubPoint)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange>::get(),
                            "GetZ",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::IDigest>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::ECPoint>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(const_cast<void*>(instance), ___internal_method, digest, userID, pubPoint);
}
 void ::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange::AddUserID(::Org::BouncyCastle::Crypto::IDigest digest, ::ArrayW<uint8_t> userID)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange>::get(),
                            "AddUserID",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::IDigest>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, digest, userID);
}
 void ::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange::AddFieldElement(::Org::BouncyCastle::Crypto::IDigest digest, ::Org::BouncyCastle::Math::EC::ECFieldElement v)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange>::get(),
                            "AddFieldElement",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::IDigest>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::ECFieldElement>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, digest, v);
}
} // end anonymous namespace
