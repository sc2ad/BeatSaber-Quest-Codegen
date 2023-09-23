#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace Mono::Security::Protocol::Ntlm {
struct NtlmFlags;
}
// Forward declare root types
namespace Mono::Security::Protocol::Ntlm {
class MessageBase;
}
// Type: Mono.Security.Protocol.Ntlm::MessageBase
namespace Mono::Security::Protocol::Ntlm {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13976))
// CS Name: Mono.Security.Protocol.Ntlm.MessageBase
class CORDL_TYPE MessageBase : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~MessageBase() = default;

// Ctor Parameters [CppParam { name: "", ty: "MessageBase", modifiers: " const&", def_value: None }]
constexpr MessageBase(MessageBase const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MessageBase", modifiers: "&&", def_value: None }]
constexpr MessageBase(MessageBase&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MessageBase(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr MessageBase& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MessageBase& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MessageBase& operator=(MessageBase&& o) noexcept = default;
  constexpr MessageBase& operator=(MessageBase const& o) noexcept = default;
                


// Fields

static ::ArrayW<uint8_t> __declspec(property(get=__get_header, put=__set_header))  header;

static void __set_header(::ArrayW<uint8_t> value) ;

static ::ArrayW<uint8_t> __get_header() ;

 int32_t __declspec(property(get=__get__type, put=__set__type))  _type;

constexpr void __set__type(int32_t value) ;

constexpr int32_t __get__type() const;

 Mono::Security::Protocol::Ntlm::NtlmFlags __declspec(property(get=__get__flags, put=__set__flags))  _flags;

constexpr void __set__flags(Mono::Security::Protocol::Ntlm::NtlmFlags value) ;

constexpr Mono::Security::Protocol::Ntlm::NtlmFlags __get__flags() const;


// Properties

 Mono::Security::Protocol::Ntlm::NtlmFlags __declspec(property(get=get_Flags, put=set_Flags))  Flags;

 int32_t __declspec(property(get=get_Type))  Type;


// Methods

// Ctor Parameters [CppParam { name: "messageType", ty: "int32_t", modifiers: "", def_value: None }]
explicit MessageBase(int32_t messageType) ;

/// @brief Method .ctor addr 0x22938c0 size 0x28 virtual false final false
 void _ctor(int32_t messageType) ;

/// @brief Method get_Flags addr 0x22938e8 size 0x8 virtual false final false
 Mono::Security::Protocol::Ntlm::NtlmFlags get_Flags() ;

/// @brief Method set_Flags addr 0x22938f0 size 0x8 virtual false final false
 void set_Flags(Mono::Security::Protocol::Ntlm::NtlmFlags value) ;

/// @brief Method get_Type addr 0x22938f8 size 0x8 virtual false final false
 int32_t get_Type() ;

/// @brief Method PrepareMessage addr 0x2293900 size 0x100 virtual false final false
 ::ArrayW<uint8_t> PrepareMessage(int32_t messageSize) ;

/// @brief Method Decode addr 0x2293a00 size 0x1a4 virtual true final false
 void Decode(::ArrayW<uint8_t> message) ;

/// @brief Method CheckHeader addr 0x2293ba4 size 0x114 virtual false final false
 bool CheckHeader(::ArrayW<uint8_t> message) ;

/// @brief Method GetBytes addr 0x0 size 0xffffffffffffffff virtual true final false
 ::ArrayW<uint8_t> GetBytes() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Mono::Security::Protocol::Ntlm
NEED_NO_BOX(Mono::Security::Protocol::Ntlm::MessageBase);
DEFINE_IL2CPP_ARG_TYPE(Mono::Security::Protocol::Ntlm::MessageBase, "Mono.Security.Protocol.Ntlm", "MessageBase");
