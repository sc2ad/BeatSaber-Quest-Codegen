#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Crypto/Generators/zzzz__BaseKdfBytesGenerator_def.hpp"
namespace {
namespace Org::BouncyCastle::Crypto {
class IDigest;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Generators {
class Kdf2BytesGenerator;
}
// Type: Org.BouncyCastle.Crypto.Generators::Kdf2BytesGenerator
namespace Org::BouncyCastle::Crypto::Generators {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(886))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(908))
// CS Name: Org.BouncyCastle.Crypto.Generators.Kdf2BytesGenerator
class CORDL_TYPE Kdf2BytesGenerator : public ::Org::BouncyCastle::Crypto::Generators::BaseKdfBytesGenerator {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~Kdf2BytesGenerator() = default;

// Ctor Parameters [CppParam { name: "", ty: "Kdf2BytesGenerator", modifiers: " const&", def_value: None }]
constexpr Kdf2BytesGenerator(Kdf2BytesGenerator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Kdf2BytesGenerator", modifiers: "&&", def_value: None }]
constexpr Kdf2BytesGenerator(Kdf2BytesGenerator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Kdf2BytesGenerator(void* ptr) noexcept : ::Org::BouncyCastle::Crypto::Generators::BaseKdfBytesGenerator(ptr) {
}


  constexpr Kdf2BytesGenerator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Kdf2BytesGenerator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Kdf2BytesGenerator& operator=(Kdf2BytesGenerator&& o) noexcept = default;
  constexpr Kdf2BytesGenerator& operator=(Kdf2BytesGenerator const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "digest", ty: "::Org::BouncyCastle::Crypto::IDigest", modifiers: "", def_value: None }]
explicit Kdf2BytesGenerator(::Org::BouncyCastle::Crypto::IDigest digest) ;

/// @brief Method .ctor addr 0xe711e8 size 0x30 virtual false final false
 void _ctor(::Org::BouncyCastle::Crypto::IDigest digest) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Generators
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Generators::Kdf2BytesGenerator);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Generators::Kdf2BytesGenerator, "Org.BouncyCastle.Crypto.Generators", "Kdf2BytesGenerator");
