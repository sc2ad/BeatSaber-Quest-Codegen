#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Sec {
class SecObjectIdentifiers;
}
// Type: Org.BouncyCastle.Asn1.Sec::SecObjectIdentifiers
namespace Org::BouncyCastle::Asn1::Sec {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(290))
// CS Name: Org.BouncyCastle.Asn1.Sec.SecObjectIdentifiers
class CORDL_TYPE SecObjectIdentifiers : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~SecObjectIdentifiers() = default;

// Ctor Parameters [CppParam { name: "", ty: "SecObjectIdentifiers", modifiers: " const&", def_value: None }]
constexpr SecObjectIdentifiers(SecObjectIdentifiers const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SecObjectIdentifiers", modifiers: "&&", def_value: None }]
constexpr SecObjectIdentifiers(SecObjectIdentifiers&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SecObjectIdentifiers(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr SecObjectIdentifiers& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SecObjectIdentifiers& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SecObjectIdentifiers& operator=(SecObjectIdentifiers&& o) noexcept = default;
  constexpr SecObjectIdentifiers& operator=(SecObjectIdentifiers const& o) noexcept = default;
                


// Fields

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_EllipticCurve, put=__set_EllipticCurve))  EllipticCurve;

static void __set_EllipticCurve(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_EllipticCurve() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_SecT163k1, put=__set_SecT163k1))  SecT163k1;

static void __set_SecT163k1(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_SecT163k1() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_SecT163r1, put=__set_SecT163r1))  SecT163r1;

static void __set_SecT163r1(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_SecT163r1() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_SecT239k1, put=__set_SecT239k1))  SecT239k1;

static void __set_SecT239k1(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_SecT239k1() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_SecT113r1, put=__set_SecT113r1))  SecT113r1;

static void __set_SecT113r1(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_SecT113r1() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_SecT113r2, put=__set_SecT113r2))  SecT113r2;

static void __set_SecT113r2(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_SecT113r2() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_SecP112r1, put=__set_SecP112r1))  SecP112r1;

static void __set_SecP112r1(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_SecP112r1() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_SecP112r2, put=__set_SecP112r2))  SecP112r2;

static void __set_SecP112r2(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_SecP112r2() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_SecP160r1, put=__set_SecP160r1))  SecP160r1;

static void __set_SecP160r1(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_SecP160r1() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_SecP160k1, put=__set_SecP160k1))  SecP160k1;

static void __set_SecP160k1(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_SecP160k1() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_SecP256k1, put=__set_SecP256k1))  SecP256k1;

static void __set_SecP256k1(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_SecP256k1() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_SecT163r2, put=__set_SecT163r2))  SecT163r2;

static void __set_SecT163r2(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_SecT163r2() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_SecT283k1, put=__set_SecT283k1))  SecT283k1;

static void __set_SecT283k1(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_SecT283k1() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_SecT283r1, put=__set_SecT283r1))  SecT283r1;

static void __set_SecT283r1(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_SecT283r1() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_SecT131r1, put=__set_SecT131r1))  SecT131r1;

static void __set_SecT131r1(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_SecT131r1() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_SecT131r2, put=__set_SecT131r2))  SecT131r2;

static void __set_SecT131r2(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_SecT131r2() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_SecT193r1, put=__set_SecT193r1))  SecT193r1;

static void __set_SecT193r1(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_SecT193r1() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_SecT193r2, put=__set_SecT193r2))  SecT193r2;

static void __set_SecT193r2(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_SecT193r2() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_SecT233k1, put=__set_SecT233k1))  SecT233k1;

static void __set_SecT233k1(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_SecT233k1() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_SecT233r1, put=__set_SecT233r1))  SecT233r1;

static void __set_SecT233r1(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_SecT233r1() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_SecP128r1, put=__set_SecP128r1))  SecP128r1;

static void __set_SecP128r1(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_SecP128r1() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_SecP128r2, put=__set_SecP128r2))  SecP128r2;

static void __set_SecP128r2(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_SecP128r2() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_SecP160r2, put=__set_SecP160r2))  SecP160r2;

static void __set_SecP160r2(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_SecP160r2() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_SecP192k1, put=__set_SecP192k1))  SecP192k1;

static void __set_SecP192k1(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_SecP192k1() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_SecP224k1, put=__set_SecP224k1))  SecP224k1;

static void __set_SecP224k1(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_SecP224k1() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_SecP224r1, put=__set_SecP224r1))  SecP224r1;

static void __set_SecP224r1(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_SecP224r1() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_SecP384r1, put=__set_SecP384r1))  SecP384r1;

static void __set_SecP384r1(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_SecP384r1() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_SecP521r1, put=__set_SecP521r1))  SecP521r1;

static void __set_SecP521r1(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_SecP521r1() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_SecT409k1, put=__set_SecT409k1))  SecT409k1;

static void __set_SecT409k1(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_SecT409k1() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_SecT409r1, put=__set_SecT409r1))  SecT409r1;

static void __set_SecT409r1(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_SecT409r1() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_SecT571k1, put=__set_SecT571k1))  SecT571k1;

static void __set_SecT571k1(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_SecT571k1() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_SecT571r1, put=__set_SecT571r1))  SecT571r1;

static void __set_SecT571r1(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_SecT571r1() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_SecP192r1, put=__set_SecP192r1))  SecP192r1;

static void __set_SecP192r1(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_SecP192r1() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_SecP256r1, put=__set_SecP256r1))  SecP256r1;

static void __set_SecP256r1(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_SecP256r1() ;


// Methods

// Ctor Parameters []
explicit SecObjectIdentifiers() ;

/// @brief Method .ctor addr 0xfe6110 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::Sec
NEED_NO_BOX(Org::BouncyCastle::Asn1::Sec::SecObjectIdentifiers);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::Sec::SecObjectIdentifiers, "Org.BouncyCastle.Asn1.Sec", "SecObjectIdentifiers");
