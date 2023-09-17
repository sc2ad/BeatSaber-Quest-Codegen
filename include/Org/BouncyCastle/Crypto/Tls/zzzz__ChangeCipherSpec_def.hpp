#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace {
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class ChangeCipherSpec;
}
// Type: Org.BouncyCastle.Crypto.Tls::ChangeCipherSpec
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1196))
// CS Name: Org.BouncyCastle.Crypto.Tls.ChangeCipherSpec
class CORDL_TYPE ChangeCipherSpec : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~ChangeCipherSpec() = default;

// Ctor Parameters [CppParam { name: "", ty: "ChangeCipherSpec", modifiers: " const&", def_value: None }]
constexpr ChangeCipherSpec(ChangeCipherSpec const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ChangeCipherSpec", modifiers: "&&", def_value: None }]
constexpr ChangeCipherSpec(ChangeCipherSpec&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ChangeCipherSpec(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ChangeCipherSpec& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ChangeCipherSpec& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ChangeCipherSpec& operator=(ChangeCipherSpec&& o) noexcept = default;
  constexpr ChangeCipherSpec& operator=(ChangeCipherSpec const& o) noexcept = default;
                


// Fields

/// @brief Field change_cipher_spec offset 0
static constexpr uint8_t  change_cipher_spec{1u};


// Methods

// Ctor Parameters []
explicit ChangeCipherSpec() ;

/// @brief Method .ctor addr 0xed2ca8 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Tls
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::ChangeCipherSpec);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::ChangeCipherSpec, "Org.BouncyCastle.Crypto.Tls", "ChangeCipherSpec");
