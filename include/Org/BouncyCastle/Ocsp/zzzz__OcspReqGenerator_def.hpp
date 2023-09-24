#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace Org::BouncyCastle::Ocsp {
class CertificateID;
}
namespace Org::BouncyCastle::Ocsp {
class OcspReq;
}
namespace Org::BouncyCastle::Asn1::X509 {
class X509Name;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
namespace Org::BouncyCastle::Asn1::X509 {
class X509Extensions;
}
namespace Org::BouncyCastle::Ocsp {
class Org__BouncyCastle__Ocsp__OcspReqGenerator__RequestObject;
}
namespace System::Collections {
class IList;
}
namespace Org::BouncyCastle::Crypto {
class AsymmetricKeyParameter;
}
namespace Org::BouncyCastle::X509 {
class X509Certificate;
}
namespace Org::BouncyCastle::Asn1::X509 {
class GeneralName;
}
namespace System::Collections {
class IEnumerable;
}
namespace Org::BouncyCastle::Asn1::Ocsp {
class Request;
}
// Forward declare root types
namespace Org::BouncyCastle::Ocsp {
class OcspReqGenerator;
}
namespace Org::BouncyCastle::Ocsp {
class Org__BouncyCastle__Ocsp__OcspReqGenerator__RequestObject;
}
// Type: ::RequestObject
namespace Org::BouncyCastle::Ocsp {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1614))
// CS Name: Org.BouncyCastle.Ocsp.OcspReqGenerator::RequestObject
class CORDL_TYPE Org__BouncyCastle__Ocsp__OcspReqGenerator__RequestObject : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~Org__BouncyCastle__Ocsp__OcspReqGenerator__RequestObject() = default;

