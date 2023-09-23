#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__MockPlayerLobbyPoseGenerator_def.hpp"
namespace GlobalNamespace {
class NodePoseSyncStateManager;
}
namespace GlobalNamespace {
class IMultiplayerSessionManager;
}
// Forward declare root types
namespace GlobalNamespace {
class MockPlayerLobbyPoseGeneratorMirror;
}
// Type: ::MockPlayerLobbyPoseGeneratorMirror
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15498))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5281))
// CS Name: MockPlayerLobbyPoseGeneratorMirror
class CORDL_TYPE MockPlayerLobbyPoseGeneratorMirror : public GlobalNamespace::MockPlayerLobbyPoseGenerator {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~MockPlayerLobbyPoseGeneratorMirror() = default;

// Ctor Parameters [CppParam { name: "", ty: "MockPlayerLobbyPoseGeneratorMirror", modifiers: " const&", def_value: None }]
constexpr MockPlayerLobbyPoseGeneratorMirror(MockPlayerLobbyPoseGeneratorMirror const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MockPlayerLobbyPoseGeneratorMirror", modifiers: "&&", def_value: None }]
constexpr MockPlayerLobbyPoseGeneratorMirror(MockPlayerLobbyPoseGeneratorMirror&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MockPlayerLobbyPoseGeneratorMirror(void* ptr) noexcept : GlobalNamespace::MockPlayerLobbyPoseGenerator(ptr) {
}


  constexpr MockPlayerLobbyPoseGeneratorMirror& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MockPlayerLobbyPoseGeneratorMirror& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MockPlayerLobbyPoseGeneratorMirror& operator=(MockPlayerLobbyPoseGeneratorMirror&& o) noexcept = default;
  constexpr MockPlayerLobbyPoseGeneratorMirror& operator=(MockPlayerLobbyPoseGeneratorMirror const& o) noexcept = default;
                


// Fields

 GlobalNamespace::NodePoseSyncStateManager __declspec(property(get=__get__nodePoseSyncStateManager, put=__set__nodePoseSyncStateManager))  _nodePoseSyncStateManager;

constexpr void __set__nodePoseSyncStateManager(GlobalNamespace::NodePoseSyncStateManager value) ;

constexpr GlobalNamespace::NodePoseSyncStateManager __get__nodePoseSyncStateManager() const;


// Methods

// Ctor Parameters [CppParam { name: "multiplayerSessionManager", ty: "GlobalNamespace::IMultiplayerSessionManager", modifiers: "", def_value: None }, CppParam { name: "nodePoseSyncStateManager", ty: "GlobalNamespace::NodePoseSyncStateManager", modifiers: "", def_value: None }]
explicit MockPlayerLobbyPoseGeneratorMirror(GlobalNamespace::IMultiplayerSessionManager multiplayerSessionManager, GlobalNamespace::NodePoseSyncStateManager nodePoseSyncStateManager) ;

/// @brief Method .ctor addr 0x20ed958 size 0x28 virtual false final false
 void _ctor(GlobalNamespace::IMultiplayerSessionManager multiplayerSessionManager, GlobalNamespace::NodePoseSyncStateManager nodePoseSyncStateManager) ;

/// @brief Method Init addr 0x20ef6cc size 0x4 virtual true final false
 void Init() ;

/// @brief Method Tick addr 0x20ef6d0 size 0x168 virtual true final false
 void Tick() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::MockPlayerLobbyPoseGeneratorMirror);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MockPlayerLobbyPoseGeneratorMirror, "", "MockPlayerLobbyPoseGeneratorMirror");
