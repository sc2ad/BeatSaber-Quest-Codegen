#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class DHParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Generators {
class DHKeyGeneratorHelper;
}
// Type: Org.BouncyCastle.Crypto.Generators::DHKeyGeneratorHelper
namespace Org::BouncyCastle::Crypto::Generators {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(893))
// CS Name: Org.BouncyCastle.Crypto.Generators.DHKeyGeneratorHelper
class CORDL_TYPE DHKeyGeneratorHelper : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~DHKeyGeneratorHelper() = default;

// Ctor Parameters [CppParam { name: "", ty: "DHKeyGeneratorHelper", modifiers: " const&", def_value: None }]
constexpr DHKeyGeneratorHelper(DHKeyGeneratorHelper const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DHKeyGeneratorHelper", modifiers: "&&", def_value: None }]
constexpr DHKeyGeneratorHelper(DHKeyGeneratorHelper&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DHKeyGeneratorHelper(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr DHKeyGeneratorHelper& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DHKeyGeneratorHelper& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DHKeyGeneratorHelper& operator=(DHKeyGeneratorHelper&& o) noexcept = default;
  constexpr DHKeyGeneratorHelper& operator=(DHKeyGeneratorHelper const& o) noexcept = default;
                


// Fields

static ::Org::BouncyCastle::Crypto::Generators::DHKeyGeneratorHelper __declspec(property(get=__get_Instance, put=__set_Instance))  Instance;

static void __set_Instance(::Org::BouncyCastle::Crypto::Generators::DHKeyGeneratorHelper value) ;

static ::Org::BouncyCastle::Crypto::Generators::DHKeyGeneratorHelper __get_Instance() ;


// Methods

// Ctor Parameters []
explicit DHKeyGeneratorHelper() ;

/// @brief Method .ctor addr 0xe6b500 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method CalculatePrivate addr 0xe6b308 size 0x1c4 virtual false final false
 ::Org::BouncyCastle::Math::BigInteger CalculatePrivate(::Org::BouncyCastle::Crypto::Parameters::DHParameters dhParams, ::Org::BouncyCastle::Security::SecureRandom random) ;

/// @brief Method CalculatePublic addr 0xe6b4cc size 0x2c virtual false final false
 ::Org::BouncyCastle::Math::BigInteger CalculatePublic(::Org::BouncyCastle::Crypto::Parameters::DHParameters dhParams, ::Org::BouncyCastle::Math::BigInteger x) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Generators
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Generators::DHKeyGeneratorHelper);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Generators::DHKeyGeneratorHelper, "Org.BouncyCastle.Crypto.Generators", "DHKeyGeneratorHelper");
