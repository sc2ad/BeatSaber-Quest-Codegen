#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Ocsp/zzzz__OcspRespStatus_def.hpp"
// Forward declare root types
namespace Org::BouncyCastle::Ocsp {
class OcscpRespStatus;
}
// Type: Org.BouncyCastle.Ocsp::OcscpRespStatus
namespace Org::BouncyCastle::Ocsp {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1618))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1619))
// CS Name: Org.BouncyCastle.Ocsp.OcscpRespStatus
class CORDL_TYPE OcscpRespStatus : public Org::BouncyCastle::Ocsp::OcspRespStatus {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~OcscpRespStatus() = default;

// Ctor Parameters [CppParam { name: "", ty: "OcscpRespStatus", modifiers: " const&", def_value: None }]
constexpr OcscpRespStatus(OcscpRespStatus const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OcscpRespStatus", modifiers: "&&", def_value: None }]
constexpr OcscpRespStatus(OcscpRespStatus&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OcscpRespStatus(void* ptr) noexcept : Org::BouncyCastle::Ocsp::OcspRespStatus(ptr) {
}


  constexpr OcscpRespStatus& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OcscpRespStatus& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OcscpRespStatus& operator=(OcscpRespStatus&& o) noexcept = default;
  constexpr OcscpRespStatus& operator=(OcscpRespStatus const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit OcscpRespStatus() ;

/// @brief Method .ctor addr 0x10163c8 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Ocsp
NEED_NO_BOX(Org::BouncyCastle::Ocsp::OcscpRespStatus);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Ocsp::OcscpRespStatus, "Org.BouncyCastle.Ocsp", "OcscpRespStatus");
