#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
// Forward declare root types
namespace Org::BouncyCastle::Math::Raw {
class Interleave;
}
// Type: Org.BouncyCastle.Math.Raw::Interleave
namespace Org::BouncyCastle::Math::Raw {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1588))
// CS Name: Org.BouncyCastle.Math.Raw.Interleave
class CORDL_TYPE Interleave : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~Interleave() = default;

// Ctor Parameters [CppParam { name: "", ty: "Interleave", modifiers: " const&", def_value: None }]
constexpr Interleave(Interleave const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Interleave", modifiers: "&&", def_value: None }]
constexpr Interleave(Interleave&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Interleave(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Interleave& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Interleave& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Interleave& operator=(Interleave&& o) noexcept = default;
  constexpr Interleave& operator=(Interleave const& o) noexcept = default;
                


// Fields

/// @brief Field M32 offset 0
static constexpr uint64_t  M32{1431655765u};

/// @brief Field M64 offset 0
static constexpr uint64_t  M64{6148914691236517205u};

/// @brief Field M64R offset 0
static constexpr uint64_t  M64R{12297829382473034410u};


// Methods

/// @brief Method Expand8to16 addr 0xfcea40 size 0x20 virtual false final false
static uint32_t Expand8to16(uint32_t x) ;

/// @brief Method Expand16to32 addr 0xfcea60 size 0x28 virtual false final false
static uint32_t Expand16to32(uint32_t x) ;

/// @brief Method Expand32to64 addr 0xfcea88 size 0x58 virtual false final false
static uint64_t Expand32to64(uint32_t x) ;

/// @brief Method Expand64To128 addr 0xfceae0 size 0xa8 virtual false final false
static void Expand64To128(uint64_t x, ::ArrayW<uint64_t> z, int32_t zOff) ;

/// @brief Method Expand64To128Rev addr 0xfceb88 size 0xa8 virtual false final false
static void Expand64To128Rev(uint64_t x, ::ArrayW<uint64_t> z, int32_t zOff) ;

/// @brief Method Shuffle addr 0xfcec30 size 0x48 virtual false final false
static uint32_t Shuffle(uint32_t x) ;

/// @brief Method Shuffle addr 0xfcec78 size 0x5c virtual false final false
static uint64_t Shuffle(uint64_t x) ;

/// @brief Method Shuffle2 addr 0xfcecd4 size 0x54 virtual false final false
static uint32_t Shuffle2(uint32_t x) ;

/// @brief Method Unshuffle addr 0xfced28 size 0x48 virtual false final false
static uint32_t Unshuffle(uint32_t x) ;

/// @brief Method Unshuffle addr 0xfced70 size 0x5c virtual false final false
static uint64_t Unshuffle(uint64_t x) ;

/// @brief Method Unshuffle2 addr 0xfcedcc size 0x54 virtual false final false
static uint32_t Unshuffle2(uint32_t x) ;

// Ctor Parameters []
explicit Interleave() ;

/// @brief Method .ctor addr 0xfcee20 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Math::Raw
NEED_NO_BOX(Org::BouncyCastle::Math::Raw::Interleave);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Math::Raw::Interleave, "Org.BouncyCastle.Math.Raw", "Interleave");
