#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "BGNet/Core/Messages/zzzz__IHandshakeMessage_def.hpp"
#include "BGNet/Core/Messages/zzzz__IUnconnectedMessage_def.hpp"
#include "GlobalNamespace/zzzz__IPoolablePacket_def.hpp"
#include "LiteNetLib/Utils/zzzz__INetSerializable_def.hpp"
// Forward declare root types
namespace BGNet::Core::Messages {
class IHandshakeServerToClientMessage;
}
namespace {
// Type: BGNet.Core.Messages::IHandshakeServerToClientMessage
namespace BGNet::Core::Messages {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14531)), TypeDefinitionIndex(TypeDefinitionIndex(12966)), TypeDefinitionIndex(TypeDefinitionIndex(12724)), TypeDefinitionIndex(TypeDefinitionIndex(12979))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12968))
// CS Name: BGNet.Core.Messages.IHandshakeServerToClientMessage
class CORDL_TYPE IHandshakeServerToClientMessage : public ::cordl_internals::InterfaceW {
public:
// Declarations
/// @brief Convert operator to BGNet::Core::Messages::IHandshakeMessage
constexpr operator  BGNet::Core::Messages::IHandshakeMessage() const noexcept;

/// @brief Convert operator to BGNet::Core::Messages::IUnconnectedMessage
constexpr operator  BGNet::Core::Messages::IUnconnectedMessage() const noexcept;

/// @brief Convert operator to LiteNetLib::Utils::INetSerializable
constexpr operator  LiteNetLib::Utils::INetSerializable() const noexcept;

/// @brief Convert operator to GlobalNamespace::IPoolablePacket
constexpr operator  GlobalNamespace::IPoolablePacket() const noexcept;

~IHandshakeServerToClientMessage() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IHandshakeServerToClientMessage(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def BGNet::Core::Messages
NEED_NO_BOX(::BGNet::Core::Messages::IHandshakeServerToClientMessage);
DEFINE_IL2CPP_ARG_TYPE(::BGNet::Core::Messages::IHandshakeServerToClientMessage, "BGNet.Core.Messages", "IHandshakeServerToClientMessage");
} // end anonymous namespace
