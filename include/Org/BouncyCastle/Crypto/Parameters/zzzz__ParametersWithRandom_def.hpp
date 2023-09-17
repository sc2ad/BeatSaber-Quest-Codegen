#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Parameters {
class ParametersWithRandom;
}
// Type: Org.BouncyCastle.Crypto.Parameters::ParametersWithRandom
namespace Org::BouncyCastle::Crypto::Parameters {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1073))
// CS Name: Org.BouncyCastle.Crypto.Parameters.ParametersWithRandom
class CORDL_TYPE ParametersWithRandom : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::Org::BouncyCastle::Crypto::ICipherParameters
constexpr operator  ::Org::BouncyCastle::Crypto::ICipherParameters() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~ParametersWithRandom() = default;

// Ctor Parameters [CppParam { name: "", ty: "ParametersWithRandom", modifiers: " const&", def_value: None }]
constexpr ParametersWithRandom(ParametersWithRandom const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ParametersWithRandom", modifiers: "&&", def_value: None }]
constexpr ParametersWithRandom(ParametersWithRandom&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ParametersWithRandom(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ParametersWithRandom& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ParametersWithRandom& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ParametersWithRandom& operator=(ParametersWithRandom&& o) noexcept = default;
  constexpr ParametersWithRandom& operator=(ParametersWithRandom const& o) noexcept = default;
                


// Fields

 ::Org::BouncyCastle::Crypto::ICipherParameters __declspec(property(get=__get_parameters, put=__set_parameters))  parameters;

constexpr void __set_parameters(::Org::BouncyCastle::Crypto::ICipherParameters value) ;

constexpr ::Org::BouncyCastle::Crypto::ICipherParameters __get_parameters() const;

 ::Org::BouncyCastle::Security::SecureRandom __declspec(property(get=__get_random, put=__set_random))  random;

constexpr void __set_random(::Org::BouncyCastle::Security::SecureRandom value) ;

constexpr ::Org::BouncyCastle::Security::SecureRandom __get_random() const;


// Properties

 ::Org::BouncyCastle::Security::SecureRandom __declspec(property(get=get_Random))  Random;

 ::Org::BouncyCastle::Crypto::ICipherParameters __declspec(property(get=get_Parameters))  Parameters;


// Methods

// Ctor Parameters [CppParam { name: "parameters", ty: "::Org::BouncyCastle::Crypto::ICipherParameters", modifiers: "", def_value: None }, CppParam { name: "random", ty: "::Org::BouncyCastle::Security::SecureRandom", modifiers: "", def_value: None }]
explicit ParametersWithRandom(::Org::BouncyCastle::Crypto::ICipherParameters parameters, ::Org::BouncyCastle::Security::SecureRandom random) ;

/// @brief Method .ctor addr 0xeaafc8 size 0xa4 virtual false final false
 void _ctor(::Org::BouncyCastle::Crypto::ICipherParameters parameters, ::Org::BouncyCastle::Security::SecureRandom random) ;

// Ctor Parameters [CppParam { name: "parameters", ty: "::Org::BouncyCastle::Crypto::ICipherParameters", modifiers: "", def_value: None }]
explicit ParametersWithRandom(::Org::BouncyCastle::Crypto::ICipherParameters parameters) ;

/// @brief Method .ctor addr 0xeab06c size 0x70 virtual false final false
 void _ctor(::Org::BouncyCastle::Crypto::ICipherParameters parameters) ;

/// @brief Method GetRandom addr 0xeab154 size 0x8 virtual false final false
 ::Org::BouncyCastle::Security::SecureRandom GetRandom() ;

/// @brief Method get_Random addr 0xeab15c size 0x8 virtual false final false
 ::Org::BouncyCastle::Security::SecureRandom get_Random() ;

/// @brief Method get_Parameters addr 0xeab164 size 0x8 virtual false final false
 ::Org::BouncyCastle::Crypto::ICipherParameters get_Parameters() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Parameters
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Parameters::ParametersWithRandom);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Parameters::ParametersWithRandom, "Org.BouncyCastle.Crypto.Parameters", "ParametersWithRandom");
