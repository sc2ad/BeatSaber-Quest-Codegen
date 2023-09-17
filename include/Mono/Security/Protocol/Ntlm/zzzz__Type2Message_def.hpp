#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Mono/Security/Protocol/Ntlm/zzzz__MessageBase_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
// Forward declare root types
namespace Mono::Security::Protocol::Ntlm {
class Type2Message;
}
// Type: Mono.Security.Protocol.Ntlm::Type2Message
namespace Mono::Security::Protocol::Ntlm {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13976))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13981))
// CS Name: Mono.Security.Protocol.Ntlm.Type2Message
class CORDL_TYPE Type2Message : public ::Mono::Security::Protocol::Ntlm::MessageBase {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~Type2Message() = default;

// Ctor Parameters [CppParam { name: "", ty: "Type2Message", modifiers: " const&", def_value: None }]
constexpr Type2Message(Type2Message const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Type2Message", modifiers: "&&", def_value: None }]
constexpr Type2Message(Type2Message&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Type2Message(void* ptr) noexcept : ::Mono::Security::Protocol::Ntlm::MessageBase(ptr) {
}


  constexpr Type2Message& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Type2Message& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Type2Message& operator=(Type2Message&& o) noexcept = default;
  constexpr Type2Message& operator=(Type2Message const& o) noexcept = default;
                


// Fields

 ::ArrayW<uint8_t> __declspec(property(get=__get__nonce, put=__set__nonce))  _nonce;

constexpr void __set__nonce(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get__nonce() const;

 ::StringW __declspec(property(get=__get__targetName, put=__set__targetName))  _targetName;

constexpr void __set__targetName(::StringW value) ;

constexpr ::StringW __get__targetName() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get__targetInfo, put=__set__targetInfo))  _targetInfo;

constexpr void __set__targetInfo(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get__targetInfo() const;


// Properties

 ::ArrayW<uint8_t> __declspec(property(get=get_Nonce))  Nonce;

 ::StringW __declspec(property(get=get_TargetName))  TargetName;

 ::ArrayW<uint8_t> __declspec(property(get=get_TargetInfo))  TargetInfo;


// Methods

// Ctor Parameters [CppParam { name: "message", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
explicit Type2Message(::ArrayW<uint8_t> message) ;

/// @brief Method .ctor addr 0x22942b0 size 0xa4 virtual false final false
 void _ctor(::ArrayW<uint8_t> message) ;

/// @brief Method Finalize addr 0x2294354 size 0xa8 virtual true final false
 void Finalize() ;

/// @brief Method get_Nonce addr 0x2293398 size 0x78 virtual false final false
 ::ArrayW<uint8_t> get_Nonce() ;

/// @brief Method get_TargetName addr 0x22943fc size 0x8 virtual false final false
 ::StringW get_TargetName() ;

/// @brief Method get_TargetInfo addr 0x2293320 size 0x78 virtual false final false
 ::ArrayW<uint8_t> get_TargetInfo() ;

/// @brief Method Decode addr 0x2294404 size 0x180 virtual true final false
 void Decode(::ArrayW<uint8_t> message) ;

/// @brief Method GetBytes addr 0x2294584 size 0xb8 virtual true final false
 ::ArrayW<uint8_t> GetBytes() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Mono::Security::Protocol::Ntlm
} // end anonymous namespace
NEED_NO_BOX(::Mono::Security::Protocol::Ntlm::Type2Message);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Security::Protocol::Ntlm::Type2Message, "Mono.Security.Protocol.Ntlm", "Type2Message");
