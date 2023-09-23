#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class ElGamalParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Generators {
class ElGamalParametersGenerator;
}
// Type: Org.BouncyCastle.Crypto.Generators::ElGamalParametersGenerator
namespace Org::BouncyCastle::Crypto::Generators {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(903))
// CS Name: Org.BouncyCastle.Crypto.Generators.ElGamalParametersGenerator
class CORDL_TYPE ElGamalParametersGenerator : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~ElGamalParametersGenerator() = default;

// Ctor Parameters [CppParam { name: "", ty: "ElGamalParametersGenerator", modifiers: " const&", def_value: None }]
constexpr ElGamalParametersGenerator(ElGamalParametersGenerator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ElGamalParametersGenerator", modifiers: "&&", def_value: None }]
constexpr ElGamalParametersGenerator(ElGamalParametersGenerator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ElGamalParametersGenerator(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ElGamalParametersGenerator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ElGamalParametersGenerator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ElGamalParametersGenerator& operator=(ElGamalParametersGenerator&& o) noexcept = default;
  constexpr ElGamalParametersGenerator& operator=(ElGamalParametersGenerator const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get_size, put=__set_size))  size;

constexpr void __set_size(int32_t value) ;

constexpr int32_t __get_size() const;

 int32_t __declspec(property(get=__get_certainty, put=__set_certainty))  certainty;

constexpr void __set_certainty(int32_t value) ;

constexpr int32_t __get_certainty() const;

 Org::BouncyCastle::Security::SecureRandom __declspec(property(get=__get_random, put=__set_random))  random;

constexpr void __set_random(Org::BouncyCastle::Security::SecureRandom value) ;

constexpr Org::BouncyCastle::Security::SecureRandom __get_random() const;


// Methods

/// @brief Method Init addr 0xe6e46c size 0xc virtual false final false
 void Init(int32_t size, int32_t certainty, Org::BouncyCastle::Security::SecureRandom random) ;

/// @brief Method GenerateParameters addr 0xe6e478 size 0xdc virtual false final false
 Org::BouncyCastle::Crypto::Parameters::ElGamalParameters GenerateParameters() ;

// Ctor Parameters []
explicit ElGamalParametersGenerator() ;

/// @brief Method .ctor addr 0xe6e554 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Generators
NEED_NO_BOX(Org::BouncyCastle::Crypto::Generators::ElGamalParametersGenerator);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Generators::ElGamalParametersGenerator, "Org.BouncyCastle.Crypto.Generators", "ElGamalParametersGenerator");
