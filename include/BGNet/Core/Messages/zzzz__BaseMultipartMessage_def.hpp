#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "BGNet/Core/Messages/zzzz__BaseReliableRequest_def.hpp"
#include "BGNet/Core/Messages/zzzz__IUnconnectedMessage_def.hpp"
#include "BGNet/Core/Messages/zzzz__IUnconnectedMultipartMessage_def.hpp"
#include "BGNet/Core/Messages/zzzz__IUnconnectedReliableRequest_def.hpp"
#include "GlobalNamespace/zzzz__IPoolablePacket_def.hpp"
#include "LiteNetLib/Utils/zzzz__INetSerializable_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace LiteNetLib::Utils {
class NetDataWriter;
}
namespace LiteNetLib::Utils {
class NetDataReader;
}
// Forward declare root types
namespace BGNet::Core::Messages {
class BaseMultipartMessage;
}
namespace {
// Type: BGNet.Core.Messages::BaseMultipartMessage
namespace BGNet::Core::Messages {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12979)), TypeDefinitionIndex(TypeDefinitionIndex(14531)), TypeDefinitionIndex(TypeDefinitionIndex(12987)), TypeDefinitionIndex(TypeDefinitionIndex(12953)), TypeDefinitionIndex(TypeDefinitionIndex(12980)), TypeDefinitionIndex(TypeDefinitionIndex(12724))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12952))
// CS Name: BGNet.Core.Messages.BaseMultipartMessage
class CORDL_TYPE BaseMultipartMessage : public BGNet::Core::Messages::BaseReliableRequest {
public:
// Declarations
/// @brief Convert operator to BGNet::Core::Messages::IUnconnectedMultipartMessage
constexpr operator  BGNet::Core::Messages::IUnconnectedMultipartMessage() const noexcept;

/// @brief Convert operator to BGNet::Core::Messages::IUnconnectedReliableRequest
constexpr operator  BGNet::Core::Messages::IUnconnectedReliableRequest() const noexcept;

/// @brief Convert operator to BGNet::Core::Messages::IUnconnectedMessage
constexpr operator  BGNet::Core::Messages::IUnconnectedMessage() const noexcept;

/// @brief Convert operator to LiteNetLib::Utils::INetSerializable
constexpr operator  LiteNetLib::Utils::INetSerializable() const noexcept;

/// @brief Convert operator to GlobalNamespace::IPoolablePacket
constexpr operator  GlobalNamespace::IPoolablePacket() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~BaseMultipartMessage() = default;

// Ctor Parameters [CppParam { name: "", ty: "BaseMultipartMessage", modifiers: " const&", def_value: None }]
constexpr BaseMultipartMessage(BaseMultipartMessage const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BaseMultipartMessage", modifiers: "&&", def_value: None }]
constexpr BaseMultipartMessage(BaseMultipartMessage&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BaseMultipartMessage(void* ptr) noexcept : BGNet::Core::Messages::BaseReliableRequest(ptr) {
}


  constexpr BaseMultipartMessage& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BaseMultipartMessage& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BaseMultipartMessage& operator=(BaseMultipartMessage&& o) noexcept = default;
  constexpr BaseMultipartMessage& operator=(BaseMultipartMessage const& o) noexcept = default;
                


// Fields

/// @brief Field kDataChunkSize offset 0
static constexpr int32_t  kDataChunkSize{384};

/// @brief Field kMaximumDataSize offset 0
static constexpr int32_t  kMaximumDataSize{32767};

 uint32_t __declspec(property(get=__get__multipartMessageId_k__BackingField, put=__set__multipartMessageId_k__BackingField))  _multipartMessageId_k__BackingField;

constexpr void __set__multipartMessageId_k__BackingField(uint32_t value) ;

constexpr uint32_t __get__multipartMessageId_k__BackingField() const;

 int32_t __declspec(property(get=__get__offset_k__BackingField, put=__set__offset_k__BackingField))  _offset_k__BackingField;

constexpr void __set__offset_k__BackingField(int32_t value) ;

constexpr int32_t __get__offset_k__BackingField() const;

 int32_t __declspec(property(get=__get__length_k__BackingField, put=__set__length_k__BackingField))  _length_k__BackingField;

constexpr void __set__length_k__BackingField(int32_t value) ;

constexpr int32_t __get__length_k__BackingField() const;

 int32_t __declspec(property(get=__get__totalLength_k__BackingField, put=__set__totalLength_k__BackingField))  _totalLength_k__BackingField;

constexpr void __set__totalLength_k__BackingField(int32_t value) ;

constexpr int32_t __get__totalLength_k__BackingField() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get__data, put=__set__data))  _data;

constexpr void __set__data(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get__data() const;


// Properties

 uint32_t __declspec(property(get=get_multipartMessageId, put=set_multipartMessageId))  multipartMessageId;

 int32_t __declspec(property(get=get_offset, put=set_offset))  offset;

 int32_t __declspec(property(get=get_length, put=set_length))  length;

 int32_t __declspec(property(get=get_totalLength, put=set_totalLength))  totalLength;

 ::ArrayW<uint8_t> __declspec(property(get=get_data))  data;


// Methods

/// @brief Method get_multipartMessageId addr 0xdde3e8 size 0x8 virtual true final true
 uint32_t get_multipartMessageId() ;

/// @brief Method set_multipartMessageId addr 0xdde3f0 size 0x8 virtual false final false
 void set_multipartMessageId(uint32_t value) ;

/// @brief Method get_offset addr 0xdde3f8 size 0x8 virtual true final true
 int32_t get_offset() ;

/// @brief Method set_offset addr 0xdde400 size 0x8 virtual false final false
 void set_offset(int32_t value) ;

/// @brief Method get_length addr 0xdde408 size 0x8 virtual true final true
 int32_t get_length() ;

/// @brief Method set_length addr 0xdde410 size 0x8 virtual false final false
 void set_length(int32_t value) ;

/// @brief Method get_totalLength addr 0xdde418 size 0x8 virtual true final true
 int32_t get_totalLength() ;

/// @brief Method set_totalLength addr 0xdde420 size 0x8 virtual false final false
 void set_totalLength(int32_t value) ;

/// @brief Method get_data addr 0xdde428 size 0x8 virtual true final true
 ::ArrayW<uint8_t> get_data() ;

/// @brief Method Init addr 0xdde430 size 0x58 virtual false final false
 BGNet::Core::Messages::BaseMultipartMessage Init(uint32_t multipartMessageId, ::ArrayW<uint8_t> data, int32_t offset, int32_t length, int32_t totalLength) ;

/// @brief Method Serialize addr 0xdde488 size 0x88 virtual true final false
 void Serialize(LiteNetLib::Utils::NetDataWriter writer) ;

/// @brief Method Deserialize addr 0xdde534 size 0x134 virtual true final false
 void Deserialize(LiteNetLib::Utils::NetDataReader reader) ;

// Ctor Parameters []
explicit BaseMultipartMessage() ;

/// @brief Method .ctor addr 0xdde690 size 0x58 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def BGNet::Core::Messages
NEED_NO_BOX(::BGNet::Core::Messages::BaseMultipartMessage);
DEFINE_IL2CPP_ARG_TYPE(::BGNet::Core::Messages::BaseMultipartMessage, "BGNet.Core.Messages", "BaseMultipartMessage");
} // end anonymous namespace
