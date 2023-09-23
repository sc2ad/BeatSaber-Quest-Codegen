#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
namespace LiteNetLib::Utils {
class NetDataWriter;
}
namespace LiteNetLib::Utils {
class NetDataReader;
}
// Forward declare root types
namespace LiteNetLib::Utils {
class INetSerializable;
}
// Type: LiteNetLib.Utils::INetSerializable
namespace LiteNetLib::Utils {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14474))
// CS Name: LiteNetLib.Utils.INetSerializable
class CORDL_TYPE INetSerializable : public ::cordl_internals::InterfaceW {
public:
// Declarations
~INetSerializable() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit INetSerializable(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method Serialize addr 0x0 size 0xffffffffffffffff virtual true final false
 void Serialize(LiteNetLib::Utils::NetDataWriter writer) ;

/// @brief Method Deserialize addr 0x0 size 0xffffffffffffffff virtual true final false
 void Deserialize(LiteNetLib::Utils::NetDataReader reader) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def LiteNetLib::Utils
NEED_NO_BOX(LiteNetLib::Utils::INetSerializable);
DEFINE_IL2CPP_ARG_TYPE(LiteNetLib::Utils::INetSerializable, "LiteNetLib.Utils", "INetSerializable");
