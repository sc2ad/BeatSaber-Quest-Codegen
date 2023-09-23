#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
// Forward declare root types
namespace Org::BouncyCastle::Math::Raw {
class Nat512;
}
// Type: Org.BouncyCastle.Math.Raw::Nat512
namespace Org::BouncyCastle::Math::Raw {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1599))
// CS Name: Org.BouncyCastle.Math.Raw.Nat512
class CORDL_TYPE Nat512 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~Nat512() = default;

// Ctor Parameters [CppParam { name: "", ty: "Nat512", modifiers: " const&", def_value: None }]
constexpr Nat512(Nat512 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Nat512", modifiers: "&&", def_value: None }]
constexpr Nat512(Nat512&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Nat512(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Nat512& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Nat512& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Nat512& operator=(Nat512&& o) noexcept = default;
  constexpr Nat512& operator=(Nat512 const& o) noexcept = default;
                


// Methods

/// @brief Method Mul addr 0x1001bc0 size 0x140 virtual false final false
static void Mul(::ArrayW<uint32_t> x, ::ArrayW<uint32_t> y, ::ArrayW<uint32_t> zz) ;

/// @brief Method Square addr 0x1001d00 size 0xf0 virtual false final false
static void Square(::ArrayW<uint32_t> x, ::ArrayW<uint32_t> zz) ;

// Ctor Parameters []
explicit Nat512() ;

/// @brief Method .ctor addr 0x1001df0 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Math::Raw
NEED_NO_BOX(Org::BouncyCastle::Math::Raw::Nat512);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Math::Raw::Nat512, "Org.BouncyCastle.Math.Raw", "Nat512");
