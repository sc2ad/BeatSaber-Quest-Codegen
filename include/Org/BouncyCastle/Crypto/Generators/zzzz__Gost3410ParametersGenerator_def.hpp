#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace {
namespace Org::BouncyCastle::Crypto::Parameters {
class Gost3410Parameters;
}
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Generators {
class Gost3410ParametersGenerator;
}
// Type: Org.BouncyCastle.Crypto.Generators::Gost3410ParametersGenerator
namespace Org::BouncyCastle::Crypto::Generators {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(905))
// CS Name: Org.BouncyCastle.Crypto.Generators.Gost3410ParametersGenerator
class CORDL_TYPE Gost3410ParametersGenerator : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~Gost3410ParametersGenerator() = default;

// Ctor Parameters [CppParam { name: "", ty: "Gost3410ParametersGenerator", modifiers: " const&", def_value: None }]
constexpr Gost3410ParametersGenerator(Gost3410ParametersGenerator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Gost3410ParametersGenerator", modifiers: "&&", def_value: None }]
constexpr Gost3410ParametersGenerator(Gost3410ParametersGenerator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Gost3410ParametersGenerator(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Gost3410ParametersGenerator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Gost3410ParametersGenerator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Gost3410ParametersGenerator& operator=(Gost3410ParametersGenerator&& o) noexcept = default;
  constexpr Gost3410ParametersGenerator& operator=(Gost3410ParametersGenerator const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get_size, put=__set_size))  size;

constexpr void __set_size(int32_t value) ;

constexpr int32_t __get_size() const;

 int32_t __declspec(property(get=__get_typeproc, put=__set_typeproc))  typeproc;

constexpr void __set_typeproc(int32_t value) ;

constexpr int32_t __get_typeproc() const;

 ::Org::BouncyCastle::Security::SecureRandom __declspec(property(get=__get_init_random, put=__set_init_random))  init_random;

constexpr void __set_init_random(::Org::BouncyCastle::Security::SecureRandom value) ;

constexpr ::Org::BouncyCastle::Security::SecureRandom __get_init_random() const;


// Methods

/// @brief Method Init addr 0xe6e8a8 size 0xc virtual false final false
 void Init(int32_t size, int32_t typeProcedure, ::Org::BouncyCastle::Security::SecureRandom random) ;

/// @brief Method procedure_A addr 0xe6e8b4 size 0x8f8 virtual false final false
 int32_t procedure_A(int32_t x0, int32_t c, ::ArrayW<::Org::BouncyCastle::Math::BigInteger> pq, int32_t size) ;

/// @brief Method procedure_Aa addr 0xe6f1ac size 0x8d0 virtual false final false
 int64_t procedure_Aa(int64_t x0, int64_t c, ::ArrayW<::Org::BouncyCastle::Math::BigInteger> pq, int32_t size) ;

/// @brief Method procedure_B addr 0xe6fa7c size 0x5d4 virtual false final false
 void procedure_B(int32_t x0, int32_t c, ::ArrayW<::Org::BouncyCastle::Math::BigInteger> pq) ;

/// @brief Method procedure_Bb addr 0xe70050 size 0x5ac virtual false final false
 void procedure_Bb(int64_t x0, int64_t c, ::ArrayW<::Org::BouncyCastle::Math::BigInteger> pq) ;

/// @brief Method procedure_C addr 0xe705fc size 0x1a0 virtual false final false
 ::Org::BouncyCastle::Math::BigInteger procedure_C(::Org::BouncyCastle::Math::BigInteger p, ::Org::BouncyCastle::Math::BigInteger q) ;

/// @brief Method GenerateParameters addr 0xe7079c size 0x2fc virtual false final false
 ::Org::BouncyCastle::Crypto::Parameters::Gost3410Parameters GenerateParameters() ;

// Ctor Parameters []
explicit Gost3410ParametersGenerator() ;

/// @brief Method .ctor addr 0xe70a98 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Generators
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Generators::Gost3410ParametersGenerator);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Generators::Gost3410ParametersGenerator, "Org.BouncyCastle.Crypto.Generators", "Gost3410ParametersGenerator");
