#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "LiteNetLib/Layers/zzzz__PacketLayerBase_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace System::Net {
class IPEndPoint;
}
// Forward declare root types
namespace LiteNetLib::Layers {
class XorEncryptLayer;
}
// Type: LiteNetLib.Layers::XorEncryptLayer
namespace LiteNetLib::Layers {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14523))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14524))
// CS Name: LiteNetLib.Layers.XorEncryptLayer
class CORDL_TYPE XorEncryptLayer : public ::LiteNetLib::Layers::PacketLayerBase {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~XorEncryptLayer() = default;

// Ctor Parameters [CppParam { name: "", ty: "XorEncryptLayer", modifiers: " const&", def_value: None }]
constexpr XorEncryptLayer(XorEncryptLayer const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "XorEncryptLayer", modifiers: "&&", def_value: None }]
constexpr XorEncryptLayer(XorEncryptLayer&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit XorEncryptLayer(void* ptr) noexcept : ::LiteNetLib::Layers::PacketLayerBase(ptr) {
}


  constexpr XorEncryptLayer& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr XorEncryptLayer& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr XorEncryptLayer& operator=(XorEncryptLayer&& o) noexcept = default;
  constexpr XorEncryptLayer& operator=(XorEncryptLayer const& o) noexcept = default;
                


// Fields

 ::ArrayW<uint8_t> __declspec(property(get=__get__byteKey, put=__set__byteKey))  _byteKey;

constexpr void __set__byteKey(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get__byteKey() const;


// Methods

// Ctor Parameters []
explicit XorEncryptLayer() ;

/// @brief Method .ctor addr 0x209abe8 size 0x1c virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "key", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
explicit XorEncryptLayer(::ArrayW<uint8_t> key) ;

/// @brief Method .ctor addr 0x209ac04 size 0x30 virtual false final false
 void _ctor(::ArrayW<uint8_t> key) ;

// Ctor Parameters [CppParam { name: "key", ty: "::StringW", modifiers: "", def_value: None }]
explicit XorEncryptLayer(::StringW key) ;

/// @brief Method .ctor addr 0x209acc8 size 0x30 virtual false final false
 void _ctor(::StringW key) ;

/// @brief Method SetKey addr 0x209acf8 size 0x44 virtual false final false
 void SetKey(::StringW key) ;

/// @brief Method SetKey addr 0x209ac34 size 0x94 virtual false final false
 void SetKey(::ArrayW<uint8_t> key) ;

/// @brief Method ProcessInboundPacket addr 0x209ad3c size 0x90 virtual true final false
 void ProcessInboundPacket(::System::Net::IPEndPoint remoteEndPoint, ByRef<::ArrayW<uint8_t>> data, ByRef<int32_t> offset, ByRef<int32_t> length) ;

/// @brief Method ProcessOutBoundPacket addr 0x209adcc size 0x8c virtual true final false
 void ProcessOutBoundPacket(::System::Net::IPEndPoint remoteEndPoint, ByRef<::ArrayW<uint8_t>> data, ByRef<int32_t> offset, ByRef<int32_t> length) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def LiteNetLib::Layers
} // end anonymous namespace
NEED_NO_BOX(::LiteNetLib::Layers::XorEncryptLayer);
DEFINE_IL2CPP_ARG_TYPE(::LiteNetLib::Layers::XorEncryptLayer, "LiteNetLib.Layers", "XorEncryptLayer");
