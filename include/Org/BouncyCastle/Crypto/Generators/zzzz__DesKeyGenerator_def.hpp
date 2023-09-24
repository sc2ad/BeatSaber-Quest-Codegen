#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__CipherKeyGenerator_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Crypto {
class KeyGenerationParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Generators {
class DesKeyGenerator;
}
// Type: Org.BouncyCastle.Crypto.Generators::DesKeyGenerator
namespace Org::BouncyCastle::Crypto::Generators {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(888))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(889))
// CS Name: Org.BouncyCastle.Crypto.Generators.DesKeyGenerator
class CORDL_TYPE DesKeyGenerator : public Org::BouncyCastle::Crypto::CipherKeyGenerator {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~DesKeyGenerator() = default;

// Ctor Parameters [CppParam { name: "", ty: "DesKeyGenerator", modifiers: " const&", def_value: None }]
constexpr DesKeyGenerator(DesKeyGenerator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DesKeyGenerator", modifiers: "&&", def_value: None }]
constexpr DesKeyGenerator(DesKeyGenerator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DesKeyGenerator(void* ptr) noexcept : Org::BouncyCastle::Crypto::CipherKeyGenerator(ptr) {
}


  constexpr DesKeyGenerator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DesKeyGenerator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DesKeyGenerator& operator=(DesKeyGenerator&& o) noexcept = default;
  constexpr DesKeyGenerator& operator=(DesKeyGenerator const& o) noexcept = default;
                


// Methods

static Org::BouncyCastle::Crypto::Generators::DesKeyGenerator New_ctor() ;

/// @brief Method .ctor addr 0xe6ac44 size 0x10 virtual false final false
 void _ctor() ;

static Org::BouncyCastle::Crypto::Generators::DesKeyGenerator New_ctor(int32_t defaultStrength) ;

/// @brief Method .ctor addr 0xe6ac54 size 0x4 virtual false final false
 void _ctor(int32_t defaultStrength) ;

/// @brief Method engineInit addr 0xe6ac58 size 0xfc virtual true final false
 void engineInit(Org::BouncyCastle::Crypto::KeyGenerationParameters parameters) ;

/// @brief Method engineGenerateKey addr 0xe6ad54 size 0xb4 virtual true final false
 ::ArrayW<uint8_t> engineGenerateKey() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Generators
NEED_NO_BOX(Org::BouncyCastle::Crypto::Generators::DesKeyGenerator);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Generators::DesKeyGenerator, "Org.BouncyCastle.Crypto.Generators", "DesKeyGenerator");
