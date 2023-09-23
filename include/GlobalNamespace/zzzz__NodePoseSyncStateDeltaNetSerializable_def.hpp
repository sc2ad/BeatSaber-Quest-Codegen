#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace GlobalNamespace {
struct NodePoseSyncState;
}
namespace LiteNetLib::Utils {
class INetSerializable;
}
namespace GlobalNamespace {
template<typename T>
class IPacketPool_1;
}
namespace GlobalNamespace {
class IPoolablePacket;
}
namespace GlobalNamespace {
template<typename T>
class ISyncStateDeltaSerializable_1;
}
namespace LiteNetLib::Utils {
class NetDataReader;
}
namespace GlobalNamespace {
struct SyncStateId;
}
namespace LiteNetLib::Utils {
class NetDataWriter;
}
// Forward declare root types
namespace GlobalNamespace {
class NodePoseSyncStateDeltaNetSerializable;
}
// Type: ::NodePoseSyncStateDeltaNetSerializable
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12913))
// CS Name: NodePoseSyncStateDeltaNetSerializable
class CORDL_TYPE NodePoseSyncStateDeltaNetSerializable : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to LiteNetLib::Utils::INetSerializable
constexpr operator  LiteNetLib::Utils::INetSerializable() const noexcept;

/// @brief Convert operator to GlobalNamespace::IPoolablePacket
constexpr operator  GlobalNamespace::IPoolablePacket() const noexcept;

/// @brief Convert operator to GlobalNamespace::ISyncStateDeltaSerializable_1<GlobalNamespace::NodePoseSyncState>
constexpr operator  GlobalNamespace::ISyncStateDeltaSerializable_1<GlobalNamespace::NodePoseSyncState>() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x60};

virtual ~NodePoseSyncStateDeltaNetSerializable() = default;

// Ctor Parameters [CppParam { name: "", ty: "NodePoseSyncStateDeltaNetSerializable", modifiers: " const&", def_value: None }]
constexpr NodePoseSyncStateDeltaNetSerializable(NodePoseSyncStateDeltaNetSerializable const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "NodePoseSyncStateDeltaNetSerializable", modifiers: "&&", def_value: None }]
constexpr NodePoseSyncStateDeltaNetSerializable(NodePoseSyncStateDeltaNetSerializable&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit NodePoseSyncStateDeltaNetSerializable(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr NodePoseSyncStateDeltaNetSerializable& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr NodePoseSyncStateDeltaNetSerializable& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr NodePoseSyncStateDeltaNetSerializable& operator=(NodePoseSyncStateDeltaNetSerializable&& o) noexcept = default;
  constexpr NodePoseSyncStateDeltaNetSerializable& operator=(NodePoseSyncStateDeltaNetSerializable const& o) noexcept = default;
                


// Fields

 GlobalNamespace::NodePoseSyncState __declspec(property(get=__get__delta, put=__set__delta))  _delta;

constexpr void __set__delta(GlobalNamespace::NodePoseSyncState value) ;

constexpr GlobalNamespace::NodePoseSyncState __get__delta() const;

 GlobalNamespace::SyncStateId __declspec(property(get=__get__baseId_k__BackingField, put=__set__baseId_k__BackingField))  _baseId_k__BackingField;

constexpr void __set__baseId_k__BackingField(GlobalNamespace::SyncStateId value) ;

constexpr GlobalNamespace::SyncStateId __get__baseId_k__BackingField() const;

 int32_t __declspec(property(get=__get__timeOffsetMs_k__BackingField, put=__set__timeOffsetMs_k__BackingField))  _timeOffsetMs_k__BackingField;

constexpr void __set__timeOffsetMs_k__BackingField(int32_t value) ;

constexpr int32_t __get__timeOffsetMs_k__BackingField() const;


// Properties

static GlobalNamespace::IPacketPool_1<GlobalNamespace::NodePoseSyncStateDeltaNetSerializable> __declspec(property(get=get_pool))  pool;

 GlobalNamespace::SyncStateId __declspec(property(get=get_baseId, put=set_baseId))  baseId;

 int32_t __declspec(property(get=get_timeOffsetMs, put=set_timeOffsetMs))  timeOffsetMs;

 GlobalNamespace::NodePoseSyncState __declspec(property(get=get_delta, put=set_delta))  delta;


// Methods

/// @brief Method get_pool addr 0xdccaa8 size 0x40 virtual false final false
static GlobalNamespace::IPacketPool_1<GlobalNamespace::NodePoseSyncStateDeltaNetSerializable> get_pool() ;

/// @brief Method get_baseId addr 0xdccae8 size 0x8 virtual true final true
 GlobalNamespace::SyncStateId get_baseId() ;

/// @brief Method set_baseId addr 0xdccaf0 size 0x8 virtual true final true
 void set_baseId(GlobalNamespace::SyncStateId value) ;

/// @brief Method get_timeOffsetMs addr 0xdccaf8 size 0x8 virtual true final true
 int32_t get_timeOffsetMs() ;

/// @brief Method set_timeOffsetMs addr 0xdccb00 size 0x8 virtual true final true
 void set_timeOffsetMs(int32_t value) ;

/// @brief Method get_delta addr 0xdccb08 size 0x10 virtual true final true
 GlobalNamespace::NodePoseSyncState get_delta() ;

/// @brief Method set_delta addr 0xdccb18 size 0x18 virtual true final true
 void set_delta(GlobalNamespace::NodePoseSyncState value) ;

/// @brief Method Serialize addr 0xdccb30 size 0x98 virtual true final true
 void Serialize(LiteNetLib::Utils::NetDataWriter writer) ;

/// @brief Method Deserialize addr 0xdccbfc size 0x68 virtual true final true
 void Deserialize(LiteNetLib::Utils::NetDataReader reader) ;

/// @brief Method Release addr 0xdccc90 size 0xac virtual true final true
 void Release() ;

// Ctor Parameters []
explicit NodePoseSyncStateDeltaNetSerializable() ;

/// @brief Method .ctor addr 0xdccd3c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::NodePoseSyncStateDeltaNetSerializable);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::NodePoseSyncStateDeltaNetSerializable, "", "NodePoseSyncStateDeltaNetSerializable");
