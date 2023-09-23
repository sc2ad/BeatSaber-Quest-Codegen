#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class HeartbeatExtension;
}
// Type: Org.BouncyCastle.Crypto.Tls::HeartbeatExtension
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1247))
// CS Name: Org.BouncyCastle.Crypto.Tls.HeartbeatExtension
class CORDL_TYPE HeartbeatExtension : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~HeartbeatExtension() = default;

// Ctor Parameters [CppParam { name: "", ty: "HeartbeatExtension", modifiers: " const&", def_value: None }]
constexpr HeartbeatExtension(HeartbeatExtension const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HeartbeatExtension", modifiers: "&&", def_value: None }]
constexpr HeartbeatExtension(HeartbeatExtension&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HeartbeatExtension(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr HeartbeatExtension& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HeartbeatExtension& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HeartbeatExtension& operator=(HeartbeatExtension&& o) noexcept = default;
  constexpr HeartbeatExtension& operator=(HeartbeatExtension const& o) noexcept = default;
                


// Fields

 uint8_t __declspec(property(get=__get_mMode, put=__set_mMode))  mMode;

constexpr void __set_mMode(uint8_t value) ;

constexpr uint8_t __get_mMode() const;


// Properties

 uint8_t __declspec(property(get=get_Mode))  Mode;


// Methods

// Ctor Parameters [CppParam { name: "mode", ty: "uint8_t", modifiers: "", def_value: None }]
explicit HeartbeatExtension(uint8_t mode) ;

/// @brief Method .ctor addr 0xf0455c size 0x98 virtual false final false
 void _ctor(uint8_t mode) ;

/// @brief Method get_Mode addr 0xf04608 size 0x8 virtual true final false
 uint8_t get_Mode() ;

/// @brief Method Encode addr 0xf04610 size 0x6c virtual true final false
 void Encode(System::IO::Stream output) ;

/// @brief Method Parse addr 0xf0467c size 0xe4 virtual false final false
static Org::BouncyCastle::Crypto::Tls::HeartbeatExtension Parse(System::IO::Stream input) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(Org::BouncyCastle::Crypto::Tls::HeartbeatExtension);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Tls::HeartbeatExtension, "Org.BouncyCastle.Crypto.Tls", "HeartbeatExtension");
