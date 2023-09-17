#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "BGNet/Core/Messages/zzzz__IUnconnectedMessage_def.hpp"
#include "GlobalNamespace/zzzz__IPoolablePacket_def.hpp"
#include "LiteNetLib/Utils/zzzz__INetSerializable_def.hpp"
#include <cstdint>
// Forward declare root types
namespace BGNet::Core::Messages {
class IUnconnectedReliableRequest;
}
namespace {
// Type: BGNet.Core.Messages::IUnconnectedReliableRequest
namespace BGNet::Core::Messages {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14531)), TypeDefinitionIndex(TypeDefinitionIndex(12724)), TypeDefinitionIndex(TypeDefinitionIndex(12979))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12980))
// CS Name: BGNet.Core.Messages.IUnconnectedReliableRequest
class CORDL_TYPE IUnconnectedReliableRequest : public ::cordl_internals::InterfaceW {
public:
// Declarations
/// @brief Convert operator to BGNet::Core::Messages::IUnconnectedMessage
constexpr operator  BGNet::Core::Messages::IUnconnectedMessage() const noexcept;

/// @brief Convert operator to LiteNetLib::Utils::INetSerializable
constexpr operator  LiteNetLib::Utils::INetSerializable() const noexcept;

/// @brief Convert operator to GlobalNamespace::IPoolablePacket
constexpr operator  GlobalNamespace::IPoolablePacket() const noexcept;

~IUnconnectedReliableRequest() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IUnconnectedReliableRequest(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 uint32_t __declspec(property(get=get_requestId))  requestId;


// Methods

/// @brief Method get_requestId addr 0x0 size 0xffffffffffffffff virtual true final false
 uint32_t get_requestId() ;

/// @brief Method WithRequestId addr 0x0 size 0xffffffffffffffff virtual true final false
 BGNet::Core::Messages::IUnconnectedReliableRequest WithRequestId(uint32_t requestId) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def BGNet::Core::Messages
NEED_NO_BOX(::BGNet::Core::Messages::IUnconnectedReliableRequest);
DEFINE_IL2CPP_ARG_TYPE(::BGNet::Core::Messages::IUnconnectedReliableRequest, "BGNet.Core.Messages", "IUnconnectedReliableRequest");
} // end anonymous namespace
