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
class HelloVerifyRequest;
}
namespace {
// Type: BGNet.Core.Messages::HelloVerifyRequest
namespace BGNet::Core::Messages {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12724)), TypeDefinitionIndex(TypeDefinitionIndex(12979)), TypeDefinitionIndex(TypeDefinitionIndex(14531)), TypeDefinitionIndex(TypeDefinitionIndex(12954)), TypeDefinitionIndex(TypeDefinitionIndex(12968)), TypeDefinitionIndex(TypeDefinitionIndex(12966))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12971))
// CS Name: BGNet.Core.Messages.HelloVerifyRequest
class CORDL_TYPE HelloVerifyRequest : public BGNet::Core::Messages::BaseReliableResponse {
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
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~HelloVerifyRequest() = default;

// Ctor Parameters [CppParam { name: "", ty: "HelloVerifyRequest", modifiers: " const&", def_value: None }]
constexpr HelloVerifyRequest(HelloVerifyRequest const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HelloVerifyRequest", modifiers: "&&", def_value: None }]
constexpr HelloVerifyRequest(HelloVerifyRequest&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HelloVerifyRequest(void* ptr) noexcept : BGNet::Core::Messages::BaseReliableResponse(ptr) {
}


  constexpr HelloVerifyRequest& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HelloVerifyRequest& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HelloVerifyRequest& operator=(HelloVerifyRequest&& o) noexcept = default;
  constexpr HelloVerifyRequest& operator=(HelloVerifyRequest const& o) noexcept = default;
                


// Fields

 GlobalNamespace::ByteArrayNetSerializable __declspec(property(get=__get_cookie, put=__set_cookie))  cookie;

constexpr void __set_cookie(GlobalNamespace::ByteArrayNetSerializable value) ;

constexpr GlobalNamespace::ByteArrayNetSerializable __get_cookie() const;


// Properties

static GlobalNamespace::PacketPool_1<BGNet::Core::Messages::HelloVerifyRequest> __declspec(property(get=get_pool))  pool;


// Methods

/// @brief Method get_pool addr 0xde002c size 0x40 virtual false final false
static GlobalNamespace::PacketPool_1<BGNet::Core::Messages::HelloVerifyRequest> get_pool() ;

/// @brief Method Init addr 0xde034c size 0x28 virtual false final false
 BGNet::Core::Messages::HelloVerifyRequest Init(::ArrayW<uint8_t> cookie) ;

/// @brief Method Serialize addr 0xde2f08 size 0x34 virtual true final false
 void Serialize(LiteNetLib::Utils::NetDataWriter writer) ;

/// @brief Method Deserialize addr 0xde2f3c size 0x34 virtual true final false
 void Deserialize(LiteNetLib::Utils::NetDataReader reader) ;

/// @brief Method Release addr 0xde2f70 size 0x64 virtual true final false
 void Release() ;

// Ctor Parameters []
explicit HelloVerifyRequest() ;

/// @brief Method .ctor addr 0xde2fd4 size 0x88 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def BGNet::Core::Messages
NEED_NO_BOX(::BGNet::Core::Messages::HelloVerifyRequest);
DEFINE_IL2CPP_ARG_TYPE(::BGNet::Core::Messages::HelloVerifyRequest, "BGNet.Core.Messages", "HelloVerifyRequest");
} // end anonymous namespace
