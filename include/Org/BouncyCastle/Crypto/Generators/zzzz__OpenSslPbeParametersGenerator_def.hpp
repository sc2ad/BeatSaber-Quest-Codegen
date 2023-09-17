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
class OpenSslPbeParametersGenerator;
}
// Type: Org.BouncyCastle.Crypto.Generators::OpenSslPbeParametersGenerator
namespace Org::BouncyCastle::Crypto::Generators {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(916))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(917))
// CS Name: Org.BouncyCastle.Crypto.Generators.OpenSslPbeParametersGenerator
class CORDL_TYPE OpenSslPbeParametersGenerator : public ::Org::BouncyCastle::Crypto::PbeParametersGenerator {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~OpenSslPbeParametersGenerator() = default;

// Ctor Parameters [CppParam { name: "", ty: "OpenSslPbeParametersGenerator", modifiers: " const&", def_value: None }]
constexpr OpenSslPbeParametersGenerator(OpenSslPbeParametersGenerator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OpenSslPbeParametersGenerator", modifiers: "&&", def_value: None }]
constexpr OpenSslPbeParametersGenerator(OpenSslPbeParametersGenerator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OpenSslPbeParametersGenerator(void* ptr) noexcept : ::Org::BouncyCastle::Crypto::PbeParametersGenerator(ptr) {
}


  constexpr OpenSslPbeParametersGenerator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OpenSslPbeParametersGenerator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OpenSslPbeParametersGenerator& operator=(OpenSslPbeParametersGenerator&& o) noexcept = default;
  constexpr OpenSslPbeParametersGenerator& operator=(OpenSslPbeParametersGenerator const& o) noexcept = default;
                


// Fields

 ::Org::BouncyCastle::Crypto::IDigest __declspec(property(get=__get_digest, put=__set_digest))  digest;

constexpr void __set_digest(::Org::BouncyCastle::Crypto::IDigest value) ;

constexpr ::Org::BouncyCastle::Crypto::IDigest __get_digest() const;


// Methods

// Ctor Parameters []
explicit OpenSslPbeParametersGenerator() ;

/// @brief Method .ctor addr 0xe76b80 size 0x68 virtual false final false
 void _ctor() ;

/// @brief Method Init addr 0xe76be8 size 0x8 virtual true final false
 void Init(::ArrayW<uint8_t> password, ::ArrayW<uint8_t> salt, int32_t iterationCount) ;

/// @brief Method Init addr 0xe76bf0 size 0x8 virtual true final false
 void Init(::ArrayW<uint8_t> password, ::ArrayW<uint8_t> salt) ;

/// @brief Method GenerateDerivedKey addr 0xe76bf8 size 0x384 virtual false final false
 ::ArrayW<uint8_t> GenerateDerivedKey(int32_t bytesNeeded) ;

/// @brief Method GenerateDerivedParameters addr 0xe76f7c size 0xc virtual true final false
 ::Org::BouncyCastle::Crypto::ICipherParameters GenerateDerivedParameters(int32_t keySize) ;

/// @brief Method GenerateDerivedParameters addr 0xe76f88 size 0x98 virtual true final false
 ::Org::BouncyCastle::Crypto::ICipherParameters GenerateDerivedParameters(::StringW algorithm, int32_t keySize) ;

/// @brief Method GenerateDerivedParameters addr 0xe77020 size 0xf4 virtual true final false
 ::Org::BouncyCastle::Crypto::ICipherParameters GenerateDerivedParameters(int32_t keySize, int32_t ivSize) ;

/// @brief Method GenerateDerivedParameters addr 0xe77114 size 0x104 virtual true final false
 ::Org::BouncyCastle::Crypto::ICipherParameters GenerateDerivedParameters(::StringW algorithm, int32_t keySize, int32_t ivSize) ;

/// @brief Method GenerateDerivedMacParameters addr 0xe77218 size 0x9c virtual true final false
 ::Org::BouncyCastle::Crypto::ICipherParameters GenerateDerivedMacParameters(int32_t keySize) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Generators
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Generators::OpenSslPbeParametersGenerator);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Generators::OpenSslPbeParametersGenerator, "Org.BouncyCastle.Crypto.Generators", "OpenSslPbeParametersGenerator");
