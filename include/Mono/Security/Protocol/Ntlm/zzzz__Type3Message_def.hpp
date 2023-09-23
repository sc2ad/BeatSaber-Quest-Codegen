#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Mono/Security/Protocol/Ntlm/zzzz__MessageBase_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace Mono::Security::Protocol::Ntlm {
class Type2Message;
}
namespace Mono::Security::Protocol::Ntlm {
struct NtlmAuthLevel;
}
// Forward declare root types
namespace Mono::Security::Protocol::Ntlm {
class Type3Message;
}
// Type: Mono.Security.Protocol.Ntlm::Type3Message
namespace Mono::Security::Protocol::Ntlm {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13976))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13982))
// CS Name: Mono.Security.Protocol.Ntlm.Type3Message
class CORDL_TYPE Type3Message : public Mono::Security::Protocol::Ntlm::MessageBase {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x60};

virtual ~Type3Message() = default;

// Ctor Parameters [CppParam { name: "", ty: "Type3Message", modifiers: " const&", def_value: None }]
constexpr Type3Message(Type3Message const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Type3Message", modifiers: "&&", def_value: None }]
constexpr Type3Message(Type3Message&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Type3Message(void* ptr) noexcept : Mono::Security::Protocol::Ntlm::MessageBase(ptr) {
}


  constexpr Type3Message& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Type3Message& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Type3Message& operator=(Type3Message&& o) noexcept = default;
  constexpr Type3Message& operator=(Type3Message const& o) noexcept = default;
                


// Fields

 Mono::Security::Protocol::Ntlm::NtlmAuthLevel __declspec(property(get=__get__level, put=__set__level))  _level;

constexpr void __set__level(Mono::Security::Protocol::Ntlm::NtlmAuthLevel value) ;

constexpr Mono::Security::Protocol::Ntlm::NtlmAuthLevel __get__level() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get__challenge, put=__set__challenge))  _challenge;

constexpr void __set__challenge(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get__challenge() const;

 ::StringW __declspec(property(get=__get__host, put=__set__host))  _host;

constexpr void __set__host(::StringW value) ;

constexpr ::StringW __get__host() const;

 ::StringW __declspec(property(get=__get__domain, put=__set__domain))  _domain;

constexpr void __set__domain(::StringW value) ;

constexpr ::StringW __get__domain() const;

 ::StringW __declspec(property(get=__get__username, put=__set__username))  _username;

constexpr void __set__username(::StringW value) ;

constexpr ::StringW __get__username() const;

 ::StringW __declspec(property(get=__get__password, put=__set__password))  _password;

constexpr void __set__password(::StringW value) ;

constexpr ::StringW __get__password() const;

 Mono::Security::Protocol::Ntlm::Type2Message __declspec(property(get=__get__type2, put=__set__type2))  _type2;

constexpr void __set__type2(Mono::Security::Protocol::Ntlm::Type2Message value) ;

constexpr Mono::Security::Protocol::Ntlm::Type2Message __get__type2() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get__lm, put=__set__lm))  _lm;

constexpr void __set__lm(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get__lm() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get__nt, put=__set__nt))  _nt;

constexpr void __set__nt(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get__nt() const;


// Properties

 ::StringW __declspec(property(put=set_Domain))  Domain;

 ::StringW __declspec(property(put=set_Password))  Password;

 ::StringW __declspec(property(put=set_Username))  Username;


// Methods

// Ctor Parameters [CppParam { name: "type2", ty: "Mono::Security::Protocol::Ntlm::Type2Message", modifiers: "", def_value: None }]
explicit Type3Message(Mono::Security::Protocol::Ntlm::Type2Message type2) ;

/// @brief Method .ctor addr 0x229463c size 0x1ec virtual false final false
 void _ctor(Mono::Security::Protocol::Ntlm::Type2Message type2) ;

/// @brief Method Finalize addr 0x2294828 size 0xe0 virtual true final false
 void Finalize() ;

/// @brief Method set_Domain addr 0x2294908 size 0x80 virtual false final false
 void set_Domain(::StringW value) ;

/// @brief Method set_Password addr 0x2294988 size 0x8 virtual false final false
 void set_Password(::StringW value) ;

/// @brief Method set_Username addr 0x2294990 size 0x8 virtual false final false
 void set_Username(::StringW value) ;

/// @brief Method Decode addr 0x2294998 size 0x220 virtual true final false
 void Decode(::ArrayW<uint8_t> message) ;

/// @brief Method DecodeString addr 0x2294bb8 size 0x58 virtual false final false
 ::StringW DecodeString(::ArrayW<uint8_t> buffer, int32_t offset, int32_t len) ;

/// @brief Method EncodeString addr 0x2294c10 size 0x90 virtual false final false
 ::ArrayW<uint8_t> EncodeString(::StringW text) ;

/// @brief Method GetBytes addr 0x2294ca0 size 0x628 virtual true final false
 ::ArrayW<uint8_t> GetBytes() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Mono::Security::Protocol::Ntlm
NEED_NO_BOX(Mono::Security::Protocol::Ntlm::Type3Message);
DEFINE_IL2CPP_ARG_TYPE(Mono::Security::Protocol::Ntlm::Type3Message, "Mono.Security.Protocol.Ntlm", "Type3Message");
