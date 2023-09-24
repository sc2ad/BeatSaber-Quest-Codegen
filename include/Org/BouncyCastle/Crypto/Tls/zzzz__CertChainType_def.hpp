#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class CertChainType;
}
// Type: Org.BouncyCastle.Crypto.Tls::CertChainType
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1185))
// CS Name: Org.BouncyCastle.Crypto.Tls.CertChainType
class CORDL_TYPE CertChainType : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~CertChainType() = default;

// Ctor Parameters [CppParam { name: "", ty: "CertChainType", modifiers: " const&", def_value: None }]
constexpr CertChainType(CertChainType const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CertChainType", modifiers: "&&", def_value: None }]
constexpr CertChainType(CertChainType&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CertChainType(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr CertChainType& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CertChainType& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CertChainType& operator=(CertChainType&& o) noexcept = default;
  constexpr CertChainType& operator=(CertChainType const& o) noexcept = default;
                


// Fields

/// @brief Field individual_certs offset 0
static constexpr uint8_t  individual_certs{0u};

/// @brief Field pkipath offset 0
static constexpr uint8_t  pkipath{1u};


// Methods

/// @brief Method IsValid addr 0xecf2f8 size 0x10 virtual false final false
static bool IsValid(uint8_t certChainType) ;

static Org::BouncyCastle::Crypto::Tls::CertChainType New_ctor() ;

/// @brief Method .ctor addr 0xecf308 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(Org::BouncyCastle::Crypto::Tls::CertChainType);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Tls::CertChainType, "Org.BouncyCastle.Crypto.Tls", "CertChainType");
