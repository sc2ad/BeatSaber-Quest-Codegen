#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace {
namespace Org::BouncyCastle::Ocsp {
class OcspResp;
}
// Forward declare root types
namespace Org::BouncyCastle::Ocsp {
class OCSPRespGenerator;
}
// Type: Org.BouncyCastle.Ocsp::OCSPRespGenerator
namespace Org::BouncyCastle::Ocsp {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1617))
// CS Name: Org.BouncyCastle.Ocsp.OCSPRespGenerator
class CORDL_TYPE OCSPRespGenerator : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~OCSPRespGenerator() = default;

// Ctor Parameters [CppParam { name: "", ty: "OCSPRespGenerator", modifiers: " const&", def_value: None }]
constexpr OCSPRespGenerator(OCSPRespGenerator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OCSPRespGenerator", modifiers: "&&", def_value: None }]
constexpr OCSPRespGenerator(OCSPRespGenerator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OCSPRespGenerator(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr OCSPRespGenerator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OCSPRespGenerator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OCSPRespGenerator& operator=(OCSPRespGenerator&& o) noexcept = default;
  constexpr OCSPRespGenerator& operator=(OCSPRespGenerator const& o) noexcept = default;
                


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

/// @brief Method Generate addr 0x10160a0 size 0x318 virtual false final false
 ::Org::BouncyCastle::Ocsp::OcspResp Generate(int32_t status, ::bs_hook::Il2CppWrapperType response) ;

// Ctor Parameters []
explicit OCSPRespGenerator() ;

/// @brief Method .ctor addr 0x10163b8 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Ocsp
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Ocsp::OCSPRespGenerator);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Ocsp::OCSPRespGenerator, "Org.BouncyCastle.Ocsp", "OCSPRespGenerator");
