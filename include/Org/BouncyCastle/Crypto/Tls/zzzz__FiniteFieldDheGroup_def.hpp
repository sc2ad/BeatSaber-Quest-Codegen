#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class FiniteFieldDheGroup;
}
// Type: Org.BouncyCastle.Crypto.Tls::FiniteFieldDheGroup
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1244))
// CS Name: Org.BouncyCastle.Crypto.Tls.FiniteFieldDheGroup
class CORDL_TYPE FiniteFieldDheGroup : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~FiniteFieldDheGroup() = default;

// Ctor Parameters [CppParam { name: "", ty: "FiniteFieldDheGroup", modifiers: " const&", def_value: None }]
constexpr FiniteFieldDheGroup(FiniteFieldDheGroup const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "FiniteFieldDheGroup", modifiers: "&&", def_value: None }]
constexpr FiniteFieldDheGroup(FiniteFieldDheGroup&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit FiniteFieldDheGroup(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr FiniteFieldDheGroup& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr FiniteFieldDheGroup& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr FiniteFieldDheGroup& operator=(FiniteFieldDheGroup&& o) noexcept = default;
  constexpr FiniteFieldDheGroup& operator=(FiniteFieldDheGroup const& o) noexcept = default;
                


// Fields

/// @brief Field ffdhe2432 offset 0
static constexpr uint8_t  ffdhe2432{0u};

/// @brief Field ffdhe3072 offset 0
static constexpr uint8_t  ffdhe3072{1u};

/// @brief Field ffdhe4096 offset 0
static constexpr uint8_t  ffdhe4096{2u};

/// @brief Field ffdhe6144 offset 0
static constexpr uint8_t  ffdhe6144{3u};

/// @brief Field ffdhe8192 offset 0
static constexpr uint8_t  ffdhe8192{4u};


// Methods

/// @brief Method IsValid addr 0xf042dc size 0x10 virtual false final false
static bool IsValid(uint8_t group) ;

static Org::BouncyCastle::Crypto::Tls::FiniteFieldDheGroup New_ctor() ;

/// @brief Method .ctor addr 0xf042ec size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(Org::BouncyCastle::Crypto::Tls::FiniteFieldDheGroup);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Tls::FiniteFieldDheGroup, "Org.BouncyCastle.Crypto.Tls", "FiniteFieldDheGroup");
