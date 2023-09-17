#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "BGNet/Core/Messages/zzzz__BaseReliableResponse_def.hpp"
#include "BGNet/Core/Messages/zzzz__IHandshakeClientToServerMessage_def.hpp"
#include "BGNet/Core/Messages/zzzz__IHandshakeMessage_def.hpp"
#include "BGNet/Core/Messages/zzzz__IUnconnectedMessage_def.hpp"
#include "GlobalNamespace/zzzz__IPoolablePacket_def.hpp"
#include "LiteNetLib/Utils/zzzz__INetSerializable_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace GlobalNamespace {
template<typename T>
class PacketPool_1;
}
namespace LiteNetLib::Utils {
class NetDataReader;
}
namespace GlobalNamespace {
class ByteArrayNetSerializable;
}
namespace LiteNetLib::Utils {
class NetDataWriter;
}
// Forward declare root types
namespace BGNet::Core::Messages {
class ClientKeyExchangeRequest;
}
namespace {
// Type: BGNet.Core.Messages::ClientKeyExchangeRequest
namespace BGNet::Core::Messages {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12967)), TypeDefinitionIndex(TypeDefinitionIndex(12979)), TypeDefinitionIndex(TypeDefinitionIndex(12966)), TypeDefinitionIndex(TypeDefinitionIndex(14531)), TypeDefinitionIndex(TypeDefinitionIndex(12724)), TypeDefinitionIndex(TypeDefinitionIndex(12954))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12975))
// CS Name: BGNet.Core.Messages.ClientKeyExchangeRequest
class CORDL_TYPE ClientKeyExchangeRequest : public BGNet::Core::Messages::BaseReliableResponse {
public:
// Declarations
/// @brief Convert operator to BGNet::Core::Messages::IHandshakeClientToServerMessage
constexpr operator  BGNet::Core::Messages::IHandshakeClientToServerMessage() const noexcept;

/// @brief Convert operator to BGNet::Core::Messages::IHandshakeMessage
constexpr operator  BGNet::Core::Messages::IHandshakeMessage() const noexcept;

/// @brief Convert operator to BGNet::Core::Messages::IUnconnectedMessage
constexpr operator  BGNet::Core::Messages::IUnconnectedMessage() const noexcept;

/// @brief Convert operator to LiteNetLib::Utils::INetSerializable
constexpr operator  LiteNetLib::Utils::INetSerializable() const noexcept;

/// @brief Convert operator to GlobalNamespace::IPoolablePacket
constexpr operator  GlobalNamespace::IPoolablePacket() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~ClientKeyExchangeRequest() = default;

// Ctor Parameters [CppParam { name: "", ty: "ClientKeyExchangeRequest", modifiers: " const&", def_value: None }]
constexpr ClientKeyExchangeRequest(ClientKeyExchangeRequest const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ClientKeyExchangeRequest", modifiers: "&&", def_value: None }]
constexpr ClientKeyExchangeRequest(ClientKeyExchangeRequest&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ClientKeyExchangeRequest(void* ptr) noexcept : BGNet::Core::Messages::BaseReliableResponse(ptr) {
}


  constexpr ClientKeyExchangeRequest& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ClientKeyExchangeRequest& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ClientKeyExchangeRequest& operator=(ClientKeyExchangeRequest&& o) noexcept = default;
  constexpr ClientKeyExchangeRequest& operator=(ClientKeyExchangeRequest const& o) noexcept = default;
                


// Fields

 GlobalNamespace::ByteArrayNetSerializable __declspec(property(get=__get_clientPublicKey, put=__set_clientPublicKey))  clientPublicKey;

constexpr void __set_clientPublicKey(GlobalNamespace::ByteArrayNetSerializable value) ;

constexpr GlobalNamespace::ByteArrayNetSerializable __get_clientPublicKey() const;


// Properties

static GlobalNamespace::PacketPool_1<BGNet::Core::Messages::ClientKeyExchangeRequest> __declspec(property(get=get_pool))  pool;


// Methods

/// @brief Method get_pool addr 0xdddbec size 0x40 virtual false final false
static GlobalNamespace::PacketPool_1<BGNet::Core::Messages::ClientKeyExchangeRequest> get_pool() ;

/// @brief Method Init addr 0xdddc2c size 0x28 virtual false final false
 BGNet::Core::Messages::ClientKeyExchangeRequest Init(::ArrayW<uint8_t> clientPublicKey) ;

/// @brief Method Serialize addr 0xde3b24 size 0x34 virtual true final false
 void Serialize(LiteNetLib::Utils::NetDataWriter writer) ;

/// @brief Method Deserialize addr 0xde3b58 size 0x34 virtual true final false
 void Deserialize(LiteNetLib::Utils::NetDataReader reader) ;

/// @brief Method Release addr 0xde3b8c size 0x64 virtual true final false
 void Release() ;

// Ctor Parameters []
explicit ClientKeyExchangeRequest() ;

/// @brief Method .ctor addr 0xde3bf0 size 0x8c virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def BGNet::Core::Messages
NEED_NO_BOX(::BGNet::Core::Messages::ClientKeyExchangeRequest);
DEFINE_IL2CPP_ARG_TYPE(::BGNet::Core::Messages::ClientKeyExchangeRequest, "BGNet.Core.Messages", "ClientKeyExchangeRequest");
} // end anonymous namespace
