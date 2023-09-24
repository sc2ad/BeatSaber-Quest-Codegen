#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Crypto {
class IDigest;
}
namespace Org::BouncyCastle::Crypto {
class IDerivationParameters;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class KeyParameter;
}
namespace Org::BouncyCastle::Crypto {
class IDerivationFunction;
}
namespace Org::BouncyCastle::Crypto::Macs {
class HMac;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Generators {
class HkdfBytesGenerator;
}
// Type: Org.BouncyCastle.Crypto.Generators::HkdfBytesGenerator
namespace Org::BouncyCastle::Crypto::Generators {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(906))
// CS Name: Org.BouncyCastle.Crypto.Generators.HkdfBytesGenerator
class CORDL_TYPE HkdfBytesGenerator : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to Org::BouncyCastle::Crypto::IDerivationFunction
constexpr operator  Org::BouncyCastle::Crypto::IDerivationFunction() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~HkdfBytesGenerator() = default;

// Ctor Parameters [CppParam { name: "", ty: "HkdfBytesGenerator", modifiers: " const&", def_value: None }]
constexpr HkdfBytesGenerator(HkdfBytesGenerator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HkdfBytesGenerator", modifiers: "&&", def_value: None }]
constexpr HkdfBytesGenerator(HkdfBytesGenerator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HkdfBytesGenerator(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr HkdfBytesGenerator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HkdfBytesGenerator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HkdfBytesGenerator& operator=(HkdfBytesGenerator&& o) noexcept = default;
  constexpr HkdfBytesGenerator& operator=(HkdfBytesGenerator const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Crypto::Macs::HMac __declspec(property(get=__get_hMacHash, put=__set_hMacHash))  hMacHash;

constexpr void __set_hMacHash(Org::BouncyCastle::Crypto::Macs::HMac value) ;

constexpr Org::BouncyCastle::Crypto::Macs::HMac __get_hMacHash() const;

 int32_t __declspec(property(get=__get_hashLen, put=__set_hashLen))  hashLen;

constexpr void __set_hashLen(int32_t value) ;

constexpr int32_t __get_hashLen() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_info, put=__set_info))  info;

constexpr void __set_info(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_info() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_currentT, put=__set_currentT))  currentT;

constexpr void __set_currentT(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_currentT() const;

 int32_t __declspec(property(get=__get_generatedBytes, put=__set_generatedBytes))  generatedBytes;

constexpr void __set_generatedBytes(int32_t value) ;

constexpr int32_t __get_generatedBytes() const;


// Properties

 Org::BouncyCastle::Crypto::IDigest __declspec(property(get=get_Digest))  Digest;


// Methods

static Org::BouncyCastle::Crypto::Generators::HkdfBytesGenerator New_ctor(Org::BouncyCastle::Crypto::IDigest hash) ;

/// @brief Method .ctor addr 0xe70aa0 size 0xf4 virtual false final false
 void _ctor(Org::BouncyCastle::Crypto::IDigest hash) ;

/// @brief Method Init addr 0xe70b94 size 0x1d8 virtual true final false
 void Init(Org::BouncyCastle::Crypto::IDerivationParameters parameters) ;

/// @brief Method Extract addr 0xe70d6c size 0x170 virtual false final false
 Org::BouncyCastle::Crypto::Parameters::KeyParameter Extract(::ArrayW<uint8_t> salt, ::ArrayW<uint8_t> ikm) ;

/// @brief Method ExpandNext addr 0xe70edc size 0x104 virtual false final false
 void ExpandNext() ;

/// @brief Method get_Digest addr 0xe70fe0 size 0x20 virtual true final false
 Org::BouncyCastle::Crypto::IDigest get_Digest() ;

/// @brief Method GenerateBytes addr 0xe71000 size 0x1bc virtual true final false
 int32_t GenerateBytes(::ArrayW<uint8_t> output, int32_t outOff, int32_t len) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Generators
NEED_NO_BOX(Org::BouncyCastle::Crypto::Generators::HkdfBytesGenerator);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Generators::HkdfBytesGenerator, "Org.BouncyCastle.Crypto.Generators", "HkdfBytesGenerator");
