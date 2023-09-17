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
namespace GlobalNamespace {
class ByteArrayNetSerializable;
}
namespace GlobalNamespace {
template<typename T>
class PacketPool_1;
}
namespace LiteNetLib::Utils {
class NetDataReader;
}
namespace LiteNetLib::Utils {
class NetDataWriter;
}
// Forward declare root types
namespace BGNet::Core::Messages {
class ClientHelloWithCookieRequest;
}
namespace {
// Type: BGNet.Core.Messages::ClientHelloWithCookieRequest
namespace BGNet::Core::Messages {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14531)), TypeDefinitionIndex(TypeDefinitionIndex(12979)), TypeDefinitionIndex(TypeDefinitionIndex(12953)), TypeDefinitionIndex(TypeDefinitionIndex(12967)), TypeDefinitionIndex(TypeDefinitionIndex(12724)), TypeDefinitionIndex(TypeDefinitionIndex(12966))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12970))
// CS Name: BGNet.Core.Messages.ClientHelloWithCookieRequest
class CORDL_TYPE ClientHelloWithCookieRequest : public BGNet::Core::Messages::BaseReliableRequest {
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
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~ClientHelloWithCookieRequest() = default;

// Ctor Parameters [CppParam { name: "", ty: "ClientHelloWithCookieRequest", modifiers: " const&", def_value: None }]
constexpr ClientHelloWithCookieRequest(ClientHelloWithCookieRequest const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ClientHelloWithCookieRequest", modifiers: "&&", def_value: None }]
constexpr ClientHelloWithCookieRequest(ClientHelloWithCookieRequest&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ClientHelloWithCookieRequest(void* ptr) noexcept : BGNet::Core::Messages::BaseReliableRequest(ptr) {
}


  constexpr ClientHelloWithCookieRequest& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ClientHelloWithCookieRequest& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ClientHelloWithCookieRequest& operator=(ClientHelloWithCookieRequest&& o) noexcept = default;
  constexpr ClientHelloWithCookieRequest& operator=(ClientHelloWithCookieRequest const& o) noexcept = default;
                


// Fields

 uint32_t __declspec(property(get=__get_certificateResponseId, put=__set_certificateResponseId))  certificateResponseId;

constexpr void __set_certificateResponseId(uint32_t value) ;

constexpr uint32_t __get_certificateResponseId() const;

 GlobalNamespace::ByteArrayNetSerializable __declspec(property(get=__get_random, put=__set_random))  random;

constexpr void __set_random(GlobalNamespace::ByteArrayNetSerializable value) ;

constexpr GlobalNamespace::ByteArrayNetSerializable __get_random() const;

 GlobalNamespace::ByteArrayNetSerializable __declspec(property(get=__get_cookie, put=__set_cookie))  cookie;

constexpr void __set_cookie(GlobalNamespace::ByteArrayNetSerializable value) ;

constexpr GlobalNamespace::ByteArrayNetSerializable __get_cookie() const;


// Properties

static GlobalNamespace::PacketPool_1<BGNet::Core::Messages::ClientHelloWithCookieRequest> __declspec(property(get=get_pool))  pool;


// Methods

/// @brief Method get_pool addr 0xdddae4 size 0x40 virtual false final false
static GlobalNamespace::PacketPool_1<BGNet::Core::Messages::ClientHelloWithCookieRequest> get_pool() ;

/// @brief Method Init addr 0xdddb24 size 0x50 virtual false final false
 BGNet::Core::Messages::ClientHelloWithCookieRequest Init(uint32_t certificateResponseId, ::ArrayW<uint8_t> random, ::ArrayW<uint8_t> cookie) ;

/// @brief Method Serialize addr 0xde2cfc size 0x68 virtual true final false
 void Serialize(LiteNetLib::Utils::NetDataWriter writer) ;

/// @brief Method Deserialize addr 0xde2d64 size 0x6c virtual true final false
 void Deserialize(LiteNetLib::Utils::NetDataReader reader) ;

/// @brief Method Release addr 0xde2dd0 size 0x74 virtual true final false
 void Release() ;

// Ctor Parameters []
explicit ClientHelloWithCookieRequest() ;

/// @brief Method .ctor addr 0xde2e44 size 0xc4 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def BGNet::Core::Messages
NEED_NO_BOX(::BGNet::Core::Messages::ClientHelloWithCookieRequest);
DEFINE_IL2CPP_ARG_TYPE(::BGNet::Core::Messages::ClientHelloWithCookieRequest, "BGNet.Core.Messages", "ClientHelloWithCookieRequest");
} // end anonymous namespace
