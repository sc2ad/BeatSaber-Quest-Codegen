#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Ocsp/zzzz__CertificateStatus_def.hpp"
#include <cstdint>
namespace {
namespace System {
struct DateTime;
}
namespace Org::BouncyCastle::Asn1::Ocsp {
class RevokedInfo;
}
// Forward declare root types
namespace Org::BouncyCastle::Ocsp {
class RevokedStatus;
}
// Type: Org.BouncyCastle.Ocsp::RevokedStatus
namespace Org::BouncyCastle::Ocsp {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1624))
// CS Name: Org.BouncyCastle.Ocsp.RevokedStatus
class CORDL_TYPE RevokedStatus : public ::Org::BouncyCastle::Ocsp::CertificateStatus {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~RevokedStatus() = default;

// Ctor Parameters [CppParam { name: "", ty: "RevokedStatus", modifiers: " const&", def_value: None }]
constexpr RevokedStatus(RevokedStatus const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RevokedStatus", modifiers: "&&", def_value: None }]
constexpr RevokedStatus(RevokedStatus&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RevokedStatus(void* ptr) noexcept : ::Org::BouncyCastle::Ocsp::CertificateStatus(ptr) {
}


  constexpr RevokedStatus& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RevokedStatus& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RevokedStatus& operator=(RevokedStatus&& o) noexcept = default;
  constexpr RevokedStatus& operator=(RevokedStatus const& o) noexcept = default;
                


// Fields

 ::Org::BouncyCastle::Asn1::Ocsp::RevokedInfo __declspec(property(get=__get_info, put=__set_info))  info;

constexpr void __set_info(::Org::BouncyCastle::Asn1::Ocsp::RevokedInfo value) ;

constexpr ::Org::BouncyCastle::Asn1::Ocsp::RevokedInfo __get_info() const;


// Properties

 ::System::DateTime __declspec(property(get=get_RevocationTime))  RevocationTime;

 bool __declspec(property(get=get_HasRevocationReason))  HasRevocationReason;

 int32_t __declspec(property(get=get_RevocationReason))  RevocationReason;


// Methods

// Ctor Parameters [CppParam { name: "info", ty: "::Org::BouncyCastle::Asn1::Ocsp::RevokedInfo", modifiers: "", def_value: None }]
explicit RevokedStatus(::Org::BouncyCastle::Asn1::Ocsp::RevokedInfo info) ;

/// @brief Method .ctor addr 0x1018d14 size 0x6c virtual false final false
 void _ctor(::Org::BouncyCastle::Asn1::Ocsp::RevokedInfo info) ;

// Ctor Parameters [CppParam { name: "revocationDate", ty: "::System::DateTime", modifiers: "", def_value: None }, CppParam { name: "reason", ty: "int32_t", modifiers: "", def_value: None }]
explicit RevokedStatus(::System::DateTime revocationDate, int32_t reason) ;

/// @brief Method .ctor addr 0x1018d80 size 0x108 virtual false final false
 void _ctor(::System::DateTime revocationDate, int32_t reason) ;

/// @brief Method get_RevocationTime addr 0x1012c1c size 0x24 virtual false final false
 ::System::DateTime get_RevocationTime() ;

/// @brief Method get_HasRevocationReason addr 0x1012b88 size 0x24 virtual false final false
 bool get_HasRevocationReason() ;

/// @brief Method get_RevocationReason addr 0x1012bac size 0x70 virtual false final false
 int32_t get_RevocationReason() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Ocsp
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Ocsp::RevokedStatus);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Ocsp::RevokedStatus, "Org.BouncyCastle.Ocsp", "RevokedStatus");
