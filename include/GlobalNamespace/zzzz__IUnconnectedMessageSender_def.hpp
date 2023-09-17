#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace GlobalNamespace {
class PacketEncryptionLayer;
}
namespace System::Net {
class IPEndPoint;
}
namespace LiteNetLib::Utils {
class NetDataWriter;
}
namespace GlobalNamespace {
class IUnconnectedMessageReceiver;
}
// Forward declare root types
namespace GlobalNamespace {
class IUnconnectedMessageSender;
}
namespace {
// Type: ::IUnconnectedMessageSender
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12794))
// CS Name: IUnconnectedMessageSender
class CORDL_TYPE IUnconnectedMessageSender : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IUnconnectedMessageSender() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IUnconnectedMessageSender(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 ::ArrayW<uint8_t> __declspec(property(get=get_unconnectedPacketHeader))  unconnectedPacketHeader;

 GlobalNamespace::PacketEncryptionLayer __declspec(property(get=get_encryptionLayer))  encryptionLayer;


// Methods

/// @brief Method get_unconnectedPacketHeader addr 0x0 size 0xffffffffffffffff virtual true final false
 ::ArrayW<uint8_t> get_unconnectedPacketHeader() ;

/// @brief Method get_encryptionLayer addr 0x0 size 0xffffffffffffffff virtual true final false
 GlobalNamespace::PacketEncryptionLayer get_encryptionLayer() ;

/// @brief Method SendUnconnectedMessage addr 0x0 size 0xffffffffffffffff virtual true final false
 void SendUnconnectedMessage(System::Net::IPEndPoint remoteEndPoint, LiteNetLib::Utils::NetDataWriter writer) ;

/// @brief Method RegisterReceiver addr 0x0 size 0xffffffffffffffff virtual true final false
 void RegisterReceiver(GlobalNamespace::IUnconnectedMessageReceiver receiver) ;

/// @brief Method UnregisterReceiver addr 0x0 size 0xffffffffffffffff virtual true final false
 void UnregisterReceiver(GlobalNamespace::IUnconnectedMessageReceiver receiver) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::IUnconnectedMessageSender);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IUnconnectedMessageSender, "", "IUnconnectedMessageSender");
} // end anonymous namespace
