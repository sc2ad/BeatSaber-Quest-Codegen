#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "BGNet/Core/Messages/zzzz__BaseReliableResponse_def.hpp"
#include "BGNet/Core/Messages/zzzz__IHandshakeMessage_def.hpp"
#include "BGNet/Core/Messages/zzzz__IHandshakeServerToClientMessage_def.hpp"
#include "BGNet/Core/Messages/zzzz__IUnconnectedMessage_def.hpp"
#include "GlobalNamespace/zzzz__IPoolablePacket_def.hpp"
#include "LiteNetLib/Utils/zzzz__INetSerializable_def.hpp"
namespace GlobalNamespace {
template<typename T>
class PacketPool_1;
}
// Forward declare root types
namespace BGNet::Core::Messages {
class ChangeCipherSpecRequest;
}
namespace {
// Type: BGNet.Core.Messages::ChangeCipherSpecRequest
namespace BGNet::Core::Messages {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14531)), TypeDefinitionIndex(TypeDefinitionIndex(12968)), TypeDefinitionIndex(TypeDefinitionIndex(12724)), TypeDefinitionIndex(TypeDefinitionIndex(12954)), TypeDefinitionIndex(TypeDefinitionIndex(12966)), TypeDefinitionIndex(TypeDefinitionIndex(12979))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12976))
// CS Name: BGNet.Core.Messages.ChangeCipherSpecRequest
class CORDL_TYPE ChangeCipherSpecRequest : public BGNet::Core::Messages::BaseReliableResponse {
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
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~ChangeCipherSpecRequest() = default;

// Ctor Parameters [CppParam { name: "", ty: "ChangeCipherSpecRequest", modifiers: " const&", def_value: None }]
constexpr ChangeCipherSpecRequest(ChangeCipherSpecRequest const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ChangeCipherSpecRequest", modifiers: "&&", def_value: None }]
constexpr ChangeCipherSpecRequest(ChangeCipherSpecRequest&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ChangeCipherSpecRequest(void* ptr) noexcept : BGNet::Core::Messages::BaseReliableResponse(ptr) {
}


  constexpr ChangeCipherSpecRequest& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ChangeCipherSpecRequest& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ChangeCipherSpecRequest& operator=(ChangeCipherSpecRequest&& o) noexcept = default;
  constexpr ChangeCipherSpecRequest& operator=(ChangeCipherSpecRequest const& o) noexcept = default;
                


// Properties

static GlobalNamespace::PacketPool_1<BGNet::Core::Messages::ChangeCipherSpecRequest> __declspec(property(get=get_pool))  pool;


// Methods

/// @brief Method get_pool addr 0xde00ec size 0x40 virtual false final false
static GlobalNamespace::PacketPool_1<BGNet::Core::Messages::ChangeCipherSpecRequest> get_pool() ;

/// @brief Method Release addr 0xde3c7c size 0x54 virtual true final false
 void Release() ;

// Ctor Parameters []
explicit ChangeCipherSpecRequest() ;

/// @brief Method .ctor addr 0xde3cd0 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def BGNet::Core::Messages
NEED_NO_BOX(::BGNet::Core::Messages::ChangeCipherSpecRequest);
DEFINE_IL2CPP_ARG_TYPE(::BGNet::Core::Messages::ChangeCipherSpecRequest, "BGNet.Core.Messages", "ChangeCipherSpecRequest");
} // end anonymous namespace
