#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "LiteNetLib/Layers/zzzz__PacketLayerBase_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace {
namespace System::Net {
class IPEndPoint;
}
// Forward declare root types
namespace LiteNetLib::Layers {
class Crc32cLayer;
}
// Type: LiteNetLib.Layers::Crc32cLayer
namespace LiteNetLib::Layers {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14523))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14522))
// CS Name: LiteNetLib.Layers.Crc32cLayer
class CORDL_TYPE Crc32cLayer : public ::LiteNetLib::Layers::PacketLayerBase {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~Crc32cLayer() = default;

// Ctor Parameters [CppParam { name: "", ty: "Crc32cLayer", modifiers: " const&", def_value: None }]
constexpr Crc32cLayer(Crc32cLayer const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Crc32cLayer", modifiers: "&&", def_value: None }]
constexpr Crc32cLayer(Crc32cLayer&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Crc32cLayer(void* ptr) noexcept : ::LiteNetLib::Layers::PacketLayerBase(ptr) {
}


  constexpr Crc32cLayer& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Crc32cLayer& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Crc32cLayer& operator=(Crc32cLayer&& o) noexcept = default;
  constexpr Crc32cLayer& operator=(Crc32cLayer const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit Crc32cLayer() ;

/// @brief Method .ctor addr 0x209a96c size 0x20 virtual false final false
 void _ctor() ;

/// @brief Method ProcessInboundPacket addr 0x209a9b4 size 0x194 virtual true final false
 void ProcessInboundPacket(::System::Net::IPEndPoint remoteEndPoint, ByRef<::ArrayW<uint8_t>> data, ByRef<int32_t> offset, ByRef<int32_t> length) ;

/// @brief Method ProcessOutBoundPacket addr 0x209ab48 size 0xa0 virtual true final false
 void ProcessOutBoundPacket(::System::Net::IPEndPoint remoteEndPoint, ByRef<::ArrayW<uint8_t>> data, ByRef<int32_t> offset, ByRef<int32_t> length) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def LiteNetLib::Layers
} // end anonymous namespace
NEED_NO_BOX(::LiteNetLib::Layers::Crc32cLayer);
DEFINE_IL2CPP_ARG_TYPE(::LiteNetLib::Layers::Crc32cLayer, "LiteNetLib.Layers", "Crc32cLayer");
