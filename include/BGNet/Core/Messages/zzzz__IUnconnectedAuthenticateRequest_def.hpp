#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "BGNet/Core/Messages/zzzz__IUnconnectedMessage_def.hpp"
#include "BGNet/Core/Messages/zzzz__IUnconnectedReliableRequest_def.hpp"
#include "BGNet/Core/Messages/zzzz__IUnconnectedReliableResponse_def.hpp"
#include "BGNet/Core/Messages/zzzz__IUnconnectedResponse_def.hpp"
#include "GlobalNamespace/zzzz__IPoolablePacket_def.hpp"
#include "LiteNetLib/Utils/zzzz__INetSerializable_def.hpp"
// Forward declare root types
namespace BGNet::Core::Messages {
class IUnconnectedAuthenticateRequest;
}
namespace {
// Type: BGNet.Core.Messages::IUnconnectedAuthenticateRequest
namespace BGNet::Core::Messages {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12981)), TypeDefinitionIndex(TypeDefinitionIndex(12980)), TypeDefinitionIndex(TypeDefinitionIndex(12979)), TypeDefinitionIndex(TypeDefinitionIndex(12982)), TypeDefinitionIndex(TypeDefinitionIndex(14531)), TypeDefinitionIndex(TypeDefinitionIndex(12724))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12985))
// CS Name: BGNet.Core.Messages.IUnconnectedAuthenticateRequest
class CORDL_TYPE IUnconnectedAuthenticateRequest : public ::cordl_internals::InterfaceW {
public:
// Declarations
/// @brief Convert operator to BGNet::Core::Messages::IUnconnectedReliableResponse
constexpr operator  BGNet::Core::Messages::IUnconnectedReliableResponse() const noexcept;

/// @brief Convert operator to BGNet::Core::Messages::IUnconnectedReliableRequest
constexpr operator  BGNet::Core::Messages::IUnconnectedReliableRequest() const noexcept;

/// @brief Convert operator to BGNet::Core::Messages::IUnconnectedMessage
constexpr operator  BGNet::Core::Messages::IUnconnectedMessage() const noexcept;

/// @brief Convert operator to LiteNetLib::Utils::INetSerializable
constexpr operator  LiteNetLib::Utils::INetSerializable() const noexcept;

/// @brief Convert operator to GlobalNamespace::IPoolablePacket
constexpr operator  GlobalNamespace::IPoolablePacket() const noexcept;

/// @brief Convert operator to BGNet::Core::Messages::IUnconnectedResponse
constexpr operator  BGNet::Core::Messages::IUnconnectedResponse() const noexcept;

~IUnconnectedAuthenticateRequest() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IUnconnectedAuthenticateRequest(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def BGNet::Core::Messages
NEED_NO_BOX(::BGNet::Core::Messages::IUnconnectedAuthenticateRequest);
DEFINE_IL2CPP_ARG_TYPE(::BGNet::Core::Messages::IUnconnectedAuthenticateRequest, "BGNet.Core.Messages", "IUnconnectedAuthenticateRequest");
} // end anonymous namespace
