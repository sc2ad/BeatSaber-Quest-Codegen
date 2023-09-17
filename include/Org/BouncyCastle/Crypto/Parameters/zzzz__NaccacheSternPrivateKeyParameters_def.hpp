#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__NaccacheSternKeyParameters_def.hpp"
#include <cstdint>
namespace {
namespace System::Collections {
class ArrayList;
}
namespace System::Collections {
class IList;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Parameters {
class NaccacheSternPrivateKeyParameters;
}
// Type: Org.BouncyCastle.Crypto.Parameters::NaccacheSternPrivateKeyParameters
namespace Org::BouncyCastle::Crypto::Parameters {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1069))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1070))
// CS Name: Org.BouncyCastle.Crypto.Parameters.NaccacheSternPrivateKeyParameters
class CORDL_TYPE NaccacheSternPrivateKeyParameters : public ::Org::BouncyCastle::Crypto::Parameters::NaccacheSternKeyParameters {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~NaccacheSternPrivateKeyParameters() = default;

// Ctor Parameters [CppParam { name: "", ty: "NaccacheSternPrivateKeyParameters", modifiers: " const&", def_value: None }]
constexpr NaccacheSternPrivateKeyParameters(NaccacheSternPrivateKeyParameters const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "NaccacheSternPrivateKeyParameters", modifiers: "&&", def_value: None }]
constexpr NaccacheSternPrivateKeyParameters(NaccacheSternPrivateKeyParameters&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit NaccacheSternPrivateKeyParameters(void* ptr) noexcept : ::Org::BouncyCastle::Crypto::Parameters::NaccacheSternKeyParameters(ptr) {
}


  constexpr NaccacheSternPrivateKeyParameters& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr NaccacheSternPrivateKeyParameters& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr NaccacheSternPrivateKeyParameters& operator=(NaccacheSternPrivateKeyParameters&& o) noexcept = default;
  constexpr NaccacheSternPrivateKeyParameters& operator=(NaccacheSternPrivateKeyParameters const& o) noexcept = default;
                


// Fields

 ::Org::BouncyCastle::Math::BigInteger __declspec(property(get=__get_phiN, put=__set_phiN))  phiN;

constexpr void __set_phiN(::Org::BouncyCastle::Math::BigInteger value) ;

constexpr ::Org::BouncyCastle::Math::BigInteger __get_phiN() const;

 ::System::Collections::IList __declspec(property(get=__get_smallPrimes, put=__set_smallPrimes))  smallPrimes;

constexpr void __set_smallPrimes(::System::Collections::IList value) ;

constexpr ::System::Collections::IList __get_smallPrimes() const;


// Properties

 ::Org::BouncyCastle::Math::BigInteger __declspec(property(get=get_PhiN))  PhiN;

 ::System::Collections::ArrayList __declspec(property(get=get_SmallPrimes))  SmallPrimes;

 ::System::Collections::IList __declspec(property(get=get_SmallPrimesList))  SmallPrimesList;


// Methods

// Ctor Parameters [CppParam { name: "g", ty: "::Org::BouncyCastle::Math::BigInteger", modifiers: "", def_value: None }, CppParam { name: "n", ty: "::Org::BouncyCastle::Math::BigInteger", modifiers: "", def_value: None }, CppParam { name: "lowerSigmaBound", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "smallPrimes", ty: "::System::Collections::ArrayList", modifiers: "", def_value: None }, CppParam { name: "phiN", ty: "::Org::BouncyCastle::Math::BigInteger", modifiers: "", def_value: None }]
explicit NaccacheSternPrivateKeyParameters(::Org::BouncyCastle::Math::BigInteger g, ::Org::BouncyCastle::Math::BigInteger n, int32_t lowerSigmaBound, ::System::Collections::ArrayList smallPrimes, ::Org::BouncyCastle::Math::BigInteger phiN) ;

/// @brief Method .ctor addr 0xeaac60 size 0x54 virtual false final false
 void _ctor(::Org::BouncyCastle::Math::BigInteger g, ::Org::BouncyCastle::Math::BigInteger n, int32_t lowerSigmaBound, ::System::Collections::ArrayList smallPrimes, ::Org::BouncyCastle::Math::BigInteger phiN) ;

// Ctor Parameters [CppParam { name: "g", ty: "::Org::BouncyCastle::Math::BigInteger", modifiers: "", def_value: None }, CppParam { name: "n", ty: "::Org::BouncyCastle::Math::BigInteger", modifiers: "", def_value: None }, CppParam { name: "lowerSigmaBound", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "smallPrimes", ty: "::System::Collections::IList", modifiers: "", def_value: None }, CppParam { name: "phiN", ty: "::Org::BouncyCastle::Math::BigInteger", modifiers: "", def_value: None }]
explicit NaccacheSternPrivateKeyParameters(::Org::BouncyCastle::Math::BigInteger g, ::Org::BouncyCastle::Math::BigInteger n, int32_t lowerSigmaBound, ::System::Collections::IList smallPrimes, ::Org::BouncyCastle::Math::BigInteger phiN) ;

/// @brief Method .ctor addr 0xeaacb4 size 0x54 virtual false final false
 void _ctor(::Org::BouncyCastle::Math::BigInteger g, ::Org::BouncyCastle::Math::BigInteger n, int32_t lowerSigmaBound, ::System::Collections::IList smallPrimes, ::Org::BouncyCastle::Math::BigInteger phiN) ;

/// @brief Method get_PhiN addr 0xeaad08 size 0x8 virtual false final false
 ::Org::BouncyCastle::Math::BigInteger get_PhiN() ;

/// @brief Method get_SmallPrimes addr 0xeaad10 size 0x68 virtual false final false
 ::System::Collections::ArrayList get_SmallPrimes() ;

/// @brief Method get_SmallPrimesList addr 0xeaad78 size 0x8 virtual false final false
 ::System::Collections::IList get_SmallPrimesList() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Parameters
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Parameters::NaccacheSternPrivateKeyParameters);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Parameters::NaccacheSternPrivateKeyParameters, "Org.BouncyCastle.Crypto.Parameters", "NaccacheSternPrivateKeyParameters");
