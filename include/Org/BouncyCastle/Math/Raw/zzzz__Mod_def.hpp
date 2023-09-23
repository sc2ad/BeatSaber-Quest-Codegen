#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
// Forward declare root types
namespace Org::BouncyCastle::Math::Raw {
class Mod;
}
// Type: Org.BouncyCastle.Math.Raw::Mod
namespace Org::BouncyCastle::Math::Raw {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1589))
// CS Name: Org.BouncyCastle.Math.Raw.Mod
class CORDL_TYPE Mod : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~Mod() = default;

// Ctor Parameters [CppParam { name: "", ty: "Mod", modifiers: " const&", def_value: None }]
constexpr Mod(Mod const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Mod", modifiers: "&&", def_value: None }]
constexpr Mod(Mod&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Mod(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Mod& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Mod& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Mod& operator=(Mod&& o) noexcept = default;
  constexpr Mod& operator=(Mod const& o) noexcept = default;
                


// Fields

static Org::BouncyCastle::Security::SecureRandom __declspec(property(get=__get_RandomSource, put=__set_RandomSource))  RandomSource;

static void __set_RandomSource(Org::BouncyCastle::Security::SecureRandom value) ;

static Org::BouncyCastle::Security::SecureRandom __get_RandomSource() ;


// Methods

/// @brief Method Invert addr 0xfcee28 size 0x3c4 virtual false final false
static void Invert(::ArrayW<uint32_t> p, ::ArrayW<uint32_t> x, ::ArrayW<uint32_t> z) ;

/// @brief Method Random addr 0xfcf5b4 size 0x158 virtual false final false
static ::ArrayW<uint32_t> Random(::ArrayW<uint32_t> p) ;

/// @brief Method Add addr 0xfcf70c size 0x4c virtual false final false
static void Add(::ArrayW<uint32_t> p, ::ArrayW<uint32_t> x, ::ArrayW<uint32_t> y, ::ArrayW<uint32_t> z) ;

/// @brief Method Subtract addr 0xfcf7ec size 0x4c virtual false final false
static void Subtract(::ArrayW<uint32_t> p, ::ArrayW<uint32_t> x, ::ArrayW<uint32_t> y, ::ArrayW<uint32_t> z) ;

/// @brief Method InversionResult addr 0xfcf484 size 0x48 virtual false final false
static void InversionResult(::ArrayW<uint32_t> p, int32_t ac, ::ArrayW<uint32_t> a, ::ArrayW<uint32_t> z) ;

/// @brief Method InversionStep addr 0xfcf374 size 0x110 virtual false final false
static void InversionStep(::ArrayW<uint32_t> p, ::ArrayW<uint32_t> u, int32_t uLen, ::ArrayW<uint32_t> x, ByRef<int32_t> xc) ;

// Ctor Parameters []
explicit Mod() ;

/// @brief Method .ctor addr 0xfcfae0 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Math::Raw
NEED_NO_BOX(Org::BouncyCastle::Math::Raw::Mod);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Math::Raw::Mod, "Org.BouncyCastle.Math.Raw", "Mod");
