#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerEnumerated_def.hpp"
#include <cstdint>
namespace {
namespace Org::BouncyCastle::Asn1 {
class DerEnumerated;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Ocsp {
class OcspResponseStatus;
}
// Type: Org.BouncyCastle.Asn1.Ocsp::OcspResponseStatus
namespace Org::BouncyCastle::Asn1::Ocsp {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(213))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(214))
// CS Name: Org.BouncyCastle.Asn1.Ocsp.OcspResponseStatus
class CORDL_TYPE OcspResponseStatus : public ::Org::BouncyCastle::Asn1::DerEnumerated {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~OcspResponseStatus() = default;

// Ctor Parameters [CppParam { name: "", ty: "OcspResponseStatus", modifiers: " const&", def_value: None }]
constexpr OcspResponseStatus(OcspResponseStatus const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OcspResponseStatus", modifiers: "&&", def_value: None }]
constexpr OcspResponseStatus(OcspResponseStatus&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OcspResponseStatus(void* ptr) noexcept : ::Org::BouncyCastle::Asn1::DerEnumerated(ptr) {
}


  constexpr OcspResponseStatus& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OcspResponseStatus& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OcspResponseStatus& operator=(OcspResponseStatus&& o) noexcept = default;
  constexpr OcspResponseStatus& operator=(OcspResponseStatus const& o) noexcept = default;
                


// Fields

/// @brief Field Successful offset 0
static constexpr int32_t  Successful{0};

/// @brief Field MalformedRequest offset 0
static constexpr int32_t  MalformedRequest{1};

/// @brief Field InternalError offset 0
static constexpr int32_t  InternalError{2};

/// @brief Field TryLater offset 0
static constexpr int32_t  TryLater{3};

/// @brief Field SignatureRequired offset 0
static constexpr int32_t  SignatureRequired{5};

/// @brief Field Unauthorized offset 0
static constexpr int32_t  Unauthorized{6};


// Methods

// Ctor Parameters [CppParam { name: "value", ty: "int32_t", modifiers: "", def_value: None }]
explicit OcspResponseStatus(int32_t value) ;

/// @brief Method .ctor addr 0xef3eec size 0x64 virtual false final false
 void _ctor(int32_t value) ;

// Ctor Parameters [CppParam { name: "value", ty: "::Org::BouncyCastle::Asn1::DerEnumerated", modifiers: "", def_value: None }]
explicit OcspResponseStatus(::Org::BouncyCastle::Asn1::DerEnumerated value) ;

/// @brief Method .ctor addr 0xef3398 size 0x6c virtual false final false
 void _ctor(::Org::BouncyCastle::Asn1::DerEnumerated value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::Ocsp
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Ocsp::OcspResponseStatus);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Ocsp::OcspResponseStatus, "Org.BouncyCastle.Asn1.Ocsp", "OcspResponseStatus");
