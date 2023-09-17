#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
namespace {
namespace GlobalNamespace {
struct StandardScoreSyncState;
}
namespace LiteNetLib::Utils {
class NetDataWriter;
}
namespace GlobalNamespace {
struct SyncStateId;
}
namespace GlobalNamespace {
class IPoolablePacket;
}
namespace GlobalNamespace {
template<typename T>
class ISyncStateSerializable_1;
}
namespace LiteNetLib::Utils {
class NetDataReader;
}
namespace GlobalNamespace {
template<typename T>
class PacketPool_1;
}
namespace LiteNetLib::Utils {
class INetSerializable;
}
// Forward declare root types
namespace GlobalNamespace {
class StandardScoreSyncStateNetSerializable;
}
// Type: ::StandardScoreSyncStateNetSerializable
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12919))
// CS Name: StandardScoreSyncStateNetSerializable
class CORDL_TYPE StandardScoreSyncStateNetSerializable : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::LiteNetLib::Utils::INetSerializable
constexpr operator  ::LiteNetLib::Utils::INetSerializable() const noexcept;

/// @brief Convert operator to ::GlobalNamespace::IPoolablePacket
constexpr operator  ::GlobalNamespace::IPoolablePacket() const noexcept;

/// @brief Convert operator to ::GlobalNamespace::ISyncStateSerializable_1<::GlobalNamespace::StandardScoreSyncState>
constexpr operator  ::GlobalNamespace::ISyncStateSerializable_1<::GlobalNamespace::StandardScoreSyncState>() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~StandardScoreSyncStateNetSerializable() = default;

// Ctor Parameters [CppParam { name: "", ty: "StandardScoreSyncStateNetSerializable", modifiers: " const&", def_value: None }]
constexpr StandardScoreSyncStateNetSerializable(StandardScoreSyncStateNetSerializable const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "StandardScoreSyncStateNetSerializable", modifiers: "&&", def_value: None }]
constexpr StandardScoreSyncStateNetSerializable(StandardScoreSyncStateNetSerializable&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit StandardScoreSyncStateNetSerializable(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr StandardScoreSyncStateNetSerializable& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr StandardScoreSyncStateNetSerializable& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr StandardScoreSyncStateNetSerializable& operator=(StandardScoreSyncStateNetSerializable&& o) noexcept = default;
  constexpr StandardScoreSyncStateNetSerializable& operator=(StandardScoreSyncStateNetSerializable const& o) noexcept = default;
                


// Fields

 ::GlobalNamespace::StandardScoreSyncState __declspec(property(get=__get__state, put=__set__state))  _state;

constexpr void __set__state(::GlobalNamespace::StandardScoreSyncState value) ;

constexpr ::GlobalNamespace::StandardScoreSyncState __get__state() const;

 ::GlobalNamespace::SyncStateId __declspec(property(get=__get__id_k__BackingField, put=__set__id_k__BackingField))  _id_k__BackingField;

constexpr void __set__id_k__BackingField(::GlobalNamespace::SyncStateId value) ;

constexpr ::GlobalNamespace::SyncStateId __get__id_k__BackingField() const;

 float_t __declspec(property(get=__get__time_k__BackingField, put=__set__time_k__BackingField))  _time_k__BackingField;

constexpr void __set__time_k__BackingField(float_t value) ;

constexpr float_t __get__time_k__BackingField() const;


// Properties

static ::GlobalNamespace::PacketPool_1<::GlobalNamespace::StandardScoreSyncStateNetSerializable> __declspec(property(get=get_pool))  pool;

 ::GlobalNamespace::SyncStateId __declspec(property(get=get_id, put=set_id))  id;

 float_t __declspec(property(get=get_time, put=set_time))  time;

 ::GlobalNamespace::StandardScoreSyncState __declspec(property(get=get_state, put=set_state))  state;


// Methods

/// @brief Method get_pool addr 0xdcd994 size 0x40 virtual false final false
static ::GlobalNamespace::PacketPool_1<::GlobalNamespace::StandardScoreSyncStateNetSerializable> get_pool() ;

/// @brief Method get_id addr 0xdcd9d4 size 0x8 virtual true final true
 ::GlobalNamespace::SyncStateId get_id() ;

/// @brief Method set_id addr 0xdcd9dc size 0x8 virtual true final true
 void set_id(::GlobalNamespace::SyncStateId value) ;

/// @brief Method get_time addr 0xdcd9e4 size 0x8 virtual true final true
 float_t get_time() ;

/// @brief Method set_time addr 0xdcd9ec size 0x8 virtual true final true
 void set_time(float_t value) ;

/// @brief Method get_state addr 0xdcd9f4 size 0x14 virtual true final true
 ::GlobalNamespace::StandardScoreSyncState get_state() ;

/// @brief Method set_state addr 0xdcda08 size 0x14 virtual true final true
 void set_state(::GlobalNamespace::StandardScoreSyncState value) ;

/// @brief Method Serialize addr 0xdcda1c size 0x4c virtual true final true
 void Serialize(::LiteNetLib::Utils::NetDataWriter writer) ;

/// @brief Method Deserialize addr 0xdcda68 size 0x4c virtual true final true
 void Deserialize(::LiteNetLib::Utils::NetDataReader reader) ;

/// @brief Method Release addr 0xdcdab4 size 0x54 virtual true final true
 void Release() ;

// Ctor Parameters []
explicit StandardScoreSyncStateNetSerializable() ;

/// @brief Method .ctor addr 0xdcdb08 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::StandardScoreSyncStateNetSerializable);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::StandardScoreSyncStateNetSerializable, "", "StandardScoreSyncStateNetSerializable");
