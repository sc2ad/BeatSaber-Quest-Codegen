#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class CipherType;
}
// Type: Org.BouncyCastle.Crypto.Tls::CipherType
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1198))
// CS Name: Org.BouncyCastle.Crypto.Tls.CipherType
class CORDL_TYPE CipherType : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~CipherType() = default;

// Ctor Parameters [CppParam { name: "", ty: "CipherType", modifiers: " const&", def_value: None }]
constexpr CipherType(CipherType const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CipherType", modifiers: "&&", def_value: None }]
constexpr CipherType(CipherType&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CipherType(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr CipherType& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CipherType& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CipherType& operator=(CipherType&& o) noexcept = default;
  constexpr CipherType& operator=(CipherType const& o) noexcept = default;
                


// Fields

/// @brief Field stream offset 0
static constexpr int32_t  stream{0};

/// @brief Field block offset 0
static constexpr int32_t  block{1};

/// @brief Field aead offset 0
static constexpr int32_t  aead{2};


// Methods

static Org::BouncyCastle::Crypto::Tls::CipherType New_ctor() ;

/// @brief Method .ctor addr 0xed2cd8 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(Org::BouncyCastle::Crypto::Tls::CipherType);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Tls::CipherType, "Org.BouncyCastle.Crypto.Tls", "CipherType");
