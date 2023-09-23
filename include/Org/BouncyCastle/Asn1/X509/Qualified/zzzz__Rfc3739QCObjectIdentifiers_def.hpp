#pragma once
#include "../../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X509::Qualified {
class Rfc3739QCObjectIdentifiers;
}
// Type: Org.BouncyCastle.Asn1.X509.Qualified::Rfc3739QCObjectIdentifiers
namespace Org::BouncyCastle::Asn1::X509::Qualified {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(332))
// CS Name: Org.BouncyCastle.Asn1.X509.Qualified.Rfc3739QCObjectIdentifiers
class CORDL_TYPE Rfc3739QCObjectIdentifiers : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~Rfc3739QCObjectIdentifiers() = default;

// Ctor Parameters [CppParam { name: "", ty: "Rfc3739QCObjectIdentifiers", modifiers: " const&", def_value: None }]
constexpr Rfc3739QCObjectIdentifiers(Rfc3739QCObjectIdentifiers const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Rfc3739QCObjectIdentifiers", modifiers: "&&", def_value: None }]
constexpr Rfc3739QCObjectIdentifiers(Rfc3739QCObjectIdentifiers&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Rfc3739QCObjectIdentifiers(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Rfc3739QCObjectIdentifiers& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Rfc3739QCObjectIdentifiers& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Rfc3739QCObjectIdentifiers& operator=(Rfc3739QCObjectIdentifiers&& o) noexcept = default;
  constexpr Rfc3739QCObjectIdentifiers& operator=(Rfc3739QCObjectIdentifiers const& o) noexcept = default;
                


// Fields

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_IdQcs, put=__set_IdQcs))  IdQcs;

static void __set_IdQcs(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_IdQcs() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_IdQcsPkixQCSyntaxV1, put=__set_IdQcsPkixQCSyntaxV1))  IdQcsPkixQCSyntaxV1;

static void __set_IdQcsPkixQCSyntaxV1(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_IdQcsPkixQCSyntaxV1() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_IdQcsPkixQCSyntaxV2, put=__set_IdQcsPkixQCSyntaxV2))  IdQcsPkixQCSyntaxV2;

static void __set_IdQcsPkixQCSyntaxV2(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_IdQcsPkixQCSyntaxV2() ;


// Methods

// Ctor Parameters []
explicit Rfc3739QCObjectIdentifiers() ;

/// @brief Method .ctor addr 0xff47c4 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::X509::Qualified
NEED_NO_BOX(Org::BouncyCastle::Asn1::X509::Qualified::Rfc3739QCObjectIdentifiers);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::X509::Qualified::Rfc3739QCObjectIdentifiers, "Org.BouncyCastle.Asn1.X509.Qualified", "Rfc3739QCObjectIdentifiers");
