#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Ocsp/zzzz__CertificateStatus_def.hpp"
// Forward declare root types
namespace Org::BouncyCastle::Ocsp {
class UnknownStatus;
}
// Type: Org.BouncyCastle.Ocsp::UnknownStatus
namespace Org::BouncyCastle::Ocsp {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1626))
// CS Name: Org.BouncyCastle.Ocsp.UnknownStatus
class CORDL_TYPE UnknownStatus : public Org::BouncyCastle::Ocsp::CertificateStatus {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~UnknownStatus() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnknownStatus", modifiers: " const&", def_value: None }]
constexpr UnknownStatus(UnknownStatus const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnknownStatus", modifiers: "&&", def_value: None }]
constexpr UnknownStatus(UnknownStatus&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnknownStatus(void* ptr) noexcept : Org::BouncyCastle::Ocsp::CertificateStatus(ptr) {
}


  constexpr UnknownStatus& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnknownStatus& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnknownStatus& operator=(UnknownStatus&& o) noexcept = default;
  constexpr UnknownStatus& operator=(UnknownStatus const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit UnknownStatus() ;

/// @brief Method .ctor addr 0x1018fbc size 0x58 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Ocsp
NEED_NO_BOX(Org::BouncyCastle::Ocsp::UnknownStatus);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Ocsp::UnknownStatus, "Org.BouncyCastle.Ocsp", "UnknownStatus");
