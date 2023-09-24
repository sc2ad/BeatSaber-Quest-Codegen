#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerEnumerated_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Asn1 {
class DerEnumerated;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X509 {
class CrlReason;
}
// Type: Org.BouncyCastle.Asn1.X509::CrlReason
namespace Org::BouncyCastle::Asn1::X509 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(213))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(354))
// CS Name: Org.BouncyCastle.Asn1.X509.CrlReason
class CORDL_TYPE CrlReason : public Org::BouncyCastle::Asn1::DerEnumerated {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~CrlReason() = default;

// Ctor Parameters [CppParam { name: "", ty: "CrlReason", modifiers: " const&", def_value: None }]
constexpr CrlReason(CrlReason const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CrlReason", modifiers: "&&", def_value: None }]
constexpr CrlReason(CrlReason&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CrlReason(void* ptr) noexcept : Org::BouncyCastle::Asn1::DerEnumerated(ptr) {
}


  constexpr CrlReason& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CrlReason& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CrlReason& operator=(CrlReason&& o) noexcept = default;
  constexpr CrlReason& operator=(CrlReason const& o) noexcept = default;
                


// Fields

/// @brief Field Unspecified offset 0
static constexpr int32_t  Unspecified{0};

/// @brief Field KeyCompromise offset 0
static constexpr int32_t  KeyCompromise{1};

/// @brief Field CACompromise offset 0
static constexpr int32_t  CACompromise{2};

/// @brief Field AffiliationChanged offset 0
static constexpr int32_t  AffiliationChanged{3};

/// @brief Field Superseded offset 0
static constexpr int32_t  Superseded{4};

/// @brief Field CessationOfOperation offset 0
static constexpr int32_t  CessationOfOperation{5};

/// @brief Field CertificateHold offset 0
static constexpr int32_t  CertificateHold{6};

/// @brief Field RemoveFromCrl offset 0
static constexpr int32_t  RemoveFromCrl{8};

/// @brief Field PrivilegeWithdrawn offset 0
static constexpr int32_t  PrivilegeWithdrawn{9};

/// @brief Field AACompromise offset 0
static constexpr int32_t  AACompromise{10};

static ::ArrayW<::StringW> __declspec(property(get=__get_ReasonString, put=__set_ReasonString))  ReasonString;

static void __set_ReasonString(::ArrayW<::StringW> value) ;

static ::ArrayW<::StringW> __get_ReasonString() ;


// Methods

static Org::BouncyCastle::Asn1::X509::CrlReason New_ctor(int32_t reason) ;

/// @brief Method .ctor addr 0x1100ec0 size 0x68 virtual false final false
 void _ctor(int32_t reason) ;

static Org::BouncyCastle::Asn1::X509::CrlReason New_ctor(Org::BouncyCastle::Asn1::DerEnumerated reason) ;

/// @brief Method .ctor addr 0x1100f28 size 0x74 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::DerEnumerated reason) ;

/// @brief Method ToString addr 0x1100f9c size 0xcc virtual true final false
 ::StringW ToString() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::X509
NEED_NO_BOX(Org::BouncyCastle::Asn1::X509::CrlReason);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::X509::CrlReason, "Org.BouncyCastle.Asn1.X509", "CrlReason");
