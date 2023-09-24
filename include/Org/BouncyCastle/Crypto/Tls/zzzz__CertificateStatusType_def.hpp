#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class CertificateStatusType;
}
// Type: Org.BouncyCastle.Crypto.Tls::CertificateStatusType
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1190))
// CS Name: Org.BouncyCastle.Crypto.Tls.CertificateStatusType
class CORDL_TYPE CertificateStatusType : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~CertificateStatusType() = default;

// Ctor Parameters [CppParam { name: "", ty: "CertificateStatusType", modifiers: " const&", def_value: None }]
constexpr CertificateStatusType(CertificateStatusType const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CertificateStatusType", modifiers: "&&", def_value: None }]
constexpr CertificateStatusType(CertificateStatusType&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CertificateStatusType(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr CertificateStatusType& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CertificateStatusType& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CertificateStatusType& operator=(CertificateStatusType&& o) noexcept = default;
  constexpr CertificateStatusType& operator=(CertificateStatusType const& o) noexcept = default;
                


// Fields

/// @brief Field ocsp offset 0
static constexpr uint8_t  ocsp{1u};


// Methods

static Org::BouncyCastle::Crypto::Tls::CertificateStatusType New_ctor() ;

/// @brief Method .ctor addr 0xed140c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(Org::BouncyCastle::Crypto::Tls::CertificateStatusType);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Tls::CertificateStatusType, "Org.BouncyCastle.Crypto.Tls", "CertificateStatusType");
