#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class MaxFragmentLength;
}
// Type: Org.BouncyCastle.Crypto.Tls::MaxFragmentLength
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1254))
// CS Name: Org.BouncyCastle.Crypto.Tls.MaxFragmentLength
class CORDL_TYPE MaxFragmentLength : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~MaxFragmentLength() = default;

// Ctor Parameters [CppParam { name: "", ty: "MaxFragmentLength", modifiers: " const&", def_value: None }]
constexpr MaxFragmentLength(MaxFragmentLength const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MaxFragmentLength", modifiers: "&&", def_value: None }]
constexpr MaxFragmentLength(MaxFragmentLength&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MaxFragmentLength(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr MaxFragmentLength& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MaxFragmentLength& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MaxFragmentLength& operator=(MaxFragmentLength&& o) noexcept = default;
  constexpr MaxFragmentLength& operator=(MaxFragmentLength const& o) noexcept = default;
                


// Fields

/// @brief Field pow2_9 offset 0
static constexpr uint8_t  pow2_9{1u};

/// @brief Field pow2_10 offset 0
static constexpr uint8_t  pow2_10{2u};

/// @brief Field pow2_11 offset 0
static constexpr uint8_t  pow2_11{3u};

/// @brief Field pow2_12 offset 0
static constexpr uint8_t  pow2_12{4u};


// Methods

/// @brief Method IsValid addr 0xf04d38 size 0x14 virtual false final false
static bool IsValid(uint8_t maxFragmentLength) ;

static Org::BouncyCastle::Crypto::Tls::MaxFragmentLength New_ctor() ;

/// @brief Method .ctor addr 0xf04d4c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(Org::BouncyCastle::Crypto::Tls::MaxFragmentLength);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Tls::MaxFragmentLength, "Org.BouncyCastle.Crypto.Tls", "MaxFragmentLength");
