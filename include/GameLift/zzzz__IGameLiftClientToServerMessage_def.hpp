#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "BGNet/Core/Messages/zzzz__IUnconnectedMessage_def.hpp"
#include "GameLift/zzzz__IGameLiftMessage_def.hpp"
#include "GlobalNamespace/zzzz__IPoolablePacket_def.hpp"
#include "LiteNetLib/Utils/zzzz__INetSerializable_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Forward declare root types
namespace GameLift {
class IGameLiftClientToServerMessage;
}
namespace {
// Type: GameLift::IGameLiftClientToServerMessage
namespace GameLift {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12979)), TypeDefinitionIndex(TypeDefinitionIndex(12724)), TypeDefinitionIndex(TypeDefinitionIndex(12922)), TypeDefinitionIndex(TypeDefinitionIndex(14531))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12923))
// CS Name: GameLift.IGameLiftClientToServerMessage
class CORDL_TYPE IGameLiftClientToServerMessage : public ::cordl_internals::InterfaceW {
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

~IGameLiftClientToServerMessage() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IGameLiftClientToServerMessage(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 ::StringW __declspec(property(get=get_userId))  userId;

 ::StringW __declspec(property(get=get_userName))  userName;


// Methods

/// @brief Method get_userId addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW get_userId() ;

/// @brief Method get_userName addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW get_userName() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GameLift
NEED_NO_BOX(::GameLift::IGameLiftClientToServerMessage);
DEFINE_IL2CPP_ARG_TYPE(::GameLift::IGameLiftClientToServerMessage, "GameLift", "IGameLiftClientToServerMessage");
} // end anonymous namespace
