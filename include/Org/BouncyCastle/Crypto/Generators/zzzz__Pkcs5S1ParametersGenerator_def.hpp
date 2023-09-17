#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__PbeParametersGenerator_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace Org::BouncyCastle::Crypto {
class IDigest;
}
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Generators {
class Pkcs5S1ParametersGenerator;
}
// Type: Org.BouncyCastle.Crypto.Generators::Pkcs5S1ParametersGenerator
namespace Org::BouncyCastle::Crypto::Generators {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(916))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(919))
// CS Name: Org.BouncyCastle.Crypto.Generators.Pkcs5S1ParametersGenerator
class CORDL_TYPE Pkcs5S1ParametersGenerator : public ::Org::BouncyCastle::Crypto::PbeParametersGenerator {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~Pkcs5S1ParametersGenerator() = default;

// Ctor Parameters [CppParam { name: "", ty: "Pkcs5S1ParametersGenerator", modifiers: " const&", def_value: None }]
constexpr Pkcs5S1ParametersGenerator(Pkcs5S1ParametersGenerator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Pkcs5S1ParametersGenerator", modifiers: "&&", def_value: None }]
constexpr Pkcs5S1ParametersGenerator(Pkcs5S1ParametersGenerator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Pkcs5S1ParametersGenerator(void* ptr) noexcept : ::Org::BouncyCastle::Crypto::PbeParametersGenerator(ptr) {
}


  constexpr Pkcs5S1ParametersGenerator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Pkcs5S1ParametersGenerator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Pkcs5S1ParametersGenerator& operator=(Pkcs5S1ParametersGenerator&& o) noexcept = default;
  constexpr Pkcs5S1ParametersGenerator& operator=(Pkcs5S1ParametersGenerator const& o) noexcept = default;
                


// Fields

 ::Org::BouncyCastle::Crypto::IDigest __declspec(property(get=__get_digest, put=__set_digest))  digest;

constexpr void __set_digest(::Org::BouncyCastle::Crypto::IDigest value) ;

constexpr ::Org::BouncyCastle::Crypto::IDigest __get_digest() const;


// Methods

// Ctor Parameters [CppParam { name: "digest", ty: "::Org::BouncyCastle::Crypto::IDigest", modifiers: "", def_value: None }]
explicit Pkcs5S1ParametersGenerator(::Org::BouncyCastle::Crypto::IDigest digest) ;

/// @brief Method .ctor addr 0xe77e98 size 0x28 virtual false final false
 void _ctor(::Org::BouncyCastle::Crypto::IDigest digest) ;

/// @brief Method GenerateDerivedKey addr 0xe77ec0 size 0x34c virtual false final false
 ::ArrayW<uint8_t> GenerateDerivedKey() ;

/// @brief Method GenerateDerivedParameters addr 0xe7820c size 0xc virtual true final false
 ::Org::BouncyCastle::Crypto::ICipherParameters GenerateDerivedParameters(int32_t keySize) ;

/// @brief Method GenerateDerivedParameters addr 0xe78218 size 0x1a8 virtual true final false
 ::Org::BouncyCastle::Crypto::ICipherParameters GenerateDerivedParameters(::StringW algorithm, int32_t keySize) ;

/// @brief Method GenerateDerivedParameters addr 0xe783c0 size 0x204 virtual true final false
 ::Org::BouncyCastle::Crypto::ICipherParameters GenerateDerivedParameters(int32_t keySize, int32_t ivSize) ;

/// @brief Method GenerateDerivedParameters addr 0xe785c4 size 0x214 virtual true final false
 ::Org::BouncyCastle::Crypto::ICipherParameters GenerateDerivedParameters(::StringW algorithm, int32_t keySize, int32_t ivSize) ;

/// @brief Method GenerateDerivedMacParameters addr 0xe787d8 size 0x1a8 virtual true final false
 ::Org::BouncyCastle::Crypto::ICipherParameters GenerateDerivedMacParameters(int32_t keySize) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Generators
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Generators::Pkcs5S1ParametersGenerator);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Generators::Pkcs5S1ParametersGenerator, "Org.BouncyCastle.Crypto.Generators", "Pkcs5S1ParametersGenerator");
