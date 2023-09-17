#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/X509/zzzz__X509ExtensionBase_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace Org::BouncyCastle::Asn1::Tsp {
class TimeStampReq;
}
namespace Org::BouncyCastle::Asn1::X509 {
class X509Extensions;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace System::Collections {
class IList;
}
namespace System::IO {
class Stream;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1InputStream;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::Asn1::X509 {
class X509Extension;
}
// Forward declare root types
namespace Org::BouncyCastle::Tsp {
class TimeStampRequest;
}
// Type: Org.BouncyCastle.Tsp::TimeStampRequest
namespace Org::BouncyCastle::Tsp {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1606))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1764))
// CS Name: Org.BouncyCastle.Tsp.TimeStampRequest
class CORDL_TYPE TimeStampRequest : public ::Org::BouncyCastle::X509::X509ExtensionBase {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~TimeStampRequest() = default;

// Ctor Parameters [CppParam { name: "", ty: "TimeStampRequest", modifiers: " const&", def_value: None }]
constexpr TimeStampRequest(TimeStampRequest const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TimeStampRequest", modifiers: "&&", def_value: None }]
constexpr TimeStampRequest(TimeStampRequest&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TimeStampRequest(void* ptr) noexcept : ::Org::BouncyCastle::X509::X509ExtensionBase(ptr) {
}


  constexpr TimeStampRequest& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TimeStampRequest& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TimeStampRequest& operator=(TimeStampRequest&& o) noexcept = default;
  constexpr TimeStampRequest& operator=(TimeStampRequest const& o) noexcept = default;
                


// Fields

 ::Org::BouncyCastle::Asn1::Tsp::TimeStampReq __declspec(property(get=__get_req, put=__set_req))  req;

constexpr void __set_req(::Org::BouncyCastle::Asn1::Tsp::TimeStampReq value) ;

constexpr ::Org::BouncyCastle::Asn1::Tsp::TimeStampReq __get_req() const;

 ::Org::BouncyCastle::Asn1::X509::X509Extensions __declspec(property(get=__get_extensions, put=__set_extensions))  extensions;

constexpr void __set_extensions(::Org::BouncyCastle::Asn1::X509::X509Extensions value) ;

constexpr ::Org::BouncyCastle::Asn1::X509::X509Extensions __get_extensions() const;


// Properties

 int32_t __declspec(property(get=get_Version))  Version;

 ::StringW __declspec(property(get=get_MessageImprintAlgOid))  MessageImprintAlgOid;

 ::StringW __declspec(property(get=get_ReqPolicy))  ReqPolicy;

 ::Org::BouncyCastle::Math::BigInteger __declspec(property(get=get_Nonce))  Nonce;

 bool __declspec(property(get=get_CertReq))  CertReq;

 ::Org::BouncyCastle::Asn1::X509::X509Extensions __declspec(property(get=get_Extensions))  Extensions;

 bool __declspec(property(get=get_HasExtensions))  HasExtensions;


// Methods

// Ctor Parameters [CppParam { name: "req", ty: "::Org::BouncyCastle::Asn1::Tsp::TimeStampReq", modifiers: "", def_value: None }]
explicit TimeStampRequest(::Org::BouncyCastle::Asn1::Tsp::TimeStampReq req) ;

/// @brief Method .ctor addr 0x10c3030 size 0x38 virtual false final false
 void _ctor(::Org::BouncyCastle::Asn1::Tsp::TimeStampReq req) ;

// Ctor Parameters [CppParam { name: "req", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
explicit TimeStampRequest(::ArrayW<uint8_t> req) ;

/// @brief Method .ctor addr 0x10c3068 size 0x74 virtual false final false
 void _ctor(::ArrayW<uint8_t> req) ;

// Ctor Parameters [CppParam { name: "input", ty: "::System::IO::Stream", modifiers: "", def_value: None }]
explicit TimeStampRequest(::System::IO::Stream input) ;

/// @brief Method .ctor addr 0x10c3210 size 0x74 virtual false final false
 void _ctor(::System::IO::Stream input) ;

// Ctor Parameters [CppParam { name: "str", ty: "::Org::BouncyCastle::Asn1::Asn1InputStream", modifiers: "", def_value: None }]
explicit TimeStampRequest(::Org::BouncyCastle::Asn1::Asn1InputStream str) ;

/// @brief Method .ctor addr 0x10c30dc size 0x134 virtual false final false
 void _ctor(::Org::BouncyCastle::Asn1::Asn1InputStream str) ;

/// @brief Method get_Version addr 0x10c3284 size 0x24 virtual false final false
 int32_t get_Version() ;

/// @brief Method get_MessageImprintAlgOid addr 0x10c32a8 size 0x3c virtual false final false
 ::StringW get_MessageImprintAlgOid() ;

/// @brief Method GetMessageImprintDigest addr 0x10c32e4 size 0x24 virtual false final false
 ::ArrayW<uint8_t> GetMessageImprintDigest() ;

/// @brief Method get_ReqPolicy addr 0x10c3308 size 0x2c virtual false final false
 ::StringW get_ReqPolicy() ;

/// @brief Method get_Nonce addr 0x10c3334 size 0x2c virtual false final false
 ::Org::BouncyCastle::Math::BigInteger get_Nonce() ;

/// @brief Method get_CertReq addr 0x10c3360 size 0x2c virtual false final false
 bool get_CertReq() ;

/// @brief Method Validate addr 0x10c338c size 0x628 virtual false final false
 void Validate(::System::Collections::IList algorithms, ::System::Collections::IList policies, ::System::Collections::IList extensions) ;

/// @brief Method GetEncoded addr 0x10c3bd8 size 0x1c virtual false final false
 ::ArrayW<uint8_t> GetEncoded() ;

/// @brief Method get_Extensions addr 0x10c39d8 size 0x1c virtual false final false
 ::Org::BouncyCastle::Asn1::X509::X509Extensions get_Extensions() ;

/// @brief Method get_HasExtensions addr 0x10c3bf4 size 0x10 virtual true final false
 bool get_HasExtensions() ;

/// @brief Method GetExtension addr 0x10c3c04 size 0x14 virtual true final false
 ::Org::BouncyCastle::Asn1::X509::X509Extension GetExtension(::Org::BouncyCastle::Asn1::DerObjectIdentifier oid) ;

/// @brief Method GetExtensionOids addr 0x10c3c18 size 0x58 virtual true final false
 ::System::Collections::IList GetExtensionOids() ;

/// @brief Method GetX509Extensions addr 0x10c3d20 size 0x1c virtual true final false
 ::Org::BouncyCastle::Asn1::X509::X509Extensions GetX509Extensions() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Tsp
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Tsp::TimeStampRequest);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Tsp::TimeStampRequest, "Org.BouncyCastle.Tsp", "TimeStampRequest");
