#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
namespace GlobalNamespace {
template<typename T>
class ISyncStateSerializable_1;
}
namespace LiteNetLib::Utils {
class NetDataWriter;
}
namespace LiteNetLib::Utils {
class NetDataReader;
}
namespace GlobalNamespace {
class IPoolablePacket;
}
namespace LiteNetLib::Utils {
class INetSerializable;
}
namespace GlobalNamespace {
template<typename T>
class PacketPool_1;
}
namespace GlobalNamespace {
struct NodePoseSyncState;
}
namespace GlobalNamespace {
struct SyncStateId;
}
// Forward declare root types
namespace GlobalNamespace {
class NodePoseSyncStateNetSerializable;
}
// Type: ::NodePoseSyncStateNetSerializable
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12914))
// CS Name: NodePoseSyncStateNetSerializable
class CORDL_TYPE NodePoseSyncStateNetSerializable : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to LiteNetLib::Utils::INetSerializable
constexpr operator  LiteNetLib::Utils::INetSerializable() const noexcept;

/// @brief Convert operator to GlobalNamespace::IPoolablePacket
constexpr operator  GlobalNamespace::IPoolablePacket() const noexcept;

/// @brief Convert operator to GlobalNamespace::ISyncStateSerializable_1<GlobalNamespace::NodePoseSyncState>
constexpr operator  GlobalNamespace::ISyncStateSerializable_1<GlobalNamespace::NodePoseSyncState>() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x60};

virtual ~NodePoseSyncStateNetSerializable() = default;

// Ctor Parameters [CppParam { name: "", ty: "NodePoseSyncStateNetSerializable", modifiers: " const&", def_value: None }]
constexpr NodePoseSyncStateNetSerializable(NodePoseSyncStateNetSerializable const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "NodePoseSyncStateNetSerializable", modifiers: "&&", def_value: None }]
constexpr NodePoseSyncStateNetSerializable(NodePoseSyncStateNetSerializable&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit NodePoseSyncStateNetSerializable(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr NodePoseSyncStateNetSerializable& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr NodePoseSyncStateNetSerializable& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr NodePoseSyncStateNetSerializable& operator=(NodePoseSyncStateNetSerializable&& o) noexcept = default;
  constexpr NodePoseSyncStateNetSerializable& operator=(NodePoseSyncStateNetSerializable const& o) noexcept = default;
                


// Fields

 GlobalNamespace::NodePoseSyncState __declspec(property(get=__get__state, put=__set__state))  _state;

constexpr void __set__state(GlobalNamespace::NodePoseSyncState value) ;

constexpr GlobalNamespace::NodePoseSyncState __get__state() const;

 GlobalNamespace::SyncStateId __declspec(property(get=__get__id_k__BackingField, put=__set__id_k__BackingField))  _id_k__BackingField;

constexpr void __set__id_k__BackingField(GlobalNamespace::SyncStateId value) ;

constexpr GlobalNamespace::SyncStateId __get__id_k__BackingField() const;

 float_t __declspec(property(get=__get__time_k__BackingField, put=__set__time_k__BackingField))  _time_k__BackingField;

constexpr void __set__time_k__BackingField(float_t value) ;

constexpr float_t __get__time_k__BackingField() const;


// Properties

static GlobalNamespace::PacketPool_1<GlobalNamespace::NodePoseSyncStateNetSerializable> __declspec(property(get=get_pool))  pool;

 GlobalNamespace::SyncStateId __declspec(property(get=get_id, put=set_id))  id;

 float_t __declspec(property(get=get_time, put=set_time))  time;

 GlobalNamespace::NodePoseSyncState __declspec(property(get=get_state, put=set_state))  state;


// Methods

/// @brief Method get_pool addr 0xdccd44 size 0x40 virtual false final false
static GlobalNamespace::PacketPool_1<GlobalNamespace::NodePoseSyncStateNetSerializable> get_pool() ;

/// @brief Method get_id addr 0xdccd84 size 0x8 virtual true final true
 GlobalNamespace::SyncStateId get_id() ;

/// @brief Method set_id addr 0xdccd8c size 0x8 virtual true final true
 void set_id(GlobalNamespace::SyncStateId value) ;

/// @brief Method get_time addr 0xdccd94 size 0x8 virtual true final true
 float_t get_time() ;

/// @brief Method set_time addr 0xdccd9c size 0x8 virtual true final true
 void set_time(float_t value) ;

/// @brief Method get_state addr 0xdccda4 size 0x10 virtual true final true
 GlobalNamespace::NodePoseSyncState get_state() ;

/// @brief Method set_state addr 0xdccdb4 size 0x18 virtual true final true
 void set_state(GlobalNamespace::NodePoseSyncState value) ;

/// @brief Method Serialize addr 0xdccdcc size 0x4c virtual true final true
 void Serialize(LiteNetLib::Utils::NetDataWriter writer) ;

/// @brief Method Deserialize addr 0xdcce3c size 0x4c virtual true final true
 void Deserialize(LiteNetLib::Utils::NetDataReader reader) ;

/// @brief Method Release addr 0xdccea8 size 0x54 virtual true final true
 void Release() ;

static GlobalNamespace::NodePoseSyncStateNetSerializable New_ctor() ;

/// @brief Method .ctor addr 0xdccefc size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::NodePoseSyncStateNetSerializable);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::NodePoseSyncStateNetSerializable, "", "NodePoseSyncStateNetSerializable");
