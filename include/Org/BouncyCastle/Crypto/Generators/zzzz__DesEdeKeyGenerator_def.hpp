#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Crypto/Generators/zzzz__DesKeyGenerator_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace {
namespace Org::BouncyCastle::Crypto {
class KeyGenerationParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Generators {
class DesEdeKeyGenerator;
}
// Type: Org.BouncyCastle.Crypto.Generators::DesEdeKeyGenerator
namespace Org::BouncyCastle::Crypto::Generators {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(889))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(890))
// CS Name: Org.BouncyCastle.Crypto.Generators.DesEdeKeyGenerator
class CORDL_TYPE DesEdeKeyGenerator : public ::Org::BouncyCastle::Crypto::Generators::DesKeyGenerator {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~DesEdeKeyGenerator() = default;

// Ctor Parameters [CppParam { name: "", ty: "DesEdeKeyGenerator", modifiers: " const&", def_value: None }]
constexpr DesEdeKeyGenerator(DesEdeKeyGenerator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DesEdeKeyGenerator", modifiers: "&&", def_value: None }]
constexpr DesEdeKeyGenerator(DesEdeKeyGenerator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DesEdeKeyGenerator(void* ptr) noexcept : ::Org::BouncyCastle::Crypto::Generators::DesKeyGenerator(ptr) {
}


  constexpr DesEdeKeyGenerator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DesEdeKeyGenerator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DesEdeKeyGenerator& operator=(DesEdeKeyGenerator&& o) noexcept = default;
  constexpr DesEdeKeyGenerator& operator=(DesEdeKeyGenerator const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit DesEdeKeyGenerator() ;

/// @brief Method .ctor addr 0xe6ae08 size 0x10 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "defaultStrength", ty: "int32_t", modifiers: "", def_value: None }]
explicit DesEdeKeyGenerator(int32_t defaultStrength) ;

/// @brief Method .ctor addr 0xe6ae18 size 0x4 virtual false final false
 void _ctor(int32_t defaultStrength) ;

/// @brief Method engineInit addr 0xe6ae1c size 0x230 virtual true final false
 void engineInit(::Org::BouncyCastle::Crypto::KeyGenerationParameters parameters) ;

/// @brief Method engineGenerateKey addr 0xe6b04c size 0xdc virtual true final false
 ::ArrayW<uint8_t> engineGenerateKey() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Generators
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Generators::DesEdeKeyGenerator);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Generators::DesEdeKeyGenerator, "Org.BouncyCastle.Crypto.Generators", "DesEdeKeyGenerator");
