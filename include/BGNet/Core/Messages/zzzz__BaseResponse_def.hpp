#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "BGNet/Core/Messages/zzzz__IUnconnectedMessage_def.hpp"
#include "BGNet/Core/Messages/zzzz__IUnconnectedResponse_def.hpp"
#include "GlobalNamespace/zzzz__IPoolablePacket_def.hpp"
#include "LiteNetLib/Utils/zzzz__INetSerializable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace LiteNetLib::Utils {
class NetDataReader;
}
namespace BGNet::Core::Messages {
class IUnconnectedResponse;
}
namespace LiteNetLib::Utils {
class NetDataWriter;
}
// Forward declare root types
namespace BGNet::Core::Messages {
class BaseResponse;
}
namespace {
// Type: BGNet.Core.Messages::BaseResponse
namespace BGNet::Core::Messages {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12981)), TypeDefinitionIndex(TypeDefinitionIndex(14531)), TypeDefinitionIndex(TypeDefinitionIndex(12724)), TypeDefinitionIndex(TypeDefinitionIndex(12979))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12955))
// CS Name: BGNet.Core.Messages.BaseResponse
class CORDL_TYPE BaseResponse : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
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

virtual ~BaseResponse() = default;

// Ctor Parameters [CppParam { name: "", ty: "BaseResponse", modifiers: " const&", def_value: None }]
constexpr BaseResponse(BaseResponse const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BaseResponse", modifiers: "&&", def_value: None }]
constexpr BaseResponse(BaseResponse&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BaseResponse(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr BaseResponse& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BaseResponse& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BaseResponse& operator=(BaseResponse&& o) noexcept = default;
  constexpr BaseResponse& operator=(BaseResponse const& o) noexcept = default;
                


// Fields

 uint32_t __declspec(property(get=__get__responseId_k__BackingField, put=__set__responseId_k__BackingField))  _responseId_k__BackingField;

constexpr void __set__responseId_k__BackingField(uint32_t value) ;

constexpr uint32_t __get__responseId_k__BackingField() const;


// Properties

 uint32_t __declspec(property(get=get_responseId, put=set_responseId))  responseId;

 uint8_t __declspec(property(get=get_resultCode))  resultCode;

 ::StringW __declspec(property(get=get_resultCodeString))  resultCodeString;


// Methods

/// @brief Method get_responseId addr 0xdde814 size 0x8 virtual true final true
 uint32_t get_responseId() ;

/// @brief Method set_responseId addr 0xdde81c size 0x8 virtual false final false
 void set_responseId(uint32_t value) ;

/// @brief Method get_resultCode addr 0xdde824 size 0x8 virtual true final false
 uint8_t get_resultCode() ;

/// @brief Method get_resultCodeString addr 0xdde82c size 0x40 virtual true final false
 ::StringW get_resultCodeString() ;

/// @brief Method Serialize addr 0xdde86c size 0x24 virtual true final false
 void Serialize(LiteNetLib::Utils::NetDataWriter writer) ;

/// @brief Method Deserialize addr 0xdde890 size 0x28 virtual true final false
 void Deserialize(LiteNetLib::Utils::NetDataReader reader) ;

/// @brief Method Release addr 0x0 size 0xffffffffffffffff virtual true final false
 void Release() ;

/// @brief Method BGNet.Core.Messages.IUnconnectedResponse.WithResponseId addr 0xdde8b8 size 0x8 virtual true final true
 BGNet::Core::Messages::IUnconnectedResponse BGNet_Core_Messages_IUnconnectedResponse_WithResponseId(uint32_t responseId) ;

// Ctor Parameters []
explicit BaseResponse() ;

/// @brief Method .ctor addr 0xdde8c0 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def BGNet::Core::Messages
NEED_NO_BOX(::BGNet::Core::Messages::BaseResponse);
DEFINE_IL2CPP_ARG_TYPE(::BGNet::Core::Messages::BaseResponse, "BGNet.Core.Messages", "BaseResponse");
} // end anonymous namespace
