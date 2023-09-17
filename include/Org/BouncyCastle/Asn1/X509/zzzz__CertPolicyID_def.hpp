#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerObjectIdentifier_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X509 {
class CertPolicyID;
}
// Type: Org.BouncyCastle.Asn1.X509::CertPolicyID
namespace Org::BouncyCastle::Asn1::X509 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(350))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(351))
// CS Name: Org.BouncyCastle.Asn1.X509.CertPolicyID
class CORDL_TYPE CertPolicyID : public ::Org::BouncyCastle::Asn1::DerObjectIdentifier {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~CertPolicyID() = default;

// Ctor Parameters [CppParam { name: "", ty: "CertPolicyID", modifiers: " const&", def_value: None }]
constexpr CertPolicyID(CertPolicyID const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CertPolicyID", modifiers: "&&", def_value: None }]
constexpr CertPolicyID(CertPolicyID&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CertPolicyID(void* ptr) noexcept : ::Org::BouncyCastle::Asn1::DerObjectIdentifier(ptr) {
}


  constexpr CertPolicyID& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CertPolicyID& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CertPolicyID& operator=(CertPolicyID&& o) noexcept = default;
  constexpr CertPolicyID& operator=(CertPolicyID const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "id", ty: "::StringW", modifiers: "", def_value: None }]
explicit CertPolicyID(::StringW id) ;

/// @brief Method .ctor addr 0x1100824 size 0x68 virtual false final false
 void _ctor(::StringW id) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::X509
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Asn1::X509::CertPolicyID);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::X509::CertPolicyID, "Org.BouncyCastle.Asn1.X509", "CertPolicyID");
