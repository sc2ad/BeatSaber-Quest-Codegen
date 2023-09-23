#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Crypto {
class IDigest;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Digests {
class ShortenedDigest;
}
// Type: Org.BouncyCastle.Crypto.Digests::ShortenedDigest
namespace Org::BouncyCastle::Crypto::Digests {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(775))
// CS Name: Org.BouncyCastle.Crypto.Digests.ShortenedDigest
class CORDL_TYPE ShortenedDigest : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to Org::BouncyCastle::Crypto::IDigest
constexpr operator  Org::BouncyCastle::Crypto::IDigest() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~ShortenedDigest() = default;

// Ctor Parameters [CppParam { name: "", ty: "ShortenedDigest", modifiers: " const&", def_value: None }]
constexpr ShortenedDigest(ShortenedDigest const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ShortenedDigest", modifiers: "&&", def_value: None }]
constexpr ShortenedDigest(ShortenedDigest&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ShortenedDigest(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ShortenedDigest& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ShortenedDigest& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ShortenedDigest& operator=(ShortenedDigest&& o) noexcept = default;
  constexpr ShortenedDigest& operator=(ShortenedDigest const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Crypto::IDigest __declspec(property(get=__get_baseDigest, put=__set_baseDigest))  baseDigest;

constexpr void __set_baseDigest(Org::BouncyCastle::Crypto::IDigest value) ;

constexpr Org::BouncyCastle::Crypto::IDigest __get_baseDigest() const;

 int32_t __declspec(property(get=__get_length, put=__set_length))  length;

constexpr void __set_length(int32_t value) ;

constexpr int32_t __get_length() const;


// Properties

 ::StringW __declspec(property(get=get_AlgorithmName))  AlgorithmName;


// Methods

// Ctor Parameters [CppParam { name: "baseDigest", ty: "Org::BouncyCastle::Crypto::IDigest", modifiers: "", def_value: None }, CppParam { name: "length", ty: "int32_t", modifiers: "", def_value: None }]
explicit ShortenedDigest(Org::BouncyCastle::Crypto::IDigest baseDigest, int32_t length) ;

/// @brief Method .ctor addr 0xe187d0 size 0x150 virtual false final false
 void _ctor(Org::BouncyCastle::Crypto::IDigest baseDigest, int32_t length) ;

/// @brief Method get_AlgorithmName addr 0xe18920 size 0x1f0 virtual true final true
 ::StringW get_AlgorithmName() ;

/// @brief Method GetDigestSize addr 0xe18b10 size 0x8 virtual true final true
 int32_t GetDigestSize() ;

/// @brief Method Update addr 0xe18b18 size 0xac virtual true final true
 void Update(uint8_t input) ;

/// @brief Method BlockUpdate addr 0xe18bc4 size 0xc4 virtual true final true
 void BlockUpdate(::ArrayW<uint8_t> input, int32_t inOff, int32_t length) ;

/// @brief Method DoFinal addr 0xe18c88 size 0x174 virtual true final true
 int32_t DoFinal(::ArrayW<uint8_t> output, int32_t outOff) ;

/// @brief Method Reset addr 0xe18dfc size 0xa4 virtual true final true
 void Reset() ;

/// @brief Method GetByteLength addr 0xe18ea0 size 0xa4 virtual true final true
 int32_t GetByteLength() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Digests
NEED_NO_BOX(Org::BouncyCastle::Crypto::Digests::ShortenedDigest);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Digests::ShortenedDigest, "Org.BouncyCastle.Crypto.Digests", "ShortenedDigest");
