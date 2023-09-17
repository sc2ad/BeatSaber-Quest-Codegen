#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace {
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class SignatureAlgorithm;
}
// Type: Org.BouncyCastle.Crypto.Tls::SignatureAlgorithm
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1274))
// CS Name: Org.BouncyCastle.Crypto.Tls.SignatureAlgorithm
class CORDL_TYPE SignatureAlgorithm : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~SignatureAlgorithm() = default;

// Ctor Parameters [CppParam { name: "", ty: "SignatureAlgorithm", modifiers: " const&", def_value: None }]
constexpr SignatureAlgorithm(SignatureAlgorithm const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SignatureAlgorithm", modifiers: "&&", def_value: None }]
constexpr SignatureAlgorithm(SignatureAlgorithm&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SignatureAlgorithm(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr SignatureAlgorithm& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SignatureAlgorithm& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SignatureAlgorithm& operator=(SignatureAlgorithm&& o) noexcept = default;
  constexpr SignatureAlgorithm& operator=(SignatureAlgorithm const& o) noexcept = default;
                


// Fields

/// @brief Field anonymous offset 0
static constexpr uint8_t  anonymous{0u};

/// @brief Field rsa offset 0
static constexpr uint8_t  rsa{1u};

/// @brief Field dsa offset 0
static constexpr uint8_t  dsa{2u};

/// @brief Field ecdsa offset 0
static constexpr uint8_t  ecdsa{3u};


// Methods

// Ctor Parameters []
explicit SignatureAlgorithm() ;

/// @brief Method .ctor addr 0xf094b0 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Tls
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::SignatureAlgorithm);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::SignatureAlgorithm, "Org.BouncyCastle.Crypto.Tls", "SignatureAlgorithm");
