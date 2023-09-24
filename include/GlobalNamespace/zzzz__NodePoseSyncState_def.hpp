#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstddef>
#include <cstdint>
namespace LiteNetLib::Utils {
class INetSerializable;
}
namespace GlobalNamespace {
template<typename TStateTable,typename TType,typename TState>
class IStateTable_3;
}
namespace LiteNetLib::Utils {
class NetDataReader;
}
namespace GlobalNamespace {
template<typename T>
class IEquatableByReference_1;
}
namespace GlobalNamespace {
struct PoseSerializable;
}
namespace GlobalNamespace {
struct GlobalNamespace__NodePoseSyncState__NodePose;
}
namespace LiteNetLib::Utils {
class NetDataWriter;
}
// Forward declare root types
namespace GlobalNamespace {
struct GlobalNamespace__NodePoseSyncState__NodePose;
}
namespace GlobalNamespace {
struct NodePoseSyncState;
}
// Type: ::NodePose
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12911))
// CS Name: NodePoseSyncState::NodePose
struct CORDL_TYPE GlobalNamespace__NodePoseSyncState__NodePose : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GlobalNamespace__NodePoseSyncState__NodePose(int32_t value__) noexcept;


                    constexpr GlobalNamespace__NodePoseSyncState__NodePose(GlobalNamespace__NodePoseSyncState__NodePose const&) = default;
                    constexpr GlobalNamespace__NodePoseSyncState__NodePose(GlobalNamespace__NodePoseSyncState__NodePose&&) = default;
                    constexpr GlobalNamespace__NodePoseSyncState__NodePose& operator=(GlobalNamespace__NodePoseSyncState__NodePose const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__NodePoseSyncState__NodePose& operator=(GlobalNamespace__NodePoseSyncState__NodePose&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__NodePoseSyncState__NodePose(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __GlobalNamespace__NodePoseSyncState__NodePose_Unwrapped : int32_t {
__Head = 0,
__LeftController = 1,
__RightController = 2,
__Count = 3,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GlobalNamespace__NodePoseSyncState__NodePose_Unwrapped () const noexcept {
return std::bit_cast<__GlobalNamespace__NodePoseSyncState__NodePose_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Head offset 0
static GlobalNamespace::GlobalNamespace__NodePoseSyncState__NodePose const Head;

/// @brief Field LeftController offset 0
static GlobalNamespace::GlobalNamespace__NodePoseSyncState__NodePose const LeftController;

/// @brief Field RightController offset 0
static GlobalNamespace::GlobalNamespace__NodePoseSyncState__NodePose const RightController;

/// @brief Field Count offset 0
static GlobalNamespace::GlobalNamespace__NodePoseSyncState__NodePose const Count;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::NodePoseSyncState
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12912))
// CS Name: NodePoseSyncState
struct CORDL_TYPE NodePoseSyncState : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
using NodePose = GlobalNamespace::GlobalNamespace__NodePoseSyncState__NodePose;

/// @brief Convert operator to GlobalNamespace::IStateTable_3<GlobalNamespace::NodePoseSyncState,GlobalNamespace::GlobalNamespace__NodePoseSyncState__NodePose,GlobalNamespace::PoseSerializable>
constexpr operator  GlobalNamespace::IStateTable_3<GlobalNamespace::NodePoseSyncState,GlobalNamespace::GlobalNamespace__NodePoseSyncState__NodePose,GlobalNamespace::PoseSerializable>() const;

/// @brief Convert operator to LiteNetLib::Utils::INetSerializable
constexpr operator  LiteNetLib::Utils::INetSerializable() const;

/// @brief Convert operator to GlobalNamespace::IEquatableByReference_1<GlobalNamespace::NodePoseSyncState>
constexpr operator  GlobalNamespace::IEquatableByReference_1<GlobalNamespace::NodePoseSyncState>() const;

// Ctor Parameters [CppParam { name: "_head", ty: "GlobalNamespace::PoseSerializable", modifiers: "", def_value: None }, CppParam { name: "_leftController", ty: "GlobalNamespace::PoseSerializable", modifiers: "", def_value: None }, CppParam { name: "_rightController", ty: "GlobalNamespace::PoseSerializable", modifiers: "", def_value: None }]
constexpr NodePoseSyncState(GlobalNamespace::PoseSerializable _head, GlobalNamespace::PoseSerializable _leftController, GlobalNamespace::PoseSerializable _rightController) noexcept;


                    constexpr NodePoseSyncState(NodePoseSyncState const&) = default;
                    constexpr NodePoseSyncState(NodePoseSyncState&&) = default;
                    constexpr NodePoseSyncState& operator=(NodePoseSyncState const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr NodePoseSyncState& operator=(NodePoseSyncState&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x48};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit NodePoseSyncState(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 GlobalNamespace::PoseSerializable __declspec(property(get=__get__head, put=__set__head))  _head;

constexpr void __set__head(GlobalNamespace::PoseSerializable value) ;

constexpr GlobalNamespace::PoseSerializable __get__head() const;

 GlobalNamespace::PoseSerializable __declspec(property(get=__get__leftController, put=__set__leftController))  _leftController;

constexpr void __set__leftController(GlobalNamespace::PoseSerializable value) ;

constexpr GlobalNamespace::PoseSerializable __get__leftController() const;

 GlobalNamespace::PoseSerializable __declspec(property(get=__get__rightController, put=__set__rightController))  _rightController;

constexpr void __set__rightController(GlobalNamespace::PoseSerializable value) ;

constexpr GlobalNamespace::PoseSerializable __get__rightController() const;


// Methods

/// @brief Method Serialize addr 0xdcc5fc size 0x40 virtual true final true
 void Serialize(LiteNetLib::Utils::NetDataWriter writer) ;

/// @brief Method Deserialize addr 0xdcc63c size 0x40 virtual true final true
 void Deserialize(LiteNetLib::Utils::NetDataReader reader) ;

/// @brief Method SetState addr 0xdcc67c size 0x50 virtual true final true
 void SetState(GlobalNamespace::GlobalNamespace__NodePoseSyncState__NodePose nodePose, GlobalNamespace::PoseSerializable pose) ;

/// @brief Method GetState addr 0xdcc6cc size 0x4c virtual true final true
 GlobalNamespace::PoseSerializable GetState(GlobalNamespace::GlobalNamespace__NodePoseSyncState__NodePose nodePose) ;

/// @brief Method Equals addr 0xdcc718 size 0x94 virtual false final false
 bool Equals(ByRef<GlobalNamespace::NodePoseSyncState> other) ;

/// @brief Method GetDelta addr 0xdcc7ac size 0x128 virtual false final false
 GlobalNamespace::NodePoseSyncState GetDelta(ByRef<GlobalNamespace::NodePoseSyncState> latest) ;

/// @brief Method ApplyDelta addr 0xdcc8d4 size 0x128 virtual false final false
 GlobalNamespace::NodePoseSyncState ApplyDelta(ByRef<GlobalNamespace::NodePoseSyncState> delta) ;

/// @brief Method GetSize addr 0xdcc9fc size 0x48 virtual true final true
 int32_t GetSize() ;

/// @brief Method IStateTable<NodePoseSyncState,NodePoseSyncState.NodePose,PoseSerializable>.GetDelta addr 0xdcca44 size 0x30 virtual true final true
 GlobalNamespace::NodePoseSyncState IStateTable_NodePoseSyncState,NodePoseSyncState_NodePose,PoseSerializable__GetDelta(ByRef<GlobalNamespace::NodePoseSyncState> stateTable) ;

/// @brief Method IStateTable<NodePoseSyncState,NodePoseSyncState.NodePose,PoseSerializable>.ApplyDelta addr 0xdcca74 size 0x30 virtual true final true
 GlobalNamespace::NodePoseSyncState IStateTable_NodePoseSyncState,NodePoseSyncState_NodePose,PoseSerializable__ApplyDelta(ByRef<GlobalNamespace::NodePoseSyncState> delta) ;

/// @brief Method IEquatableByReference<NodePoseSyncState>.Equals addr 0xdccaa4 size 0x4 virtual true final true
 bool IEquatableByReference_NodePoseSyncState__Equals(ByRef<GlobalNamespace::NodePoseSyncState> other) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__NodePoseSyncState__NodePose, "", "NodePoseSyncState/NodePose");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::NodePoseSyncState, "", "NodePoseSyncState");
