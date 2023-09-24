#pragma once
#include "../../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
// Forward declare root types
namespace Org::BouncyCastle::Math::EC::Rfc7748 {
class X448;
}
// Type: Org.BouncyCastle.Math.EC.Rfc7748::X448
namespace Org::BouncyCastle::Math::EC::Rfc7748 {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1554))
// CS Name: Org.BouncyCastle.Math.EC.Rfc7748.X448
class CORDL_TYPE X448 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~X448() = default;

// Ctor Parameters [CppParam { name: "", ty: "X448", modifiers: " const&", def_value: None }]
constexpr X448(X448 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "X448", modifiers: "&&", def_value: None }]
constexpr X448(X448&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit X448(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr X448& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr X448& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr X448& operator=(X448&& o) noexcept = default;
  constexpr X448& operator=(X448 const& o) noexcept = default;
                


// Fields

/// @brief Field PointSize offset 0
static constexpr int32_t  PointSize{56};

/// @brief Field ScalarSize offset 0
static constexpr int32_t  ScalarSize{56};

/// @brief Field C_A offset 0
static constexpr uint32_t  C_A{156326u};

/// @brief Field C_A24 offset 0
static constexpr uint32_t  C_A24{39082u};


// Methods

/// @brief Method CalculateAgreement addr 0xfb0b9c size 0xb4 virtual false final false
static bool CalculateAgreement(::ArrayW<uint8_t> k, int32_t kOff, ::ArrayW<uint8_t> u, int32_t uOff, ::ArrayW<uint8_t> r, int32_t rOff) ;

/// @brief Method Decode32 addr 0xfb0f48 size 0x68 virtual false final false
static uint32_t Decode32(::ArrayW<uint8_t> bs, int32_t off) ;

/// @brief Method DecodeScalar addr 0xfb0fb0 size 0x8c virtual false final false
static void DecodeScalar(::ArrayW<uint8_t> k, int32_t kOff, ::ArrayW<uint32_t> n) ;

/// @brief Method GeneratePrivateKey addr 0xfb103c size 0x54 virtual false final false
static void GeneratePrivateKey(Org::BouncyCastle::Security::SecureRandom random, ::ArrayW<uint8_t> k) ;

/// @brief Method GeneratePublicKey addr 0xfb1090 size 0x4 virtual false final false
static void GeneratePublicKey(::ArrayW<uint8_t> k, int32_t kOff, ::ArrayW<uint8_t> r, int32_t rOff) ;

/// @brief Method PointDouble addr 0xfb1178 size 0xb8 virtual false final false
static void PointDouble(::ArrayW<uint32_t> x, ::ArrayW<uint32_t> z) ;

/// @brief Method Precompute addr 0xfb2704 size 0x50 virtual false final false
static void Precompute() ;

/// @brief Method ScalarMult addr 0xfb0c50 size 0x2f8 virtual false final false
static void ScalarMult(::ArrayW<uint8_t> k, int32_t kOff, ::ArrayW<uint8_t> u, int32_t uOff, ::ArrayW<uint8_t> r, int32_t rOff) ;

/// @brief Method ScalarMultBase addr 0xfb1094 size 0xe4 virtual false final false
static void ScalarMultBase(::ArrayW<uint8_t> k, int32_t kOff, ::ArrayW<uint8_t> r, int32_t rOff) ;

static Org::BouncyCastle::Math::EC::Rfc7748::X448 New_ctor() ;

/// @brief Method .ctor addr 0xfb2a08 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Math::EC::Rfc7748
NEED_NO_BOX(Org::BouncyCastle::Math::EC::Rfc7748::X448);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Math::EC::Rfc7748::X448, "Org.BouncyCastle.Math.EC.Rfc7748", "X448");
