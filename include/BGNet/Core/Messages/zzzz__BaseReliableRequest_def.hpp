#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "BGNet/Core/Messages/zzzz__IUnconnectedMessage_def.hpp"
#include "BGNet/Core/Messages/zzzz__IUnconnectedReliableRequest_def.hpp"
#include "GlobalNamespace/zzzz__IPoolablePacket_def.hpp"
#include "LiteNetLib/Utils/zzzz__INetSerializable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace LiteNetLib::Utils {
class NetDataReader;
}
namespace BGNet::Core::Messages {
class IUnconnectedReliableRequest;
}
namespace LiteNetLib::Utils {
class NetDataWriter;
}
// Forward declare root types
namespace BGNet::Core::Messages {
class BaseReliableRequest;
}
namespace {
// Type: BGNet.Core.Messages::BaseReliableRequest
namespace BGNet::Core::Messages {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12979)), TypeDefinitionIndex(TypeDefinitionIndex(12724)), TypeDefinitionIndex(TypeDefinitionIndex(12980)), TypeDefinitionIndex(TypeDefinitionIndex(14531))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12953))
// CS Name: BGNet.Core.Messages.BaseReliableRequest
class CORDL_TYPE BaseReliableRequest : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to BGNet::Core::Messages::IUnconnectedReliableRequest
constexpr operator  BGNet::Core::Messages::IUnconnectedReliableRequest() const noexcept;

/// @brief Convert operator to BGNet::Core::Messages::IUnconnectedMessage
constexpr operator  BGNet::Core::Messages::IUnconnectedMessage() const noexcept;

/// @brief Convert operator to LiteNetLib::Utils::INetSerializable
constexpr operator  LiteNetLib::Utils::INetSerializable() const noexcept;

/// @brief Convert operator to GlobalNamespace::IPoolablePacket
constexpr operator  GlobalNamespace::IPoolablePacket() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~BaseReliableRequest() = default;

// Ctor Parameters [CppParam { name: "", ty: "BaseReliableRequest", modifiers: " const&", def_value: None }]
constexpr BaseReliableRequest(BaseReliableRequest const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BaseReliableRequest", modifiers: "&&", def_value: None }]
constexpr BaseReliableRequest(BaseReliableRequest&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BaseReliableRequest(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr BaseReliableRequest& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BaseReliableRequest& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BaseReliableRequest& operator=(BaseReliableRequest&& o) noexcept = default;
  constexpr BaseReliableRequest& operator=(BaseReliableRequest const& o) noexcept = default;
                


// Fields

 uint32_t __declspec(property(get=__get__requestId_k__BackingField, put=__set__requestId_k__BackingField))  _requestId_k__BackingField;

constexpr void __set__requestId_k__BackingField(uint32_t value) ;

constexpr uint32_t __get__requestId_k__BackingField() const;


// Properties

 uint32_t __declspec(property(get=get_requestId, put=set_requestId))  requestId;


// Methods

/// @brief Method get_requestId addr 0xdde6f0 size 0x8 virtual true final true
 uint32_t get_requestId() ;

/// @brief Method set_requestId addr 0xdde6f8 size 0x8 virtual false final false
 void set_requestId(uint32_t value) ;

/// @brief Method Serialize addr 0xdde510 size 0x24 virtual true final false
 void Serialize(LiteNetLib::Utils::NetDataWriter writer) ;

/// @brief Method Deserialize addr 0xdde668 size 0x28 virtual true final false
 void Deserialize(LiteNetLib::Utils::NetDataReader reader) ;

/// @brief Method Release addr 0x0 size 0xffffffffffffffff virtual true final false
 void Release() ;

/// @brief Method BGNet.Core.Messages.IUnconnectedReliableRequest.WithRequestId addr 0xdde700 size 0x8 virtual true final true
 BGNet::Core::Messages::IUnconnectedReliableRequest BGNet_Core_Messages_IUnconnectedReliableRequest_WithRequestId(uint32_t requestId) ;

// Ctor Parameters []
explicit BaseReliableRequest() ;

/// @brief Method .ctor addr 0xdde6e8 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def BGNet::Core::Messages
NEED_NO_BOX(::BGNet::Core::Messages::BaseReliableRequest);
DEFINE_IL2CPP_ARG_TYPE(::BGNet::Core::Messages::BaseReliableRequest, "BGNet.Core.Messages", "BaseReliableRequest");
} // end anonymous namespace
