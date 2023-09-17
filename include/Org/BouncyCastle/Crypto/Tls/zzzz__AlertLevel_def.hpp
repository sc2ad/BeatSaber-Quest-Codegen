#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class AlertLevel;
}
// Type: Org.BouncyCastle.Crypto.Tls::AlertLevel
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1179))
// CS Name: Org.BouncyCastle.Crypto.Tls.AlertLevel
class CORDL_TYPE AlertLevel : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~AlertLevel() = default;

// Ctor Parameters [CppParam { name: "", ty: "AlertLevel", modifiers: " const&", def_value: None }]
constexpr AlertLevel(AlertLevel const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AlertLevel", modifiers: "&&", def_value: None }]
constexpr AlertLevel(AlertLevel&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AlertLevel(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr AlertLevel& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AlertLevel& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AlertLevel& operator=(AlertLevel&& o) noexcept = default;
  constexpr AlertLevel& operator=(AlertLevel const& o) noexcept = default;
                


// Fields

/// @brief Field warning offset 0
static constexpr uint8_t  warning{1u};

/// @brief Field fatal offset 0
static constexpr uint8_t  fatal{2u};


// Methods

/// @brief Method GetName addr 0xecde40 size 0xa8 virtual false final false
static ::StringW GetName(uint8_t alertDescription) ;

/// @brief Method GetText addr 0xecdee8 size 0x17c virtual false final false
static ::StringW GetText(uint8_t alertDescription) ;

// Ctor Parameters []
explicit AlertLevel() ;

/// @brief Method .ctor addr 0xece064 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Tls
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::AlertLevel);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::AlertLevel, "Org.BouncyCastle.Crypto.Tls", "AlertLevel");
