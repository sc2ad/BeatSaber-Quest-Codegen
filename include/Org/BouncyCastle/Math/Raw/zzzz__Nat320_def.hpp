#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace {
namespace Org::BouncyCastle::Math {
class BigInteger;
}
// Forward declare root types
namespace Org::BouncyCastle::Math::Raw {
class Nat320;
}
// Type: Org.BouncyCastle.Math.Raw::Nat320
namespace Org::BouncyCastle::Math::Raw {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1596))
// CS Name: Org.BouncyCastle.Math.Raw.Nat320
class CORDL_TYPE Nat320 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~Nat320() = default;

// Ctor Parameters [CppParam { name: "", ty: "Nat320", modifiers: " const&", def_value: None }]
constexpr Nat320(Nat320 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Nat320", modifiers: "&&", def_value: None }]
constexpr Nat320(Nat320&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Nat320(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Nat320& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Nat320& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Nat320& operator=(Nat320&& o) noexcept = default;
  constexpr Nat320& operator=(Nat320 const& o) noexcept = default;
                


// Methods

/// @brief Method Copy64 addr 0x1000ea0 size 0xa4 virtual false final false
static void Copy64(::ArrayW<uint64_t> x, ::ArrayW<uint64_t> z) ;

/// @brief Method Copy64 addr 0x1000f44 size 0x104 virtual false final false
static void Copy64(::ArrayW<uint64_t> x, int32_t xOff, ::ArrayW<uint64_t> z, int32_t zOff) ;

/// @brief Method Create64 addr 0x1001048 size 0x44 virtual false final false
static ::ArrayW<uint64_t> Create64() ;

/// @brief Method CreateExt64 addr 0x100108c size 0x44 virtual false final false
static ::ArrayW<uint64_t> CreateExt64() ;

/// @brief Method Eq64 addr 0x10010d0 size 0x68 virtual false final false
static bool Eq64(::ArrayW<uint64_t> x, ::ArrayW<uint64_t> y) ;

/// @brief Method FromBigInteger64 addr 0x1001138 size 0xd4 virtual false final false
static ::ArrayW<uint64_t> FromBigInteger64(::Org::BouncyCastle::Math::BigInteger x) ;

/// @brief Method IsOne64 addr 0x100120c size 0x60 virtual false final false
static bool IsOne64(::ArrayW<uint64_t> x) ;

/// @brief Method IsZero64 addr 0x100126c size 0x4c virtual false final false
static bool IsZero64(::ArrayW<uint64_t> x) ;

/// @brief Method ToBigInteger64 addr 0x10012b8 size 0xe0 virtual false final false
static ::Org::BouncyCastle::Math::BigInteger ToBigInteger64(::ArrayW<uint64_t> x) ;

// Ctor Parameters []
explicit Nat320() ;

/// @brief Method .ctor addr 0x1001398 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Math::Raw
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Math::Raw::Nat320);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::Raw::Nat320, "Org.BouncyCastle.Math.Raw", "Nat320");
