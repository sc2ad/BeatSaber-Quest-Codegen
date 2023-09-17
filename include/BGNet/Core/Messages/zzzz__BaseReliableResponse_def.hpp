#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "BGNet/Core/Messages/zzzz__IUnconnectedMessage_def.hpp"
#include "BGNet/Core/Messages/zzzz__IUnconnectedReliableRequest_def.hpp"
#include "BGNet/Core/Messages/zzzz__IUnconnectedReliableResponse_def.hpp"
#include "BGNet/Core/Messages/zzzz__IUnconnectedResponse_def.hpp"
#include "GlobalNamespace/zzzz__IPoolablePacket_def.hpp"
#include "LiteNetLib/Utils/zzzz__INetSerializable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace BGNet::Core::Messages {
class IUnconnectedReliableResponse;
}
namespace BGNet::Core::Messages {
class IUnconnectedReliableRequest;
}
namespace BGNet::Core::Messages {
class IUnconnectedResponse;
}
namespace LiteNetLib::Utils {
class NetDataWriter;
}
namespace LiteNetLib::Utils {
class NetDataReader;
}
// Forward declare root types
namespace BGNet::Core::Messages {
class BaseReliableResponse;
}
namespace {
// Type: BGNet.Core.Messages::BaseReliableResponse
namespace BGNet::Core::Messages {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12979)), TypeDefinitionIndex(TypeDefinitionIndex(14531)), TypeDefinitionIndex(TypeDefinitionIndex(12724)), TypeDefinitionIndex(TypeDefinitionIndex(12982)), TypeDefinitionIndex(TypeDefinitionIndex(12981)), TypeDefinitionIndex(TypeDefinitionIndex(12980))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12954))
// CS Name: BGNet.Core.Messages.BaseReliableResponse
class CORDL_TYPE BaseReliableResponse : public ::bs_hook::Il2CppWrapperType {
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

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~BaseReliableResponse() = default;

// Ctor Parameters [CppParam { name: "", ty: "BaseReliableResponse", modifiers: " const&", def_value: None }]
constexpr BaseReliableResponse(BaseReliableResponse const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BaseReliableResponse", modifiers: "&&", def_value: None }]
constexpr BaseReliableResponse(BaseReliableResponse&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BaseReliableResponse(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr BaseReliableResponse& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BaseReliableResponse& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BaseReliableResponse& operator=(BaseReliableResponse&& o) noexcept = default;
  constexpr BaseReliableResponse& operator=(BaseReliableResponse const& o) noexcept = default;
                


// Fields

 uint32_t __declspec(property(get=__get__requestId_k__BackingField, put=__set__requestId_k__BackingField))  _requestId_k__BackingField;

constexpr void __set__requestId_k__BackingField(uint32_t value) ;

constexpr uint32_t __get__requestId_k__BackingField() const;

 uint32_t __declspec(property(get=__get__responseId_k__BackingField, put=__set__responseId_k__BackingField))  _responseId_k__BackingField;

constexpr void __set__responseId_k__BackingField(uint32_t value) ;

constexpr uint32_t __get__responseId_k__BackingField() const;


// Properties

 uint32_t __declspec(property(get=get_requestId, put=set_requestId))  requestId;

 uint32_t __declspec(property(get=get_responseId, put=set_responseId))  responseId;

 uint8_t __declspec(property(get=get_resultCode))  resultCode;

 ::StringW __declspec(property(get=get_resultCodeString))  resultCodeString;


// Methods

/// @brief Method get_requestId addr 0xdde708 size 0x8 virtual true final true
 uint32_t get_requestId() ;

/// @brief Method set_requestId addr 0xdde710 size 0x8 virtual false final false
 void set_requestId(uint32_t value) ;

/// @brief Method get_responseId addr 0xdde718 size 0x8 virtual true final true
 uint32_t get_responseId() ;

/// @brief Method set_responseId addr 0xdde720 size 0x8 virtual false final false
 void set_responseId(uint32_t value) ;

/// @brief Method get_resultCode addr 0xdde728 size 0x8 virtual true final false
 uint8_t get_resultCode() ;

/// @brief Method get_resultCodeString addr 0xdde730 size 0x40 virtual true final false
 ::StringW get_resultCodeString() ;

/// @brief Method Serialize addr 0xdde770 size 0x40 virtual true final false
 void Serialize(LiteNetLib::Utils::NetDataWriter writer) ;

/// @brief Method Deserialize addr 0xdde7b0 size 0x44 virtual true final false
 void Deserialize(LiteNetLib::Utils::NetDataReader reader) ;

/// @brief Method Release addr 0x0 size 0xffffffffffffffff virtual true final false
 void Release() ;

/// @brief Method BGNet.Core.Messages.IUnconnectedReliableRequest.WithRequestId addr 0xdde7f4 size 0x8 virtual true final true
 BGNet::Core::Messages::IUnconnectedReliableRequest BGNet_Core_Messages_IUnconnectedReliableRequest_WithRequestId(uint32_t requestId) ;

/// @brief Method BGNet.Core.Messages.IUnconnectedResponse.WithResponseId addr 0xdde7fc size 0x8 virtual true final true
 BGNet::Core::Messages::IUnconnectedResponse BGNet_Core_Messages_IUnconnectedResponse_WithResponseId(uint32_t responseId) ;

/// @brief Method BGNet.Core.Messages.IUnconnectedReliableResponse.WithRequestAndResponseId addr 0xdde804 size 0x8 virtual true final true
 BGNet::Core::Messages::IUnconnectedReliableResponse BGNet_Core_Messages_IUnconnectedReliableResponse_WithRequestAndResponseId(uint32_t requestId, uint32_t responseId) ;

// Ctor Parameters []
explicit BaseReliableResponse() ;

/// @brief Method .ctor addr 0xdde80c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def BGNet::Core::Messages
NEED_NO_BOX(::BGNet::Core::Messages::BaseReliableResponse);
DEFINE_IL2CPP_ARG_TYPE(::BGNet::Core::Messages::BaseReliableResponse, "BGNet.Core.Messages", "BaseReliableResponse");
} // end anonymous namespace
