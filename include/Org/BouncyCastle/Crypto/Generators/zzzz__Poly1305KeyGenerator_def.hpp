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
class Poly1305KeyGenerator;
}
// Type: Org.BouncyCastle.Crypto.Generators::Poly1305KeyGenerator
namespace Org::BouncyCastle::Crypto::Generators {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(888))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(921))
// CS Name: Org.BouncyCastle.Crypto.Generators.Poly1305KeyGenerator
class CORDL_TYPE Poly1305KeyGenerator : public Org::BouncyCastle::Crypto::CipherKeyGenerator {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~Poly1305KeyGenerator() = default;

// Ctor Parameters [CppParam { name: "", ty: "Poly1305KeyGenerator", modifiers: " const&", def_value: None }]
constexpr Poly1305KeyGenerator(Poly1305KeyGenerator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Poly1305KeyGenerator", modifiers: "&&", def_value: None }]
constexpr Poly1305KeyGenerator(Poly1305KeyGenerator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Poly1305KeyGenerator(void* ptr) noexcept : Org::BouncyCastle::Crypto::CipherKeyGenerator(ptr) {
}


  constexpr Poly1305KeyGenerator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Poly1305KeyGenerator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Poly1305KeyGenerator& operator=(Poly1305KeyGenerator&& o) noexcept = default;
  constexpr Poly1305KeyGenerator& operator=(Poly1305KeyGenerator const& o) noexcept = default;
                


// Fields

/// @brief Field R_MASK_LOW_2 offset 0
static constexpr uint8_t  R_MASK_LOW_2{252u};

/// @brief Field R_MASK_HIGH_4 offset 0
static constexpr uint8_t  R_MASK_HIGH_4{15u};


// Methods

/// @brief Method engineInit addr 0xe7941c size 0x24 virtual true final false
 void engineInit(Org::BouncyCastle::Crypto::KeyGenerationParameters param) ;

/// @brief Method engineGenerateKey addr 0xe79440 size 0x1c virtual true final false
 ::ArrayW<uint8_t> engineGenerateKey() ;

/// @brief Method Clamp addr 0xe7945c size 0xc0 virtual false final false
static void Clamp(::ArrayW<uint8_t> key) ;

/// @brief Method CheckKey addr 0xe7951c size 0x10c virtual false final false
static void CheckKey(::ArrayW<uint8_t> key) ;

/// @brief Method CheckMask addr 0xe79628 size 0x60 virtual false final false
static void CheckMask(uint8_t b, uint8_t mask) ;

static Org::BouncyCastle::Crypto::Generators::Poly1305KeyGenerator New_ctor() ;

/// @brief Method .ctor addr 0xe79688 size 0x10 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Generators
NEED_NO_BOX(Org::BouncyCastle::Crypto::Generators::Poly1305KeyGenerator);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Generators::Poly1305KeyGenerator, "Org.BouncyCastle.Crypto.Generators", "Poly1305KeyGenerator");
