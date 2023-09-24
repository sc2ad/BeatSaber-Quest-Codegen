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
class X25519;
}
// Type: Org.BouncyCastle.Math.EC.Rfc7748::X25519
namespace Org::BouncyCastle::Math::EC::Rfc7748 {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1552))
// CS Name: Org.BouncyCastle.Math.EC.Rfc7748.X25519
class CORDL_TYPE X25519 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~X25519() = default;

// Ctor Parameters [CppParam { name: "", ty: "X25519", modifiers: " const&", def_value: None }]
constexpr X25519(X25519 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "X25519", modifiers: "&&", def_value: None }]
constexpr X25519(X25519&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit X25519(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr X25519& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr X25519& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr X25519& operator=(X25519&& o) noexcept = default;
  constexpr X25519& operator=(X25519 const& o) noexcept = default;
                


// Fields

/// @brief Field PointSize offset 0
static constexpr int32_t  PointSize{32};

/// @brief Field ScalarSize offset 0
static constexpr int32_t  ScalarSize{32};

/// @brief Field C_A offset 0
static constexpr int32_t  C_A{486662};

/// @brief Field C_A24 offset 0
static constexpr int32_t  C_A24{121666};


// Methods

/// @brief Method CalculateAgreement addr 0xfade84 size 0xb4 virtual false final false
static bool CalculateAgreement(::ArrayW<uint8_t> k, int32_t kOff, ::ArrayW<uint8_t> u, int32_t uOff, ::ArrayW<uint8_t> r, int32_t rOff) ;

/// @brief Method Decode32 addr 0xfae25c size 0x68 virtual false final false
static uint32_t Decode32(::ArrayW<uint8_t> bs, int32_t off) ;

/// @brief Method DecodeScalar addr 0xfae2c4 size 0x90 virtual false final false
static void DecodeScalar(::ArrayW<uint8_t> k, int32_t kOff, ::ArrayW<uint32_t> n) ;

/// @brief Method GeneratePrivateKey addr 0xfae354 size 0x58 virtual false final false
static void GeneratePrivateKey(Org::BouncyCastle::Security::SecureRandom random, ::ArrayW<uint8_t> k) ;

/// @brief Method GeneratePublicKey addr 0xfae3ac size 0x4 virtual false final false
static void GeneratePublicKey(::ArrayW<uint8_t> k, int32_t kOff, ::ArrayW<uint8_t> r, int32_t rOff) ;

/// @brief Method PointDouble addr 0xfae4ac size 0xe8 virtual false final false
static void PointDouble(::ArrayW<int32_t> x, ::ArrayW<int32_t> z) ;

/// @brief Method Precompute addr 0xfaf16c size 0x4c virtual false final false
static void Precompute() ;

/// @brief Method ScalarMult addr 0xfadf38 size 0x324 virtual false final false
static void ScalarMult(::ArrayW<uint8_t> k, int32_t kOff, ::ArrayW<uint8_t> u, int32_t uOff, ::ArrayW<uint8_t> r, int32_t rOff) ;

/// @brief Method ScalarMultBase addr 0xfae3b0 size 0xfc virtual false final false
static void ScalarMultBase(::ArrayW<uint8_t> k, int32_t kOff, ::ArrayW<uint8_t> r, int32_t rOff) ;

static Org::BouncyCastle::Math::EC::Rfc7748::X25519 New_ctor() ;

/// @brief Method .ctor addr 0xfafe60 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Math::EC::Rfc7748
NEED_NO_BOX(Org::BouncyCastle::Math::EC::Rfc7748::X25519);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Math::EC::Rfc7748::X25519, "Org.BouncyCastle.Math.EC.Rfc7748", "X25519");
