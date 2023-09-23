#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Crypto::Digests {
class SkeinEngine;
}
namespace Org::BouncyCastle::Crypto {
class IDigest;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class SkeinParameters;
}
namespace Org::BouncyCastle::Utilities {
class IMemoable;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Digests {
class SkeinDigest;
}
// Type: Org.BouncyCastle.Crypto.Digests::SkeinDigest
namespace Org::BouncyCastle::Crypto::Digests {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(776))
// CS Name: Org.BouncyCastle.Crypto.Digests.SkeinDigest
class CORDL_TYPE SkeinDigest : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to Org::BouncyCastle::Crypto::IDigest
constexpr operator  Org::BouncyCastle::Crypto::IDigest() const noexcept;

/// @brief Convert operator to Org::BouncyCastle::Utilities::IMemoable
constexpr operator  Org::BouncyCastle::Utilities::IMemoable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~SkeinDigest() = default;

// Ctor Parameters [CppParam { name: "", ty: "SkeinDigest", modifiers: " const&", def_value: None }]
constexpr SkeinDigest(SkeinDigest const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SkeinDigest", modifiers: "&&", def_value: None }]
constexpr SkeinDigest(SkeinDigest&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SkeinDigest(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr SkeinDigest& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SkeinDigest& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SkeinDigest& operator=(SkeinDigest&& o) noexcept = default;
  constexpr SkeinDigest& operator=(SkeinDigest const& o) noexcept = default;
                


// Fields

/// @brief Field SKEIN_256 offset 0
static constexpr int32_t  SKEIN_256{256};

/// @brief Field SKEIN_512 offset 0
static constexpr int32_t  SKEIN_512{512};

/// @brief Field SKEIN_1024 offset 0
static constexpr int32_t  SKEIN_1024{1024};

 Org::BouncyCastle::Crypto::Digests::SkeinEngine __declspec(property(get=__get_engine, put=__set_engine))  engine;

constexpr void __set_engine(Org::BouncyCastle::Crypto::Digests::SkeinEngine value) ;

constexpr Org::BouncyCastle::Crypto::Digests::SkeinEngine __get_engine() const;


// Properties

 ::StringW __declspec(property(get=get_AlgorithmName))  AlgorithmName;


// Methods

// Ctor Parameters [CppParam { name: "stateSizeBits", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "digestSizeBits", ty: "int32_t", modifiers: "", def_value: None }]
explicit SkeinDigest(int32_t stateSizeBits, int32_t digestSizeBits) ;

/// @brief Method .ctor addr 0xe18f44 size 0x88 virtual false final false
 void _ctor(int32_t stateSizeBits, int32_t digestSizeBits) ;

// Ctor Parameters [CppParam { name: "digest", ty: "Org::BouncyCastle::Crypto::Digests::SkeinDigest", modifiers: "", def_value: None }]
explicit SkeinDigest(Org::BouncyCastle::Crypto::Digests::SkeinDigest digest) ;

/// @brief Method .ctor addr 0xe19174 size 0x78 virtual false final false
 void _ctor(Org::BouncyCastle::Crypto::Digests::SkeinDigest digest) ;

/// @brief Method Reset addr 0xe19244 size 0x8c virtual true final true
 void Reset(Org::BouncyCastle::Utilities::IMemoable other) ;

/// @brief Method Copy addr 0xe193f4 size 0x60 virtual true final true
 Org::BouncyCastle::Utilities::IMemoable Copy() ;

/// @brief Method get_AlgorithmName addr 0xe19454 size 0x1c4 virtual true final true
 ::StringW get_AlgorithmName() ;

/// @brief Method GetDigestSize addr 0xe1963c size 0x1c virtual true final true
 int32_t GetDigestSize() ;

/// @brief Method GetByteLength addr 0xe19658 size 0x2c virtual true final true
 int32_t GetByteLength() ;

/// @brief Method Init addr 0xe1915c size 0x18 virtual false final false
 void Init(Org::BouncyCastle::Crypto::Parameters::SkeinParameters parameters) ;

/// @brief Method Reset addr 0xe1973c size 0x18 virtual true final true
 void Reset() ;

/// @brief Method Update addr 0xe19794 size 0x18 virtual true final true
 void Update(uint8_t inByte) ;

/// @brief Method BlockUpdate addr 0xe197e0 size 0x18 virtual true final true
 void BlockUpdate(::ArrayW<uint8_t> inBytes, int32_t inOff, int32_t len) ;

/// @brief Method DoFinal addr 0xe19844 size 0x18 virtual true final true
 int32_t DoFinal(::ArrayW<uint8_t> outBytes, int32_t outOff) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Digests
NEED_NO_BOX(Org::BouncyCastle::Crypto::Digests::SkeinDigest);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Digests::SkeinDigest, "Org.BouncyCastle.Crypto.Digests", "SkeinDigest");