// Ctor Parameters [CppParam { name: "", ty: "Org__BouncyCastle__Ocsp__OcspReqGenerator__RequestObject", modifiers: " const&", def_value: None }]
constexpr Org__BouncyCastle__Ocsp__OcspReqGenerator__RequestObject(Org__BouncyCastle__Ocsp__OcspReqGenerator__RequestObject const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Org__BouncyCastle__Ocsp__OcspReqGenerator__RequestObject", modifiers: "&&", def_value: None }]
constexpr Org__BouncyCastle__Ocsp__OcspReqGenerator__RequestObject(Org__BouncyCastle__Ocsp__OcspReqGenerator__RequestObject&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Org__BouncyCastle__Ocsp__OcspReqGenerator__RequestObject(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Org__BouncyCastle__Ocsp__OcspReqGenerator__RequestObject& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Org__BouncyCastle__Ocsp__OcspReqGenerator__RequestObject& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Org__BouncyCastle__Ocsp__OcspReqGenerator__RequestObject& operator=(Org__BouncyCastle__Ocsp__OcspReqGenerator__RequestObject&& o) noexcept = default;
  constexpr Org__BouncyCastle__Ocsp__OcspReqGenerator__RequestObject& operator=(Org__BouncyCastle__Ocsp__OcspReqGenerator__RequestObject const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Ocsp::CertificateID __declspec(property(get=__get_certId, put=__set_certId))  certId;

constexpr void __set_certId(Org::BouncyCastle::Ocsp::CertificateID value) ;

constexpr Org::BouncyCastle::Ocsp::CertificateID __get_certId() const;

 Org::BouncyCastle::Asn1::X509::X509Extensions __declspec(property(get=__get_extensions, put=__set_extensions))  extensions;

constexpr void __set_extensions(Org::BouncyCastle::Asn1::X509::X509Extensions value) ;

constexpr Org::BouncyCastle::Asn1::X509::X509Extensions __get_extensions() const;


// Methods

static Org::BouncyCastle::Ocsp::Org__BouncyCastle__Ocsp__OcspReqGenerator__RequestObject New_ctor(Org::BouncyCastle::Ocsp::CertificateID certId, Org::BouncyCastle::Asn1::X509::X509Extensions extensions) ;

/// @brief Method .ctor addr 0x101480c size 0x2c virtual false final false
 void _ctor(Org::BouncyCastle::Ocsp::CertificateID certId, Org::BouncyCastle::Asn1::X509::X509Extensions extensions) ;

/// @brief Method ToRequest addr 0x1015674 size 0x78 virtual false final false
 Org::BouncyCastle::Asn1::Ocsp::Request ToRequest() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Ocsp
// Type: Org.BouncyCastle.Ocsp::OcspReqGenerator
namespace Org::BouncyCastle::Ocsp {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1615))
// CS Name: Org.BouncyCastle.Ocsp.OcspReqGenerator
class CORDL_TYPE OcspReqGenerator : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using RequestObject = Org::BouncyCastle::Ocsp::Org__BouncyCastle__Ocsp__OcspReqGenerator__RequestObject;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~OcspReqGenerator() = default;

// Ctor Parameters [CppParam { name: "", ty: "OcspReqGenerator", modifiers: " const&", def_value: None }]
constexpr OcspReqGenerator(OcspReqGenerator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OcspReqGenerator", modifiers: "&&", def_value: None }]
constexpr OcspReqGenerator(OcspReqGenerator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OcspReqGenerator(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr OcspReqGenerator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OcspReqGenerator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OcspReqGenerator& operator=(OcspReqGenerator&& o) noexcept = default;
  constexpr OcspReqGenerator& operator=(OcspReqGenerator const& o) noexcept = default;
                


// Fields

 System::Collections::IList __declspec(property(get=__get_list, put=__set_list))  list;

constexpr void __set_list(System::Collections::IList value) ;

constexpr System::Collections::IList __get_list() const;

 Org::BouncyCastle::Asn1::X509::GeneralName __declspec(property(get=__get_requestorName, put=__set_requestorName))  requestorName;

constexpr void __set_requestorName(Org::BouncyCastle::Asn1::X509::GeneralName value) ;

constexpr Org::BouncyCastle::Asn1::X509::GeneralName __get_requestorName() const;

 Org::BouncyCastle::Asn1::X509::X509Extensions __declspec(property(get=__get_requestExtensions, put=__set_requestExtensions))  requestExtensions;

constexpr void __set_requestExtensions(Org::BouncyCastle::Asn1::X509::X509Extensions value) ;

constexpr Org::BouncyCastle::Asn1::X509::X509Extensions __get_requestExtensions() const;


// Properties

 System::Collections::IEnumerable __declspec(property(get=get_SignatureAlgNames))  SignatureAlgNames;


// Methods

/// @brief Method AddRequest addr 0x1014728 size 0xe4 virtual false final false
 void AddRequest(Org::BouncyCastle::Ocsp::CertificateID certId) ;

/// @brief Method AddRequest addr 0x1014838 size 0xe8 virtual false final false
 void AddRequest(Org::BouncyCastle::Ocsp::CertificateID certId, Org::BouncyCastle::Asn1::X509::X509Extensions singleRequestExtensions) ;

/// @brief Method SetRequestorName addr 0x1014920 size 0x138 virtual false final false
 void SetRequestorName(Org::BouncyCastle::Asn1::X509::X509Name requestorName) ;

/// @brief Method SetRequestorName addr 0x1014a58 size 0x8 virtual false final false
 void SetRequestorName(Org::BouncyCastle::Asn1::X509::GeneralName requestorName) ;

/// @brief Method SetRequestExtensions addr 0x1014a60 size 0x8 virtual false final false
 void SetRequestExtensions(Org::BouncyCastle::Asn1::X509::X509Extensions requestExtensions) ;

/// @brief Method GenerateRequest addr 0x1014a68 size 0xc0c virtual false final false
 Org::BouncyCastle::Ocsp::OcspReq GenerateRequest(Org::BouncyCastle::Asn1::DerObjectIdentifier signingAlgorithm, Org::BouncyCastle::Crypto::AsymmetricKeyParameter privateKey, ::ArrayW<Org::BouncyCastle::X509::X509Certificate> chain, Org::BouncyCastle::Security::SecureRandom random) ;

/// @brief Method Generate addr 0x10156ec size 0x14 virtual false final false
 Org::BouncyCastle::Ocsp::OcspReq Generate() ;

/// @brief Method Generate addr 0x1015700 size 0x8 virtual false final false
 Org::BouncyCastle::Ocsp::OcspReq Generate(::StringW signingAlgorithm, Org::BouncyCastle::Crypto::AsymmetricKeyParameter privateKey, ::ArrayW<Org::BouncyCastle::X509::X509Certificate> chain) ;

/// @brief Method Generate addr 0x1015708 size 0x1b0 virtual false final false
 Org::BouncyCastle::Ocsp::OcspReq Generate(::StringW signingAlgorithm, Org::BouncyCastle::Crypto::AsymmetricKeyParameter privateKey, ::ArrayW<Org::BouncyCastle::X509::X509Certificate> chain, Org::BouncyCastle::Security::SecureRandom random) ;

/// @brief Method get_SignatureAlgNames addr 0x1015ac4 size 0x4c virtual false final false
 System::Collections::IEnumerable get_SignatureAlgNames() ;

static Org::BouncyCastle::Ocsp::OcspReqGenerator New_ctor() ;

/// @brief Method .ctor addr 0x1015b10 size 0x68 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Ocsp
NEED_NO_BOX(Org::BouncyCastle::Ocsp::OcspReqGenerator);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Ocsp::OcspReqGenerator, "Org.BouncyCastle.Ocsp", "OcspReqGenerator");
NEED_NO_BOX(Org::BouncyCastle::Ocsp::Org__BouncyCastle__Ocsp__OcspReqGenerator__RequestObject);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Ocsp::Org__BouncyCastle__Ocsp__OcspReqGenerator__RequestObject, "Org.BouncyCastle.Ocsp", "OcspReqGenerator/RequestObject");
