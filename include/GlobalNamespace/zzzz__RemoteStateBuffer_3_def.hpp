#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__StateBuffer_3_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
namespace GlobalNamespace {
struct PoseSerializable;
}
namespace System {
struct Int32Enum;
}
namespace GlobalNamespace {
template<typename TStateTable,typename TType,typename TState>
struct GlobalNamespace__StateBuffer_3__TimestampedStateTable;
}
namespace GlobalNamespace {
template<typename TStateTable,typename TType,typename TState>
class GlobalNamespace__StateBuffer_3__InterpolationDelegate;
}
namespace GlobalNamespace {
struct SyncStateId;
}
namespace GlobalNamespace {
template<typename TStateTable,typename TType,typename TState>
class GlobalNamespace__StateBuffer_3__SmoothingDelegate;
}
namespace GlobalNamespace {
struct NodePoseSyncState;
}
namespace GlobalNamespace {
struct StandardScoreSyncState;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename TStateTable,typename TType,typename TState>
class RemoteStateBuffer_3;
}
namespace GlobalNamespace {
template<>
class RemoteStateBuffer_3<GlobalNamespace::NodePoseSyncState,System::Int32Enum,GlobalNamespace::PoseSerializable>;
}
namespace GlobalNamespace {
template<>
class RemoteStateBuffer_3<GlobalNamespace::StandardScoreSyncState,System::Int32Enum,int32_t>;
}
// Type: ::RemoteStateBuffer`3
// Type: ::RemoteStateBuffer`3
namespace GlobalNamespace {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12924)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12924), inst: 3699 }), TypeDefinitionIndex(TypeDefinitionIndex(12926))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12926), inst: 4981 })
// CS Name: RemoteStateBuffer`3
class CORDL_TYPE RemoteStateBuffer_3<GlobalNamespace::NodePoseSyncState,System::Int32Enum,GlobalNamespace::PoseSerializable> : public GlobalNamespace::StateBuffer_3<GlobalNamespace::NodePoseSyncState,System::Int32Enum,GlobalNamespace::PoseSerializable> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x60};

virtual ~RemoteStateBuffer_3() = default;

