#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataReader_def.hpp"
namespace LiteNetLib {
class NetPacket;
}
namespace LiteNetLib {
class NetManager;
}
namespace LiteNetLib {
class NetEvent;
}
// Forward declare root types
namespace LiteNetLib {
class NetPacketReader;
}
// Type: LiteNetLib::NetPacketReader
namespace LiteNetLib {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14475))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14443))
// CS Name: LiteNetLib.NetPacketReader
class CORDL_TYPE NetPacketReader : public LiteNetLib::Utils::NetDataReader {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~NetPacketReader() = default;

// Ctor Parameters [CppParam { name: "", ty: "NetPacketReader", modifiers: " const&", def_value: None }]
constexpr NetPacketReader(NetPacketReader const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "NetPacketReader", modifiers: "&&", def_value: None }]
constexpr NetPacketReader(NetPacketReader&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit NetPacketReader(void* ptr) noexcept : LiteNetLib::Utils::NetDataReader(ptr) {
}


  constexpr NetPacketReader& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr NetPacketReader& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr NetPacketReader& operator=(NetPacketReader&& o) noexcept = default;
  constexpr NetPacketReader& operator=(NetPacketReader const& o) noexcept = default;
                


// Fields

 LiteNetLib::NetPacket __declspec(property(get=__get__packet, put=__set__packet))  _packet;

constexpr void __set__packet(LiteNetLib::NetPacket value) ;

constexpr LiteNetLib::NetPacket __get__packet() const;

 LiteNetLib::NetManager __declspec(property(get=__get__manager, put=__set__manager))  _manager;

constexpr void __set__manager(LiteNetLib::NetManager value) ;

constexpr LiteNetLib::NetManager __get__manager() const;

 LiteNetLib::NetEvent __declspec(property(get=__get__evt, put=__set__evt))  _evt;

constexpr void __set__evt(LiteNetLib::NetEvent value) ;

constexpr LiteNetLib::NetEvent __get__evt() const;


// Methods

// Ctor Parameters [CppParam { name: "manager", ty: "LiteNetLib::NetManager", modifiers: "", def_value: None }, CppParam { name: "evt", ty: "LiteNetLib::NetEvent", modifiers: "", def_value: None }]
explicit NetPacketReader(LiteNetLib::NetManager manager, LiteNetLib::NetEvent evt) ;

/// @brief Method .ctor addr 0x2088bc4 size 0x2c virtual false final false
 void _ctor(LiteNetLib::NetManager manager, LiteNetLib::NetEvent evt) ;

/// @brief Method SetSource addr 0x2088bf0 size 0x40 virtual false final false
 void SetSource(LiteNetLib::NetPacket packet) ;

/// @brief Method RecycleInternal addr 0x2088cb8 size 0x44 virtual false final false
 void RecycleInternal() ;

/// @brief Method Recycle addr 0x2088f58 size 0x6c virtual false final false
 void Recycle() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def LiteNetLib
NEED_NO_BOX(LiteNetLib::NetPacketReader);
DEFINE_IL2CPP_ARG_TYPE(LiteNetLib::NetPacketReader, "LiteNetLib", "NetPacketReader");
