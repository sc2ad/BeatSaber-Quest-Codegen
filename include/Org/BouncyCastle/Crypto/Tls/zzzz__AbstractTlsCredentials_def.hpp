#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace Org::BouncyCastle::Crypto::Tls {
class TlsCredentials;
}
namespace Org::BouncyCastle::Crypto::Tls {
class Certificate;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class AbstractTlsCredentials;
}
// Type: Org.BouncyCastle.Crypto.Tls::AbstractTlsCredentials
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1157))
// CS Name: Org.BouncyCastle.Crypto.Tls.AbstractTlsCredentials
class CORDL_TYPE AbstractTlsCredentials : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to Org::BouncyCastle::Crypto::Tls::TlsCredentials
constexpr operator  Org::BouncyCastle::Crypto::Tls::TlsCredentials() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~AbstractTlsCredentials() = default;

// Ctor Parameters [CppParam { name: "", ty: "AbstractTlsCredentials", modifiers: " const&", def_value: None }]
constexpr AbstractTlsCredentials(AbstractTlsCredentials const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AbstractTlsCredentials", modifiers: "&&", def_value: None }]
constexpr AbstractTlsCredentials(AbstractTlsCredentials&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AbstractTlsCredentials(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr AbstractTlsCredentials& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AbstractTlsCredentials& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AbstractTlsCredentials& operator=(AbstractTlsCredentials&& o) noexcept = default;
  constexpr AbstractTlsCredentials& operator=(AbstractTlsCredentials const& o) noexcept = default;
                


// Properties

 Org::BouncyCastle::Crypto::Tls::Certificate __declspec(property(get=get_Certificate))  Certificate;


// Methods

/// @brief Method get_Certificate addr 0x0 size 0xffffffffffffffff virtual true final false
 Org::BouncyCastle::Crypto::Tls::Certificate get_Certificate() ;

static Org::BouncyCastle::Crypto::Tls::AbstractTlsCredentials New_ctor() ;

/// @brief Method .ctor addr 0xecb198 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(Org::BouncyCastle::Crypto::Tls::AbstractTlsCredentials);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Tls::AbstractTlsCredentials, "Org.BouncyCastle.Crypto.Tls", "AbstractTlsCredentials");
