#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Anssi {
class AnssiObjectIdentifiers;
}
// Type: Org.BouncyCastle.Asn1.Anssi::AnssiObjectIdentifiers
namespace Org::BouncyCastle::Asn1::Anssi {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4))
// CS Name: Org.BouncyCastle.Asn1.Anssi.AnssiObjectIdentifiers
class CORDL_TYPE AnssiObjectIdentifiers : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~AnssiObjectIdentifiers() = default;

// Ctor Parameters [CppParam { name: "", ty: "AnssiObjectIdentifiers", modifiers: " const&", def_value: None }]
constexpr AnssiObjectIdentifiers(AnssiObjectIdentifiers const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AnssiObjectIdentifiers", modifiers: "&&", def_value: None }]
constexpr AnssiObjectIdentifiers(AnssiObjectIdentifiers&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AnssiObjectIdentifiers(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr AnssiObjectIdentifiers& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AnssiObjectIdentifiers& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AnssiObjectIdentifiers& operator=(AnssiObjectIdentifiers&& o) noexcept = default;
  constexpr AnssiObjectIdentifiers& operator=(AnssiObjectIdentifiers const& o) noexcept = default;
                


// Fields

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_FRP256v1, put=__set_FRP256v1))  FRP256v1;

static void __set_FRP256v1(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_FRP256v1() ;


// Methods

static Org::BouncyCastle::Asn1::Anssi::AnssiObjectIdentifiers New_ctor() ;

/// @brief Method .ctor addr 0xdd5944 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::Anssi
NEED_NO_BOX(Org::BouncyCastle::Asn1::Anssi::AnssiObjectIdentifiers);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::Anssi::AnssiObjectIdentifiers, "Org.BouncyCastle.Asn1.Anssi", "AnssiObjectIdentifiers");
