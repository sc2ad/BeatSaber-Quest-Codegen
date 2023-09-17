#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "BGNet/Core/Messages/zzzz__IUnconnectedMessage_def.hpp"
#include "GlobalNamespace/zzzz__IPoolablePacket_def.hpp"
#include "LiteNetLib/Utils/zzzz__INetSerializable_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
// Forward declare root types
namespace BGNet::Core::Messages {
class IUnconnectedResponse;
}
namespace {
// Type: BGNet.Core.Messages::IUnconnectedResponse
namespace BGNet::Core::Messages {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12979)), TypeDefinitionIndex(TypeDefinitionIndex(14531)), TypeDefinitionIndex(TypeDefinitionIndex(12724))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12981))
// CS Name: BGNet.Core.Messages.IUnconnectedResponse
class CORDL_TYPE IUnconnectedResponse : public ::cordl_internals::InterfaceW {
public:
// Declarations
/// @brief Convert operator to BGNet::Core::Messages::IUnconnectedMessage
constexpr operator  BGNet::Core::Messages::IUnconnectedMessage() const noexcept;

/// @brief Convert operator to LiteNetLib::Utils::INetSerializable
constexpr operator  LiteNetLib::Utils::INetSerializable() const noexcept;

/// @brief Convert operator to GlobalNamespace::IPoolablePacket
constexpr operator  GlobalNamespace::IPoolablePacket() const noexcept;

~IUnconnectedResponse() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IUnconnectedResponse(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 uint32_t __declspec(property(get=get_responseId))  responseId;

 uint8_t __declspec(property(get=get_resultCode))  resultCode;

 ::StringW __declspec(property(get=get_resultCodeString))  resultCodeString;


// Methods

/// @brief Method get_responseId addr 0x0 size 0xffffffffffffffff virtual true final false
 uint32_t get_responseId() ;

/// @brief Method get_resultCode addr 0x0 size 0xffffffffffffffff virtual true final false
 uint8_t get_resultCode() ;

/// @brief Method get_resultCodeString addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW get_resultCodeString() ;

/// @brief Method WithResponseId addr 0x0 size 0xffffffffffffffff virtual true final false
 BGNet::Core::Messages::IUnconnectedResponse WithResponseId(uint32_t responseId) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def BGNet::Core::Messages
NEED_NO_BOX(::BGNet::Core::Messages::IUnconnectedResponse);
DEFINE_IL2CPP_ARG_TYPE(::BGNet::Core::Messages::IUnconnectedResponse, "BGNet.Core.Messages", "IUnconnectedResponse");
} // end anonymous namespace
