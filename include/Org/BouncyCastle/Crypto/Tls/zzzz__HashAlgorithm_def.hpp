#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class HashAlgorithm;
}
// Type: Org.BouncyCastle.Crypto.Tls::HashAlgorithm
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1246))
// CS Name: Org.BouncyCastle.Crypto.Tls.HashAlgorithm
class CORDL_TYPE HashAlgorithm : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~HashAlgorithm() = default;

// Ctor Parameters [CppParam { name: "", ty: "HashAlgorithm", modifiers: " const&", def_value: None }]
constexpr HashAlgorithm(HashAlgorithm const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HashAlgorithm", modifiers: "&&", def_value: None }]
constexpr HashAlgorithm(HashAlgorithm&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HashAlgorithm(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr HashAlgorithm& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HashAlgorithm& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HashAlgorithm& operator=(HashAlgorithm&& o) noexcept = default;
  constexpr HashAlgorithm& operator=(HashAlgorithm const& o) noexcept = default;
                


// Fields

/// @brief Field none offset 0
static constexpr uint8_t  none{0u};

/// @brief Field md5 offset 0
static constexpr uint8_t  md5{1u};

/// @brief Field sha1 offset 0
static constexpr uint8_t  sha1{2u};

/// @brief Field sha224 offset 0
static constexpr uint8_t  sha224{3u};

/// @brief Field sha256 offset 0
static constexpr uint8_t  sha256{4u};

/// @brief Field sha384 offset 0
static constexpr uint8_t  sha384{5u};

/// @brief Field sha512 offset 0
static constexpr uint8_t  sha512{6u};


// Methods

/// @brief Method GetName addr 0xf042fc size 0xb8 virtual false final false
static ::StringW GetName(uint8_t hashAlgorithm) ;

/// @brief Method GetText addr 0xf043b4 size 0x17c virtual false final false
static ::StringW GetText(uint8_t hashAlgorithm) ;

/// @brief Method IsPrivate addr 0xf04530 size 0x10 virtual false final false
static bool IsPrivate(uint8_t hashAlgorithm) ;

/// @brief Method IsRecognized addr 0xf04540 size 0x14 virtual false final false
static bool IsRecognized(uint8_t hashAlgorithm) ;

// Ctor Parameters []
explicit HashAlgorithm() ;

/// @brief Method .ctor addr 0xf04554 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Tls
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::HashAlgorithm);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::HashAlgorithm, "Org.BouncyCastle.Crypto.Tls", "HashAlgorithm");
