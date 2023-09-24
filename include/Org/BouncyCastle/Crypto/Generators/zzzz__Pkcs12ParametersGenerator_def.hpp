#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__PbeParametersGenerator_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
namespace Org::BouncyCastle::Crypto {
class IDigest;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Generators {
class Pkcs12ParametersGenerator;
}
// Type: Org.BouncyCastle.Crypto.Generators::Pkcs12ParametersGenerator
namespace Org::BouncyCastle::Crypto::Generators {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(916))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(918))
// CS Name: Org.BouncyCastle.Crypto.Generators.Pkcs12ParametersGenerator
class CORDL_TYPE Pkcs12ParametersGenerator : public Org::BouncyCastle::Crypto::PbeParametersGenerator {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~Pkcs12ParametersGenerator() = default;

// Ctor Parameters [CppParam { name: "", ty: "Pkcs12ParametersGenerator", modifiers: " const&", def_value: None }]
constexpr Pkcs12ParametersGenerator(Pkcs12ParametersGenerator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Pkcs12ParametersGenerator", modifiers: "&&", def_value: None }]
constexpr Pkcs12ParametersGenerator(Pkcs12ParametersGenerator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Pkcs12ParametersGenerator(void* ptr) noexcept : Org::BouncyCastle::Crypto::PbeParametersGenerator(ptr) {
}


  constexpr Pkcs12ParametersGenerator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Pkcs12ParametersGenerator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Pkcs12ParametersGenerator& operator=(Pkcs12ParametersGenerator&& o) noexcept = default;
  constexpr Pkcs12ParametersGenerator& operator=(Pkcs12ParametersGenerator const& o) noexcept = default;
                


// Fields

/// @brief Field KeyMaterial offset 0
static constexpr int32_t  KeyMaterial{1};

/// @brief Field IVMaterial offset 0
static constexpr int32_t  IVMaterial{2};

/// @brief Field MacMaterial offset 0
static constexpr int32_t  MacMaterial{3};

 Org::BouncyCastle::Crypto::IDigest __declspec(property(get=__get_digest, put=__set_digest))  digest;

constexpr void __set_digest(Org::BouncyCastle::Crypto::IDigest value) ;

constexpr Org::BouncyCastle::Crypto::IDigest __get_digest() const;

 int32_t __declspec(property(get=__get_u, put=__set_u))  u;

constexpr void __set_u(int32_t value) ;

constexpr int32_t __get_u() const;

 int32_t __declspec(property(get=__get_v, put=__set_v))  v;

constexpr void __set_v(int32_t value) ;

constexpr int32_t __get_v() const;


// Methods

static Org::BouncyCastle::Crypto::Generators::Pkcs12ParametersGenerator New_ctor(Org::BouncyCastle::Crypto::IDigest digest) ;

/// @brief Method .ctor addr 0xe772b4 size 0x11c virtual false final false
 void _ctor(Org::BouncyCastle::Crypto::IDigest digest) ;

/// @brief Method Adjust addr 0xe773d0 size 0xd4 virtual false final false
 void Adjust(::ArrayW<uint8_t> a, int32_t aOff, ::ArrayW<uint8_t> b) ;

/// @brief Method GenerateDerivedKey addr 0xe774a4 size 0x5f0 virtual false final false
 ::ArrayW<uint8_t> GenerateDerivedKey(int32_t idByte, int32_t n) ;

/// @brief Method GenerateDerivedParameters addr 0xe77a94 size 0xa0 virtual true final false
 Org::BouncyCastle::Crypto::ICipherParameters GenerateDerivedParameters(int32_t keySize) ;

/// @brief Method GenerateDerivedParameters addr 0xe77b34 size 0x9c virtual true final false
 Org::BouncyCastle::Crypto::ICipherParameters GenerateDerivedParameters(::StringW algorithm, int32_t keySize) ;

/// @brief Method GenerateDerivedParameters addr 0xe77bd0 size 0x10c virtual true final false
 Org::BouncyCastle::Crypto::ICipherParameters GenerateDerivedParameters(int32_t keySize, int32_t ivSize) ;

/// @brief Method GenerateDerivedParameters addr 0xe77cdc size 0x11c virtual true final false
 Org::BouncyCastle::Crypto::ICipherParameters GenerateDerivedParameters(::StringW algorithm, int32_t keySize, int32_t ivSize) ;

/// @brief Method GenerateDerivedMacParameters addr 0xe77df8 size 0xa0 virtual true final false
 Org::BouncyCastle::Crypto::ICipherParameters GenerateDerivedMacParameters(int32_t keySize) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Generators
NEED_NO_BOX(Org::BouncyCastle::Crypto::Generators::Pkcs12ParametersGenerator);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Generators::Pkcs12ParametersGenerator, "Org.BouncyCastle.Crypto.Generators", "Pkcs12ParametersGenerator");
