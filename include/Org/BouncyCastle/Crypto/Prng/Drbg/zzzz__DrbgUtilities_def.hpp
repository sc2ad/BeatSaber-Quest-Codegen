#pragma once
#include "../../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace {
namespace Org::BouncyCastle::Crypto {
class IMac;
}
namespace System::Collections {
class IDictionary;
}
namespace Org::BouncyCastle::Crypto {
class IDigest;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Prng::Drbg {
class DrbgUtilities;
}
// Type: Org.BouncyCastle.Crypto.Prng.Drbg::DrbgUtilities
namespace Org::BouncyCastle::Crypto::Prng::Drbg {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1096))
// CS Name: Org.BouncyCastle.Crypto.Prng.Drbg.DrbgUtilities
class CORDL_TYPE DrbgUtilities : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~DrbgUtilities() = default;

// Ctor Parameters [CppParam { name: "", ty: "DrbgUtilities", modifiers: " const&", def_value: None }]
constexpr DrbgUtilities(DrbgUtilities const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DrbgUtilities", modifiers: "&&", def_value: None }]
constexpr DrbgUtilities(DrbgUtilities&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DrbgUtilities(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr DrbgUtilities& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DrbgUtilities& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DrbgUtilities& operator=(DrbgUtilities&& o) noexcept = default;
  constexpr DrbgUtilities& operator=(DrbgUtilities const& o) noexcept = default;
                


// Fields

static ::System::Collections::IDictionary __declspec(property(get=__get_maxSecurityStrengths, put=__set_maxSecurityStrengths))  maxSecurityStrengths;

static void __set_maxSecurityStrengths(::System::Collections::IDictionary value) ;

static ::System::Collections::IDictionary __get_maxSecurityStrengths() ;


// Methods

/// @brief Method GetMaxSecurityStrength addr 0xeb0b24 size 0x184 virtual false final false
static int32_t GetMaxSecurityStrength(::Org::BouncyCastle::Crypto::IDigest d) ;

/// @brief Method GetMaxSecurityStrength addr 0xeb0ca8 size 0x1cc virtual false final false
static int32_t GetMaxSecurityStrength(::Org::BouncyCastle::Crypto::IMac m) ;

/// @brief Method HashDF addr 0xeb0e74 size 0x514 virtual false final false
static ::ArrayW<uint8_t> HashDF(::Org::BouncyCastle::Crypto::IDigest digest, ::ArrayW<uint8_t> seedMaterial, int32_t seedLength) ;

/// @brief Method IsTooLarge addr 0xeb029c size 0x14 virtual false final false
static bool IsTooLarge(::ArrayW<uint8_t> bytes, int32_t maxBytes) ;

// Ctor Parameters []
explicit DrbgUtilities() ;

/// @brief Method .ctor addr 0xeb1388 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Prng::Drbg
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Prng::Drbg::DrbgUtilities);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Prng::Drbg::DrbgUtilities, "Org.BouncyCastle.Crypto.Prng.Drbg", "DrbgUtilities");
