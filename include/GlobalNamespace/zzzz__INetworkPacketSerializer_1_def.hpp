#pragma once
#include "../cordl_internals/cordl_internals.hpp"
namespace LiteNetLib::Utils {
class INetSerializable;
}
namespace LiteNetLib::Utils {
class NetDataReader;
}
namespace LiteNetLib::Utils {
class NetDataWriter;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename TData>
class INetworkPacketSerializer_1;
}
// Type: ::INetworkPacketSerializer`1
namespace GlobalNamespace {
// cpp template
template<typename TData>
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12830))
// CS Name: INetworkPacketSerializer`1
class CORDL_TYPE INetworkPacketSerializer_1 : public ::cordl_internals::InterfaceW {
public:
// Declarations
~INetworkPacketSerializer_1() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit INetworkPacketSerializer_1(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method ProcessAllPackets addr 0x0 size 0xffffffffffffffff virtual true final false
 void ProcessAllPackets(LiteNetLib::Utils::NetDataReader reader, TData data) ;

/// @brief Method SerializePacket addr 0x0 size 0xffffffffffffffff virtual true final false
 void SerializePacket(LiteNetLib::Utils::NetDataWriter writer, LiteNetLib::Utils::INetSerializable packet) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(GlobalNamespace::INetworkPacketSerializer_1, "", "INetworkPacketSerializer`1");
