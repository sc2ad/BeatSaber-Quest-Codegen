#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "BGNet/Core/Messages/zzzz__BaseResponse_def.hpp"
#include "BGNet/Core/Messages/zzzz__IUnconnectedAcknowledgeMessage_def.hpp"
#include "BGNet/Core/Messages/zzzz__IUnconnectedMessage_def.hpp"
#include "BGNet/Core/Messages/zzzz__IUnconnectedResponse_def.hpp"
#include "GlobalNamespace/zzzz__IPoolablePacket_def.hpp"
#include "LiteNetLib/Utils/zzzz__INetSerializable_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace LiteNetLib::Utils {
class NetDataWriter;
}
namespace LiteNetLib::Utils {
class NetDataReader;
}
// Forward declare root types
namespace BGNet::Core::Messages {
class BaseAcknowledgeMessage;
}
namespace {
// Type: BGNet.Core.Messages::BaseAcknowledgeMessage
namespace BGNet::Core::Messages {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12981)), TypeDefinitionIndex(TypeDefinitionIndex(12979)), TypeDefinitionIndex(TypeDefinitionIndex(14531)), TypeDefinitionIndex(TypeDefinitionIndex(12724)), TypeDefinitionIndex(TypeDefinitionIndex(12955)), TypeDefinitionIndex(TypeDefinitionIndex(12984))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12937))
// CS Name: BGNet.Core.Messages.BaseAcknowledgeMessage
class CORDL_TYPE BaseAcknowledgeMessage : public BGNet::Core::Messages::BaseResponse {
public:
// Declarations
/// @brief Convert operator to BGNet::Core::Messages::IUnconnectedAcknowledgeMessage
constexpr operator  BGNet::Core::Messages::IUnconnectedAcknowledgeMessage() const noexcept;

/// @brief Convert operator to BGNet::Core::Messages::IUnconnectedResponse
constexpr operator  BGNet::Core::Messages::IUnconnectedResponse() const noexcept;

/// @brief Convert operator to BGNet::Core::Messages::IUnconnectedMessage
constexpr operator  BGNet::Core::Messages::IUnconnectedMessage() const noexcept;

/// @brief Convert operator to LiteNetLib::Utils::INetSerializable
constexpr operator  LiteNetLib::Utils::INetSerializable() const noexcept;

/// @brief Convert operator to GlobalNamespace::IPoolablePacket
constexpr operator  GlobalNamespace::IPoolablePacket() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~BaseAcknowledgeMessage() = default;

// Ctor Parameters [CppParam { name: "", ty: "BaseAcknowledgeMessage", modifiers: " const&", def_value: None }]
constexpr BaseAcknowledgeMessage(BaseAcknowledgeMessage const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BaseAcknowledgeMessage", modifiers: "&&", def_value: None }]
constexpr BaseAcknowledgeMessage(BaseAcknowledgeMessage&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BaseAcknowledgeMessage(void* ptr) noexcept : BGNet::Core::Messages::BaseResponse(ptr) {
}


  constexpr BaseAcknowledgeMessage& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BaseAcknowledgeMessage& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BaseAcknowledgeMessage& operator=(BaseAcknowledgeMessage&& o) noexcept = default;
  constexpr BaseAcknowledgeMessage& operator=(BaseAcknowledgeMessage const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get__messageHandled_k__BackingField, put=__set__messageHandled_k__BackingField))  _messageHandled_k__BackingField;

constexpr void __set__messageHandled_k__BackingField(bool value) ;

constexpr bool __get__messageHandled_k__BackingField() const;


// Properties

 uint8_t __declspec(property(get=get_resultCode))  resultCode;

 ::StringW __declspec(property(get=get_resultCodeString))  resultCodeString;

 bool __declspec(property(get=get_messageHandled, put=set_messageHandled))  messageHandled;


// Methods

/// @brief Method get_resultCode addr 0xdd84dc size 0x8 virtual true final false
 uint8_t get_resultCode() ;

/// @brief Method get_resultCodeString addr 0xdd84e4 size 0x6c virtual true final false
 ::StringW get_resultCodeString() ;

/// @brief Method get_messageHandled addr 0xdd8550 size 0x8 virtual true final true
 bool get_messageHandled() ;

/// @brief Method set_messageHandled addr 0xdd8558 size 0xc virtual false final false
 void set_messageHandled(bool value) ;

/// @brief Method Init addr 0xdd8564 size 0xc virtual false final false
 BGNet::Core::Messages::BaseAcknowledgeMessage Init(bool messageHandled) ;

/// @brief Method Serialize addr 0xdd8570 size 0x38 virtual true final false
 void Serialize(LiteNetLib::Utils::NetDataWriter writer) ;

/// @brief Method Deserialize addr 0xdd85a8 size 0x40 virtual true final false
 void Deserialize(LiteNetLib::Utils::NetDataReader reader) ;

// Ctor Parameters []
explicit BaseAcknowledgeMessage() ;

/// @brief Method .ctor addr 0xdd81bc size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def BGNet::Core::Messages
NEED_NO_BOX(::BGNet::Core::Messages::BaseAcknowledgeMessage);
DEFINE_IL2CPP_ARG_TYPE(::BGNet::Core::Messages::BaseAcknowledgeMessage, "BGNet.Core.Messages", "BaseAcknowledgeMessage");
} // end anonymous namespace
