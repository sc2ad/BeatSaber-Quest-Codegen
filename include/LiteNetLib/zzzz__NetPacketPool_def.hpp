#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace System::Threading {
class ReaderWriterLockSlim;
}
namespace LiteNetLib {
class NetPacket;
}
namespace LiteNetLib {
struct PacketProperty;
}
// Forward declare root types
namespace LiteNetLib {
class NetPacketPool;
}
// Type: LiteNetLib::NetPacketPool
namespace LiteNetLib {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14453))
// CS Name: LiteNetLib.NetPacketPool
class CORDL_TYPE NetPacketPool : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~NetPacketPool() = default;

// Ctor Parameters [CppParam { name: "", ty: "NetPacketPool", modifiers: " const&", def_value: None }]
constexpr NetPacketPool(NetPacketPool const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "NetPacketPool", modifiers: "&&", def_value: None }]
constexpr NetPacketPool(NetPacketPool&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit NetPacketPool(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr NetPacketPool& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr NetPacketPool& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr NetPacketPool& operator=(NetPacketPool&& o) noexcept = default;
  constexpr NetPacketPool& operator=(NetPacketPool const& o) noexcept = default;
                


// Fields

 ::ArrayW<LiteNetLib::NetPacket> __declspec(property(get=__get__pool, put=__set__pool))  _pool;

constexpr void __set__pool(::ArrayW<LiteNetLib::NetPacket> value) ;

constexpr ::ArrayW<LiteNetLib::NetPacket> __get__pool() const;

 System::Threading::ReaderWriterLockSlim __declspec(property(get=__get__lock, put=__set__lock))  _lock;

constexpr void __set__lock(System::Threading::ReaderWriterLockSlim value) ;

constexpr System::Threading::ReaderWriterLockSlim __get__lock() const;

 int32_t __declspec(property(get=__get__count, put=__set__count))  _count;

constexpr void __set__count(int32_t value) ;

constexpr int32_t __get__count() const;


// Methods

/// @brief Method GetWithData addr 0x208dd90 size 0xd8 virtual false final false
 LiteNetLib::NetPacket GetWithData(LiteNetLib::PacketProperty property, ::ArrayW<uint8_t> data, int32_t start, int32_t length) ;

/// @brief Method GetWithProperty addr 0x208b918 size 0xac virtual false final false
 LiteNetLib::NetPacket GetWithProperty(LiteNetLib::PacketProperty property, int32_t size) ;

/// @brief Method GetWithProperty addr 0x208c4bc size 0xa4 virtual false final false
 LiteNetLib::NetPacket GetWithProperty(LiteNetLib::PacketProperty property) ;

/// @brief Method GetPacket addr 0x208a1c0 size 0x16c virtual false final false
 LiteNetLib::NetPacket GetPacket(int32_t size) ;

/// @brief Method Recycle addr 0x2088d04 size 0x140 virtual false final false
 void Recycle(LiteNetLib::NetPacket packet) ;

// Ctor Parameters []
explicit NetPacketPool() ;

/// @brief Method .ctor addr 0x2089a6c size 0x98 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def LiteNetLib
NEED_NO_BOX(LiteNetLib::NetPacketPool);
DEFINE_IL2CPP_ARG_TYPE(LiteNetLib::NetPacketPool, "LiteNetLib", "NetPacketPool");
