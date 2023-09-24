#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class NewSessionTicket;
}
// Type: Org.BouncyCastle.Crypto.Tls::NewSessionTicket
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1257))
// CS Name: Org.BouncyCastle.Crypto.Tls.NewSessionTicket
class CORDL_TYPE NewSessionTicket : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~NewSessionTicket() = default;

// Ctor Parameters [CppParam { name: "", ty: "NewSessionTicket", modifiers: " const&", def_value: None }]
constexpr NewSessionTicket(NewSessionTicket const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "NewSessionTicket", modifiers: "&&", def_value: None }]
constexpr NewSessionTicket(NewSessionTicket&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit NewSessionTicket(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr NewSessionTicket& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr NewSessionTicket& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr NewSessionTicket& operator=(NewSessionTicket&& o) noexcept = default;
  constexpr NewSessionTicket& operator=(NewSessionTicket const& o) noexcept = default;
                


// Fields

 int64_t __declspec(property(get=__get_mTicketLifetimeHint, put=__set_mTicketLifetimeHint))  mTicketLifetimeHint;

constexpr void __set_mTicketLifetimeHint(int64_t value) ;

constexpr int64_t __get_mTicketLifetimeHint() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_mTicket, put=__set_mTicket))  mTicket;

constexpr void __set_mTicket(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_mTicket() const;


// Properties

 int64_t __declspec(property(get=get_TicketLifetimeHint))  TicketLifetimeHint;

 ::ArrayW<uint8_t> __declspec(property(get=get_Ticket))  Ticket;


// Methods

static Org::BouncyCastle::Crypto::Tls::NewSessionTicket New_ctor(int64_t ticketLifetimeHint, ::ArrayW<uint8_t> ticket) ;

/// @brief Method .ctor addr 0xf04dac size 0x2c virtual false final false
 void _ctor(int64_t ticketLifetimeHint, ::ArrayW<uint8_t> ticket) ;

/// @brief Method get_TicketLifetimeHint addr 0xf04dd8 size 0x8 virtual true final false
 int64_t get_TicketLifetimeHint() ;

/// @brief Method get_Ticket addr 0xf04de0 size 0x8 virtual true final false
 ::ArrayW<uint8_t> get_Ticket() ;

/// @brief Method Encode addr 0xf04de8 size 0x7c virtual true final false
 void Encode(System::IO::Stream output) ;

/// @brief Method Parse addr 0xf04e64 size 0xac virtual false final false
static Org::BouncyCastle::Crypto::Tls::NewSessionTicket Parse(System::IO::Stream input) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(Org::BouncyCastle::Crypto::Tls::NewSessionTicket);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Tls::NewSessionTicket, "Org.BouncyCastle.Crypto.Tls", "NewSessionTicket");
