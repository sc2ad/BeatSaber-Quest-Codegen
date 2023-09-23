#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Crypto {
class IDerivationParameters;
}
namespace Org::BouncyCastle::Crypto {
class IDigest;
}
namespace Org::BouncyCastle::Crypto {
class IDerivationFunction;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Generators {
class Mgf1BytesGenerator;
}
// Type: Org.BouncyCastle.Crypto.Generators::Mgf1BytesGenerator
namespace Org::BouncyCastle::Crypto::Generators {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(913))
// CS Name: Org.BouncyCastle.Crypto.Generators.Mgf1BytesGenerator
class CORDL_TYPE Mgf1BytesGenerator : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to Org::BouncyCastle::Crypto::IDerivationFunction
constexpr operator  Org::BouncyCastle::Crypto::IDerivationFunction() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~Mgf1BytesGenerator() = default;

// Ctor Parameters [CppParam { name: "", ty: "Mgf1BytesGenerator", modifiers: " const&", def_value: None }]
constexpr Mgf1BytesGenerator(Mgf1BytesGenerator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Mgf1BytesGenerator", modifiers: "&&", def_value: None }]
constexpr Mgf1BytesGenerator(Mgf1BytesGenerator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Mgf1BytesGenerator(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Mgf1BytesGenerator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Mgf1BytesGenerator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Mgf1BytesGenerator& operator=(Mgf1BytesGenerator&& o) noexcept = default;
  constexpr Mgf1BytesGenerator& operator=(Mgf1BytesGenerator const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Crypto::IDigest __declspec(property(get=__get_digest, put=__set_digest))  digest;

constexpr void __set_digest(Org::BouncyCastle::Crypto::IDigest value) ;

constexpr Org::BouncyCastle::Crypto::IDigest __get_digest() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_seed, put=__set_seed))  seed;

constexpr void __set_seed(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_seed() const;

 int32_t __declspec(property(get=__get_hLen, put=__set_hLen))  hLen;

constexpr void __set_hLen(int32_t value) ;

constexpr int32_t __get_hLen() const;


// Properties

 Org::BouncyCastle::Crypto::IDigest __declspec(property(get=get_Digest))  Digest;


// Methods

// Ctor Parameters [CppParam { name: "digest", ty: "Org::BouncyCastle::Crypto::IDigest", modifiers: "", def_value: None }]
explicit Mgf1BytesGenerator(Org::BouncyCastle::Crypto::IDigest digest) ;

/// @brief Method .ctor addr 0xe7320c size 0xbc virtual false final false
 void _ctor(Org::BouncyCastle::Crypto::IDigest digest) ;

/// @brief Method Init addr 0xe732c8 size 0x148 virtual true final true
 void Init(Org::BouncyCastle::Crypto::IDerivationParameters parameters) ;

/// @brief Method get_Digest addr 0xe73410 size 0x8 virtual true final true
 Org::BouncyCastle::Crypto::IDigest get_Digest() ;

/// @brief Method ItoOSP addr 0xe73418 size 0x54 virtual false final false
 void ItoOSP(int32_t i, ::ArrayW<uint8_t> sp) ;

/// @brief Method GenerateBytes addr 0xe7346c size 0x4c0 virtual true final true
 int32_t GenerateBytes(::ArrayW<uint8_t> output, int32_t outOff, int32_t length) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Generators
NEED_NO_BOX(Org::BouncyCastle::Crypto::Generators::Mgf1BytesGenerator);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Generators::Mgf1BytesGenerator, "Org.BouncyCastle.Crypto.Generators", "Mgf1BytesGenerator");
