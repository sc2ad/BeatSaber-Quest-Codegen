#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/X509/zzzz__X509ExtensionBase_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace Org::BouncyCastle::Asn1::Ocsp {
class OcspRequest;
}
namespace Org::BouncyCastle::Asn1::X509 {
class X509Extensions;
}
namespace System::Collections {
class IList;
}
namespace Org::BouncyCastle::Ocsp {
class Req;
}
namespace Org::BouncyCastle::X509::Store {
class IX509Store;
}
namespace Org::BouncyCastle::Asn1::X509 {
class GeneralName;
}
namespace Org::BouncyCastle::Crypto {
class AsymmetricKeyParameter;
}
namespace System::IO {
class Stream;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1InputStream;
}
namespace Org::BouncyCastle::X509 {
class X509Certificate;
}
// Forward declare root types
namespace Org::BouncyCastle::Ocsp {
class OcspReq;
}
// Type: Org.BouncyCastle.Ocsp::OcspReq
namespace Org::BouncyCastle::Ocsp {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1606))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1613))
// CS Name: Org.BouncyCastle.Ocsp.OcspReq
class CORDL_TYPE OcspReq : public ::Org::BouncyCastle::X509::X509ExtensionBase {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~OcspReq() = default;

// Ctor Parameters [CppParam { name: "", ty: "OcspReq", modifiers: " const&", def_value: None }]
constexpr OcspReq(OcspReq const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OcspReq", modifiers: "&&", def_value: None }]
constexpr OcspReq(OcspReq&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OcspReq(void* ptr) noexcept : ::Org::BouncyCastle::X509::X509ExtensionBase(ptr) {
}


  constexpr OcspReq& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OcspReq& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OcspReq& operator=(OcspReq&& o) noexcept = default;
  constexpr OcspReq& operator=(OcspReq const& o) noexcept = default;
                


// Fields

 ::Org::BouncyCastle::Asn1::Ocsp::OcspRequest __declspec(property(get=__get_req, put=__set_req))  req;

constexpr void __set_req(::Org::BouncyCastle::Asn1::Ocsp::OcspRequest value) ;

constexpr ::Org::BouncyCastle::Asn1::Ocsp::OcspRequest __get_req() const;


// Properties

 int32_t __declspec(property(get=get_Version))  Version;

 ::Org::BouncyCastle::Asn1::X509::GeneralName __declspec(property(get=get_RequestorName))  RequestorName;

 ::Org::BouncyCastle::Asn1::X509::X509Extensions __declspec(property(get=get_RequestExtensions))  RequestExtensions;

 ::StringW __declspec(property(get=get_SignatureAlgOid))  SignatureAlgOid;

 bool __declspec(property(get=get_IsSigned))  IsSigned;


// Methods

// Ctor Parameters [CppParam { name: "req", ty: "::Org::BouncyCastle::Asn1::Ocsp::OcspRequest", modifiers: "", def_value: None }]
explicit OcspReq(::Org::BouncyCastle::Asn1::Ocsp::OcspRequest req) ;

/// @brief Method .ctor addr 0x101349c size 0x28 virtual false final false
 void _ctor(::Org::BouncyCastle::Asn1::Ocsp::OcspRequest req) ;

// Ctor Parameters [CppParam { name: "req", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
explicit OcspReq(::ArrayW<uint8_t> req) ;

/// @brief Method .ctor addr 0x10134c4 size 0x74 virtual false final false
 void _ctor(::ArrayW<uint8_t> req) ;

// Ctor Parameters [CppParam { name: "inStr", ty: "::System::IO::Stream", modifiers: "", def_value: None }]
explicit OcspReq(::System::IO::Stream inStr) ;

/// @brief Method .ctor addr 0x1013688 size 0x74 virtual false final false
 void _ctor(::System::IO::Stream inStr) ;

// Ctor Parameters [CppParam { name: "aIn", ty: "::Org::BouncyCastle::Asn1::Asn1InputStream", modifiers: "", def_value: None }]
explicit OcspReq(::Org::BouncyCastle::Asn1::Asn1InputStream aIn) ;

/// @brief Method .ctor addr 0x1013538 size 0x150 virtual false final false
 void _ctor(::Org::BouncyCastle::Asn1::Asn1InputStream aIn) ;

/// @brief Method GetTbsRequest addr 0x10136fc size 0xf8 virtual false final false
 ::ArrayW<uint8_t> GetTbsRequest() ;

/// @brief Method get_Version addr 0x10137f4 size 0x34 virtual false final false
 int32_t get_Version() ;

/// @brief Method get_RequestorName addr 0x1013828 size 0x28 virtual false final false
 ::Org::BouncyCastle::Asn1::X509::GeneralName get_RequestorName() ;

/// @brief Method GetRequestList addr 0x1013850 size 0x140 virtual false final false
 ::ArrayW<::Org::BouncyCastle::Ocsp::Req> GetRequestList() ;

/// @brief Method get_RequestExtensions addr 0x10139b8 size 0x70 virtual false final false
 ::Org::BouncyCastle::Asn1::X509::X509Extensions get_RequestExtensions() ;

/// @brief Method GetX509Extensions addr 0x1013a28 size 0x4 virtual true final false
 ::Org::BouncyCastle::Asn1::X509::X509Extensions GetX509Extensions() ;

/// @brief Method get_SignatureAlgOid addr 0x1013a2c size 0x44 virtual false final false
 ::StringW get_SignatureAlgOid() ;

/// @brief Method GetSignature addr 0x1013a94 size 0x2c virtual false final false
 ::ArrayW<uint8_t> GetSignature() ;

/// @brief Method GetCertList addr 0x1013ac0 size 0x4d8 virtual false final false
 ::System::Collections::IList GetCertList() ;

/// @brief Method GetCerts addr 0x1013f98 size 0x29c virtual false final false
 ::ArrayW<::Org::BouncyCastle::X509::X509Certificate> GetCerts() ;

/// @brief Method GetCertificates addr 0x1014234 size 0x190 virtual false final false
 ::Org::BouncyCastle::X509::Store::IX509Store GetCertificates(::StringW type) ;

/// @brief Method get_IsSigned addr 0x1013a70 size 0x24 virtual false final false
 bool get_IsSigned() ;

/// @brief Method Verify addr 0x10143c4 size 0x348 virtual false final false
 bool Verify(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter publicKey) ;

/// @brief Method GetEncoded addr 0x101470c size 0x1c virtual false final false
 ::ArrayW<uint8_t> GetEncoded() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Ocsp
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Ocsp::OcspReq);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Ocsp::OcspReq, "Org.BouncyCastle.Ocsp", "OcspReq");
