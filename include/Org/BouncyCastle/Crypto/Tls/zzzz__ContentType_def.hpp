#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class ContentType;
}
// Type: Org.BouncyCastle.Crypto.Tls::ContentType
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1205))
// CS Name: Org.BouncyCastle.Crypto.Tls.ContentType
class CORDL_TYPE ContentType : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~ContentType() = default;

// Ctor Parameters [CppParam { name: "", ty: "ContentType", modifiers: " const&", def_value: None }]
constexpr ContentType(ContentType const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ContentType", modifiers: "&&", def_value: None }]
constexpr ContentType(ContentType&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ContentType(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ContentType& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ContentType& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ContentType& operator=(ContentType&& o) noexcept = default;
  constexpr ContentType& operator=(ContentType const& o) noexcept = default;
                


// Fields

/// @brief Field change_cipher_spec offset 0
static constexpr uint8_t  change_cipher_spec{20u};

/// @brief Field alert offset 0
static constexpr uint8_t  alert{21u};

/// @brief Field handshake offset 0
static constexpr uint8_t  handshake{22u};

/// @brief Field application_data offset 0
static constexpr uint8_t  application_data{23u};

/// @brief Field heartbeat offset 0
static constexpr uint8_t  heartbeat{24u};


// Methods

// Ctor Parameters []
explicit ContentType() ;

/// @brief Method .ctor addr 0xed3b98 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(Org::BouncyCastle::Crypto::Tls::ContentType);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Tls::ContentType, "Org.BouncyCastle.Crypto.Tls", "ContentType");
