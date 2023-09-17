#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "BGNet/Core/Messages/zzzz__BaseReliableResponse_def.hpp"
#include "BGNet/Core/Messages/zzzz__IHandshakeMessage_def.hpp"
#include "BGNet/Core/Messages/zzzz__IHandshakeServerToClientMessage_def.hpp"
#include "BGNet/Core/Messages/zzzz__IUnconnectedMessage_def.hpp"
#include "GlobalNamespace/zzzz__IPoolablePacket_def.hpp"
#include "LiteNetLib/Utils/zzzz__INetSerializable_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace GlobalNamespace {
class ByteArrayNetSerializable;
}
namespace GlobalNamespace {
template<typename T>
class PacketPool_1;
}
namespace LiteNetLib::Utils {
class NetDataWriter;
}
namespace LiteNetLib::Utils {
class NetDataReader;
}
// Forward declare root types
namespace BGNet::Core::Messages {
class ServerHelloRequest;
}
namespace {
// Type: BGNet.Core.Messages::ServerHelloRequest
namespace BGNet::Core::Messages {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12979)), TypeDefinitionIndex(TypeDefinitionIndex(12966)), TypeDefinitionIndex(TypeDefinitionIndex(12954)), TypeDefinitionIndex(TypeDefinitionIndex(12724)), TypeDefinitionIndex(TypeDefinitionIndex(12968)), TypeDefinitionIndex(TypeDefinitionIndex(14531))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12972))
// CS Name: BGNet.Core.Messages.ServerHelloRequest
class CORDL_TYPE ServerHelloRequest : public BGNet::Core::Messages::BaseReliableResponse {
public:
// Declarations
/// @brief Convert operator to BGNet::Core::Messages::IHandshakeServerToClientMessage
constexpr operator  BGNet::Core::Messages::IHandshakeServerToClientMessage() const noexcept;

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

virtual ~ServerHelloRequest() = default;

// Ctor Parameters [CppParam { name: "", ty: "ServerHelloRequest", modifiers: " const&", def_value: None }]
constexpr ServerHelloRequest(ServerHelloRequest const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ServerHelloRequest", modifiers: "&&", def_value: None }]
constexpr ServerHelloRequest(ServerHelloRequest&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ServerHelloRequest(void* ptr) noexcept : BGNet::Core::Messages::BaseReliableResponse(ptr) {
}


  constexpr ServerHelloRequest& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ServerHelloRequest& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ServerHelloRequest& operator=(ServerHelloRequest&& o) noexcept = default;
  constexpr ServerHelloRequest& operator=(ServerHelloRequest const& o) noexcept = default;
                


// Fields

 GlobalNamespace::ByteArrayNetSerializable __declspec(property(get=__get_random, put=__set_random))  random;

constexpr void __set_random(GlobalNamespace::ByteArrayNetSerializable value) ;

constexpr GlobalNamespace::ByteArrayNetSerializable __get_random() const;

 GlobalNamespace::ByteArrayNetSerializable __declspec(property(get=__get_publicKey, put=__set_publicKey))  publicKey;

constexpr void __set_publicKey(GlobalNamespace::ByteArrayNetSerializable value) ;

constexpr GlobalNamespace::ByteArrayNetSerializable __get_publicKey() const;

 GlobalNamespace::ByteArrayNetSerializable __declspec(property(get=__get_signature, put=__set_signature))  signature;

constexpr void __set_signature(GlobalNamespace::ByteArrayNetSerializable value) ;

constexpr GlobalNamespace::ByteArrayNetSerializable __get_signature() const;


// Properties

static GlobalNamespace::PacketPool_1<BGNet::Core::Messages::ServerHelloRequest> __declspec(property(get=get_pool))  pool;


// Methods

/// @brief Method get_pool addr 0xde006c size 0x40 virtual false final false
static GlobalNamespace::PacketPool_1<BGNet::Core::Messages::ServerHelloRequest> get_pool() ;

/// @brief Method Init addr 0xde2020 size 0x60 virtual false final false
 BGNet::Core::Messages::ServerHelloRequest Init(::ArrayW<uint8_t> random, ::ArrayW<uint8_t> publicKey, ::ArrayW<uint8_t> signature) ;

/// @brief Method Serialize addr 0xde305c size 0x5c virtual true final false
 void Serialize(LiteNetLib::Utils::NetDataWriter writer) ;

/// @brief Method Deserialize addr 0xde30b8 size 0x5c virtual true final false
 void Deserialize(LiteNetLib::Utils::NetDataReader reader) ;

/// @brief Method Release addr 0xde3114 size 0x84 virtual true final false
 void Release() ;

// Ctor Parameters []
explicit ServerHelloRequest() ;

/// @brief Method .ctor addr 0xde3198 size 0x108 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def BGNet::Core::Messages
NEED_NO_BOX(::BGNet::Core::Messages::ServerHelloRequest);
DEFINE_IL2CPP_ARG_TYPE(::BGNet::Core::Messages::ServerHelloRequest, "BGNet.Core.Messages", "ServerHelloRequest");
} // end anonymous namespace
