#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace System {
class Array;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Generators {
class SCrypt;
}
// Type: Org.BouncyCastle.Crypto.Generators::SCrypt
namespace Org::BouncyCastle::Crypto::Generators {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(924))
// CS Name: Org.BouncyCastle.Crypto.Generators.SCrypt
class CORDL_TYPE SCrypt : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~SCrypt() = default;

// Ctor Parameters [CppParam { name: "", ty: "SCrypt", modifiers: " const&", def_value: None }]
constexpr SCrypt(SCrypt const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SCrypt", modifiers: "&&", def_value: None }]
constexpr SCrypt(SCrypt&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SCrypt(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr SCrypt& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SCrypt& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SCrypt& operator=(SCrypt&& o) noexcept = default;
  constexpr SCrypt& operator=(SCrypt const& o) noexcept = default;
                


// Methods

/// @brief Method Generate addr 0xe7a1f0 size 0x334 virtual false final false
static ::ArrayW<uint8_t> Generate(::ArrayW<uint8_t> P, ::ArrayW<uint8_t> S, int32_t N, int32_t r, int32_t p, int32_t dkLen) ;

/// @brief Method MFcrypt addr 0xe7a534 size 0x1e8 virtual false final false
static ::ArrayW<uint8_t> MFcrypt(::ArrayW<uint8_t> P, ::ArrayW<uint8_t> S, int32_t N, int32_t r, int32_t p, int32_t dkLen) ;

/// @brief Method SingleIterationPBKDF2 addr 0xe7a71c size 0x114 virtual false final false
static ::ArrayW<uint8_t> SingleIterationPBKDF2(::ArrayW<uint8_t> P, ::ArrayW<uint8_t> S, int32_t dkLen) ;

/// @brief Method SMix addr 0xe7a830 size 0x3c4 virtual false final false
static void SMix(::ArrayW<uint32_t> B, int32_t BOff, int32_t N, int32_t d, int32_t r) ;

/// @brief Method BlockMix addr 0xe7abf4 size 0x11c virtual false final false
static void BlockMix(::ArrayW<uint32_t> B, ::ArrayW<uint32_t> X1, ::ArrayW<uint32_t> X2, ::ArrayW<uint32_t> Y, int32_t r) ;

/// @brief Method Xor addr 0xe7ad10 size 0x80 virtual false final false
static void Xor(::ArrayW<uint32_t> a, ::ArrayW<uint32_t> b, int32_t bOff, ::ArrayW<uint32_t> output) ;

/// @brief Method Clear addr 0xe7ad90 size 0x30 virtual false final false
static void Clear(System::Array array) ;

/// @brief Method ClearAll addr 0xe7adc0 size 0x5c virtual false final false
static void ClearAll(::ArrayW<System::Array> arrays) ;

/// @brief Method IsPowerOf2 addr 0xe7a524 size 0x10 virtual false final false
static bool IsPowerOf2(int32_t x) ;

// Ctor Parameters []
explicit SCrypt() ;

/// @brief Method .ctor addr 0xe7ae1c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Generators
NEED_NO_BOX(Org::BouncyCastle::Crypto::Generators::SCrypt);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Generators::SCrypt, "Org.BouncyCastle.Crypto.Generators", "SCrypt");
