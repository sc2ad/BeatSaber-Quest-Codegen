#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
namespace Org::BouncyCastle::Asn1::X509 {
class X509Extensions;
}
namespace Org::BouncyCastle::Asn1::Ocsp {
class CertID;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Ocsp {
class Request;
}
// Type: Org.BouncyCastle.Asn1.Ocsp::Request
namespace Org::BouncyCastle::Asn1::Ocsp {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(215))
// CS Name: Org.BouncyCastle.Asn1.Ocsp.Request
class CORDL_TYPE Request : public Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~Request() = default;

// Ctor Parameters [CppParam { name: "", ty: "Request", modifiers: " const&", def_value: None }]
constexpr Request(Request const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Request", modifiers: "&&", def_value: None }]
constexpr Request(Request&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Request(void* ptr) noexcept : Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr Request& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Request& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Request& operator=(Request&& o) noexcept = default;
  constexpr Request& operator=(Request const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Asn1::Ocsp::CertID __declspec(property(get=__get_reqCert, put=__set_reqCert))  reqCert;

constexpr void __set_reqCert(Org::BouncyCastle::Asn1::Ocsp::CertID value) ;

constexpr Org::BouncyCastle::Asn1::Ocsp::CertID __get_reqCert() const;

 Org::BouncyCastle::Asn1::X509::X509Extensions __declspec(property(get=__get_singleRequestExtensions, put=__set_singleRequestExtensions))  singleRequestExtensions;

constexpr void __set_singleRequestExtensions(Org::BouncyCastle::Asn1::X509::X509Extensions value) ;

constexpr Org::BouncyCastle::Asn1::X509::X509Extensions __get_singleRequestExtensions() const;


// Properties

 Org::BouncyCastle::Asn1::Ocsp::CertID __declspec(property(get=get_ReqCert))  ReqCert;

 Org::BouncyCastle::Asn1::X509::X509Extensions __declspec(property(get=get_SingleRequestExtensions))  SingleRequestExtensions;


// Methods

/// @brief Method GetInstance addr 0xef3f50 size 0x18 virtual false final false
static Org::BouncyCastle::Asn1::Ocsp::Request GetInstance(Org::BouncyCastle::Asn1::Asn1TaggedObject obj, bool explicitly) ;

/// @brief Method GetInstance addr 0xef3f68 size 0x188 virtual false final false
static Org::BouncyCastle::Asn1::Ocsp::Request GetInstance(::bs_hook::Il2CppWrapperType obj) ;

static Org::BouncyCastle::Asn1::Ocsp::Request New_ctor(Org::BouncyCastle::Asn1::Ocsp::CertID reqCert, Org::BouncyCastle::Asn1::X509::X509Extensions singleRequestExtensions) ;

/// @brief Method .ctor addr 0xef4214 size 0x7c virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Ocsp::CertID reqCert, Org::BouncyCastle::Asn1::X509::X509Extensions singleRequestExtensions) ;

static Org::BouncyCastle::Asn1::Ocsp::Request New_ctor(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method .ctor addr 0xef40f0 size 0x124 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method get_ReqCert addr 0xef4290 size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::Ocsp::CertID get_ReqCert() ;

/// @brief Method get_SingleRequestExtensions addr 0xef4298 size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::X509::X509Extensions get_SingleRequestExtensions() ;

/// @brief Method ToAsn1Object addr 0xef42a0 size 0x114 virtual true final false
 Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::Ocsp
NEED_NO_BOX(Org::BouncyCastle::Asn1::Ocsp::Request);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::Ocsp::Request, "Org.BouncyCastle.Asn1.Ocsp", "Request");
