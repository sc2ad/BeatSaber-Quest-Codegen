#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstdint>
namespace LiteNetLib::Utils {
class NetDataWriter;
}
namespace System {
class Type;
}
namespace LiteNetLib::Utils {
class INetSerializable;
}
namespace LiteNetLib::Utils {
class NetDataReader;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename TData>
class INetworkPacketSubSerializer_1;
}
// Type: ::INetworkPacketSubSerializer`1
namespace GlobalNamespace {
// cpp template
template<typename TData>
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12831))
// CS Name: INetworkPacketSubSerializer`1
class CORDL_TYPE INetworkPacketSubSerializer_1 : public ::cordl_internals::InterfaceW {
public:
// Declarations
~INetworkPacketSubSerializer_1() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit INetworkPacketSubSerializer_1(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method Deserialize addr 0x0 size 0xffffffffffffffff virtual true final false
 void Deserialize(LiteNetLib::Utils::NetDataReader reader, int32_t length, TData data) ;

/// @brief Method Serialize addr 0x0 size 0xffffffffffffffff virtual true final false
 void Serialize(LiteNetLib::Utils::NetDataWriter writer, LiteNetLib::Utils::INetSerializable packet) ;

/// @brief Method HandlesType addr 0x0 size 0xffffffffffffffff virtual true final false
 bool HandlesType(System::Type type) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(GlobalNamespace::INetworkPacketSubSerializer_1, "", "INetworkPacketSubSerializer`1");
