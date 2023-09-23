#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Crypto::Tls {
class TlsPskIdentity;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class BasicTlsPskIdentity;
}
// Type: Org.BouncyCastle.Crypto.Tls::BasicTlsPskIdentity
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1181))
// CS Name: Org.BouncyCastle.Crypto.Tls.BasicTlsPskIdentity
class CORDL_TYPE BasicTlsPskIdentity : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to Org::BouncyCastle::Crypto::Tls::TlsPskIdentity
constexpr operator  Org::BouncyCastle::Crypto::Tls::TlsPskIdentity() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~BasicTlsPskIdentity() = default;

// Ctor Parameters [CppParam { name: "", ty: "BasicTlsPskIdentity", modifiers: " const&", def_value: None }]
constexpr BasicTlsPskIdentity(BasicTlsPskIdentity const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BasicTlsPskIdentity", modifiers: "&&", def_value: None }]
constexpr BasicTlsPskIdentity(BasicTlsPskIdentity&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BasicTlsPskIdentity(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr BasicTlsPskIdentity& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BasicTlsPskIdentity& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BasicTlsPskIdentity& operator=(BasicTlsPskIdentity&& o) noexcept = default;
  constexpr BasicTlsPskIdentity& operator=(BasicTlsPskIdentity const& o) noexcept = default;
                


// Fields

 ::ArrayW<uint8_t> __declspec(property(get=__get_mIdentity, put=__set_mIdentity))  mIdentity;

constexpr void __set_mIdentity(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_mIdentity() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_mPsk, put=__set_mPsk))  mPsk;

constexpr void __set_mPsk(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_mPsk() const;


// Methods

// Ctor Parameters [CppParam { name: "identity", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "psk", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
explicit BasicTlsPskIdentity(::ArrayW<uint8_t> identity, ::ArrayW<uint8_t> psk) ;

/// @brief Method .ctor addr 0xece06c size 0x8c virtual false final false
 void _ctor(::ArrayW<uint8_t> identity, ::ArrayW<uint8_t> psk) ;

// Ctor Parameters [CppParam { name: "identity", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "psk", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
explicit BasicTlsPskIdentity(::StringW identity, ::ArrayW<uint8_t> psk) ;

/// @brief Method .ctor addr 0xece0f8 size 0x8c virtual false final false
 void _ctor(::StringW identity, ::ArrayW<uint8_t> psk) ;

/// @brief Method SkipIdentityHint addr 0xece184 size 0x4 virtual true final false
 void SkipIdentityHint() ;

/// @brief Method NotifyIdentityHint addr 0xece188 size 0x4 virtual true final false
 void NotifyIdentityHint(::ArrayW<uint8_t> psk_identity_hint) ;

/// @brief Method GetPskIdentity addr 0xece18c size 0x8 virtual true final false
 ::ArrayW<uint8_t> GetPskIdentity() ;

/// @brief Method GetPsk addr 0xece194 size 0x5c virtual true final false
 ::ArrayW<uint8_t> GetPsk() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(Org::BouncyCastle::Crypto::Tls::BasicTlsPskIdentity);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Tls::BasicTlsPskIdentity, "Org.BouncyCastle.Crypto.Tls", "BasicTlsPskIdentity");
