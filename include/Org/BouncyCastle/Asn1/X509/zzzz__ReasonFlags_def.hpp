#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerBitString_def.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Asn1 {
class DerBitString;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X509 {
class ReasonFlags;
}
// Type: Org.BouncyCastle.Asn1.X509::ReasonFlags
namespace Org::BouncyCastle::Asn1::X509 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(34))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(379))
// CS Name: Org.BouncyCastle.Asn1.X509.ReasonFlags
class CORDL_TYPE ReasonFlags : public Org::BouncyCastle::Asn1::DerBitString {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~ReasonFlags() = default;

// Ctor Parameters [CppParam { name: "", ty: "ReasonFlags", modifiers: " const&", def_value: None }]
constexpr ReasonFlags(ReasonFlags const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ReasonFlags", modifiers: "&&", def_value: None }]
constexpr ReasonFlags(ReasonFlags&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ReasonFlags(void* ptr) noexcept : Org::BouncyCastle::Asn1::DerBitString(ptr) {
}


  constexpr ReasonFlags& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ReasonFlags& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ReasonFlags& operator=(ReasonFlags&& o) noexcept = default;
  constexpr ReasonFlags& operator=(ReasonFlags const& o) noexcept = default;
                


// Fields

/// @brief Field Unused offset 0
static constexpr int32_t  Unused{128};

/// @brief Field KeyCompromise offset 0
static constexpr int32_t  KeyCompromise{64};

/// @brief Field CACompromise offset 0
static constexpr int32_t  CACompromise{32};

/// @brief Field AffiliationChanged offset 0
static constexpr int32_t  AffiliationChanged{16};

/// @brief Field Superseded offset 0
static constexpr int32_t  Superseded{8};

/// @brief Field CessationOfOperation offset 0
static constexpr int32_t  CessationOfOperation{4};

/// @brief Field CertificateHold offset 0
static constexpr int32_t  CertificateHold{2};

/// @brief Field PrivilegeWithdrawn offset 0
static constexpr int32_t  PrivilegeWithdrawn{1};

/// @brief Field AACompromise offset 0
static constexpr int32_t  AACompromise{32768};


// Methods

// Ctor Parameters [CppParam { name: "reasons", ty: "int32_t", modifiers: "", def_value: None }]
explicit ReasonFlags(int32_t reasons) ;

/// @brief Method .ctor addr 0x110b49c size 0x68 virtual false final false
 void _ctor(int32_t reasons) ;

// Ctor Parameters [CppParam { name: "reasons", ty: "Org::BouncyCastle::Asn1::DerBitString", modifiers: "", def_value: None }]
explicit ReasonFlags(Org::BouncyCastle::Asn1::DerBitString reasons) ;

/// @brief Method .ctor addr 0x1101e08 size 0x94 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::DerBitString reasons) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::X509
NEED_NO_BOX(Org::BouncyCastle::Asn1::X509::ReasonFlags);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::X509::ReasonFlags, "Org.BouncyCastle.Asn1.X509", "ReasonFlags");
