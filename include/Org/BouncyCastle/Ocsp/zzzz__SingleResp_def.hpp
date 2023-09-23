#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/X509/zzzz__X509ExtensionBase_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace Org::BouncyCastle::Utilities::Date {
class DateTimeObject;
}
namespace Org::BouncyCastle::Ocsp {
class CertificateID;
}
namespace Org::BouncyCastle::Asn1::X509 {
class X509Extensions;
}
namespace System {
struct DateTime;
}
namespace Org::BouncyCastle::Asn1::Ocsp {
class SingleResponse;
}
// Forward declare root types
namespace Org::BouncyCastle::Ocsp {
class SingleResp;
}
// Type: Org.BouncyCastle.Ocsp::SingleResp
namespace Org::BouncyCastle::Ocsp {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1606))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1625))
// CS Name: Org.BouncyCastle.Ocsp.SingleResp
class CORDL_TYPE SingleResp : public Org::BouncyCastle::X509::X509ExtensionBase {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~SingleResp() = default;

// Ctor Parameters [CppParam { name: "", ty: "SingleResp", modifiers: " const&", def_value: None }]
constexpr SingleResp(SingleResp const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SingleResp", modifiers: "&&", def_value: None }]
constexpr SingleResp(SingleResp&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SingleResp(void* ptr) noexcept : Org::BouncyCastle::X509::X509ExtensionBase(ptr) {
}


  constexpr SingleResp& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SingleResp& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SingleResp& operator=(SingleResp&& o) noexcept = default;
  constexpr SingleResp& operator=(SingleResp const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Asn1::Ocsp::SingleResponse __declspec(property(get=__get_resp, put=__set_resp))  resp;

constexpr void __set_resp(Org::BouncyCastle::Asn1::Ocsp::SingleResponse value) ;

constexpr Org::BouncyCastle::Asn1::Ocsp::SingleResponse __get_resp() const;


// Properties

 System::DateTime __declspec(property(get=get_ThisUpdate))  ThisUpdate;

 Org::BouncyCastle::Utilities::Date::DateTimeObject __declspec(property(get=get_NextUpdate))  NextUpdate;

 Org::BouncyCastle::Asn1::X509::X509Extensions __declspec(property(get=get_SingleExtensions))  SingleExtensions;


// Methods

// Ctor Parameters [CppParam { name: "resp", ty: "Org::BouncyCastle::Asn1::Ocsp::SingleResponse", modifiers: "", def_value: None }]
explicit SingleResp(Org::BouncyCastle::Asn1::Ocsp::SingleResponse resp) ;

/// @brief Method .ctor addr 0x100fec8 size 0x28 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Ocsp::SingleResponse resp) ;

/// @brief Method GetCertID addr 0x1018e88 size 0x6c virtual false final false
 Org::BouncyCastle::Ocsp::CertificateID GetCertID() ;

/// @brief Method GetCertStatus addr 0x1018ef4 size 0xc8 virtual false final false
 ::bs_hook::Il2CppWrapperType GetCertStatus() ;

/// @brief Method get_ThisUpdate addr 0x1019014 size 0x24 virtual false final false
 System::DateTime get_ThisUpdate() ;

/// @brief Method get_NextUpdate addr 0x1019038 size 0x8c virtual false final false
 Org::BouncyCastle::Utilities::Date::DateTimeObject get_NextUpdate() ;

/// @brief Method get_SingleExtensions addr 0x10190c4 size 0x1c virtual false final false
 Org::BouncyCastle::Asn1::X509::X509Extensions get_SingleExtensions() ;

/// @brief Method GetX509Extensions addr 0x10190e0 size 0x1c virtual true final false
 Org::BouncyCastle::Asn1::X509::X509Extensions GetX509Extensions() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Ocsp
NEED_NO_BOX(Org::BouncyCastle::Ocsp::SingleResp);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Ocsp::SingleResp, "Org.BouncyCastle.Ocsp", "SingleResp");
