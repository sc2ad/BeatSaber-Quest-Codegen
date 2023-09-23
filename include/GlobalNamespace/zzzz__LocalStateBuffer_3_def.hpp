#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__StateBuffer_3_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
namespace GlobalNamespace {
struct PoseSerializable;
}
namespace GlobalNamespace {
template<typename TStateTable,typename TType,typename TState>
struct GlobalNamespace__StateBuffer_3__TimestampedStateTable;
}
namespace System {
struct Int32Enum;
}
namespace GlobalNamespace {
struct NodePoseSyncState;
}
namespace GlobalNamespace {
template<typename TStateTable,typename TType,typename TState>
class GlobalNamespace__StateBuffer_3__InterpolationDelegate;
}
namespace GlobalNamespace {
template<typename TStateTable,typename TType,typename TState>
class GlobalNamespace__StateBuffer_3__SmoothingDelegate;
}
namespace GlobalNamespace {
struct SyncStateId;
}
namespace GlobalNamespace {
struct StandardScoreSyncState;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename TStateTable,typename TType,typename TState>
class LocalStateBuffer_3;
}
namespace GlobalNamespace {
template<>
class LocalStateBuffer_3<GlobalNamespace::NodePoseSyncState,System::Int32Enum,GlobalNamespace::PoseSerializable>;
}
namespace GlobalNamespace {
template<>
class LocalStateBuffer_3<GlobalNamespace::StandardScoreSyncState,System::Int32Enum,int32_t>;
}
// Type: ::LocalStateBuffer`3
// Type: ::LocalStateBuffer`3
namespace GlobalNamespace {
// cpp template
template<>
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12924), inst: 3695 }), TypeDefinitionIndex(TypeDefinitionIndex(12925)), TypeDefinitionIndex(TypeDefinitionIndex(12924))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12925), inst: 4981 })
// CS Name: LocalStateBuffer`3
class CORDL_TYPE LocalStateBuffer_3<GlobalNamespace::NodePoseSyncState,System::Int32Enum,GlobalNamespace::PoseSerializable> : public GlobalNamespace::StateBuffer_3<GlobalNamespace::NodePoseSyncState,System::Int32Enum,GlobalNamespace::PoseSerializable> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x70};

virtual ~LocalStateBuffer_3() = default;

