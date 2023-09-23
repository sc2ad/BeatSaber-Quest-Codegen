#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace System::Net {
class IPEndPoint;
}
// Forward declare root types
namespace LiteNetLib::Layers {
class PacketLayerBase;
}
// Type: LiteNetLib.Layers::PacketLayerBase
namespace LiteNetLib::Layers {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14523))
// CS Name: LiteNetLib.Layers.PacketLayerBase
class CORDL_TYPE PacketLayerBase : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~PacketLayerBase() = default;

// Ctor Parameters [CppParam { name: "", ty: "PacketLayerBase", modifiers: " const&", def_value: None }]
constexpr PacketLayerBase(PacketLayerBase const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PacketLayerBase", modifiers: "&&", def_value: None }]
constexpr PacketLayerBase(PacketLayerBase&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PacketLayerBase(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr PacketLayerBase& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PacketLayerBase& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PacketLayerBase& operator=(PacketLayerBase&& o) noexcept = default;
  constexpr PacketLayerBase& operator=(PacketLayerBase const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get_ExtraPacketSizeForLayer, put=__set_ExtraPacketSizeForLayer))  ExtraPacketSizeForLayer;

constexpr void __set_ExtraPacketSizeForLayer(int32_t value) ;

constexpr int32_t __get_ExtraPacketSizeForLayer() const;


// Methods

// Ctor Parameters [CppParam { name: "extraPacketSizeForLayer", ty: "int32_t", modifiers: "", def_value: None }]
explicit PacketLayerBase(int32_t extraPacketSizeForLayer) ;

/// @brief Method .ctor addr 0x209a98c size 0x28 virtual false final false
 void _ctor(int32_t extraPacketSizeForLayer) ;

/// @brief Method ProcessInboundPacket addr 0x0 size 0xffffffffffffffff virtual true final false
 void ProcessInboundPacket(System::Net::IPEndPoint remoteEndPoint, ByRef<::ArrayW<uint8_t>> data, ByRef<int32_t> offset, ByRef<int32_t> length) ;

/// @brief Method ProcessOutBoundPacket addr 0x0 size 0xffffffffffffffff virtual true final false
 void ProcessOutBoundPacket(System::Net::IPEndPoint remoteEndPoint, ByRef<::ArrayW<uint8_t>> data, ByRef<int32_t> offset, ByRef<int32_t> length) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def LiteNetLib::Layers
NEED_NO_BOX(LiteNetLib::Layers::PacketLayerBase);
DEFINE_IL2CPP_ARG_TYPE(LiteNetLib::Layers::PacketLayerBase, "LiteNetLib.Layers", "PacketLayerBase");
