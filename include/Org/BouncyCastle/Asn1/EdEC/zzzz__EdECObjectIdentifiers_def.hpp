#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::EdEC {
class EdECObjectIdentifiers;
}
// Type: Org.BouncyCastle.Asn1.EdEC::EdECObjectIdentifiers
namespace Org::BouncyCastle::Asn1::EdEC {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(133))
// CS Name: Org.BouncyCastle.Asn1.EdEC.EdECObjectIdentifiers
class CORDL_TYPE EdECObjectIdentifiers : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~EdECObjectIdentifiers() = default;

// Ctor Parameters [CppParam { name: "", ty: "EdECObjectIdentifiers", modifiers: " const&", def_value: None }]
constexpr EdECObjectIdentifiers(EdECObjectIdentifiers const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "EdECObjectIdentifiers", modifiers: "&&", def_value: None }]
constexpr EdECObjectIdentifiers(EdECObjectIdentifiers&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit EdECObjectIdentifiers(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr EdECObjectIdentifiers& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr EdECObjectIdentifiers& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr EdECObjectIdentifiers& operator=(EdECObjectIdentifiers&& o) noexcept = default;
  constexpr EdECObjectIdentifiers& operator=(EdECObjectIdentifiers const& o) noexcept = default;
                


// Fields

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_id_edwards_curve_algs, put=__set_id_edwards_curve_algs))  id_edwards_curve_algs;

static void __set_id_edwards_curve_algs(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_id_edwards_curve_algs() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_id_X25519, put=__set_id_X25519))  id_X25519;

static void __set_id_X25519(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_id_X25519() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_id_X448, put=__set_id_X448))  id_X448;

static void __set_id_X448(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_id_X448() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_id_Ed25519, put=__set_id_Ed25519))  id_Ed25519;

static void __set_id_Ed25519(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_id_Ed25519() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_id_Ed448, put=__set_id_Ed448))  id_Ed448;

static void __set_id_Ed448(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_id_Ed448() ;


// Methods

static Org::BouncyCastle::Asn1::EdEC::EdECObjectIdentifiers New_ctor() ;

/// @brief Method .ctor addr 0xe00990 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::EdEC
NEED_NO_BOX(Org::BouncyCastle::Asn1::EdEC::EdECObjectIdentifiers);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::EdEC::EdECObjectIdentifiers, "Org.BouncyCastle.Asn1.EdEC", "EdECObjectIdentifiers");
