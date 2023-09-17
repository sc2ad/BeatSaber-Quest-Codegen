#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__AttributeX509_def.hpp"
namespace {
namespace Org::BouncyCastle::Asn1::Smime {
class SmimeCapabilityVector;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Smime {
class SmimeCapabilitiesAttribute;
}
// Type: Org.BouncyCastle.Asn1.Smime::SmimeCapabilitiesAttribute
namespace Org::BouncyCastle::Asn1::Smime {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(293))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(294))
// CS Name: Org.BouncyCastle.Asn1.Smime.SmimeCapabilitiesAttribute
class CORDL_TYPE SmimeCapabilitiesAttribute : public ::Org::BouncyCastle::Asn1::X509::AttributeX509 {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~SmimeCapabilitiesAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "SmimeCapabilitiesAttribute", modifiers: " const&", def_value: None }]
constexpr SmimeCapabilitiesAttribute(SmimeCapabilitiesAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SmimeCapabilitiesAttribute", modifiers: "&&", def_value: None }]
constexpr SmimeCapabilitiesAttribute(SmimeCapabilitiesAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SmimeCapabilitiesAttribute(void* ptr) noexcept : ::Org::BouncyCastle::Asn1::X509::AttributeX509(ptr) {
}


  constexpr SmimeCapabilitiesAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SmimeCapabilitiesAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SmimeCapabilitiesAttribute& operator=(SmimeCapabilitiesAttribute&& o) noexcept = default;
  constexpr SmimeCapabilitiesAttribute& operator=(SmimeCapabilitiesAttribute const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "capabilities", ty: "::Org::BouncyCastle::Asn1::Smime::SmimeCapabilityVector", modifiers: "", def_value: None }]
explicit SmimeCapabilitiesAttribute(::Org::BouncyCastle::Asn1::Smime::SmimeCapabilityVector capabilities) ;

/// @brief Method .ctor addr 0xfe7464 size 0xe4 virtual false final false
 void _ctor(::Org::BouncyCastle::Asn1::Smime::SmimeCapabilityVector capabilities) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::Smime
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Smime::SmimeCapabilitiesAttribute);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Smime::SmimeCapabilitiesAttribute, "Org.BouncyCastle.Asn1.Smime", "SmimeCapabilitiesAttribute");