// Ctor Parameters [CppParam { name: "", ty: "RemoteStateBuffer_3", modifiers: " const&", def_value: None }]
constexpr RemoteStateBuffer_3(RemoteStateBuffer_3 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RemoteStateBuffer_3", modifiers: "&&", def_value: None }]
constexpr RemoteStateBuffer_3(RemoteStateBuffer_3&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RemoteStateBuffer_3(void* ptr) noexcept : GlobalNamespace::StateBuffer_3<GlobalNamespace::NodePoseSyncState,System::Int32Enum,GlobalNamespace::PoseSerializable>(ptr) {
}


  constexpr RemoteStateBuffer_3& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RemoteStateBuffer_3& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RemoteStateBuffer_3& operator=(RemoteStateBuffer_3&& o) noexcept = default;
  constexpr RemoteStateBuffer_3& operator=(RemoteStateBuffer_3 const& o) noexcept = default;
                


// Fields

/// @brief Field kMaxStateQueueSize offset 0
static constexpr int32_t  kMaxStateQueueSize{4};

/// @brief Field kMaxDeltaQueueSize offset 0
static constexpr int32_t  kMaxDeltaQueueSize{64};

 ::ArrayW<GlobalNamespace::GlobalNamespace__StateBuffer_3__TimestampedStateTable<GlobalNamespace::NodePoseSyncState,System::Int32Enum,GlobalNamespace::PoseSerializable>> __declspec(property(get=__get__receivedStates, put=__set__receivedStates))  _receivedStates;

constexpr void __set__receivedStates(::ArrayW<GlobalNamespace::GlobalNamespace__StateBuffer_3__TimestampedStateTable<GlobalNamespace::NodePoseSyncState,System::Int32Enum,GlobalNamespace::PoseSerializable>> value) ;

constexpr ::ArrayW<GlobalNamespace::GlobalNamespace__StateBuffer_3__TimestampedStateTable<GlobalNamespace::NodePoseSyncState,System::Int32Enum,GlobalNamespace::PoseSerializable>> __get__receivedStates() const;

 ::ArrayW<GlobalNamespace::GlobalNamespace__StateBuffer_3__TimestampedStateTable<GlobalNamespace::NodePoseSyncState,System::Int32Enum,GlobalNamespace::PoseSerializable>> __declspec(property(get=__get__receivedDeltas, put=__set__receivedDeltas))  _receivedDeltas;

constexpr void __set__receivedDeltas(::ArrayW<GlobalNamespace::GlobalNamespace__StateBuffer_3__TimestampedStateTable<GlobalNamespace::NodePoseSyncState,System::Int32Enum,GlobalNamespace::PoseSerializable>> value) ;

constexpr ::ArrayW<GlobalNamespace::GlobalNamespace__StateBuffer_3__TimestampedStateTable<GlobalNamespace::NodePoseSyncState,System::Int32Enum,GlobalNamespace::PoseSerializable>> __get__receivedDeltas() const;

 int32_t __declspec(property(get=__get__receivedStateIndex, put=__set__receivedStateIndex))  _receivedStateIndex;

constexpr void __set__receivedStateIndex(int32_t value) ;

constexpr int32_t __get__receivedStateIndex() const;

 int32_t __declspec(property(get=__get__receivedStateCount, put=__set__receivedStateCount))  _receivedStateCount;

constexpr void __set__receivedStateCount(int32_t value) ;

constexpr int32_t __get__receivedStateCount() const;

 int32_t __declspec(property(get=__get__receivedDeltaIndex, put=__set__receivedDeltaIndex))  _receivedDeltaIndex;

constexpr void __set__receivedDeltaIndex(int32_t value) ;

constexpr int32_t __get__receivedDeltaIndex() const;

 int32_t __declspec(property(get=__get__receivedDeltaCount, put=__set__receivedDeltaCount))  _receivedDeltaCount;

constexpr void __set__receivedDeltaCount(int32_t value) ;

constexpr int32_t __get__receivedDeltaCount() const;


// Methods

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual true final false
 void Clear() ;

/// @brief Method PushState addr 0x0 size 0xffffffffffffffff virtual false final false
 void PushState(GlobalNamespace::SyncStateId id, GlobalNamespace::NodePoseSyncState state, float_t time) ;

/// @brief Method PushDelta addr 0x0 size 0xffffffffffffffff virtual false final false
 void PushDelta(GlobalNamespace::SyncStateId baseId, GlobalNamespace::NodePoseSyncState delta, float_t timeOffset) ;

/// @brief Method ProcessQueue addr 0x0 size 0xffffffffffffffff virtual false final false
 void ProcessQueue() ;

// Ctor Parameters [CppParam { name: "size", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "interpolator", ty: "GlobalNamespace::GlobalNamespace__StateBuffer_3__InterpolationDelegate<GlobalNamespace::NodePoseSyncState,System::Int32Enum,GlobalNamespace::PoseSerializable>", modifiers: "", def_value: None }, CppParam { name: "smoother", ty: "GlobalNamespace::GlobalNamespace__StateBuffer_3__SmoothingDelegate<GlobalNamespace::NodePoseSyncState,System::Int32Enum,GlobalNamespace::PoseSerializable>", modifiers: "", def_value: None }]
explicit RemoteStateBuffer_3(int32_t size, GlobalNamespace::GlobalNamespace__StateBuffer_3__InterpolationDelegate<GlobalNamespace::NodePoseSyncState,System::Int32Enum,GlobalNamespace::PoseSerializable> interpolator, GlobalNamespace::GlobalNamespace__StateBuffer_3__SmoothingDelegate<GlobalNamespace::NodePoseSyncState,System::Int32Enum,GlobalNamespace::PoseSerializable> smoother) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(int32_t size, GlobalNamespace::GlobalNamespace__StateBuffer_3__InterpolationDelegate<GlobalNamespace::NodePoseSyncState,System::Int32Enum,GlobalNamespace::PoseSerializable> interpolator, GlobalNamespace::GlobalNamespace__StateBuffer_3__SmoothingDelegate<GlobalNamespace::NodePoseSyncState,System::Int32Enum,GlobalNamespace::PoseSerializable> smoother) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::RemoteStateBuffer`3
namespace GlobalNamespace {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12924)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12924), inst: 3699 }), TypeDefinitionIndex(TypeDefinitionIndex(12926))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12926), inst: 4982 })
// CS Name: RemoteStateBuffer`3
class CORDL_TYPE RemoteStateBuffer_3<GlobalNamespace::StandardScoreSyncState,System::Int32Enum,int32_t> : public GlobalNamespace::StateBuffer_3<GlobalNamespace::StandardScoreSyncState,System::Int32Enum,int32_t> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x60};

virtual ~RemoteStateBuffer_3() = default;

// Ctor Parameters [CppParam { name: "", ty: "RemoteStateBuffer_3", modifiers: " const&", def_value: None }]
constexpr RemoteStateBuffer_3(RemoteStateBuffer_3 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RemoteStateBuffer_3", modifiers: "&&", def_value: None }]
constexpr RemoteStateBuffer_3(RemoteStateBuffer_3&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RemoteStateBuffer_3(void* ptr) noexcept : GlobalNamespace::StateBuffer_3<GlobalNamespace::StandardScoreSyncState,System::Int32Enum,int32_t>(ptr) {
}


  constexpr RemoteStateBuffer_3& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RemoteStateBuffer_3& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RemoteStateBuffer_3& operator=(RemoteStateBuffer_3&& o) noexcept = default;
  constexpr RemoteStateBuffer_3& operator=(RemoteStateBuffer_3 const& o) noexcept = default;
                


// Fields

/// @brief Field kMaxStateQueueSize offset 0
static constexpr int32_t  kMaxStateQueueSize{4};

/// @brief Field kMaxDeltaQueueSize offset 0
static constexpr int32_t  kMaxDeltaQueueSize{64};

 ::ArrayW<GlobalNamespace::GlobalNamespace__StateBuffer_3__TimestampedStateTable<GlobalNamespace::StandardScoreSyncState,System::Int32Enum,int32_t>> __declspec(property(get=__get__receivedStates, put=__set__receivedStates))  _receivedStates;

constexpr void __set__receivedStates(::ArrayW<GlobalNamespace::GlobalNamespace__StateBuffer_3__TimestampedStateTable<GlobalNamespace::StandardScoreSyncState,System::Int32Enum,int32_t>> value) ;

constexpr ::ArrayW<GlobalNamespace::GlobalNamespace__StateBuffer_3__TimestampedStateTable<GlobalNamespace::StandardScoreSyncState,System::Int32Enum,int32_t>> __get__receivedStates() const;

 ::ArrayW<GlobalNamespace::GlobalNamespace__StateBuffer_3__TimestampedStateTable<GlobalNamespace::StandardScoreSyncState,System::Int32Enum,int32_t>> __declspec(property(get=__get__receivedDeltas, put=__set__receivedDeltas))  _receivedDeltas;

constexpr void __set__receivedDeltas(::ArrayW<GlobalNamespace::GlobalNamespace__StateBuffer_3__TimestampedStateTable<GlobalNamespace::StandardScoreSyncState,System::Int32Enum,int32_t>> value) ;

constexpr ::ArrayW<GlobalNamespace::GlobalNamespace__StateBuffer_3__TimestampedStateTable<GlobalNamespace::StandardScoreSyncState,System::Int32Enum,int32_t>> __get__receivedDeltas() const;

 int32_t __declspec(property(get=__get__receivedStateIndex, put=__set__receivedStateIndex))  _receivedStateIndex;

constexpr void __set__receivedStateIndex(int32_t value) ;

constexpr int32_t __get__receivedStateIndex() const;

 int32_t __declspec(property(get=__get__receivedStateCount, put=__set__receivedStateCount))  _receivedStateCount;

constexpr void __set__receivedStateCount(int32_t value) ;

constexpr int32_t __get__receivedStateCount() const;

 int32_t __declspec(property(get=__get__receivedDeltaIndex, put=__set__receivedDeltaIndex))  _receivedDeltaIndex;

constexpr void __set__receivedDeltaIndex(int32_t value) ;

constexpr int32_t __get__receivedDeltaIndex() const;

 int32_t __declspec(property(get=__get__receivedDeltaCount, put=__set__receivedDeltaCount))  _receivedDeltaCount;

constexpr void __set__receivedDeltaCount(int32_t value) ;

constexpr int32_t __get__receivedDeltaCount() const;


// Methods

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual true final false
 void Clear() ;

/// @brief Method PushState addr 0x0 size 0xffffffffffffffff virtual false final false
 void PushState(GlobalNamespace::SyncStateId id, GlobalNamespace::StandardScoreSyncState state, float_t time) ;

/// @brief Method PushDelta addr 0x0 size 0xffffffffffffffff virtual false final false
 void PushDelta(GlobalNamespace::SyncStateId baseId, GlobalNamespace::StandardScoreSyncState delta, float_t timeOffset) ;

/// @brief Method ProcessQueue addr 0x0 size 0xffffffffffffffff virtual false final false
 void ProcessQueue() ;

// Ctor Parameters [CppParam { name: "size", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "interpolator", ty: "GlobalNamespace::GlobalNamespace__StateBuffer_3__InterpolationDelegate<GlobalNamespace::StandardScoreSyncState,System::Int32Enum,int32_t>", modifiers: "", def_value: None }, CppParam { name: "smoother", ty: "GlobalNamespace::GlobalNamespace__StateBuffer_3__SmoothingDelegate<GlobalNamespace::StandardScoreSyncState,System::Int32Enum,int32_t>", modifiers: "", def_value: None }]
explicit RemoteStateBuffer_3(int32_t size, GlobalNamespace::GlobalNamespace__StateBuffer_3__InterpolationDelegate<GlobalNamespace::StandardScoreSyncState,System::Int32Enum,int32_t> interpolator, GlobalNamespace::GlobalNamespace__StateBuffer_3__SmoothingDelegate<GlobalNamespace::StandardScoreSyncState,System::Int32Enum,int32_t> smoother) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(int32_t size, GlobalNamespace::GlobalNamespace__StateBuffer_3__InterpolationDelegate<GlobalNamespace::StandardScoreSyncState,System::Int32Enum,int32_t> interpolator, GlobalNamespace::GlobalNamespace__StateBuffer_3__SmoothingDelegate<GlobalNamespace::StandardScoreSyncState,System::Int32Enum,int32_t> smoother) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(GlobalNamespace::RemoteStateBuffer_3, "", "RemoteStateBuffer`3");
