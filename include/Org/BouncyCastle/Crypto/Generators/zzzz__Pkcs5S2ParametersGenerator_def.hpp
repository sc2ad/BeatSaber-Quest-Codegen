#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__PbeParametersGenerator_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
namespace Org::BouncyCastle::Crypto {
class IDigest;
}
namespace Org::BouncyCastle::Crypto {
class IMac;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Generators {
class Pkcs5S2ParametersGenerator;
}
// Type: Org.BouncyCastle.Crypto.Generators::Pkcs5S2ParametersGenerator
namespace Org::BouncyCastle::Crypto::Generators {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(916))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(920))
// CS Name: Org.BouncyCastle.Crypto.Generators.Pkcs5S2ParametersGenerator
class CORDL_TYPE Pkcs5S2ParametersGenerator : public ::Org::BouncyCastle::Crypto::PbeParametersGenerator {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~Pkcs5S2ParametersGenerator() = default;

// Ctor Parameters [CppParam { name: "", ty: "Pkcs5S2ParametersGenerator", modifiers: " const&", def_value: None }]
constexpr Pkcs5S2ParametersGenerator(Pkcs5S2ParametersGenerator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Pkcs5S2ParametersGenerator", modifiers: "&&", def_value: None }]
constexpr Pkcs5S2ParametersGenerator(Pkcs5S2ParametersGenerator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Pkcs5S2ParametersGenerator(void* ptr) noexcept : ::Org::BouncyCastle::Crypto::PbeParametersGenerator(ptr) {
}


  constexpr Pkcs5S2ParametersGenerator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Pkcs5S2ParametersGenerator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Pkcs5S2ParametersGenerator& operator=(Pkcs5S2ParametersGenerator&& o) noexcept = default;
  constexpr Pkcs5S2ParametersGenerator& operator=(Pkcs5S2ParametersGenerator const& o) noexcept = default;
                


// Fields

 ::Org::BouncyCastle::Crypto::IMac __declspec(property(get=__get_hMac, put=__set_hMac))  hMac;

constexpr void __set_hMac(::Org::BouncyCastle::Crypto::IMac value) ;

constexpr ::Org::BouncyCastle::Crypto::IMac __get_hMac() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_state, put=__set_state))  state;

constexpr void __set_state(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_state() const;


// Methods

// Ctor Parameters []
explicit Pkcs5S2ParametersGenerator() ;

/// @brief Method .ctor addr 0xe78980 size 0x64 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "digest", ty: "::Org::BouncyCastle::Crypto::IDigest", modifiers: "", def_value: None }]
explicit Pkcs5S2ParametersGenerator(::Org::BouncyCastle::Crypto::IDigest digest) ;

/// @brief Method .ctor addr 0xe789e4 size 0x114 virtual false final false
 void _ctor(::Org::BouncyCastle::Crypto::IDigest digest) ;

/// @brief Method F addr 0xe78af8 size 0x3c4 virtual false final false
 void F(::ArrayW<uint8_t> S, int32_t c, ::ArrayW<uint8_t> iBuf, ::ArrayW<uint8_t> outBytes, int32_t outOff) ;

/// @brief Method GenerateDerivedKey addr 0xe78ebc size 0x228 virtual false final false
 ::ArrayW<uint8_t> GenerateDerivedKey(int32_t dkLen) ;

/// @brief Method GenerateDerivedParameters addr 0xe790e4 size 0xc virtual true final false
 ::Org::BouncyCastle::Crypto::ICipherParameters GenerateDerivedParameters(int32_t keySize) ;

/// @brief Method GenerateDerivedParameters addr 0xe790f0 size 0x98 virtual true final false
 ::Org::BouncyCastle::Crypto::ICipherParameters GenerateDerivedParameters(::StringW algorithm, int32_t keySize) ;

/// @brief Method GenerateDerivedParameters addr 0xe79188 size 0xf4 virtual true final false
 ::Org::BouncyCastle::Crypto::ICipherParameters GenerateDerivedParameters(int32_t keySize, int32_t ivSize) ;

/// @brief Method GenerateDerivedParameters addr 0xe7927c size 0x104 virtual true final false
 ::Org::BouncyCastle::Crypto::ICipherParameters GenerateDerivedParameters(::StringW algorithm, int32_t keySize, int32_t ivSize) ;

/// @brief Method GenerateDerivedMacParameters addr 0xe79380 size 0x9c virtual true final false
 ::Org::BouncyCastle::Crypto::ICipherParameters GenerateDerivedMacParameters(int32_t keySize) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Generators
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Generators::Pkcs5S2ParametersGenerator);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Generators::Pkcs5S2ParametersGenerator, "Org.BouncyCastle.Crypto.Generators", "Pkcs5S2ParametersGenerator");
