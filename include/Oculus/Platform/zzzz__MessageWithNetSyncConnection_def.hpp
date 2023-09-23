#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "Oculus/Platform/Models/zzzz__NetSyncConnection_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include <cstdint>
namespace Oculus::Platform::Models {
class NetSyncConnection;
}
// Forward declare root types
namespace Oculus::Platform {
class MessageWithNetSyncConnection;
}
// Type: Oculus.Platform::MessageWithNetSyncConnection
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13203)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13203), inst: 946 }), TypeDefinitionIndex(TypeDefinitionIndex(13447))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13257))
// CS Name: Oculus.Platform.MessageWithNetSyncConnection
class CORDL_TYPE MessageWithNetSyncConnection : public Oculus::Platform::Message_1<Oculus::Platform::Models::NetSyncConnection> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~MessageWithNetSyncConnection() = default;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithNetSyncConnection", modifiers: " const&", def_value: None }]
constexpr MessageWithNetSyncConnection(MessageWithNetSyncConnection const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithNetSyncConnection", modifiers: "&&", def_value: None }]
constexpr MessageWithNetSyncConnection(MessageWithNetSyncConnection&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MessageWithNetSyncConnection(void* ptr) noexcept : Oculus::Platform::Message_1<Oculus::Platform::Models::NetSyncConnection>(ptr) {
}


  constexpr MessageWithNetSyncConnection& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MessageWithNetSyncConnection& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MessageWithNetSyncConnection& operator=(MessageWithNetSyncConnection&& o) noexcept = default;
  constexpr MessageWithNetSyncConnection& operator=(MessageWithNetSyncConnection const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "c_message", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit MessageWithNetSyncConnection(::cordl_internals::intptr_t c_message) ;

/// @brief Method .ctor addr 0x257ec68 size 0x58 virtual false final false
 void _ctor(::cordl_internals::intptr_t c_message) ;

/// @brief Method GetNetSyncConnection addr 0x2582698 size 0x3c virtual true final false
 Oculus::Platform::Models::NetSyncConnection GetNetSyncConnection() ;

/// @brief Method GetDataFromMessage addr 0x25826d4 size 0x9c virtual true final false
 Oculus::Platform::Models::NetSyncConnection GetDataFromMessage(::cordl_internals::intptr_t c_message) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform
NEED_NO_BOX(Oculus::Platform::MessageWithNetSyncConnection);
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::MessageWithNetSyncConnection, "Oculus.Platform", "MessageWithNetSyncConnection");
