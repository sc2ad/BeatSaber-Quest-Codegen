#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Crypto/Generators/zzzz__BaseKdfBytesGenerator_def.hpp"
namespace Org::BouncyCastle::Crypto {
class IDigest;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Generators {
class Kdf1BytesGenerator;
}
// Type: Org.BouncyCastle.Crypto.Generators::Kdf1BytesGenerator
namespace Org::BouncyCastle::Crypto::Generators {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(886))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(907))
// CS Name: Org.BouncyCastle.Crypto.Generators.Kdf1BytesGenerator
class CORDL_TYPE Kdf1BytesGenerator : public Org::BouncyCastle::Crypto::Generators::BaseKdfBytesGenerator {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~Kdf1BytesGenerator() = default;

// Ctor Parameters [CppParam { name: "", ty: "Kdf1BytesGenerator", modifiers: " const&", def_value: None }]
constexpr Kdf1BytesGenerator(Kdf1BytesGenerator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Kdf1BytesGenerator", modifiers: "&&", def_value: None }]
constexpr Kdf1BytesGenerator(Kdf1BytesGenerator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Kdf1BytesGenerator(void* ptr) noexcept : Org::BouncyCastle::Crypto::Generators::BaseKdfBytesGenerator(ptr) {
}


  constexpr Kdf1BytesGenerator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Kdf1BytesGenerator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Kdf1BytesGenerator& operator=(Kdf1BytesGenerator&& o) noexcept = default;
  constexpr Kdf1BytesGenerator& operator=(Kdf1BytesGenerator const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "digest", ty: "Org::BouncyCastle::Crypto::IDigest", modifiers: "", def_value: None }]
explicit Kdf1BytesGenerator(Org::BouncyCastle::Crypto::IDigest digest) ;

/// @brief Method .ctor addr 0xe711bc size 0x2c virtual false final false
 void _ctor(Org::BouncyCastle::Crypto::IDigest digest) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Generators
NEED_NO_BOX(Org::BouncyCastle::Crypto::Generators::Kdf1BytesGenerator);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Generators::Kdf1BytesGenerator, "Org.BouncyCastle.Crypto.Generators", "Kdf1BytesGenerator");
