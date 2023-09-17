#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "BGNet/Core/Messages/zzzz__IUnconnectedMessage_def.hpp"
#include "GameLift/zzzz__IGameLiftMessage_def.hpp"
#include "GlobalNamespace/zzzz__IPoolablePacket_def.hpp"
#include "LiteNetLib/Utils/zzzz__INetSerializable_def.hpp"
// Forward declare root types
namespace GameLift {
class IGameLiftServerToClientMessage;
}
namespace {
// Type: GameLift::IGameLiftServerToClientMessage
namespace GameLift {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12724)), TypeDefinitionIndex(TypeDefinitionIndex(12979)), TypeDefinitionIndex(TypeDefinitionIndex(12922)), TypeDefinitionIndex(TypeDefinitionIndex(14531))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12924))
// CS Name: GameLift.IGameLiftServerToClientMessage
class CORDL_TYPE IGameLiftServerToClientMessage : public ::cordl_internals::InterfaceW {
public:
// Declarations
/// @brief Convert operator to GameLift::IGameLiftMessage
constexpr operator  GameLift::IGameLiftMessage() const noexcept;

/// @brief Convert operator to BGNet::Core::Messages::IUnconnectedMessage
constexpr operator  BGNet::Core::Messages::IUnconnectedMessage() const noexcept;

/// @brief Convert operator to LiteNetLib::Utils::INetSerializable
constexpr operator  LiteNetLib::Utils::INetSerializable() const noexcept;

/// @brief Convert operator to GlobalNamespace::IPoolablePacket
constexpr operator  GlobalNamespace::IPoolablePacket() const noexcept;

~IGameLiftServerToClientMessage() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IGameLiftServerToClientMessage(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GameLift
NEED_NO_BOX(::GameLift::IGameLiftServerToClientMessage);
DEFINE_IL2CPP_ARG_TYPE(::GameLift::IGameLiftServerToClientMessage, "GameLift", "IGameLiftServerToClientMessage");
} // end anonymous namespace
