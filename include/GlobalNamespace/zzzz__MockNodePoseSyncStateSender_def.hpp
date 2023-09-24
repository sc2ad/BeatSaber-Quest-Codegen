#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace System {
class IDisposable;
}
namespace GlobalNamespace {
class IMultiplayerSessionManager;
}
namespace GlobalNamespace {
class NodePoseSyncStateNetSerializable;
}
namespace GlobalNamespace {
class IConnectedPlayer;
}
namespace GlobalNamespace {
struct PoseSerializable;
}
// Forward declare root types
namespace GlobalNamespace {
class MockNodePoseSyncStateSender;
}
// Type: ::MockNodePoseSyncStateSender
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15486))
// CS Name: MockNodePoseSyncStateSender
class CORDL_TYPE MockNodePoseSyncStateSender : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~MockNodePoseSyncStateSender() = default;

// Ctor Parameters [CppParam { name: "", ty: "MockNodePoseSyncStateSender", modifiers: " const&", def_value: None }]
constexpr MockNodePoseSyncStateSender(MockNodePoseSyncStateSender const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MockNodePoseSyncStateSender", modifiers: "&&", def_value: None }]
constexpr MockNodePoseSyncStateSender(MockNodePoseSyncStateSender&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MockNodePoseSyncStateSender(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr MockNodePoseSyncStateSender& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MockNodePoseSyncStateSender& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MockNodePoseSyncStateSender& operator=(MockNodePoseSyncStateSender&& o) noexcept = default;
  constexpr MockNodePoseSyncStateSender& operator=(MockNodePoseSyncStateSender const& o) noexcept = default;
                


// Fields

 GlobalNamespace::IMultiplayerSessionManager __declspec(property(get=__get__multiplayerSessionManager, put=__set__multiplayerSessionManager))  _multiplayerSessionManager;

constexpr void __set__multiplayerSessionManager(GlobalNamespace::IMultiplayerSessionManager value) ;

constexpr GlobalNamespace::IMultiplayerSessionManager __get__multiplayerSessionManager() const;


// Methods

static GlobalNamespace::MockNodePoseSyncStateSender New_ctor(GlobalNamespace::IMultiplayerSessionManager msm) ;

/// @brief Method .ctor addr 0x22791cc size 0x17c virtual false final false
 void _ctor(GlobalNamespace::IMultiplayerSessionManager msm) ;

/// @brief Method Dispose addr 0x2279348 size 0xc8 virtual true final true
 void Dispose() ;

/// @brief Method SendPose addr 0x2279410 size 0x230 virtual false final false
 void SendPose(GlobalNamespace::PoseSerializable headPose, GlobalNamespace::PoseSerializable leftHandPose, GlobalNamespace::PoseSerializable rightHandPose) ;

/// @brief Method HandleNodePoseSyncStateUpdate addr 0x2279640 size 0x4 virtual false final false
 void HandleNodePoseSyncStateUpdate(GlobalNamespace::NodePoseSyncStateNetSerializable nodePose, GlobalNamespace::IConnectedPlayer connectedPlayer) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::MockNodePoseSyncStateSender);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MockNodePoseSyncStateSender, "", "MockNodePoseSyncStateSender");
