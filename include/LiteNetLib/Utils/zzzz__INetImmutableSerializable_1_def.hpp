#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
namespace {
namespace LiteNetLib::Utils {
class NetDataWriter;
}
namespace LiteNetLib::Utils {
class NetDataReader;
}
// Forward declare root types
namespace LiteNetLib::Utils {
template<typename T>
class INetImmutableSerializable_1;
}
// Type: LiteNetLib.Utils::INetImmutableSerializable`1
namespace LiteNetLib::Utils {
// cpp template
template<typename T>
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14473))
// CS Name: LiteNetLib.Utils.INetImmutableSerializable`1
class CORDL_TYPE INetImmutableSerializable_1 : public ::cordl_internals::InterfaceW {
public:
// Declarations
~INetImmutableSerializable_1() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit INetImmutableSerializable_1(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method Serialize addr 0x0 size 0xffffffffffffffff virtual true final false
 void Serialize(::LiteNetLib::Utils::NetDataWriter writer) ;

/// @brief Method CreateFromSerializedData addr 0x0 size 0xffffffffffffffff virtual true final false
 T CreateFromSerializedData(::LiteNetLib::Utils::NetDataReader reader) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def LiteNetLib::Utils
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::LiteNetLib::Utils::INetImmutableSerializable_1, "LiteNetLib.Utils", "INetImmutableSerializable`1");
