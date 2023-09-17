#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "BGNet/Core/Messages/zzzz__BaseMultipartMessage_def.hpp"
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
class HandshakeMultipartMessage;
}
namespace {
// Type: BGNet.Core.Messages::HandshakeMultipartMessage
namespace BGNet::Core::Messages {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12966)), TypeDefinitionIndex(TypeDefinitionIndex(14531)), TypeDefinitionIndex(TypeDefinitionIndex(12979)), TypeDefinitionIndex(TypeDefinitionIndex(12952)), TypeDefinitionIndex(TypeDefinitionIndex(12724))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12978))
// CS Name: BGNet.Core.Messages.HandshakeMultipartMessage
class CORDL_TYPE HandshakeMultipartMessage : public BGNet::Core::Messages::BaseMultipartMessage {
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
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~HandshakeMultipartMessage() = default;

// Ctor Parameters [CppParam { name: "", ty: "HandshakeMultipartMessage", modifiers: " const&", def_value: None }]
constexpr HandshakeMultipartMessage(HandshakeMultipartMessage const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HandshakeMultipartMessage", modifiers: "&&", def_value: None }]
constexpr HandshakeMultipartMessage(HandshakeMultipartMessage&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HandshakeMultipartMessage(void* ptr) noexcept : BGNet::Core::Messages::BaseMultipartMessage(ptr) {
}


  constexpr HandshakeMultipartMessage& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HandshakeMultipartMessage& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HandshakeMultipartMessage& operator=(HandshakeMultipartMessage&& o) noexcept = default;
  constexpr HandshakeMultipartMessage& operator=(HandshakeMultipartMessage const& o) noexcept = default;
                


// Properties

static GlobalNamespace::PacketPool_1<BGNet::Core::Messages::HandshakeMultipartMessage> __declspec(property(get=get_pool))  pool;


// Methods

/// @brief Method get_pool addr 0xde016c size 0x40 virtual false final false
static GlobalNamespace::PacketPool_1<BGNet::Core::Messages::HandshakeMultipartMessage> get_pool() ;

/// @brief Method Release addr 0xde3d34 size 0x54 virtual true final false
 void Release() ;

// Ctor Parameters []
explicit HandshakeMultipartMessage() ;

/// @brief Method .ctor addr 0xde3d88 size 0x4 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def BGNet::Core::Messages
NEED_NO_BOX(::BGNet::Core::Messages::HandshakeMultipartMessage);
DEFINE_IL2CPP_ARG_TYPE(::BGNet::Core::Messages::HandshakeMultipartMessage, "BGNet.Core.Messages", "HandshakeMultipartMessage");
} // end anonymous namespace
