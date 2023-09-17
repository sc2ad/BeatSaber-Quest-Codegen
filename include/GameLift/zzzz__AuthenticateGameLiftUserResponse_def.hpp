#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "BGNet/Core/Messages/zzzz__BaseReliableResponse_def.hpp"
#include "BGNet/Core/Messages/zzzz__IUnconnectedAuthenticateResponse_def.hpp"
#include "BGNet/Core/Messages/zzzz__IUnconnectedMessage_def.hpp"
#include "BGNet/Core/Messages/zzzz__IUnconnectedReliableRequest_def.hpp"
#include "BGNet/Core/Messages/zzzz__IUnconnectedReliableResponse_def.hpp"
#include "BGNet/Core/Messages/zzzz__IUnconnectedResponse_def.hpp"
#include "GameLift/zzzz__IGameLiftMessage_def.hpp"
#include "GameLift/zzzz__IGameLiftServerToClientMessage_def.hpp"
#include "GlobalNamespace/zzzz__IPoolablePacket_def.hpp"
#include "LiteNetLib/Utils/zzzz__INetSerializable_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
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
struct GameLift__AuthenticateGameLiftUserResponse__Result;
}
namespace GameLift {
class AuthenticateGameLiftUserResponse;
}
namespace {
// Type: ::Result
namespace GameLift {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2557))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12926))
// CS Name: GameLift.AuthenticateGameLiftUserResponse::Result
struct CORDL_TYPE GameLift__AuthenticateGameLiftUserResponse__Result : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GameLift__AuthenticateGameLiftUserResponse__Result(int32_t value__) noexcept;


                    constexpr GameLift__AuthenticateGameLiftUserResponse__Result(GameLift__AuthenticateGameLiftUserResponse__Result const&) = default;
                    constexpr GameLift__AuthenticateGameLiftUserResponse__Result(GameLift__AuthenticateGameLiftUserResponse__Result&&) = default;
                    constexpr GameLift__AuthenticateGameLiftUserResponse__Result& operator=(GameLift__AuthenticateGameLiftUserResponse__Result const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GameLift__AuthenticateGameLiftUserResponse__Result& operator=(GameLift__AuthenticateGameLiftUserResponse__Result&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GameLift__AuthenticateGameLiftUserResponse__Result(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __GameLift__AuthenticateGameLiftUserResponse__Result_Unwrapped : int32_t {
__Success = 0,
__Failed = 1,
__UnknownError = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GameLift__AuthenticateGameLiftUserResponse__Result_Unwrapped () const noexcept {
return std::bit_cast<__GameLift__AuthenticateGameLiftUserResponse__Result_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Success offset 0
static GameLift::GameLift__AuthenticateGameLiftUserResponse__Result const Success;

/// @brief Field Failed offset 0
static GameLift::GameLift__AuthenticateGameLiftUserResponse__Result const Failed;

/// @brief Field UnknownError offset 0
static GameLift::GameLift__AuthenticateGameLiftUserResponse__Result const UnknownError;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GameLift
// Type: GameLift::AuthenticateGameLiftUserResponse
namespace GameLift {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12986)), TypeDefinitionIndex(TypeDefinitionIndex(12982)), TypeDefinitionIndex(TypeDefinitionIndex(12979)), TypeDefinitionIndex(TypeDefinitionIndex(12724)), TypeDefinitionIndex(TypeDefinitionIndex(12954)), TypeDefinitionIndex(TypeDefinitionIndex(14531)), TypeDefinitionIndex(TypeDefinitionIndex(12922)), TypeDefinitionIndex(TypeDefinitionIndex(12981)), TypeDefinitionIndex(TypeDefinitionIndex(12924)), TypeDefinitionIndex(TypeDefinitionIndex(12980))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12927))
// CS Name: GameLift.AuthenticateGameLiftUserResponse
class CORDL_TYPE AuthenticateGameLiftUserResponse : public BGNet::Core::Messages::BaseReliableResponse {
public:
// Declarations
using Result = GameLift::GameLift__AuthenticateGameLiftUserResponse__Result;

/// @brief Convert operator to GameLift::IGameLiftServerToClientMessage
constexpr operator  GameLift::IGameLiftServerToClientMessage() const noexcept;

/// @brief Convert operator to GameLift::IGameLiftMessage
constexpr operator  GameLift::IGameLiftMessage() const noexcept;

/// @brief Convert operator to BGNet::Core::Messages::IUnconnectedMessage
constexpr operator  BGNet::Core::Messages::IUnconnectedMessage() const noexcept;

/// @brief Convert operator to LiteNetLib::Utils::INetSerializable
constexpr operator  LiteNetLib::Utils::INetSerializable() const noexcept;

/// @brief Convert operator to GlobalNamespace::IPoolablePacket
constexpr operator  GlobalNamespace::IPoolablePacket() const noexcept;

/// @brief Convert operator to BGNet::Core::Messages::IUnconnectedAuthenticateResponse
constexpr operator  BGNet::Core::Messages::IUnconnectedAuthenticateResponse() const noexcept;

/// @brief Convert operator to BGNet::Core::Messages::IUnconnectedReliableResponse
constexpr operator  BGNet::Core::Messages::IUnconnectedReliableResponse() const noexcept;

/// @brief Convert operator to BGNet::Core::Messages::IUnconnectedReliableRequest
constexpr operator  BGNet::Core::Messages::IUnconnectedReliableRequest() const noexcept;

/// @brief Convert operator to BGNet::Core::Messages::IUnconnectedResponse
constexpr operator  BGNet::Core::Messages::IUnconnectedResponse() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~AuthenticateGameLiftUserResponse() = default;

// Ctor Parameters [CppParam { name: "", ty: "AuthenticateGameLiftUserResponse", modifiers: " const&", def_value: None }]
constexpr AuthenticateGameLiftUserResponse(AuthenticateGameLiftUserResponse const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AuthenticateGameLiftUserResponse", modifiers: "&&", def_value: None }]
constexpr AuthenticateGameLiftUserResponse(AuthenticateGameLiftUserResponse&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AuthenticateGameLiftUserResponse(void* ptr) noexcept : BGNet::Core::Messages::BaseReliableResponse(ptr) {
}


  constexpr AuthenticateGameLiftUserResponse& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AuthenticateGameLiftUserResponse& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AuthenticateGameLiftUserResponse& operator=(AuthenticateGameLiftUserResponse&& o) noexcept = default;
  constexpr AuthenticateGameLiftUserResponse& operator=(AuthenticateGameLiftUserResponse const& o) noexcept = default;
                


// Fields

 GameLift::GameLift__AuthenticateGameLiftUserResponse__Result __declspec(property(get=__get_result, put=__set_result))  result;

constexpr void __set_result(GameLift::GameLift__AuthenticateGameLiftUserResponse__Result value) ;

constexpr GameLift::GameLift__AuthenticateGameLiftUserResponse__Result __get_result() const;


// Properties

static GlobalNamespace::PacketPool_1<GameLift::AuthenticateGameLiftUserResponse> __declspec(property(get=get_pool))  pool;

 uint8_t __declspec(property(get=get_resultCode))  resultCode;

 ::StringW __declspec(property(get=get_resultCodeString))  resultCodeString;

 bool __declspec(property(get=get_isAuthenticated))  isAuthenticated;


// Methods

/// @brief Method get_pool addr 0xdd7f84 size 0x40 virtual false final false
static GlobalNamespace::PacketPool_1<GameLift::AuthenticateGameLiftUserResponse> get_pool() ;

/// @brief Method get_resultCode addr 0xdd7fc4 size 0x8 virtual true final false
 uint8_t get_resultCode() ;

/// @brief Method get_resultCodeString addr 0xdd7fcc size 0x68 virtual true final false
 ::StringW get_resultCodeString() ;

/// @brief Method get_isAuthenticated addr 0xdd8034 size 0x10 virtual true final true
 bool get_isAuthenticated() ;

/// @brief Method Init addr 0xdd8044 size 0x8 virtual false final false
 GameLift::AuthenticateGameLiftUserResponse Init(GameLift::GameLift__AuthenticateGameLiftUserResponse__Result result) ;

/// @brief Method Serialize addr 0xdd804c size 0x38 virtual true final false
 void Serialize(LiteNetLib::Utils::NetDataWriter writer) ;

/// @brief Method Deserialize addr 0xdd8084 size 0x40 virtual true final false
 void Deserialize(LiteNetLib::Utils::NetDataReader reader) ;

/// @brief Method Release addr 0xdd80c4 size 0x54 virtual true final false
 void Release() ;

// Ctor Parameters []
explicit AuthenticateGameLiftUserResponse() ;

/// @brief Method .ctor addr 0xdd8118 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GameLift
DEFINE_IL2CPP_ARG_TYPE(::GameLift::GameLift__AuthenticateGameLiftUserResponse__Result, "GameLift", "AuthenticateGameLiftUserResponse/Result");
NEED_NO_BOX(::GameLift::AuthenticateGameLiftUserResponse);
DEFINE_IL2CPP_ARG_TYPE(::GameLift::AuthenticateGameLiftUserResponse, "GameLift", "AuthenticateGameLiftUserResponse");
} // end anonymous namespace
