#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerInteger_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace Org::BouncyCastle::Math {
class BigInteger;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X509 {
class CrlNumber;
}
// Type: Org.BouncyCastle.Asn1.X509::CrlNumber
namespace Org::BouncyCastle::Asn1::X509 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(123))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(353))
// CS Name: Org.BouncyCastle.Asn1.X509.CrlNumber
class CORDL_TYPE CrlNumber : public ::Org::BouncyCastle::Asn1::DerInteger {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~CrlNumber() = default;

// Ctor Parameters [CppParam { name: "", ty: "CrlNumber", modifiers: " const&", def_value: None }]
constexpr CrlNumber(CrlNumber const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CrlNumber", modifiers: "&&", def_value: None }]
constexpr CrlNumber(CrlNumber&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CrlNumber(void* ptr) noexcept : ::Org::BouncyCastle::Asn1::DerInteger(ptr) {
}


  constexpr CrlNumber& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CrlNumber& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CrlNumber& operator=(CrlNumber&& o) noexcept = default;
  constexpr CrlNumber& operator=(CrlNumber const& o) noexcept = default;
                


// Properties

 ::Org::BouncyCastle::Math::BigInteger __declspec(property(get=get_Number))  Number;


// Methods

// Ctor Parameters [CppParam { name: "number", ty: "::Org::BouncyCastle::Math::BigInteger", modifiers: "", def_value: None }]
explicit CrlNumber(::Org::BouncyCastle::Math::BigInteger number) ;

/// @brief Method .ctor addr 0x1100e54 size 0x8 virtual false final false
 void _ctor(::Org::BouncyCastle::Math::BigInteger number) ;

/// @brief Method get_Number addr 0x1100e5c size 0x8 virtual false final false
 ::Org::BouncyCastle::Math::BigInteger get_Number() ;

/// @brief Method ToString addr 0x1100e64 size 0x5c virtual true final false
 ::StringW ToString() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::X509
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Asn1::X509::CrlNumber);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::X509::CrlNumber, "Org.BouncyCastle.Asn1.X509", "CrlNumber");
