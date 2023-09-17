#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/X509/zzzz__X509ExtensionBase_def.hpp"
namespace {
namespace Org::BouncyCastle::Asn1::Ocsp {
class Request;
}
namespace Org::BouncyCastle::Ocsp {
class CertificateID;
}
namespace Org::BouncyCastle::Asn1::X509 {
class X509Extensions;
}
// Forward declare root types
namespace Org::BouncyCastle::Ocsp {
class Req;
}
// Type: Org.BouncyCastle.Ocsp::Req
namespace Org::BouncyCastle::Ocsp {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1606))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1621))
// CS Name: Org.BouncyCastle.Ocsp.Req
class CORDL_TYPE Req : public ::Org::BouncyCastle::X509::X509ExtensionBase {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~Req() = default;

// Ctor Parameters [CppParam { name: "", ty: "Req", modifiers: " const&", def_value: None }]
constexpr Req(Req const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Req", modifiers: "&&", def_value: None }]
constexpr Req(Req&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Req(void* ptr) noexcept : ::Org::BouncyCastle::X509::X509ExtensionBase(ptr) {
}


  constexpr Req& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Req& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Req& operator=(Req&& o) noexcept = default;
  constexpr Req& operator=(Req const& o) noexcept = default;
                


// Fields

 ::Org::BouncyCastle::Asn1::Ocsp::Request __declspec(property(get=__get_req, put=__set_req))  req;

constexpr void __set_req(::Org::BouncyCastle::Asn1::Ocsp::Request value) ;

constexpr ::Org::BouncyCastle::Asn1::Ocsp::Request __get_req() const;


// Properties

 ::Org::BouncyCastle::Asn1::X509::X509Extensions __declspec(property(get=get_SingleRequestExtensions))  SingleRequestExtensions;


// Methods

// Ctor Parameters [CppParam { name: "req", ty: "::Org::BouncyCastle::Asn1::Ocsp::Request", modifiers: "", def_value: None }]
explicit Req(::Org::BouncyCastle::Asn1::Ocsp::Request req) ;

/// @brief Method .ctor addr 0x1013990 size 0x28 virtual false final false
 void _ctor(::Org::BouncyCastle::Asn1::Ocsp::Request req) ;

/// @brief Method GetCertID addr 0x10188f0 size 0x6c virtual false final false
 ::Org::BouncyCastle::Ocsp::CertificateID GetCertID() ;

/// @brief Method get_SingleRequestExtensions addr 0x101895c size 0x1c virtual false final false
 ::Org::BouncyCastle::Asn1::X509::X509Extensions get_SingleRequestExtensions() ;

/// @brief Method GetX509Extensions addr 0x1018978 size 0x1c virtual true final false
 ::Org::BouncyCastle::Asn1::X509::X509Extensions GetX509Extensions() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Ocsp
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Ocsp::Req);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Ocsp::Req, "Org.BouncyCastle.Ocsp", "Req");
