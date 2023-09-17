#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "BGNet/Core/Messages/zzzz__BaseReliableRequest_def.hpp"
#include "BGNet/Core/Messages/zzzz__IHandshakeClientToServerMessage_def.hpp"
#include "BGNet/Core/Messages/zzzz__IHandshakeMessage_def.hpp"
#include "BGNet/Core/Messages/zzzz__IUnconnectedMessage_def.hpp"
#include "GlobalNamespace/zzzz__IPoolablePacket_def.hpp"
#include "LiteNetLib/Utils/zzzz__INetSerializable_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace LiteNetLib::Utils {
class NetDataReader;
}
namespace GlobalNamespace {
template<typename T>
class PacketPool_1;
}
namespace LiteNetLib::Utils {
class NetDataWriter;
}
// Forward declare root types
namespace BGNet::Core::Messages {
class ClientHelloRequest;
}
namespace {
// Type: BGNet.Core.Messages::ClientHelloRequest
namespace BGNet::Core::Messages {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14531)), TypeDefinitionIndex(TypeDefinitionIndex(12966)), TypeDefinitionIndex(TypeDefinitionIndex(12953)), TypeDefinitionIndex(TypeDefinitionIndex(12967)), TypeDefinitionIndex(TypeDefinitionIndex(12979)), TypeDefinitionIndex(TypeDefinitionIndex(12724))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12969))
// CS Name: BGNet.Core.Messages.ClientHelloRequest
class CORDL_TYPE ClientHelloRequest : public BGNet::Core::Messages::BaseReliableRequest {
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

virtual ~ClientHelloRequest() = default;

// Ctor Parameters [CppParam { name: "", ty: "ClientHelloRequest", modifiers: " const&", def_value: None }]
constexpr ClientHelloRequest(ClientHelloRequest const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ClientHelloRequest", modifiers: "&&", def_value: None }]
constexpr ClientHelloRequest(ClientHelloRequest&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ClientHelloRequest(void* ptr) noexcept : BGNet::Core::Messages::BaseReliableRequest(ptr) {
}


  constexpr ClientHelloRequest& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ClientHelloRequest& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ClientHelloRequest& operator=(ClientHelloRequest&& o) noexcept = default;
  constexpr ClientHelloRequest& operator=(ClientHelloRequest const& o) noexcept = default;
                


// Fields

 ::ArrayW<uint8_t> __declspec(property(get=__get_random, put=__set_random))  random;

constexpr void __set_random(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_random() const;


// Properties

static GlobalNamespace::PacketPool_1<BGNet::Core::Messages::ClientHelloRequest> __declspec(property(get=get_pool))  pool;


// Methods

/// @brief Method get_pool addr 0xddda3c size 0x40 virtual false final false
static GlobalNamespace::PacketPool_1<BGNet::Core::Messages::ClientHelloRequest> get_pool() ;

/// @brief Method Init addr 0xddda7c size 0x38 virtual false final false
 BGNet::Core::Messages::ClientHelloRequest Init(::ArrayW<uint8_t> random) ;

/// @brief Method Serialize addr 0xde2bc8 size 0x40 virtual true final false
 void Serialize(LiteNetLib::Utils::NetDataWriter writer) ;

/// @brief Method Deserialize addr 0xde2c08 size 0x48 virtual true final false
 void Deserialize(LiteNetLib::Utils::NetDataReader reader) ;

/// @brief Method Release addr 0xde2c50 size 0x54 virtual true final false
 void Release() ;

// Ctor Parameters []
explicit ClientHelloRequest() ;

/// @brief Method .ctor addr 0xde2ca4 size 0x58 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def BGNet::Core::Messages
NEED_NO_BOX(::BGNet::Core::Messages::ClientHelloRequest);
DEFINE_IL2CPP_ARG_TYPE(::BGNet::Core::Messages::ClientHelloRequest, "BGNet.Core.Messages", "ClientHelloRequest");
} // end anonymous namespace
