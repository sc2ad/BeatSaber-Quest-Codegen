#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "BGNet/Core/Messages/zzzz__BaseReliableResponse_def.hpp"
#include "BGNet/Core/Messages/zzzz__IUnconnectedAuthenticateRequest_def.hpp"
#include "BGNet/Core/Messages/zzzz__IUnconnectedMessage_def.hpp"
#include "BGNet/Core/Messages/zzzz__IUnconnectedReliableRequest_def.hpp"
#include "BGNet/Core/Messages/zzzz__IUnconnectedReliableResponse_def.hpp"
#include "BGNet/Core/Messages/zzzz__IUnconnectedResponse_def.hpp"
#include "GameLift/zzzz__IGameLiftClientToServerMessage_def.hpp"
#include "GameLift/zzzz__IGameLiftMessage_def.hpp"
#include "GlobalNamespace/zzzz__IPoolablePacket_def.hpp"
#include "LiteNetLib/Utils/zzzz__INetSerializable_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
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
namespace GameLift {
class AuthenticateGameLiftUserRequest;
}
namespace {
// Type: GameLift::AuthenticateGameLiftUserRequest
namespace GameLift {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12954)), TypeDefinitionIndex(TypeDefinitionIndex(12923)), TypeDefinitionIndex(TypeDefinitionIndex(12979)), TypeDefinitionIndex(TypeDefinitionIndex(12982)), TypeDefinitionIndex(TypeDefinitionIndex(12981)), TypeDefinitionIndex(TypeDefinitionIndex(14531)), TypeDefinitionIndex(TypeDefinitionIndex(12980)), TypeDefinitionIndex(TypeDefinitionIndex(12985)), TypeDefinitionIndex(TypeDefinitionIndex(12724)), TypeDefinitionIndex(TypeDefinitionIndex(12922))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12925))
// CS Name: GameLift.AuthenticateGameLiftUserRequest
class CORDL_TYPE AuthenticateGameLiftUserRequest : public BGNet::Core::Messages::BaseReliableResponse {
public:
// Declarations
/// @brief Convert operator to GameLift::IGameLiftClientToServerMessage
constexpr operator  GameLift::IGameLiftClientToServerMessage() const noexcept;

/// @brief Convert operator to GameLift::IGameLiftMessage
constexpr operator  GameLift::IGameLiftMessage() const noexcept;

/// @brief Convert operator to BGNet::Core::Messages::IUnconnectedMessage
constexpr operator  BGNet::Core::Messages::IUnconnectedMessage() const noexcept;

/// @brief Convert operator to LiteNetLib::Utils::INetSerializable
constexpr operator  LiteNetLib::Utils::INetSerializable() const noexcept;

/// @brief Convert operator to GlobalNamespace::IPoolablePacket
constexpr operator  GlobalNamespace::IPoolablePacket() const noexcept;

/// @brief Convert operator to BGNet::Core::Messages::IUnconnectedAuthenticateRequest
constexpr operator  BGNet::Core::Messages::IUnconnectedAuthenticateRequest() const noexcept;

/// @brief Convert operator to BGNet::Core::Messages::IUnconnectedReliableResponse
constexpr operator  BGNet::Core::Messages::IUnconnectedReliableResponse() const noexcept;

/// @brief Convert operator to BGNet::Core::Messages::IUnconnectedReliableRequest
constexpr operator  BGNet::Core::Messages::IUnconnectedReliableRequest() const noexcept;

/// @brief Convert operator to BGNet::Core::Messages::IUnconnectedResponse
constexpr operator  BGNet::Core::Messages::IUnconnectedResponse() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~AuthenticateGameLiftUserRequest() = default;

// Ctor Parameters [CppParam { name: "", ty: "AuthenticateGameLiftUserRequest", modifiers: " const&", def_value: None }]
constexpr AuthenticateGameLiftUserRequest(AuthenticateGameLiftUserRequest const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AuthenticateGameLiftUserRequest", modifiers: "&&", def_value: None }]
constexpr AuthenticateGameLiftUserRequest(AuthenticateGameLiftUserRequest&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AuthenticateGameLiftUserRequest(void* ptr) noexcept : BGNet::Core::Messages::BaseReliableResponse(ptr) {
}


  constexpr AuthenticateGameLiftUserRequest& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AuthenticateGameLiftUserRequest& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AuthenticateGameLiftUserRequest& operator=(AuthenticateGameLiftUserRequest&& o) noexcept = default;
  constexpr AuthenticateGameLiftUserRequest& operator=(AuthenticateGameLiftUserRequest const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__userId_k__BackingField, put=__set__userId_k__BackingField))  _userId_k__BackingField;

constexpr void __set__userId_k__BackingField(::StringW value) ;

constexpr ::StringW __get__userId_k__BackingField() const;

 ::StringW __declspec(property(get=__get__userName_k__BackingField, put=__set__userName_k__BackingField))  _userName_k__BackingField;

constexpr void __set__userName_k__BackingField(::StringW value) ;

constexpr ::StringW __get__userName_k__BackingField() const;

 ::StringW __declspec(property(get=__get_playerSessionId, put=__set_playerSessionId))  playerSessionId;

constexpr void __set_playerSessionId(::StringW value) ;

constexpr ::StringW __get_playerSessionId() const;


// Properties

static GlobalNamespace::PacketPool_1<GameLift::AuthenticateGameLiftUserRequest> __declspec(property(get=get_pool))  pool;

 ::StringW __declspec(property(get=get_userId, put=set_userId))  userId;

 ::StringW __declspec(property(get=get_userName, put=set_userName))  userName;


// Methods

/// @brief Method get_pool addr 0xdd7e08 size 0x40 virtual false final false
static GlobalNamespace::PacketPool_1<GameLift::AuthenticateGameLiftUserRequest> get_pool() ;

/// @brief Method get_userId addr 0xdd7e48 size 0x8 virtual true final true
 ::StringW get_userId() ;

/// @brief Method set_userId addr 0xdd7e50 size 0x8 virtual false final false
 void set_userId(::StringW value) ;

/// @brief Method get_userName addr 0xdd7e58 size 0x8 virtual true final true
 ::StringW get_userName() ;

/// @brief Method set_userName addr 0xdd7e60 size 0x8 virtual false final false
 void set_userName(::StringW value) ;

/// @brief Method Init addr 0xdd7e68 size 0xc virtual false final false
 GameLift::AuthenticateGameLiftUserRequest Init(::StringW userId, ::StringW userName, ::StringW playerSessionId) ;

/// @brief Method Serialize addr 0xdd7e74 size 0x58 virtual true final false
 void Serialize(LiteNetLib::Utils::NetDataWriter writer) ;

/// @brief Method Deserialize addr 0xdd7ecc size 0x5c virtual true final false
 void Deserialize(LiteNetLib::Utils::NetDataReader reader) ;

/// @brief Method Release addr 0xdd7f28 size 0x54 virtual true final false
 void Release() ;

// Ctor Parameters []
explicit AuthenticateGameLiftUserRequest() ;

/// @brief Method .ctor addr 0xdd7f7c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GameLift
NEED_NO_BOX(::GameLift::AuthenticateGameLiftUserRequest);
DEFINE_IL2CPP_ARG_TYPE(::GameLift::AuthenticateGameLiftUserRequest, "GameLift", "AuthenticateGameLiftUserRequest");
} // end anonymous namespace
