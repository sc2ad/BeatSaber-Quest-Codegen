#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "BGNet/Core/Messages/zzzz__BaseMultipartMessage_def.hpp"
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
class GameLiftMultipartMessage;
}
namespace {
// Type: GameLift::GameLiftMultipartMessage
namespace GameLift {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12922)), TypeDefinitionIndex(TypeDefinitionIndex(12952)), TypeDefinitionIndex(TypeDefinitionIndex(12979)), TypeDefinitionIndex(TypeDefinitionIndex(14531)), TypeDefinitionIndex(TypeDefinitionIndex(12724))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12929))
// CS Name: GameLift.GameLiftMultipartMessage
class CORDL_TYPE GameLiftMultipartMessage : public BGNet::Core::Messages::BaseMultipartMessage {
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
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~GameLiftMultipartMessage() = default;

// Ctor Parameters [CppParam { name: "", ty: "GameLiftMultipartMessage", modifiers: " const&", def_value: None }]
constexpr GameLiftMultipartMessage(GameLiftMultipartMessage const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GameLiftMultipartMessage", modifiers: "&&", def_value: None }]
constexpr GameLiftMultipartMessage(GameLiftMultipartMessage&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GameLiftMultipartMessage(void* ptr) noexcept : BGNet::Core::Messages::BaseMultipartMessage(ptr) {
}


  constexpr GameLiftMultipartMessage& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GameLiftMultipartMessage& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GameLiftMultipartMessage& operator=(GameLiftMultipartMessage&& o) noexcept = default;
  constexpr GameLiftMultipartMessage& operator=(GameLiftMultipartMessage const& o) noexcept = default;
                


// Properties

static GlobalNamespace::PacketPool_1<GameLift::GameLiftMultipartMessage> __declspec(property(get=get_pool))  pool;


// Methods

/// @brief Method get_pool addr 0xdd81c4 size 0x40 virtual false final false
static GlobalNamespace::PacketPool_1<GameLift::GameLiftMultipartMessage> get_pool() ;

/// @brief Method Release addr 0xdd8204 size 0x54 virtual true final false
 void Release() ;

// Ctor Parameters []
explicit GameLiftMultipartMessage() ;

/// @brief Method .ctor addr 0xdd8258 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GameLift
NEED_NO_BOX(::GameLift::GameLiftMultipartMessage);
DEFINE_IL2CPP_ARG_TYPE(::GameLift::GameLiftMultipartMessage, "GameLift", "GameLiftMultipartMessage");
} // end anonymous namespace
