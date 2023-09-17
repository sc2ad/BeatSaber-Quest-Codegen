#pragma once
namespace {
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsDHUtilities_def.hpp"
#include "Org/BouncyCastle/Security/zzzz__SecureRandom_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__AsymmetricCipherKeyPair_def.hpp"
#include "System/Collections/zzzz__IDictionary_def.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__DHPublicKeyParameters_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsDHVerifier_def.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__DHParameters_def.hpp"
#include "Org/BouncyCastle/Math/zzzz__BigInteger_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__DHPrivateKeyParameters_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities.FromHex
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::BigInteger (*)(::StringW)>(&::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities::FromHex)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xf187a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities>::get(),
                            "FromHex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities.FromSafeP
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::Parameters::DHParameters (*)(::StringW)>(&::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities::FromSafeP)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0xf18844;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities>::get(),
                            "FromSafeP",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities.AddNegotiatedDheGroupsClientExtension
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Collections::IDictionary, ::ArrayW<uint8_t>)>(&::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities::AddNegotiatedDheGroupsClientExtension)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0xf1890c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities>::get(),
                            "AddNegotiatedDheGroupsClientExtension",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IDictionary>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities.AddNegotiatedDheGroupsServerExtension
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Collections::IDictionary, uint8_t)>(&::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities::AddNegotiatedDheGroupsServerExtension)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0xf18b04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities>::get(),
                            "AddNegotiatedDheGroupsServerExtension",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IDictionary>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities.GetNegotiatedDheGroupsClientExtension
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (*)(::System::Collections::IDictionary)>(&::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities::GetNegotiatedDheGroupsClientExtension)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xf18ca8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities>::get(),
                            "GetNegotiatedDheGroupsClientExtension",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IDictionary>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities.GetNegotiatedDheGroupsServerExtension
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int16_t (*)(::System::Collections::IDictionary)>(&::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities::GetNegotiatedDheGroupsServerExtension)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0xf18e28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities>::get(),
                            "GetNegotiatedDheGroupsServerExtension",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IDictionary>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities.CreateNegotiatedDheGroupsClientExtension
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (*)(::ArrayW<uint8_t>)>(&::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities::CreateNegotiatedDheGroupsClientExtension)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xf18a58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities>::get(),
                            "CreateNegotiatedDheGroupsClientExtension",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities.CreateNegotiatedDheGroupsServerExtension
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (*)(uint8_t)>(&::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities::CreateNegotiatedDheGroupsServerExtension)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xf18c50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities>::get(),
                            "CreateNegotiatedDheGroupsServerExtension",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities.ReadNegotiatedDheGroupsClientExtension
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (*)(::ArrayW<uint8_t>)>(&::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities::ReadNegotiatedDheGroupsClientExtension)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xf18d78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities>::get(),
                            "ReadNegotiatedDheGroupsClientExtension",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities.ReadNegotiatedDheGroupsServerExtension
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (*)(::ArrayW<uint8_t>)>(&::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities::ReadNegotiatedDheGroupsServerExtension)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xf18efc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities>::get(),
                            "ReadNegotiatedDheGroupsServerExtension",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities.GetParametersForDHEGroup
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::Parameters::DHParameters (*)(int16_t)>(&::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities::GetParametersForDHEGroup)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0xf18f54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities>::get(),
                            "GetParametersForDHEGroup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int16_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities.ContainsDheCipherSuites
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::ArrayW<int32_t>)>(&::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities::ContainsDheCipherSuites)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xf19050;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities>::get(),
                            "ContainsDheCipherSuites",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities.IsDheCipherSuite
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(int32_t)>(&::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities::IsDheCipherSuite)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0xf19100;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities>::get(),
                            "IsDheCipherSuite",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities.AreCompatibleParameters
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Org::BouncyCastle::Crypto::Parameters::DHParameters, ::Org::BouncyCastle::Crypto::Parameters::DHParameters)>(&::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities::AreCompatibleParameters)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xf1923c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities>::get(),
                            "AreCompatibleParameters",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Parameters::DHParameters>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Parameters::DHParameters>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities.CalculateDHBasicAgreement
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (*)(::Org::BouncyCastle::Crypto::Parameters::DHPublicKeyParameters, ::Org::BouncyCastle::Crypto::Parameters::DHPrivateKeyParameters)>(&::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities::CalculateDHBasicAgreement)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xf17c18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities>::get(),
                            "CalculateDHBasicAgreement",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Parameters::DHPublicKeyParameters>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Parameters::DHPrivateKeyParameters>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities.GenerateDHKeyPair
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair (*)(::Org::BouncyCastle::Security::SecureRandom, ::Org::BouncyCastle::Crypto::Parameters::DHParameters)>(&::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities::GenerateDHKeyPair)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xf192cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities>::get(),
                            "GenerateDHKeyPair",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Security::SecureRandom>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Parameters::DHParameters>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities.GenerateEphemeralClientKeyExchange
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::Parameters::DHPrivateKeyParameters (*)(::Org::BouncyCastle::Security::SecureRandom, ::Org::BouncyCastle::Crypto::Parameters::DHParameters, ::System::IO::Stream)>(&::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities::GenerateEphemeralClientKeyExchange)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0xf178c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities>::get(),
                            "GenerateEphemeralClientKeyExchange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Security::SecureRandom>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Parameters::DHParameters>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities.GenerateEphemeralServerKeyExchange
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::Parameters::DHPrivateKeyParameters (*)(::Org::BouncyCastle::Security::SecureRandom, ::Org::BouncyCastle::Crypto::Parameters::DHParameters, ::System::IO::Stream)>(&::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities::GenerateEphemeralServerKeyExchange)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0xf171c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities>::get(),
                            "GenerateEphemeralServerKeyExchange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Security::SecureRandom>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Parameters::DHParameters>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities.ReadDHParameter
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::BigInteger (*)(::System::IO::Stream)>(&::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities::ReadDHParameter)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xf17544;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities>::get(),
                            "ReadDHParameter",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities.ReadDHParameters
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::Parameters::DHParameters (*)(::System::IO::Stream)>(&::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities::ReadDHParameters)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0xf19478;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities>::get(),
                            "ReadDHParameters",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities.ReceiveDHParameters
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::Parameters::DHParameters (*)(::Org::BouncyCastle::Crypto::Tls::TlsDHVerifier, ::System::IO::Stream)>(&::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities::ReceiveDHParameters)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0xf1741c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities>::get(),
                            "ReceiveDHParameters",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::TlsDHVerifier>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities.WriteDHParameter
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Org::BouncyCastle::Math::BigInteger, ::System::IO::Stream)>(&::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities::WriteDHParameter)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xf19388;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities>::get(),
                            "WriteDHParameter",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::BigInteger>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities.WriteDHParameters
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Org::BouncyCastle::Crypto::Parameters::DHParameters, ::System::IO::Stream)>(&::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities::WriteDHParameters)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xf19404;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities>::get(),
                            "WriteDHParameters",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Parameters::DHParameters>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities::*)()>(&::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xf1968c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 void ::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities::__set_Two(::Org::BouncyCastle::Math::BigInteger value)  {
::cordl_internals::setStaticField<::Org::BouncyCastle::Math::BigInteger, "Two", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities>::get>(std::forward<::Org::BouncyCastle::Math::BigInteger>(value));
}
 ::Org::BouncyCastle::Math::BigInteger ::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities::__get_Two()  {
return ::cordl_internals::getStaticField<::Org::BouncyCastle::Math::BigInteger, "Two", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities>::get>();
}
 void ::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities::__set_draft_ffdhe2432_p(::StringW value)  {
::cordl_internals::setStaticField<::StringW, "draft_ffdhe2432_p", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities>::get>(std::forward<::StringW>(value));
}
 ::StringW ::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities::__get_draft_ffdhe2432_p()  {
return ::cordl_internals::getStaticField<::StringW, "draft_ffdhe2432_p", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities>::get>();
}
 void ::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities::__set_draft_ffdhe2432(::Org::BouncyCastle::Crypto::Parameters::DHParameters value)  {
::cordl_internals::setStaticField<::Org::BouncyCastle::Crypto::Parameters::DHParameters, "draft_ffdhe2432", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities>::get>(std::forward<::Org::BouncyCastle::Crypto::Parameters::DHParameters>(value));
}
 ::Org::BouncyCastle::Crypto::Parameters::DHParameters ::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities::__get_draft_ffdhe2432()  {
return ::cordl_internals::getStaticField<::Org::BouncyCastle::Crypto::Parameters::DHParameters, "draft_ffdhe2432", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities>::get>();
}
 void ::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities::__set_draft_ffdhe3072_p(::StringW value)  {
::cordl_internals::setStaticField<::StringW, "draft_ffdhe3072_p", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities>::get>(std::forward<::StringW>(value));
}
 ::StringW ::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities::__get_draft_ffdhe3072_p()  {
return ::cordl_internals::getStaticField<::StringW, "draft_ffdhe3072_p", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities>::get>();
}
 void ::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities::__set_draft_ffdhe3072(::Org::BouncyCastle::Crypto::Parameters::DHParameters value)  {
::cordl_internals::setStaticField<::Org::BouncyCastle::Crypto::Parameters::DHParameters, "draft_ffdhe3072", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities>::get>(std::forward<::Org::BouncyCastle::Crypto::Parameters::DHParameters>(value));
}
 ::Org::BouncyCastle::Crypto::Parameters::DHParameters ::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities::__get_draft_ffdhe3072()  {
return ::cordl_internals::getStaticField<::Org::BouncyCastle::Crypto::Parameters::DHParameters, "draft_ffdhe3072", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities>::get>();
}
 void ::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities::__set_draft_ffdhe4096_p(::StringW value)  {
::cordl_internals::setStaticField<::StringW, "draft_ffdhe4096_p", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities>::get>(std::forward<::StringW>(value));
}
 ::StringW ::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities::__get_draft_ffdhe4096_p()  {
return ::cordl_internals::getStaticField<::StringW, "draft_ffdhe4096_p", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities>::get>();
}
 void ::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities::__set_draft_ffdhe4096(::Org::BouncyCastle::Crypto::Parameters::DHParameters value)  {
::cordl_internals::setStaticField<::Org::BouncyCastle::Crypto::Parameters::DHParameters, "draft_ffdhe4096", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities>::get>(std::forward<::Org::BouncyCastle::Crypto::Parameters::DHParameters>(value));
}
 ::Org::BouncyCastle::Crypto::Parameters::DHParameters ::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities::__get_draft_ffdhe4096()  {
return ::cordl_internals::getStaticField<::Org::BouncyCastle::Crypto::Parameters::DHParameters, "draft_ffdhe4096", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities>::get>();
}
 void ::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities::__set_draft_ffdhe6144_p(::StringW value)  {
::cordl_internals::setStaticField<::StringW, "draft_ffdhe6144_p", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities>::get>(std::forward<::StringW>(value));
}
 ::StringW ::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities::__get_draft_ffdhe6144_p()  {
return ::cordl_internals::getStaticField<::StringW, "draft_ffdhe6144_p", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities>::get>();
}
 void ::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities::__set_draft_ffdhe6144(::Org::BouncyCastle::Crypto::Parameters::DHParameters value)  {
::cordl_internals::setStaticField<::Org::BouncyCastle::Crypto::Parameters::DHParameters, "draft_ffdhe6144", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities>::get>(std::forward<::Org::BouncyCastle::Crypto::Parameters::DHParameters>(value));
}
 ::Org::BouncyCastle::Crypto::Parameters::DHParameters ::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities::__get_draft_ffdhe6144()  {
return ::cordl_internals::getStaticField<::Org::BouncyCastle::Crypto::Parameters::DHParameters, "draft_ffdhe6144", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities>::get>();
}
 void ::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities::__set_draft_ffdhe8192_p(::StringW value)  {
::cordl_internals::setStaticField<::StringW, "draft_ffdhe8192_p", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities>::get>(std::forward<::StringW>(value));
}
 ::StringW ::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities::__get_draft_ffdhe8192_p()  {
return ::cordl_internals::getStaticField<::StringW, "draft_ffdhe8192_p", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities>::get>();
}
 void ::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities::__set_draft_ffdhe8192(::Org::BouncyCastle::Crypto::Parameters::DHParameters value)  {
::cordl_internals::setStaticField<::Org::BouncyCastle::Crypto::Parameters::DHParameters, "draft_ffdhe8192", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities>::get>(std::forward<::Org::BouncyCastle::Crypto::Parameters::DHParameters>(value));
}
 ::Org::BouncyCastle::Crypto::Parameters::DHParameters ::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities::__get_draft_ffdhe8192()  {
return ::cordl_internals::getStaticField<::Org::BouncyCastle::Crypto::Parameters::DHParameters, "draft_ffdhe8192", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities>::get>();
}
 ::Org::BouncyCastle::Math::BigInteger ::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities::FromHex(::StringW hex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities>::get(),
                            "FromHex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::BigInteger, false>(nullptr, ___internal_method, hex);
}
 ::Org::BouncyCastle::Crypto::Parameters::DHParameters ::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities::FromSafeP(::StringW hexP)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities>::get(),
                            "FromSafeP",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Parameters::DHParameters, false>(nullptr, ___internal_method, hexP);
}
 void ::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities::AddNegotiatedDheGroupsClientExtension(::System::Collections::IDictionary extensions, ::ArrayW<uint8_t> dheGroups)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities>::get(),
                            "AddNegotiatedDheGroupsClientExtension",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IDictionary>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, extensions, dheGroups);
}
 void ::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities::AddNegotiatedDheGroupsServerExtension(::System::Collections::IDictionary extensions, uint8_t dheGroup)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities>::get(),
                            "AddNegotiatedDheGroupsServerExtension",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IDictionary>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, extensions, dheGroup);
}
 ::ArrayW<uint8_t> ::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities::GetNegotiatedDheGroupsClientExtension(::System::Collections::IDictionary extensions)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities>::get(),
                            "GetNegotiatedDheGroupsClientExtension",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IDictionary>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(nullptr, ___internal_method, extensions);
}
 int16_t ::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities::GetNegotiatedDheGroupsServerExtension(::System::Collections::IDictionary extensions)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities>::get(),
                            "GetNegotiatedDheGroupsServerExtension",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IDictionary>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int16_t, false>(nullptr, ___internal_method, extensions);
}
 ::ArrayW<uint8_t> ::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities::CreateNegotiatedDheGroupsClientExtension(::ArrayW<uint8_t> dheGroups)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities>::get(),
                            "CreateNegotiatedDheGroupsClientExtension",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(nullptr, ___internal_method, dheGroups);
}
 ::ArrayW<uint8_t> ::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities::CreateNegotiatedDheGroupsServerExtension(uint8_t dheGroup)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities>::get(),
                            "CreateNegotiatedDheGroupsServerExtension",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(nullptr, ___internal_method, dheGroup);
}
 ::ArrayW<uint8_t> ::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities::ReadNegotiatedDheGroupsClientExtension(::ArrayW<uint8_t> extensionData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities>::get(),
                            "ReadNegotiatedDheGroupsClientExtension",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(nullptr, ___internal_method, extensionData);
}
 uint8_t ::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities::ReadNegotiatedDheGroupsServerExtension(::ArrayW<uint8_t> extensionData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities>::get(),
                            "ReadNegotiatedDheGroupsServerExtension",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<uint8_t, false>(nullptr, ___internal_method, extensionData);
}
 ::Org::BouncyCastle::Crypto::Parameters::DHParameters ::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities::GetParametersForDHEGroup(int16_t dheGroup)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities>::get(),
                            "GetParametersForDHEGroup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int16_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Parameters::DHParameters, false>(nullptr, ___internal_method, dheGroup);
}
 bool ::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities::ContainsDheCipherSuites(::ArrayW<int32_t> cipherSuites)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities>::get(),
                            "ContainsDheCipherSuites",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, cipherSuites);
}
 bool ::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities::IsDheCipherSuite(int32_t cipherSuite)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities>::get(),
                            "IsDheCipherSuite",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, cipherSuite);
}
 bool ::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities::AreCompatibleParameters(::Org::BouncyCastle::Crypto::Parameters::DHParameters a, ::Org::BouncyCastle::Crypto::Parameters::DHParameters b)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities>::get(),
                            "AreCompatibleParameters",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Parameters::DHParameters>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Parameters::DHParameters>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, a, b);
}
 ::ArrayW<uint8_t> ::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities::CalculateDHBasicAgreement(::Org::BouncyCastle::Crypto::Parameters::DHPublicKeyParameters publicKey, ::Org::BouncyCastle::Crypto::Parameters::DHPrivateKeyParameters privateKey)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities>::get(),
                            "CalculateDHBasicAgreement",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Parameters::DHPublicKeyParameters>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Parameters::DHPrivateKeyParameters>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(nullptr, ___internal_method, publicKey, privateKey);
}
 ::Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair ::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities::GenerateDHKeyPair(::Org::BouncyCastle::Security::SecureRandom random, ::Org::BouncyCastle::Crypto::Parameters::DHParameters dhParams)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities>::get(),
                            "GenerateDHKeyPair",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Security::SecureRandom>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Parameters::DHParameters>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair, false>(nullptr, ___internal_method, random, dhParams);
}
 ::Org::BouncyCastle::Crypto::Parameters::DHPrivateKeyParameters ::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities::GenerateEphemeralClientKeyExchange(::Org::BouncyCastle::Security::SecureRandom random, ::Org::BouncyCastle::Crypto::Parameters::DHParameters dhParams, ::System::IO::Stream output)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities>::get(),
                            "GenerateEphemeralClientKeyExchange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Security::SecureRandom>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Parameters::DHParameters>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Parameters::DHPrivateKeyParameters, false>(nullptr, ___internal_method, random, dhParams, output);
}
 ::Org::BouncyCastle::Crypto::Parameters::DHPrivateKeyParameters ::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities::GenerateEphemeralServerKeyExchange(::Org::BouncyCastle::Security::SecureRandom random, ::Org::BouncyCastle::Crypto::Parameters::DHParameters dhParams, ::System::IO::Stream output)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities>::get(),
                            "GenerateEphemeralServerKeyExchange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Security::SecureRandom>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Parameters::DHParameters>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Parameters::DHPrivateKeyParameters, false>(nullptr, ___internal_method, random, dhParams, output);
}
 ::Org::BouncyCastle::Math::BigInteger ::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities::ReadDHParameter(::System::IO::Stream input)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities>::get(),
                            "ReadDHParameter",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::BigInteger, false>(nullptr, ___internal_method, input);
}
 ::Org::BouncyCastle::Crypto::Parameters::DHParameters ::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities::ReadDHParameters(::System::IO::Stream input)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities>::get(),
                            "ReadDHParameters",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Parameters::DHParameters, false>(nullptr, ___internal_method, input);
}
 ::Org::BouncyCastle::Crypto::Parameters::DHParameters ::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities::ReceiveDHParameters(::Org::BouncyCastle::Crypto::Tls::TlsDHVerifier dhVerifier, ::System::IO::Stream input)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities>::get(),
                            "ReceiveDHParameters",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::TlsDHVerifier>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Parameters::DHParameters, false>(nullptr, ___internal_method, dhVerifier, input);
}
 void ::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities::WriteDHParameter(::Org::BouncyCastle::Math::BigInteger x, ::System::IO::Stream output)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities>::get(),
                            "WriteDHParameter",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::BigInteger>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, x, output);
}
 void ::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities::WriteDHParameters(::Org::BouncyCastle::Crypto::Parameters::DHParameters dhParameters, ::System::IO::Stream output)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities>::get(),
                            "WriteDHParameters",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Parameters::DHParameters>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, dhParameters, output);
}
// Ctor Parameters []
 ::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities::TlsDHUtilities()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<TlsDHUtilities>())) {}
 void ::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsDHUtilities>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
