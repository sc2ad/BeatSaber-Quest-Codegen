#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__ECDomainParameters_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Crypto::Parameters {
class ECDomainParameters;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace Org::BouncyCastle::Asn1::X9 {
class X9ECParameters;
}
namespace Org::BouncyCastle::Math::EC {
class ECCurve;
}
namespace Org::BouncyCastle::Math::EC {
class ECPoint;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Parameters {
class ECNamedDomainParameters;
}
// Type: Org.BouncyCastle.Crypto.Parameters::ECNamedDomainParameters
namespace Org::BouncyCastle::Crypto::Parameters {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1033))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1034))
// CS Name: Org.BouncyCastle.Crypto.Parameters.ECNamedDomainParameters
class CORDL_TYPE ECNamedDomainParameters : public Org::BouncyCastle::Crypto::Parameters::ECDomainParameters {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~ECNamedDomainParameters() = default;

// Ctor Parameters [CppParam { name: "", ty: "ECNamedDomainParameters", modifiers: " const&", def_value: None }]
constexpr ECNamedDomainParameters(ECNamedDomainParameters const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ECNamedDomainParameters", modifiers: "&&", def_value: None }]
constexpr ECNamedDomainParameters(ECNamedDomainParameters&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ECNamedDomainParameters(void* ptr) noexcept : Org::BouncyCastle::Crypto::Parameters::ECDomainParameters(ptr) {
}


  constexpr ECNamedDomainParameters& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ECNamedDomainParameters& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ECNamedDomainParameters& operator=(ECNamedDomainParameters&& o) noexcept = default;
  constexpr ECNamedDomainParameters& operator=(ECNamedDomainParameters const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_name, put=__set_name))  name;

constexpr void __set_name(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

constexpr Org::BouncyCastle::Asn1::DerObjectIdentifier __get_name() const;


// Properties

 Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=get_Name))  Name;


// Methods

/// @brief Method get_Name addr 0xea5c5c size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::DerObjectIdentifier get_Name() ;

// Ctor Parameters [CppParam { name: "name", ty: "Org::BouncyCastle::Asn1::DerObjectIdentifier", modifiers: "", def_value: None }, CppParam { name: "dp", ty: "Org::BouncyCastle::Crypto::Parameters::ECDomainParameters", modifiers: "", def_value: None }]
explicit ECNamedDomainParameters(Org::BouncyCastle::Asn1::DerObjectIdentifier name, Org::BouncyCastle::Crypto::Parameters::ECDomainParameters dp) ;

/// @brief Method .ctor addr 0xea5c64 size 0x68 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::DerObjectIdentifier name, Org::BouncyCastle::Crypto::Parameters::ECDomainParameters dp) ;

// Ctor Parameters [CppParam { name: "name", ty: "Org::BouncyCastle::Asn1::DerObjectIdentifier", modifiers: "", def_value: None }, CppParam { name: "x9", ty: "Org::BouncyCastle::Asn1::X9::X9ECParameters", modifiers: "", def_value: None }]
explicit ECNamedDomainParameters(Org::BouncyCastle::Asn1::DerObjectIdentifier name, Org::BouncyCastle::Asn1::X9::X9ECParameters x9) ;

/// @brief Method .ctor addr 0xea5d04 size 0x28 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::DerObjectIdentifier name, Org::BouncyCastle::Asn1::X9::X9ECParameters x9) ;

// Ctor Parameters [CppParam { name: "name", ty: "Org::BouncyCastle::Asn1::DerObjectIdentifier", modifiers: "", def_value: None }, CppParam { name: "curve", ty: "Org::BouncyCastle::Math::EC::ECCurve", modifiers: "", def_value: None }, CppParam { name: "g", ty: "Org::BouncyCastle::Math::EC::ECPoint", modifiers: "", def_value: None }, CppParam { name: "n", ty: "Org::BouncyCastle::Math::BigInteger", modifiers: "", def_value: None }]
explicit ECNamedDomainParameters(Org::BouncyCastle::Asn1::DerObjectIdentifier name, Org::BouncyCastle::Math::EC::ECCurve curve, Org::BouncyCastle::Math::EC::ECPoint g, Org::BouncyCastle::Math::BigInteger n) ;

/// @brief Method .ctor addr 0xea5d2c size 0x30 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::DerObjectIdentifier name, Org::BouncyCastle::Math::EC::ECCurve curve, Org::BouncyCastle::Math::EC::ECPoint g, Org::BouncyCastle::Math::BigInteger n) ;

// Ctor Parameters [CppParam { name: "name", ty: "Org::BouncyCastle::Asn1::DerObjectIdentifier", modifiers: "", def_value: None }, CppParam { name: "curve", ty: "Org::BouncyCastle::Math::EC::ECCurve", modifiers: "", def_value: None }, CppParam { name: "g", ty: "Org::BouncyCastle::Math::EC::ECPoint", modifiers: "", def_value: None }, CppParam { name: "n", ty: "Org::BouncyCastle::Math::BigInteger", modifiers: "", def_value: None }, CppParam { name: "h", ty: "Org::BouncyCastle::Math::BigInteger", modifiers: "", def_value: None }]
explicit ECNamedDomainParameters(Org::BouncyCastle::Asn1::DerObjectIdentifier name, Org::BouncyCastle::Math::EC::ECCurve curve, Org::BouncyCastle::Math::EC::ECPoint g, Org::BouncyCastle::Math::BigInteger n, Org::BouncyCastle::Math::BigInteger h) ;

/// @brief Method .ctor addr 0xea5d5c size 0x38 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::DerObjectIdentifier name, Org::BouncyCastle::Math::EC::ECCurve curve, Org::BouncyCastle::Math::EC::ECPoint g, Org::BouncyCastle::Math::BigInteger n, Org::BouncyCastle::Math::BigInteger h) ;

// Ctor Parameters [CppParam { name: "name", ty: "Org::BouncyCastle::Asn1::DerObjectIdentifier", modifiers: "", def_value: None }, CppParam { name: "curve", ty: "Org::BouncyCastle::Math::EC::ECCurve", modifiers: "", def_value: None }, CppParam { name: "g", ty: "Org::BouncyCastle::Math::EC::ECPoint", modifiers: "", def_value: None }, CppParam { name: "n", ty: "Org::BouncyCastle::Math::BigInteger", modifiers: "", def_value: None }, CppParam { name: "h", ty: "Org::BouncyCastle::Math::BigInteger", modifiers: "", def_value: None }, CppParam { name: "seed", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
explicit ECNamedDomainParameters(Org::BouncyCastle::Asn1::DerObjectIdentifier name, Org::BouncyCastle::Math::EC::ECCurve curve, Org::BouncyCastle::Math::EC::ECPoint g, Org::BouncyCastle::Math::BigInteger n, Org::BouncyCastle::Math::BigInteger h, ::ArrayW<uint8_t> seed) ;

/// @brief Method .ctor addr 0xea5ccc size 0x38 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::DerObjectIdentifier name, Org::BouncyCastle::Math::EC::ECCurve curve, Org::BouncyCastle::Math::EC::ECPoint g, Org::BouncyCastle::Math::BigInteger n, Org::BouncyCastle::Math::BigInteger h, ::ArrayW<uint8_t> seed) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Parameters
NEED_NO_BOX(Org::BouncyCastle::Crypto::Parameters::ECNamedDomainParameters);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Parameters::ECNamedDomainParameters, "Org.BouncyCastle.Crypto.Parameters", "ECNamedDomainParameters");
