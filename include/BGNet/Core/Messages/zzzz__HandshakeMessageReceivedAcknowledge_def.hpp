#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "BGNet/Core/Messages/zzzz__BaseAcknowledgeMessage_def.hpp"
#include "BGNet/Core/Messages/zzzz__IHandshakeMessage_def.hpp"
#include "BGNet/Core/Messages/zzzz__IUnconnectedMessage_def.hpp"
#include "GlobalNamespace/zzzz__IPoolablePacket_def.hpp"
#include "LiteNetLib/Utils/zzzz__INetSerializable_def.hpp"
namespace GlobalNamespace {
template<typename T>
class PacketPool_1;
}
// Forward declare root types
namespace BGNet::Core::Messages {
class HandshakeMessageReceivedAcknowledge;
}
namespace {
// Type: BGNet.Core.Messages::HandshakeMessageReceivedAcknowledge
namespace BGNet::Core::Messages {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12966)), TypeDefinitionIndex(TypeDefinitionIndex(12979)), TypeDefinitionIndex(TypeDefinitionIndex(14531)), TypeDefinitionIndex(TypeDefinitionIndex(12724)), TypeDefinitionIndex(TypeDefinitionIndex(12937))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12977))
// CS Name: BGNet.Core.Messages.HandshakeMessageReceivedAcknowledge
class CORDL_TYPE HandshakeMessageReceivedAcknowledge : public BGNet::Core::Messages::BaseAcknowledgeMessage {
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

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~HandshakeMessageReceivedAcknowledge() = default;

// Ctor Parameters [CppParam { name: "", ty: "HandshakeMessageReceivedAcknowledge", modifiers: " const&", def_value: None }]
constexpr HandshakeMessageReceivedAcknowledge(HandshakeMessageReceivedAcknowledge const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HandshakeMessageReceivedAcknowledge", modifiers: "&&", def_value: None }]
constexpr HandshakeMessageReceivedAcknowledge(HandshakeMessageReceivedAcknowledge&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HandshakeMessageReceivedAcknowledge(void* ptr) noexcept : BGNet::Core::Messages::BaseAcknowledgeMessage(ptr) {
}


  constexpr HandshakeMessageReceivedAcknowledge& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HandshakeMessageReceivedAcknowledge& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HandshakeMessageReceivedAcknowledge& operator=(HandshakeMessageReceivedAcknowledge&& o) noexcept = default;
  constexpr HandshakeMessageReceivedAcknowledge& operator=(HandshakeMessageReceivedAcknowledge const& o) noexcept = default;
                


// Properties

static GlobalNamespace::PacketPool_1<BGNet::Core::Messages::HandshakeMessageReceivedAcknowledge> __declspec(property(get=get_pool))  pool;


// Methods

/// @brief Method get_pool addr 0xde012c size 0x40 virtual false final false
static GlobalNamespace::PacketPool_1<BGNet::Core::Messages::HandshakeMessageReceivedAcknowledge> get_pool() ;

/// @brief Method Release addr 0xde3cd8 size 0x54 virtual true final false
 void Release() ;

// Ctor Parameters []
explicit HandshakeMessageReceivedAcknowledge() ;

/// @brief Method .ctor addr 0xde3d2c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def BGNet::Core::Messages
NEED_NO_BOX(::BGNet::Core::Messages::HandshakeMessageReceivedAcknowledge);
DEFINE_IL2CPP_ARG_TYPE(::BGNet::Core::Messages::HandshakeMessageReceivedAcknowledge, "BGNet.Core.Messages", "HandshakeMessageReceivedAcknowledge");
} // end anonymous namespace
