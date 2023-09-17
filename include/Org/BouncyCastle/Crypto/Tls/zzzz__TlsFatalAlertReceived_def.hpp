#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsException_def.hpp"
#include <cstdint>
namespace {
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class TlsFatalAlertReceived;
}
// Type: Org.BouncyCastle.Crypto.Tls::TlsFatalAlertReceived
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1307))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1310))
// CS Name: Org.BouncyCastle.Crypto.Tls.TlsFatalAlertReceived
class CORDL_TYPE TlsFatalAlertReceived : public ::Org::BouncyCastle::Crypto::Tls::TlsException {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x90};

virtual ~TlsFatalAlertReceived() = default;

// Ctor Parameters [CppParam { name: "", ty: "TlsFatalAlertReceived", modifiers: " const&", def_value: None }]
constexpr TlsFatalAlertReceived(TlsFatalAlertReceived const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TlsFatalAlertReceived", modifiers: "&&", def_value: None }]
constexpr TlsFatalAlertReceived(TlsFatalAlertReceived&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TlsFatalAlertReceived(void* ptr) noexcept : ::Org::BouncyCastle::Crypto::Tls::TlsException(ptr) {
}


  constexpr TlsFatalAlertReceived& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TlsFatalAlertReceived& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TlsFatalAlertReceived& operator=(TlsFatalAlertReceived&& o) noexcept = default;
  constexpr TlsFatalAlertReceived& operator=(TlsFatalAlertReceived const& o) noexcept = default;
                


// Fields

 uint8_t __declspec(property(get=__get_alertDescription, put=__set_alertDescription))  alertDescription;

constexpr void __set_alertDescription(uint8_t value) ;

constexpr uint8_t __get_alertDescription() const;


// Properties

 uint8_t __declspec(property(get=get_AlertDescription))  AlertDescription;


// Methods

// Ctor Parameters [CppParam { name: "alertDescription", ty: "uint8_t", modifiers: "", def_value: None }]
explicit TlsFatalAlertReceived(uint8_t alertDescription) ;

/// @brief Method .ctor addr 0xf20e6c size 0x40 virtual false final false
 void _ctor(uint8_t alertDescription) ;

/// @brief Method get_AlertDescription addr 0xf20eac size 0x8 virtual true final false
 uint8_t get_AlertDescription() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Tls
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::TlsFatalAlertReceived);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::TlsFatalAlertReceived, "Org.BouncyCastle.Crypto.Tls", "TlsFatalAlertReceived");
