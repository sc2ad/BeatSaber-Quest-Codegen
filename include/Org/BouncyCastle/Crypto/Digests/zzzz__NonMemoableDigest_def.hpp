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
class NonMemoableDigest;
}
// Type: Org.BouncyCastle.Crypto.Digests::NonMemoableDigest
namespace Org::BouncyCastle::Crypto::Digests {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(760))
// CS Name: Org.BouncyCastle.Crypto.Digests.NonMemoableDigest
class CORDL_TYPE NonMemoableDigest : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to Org::BouncyCastle::Crypto::IDigest
constexpr operator  Org::BouncyCastle::Crypto::IDigest() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~NonMemoableDigest() = default;

// Ctor Parameters [CppParam { name: "", ty: "NonMemoableDigest", modifiers: " const&", def_value: None }]
constexpr NonMemoableDigest(NonMemoableDigest const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "NonMemoableDigest", modifiers: "&&", def_value: None }]
constexpr NonMemoableDigest(NonMemoableDigest&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit NonMemoableDigest(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr NonMemoableDigest& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr NonMemoableDigest& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr NonMemoableDigest& operator=(NonMemoableDigest&& o) noexcept = default;
  constexpr NonMemoableDigest& operator=(NonMemoableDigest const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Crypto::IDigest __declspec(property(get=__get_mBaseDigest, put=__set_mBaseDigest))  mBaseDigest;

constexpr void __set_mBaseDigest(Org::BouncyCastle::Crypto::IDigest value) ;

constexpr Org::BouncyCastle::Crypto::IDigest __get_mBaseDigest() const;


// Properties

 ::StringW __declspec(property(get=get_AlgorithmName))  AlgorithmName;


// Methods

// Ctor Parameters [CppParam { name: "baseDigest", ty: "Org::BouncyCastle::Crypto::IDigest", modifiers: "", def_value: None }]
explicit NonMemoableDigest(Org::BouncyCastle::Crypto::IDigest baseDigest) ;

/// @brief Method .ctor addr 0x119e688 size 0x78 virtual false final false
 void _ctor(Org::BouncyCastle::Crypto::IDigest baseDigest) ;

/// @brief Method get_AlgorithmName addr 0x119e700 size 0xa0 virtual true final false
 ::StringW get_AlgorithmName() ;

/// @brief Method GetDigestSize addr 0x119e7a0 size 0xa4 virtual true final false
 int32_t GetDigestSize() ;

/// @brief Method Update addr 0x119e844 size 0xac virtual true final false
 void Update(uint8_t input) ;

/// @brief Method BlockUpdate addr 0x119e8f0 size 0xc4 virtual true final false
 void BlockUpdate(::ArrayW<uint8_t> input, int32_t inOff, int32_t len) ;

/// @brief Method DoFinal addr 0x119e9b4 size 0xbc virtual true final false
 int32_t DoFinal(::ArrayW<uint8_t> output, int32_t outOff) ;

/// @brief Method Reset addr 0x119ea70 size 0xa4 virtual true final false
 void Reset() ;

/// @brief Method GetByteLength addr 0x119eb14 size 0xa4 virtual true final false
 int32_t GetByteLength() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Digests
NEED_NO_BOX(Org::BouncyCastle::Crypto::Digests::NonMemoableDigest);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Digests::NonMemoableDigest, "Org.BouncyCastle.Crypto.Digests", "NonMemoableDigest");
