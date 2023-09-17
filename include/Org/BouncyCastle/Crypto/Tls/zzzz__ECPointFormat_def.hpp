#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace {
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class ECPointFormat;
}
// Type: Org.BouncyCastle.Crypto.Tls::ECPointFormat
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1240))
// CS Name: Org.BouncyCastle.Crypto.Tls.ECPointFormat
class CORDL_TYPE ECPointFormat : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~ECPointFormat() = default;

// Ctor Parameters [CppParam { name: "", ty: "ECPointFormat", modifiers: " const&", def_value: None }]
constexpr ECPointFormat(ECPointFormat const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ECPointFormat", modifiers: "&&", def_value: None }]
constexpr ECPointFormat(ECPointFormat&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ECPointFormat(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ECPointFormat& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ECPointFormat& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ECPointFormat& operator=(ECPointFormat&& o) noexcept = default;
  constexpr ECPointFormat& operator=(ECPointFormat const& o) noexcept = default;
                


// Fields

/// @brief Field uncompressed offset 0
static constexpr uint8_t  uncompressed{0u};

/// @brief Field ansiX962_compressed_prime offset 0
static constexpr uint8_t  ansiX962_compressed_prime{1u};

/// @brief Field ansiX962_compressed_char2 offset 0
static constexpr uint8_t  ansiX962_compressed_char2{2u};


// Methods

// Ctor Parameters []
explicit ECPointFormat() ;

/// @brief Method .ctor addr 0xf0420c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Tls
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::ECPointFormat);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::ECPointFormat, "Org.BouncyCastle.Crypto.Tls", "ECPointFormat");
