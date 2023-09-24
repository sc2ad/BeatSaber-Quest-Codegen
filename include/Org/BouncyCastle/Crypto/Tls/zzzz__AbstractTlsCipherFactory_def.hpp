#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Crypto::Tls {
class TlsContext;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsCipher;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsCipherFactory;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class AbstractTlsCipherFactory;
}
// Type: Org.BouncyCastle.Crypto.Tls::AbstractTlsCipherFactory
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1161))
// CS Name: Org.BouncyCastle.Crypto.Tls.AbstractTlsCipherFactory
class CORDL_TYPE AbstractTlsCipherFactory : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to Org::BouncyCastle::Crypto::Tls::TlsCipherFactory
constexpr operator  Org::BouncyCastle::Crypto::Tls::TlsCipherFactory() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~AbstractTlsCipherFactory() = default;

// Ctor Parameters [CppParam { name: "", ty: "AbstractTlsCipherFactory", modifiers: " const&", def_value: None }]
constexpr AbstractTlsCipherFactory(AbstractTlsCipherFactory const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AbstractTlsCipherFactory", modifiers: "&&", def_value: None }]
constexpr AbstractTlsCipherFactory(AbstractTlsCipherFactory&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AbstractTlsCipherFactory(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr AbstractTlsCipherFactory& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AbstractTlsCipherFactory& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AbstractTlsCipherFactory& operator=(AbstractTlsCipherFactory&& o) noexcept = default;
  constexpr AbstractTlsCipherFactory& operator=(AbstractTlsCipherFactory const& o) noexcept = default;
                


// Methods

/// @brief Method CreateCipher addr 0xecb1a8 size 0x44 virtual true final false
 Org::BouncyCastle::Crypto::Tls::TlsCipher CreateCipher(Org::BouncyCastle::Crypto::Tls::TlsContext context, int32_t encryptionAlgorithm, int32_t macAlgorithm) ;

static Org::BouncyCastle::Crypto::Tls::AbstractTlsCipherFactory New_ctor() ;

/// @brief Method .ctor addr 0xecb1ec size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(Org::BouncyCastle::Crypto::Tls::AbstractTlsCipherFactory);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Tls::AbstractTlsCipherFactory, "Org.BouncyCastle.Crypto.Tls", "AbstractTlsCipherFactory");
