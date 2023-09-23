#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__AsymmetricKeyParameter_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Crypto::Parameters {
class ElGamalParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Parameters {
class ElGamalKeyParameters;
}
// Type: Org.BouncyCastle.Crypto.Parameters::ElGamalKeyParameters
namespace Org::BouncyCastle::Crypto::Parameters {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1020))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1047))
// CS Name: Org.BouncyCastle.Crypto.Parameters.ElGamalKeyParameters
class CORDL_TYPE ElGamalKeyParameters : public Org::BouncyCastle::Crypto::AsymmetricKeyParameter {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~ElGamalKeyParameters() = default;

// Ctor Parameters [CppParam { name: "", ty: "ElGamalKeyParameters", modifiers: " const&", def_value: None }]
constexpr ElGamalKeyParameters(ElGamalKeyParameters const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ElGamalKeyParameters", modifiers: "&&", def_value: None }]
constexpr ElGamalKeyParameters(ElGamalKeyParameters&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ElGamalKeyParameters(void* ptr) noexcept : Org::BouncyCastle::Crypto::AsymmetricKeyParameter(ptr) {
}


  constexpr ElGamalKeyParameters& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ElGamalKeyParameters& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ElGamalKeyParameters& operator=(ElGamalKeyParameters&& o) noexcept = default;
  constexpr ElGamalKeyParameters& operator=(ElGamalKeyParameters const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Crypto::Parameters::ElGamalParameters __declspec(property(get=__get_parameters, put=__set_parameters))  parameters;

constexpr void __set_parameters(Org::BouncyCastle::Crypto::Parameters::ElGamalParameters value) ;

constexpr Org::BouncyCastle::Crypto::Parameters::ElGamalParameters __get_parameters() const;


// Properties

 Org::BouncyCastle::Crypto::Parameters::ElGamalParameters __declspec(property(get=get_Parameters))  Parameters;


// Methods

// Ctor Parameters [CppParam { name: "isPrivate", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "parameters", ty: "Org::BouncyCastle::Crypto::Parameters::ElGamalParameters", modifiers: "", def_value: None }]
explicit ElGamalKeyParameters(bool isPrivate, Org::BouncyCastle::Crypto::Parameters::ElGamalParameters parameters) ;

/// @brief Method .ctor addr 0xea8510 size 0x30 virtual false final false
 void _ctor(bool isPrivate, Org::BouncyCastle::Crypto::Parameters::ElGamalParameters parameters) ;

/// @brief Method get_Parameters addr 0xea8540 size 0x8 virtual false final false
 Org::BouncyCastle::Crypto::Parameters::ElGamalParameters get_Parameters() ;

/// @brief Method Equals addr 0xea8548 size 0x9c virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method Equals addr 0xea85e4 size 0x50 virtual false final false
 bool Equals(Org::BouncyCastle::Crypto::Parameters::ElGamalKeyParameters other) ;

/// @brief Method GetHashCode addr 0xea8634 size 0x50 virtual true final false
 int32_t GetHashCode() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Parameters
NEED_NO_BOX(Org::BouncyCastle::Crypto::Parameters::ElGamalKeyParameters);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Parameters::ElGamalKeyParameters, "Org.BouncyCastle.Crypto.Parameters", "ElGamalKeyParameters");
