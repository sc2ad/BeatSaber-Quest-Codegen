#pragma once
#include "Org/BouncyCastle/X509/zzzz__X509V1CertificateGenerator_def.hpp"
#include "Org/BouncyCastle/Math/zzzz__BigInteger_def.hpp"
#include "Org/BouncyCastle/Security/zzzz__SecureRandom_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__V1TbsCertificateGenerator_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__X509Name_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ISignatureFactory_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__TbsCertificateStructure_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerObjectIdentifier_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__AsymmetricKeyParameter_def.hpp"
#include "Org/BouncyCastle/X509/zzzz__X509Certificate_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__AlgorithmIdentifier_def.hpp"
//  Writing Method size for method: Org::BouncyCastle::X509::X509V1CertificateGenerator._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::X509::X509V1CertificateGenerator::*)()>(&Org::BouncyCastle::X509::X509V1CertificateGenerator::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x10f8188;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::X509::X509V1CertificateGenerator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::X509::X509V1CertificateGenerator.Reset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::X509::X509V1CertificateGenerator::*)()>(&Org::BouncyCastle::X509::X509V1CertificateGenerator::Reset)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x10f81f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::X509::X509V1CertificateGenerator>::get(),
                            "Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::X509::X509V1CertificateGenerator.SetSerialNumber
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::X509::X509V1CertificateGenerator::*)(Org::BouncyCastle::Math::BigInteger)>(&Org::BouncyCastle::X509::X509V1CertificateGenerator::SetSerialNumber)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x10f8254;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::X509::X509V1CertificateGenerator>::get(),
                            "SetSerialNumber",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::BigInteger>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::X509::X509V1CertificateGenerator.SetIssuerDN
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::X509::X509V1CertificateGenerator::*)(Org::BouncyCastle::Asn1::X509::X509Name)>(&Org::BouncyCastle::X509::X509V1CertificateGenerator::SetIssuerDN)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x10f8334;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::X509::X509V1CertificateGenerator>::get(),
                            "SetIssuerDN",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::X509::X509Name>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::X509::X509V1CertificateGenerator.SetNotBefore
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::X509::X509V1CertificateGenerator::*)(System::DateTime)>(&Org::BouncyCastle::X509::X509V1CertificateGenerator::SetNotBefore)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x10f8350;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::X509::X509V1CertificateGenerator>::get(),
                            "SetNotBefore",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::DateTime>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::X509::X509V1CertificateGenerator.SetNotAfter
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::X509::X509V1CertificateGenerator::*)(System::DateTime)>(&Org::BouncyCastle::X509::X509V1CertificateGenerator::SetNotAfter)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x10f83c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::X509::X509V1CertificateGenerator>::get(),
                            "SetNotAfter",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::DateTime>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::X509::X509V1CertificateGenerator.SetSubjectDN
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::X509::X509V1CertificateGenerator::*)(Org::BouncyCastle::Asn1::X509::X509Name)>(&Org::BouncyCastle::X509::X509V1CertificateGenerator::SetSubjectDN)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x10f8440;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::X509::X509V1CertificateGenerator>::get(),
                            "SetSubjectDN",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::X509::X509Name>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::X509::X509V1CertificateGenerator.SetPublicKey
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::X509::X509V1CertificateGenerator::*)(Org::BouncyCastle::Crypto::AsymmetricKeyParameter)>(&Org::BouncyCastle::X509::X509V1CertificateGenerator::SetPublicKey)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x10f845c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::X509::X509V1CertificateGenerator>::get(),
                            "SetPublicKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::AsymmetricKeyParameter>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::X509::X509V1CertificateGenerator.SetSignatureAlgorithm
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::X509::X509V1CertificateGenerator::*)(::StringW)>(&Org::BouncyCastle::X509::X509V1CertificateGenerator::SetSignatureAlgorithm)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x10f8570;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::X509::X509V1CertificateGenerator>::get(),
                            "SetSignatureAlgorithm",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::X509::X509V1CertificateGenerator.Generate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::X509::X509Certificate (Org::BouncyCastle::X509::X509V1CertificateGenerator::*)(Org::BouncyCastle::Crypto::AsymmetricKeyParameter)>(&Org::BouncyCastle::X509::X509V1CertificateGenerator::Generate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x10f86e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::X509::X509V1CertificateGenerator>::get(),
                            "Generate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::AsymmetricKeyParameter>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::X509::X509V1CertificateGenerator.Generate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::X509::X509Certificate (Org::BouncyCastle::X509::X509V1CertificateGenerator::*)(Org::BouncyCastle::Crypto::AsymmetricKeyParameter, Org::BouncyCastle::Security::SecureRandom)>(&Org::BouncyCastle::X509::X509V1CertificateGenerator::Generate)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x10f86e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::X509::X509V1CertificateGenerator>::get(),
                            "Generate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::AsymmetricKeyParameter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Security::SecureRandom>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::X509::X509V1CertificateGenerator.Generate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::X509::X509Certificate (Org::BouncyCastle::X509::X509V1CertificateGenerator::*)(Org::BouncyCastle::Crypto::ISignatureFactory)>(&Org::BouncyCastle::X509::X509V1CertificateGenerator::Generate)> {
  constexpr static std::size_t size = 0x46c;
  constexpr static std::size_t addrs = 0x10f876c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::X509::X509V1CertificateGenerator>::get(),
                            "Generate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::ISignatureFactory>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::X509::X509V1CertificateGenerator.GenerateJcaObject
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::X509::X509Certificate (Org::BouncyCastle::X509::X509V1CertificateGenerator::*)(Org::BouncyCastle::Asn1::X509::TbsCertificateStructure, Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier, ::ArrayW<uint8_t>)>(&Org::BouncyCastle::X509::X509V1CertificateGenerator::GenerateJcaObject)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x10f8bd8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::X509::X509V1CertificateGenerator>::get(),
                            "GenerateJcaObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::X509::TbsCertificateStructure>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::X509::X509V1CertificateGenerator.get_SignatureAlgNames
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IEnumerable (Org::BouncyCastle::X509::X509V1CertificateGenerator::*)()>(&Org::BouncyCastle::X509::X509V1CertificateGenerator::get_SignatureAlgNames)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x10f8cb0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::X509::X509V1CertificateGenerator>::get(),
                            "get_SignatureAlgNames",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void Org::BouncyCastle::X509::X509V1CertificateGenerator::__set_tbsGen(Org::BouncyCastle::Asn1::X509::V1TbsCertificateGenerator value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Asn1::X509::V1TbsCertificateGenerator, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Asn1::X509::V1TbsCertificateGenerator>(value));
}
constexpr Org::BouncyCastle::Asn1::X509::V1TbsCertificateGenerator Org::BouncyCastle::X509::X509V1CertificateGenerator::__get_tbsGen() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Asn1::X509::V1TbsCertificateGenerator, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::X509::X509V1CertificateGenerator::__set_sigOID(Org::BouncyCastle::Asn1::DerObjectIdentifier value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Asn1::DerObjectIdentifier, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Asn1::DerObjectIdentifier>(value));
}
constexpr Org::BouncyCastle::Asn1::DerObjectIdentifier Org::BouncyCastle::X509::X509V1CertificateGenerator::__get_sigOID() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Asn1::DerObjectIdentifier, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::X509::X509V1CertificateGenerator::__set_sigAlgId(Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier>(value));
}
constexpr Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier Org::BouncyCastle::X509::X509V1CertificateGenerator::__get_sigAlgId() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::X509::X509V1CertificateGenerator::__set_signatureAlgorithm(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW Org::BouncyCastle::X509::X509V1CertificateGenerator::__get_signatureAlgorithm() const {
return ::cordl_internals::getInstanceField<::StringW, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 Org::BouncyCastle::X509::X509V1CertificateGenerator::X509V1CertificateGenerator()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<X509V1CertificateGenerator>())) {}
 void Org::BouncyCastle::X509::X509V1CertificateGenerator::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::X509::X509V1CertificateGenerator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void Org::BouncyCastle::X509::X509V1CertificateGenerator::Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::X509::X509V1CertificateGenerator>::get(),
                            "Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void Org::BouncyCastle::X509::X509V1CertificateGenerator::SetSerialNumber(Org::BouncyCastle::Math::BigInteger serialNumber)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::X509::X509V1CertificateGenerator>::get(),
                            "SetSerialNumber",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::BigInteger>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, serialNumber);
}
 void Org::BouncyCastle::X509::X509V1CertificateGenerator::SetIssuerDN(Org::BouncyCastle::Asn1::X509::X509Name issuer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::X509::X509V1CertificateGenerator>::get(),
                            "SetIssuerDN",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::X509::X509Name>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, issuer);
}
 void Org::BouncyCastle::X509::X509V1CertificateGenerator::SetNotBefore(System::DateTime date)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::X509::X509V1CertificateGenerator>::get(),
                            "SetNotBefore",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::DateTime>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, date);
}
 void Org::BouncyCastle::X509::X509V1CertificateGenerator::SetNotAfter(System::DateTime date)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::X509::X509V1CertificateGenerator>::get(),
                            "SetNotAfter",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::DateTime>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, date);
}
 void Org::BouncyCastle::X509::X509V1CertificateGenerator::SetSubjectDN(Org::BouncyCastle::Asn1::X509::X509Name subject)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::X509::X509V1CertificateGenerator>::get(),
                            "SetSubjectDN",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::X509::X509Name>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, subject);
}
 void Org::BouncyCastle::X509::X509V1CertificateGenerator::SetPublicKey(Org::BouncyCastle::Crypto::AsymmetricKeyParameter publicKey)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::X509::X509V1CertificateGenerator>::get(),
                            "SetPublicKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::AsymmetricKeyParameter>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, publicKey);
}
 void Org::BouncyCastle::X509::X509V1CertificateGenerator::SetSignatureAlgorithm(::StringW signatureAlgorithm)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::X509::X509V1CertificateGenerator>::get(),
                            "SetSignatureAlgorithm",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, signatureAlgorithm);
}
 Org::BouncyCastle::X509::X509Certificate Org::BouncyCastle::X509::X509V1CertificateGenerator::Generate(Org::BouncyCastle::Crypto::AsymmetricKeyParameter privateKey)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::X509::X509V1CertificateGenerator>::get(),
                            "Generate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::AsymmetricKeyParameter>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::X509::X509Certificate, false>(const_cast<void*>(instance), ___internal_method, privateKey);
}
 Org::BouncyCastle::X509::X509Certificate Org::BouncyCastle::X509::X509V1CertificateGenerator::Generate(Org::BouncyCastle::Crypto::AsymmetricKeyParameter privateKey, Org::BouncyCastle::Security::SecureRandom random)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::X509::X509V1CertificateGenerator>::get(),
                            "Generate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::AsymmetricKeyParameter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Security::SecureRandom>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::X509::X509Certificate, false>(const_cast<void*>(instance), ___internal_method, privateKey, random);
}
 Org::BouncyCastle::X509::X509Certificate Org::BouncyCastle::X509::X509V1CertificateGenerator::Generate(Org::BouncyCastle::Crypto::ISignatureFactory signatureCalculatorFactory)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::X509::X509V1CertificateGenerator>::get(),
                            "Generate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::ISignatureFactory>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::X509::X509Certificate, false>(const_cast<void*>(instance), ___internal_method, signatureCalculatorFactory);
}
 Org::BouncyCastle::X509::X509Certificate Org::BouncyCastle::X509::X509V1CertificateGenerator::GenerateJcaObject(Org::BouncyCastle::Asn1::X509::TbsCertificateStructure tbsCert, Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier sigAlg, ::ArrayW<uint8_t> signature)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::X509::X509V1CertificateGenerator>::get(),
                            "GenerateJcaObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::X509::TbsCertificateStructure>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::X509::X509Certificate, false>(const_cast<void*>(instance), ___internal_method, tbsCert, sigAlg, signature);
}
 System::Collections::IEnumerable Org::BouncyCastle::X509::X509V1CertificateGenerator::get_SignatureAlgNames()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::X509::X509V1CertificateGenerator>::get(),
                            "get_SignatureAlgNames",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::IEnumerable, false>(const_cast<void*>(instance), ___internal_method);
}
