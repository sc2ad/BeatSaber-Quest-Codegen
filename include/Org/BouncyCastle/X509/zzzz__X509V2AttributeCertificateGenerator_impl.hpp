#pragma once
#include "Org/BouncyCastle/X509/zzzz__X509V2AttributeCertificateGenerator_def.hpp"
#include "Org/BouncyCastle/Security/zzzz__SecureRandom_def.hpp"
#include "Org/BouncyCastle/X509/zzzz__AttributeCertificateIssuer_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__AsymmetricKeyParameter_def.hpp"
#include "Org/BouncyCastle/X509/zzzz__AttributeCertificateHolder_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerObjectIdentifier_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ISignatureFactory_def.hpp"
#include "Org/BouncyCastle/X509/zzzz__X509Attribute_def.hpp"
#include "Org/BouncyCastle/X509/zzzz__IX509AttributeCertificate_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__V2AttributeCertificateInfoGenerator_def.hpp"
#include "Org/BouncyCastle/Math/zzzz__BigInteger_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__X509ExtensionsGenerator_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__AlgorithmIdentifier_def.hpp"
//  Writing Method size for method: Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator::*)()>(&Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator::_ctor)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x10fa200;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator.Reset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator::*)()>(&Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator::Reset)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x10fa29c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator>::get(),
                            "Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator.SetHolder
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator::*)(Org::BouncyCastle::X509::AttributeCertificateHolder)>(&Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator::SetHolder)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x10fa308;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator>::get(),
                            "SetHolder",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::X509::AttributeCertificateHolder>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator.SetIssuer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator::*)(Org::BouncyCastle::X509::AttributeCertificateIssuer)>(&Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator::SetIssuer)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x10fa32c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator>::get(),
                            "SetIssuer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::X509::AttributeCertificateIssuer>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator.SetSerialNumber
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator::*)(Org::BouncyCastle::Math::BigInteger)>(&Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator::SetSerialNumber)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x10fa358;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator>::get(),
                            "SetSerialNumber",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::BigInteger>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator.SetNotBefore
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator::*)(System::DateTime)>(&Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator::SetNotBefore)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x10fa3d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator>::get(),
                            "SetNotBefore",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::DateTime>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator.SetNotAfter
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator::*)(System::DateTime)>(&Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator::SetNotAfter)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x10fa448;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator>::get(),
                            "SetNotAfter",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::DateTime>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator.SetSignatureAlgorithm
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator::*)(::StringW)>(&Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator::SetSignatureAlgorithm)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x10fa4c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator>::get(),
                            "SetSignatureAlgorithm",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator.AddAttribute
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator::*)(Org::BouncyCastle::X509::X509Attribute)>(&Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator::AddAttribute)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x10fa61c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator>::get(),
                            "AddAttribute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::X509::X509Attribute>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator.SetIssuerUniqueId
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator::*)(::ArrayW<bool>)>(&Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator::SetIssuerUniqueId)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x10fa660;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator>::get(),
                            "SetIssuerUniqueId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<bool>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator.AddExtension
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator::*)(::StringW, bool, Org::BouncyCastle::Asn1::Asn1Encodable)>(&Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator::AddExtension)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x10fa6a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator>::get(),
                            "AddExtension",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::Asn1Encodable>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator.AddExtension
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator::*)(::StringW, bool, ::ArrayW<uint8_t>)>(&Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator::AddExtension)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x10fa73c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator>::get(),
                            "AddExtension",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator.Generate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::X509::IX509AttributeCertificate (Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator::*)(Org::BouncyCastle::Crypto::AsymmetricKeyParameter)>(&Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator::Generate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x10fa7d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator>::get(),
                            "Generate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::AsymmetricKeyParameter>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator.Generate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::X509::IX509AttributeCertificate (Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator::*)(Org::BouncyCastle::Crypto::AsymmetricKeyParameter, Org::BouncyCastle::Security::SecureRandom)>(&Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator::Generate)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x10fa7dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator>::get(),
                            "Generate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::AsymmetricKeyParameter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Security::SecureRandom>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator.Generate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::X509::IX509AttributeCertificate (Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator::*)(Org::BouncyCastle::Crypto::ISignatureFactory)>(&Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator::Generate)> {
  constexpr static std::size_t size = 0x57c;
  constexpr static std::size_t addrs = 0x10fa860;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator>::get(),
                            "Generate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::ISignatureFactory>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator.get_SignatureAlgNames
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IEnumerable (Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator::*)()>(&Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator::get_SignatureAlgNames)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x10faddc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator>::get(),
                            "get_SignatureAlgNames",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator::__set_extGenerator(Org::BouncyCastle::Asn1::X509::X509ExtensionsGenerator value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Asn1::X509::X509ExtensionsGenerator, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Asn1::X509::X509ExtensionsGenerator>(value));
}
constexpr Org::BouncyCastle::Asn1::X509::X509ExtensionsGenerator Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator::__get_extGenerator() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Asn1::X509::X509ExtensionsGenerator, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator::__set_acInfoGen(Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator>(value));
}
constexpr Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator::__get_acInfoGen() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator::__set_sigOID(Org::BouncyCastle::Asn1::DerObjectIdentifier value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Asn1::DerObjectIdentifier, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Asn1::DerObjectIdentifier>(value));
}
constexpr Org::BouncyCastle::Asn1::DerObjectIdentifier Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator::__get_sigOID() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Asn1::DerObjectIdentifier, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator::__set_sigAlgId(Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier>(value));
}
constexpr Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator::__get_sigAlgId() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator::__set_signatureAlgorithm(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator::__get_signatureAlgorithm() const {
return ::cordl_internals::getInstanceField<::StringW, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator::X509V2AttributeCertificateGenerator()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<X509V2AttributeCertificateGenerator>())) {}
 void Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator::Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator>::get(),
                            "Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator::SetHolder(Org::BouncyCastle::X509::AttributeCertificateHolder holder)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator>::get(),
                            "SetHolder",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::X509::AttributeCertificateHolder>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, holder);
}
 void Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator::SetIssuer(Org::BouncyCastle::X509::AttributeCertificateIssuer issuer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator>::get(),
                            "SetIssuer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::X509::AttributeCertificateIssuer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, issuer);
}
 void Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator::SetSerialNumber(Org::BouncyCastle::Math::BigInteger serialNumber)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator>::get(),
                            "SetSerialNumber",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::BigInteger>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, serialNumber);
}
 void Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator::SetNotBefore(System::DateTime date)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator>::get(),
                            "SetNotBefore",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::DateTime>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, date);
}
 void Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator::SetNotAfter(System::DateTime date)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator>::get(),
                            "SetNotAfter",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::DateTime>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, date);
}
 void Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator::SetSignatureAlgorithm(::StringW signatureAlgorithm)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator>::get(),
                            "SetSignatureAlgorithm",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, signatureAlgorithm);
}
 void Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator::AddAttribute(Org::BouncyCastle::X509::X509Attribute attribute)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator>::get(),
                            "AddAttribute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::X509::X509Attribute>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, attribute);
}
 void Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator::SetIssuerUniqueId(::ArrayW<bool> iui)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator>::get(),
                            "SetIssuerUniqueId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<bool>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, iui);
}
 void Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator::AddExtension(::StringW oid, bool critical, Org::BouncyCastle::Asn1::Asn1Encodable extensionValue)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator>::get(),
                            "AddExtension",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::Asn1Encodable>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, oid, critical, extensionValue);
}
 void Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator::AddExtension(::StringW oid, bool critical, ::ArrayW<uint8_t> extensionValue)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator>::get(),
                            "AddExtension",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, oid, critical, extensionValue);
}
 Org::BouncyCastle::X509::IX509AttributeCertificate Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator::Generate(Org::BouncyCastle::Crypto::AsymmetricKeyParameter privateKey)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator>::get(),
                            "Generate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::AsymmetricKeyParameter>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::X509::IX509AttributeCertificate, false>(const_cast<void*>(instance), ___internal_method, privateKey);
}
 Org::BouncyCastle::X509::IX509AttributeCertificate Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator::Generate(Org::BouncyCastle::Crypto::AsymmetricKeyParameter privateKey, Org::BouncyCastle::Security::SecureRandom random)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator>::get(),
                            "Generate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::AsymmetricKeyParameter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Security::SecureRandom>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::X509::IX509AttributeCertificate, false>(const_cast<void*>(instance), ___internal_method, privateKey, random);
}
 Org::BouncyCastle::X509::IX509AttributeCertificate Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator::Generate(Org::BouncyCastle::Crypto::ISignatureFactory signatureCalculatorFactory)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator>::get(),
                            "Generate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::ISignatureFactory>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::X509::IX509AttributeCertificate, false>(const_cast<void*>(instance), ___internal_method, signatureCalculatorFactory);
}
 System::Collections::IEnumerable Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator::get_SignatureAlgNames()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::X509::X509V2AttributeCertificateGenerator>::get(),
                            "get_SignatureAlgNames",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::IEnumerable, false>(const_cast<void*>(instance), ___internal_method);
}
