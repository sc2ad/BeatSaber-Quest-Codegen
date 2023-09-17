#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace {
namespace LiteNetLib::Utils {
class NetDataWriter;
}
namespace GlobalNamespace {
struct StandardScoreSyncState;
}
namespace GlobalNamespace {
struct SyncStateId;
}
namespace LiteNetLib::Utils {
class NetDataReader;
}
namespace GlobalNamespace {
template<typename T>
class IPacketPool_1;
}
namespace GlobalNamespace {
class IPoolablePacket;
}
namespace LiteNetLib::Utils {
class INetSerializable;
}
namespace GlobalNamespace {
template<typename T>
class ISyncStateDeltaSerializable_1;
}
// Forward declare root types
namespace GlobalNamespace {
class StandardScoreSyncStateDeltaNetSerializable;
}
// Type: ::StandardScoreSyncStateDeltaNetSerializable
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12918))
// CS Name: StandardScoreSyncStateDeltaNetSerializable
class CORDL_TYPE StandardScoreSyncStateDeltaNetSerializable : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::LiteNetLib::Utils::INetSerializable
constexpr operator  ::LiteNetLib::Utils::INetSerializable() const noexcept;

/// @brief Convert operator to ::GlobalNamespace::IPoolablePacket
constexpr operator  ::GlobalNamespace::IPoolablePacket() const noexcept;

/// @brief Convert operator to ::GlobalNamespace::ISyncStateDeltaSerializable_1<::GlobalNamespace::StandardScoreSyncState>
constexpr operator  ::GlobalNamespace::ISyncStateDeltaSerializable_1<::GlobalNamespace::StandardScoreSyncState>() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~StandardScoreSyncStateDeltaNetSerializable() = default;

// Ctor Parameters [CppParam { name: "", ty: "StandardScoreSyncStateDeltaNetSerializable", modifiers: " const&", def_value: None }]
constexpr StandardScoreSyncStateDeltaNetSerializable(StandardScoreSyncStateDeltaNetSerializable const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "StandardScoreSyncStateDeltaNetSerializable", modifiers: "&&", def_value: None }]
constexpr StandardScoreSyncStateDeltaNetSerializable(StandardScoreSyncStateDeltaNetSerializable&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit StandardScoreSyncStateDeltaNetSerializable(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr StandardScoreSyncStateDeltaNetSerializable& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr StandardScoreSyncStateDeltaNetSerializable& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr StandardScoreSyncStateDeltaNetSerializable& operator=(StandardScoreSyncStateDeltaNetSerializable&& o) noexcept = default;
  constexpr StandardScoreSyncStateDeltaNetSerializable& operator=(StandardScoreSyncStateDeltaNetSerializable const& o) noexcept = default;
                


// Fields

 ::GlobalNamespace::StandardScoreSyncState __declspec(property(get=__get__delta, put=__set__delta))  _delta;

constexpr void __set__delta(::GlobalNamespace::StandardScoreSyncState value) ;

constexpr ::GlobalNamespace::StandardScoreSyncState __get__delta() const;

 ::GlobalNamespace::SyncStateId __declspec(property(get=__get__baseId_k__BackingField, put=__set__baseId_k__BackingField))  _baseId_k__BackingField;

constexpr void __set__baseId_k__BackingField(::GlobalNamespace::SyncStateId value) ;

constexpr ::GlobalNamespace::SyncStateId __get__baseId_k__BackingField() const;

 int32_t __declspec(property(get=__get__timeOffsetMs_k__BackingField, put=__set__timeOffsetMs_k__BackingField))  _timeOffsetMs_k__BackingField;

constexpr void __set__timeOffsetMs_k__BackingField(int32_t value) ;

constexpr int32_t __get__timeOffsetMs_k__BackingField() const;


// Properties

static ::GlobalNamespace::IPacketPool_1<::GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable> __declspec(property(get=get_pool))  pool;

 ::GlobalNamespace::SyncStateId __declspec(property(get=get_baseId, put=set_baseId))  baseId;

 int32_t __declspec(property(get=get_timeOffsetMs, put=set_timeOffsetMs))  timeOffsetMs;

 ::GlobalNamespace::StandardScoreSyncState __declspec(property(get=get_delta, put=set_delta))  delta;


// Methods

/// @brief Method get_pool addr 0xdcd748 size 0x40 virtual false final false
static ::GlobalNamespace::IPacketPool_1<::GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable> get_pool() ;

/// @brief Method get_baseId addr 0xdcd788 size 0x8 virtual true final true
 ::GlobalNamespace::SyncStateId get_baseId() ;

/// @brief Method set_baseId addr 0xdcd790 size 0x8 virtual true final true
 void set_baseId(::GlobalNamespace::SyncStateId value) ;

/// @brief Method get_timeOffsetMs addr 0xdcd798 size 0x8 virtual true final true
 int32_t get_timeOffsetMs() ;

/// @brief Method set_timeOffsetMs addr 0xdcd7a0 size 0x8 virtual true final true
 void set_timeOffsetMs(int32_t value) ;

/// @brief Method get_delta addr 0xdcd7a8 size 0x14 virtual true final true
 ::GlobalNamespace::StandardScoreSyncState get_delta() ;

/// @brief Method set_delta addr 0xdcd7bc size 0x14 virtual true final true
 void set_delta(::GlobalNamespace::StandardScoreSyncState value) ;

/// @brief Method Serialize addr 0xdcd7d0 size 0xb0 virtual true final true
 void Serialize(::LiteNetLib::Utils::NetDataWriter writer) ;

/// @brief Method Deserialize addr 0xdcd880 size 0x60 virtual true final true
 void Deserialize(::LiteNetLib::Utils::NetDataReader reader) ;

/// @brief Method Release addr 0xdcd8e0 size 0xac virtual true final true
 void Release() ;

// Ctor Parameters []
explicit StandardScoreSyncStateDeltaNetSerializable() ;

/// @brief Method .ctor addr 0xdcd98c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable, "", "StandardScoreSyncStateDeltaNetSerializable");
