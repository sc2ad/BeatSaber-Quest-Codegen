#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Crypto {
class IEntropySource;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Prng {
class EntropyUtilities;
}
// Type: Org.BouncyCastle.Crypto.Prng::EntropyUtilities
namespace Org::BouncyCastle::Crypto::Prng {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1108))
// CS Name: Org.BouncyCastle.Crypto.Prng.EntropyUtilities
class CORDL_TYPE EntropyUtilities : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~EntropyUtilities() = default;

// Ctor Parameters [CppParam { name: "", ty: "EntropyUtilities", modifiers: " const&", def_value: None }]
constexpr EntropyUtilities(EntropyUtilities const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "EntropyUtilities", modifiers: "&&", def_value: None }]
constexpr EntropyUtilities(EntropyUtilities&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit EntropyUtilities(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr EntropyUtilities& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr EntropyUtilities& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr EntropyUtilities& operator=(EntropyUtilities&& o) noexcept = default;
  constexpr EntropyUtilities& operator=(EntropyUtilities const& o) noexcept = default;
                


// Methods

/// @brief Method GenerateSeed addr 0xeb4678 size 0x15c virtual false final false
static ::ArrayW<uint8_t> GenerateSeed(Org::BouncyCastle::Crypto::IEntropySource entropySource, int32_t numBytes) ;

// Ctor Parameters []
explicit EntropyUtilities() ;

/// @brief Method .ctor addr 0xeb47d4 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Prng
NEED_NO_BOX(Org::BouncyCastle::Crypto::Prng::EntropyUtilities);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Prng::EntropyUtilities, "Org.BouncyCastle.Crypto.Prng", "EntropyUtilities");