// Ctor Parameters [CppParam { name: "", ty: "LocalStateBuffer_3", modifiers: " const&", def_value: None }]
constexpr LocalStateBuffer_3(LocalStateBuffer_3 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LocalStateBuffer_3", modifiers: "&&", def_value: None }]
constexpr LocalStateBuffer_3(LocalStateBuffer_3&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LocalStateBuffer_3(void* ptr) noexcept : GlobalNamespace::StateBuffer_3<GlobalNamespace::NodePoseSyncState,System::Int32Enum,GlobalNamespace::PoseSerializable>(ptr) {
}


  constexpr LocalStateBuffer_3& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LocalStateBuffer_3& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LocalStateBuffer_3& operator=(LocalStateBuffer_3&& o) noexcept = default;
  constexpr LocalStateBuffer_3& operator=(LocalStateBuffer_3 const& o) noexcept = default;
                


// Fields

 GlobalNamespace::GlobalNamespace__StateBuffer_3__TimestampedStateTable<GlobalNamespace::NodePoseSyncState,System::Int32Enum,GlobalNamespace::PoseSerializable> __declspec(property(get=__get__current, put=__set__current))  _current;

constexpr void __set__current(GlobalNamespace::GlobalNamespace__StateBuffer_3__TimestampedStateTable<GlobalNamespace::NodePoseSyncState,System::Int32Enum,GlobalNamespace::PoseSerializable> value) ;

constexpr GlobalNamespace::GlobalNamespace__StateBuffer_3__TimestampedStateTable<GlobalNamespace::NodePoseSyncState,System::Int32Enum,GlobalNamespace::PoseSerializable> __get__current() const;

 float_t __declspec(property(get=__get__fullStateUpdateFrequency, put=__set__fullStateUpdateFrequency))  _fullStateUpdateFrequency;

constexpr void __set__fullStateUpdateFrequency(float_t value) ;

constexpr float_t __get__fullStateUpdateFrequency() const;

 float_t __declspec(property(get=__get__deltaUpdateFrequency, put=__set__deltaUpdateFrequency))  _deltaUpdateFrequency;

constexpr void __set__deltaUpdateFrequency(float_t value) ;

constexpr float_t __get__deltaUpdateFrequency() const;

/// @brief Field kMaxSentStates offset 0
static constexpr int32_t  kMaxSentStates{4};

/// @brief Field kMaxSentDeltas offset 0
static constexpr int32_t  kMaxSentDeltas{4};

 int32_t __declspec(property(get=__get__sentStateIndex, put=__set__sentStateIndex))  _sentStateIndex;

constexpr void __set__sentStateIndex(int32_t value) ;

constexpr int32_t __get__sentStateIndex() const;

 int32_t __declspec(property(get=__get__sentDeltaIndex, put=__set__sentDeltaIndex))  _sentDeltaIndex;

constexpr void __set__sentDeltaIndex(int32_t value) ;

constexpr int32_t __get__sentDeltaIndex() const;

 ::ArrayW<GlobalNamespace::GlobalNamespace__StateBuffer_3__TimestampedStateTable<GlobalNamespace::NodePoseSyncState,System::Int32Enum,GlobalNamespace::PoseSerializable>> __declspec(property(get=__get__sentStates, put=__set__sentStates))  _sentStates;

constexpr void __set__sentStates(::ArrayW<GlobalNamespace::GlobalNamespace__StateBuffer_3__TimestampedStateTable<GlobalNamespace::NodePoseSyncState,System::Int32Enum,GlobalNamespace::PoseSerializable>> value) ;

constexpr ::ArrayW<GlobalNamespace::GlobalNamespace__StateBuffer_3__TimestampedStateTable<GlobalNamespace::NodePoseSyncState,System::Int32Enum,GlobalNamespace::PoseSerializable>> __get__sentStates() const;

 ::ArrayW<GlobalNamespace::GlobalNamespace__StateBuffer_3__TimestampedStateTable<GlobalNamespace::NodePoseSyncState,System::Int32Enum,GlobalNamespace::PoseSerializable>> __declspec(property(get=__get__sentDeltas, put=__set__sentDeltas))  _sentDeltas;

constexpr void __set__sentDeltas(::ArrayW<GlobalNamespace::GlobalNamespace__StateBuffer_3__TimestampedStateTable<GlobalNamespace::NodePoseSyncState,System::Int32Enum,GlobalNamespace::PoseSerializable>> value) ;

constexpr ::ArrayW<GlobalNamespace::GlobalNamespace__StateBuffer_3__TimestampedStateTable<GlobalNamespace::NodePoseSyncState,System::Int32Enum,GlobalNamespace::PoseSerializable>> __get__sentDeltas() const;

 GlobalNamespace::SyncStateId __declspec(property(get=__get__lastSentSyncStateId, put=__set__lastSentSyncStateId))  _lastSentSyncStateId;

constexpr void __set__lastSentSyncStateId(GlobalNamespace::SyncStateId value) ;

constexpr GlobalNamespace::SyncStateId __get__lastSentSyncStateId() const;


// Methods

// Ctor Parameters [CppParam { name: "fullStateUpdateFrequency", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "deltaUpdateFrequency", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "size", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "interpolator", ty: "GlobalNamespace::GlobalNamespace__StateBuffer_3__InterpolationDelegate<GlobalNamespace::NodePoseSyncState,System::Int32Enum,GlobalNamespace::PoseSerializable>", modifiers: "", def_value: None }, CppParam { name: "smoother", ty: "GlobalNamespace::GlobalNamespace__StateBuffer_3__SmoothingDelegate<GlobalNamespace::NodePoseSyncState,System::Int32Enum,GlobalNamespace::PoseSerializable>", modifiers: "", def_value: None }]
explicit LocalStateBuffer_3(float_t fullStateUpdateFrequency, float_t deltaUpdateFrequency, int32_t size, GlobalNamespace::GlobalNamespace__StateBuffer_3__InterpolationDelegate<GlobalNamespace::NodePoseSyncState,System::Int32Enum,GlobalNamespace::PoseSerializable> interpolator, GlobalNamespace::GlobalNamespace__StateBuffer_3__SmoothingDelegate<GlobalNamespace::NodePoseSyncState,System::Int32Enum,GlobalNamespace::PoseSerializable> smoother) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(float_t fullStateUpdateFrequency, float_t deltaUpdateFrequency, int32_t size, GlobalNamespace::GlobalNamespace__StateBuffer_3__InterpolationDelegate<GlobalNamespace::NodePoseSyncState,System::Int32Enum,GlobalNamespace::PoseSerializable> interpolator, GlobalNamespace::GlobalNamespace__StateBuffer_3__SmoothingDelegate<GlobalNamespace::NodePoseSyncState,System::Int32Enum,GlobalNamespace::PoseSerializable> smoother) ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual true final false
 void Clear() ;

/// @brief Method MarkDirty addr 0x0 size 0xffffffffffffffff virtual false final false
 void MarkDirty() ;

/// @brief Method TryGetSerializedState addr 0x0 size 0xffffffffffffffff virtual false final false
 bool TryGetSerializedState(ByRef<GlobalNamespace::NodePoseSyncState> state, ByRef<float_t> time, ByRef<GlobalNamespace::SyncStateId> id) ;

/// @brief Method TryGetSerializedStateDelta addr 0x0 size 0xffffffffffffffff virtual false final false
 bool TryGetSerializedStateDelta(ByRef<GlobalNamespace::NodePoseSyncState> delta, ByRef<float_t> timeOffset, ByRef<GlobalNamespace::SyncStateId> baseId) ;

/// @brief Method SetTime addr 0x0 size 0xffffffffffffffff virtual false final false
 void SetTime(float_t time) ;

/// @brief Method SetState addr 0x0 size 0xffffffffffffffff virtual false final false
 void SetState(System::Int32Enum type, GlobalNamespace::PoseSerializable state) ;

/// @brief Method GetState addr 0x0 size 0xffffffffffffffff virtual false final false
 GlobalNamespace::PoseSerializable GetState(System::Int32Enum type) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::LocalStateBuffer`3
namespace GlobalNamespace {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12924)), TypeDefinitionIndex(TypeDefinitionIndex(12925)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12924), inst: 3695 })}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12925), inst: 4982 })
// CS Name: LocalStateBuffer`3
class CORDL_TYPE LocalStateBuffer_3<GlobalNamespace::StandardScoreSyncState,System::Int32Enum,int32_t> : public GlobalNamespace::StateBuffer_3<GlobalNamespace::StandardScoreSyncState,System::Int32Enum,int32_t> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x70};

virtual ~LocalStateBuffer_3() = default;

// Ctor Parameters [CppParam { name: "", ty: "LocalStateBuffer_3", modifiers: " const&", def_value: None }]
constexpr LocalStateBuffer_3(LocalStateBuffer_3 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LocalStateBuffer_3", modifiers: "&&", def_value: None }]
constexpr LocalStateBuffer_3(LocalStateBuffer_3&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LocalStateBuffer_3(void* ptr) noexcept : GlobalNamespace::StateBuffer_3<GlobalNamespace::StandardScoreSyncState,System::Int32Enum,int32_t>(ptr) {
}


  constexpr LocalStateBuffer_3& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LocalStateBuffer_3& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LocalStateBuffer_3& operator=(LocalStateBuffer_3&& o) noexcept = default;
  constexpr LocalStateBuffer_3& operator=(LocalStateBuffer_3 const& o) noexcept = default;
                


// Fields

 GlobalNamespace::GlobalNamespace__StateBuffer_3__TimestampedStateTable<GlobalNamespace::StandardScoreSyncState,System::Int32Enum,int32_t> __declspec(property(get=__get__current, put=__set__current))  _current;

constexpr void __set__current(GlobalNamespace::GlobalNamespace__StateBuffer_3__TimestampedStateTable<GlobalNamespace::StandardScoreSyncState,System::Int32Enum,int32_t> value) ;

constexpr GlobalNamespace::GlobalNamespace__StateBuffer_3__TimestampedStateTable<GlobalNamespace::StandardScoreSyncState,System::Int32Enum,int32_t> __get__current() const;

 float_t __declspec(property(get=__get__fullStateUpdateFrequency, put=__set__fullStateUpdateFrequency))  _fullStateUpdateFrequency;

constexpr void __set__fullStateUpdateFrequency(float_t value) ;

constexpr float_t __get__fullStateUpdateFrequency() const;

 float_t __declspec(property(get=__get__deltaUpdateFrequency, put=__set__deltaUpdateFrequency))  _deltaUpdateFrequency;

constexpr void __set__deltaUpdateFrequency(float_t value) ;

constexpr float_t __get__deltaUpdateFrequency() const;

/// @brief Field kMaxSentStates offset 0
static constexpr int32_t  kMaxSentStates{4};

/// @brief Field kMaxSentDeltas offset 0
static constexpr int32_t  kMaxSentDeltas{4};

 int32_t __declspec(property(get=__get__sentStateIndex, put=__set__sentStateIndex))  _sentStateIndex;

constexpr void __set__sentStateIndex(int32_t value) ;

constexpr int32_t __get__sentStateIndex() const;

 int32_t __declspec(property(get=__get__sentDeltaIndex, put=__set__sentDeltaIndex))  _sentDeltaIndex;

constexpr void __set__sentDeltaIndex(int32_t value) ;

constexpr int32_t __get__sentDeltaIndex() const;

 ::ArrayW<GlobalNamespace::GlobalNamespace__StateBuffer_3__TimestampedStateTable<GlobalNamespace::StandardScoreSyncState,System::Int32Enum,int32_t>> __declspec(property(get=__get__sentStates, put=__set__sentStates))  _sentStates;

constexpr void __set__sentStates(::ArrayW<GlobalNamespace::GlobalNamespace__StateBuffer_3__TimestampedStateTable<GlobalNamespace::StandardScoreSyncState,System::Int32Enum,int32_t>> value) ;

constexpr ::ArrayW<GlobalNamespace::GlobalNamespace__StateBuffer_3__TimestampedStateTable<GlobalNamespace::StandardScoreSyncState,System::Int32Enum,int32_t>> __get__sentStates() const;

 ::ArrayW<GlobalNamespace::GlobalNamespace__StateBuffer_3__TimestampedStateTable<GlobalNamespace::StandardScoreSyncState,System::Int32Enum,int32_t>> __declspec(property(get=__get__sentDeltas, put=__set__sentDeltas))  _sentDeltas;

constexpr void __set__sentDeltas(::ArrayW<GlobalNamespace::GlobalNamespace__StateBuffer_3__TimestampedStateTable<GlobalNamespace::StandardScoreSyncState,System::Int32Enum,int32_t>> value) ;

constexpr ::ArrayW<GlobalNamespace::GlobalNamespace__StateBuffer_3__TimestampedStateTable<GlobalNamespace::StandardScoreSyncState,System::Int32Enum,int32_t>> __get__sentDeltas() const;

 GlobalNamespace::SyncStateId __declspec(property(get=__get__lastSentSyncStateId, put=__set__lastSentSyncStateId))  _lastSentSyncStateId;

constexpr void __set__lastSentSyncStateId(GlobalNamespace::SyncStateId value) ;

constexpr GlobalNamespace::SyncStateId __get__lastSentSyncStateId() const;


// Methods

// Ctor Parameters [CppParam { name: "fullStateUpdateFrequency", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "deltaUpdateFrequency", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "size", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "interpolator", ty: "GlobalNamespace::GlobalNamespace__StateBuffer_3__InterpolationDelegate<GlobalNamespace::StandardScoreSyncState,System::Int32Enum,int32_t>", modifiers: "", def_value: None }, CppParam { name: "smoother", ty: "GlobalNamespace::GlobalNamespace__StateBuffer_3__SmoothingDelegate<GlobalNamespace::StandardScoreSyncState,System::Int32Enum,int32_t>", modifiers: "", def_value: None }]
explicit LocalStateBuffer_3(float_t fullStateUpdateFrequency, float_t deltaUpdateFrequency, int32_t size, GlobalNamespace::GlobalNamespace__StateBuffer_3__InterpolationDelegate<GlobalNamespace::StandardScoreSyncState,System::Int32Enum,int32_t> interpolator, GlobalNamespace::GlobalNamespace__StateBuffer_3__SmoothingDelegate<GlobalNamespace::StandardScoreSyncState,System::Int32Enum,int32_t> smoother) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(float_t fullStateUpdateFrequency, float_t deltaUpdateFrequency, int32_t size, GlobalNamespace::GlobalNamespace__StateBuffer_3__InterpolationDelegate<GlobalNamespace::StandardScoreSyncState,System::Int32Enum,int32_t> interpolator, GlobalNamespace::GlobalNamespace__StateBuffer_3__SmoothingDelegate<GlobalNamespace::StandardScoreSyncState,System::Int32Enum,int32_t> smoother) ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual true final false
 void Clear() ;

/// @brief Method MarkDirty addr 0x0 size 0xffffffffffffffff virtual false final false
 void MarkDirty() ;

/// @brief Method TryGetSerializedState addr 0x0 size 0xffffffffffffffff virtual false final false
 bool TryGetSerializedState(ByRef<GlobalNamespace::StandardScoreSyncState> state, ByRef<float_t> time, ByRef<GlobalNamespace::SyncStateId> id) ;

/// @brief Method TryGetSerializedStateDelta addr 0x0 size 0xffffffffffffffff virtual false final false
 bool TryGetSerializedStateDelta(ByRef<GlobalNamespace::StandardScoreSyncState> delta, ByRef<float_t> timeOffset, ByRef<GlobalNamespace::SyncStateId> baseId) ;

/// @brief Method SetTime addr 0x0 size 0xffffffffffffffff virtual false final false
 void SetTime(float_t time) ;

/// @brief Method SetState addr 0x0 size 0xffffffffffffffff virtual false final false
 void SetState(System::Int32Enum type, int32_t state) ;

/// @brief Method GetState addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t GetState(System::Int32Enum type) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(GlobalNamespace::LocalStateBuffer_3, "", "LocalStateBuffer`3");
