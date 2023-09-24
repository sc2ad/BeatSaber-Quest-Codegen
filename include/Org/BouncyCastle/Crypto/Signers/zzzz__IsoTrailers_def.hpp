#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Crypto {
class IDigest;
}
namespace System::Collections {
class IDictionary;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Signers {
class IsoTrailers;
}
// Type: Org.BouncyCastle.Crypto.Signers::IsoTrailers
namespace Org::BouncyCastle::Crypto::Signers {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1148))
// CS Name: Org.BouncyCastle.Crypto.Signers.IsoTrailers
class CORDL_TYPE IsoTrailers : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~IsoTrailers() = default;

// Ctor Parameters [CppParam { name: "", ty: "IsoTrailers", modifiers: " const&", def_value: None }]
constexpr IsoTrailers(IsoTrailers const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "IsoTrailers", modifiers: "&&", def_value: None }]
constexpr IsoTrailers(IsoTrailers&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IsoTrailers(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr IsoTrailers& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr IsoTrailers& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr IsoTrailers& operator=(IsoTrailers&& o) noexcept = default;
  constexpr IsoTrailers& operator=(IsoTrailers const& o) noexcept = default;
                


// Fields

/// @brief Field TRAILER_IMPLICIT offset 0
static constexpr int32_t  TRAILER_IMPLICIT{188};

/// @brief Field TRAILER_RIPEMD160 offset 0
static constexpr int32_t  TRAILER_RIPEMD160{12748};

/// @brief Field TRAILER_RIPEMD128 offset 0
static constexpr int32_t  TRAILER_RIPEMD128{13004};

/// @brief Field TRAILER_SHA1 offset 0
static constexpr int32_t  TRAILER_SHA1{13260};

/// @brief Field TRAILER_SHA256 offset 0
static constexpr int32_t  TRAILER_SHA256{13516};

/// @brief Field TRAILER_SHA512 offset 0
static constexpr int32_t  TRAILER_SHA512{13772};

/// @brief Field TRAILER_SHA384 offset 0
static constexpr int32_t  TRAILER_SHA384{14028};

/// @brief Field TRAILER_WHIRLPOOL offset 0
static constexpr int32_t  TRAILER_WHIRLPOOL{14284};

/// @brief Field TRAILER_SHA224 offset 0
static constexpr int32_t  TRAILER_SHA224{14540};

/// @brief Field TRAILER_SHA512_224 offset 0
static constexpr int32_t  TRAILER_SHA512_224{14796};

/// @brief Field TRAILER_SHA512_256 offset 0
static constexpr int32_t  TRAILER_SHA512_256{16588};

static System::Collections::IDictionary __declspec(property(get=__get_trailerMap, put=__set_trailerMap))  trailerMap;

static void __set_trailerMap(System::Collections::IDictionary value) ;

static System::Collections::IDictionary __get_trailerMap() ;


// Methods

/// @brief Method CreateTrailerMap addr 0xec47f0 size 0x674 virtual false final false
static System::Collections::IDictionary CreateTrailerMap() ;

/// @brief Method GetTrailer addr 0xec0edc size 0x184 virtual false final false
static int32_t GetTrailer(Org::BouncyCastle::Crypto::IDigest digest) ;

/// @brief Method NoTrailerAvailable addr 0xec0d88 size 0x154 virtual false final false
static bool NoTrailerAvailable(Org::BouncyCastle::Crypto::IDigest digest) ;

static Org::BouncyCastle::Crypto::Signers::IsoTrailers New_ctor() ;

/// @brief Method .ctor addr 0xec4eb0 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Signers
NEED_NO_BOX(Org::BouncyCastle::Crypto::Signers::IsoTrailers);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Signers::IsoTrailers, "Org.BouncyCastle.Crypto.Signers", "IsoTrailers");
