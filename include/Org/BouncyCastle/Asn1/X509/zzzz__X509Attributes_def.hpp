#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X509 {
class X509Attributes;
}
// Type: Org.BouncyCastle.Asn1.X509::X509Attributes
namespace Org::BouncyCastle::Asn1::X509 {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(401))
// CS Name: Org.BouncyCastle.Asn1.X509.X509Attributes
class CORDL_TYPE X509Attributes : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~X509Attributes() = default;

// Ctor Parameters [CppParam { name: "", ty: "X509Attributes", modifiers: " const&", def_value: None }]
constexpr X509Attributes(X509Attributes const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "X509Attributes", modifiers: "&&", def_value: None }]
constexpr X509Attributes(X509Attributes&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit X509Attributes(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr X509Attributes& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr X509Attributes& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr X509Attributes& operator=(X509Attributes&& o) noexcept = default;
  constexpr X509Attributes& operator=(X509Attributes const& o) noexcept = default;
                


// Fields

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_RoleSyntax, put=__set_RoleSyntax))  RoleSyntax;

static void __set_RoleSyntax(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_RoleSyntax() ;


// Methods

// Ctor Parameters []
explicit X509Attributes() ;

/// @brief Method .ctor addr 0x1113184 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::X509
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Asn1::X509::X509Attributes);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::X509::X509Attributes, "Org.BouncyCastle.Asn1.X509", "X509Attributes");
