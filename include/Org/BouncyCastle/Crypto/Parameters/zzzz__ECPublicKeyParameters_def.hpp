#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__ECKeyParameters_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class ECDomainParameters;
}
namespace Org::BouncyCastle::Math::EC {
class ECPoint;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Parameters {
class ECPublicKeyParameters;
}
// Type: Org.BouncyCastle.Crypto.Parameters::ECPublicKeyParameters
namespace Org::BouncyCastle::Crypto::Parameters {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1037))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1039))
// CS Name: Org.BouncyCastle.Crypto.Parameters.ECPublicKeyParameters
class CORDL_TYPE ECPublicKeyParameters : public Org::BouncyCastle::Crypto::Parameters::ECKeyParameters {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~ECPublicKeyParameters() = default;

// Ctor Parameters [CppParam { name: "", ty: "ECPublicKeyParameters", modifiers: " const&", def_value: None }]
constexpr ECPublicKeyParameters(ECPublicKeyParameters const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ECPublicKeyParameters", modifiers: "&&", def_value: None }]
constexpr ECPublicKeyParameters(ECPublicKeyParameters&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ECPublicKeyParameters(void* ptr) noexcept : Org::BouncyCastle::Crypto::Parameters::ECKeyParameters(ptr) {
}


  constexpr ECPublicKeyParameters& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ECPublicKeyParameters& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ECPublicKeyParameters& operator=(ECPublicKeyParameters&& o) noexcept = default;
  constexpr ECPublicKeyParameters& operator=(ECPublicKeyParameters const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Math::EC::ECPoint __declspec(property(get=__get_q, put=__set_q))  q;

constexpr void __set_q(Org::BouncyCastle::Math::EC::ECPoint value) ;

constexpr Org::BouncyCastle::Math::EC::ECPoint __get_q() const;


// Properties

 Org::BouncyCastle::Math::EC::ECPoint __declspec(property(get=get_Q))  Q;


// Methods

// Ctor Parameters [CppParam { name: "q", ty: "Org::BouncyCastle::Math::EC::ECPoint", modifiers: "", def_value: None }, CppParam { name: "parameters", ty: "Org::BouncyCastle::Crypto::Parameters::ECDomainParameters", modifiers: "", def_value: None }]
explicit ECPublicKeyParameters(Org::BouncyCastle::Math::EC::ECPoint q, Org::BouncyCastle::Crypto::Parameters::ECDomainParameters parameters) ;

/// @brief Method .ctor addr 0xea6b18 size 0x60 virtual false final false
 void _ctor(Org::BouncyCastle::Math::EC::ECPoint q, Org::BouncyCastle::Crypto::Parameters::ECDomainParameters parameters) ;

// Ctor Parameters [CppParam { name: "q", ty: "Org::BouncyCastle::Math::EC::ECPoint", modifiers: "", def_value: None }, CppParam { name: "publicKeyParamSet", ty: "Org::BouncyCastle::Asn1::DerObjectIdentifier", modifiers: "", def_value: None }]
explicit ECPublicKeyParameters(Org::BouncyCastle::Math::EC::ECPoint q, Org::BouncyCastle::Asn1::DerObjectIdentifier publicKeyParamSet) ;

/// @brief Method .ctor addr 0xea6c14 size 0xa4 virtual false final false
 void _ctor(Org::BouncyCastle::Math::EC::ECPoint q, Org::BouncyCastle::Asn1::DerObjectIdentifier publicKeyParamSet) ;

// Ctor Parameters [CppParam { name: "algorithm", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "q", ty: "Org::BouncyCastle::Math::EC::ECPoint", modifiers: "", def_value: None }, CppParam { name: "parameters", ty: "Org::BouncyCastle::Crypto::Parameters::ECDomainParameters", modifiers: "", def_value: None }]
explicit ECPublicKeyParameters(::StringW algorithm, Org::BouncyCastle::Math::EC::ECPoint q, Org::BouncyCastle::Crypto::Parameters::ECDomainParameters parameters) ;

/// @brief Method .ctor addr 0xea6b78 size 0x9c virtual false final false
 void _ctor(::StringW algorithm, Org::BouncyCastle::Math::EC::ECPoint q, Org::BouncyCastle::Crypto::Parameters::ECDomainParameters parameters) ;

// Ctor Parameters [CppParam { name: "algorithm", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "q", ty: "Org::BouncyCastle::Math::EC::ECPoint", modifiers: "", def_value: None }, CppParam { name: "publicKeyParamSet", ty: "Org::BouncyCastle::Asn1::DerObjectIdentifier", modifiers: "", def_value: None }]
explicit ECPublicKeyParameters(::StringW algorithm, Org::BouncyCastle::Math::EC::ECPoint q, Org::BouncyCastle::Asn1::DerObjectIdentifier publicKeyParamSet) ;

/// @brief Method .ctor addr 0xea6cb8 size 0x9c virtual false final false
 void _ctor(::StringW algorithm, Org::BouncyCastle::Math::EC::ECPoint q, Org::BouncyCastle::Asn1::DerObjectIdentifier publicKeyParamSet) ;

/// @brief Method get_Q addr 0xea6d54 size 0x8 virtual false final false
 Org::BouncyCastle::Math::EC::ECPoint get_Q() ;

/// @brief Method Equals addr 0xea6d5c size 0x9c virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method Equals addr 0xea6df8 size 0x5c virtual false final false
 bool Equals(Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters other) ;

/// @brief Method GetHashCode addr 0xea6e54 size 0x40 virtual true final false
 int32_t GetHashCode() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Parameters
NEED_NO_BOX(Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters, "Org.BouncyCastle.Crypto.Parameters", "ECPublicKeyParameters");
