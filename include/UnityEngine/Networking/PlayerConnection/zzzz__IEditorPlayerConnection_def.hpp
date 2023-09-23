#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace System {
struct Guid;
}
namespace UnityEngine::Networking::PlayerConnection {
class MessageEventArgs;
}
namespace UnityEngine::Events {
template<typename T0>
class UnityAction_1;
}
// Forward declare root types
namespace UnityEngine::Networking::PlayerConnection {
class IEditorPlayerConnection;
}
// Type: UnityEngine.Networking.PlayerConnection::IEditorPlayerConnection
namespace UnityEngine::Networking::PlayerConnection {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10249))
// CS Name: UnityEngine.Networking.PlayerConnection.IEditorPlayerConnection
class CORDL_TYPE IEditorPlayerConnection : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IEditorPlayerConnection() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IEditorPlayerConnection(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method Register addr 0x0 size 0xffffffffffffffff virtual true final false
 void Register(System::Guid messageId, UnityEngine::Events::UnityAction_1<UnityEngine::Networking::PlayerConnection::MessageEventArgs> callback) ;

/// @brief Method RegisterConnection addr 0x0 size 0xffffffffffffffff virtual true final false
 void RegisterConnection(UnityEngine::Events::UnityAction_1<int32_t> callback) ;

/// @brief Method RegisterDisconnection addr 0x0 size 0xffffffffffffffff virtual true final false
 void RegisterDisconnection(UnityEngine::Events::UnityAction_1<int32_t> callback) ;

/// @brief Method Send addr 0x0 size 0xffffffffffffffff virtual true final false
 void Send(System::Guid messageId, ::ArrayW<uint8_t> data) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Networking::PlayerConnection
NEED_NO_BOX(UnityEngine::Networking::PlayerConnection::IEditorPlayerConnection);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Networking::PlayerConnection::IEditorPlayerConnection, "UnityEngine.Networking.PlayerConnection", "IEditorPlayerConnection");
