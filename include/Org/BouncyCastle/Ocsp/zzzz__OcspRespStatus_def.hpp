#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
// Forward declare root types
namespace Org::BouncyCastle::Ocsp {
class OcspRespStatus;
}
// Type: Org.BouncyCastle.Ocsp::OcspRespStatus
namespace Org::BouncyCastle::Ocsp {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1618))
// CS Name: Org.BouncyCastle.Ocsp.OcspRespStatus
class CORDL_TYPE OcspRespStatus : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~OcspRespStatus() = default;

// Ctor Parameters [CppParam { name: "", ty: "OcspRespStatus", modifiers: " const&", def_value: None }]
constexpr OcspRespStatus(OcspRespStatus const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OcspRespStatus", modifiers: "&&", def_value: None }]
constexpr OcspRespStatus(OcspRespStatus&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OcspRespStatus(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr OcspRespStatus& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OcspRespStatus& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OcspRespStatus& operator=(OcspRespStatus&& o) noexcept = default;
  constexpr OcspRespStatus& operator=(OcspRespStatus const& o) noexcept = default;
                


// Fields

/// @brief Field Successful offset 0
static constexpr int32_t  Successful{0};

/// @brief Field MalformedRequest offset 0
static constexpr int32_t  MalformedRequest{1};

/// @brief Field InternalError offset 0
static constexpr int32_t  InternalError{2};

/// @brief Field TryLater offset 0
static constexpr int32_t  TryLater{3};

/// @brief Field SigRequired offset 0
static constexpr int32_t  SigRequired{5};

/// @brief Field Unauthorized offset 0
static constexpr int32_t  Unauthorized{6};


// Methods

static Org::BouncyCastle::Ocsp::OcspRespStatus New_ctor() ;

/// @brief Method .ctor addr 0x10163c0 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Ocsp
NEED_NO_BOX(Org::BouncyCastle::Ocsp::OcspRespStatus);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Ocsp::OcspRespStatus, "Org.BouncyCastle.Ocsp", "OcspRespStatus");
