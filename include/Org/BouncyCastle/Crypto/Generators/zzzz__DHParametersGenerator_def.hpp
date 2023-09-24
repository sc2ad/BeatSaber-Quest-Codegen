#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class DHParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Generators {
class DHParametersGenerator;
}
// Type: Org.BouncyCastle.Crypto.Generators::DHParametersGenerator
namespace Org::BouncyCastle::Crypto::Generators {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(895))
// CS Name: Org.BouncyCastle.Crypto.Generators.DHParametersGenerator
class CORDL_TYPE DHParametersGenerator : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~DHParametersGenerator() = default;

// Ctor Parameters [CppParam { name: "", ty: "DHParametersGenerator", modifiers: " const&", def_value: None }]
constexpr DHParametersGenerator(DHParametersGenerator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DHParametersGenerator", modifiers: "&&", def_value: None }]
constexpr DHParametersGenerator(DHParametersGenerator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DHParametersGenerator(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr DHParametersGenerator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DHParametersGenerator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DHParametersGenerator& operator=(DHParametersGenerator&& o) noexcept = default;
  constexpr DHParametersGenerator& operator=(DHParametersGenerator const& o) noexcept = default;
                


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

/// @brief Method Init addr 0xe6b754 size 0xc virtual true final false
 void Init(int32_t size, int32_t certainty, Org::BouncyCastle::Security::SecureRandom random) ;

/// @brief Method GenerateParameters addr 0xe6b760 size 0x118 virtual true final false
 Org::BouncyCastle::Crypto::Parameters::DHParameters GenerateParameters() ;

static Org::BouncyCastle::Crypto::Generators::DHParametersGenerator New_ctor() ;

/// @brief Method .ctor addr 0xe6be44 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Generators
NEED_NO_BOX(Org::BouncyCastle::Crypto::Generators::DHParametersGenerator);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Generators::DHParametersGenerator, "Org.BouncyCastle.Crypto.Generators", "DHParametersGenerator");
