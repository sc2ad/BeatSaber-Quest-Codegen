#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "BGNet/Core/Messages/zzzz__IUnconnectedMessage_def.hpp"
#include "BGNet/Core/Messages/zzzz__IUnconnectedReliableRequest_def.hpp"
#include "GlobalNamespace/zzzz__IPoolablePacket_def.hpp"
#include "LiteNetLib/Utils/zzzz__INetSerializable_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
// Forward declare root types
namespace BGNet::Core::Messages {
class IUnconnectedMultipartMessage;
}
namespace {
// Type: BGNet.Core.Messages::IUnconnectedMultipartMessage
namespace BGNet::Core::Messages {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12979)), TypeDefinitionIndex(TypeDefinitionIndex(12980)), TypeDefinitionIndex(TypeDefinitionIndex(14531)), TypeDefinitionIndex(TypeDefinitionIndex(12724))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12987))
// CS Name: BGNet.Core.Messages.IUnconnectedMultipartMessage
class CORDL_TYPE IUnconnectedMultipartMessage : public ::cordl_internals::InterfaceW {
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

~IUnconnectedMultipartMessage() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IUnconnectedMultipartMessage(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 uint32_t __declspec(property(get=get_multipartMessageId))  multipartMessageId;

 int32_t __declspec(property(get=get_offset))  offset;

 int32_t __declspec(property(get=get_length))  length;

 int32_t __declspec(property(get=get_totalLength))  totalLength;

 ::ArrayW<uint8_t> __declspec(property(get=get_data))  data;


// Methods

/// @brief Method get_multipartMessageId addr 0x0 size 0xffffffffffffffff virtual true final false
 uint32_t get_multipartMessageId() ;

/// @brief Method get_offset addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t get_offset() ;

/// @brief Method get_length addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t get_length() ;

/// @brief Method get_totalLength addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t get_totalLength() ;

/// @brief Method get_data addr 0x0 size 0xffffffffffffffff virtual true final false
 ::ArrayW<uint8_t> get_data() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def BGNet::Core::Messages
NEED_NO_BOX(::BGNet::Core::Messages::IUnconnectedMultipartMessage);
DEFINE_IL2CPP_ARG_TYPE(::BGNet::Core::Messages::IUnconnectedMultipartMessage, "BGNet.Core.Messages", "IUnconnectedMultipartMessage");
} // end anonymous namespace
