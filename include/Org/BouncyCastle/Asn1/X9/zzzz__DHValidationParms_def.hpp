#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace Org::BouncyCastle::Asn1 {
class DerBitString;
}
namespace Org::BouncyCastle::Asn1 {
class DerInteger;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X9 {
class DHValidationParms;
}
// Type: Org.BouncyCastle.Asn1.X9::DHValidationParms
namespace Org::BouncyCastle::Asn1::X9 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(413))
// CS Name: Org.BouncyCastle.Asn1.X9.DHValidationParms
class CORDL_TYPE DHValidationParms : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~DHValidationParms() = default;

// Ctor Parameters [CppParam { name: "", ty: "DHValidationParms", modifiers: " const&", def_value: None }]
constexpr DHValidationParms(DHValidationParms const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DHValidationParms", modifiers: "&&", def_value: None }]
constexpr DHValidationParms(DHValidationParms&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DHValidationParms(void* ptr) noexcept : ::Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr DHValidationParms& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DHValidationParms& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DHValidationParms& operator=(DHValidationParms&& o) noexcept = default;
  constexpr DHValidationParms& operator=(DHValidationParms const& o) noexcept = default;
                


// Fields

 ::Org::BouncyCastle::Asn1::DerBitString __declspec(property(get=__get_seed, put=__set_seed))  seed;

constexpr void __set_seed(::Org::BouncyCastle::Asn1::DerBitString value) ;

constexpr ::Org::BouncyCastle::Asn1::DerBitString __get_seed() const;

 ::Org::BouncyCastle::Asn1::DerInteger __declspec(property(get=__get_pgenCounter, put=__set_pgenCounter))  pgenCounter;

constexpr void __set_pgenCounter(::Org::BouncyCastle::Asn1::DerInteger value) ;

constexpr ::Org::BouncyCastle::Asn1::DerInteger __get_pgenCounter() const;


// Properties

 ::Org::BouncyCastle::Asn1::DerBitString __declspec(property(get=get_Seed))  Seed;

 ::Org::BouncyCastle::Asn1::DerInteger __declspec(property(get=get_PgenCounter))  PgenCounter;


// Methods

/// @brief Method GetInstance addr 0x111e6c8 size 0x18 virtual false final false
static ::Org::BouncyCastle::Asn1::X9::DHValidationParms GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject obj, bool isExplicit) ;

/// @brief Method GetInstance addr 0x111e124 size 0x188 virtual false final false
static ::Org::BouncyCastle::Asn1::X9::DHValidationParms GetInstance(::bs_hook::Il2CppWrapperType obj) ;

// Ctor Parameters [CppParam { name: "seed", ty: "::Org::BouncyCastle::Asn1::DerBitString", modifiers: "", def_value: None }, CppParam { name: "pgenCounter", ty: "::Org::BouncyCastle::Asn1::DerInteger", modifiers: "", def_value: None }]
explicit DHValidationParms(::Org::BouncyCastle::Asn1::DerBitString seed, ::Org::BouncyCastle::Asn1::DerInteger pgenCounter) ;

/// @brief Method .ctor addr 0x111e850 size 0xa4 virtual false final false
 void _ctor(::Org::BouncyCastle::Asn1::DerBitString seed, ::Org::BouncyCastle::Asn1::DerInteger pgenCounter) ;

// Ctor Parameters [CppParam { name: "seq", ty: "::Org::BouncyCastle::Asn1::Asn1Sequence", modifiers: "", def_value: None }]
explicit DHValidationParms(::Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method .ctor addr 0x111e6e0 size 0x170 virtual false final false
 void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method get_Seed addr 0x111e8f4 size 0x8 virtual false final false
 ::Org::BouncyCastle::Asn1::DerBitString get_Seed() ;

/// @brief Method get_PgenCounter addr 0x111e8fc size 0x8 virtual false final false
 ::Org::BouncyCastle::Asn1::DerInteger get_PgenCounter() ;

/// @brief Method ToAsn1Object addr 0x111e904 size 0xf0 virtual true final false
 ::Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::X9
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Asn1::X9::DHValidationParms);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::X9::DHValidationParms, "Org.BouncyCastle.Asn1.X9", "DHValidationParms");
