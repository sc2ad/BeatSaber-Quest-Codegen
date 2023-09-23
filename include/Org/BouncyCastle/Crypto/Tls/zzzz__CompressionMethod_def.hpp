#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class CompressionMethod;
}
// Type: Org.BouncyCastle.Crypto.Tls::CompressionMethod
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1203))
// CS Name: Org.BouncyCastle.Crypto.Tls.CompressionMethod
class CORDL_TYPE CompressionMethod : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~CompressionMethod() = default;

// Ctor Parameters [CppParam { name: "", ty: "CompressionMethod", modifiers: " const&", def_value: None }]
constexpr CompressionMethod(CompressionMethod const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CompressionMethod", modifiers: "&&", def_value: None }]
constexpr CompressionMethod(CompressionMethod&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CompressionMethod(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr CompressionMethod& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CompressionMethod& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CompressionMethod& operator=(CompressionMethod&& o) noexcept = default;
  constexpr CompressionMethod& operator=(CompressionMethod const& o) noexcept = default;
                


// Fields

/// @brief Field cls_null offset 0
static constexpr uint8_t  cls_null{0u};

/// @brief Field DEFLATE offset 0
static constexpr uint8_t  DEFLATE{1u};


// Methods

// Ctor Parameters []
explicit CompressionMethod() ;

/// @brief Method .ctor addr 0xed3b88 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(Org::BouncyCastle::Crypto::Tls::CompressionMethod);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Tls::CompressionMethod, "Org.BouncyCastle.Crypto.Tls", "CompressionMethod");
