#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "BGNet/Core/Messages/zzzz__BaseAcknowledgeMessage_def.hpp"
#include "BGNet/Core/Messages/zzzz__IUnconnectedMessage_def.hpp"
#include "GameLift/zzzz__IGameLiftMessage_def.hpp"
#include "GlobalNamespace/zzzz__IPoolablePacket_def.hpp"
#include "LiteNetLib/Utils/zzzz__INetSerializable_def.hpp"
namespace GlobalNamespace {
template<typename T>
class PacketPool_1;
}
// Forward declare root types
namespace GameLift {
class GameLiftMessageReceivedAcknowledge;
}
namespace {
// Type: GameLift::GameLiftMessageReceivedAcknowledge
namespace GameLift {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12937)), TypeDefinitionIndex(TypeDefinitionIndex(12724)), TypeDefinitionIndex(TypeDefinitionIndex(12922)), TypeDefinitionIndex(TypeDefinitionIndex(14531)), TypeDefinitionIndex(TypeDefinitionIndex(12979))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12928))
// CS Name: GameLift.GameLiftMessageReceivedAcknowledge
class CORDL_TYPE GameLiftMessageReceivedAcknowledge : public BGNet::Core::Messages::BaseAcknowledgeMessage {
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

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~GameLiftMessageReceivedAcknowledge() = default;

// Ctor Parameters [CppParam { name: "", ty: "GameLiftMessageReceivedAcknowledge", modifiers: " const&", def_value: None }]
constexpr GameLiftMessageReceivedAcknowledge(GameLiftMessageReceivedAcknowledge const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GameLiftMessageReceivedAcknowledge", modifiers: "&&", def_value: None }]
constexpr GameLiftMessageReceivedAcknowledge(GameLiftMessageReceivedAcknowledge&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GameLiftMessageReceivedAcknowledge(void* ptr) noexcept : BGNet::Core::Messages::BaseAcknowledgeMessage(ptr) {
}


  constexpr GameLiftMessageReceivedAcknowledge& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GameLiftMessageReceivedAcknowledge& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GameLiftMessageReceivedAcknowledge& operator=(GameLiftMessageReceivedAcknowledge&& o) noexcept = default;
  constexpr GameLiftMessageReceivedAcknowledge& operator=(GameLiftMessageReceivedAcknowledge const& o) noexcept = default;
                


// Properties

static GlobalNamespace::PacketPool_1<GameLift::GameLiftMessageReceivedAcknowledge> __declspec(property(get=get_pool))  pool;


// Methods

/// @brief Method get_pool addr 0xdd8120 size 0x40 virtual false final false
static GlobalNamespace::PacketPool_1<GameLift::GameLiftMessageReceivedAcknowledge> get_pool() ;

/// @brief Method Release addr 0xdd8160 size 0x54 virtual true final false
 void Release() ;

// Ctor Parameters []
explicit GameLiftMessageReceivedAcknowledge() ;

/// @brief Method .ctor addr 0xdd81b4 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GameLift
NEED_NO_BOX(::GameLift::GameLiftMessageReceivedAcknowledge);
DEFINE_IL2CPP_ARG_TYPE(::GameLift::GameLiftMessageReceivedAcknowledge, "GameLift", "GameLiftMessageReceivedAcknowledge");
} // end anonymous namespace
