#pragma once
#include "../cordl_internals/cordl_internals.hpp"
namespace GlobalNamespace {
class NodePoseSyncStateNetSerializable;
}
namespace GlobalNamespace {
class NodePoseSyncStateDeltaNetSerializable;
}
namespace GlobalNamespace {
template<typename TStateTable,typename TType,typename TState,typename TSerializable,typename TDeltaSerializable>
class INodePoseSyncStateManager_5;
}
namespace GlobalNamespace {
struct NodePoseSyncState;
}
namespace GlobalNamespace {
struct GlobalNamespace__NodePoseSyncState__NodePose;
}
namespace GlobalNamespace {
struct PoseSerializable;
}
// Forward declare root types
namespace GlobalNamespace {
class INodePoseSyncStateManager;
}
// Type: ::INodePoseSyncStateManager
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4538))
// CS Name: INodePoseSyncStateManager
class CORDL_TYPE INodePoseSyncStateManager : public ::cordl_internals::InterfaceW {
public:
// Declarations
/// @brief Convert operator to GlobalNamespace::INodePoseSyncStateManager_5<GlobalNamespace::NodePoseSyncState,GlobalNamespace::GlobalNamespace__NodePoseSyncState__NodePose,GlobalNamespace::PoseSerializable,GlobalNamespace::NodePoseSyncStateNetSerializable,GlobalNamespace::NodePoseSyncStateDeltaNetSerializable>
constexpr operator  GlobalNamespace::INodePoseSyncStateManager_5<GlobalNamespace::NodePoseSyncState,GlobalNamespace::GlobalNamespace__NodePoseSyncState__NodePose,GlobalNamespace::PoseSerializable,GlobalNamespace::NodePoseSyncStateNetSerializable,GlobalNamespace::NodePoseSyncStateDeltaNetSerializable>() const noexcept;

~INodePoseSyncStateManager() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit INodePoseSyncStateManager(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::INodePoseSyncStateManager);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::INodePoseSyncStateManager, "", "INodePoseSyncStateManager");
