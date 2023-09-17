#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Mono/Security/Protocol/Ntlm/zzzz__MessageBase_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
// Forward declare root types
namespace Mono::Security::Protocol::Ntlm {
class Type1Message;
}
// Type: Mono.Security.Protocol.Ntlm::Type1Message
namespace Mono::Security::Protocol::Ntlm {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13976))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13980))
// CS Name: Mono.Security.Protocol.Ntlm.Type1Message
class CORDL_TYPE Type1Message : public ::Mono::Security::Protocol::Ntlm::MessageBase {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~Type1Message() = default;

// Ctor Parameters [CppParam { name: "", ty: "Type1Message", modifiers: " const&", def_value: None }]
constexpr Type1Message(Type1Message const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Type1Message", modifiers: "&&", def_value: None }]
constexpr Type1Message(Type1Message&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Type1Message(void* ptr) noexcept : ::Mono::Security::Protocol::Ntlm::MessageBase(ptr) {
}


  constexpr Type1Message& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Type1Message& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Type1Message& operator=(Type1Message&& o) noexcept = default;
  constexpr Type1Message& operator=(Type1Message const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__host, put=__set__host))  _host;

constexpr void __set__host(::StringW value) ;

constexpr ::StringW __get__host() const;

 ::StringW __declspec(property(get=__get__domain, put=__set__domain))  _domain;

constexpr void __set__domain(::StringW value) ;

constexpr ::StringW __get__domain() const;


// Properties

 ::StringW __declspec(property(put=set_Domain))  Domain;

 ::StringW __declspec(property(put=set_Host))  Host;


// Methods

// Ctor Parameters []
explicit Type1Message() ;

/// @brief Method .ctor addr 0x2293df0 size 0x84 virtual false final false
 void _ctor() ;

/// @brief Method set_Domain addr 0x2293e74 size 0x80 virtual false final false
 void set_Domain(::StringW value) ;

/// @brief Method set_Host addr 0x2293ef4 size 0x80 virtual false final false
 void set_Host(::StringW value) ;

/// @brief Method Decode addr 0x2293f74 size 0xf0 virtual true final false
 void Decode(::ArrayW<uint8_t> message) ;

/// @brief Method GetBytes addr 0x2294064 size 0x24c virtual true final false
 ::ArrayW<uint8_t> GetBytes() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Mono::Security::Protocol::Ntlm
} // end anonymous namespace
NEED_NO_BOX(::Mono::Security::Protocol::Ntlm::Type1Message);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Security::Protocol::Ntlm::Type1Message, "Mono.Security.Protocol.Ntlm", "Type1Message");
