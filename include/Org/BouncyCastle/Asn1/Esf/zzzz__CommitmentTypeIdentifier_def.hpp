#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Esf {
class CommitmentTypeIdentifier;
}
// Type: Org.BouncyCastle.Asn1.Esf::CommitmentTypeIdentifier
namespace Org::BouncyCastle::Asn1::Esf {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(135))
// CS Name: Org.BouncyCastle.Asn1.Esf.CommitmentTypeIdentifier
class CORDL_TYPE CommitmentTypeIdentifier : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~CommitmentTypeIdentifier() = default;

// Ctor Parameters [CppParam { name: "", ty: "CommitmentTypeIdentifier", modifiers: " const&", def_value: None }]
constexpr CommitmentTypeIdentifier(CommitmentTypeIdentifier const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CommitmentTypeIdentifier", modifiers: "&&", def_value: None }]
constexpr CommitmentTypeIdentifier(CommitmentTypeIdentifier&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CommitmentTypeIdentifier(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr CommitmentTypeIdentifier& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CommitmentTypeIdentifier& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CommitmentTypeIdentifier& operator=(CommitmentTypeIdentifier&& o) noexcept = default;
  constexpr CommitmentTypeIdentifier& operator=(CommitmentTypeIdentifier const& o) noexcept = default;
                


// Fields

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_ProofOfOrigin, put=__set_ProofOfOrigin))  ProofOfOrigin;

static void __set_ProofOfOrigin(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_ProofOfOrigin() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_ProofOfReceipt, put=__set_ProofOfReceipt))  ProofOfReceipt;

static void __set_ProofOfReceipt(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_ProofOfReceipt() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_ProofOfDelivery, put=__set_ProofOfDelivery))  ProofOfDelivery;

static void __set_ProofOfDelivery(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_ProofOfDelivery() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_ProofOfSender, put=__set_ProofOfSender))  ProofOfSender;

static void __set_ProofOfSender(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_ProofOfSender() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_ProofOfApproval, put=__set_ProofOfApproval))  ProofOfApproval;

static void __set_ProofOfApproval(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_ProofOfApproval() ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_ProofOfCreation, put=__set_ProofOfCreation))  ProofOfCreation;

static void __set_ProofOfCreation(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_ProofOfCreation() ;


// Methods

// Ctor Parameters []
explicit CommitmentTypeIdentifier() ;

/// @brief Method .ctor addr 0xe01294 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::Esf
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Esf::CommitmentTypeIdentifier);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Esf::CommitmentTypeIdentifier, "Org.BouncyCastle.Asn1.Esf", "CommitmentTypeIdentifier");
