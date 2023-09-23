#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__MockPlayerLobbyPoseGenerator_def.hpp"
#include <cmath>
namespace System {
class Random;
}
namespace GlobalNamespace {
class IMultiplayerSessionManager;
}
namespace UnityEngine {
struct Pose;
}
// Forward declare root types
namespace GlobalNamespace {
class MockPlayerLobbyPoseGeneratorAI;
}
// Type: ::MockPlayerLobbyPoseGeneratorAI
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15498))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15499))
// CS Name: MockPlayerLobbyPoseGeneratorAI
class CORDL_TYPE MockPlayerLobbyPoseGeneratorAI : public GlobalNamespace::MockPlayerLobbyPoseGenerator {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x130};

virtual ~MockPlayerLobbyPoseGeneratorAI() = default;

// Ctor Parameters [CppParam { name: "", ty: "MockPlayerLobbyPoseGeneratorAI", modifiers: " const&", def_value: None }]
constexpr MockPlayerLobbyPoseGeneratorAI(MockPlayerLobbyPoseGeneratorAI const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MockPlayerLobbyPoseGeneratorAI", modifiers: "&&", def_value: None }]
constexpr MockPlayerLobbyPoseGeneratorAI(MockPlayerLobbyPoseGeneratorAI&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MockPlayerLobbyPoseGeneratorAI(void* ptr) noexcept : GlobalNamespace::MockPlayerLobbyPoseGenerator(ptr) {
}


  constexpr MockPlayerLobbyPoseGeneratorAI& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MockPlayerLobbyPoseGeneratorAI& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MockPlayerLobbyPoseGeneratorAI& operator=(MockPlayerLobbyPoseGeneratorAI&& o) noexcept = default;
  constexpr MockPlayerLobbyPoseGeneratorAI& operator=(MockPlayerLobbyPoseGeneratorAI const& o) noexcept = default;
                


// Fields

 System::Random __declspec(property(get=__get__random, put=__set__random))  _random;

constexpr void __set__random(System::Random value) ;

constexpr System::Random __get__random() const;

 UnityEngine::Pose __declspec(property(get=__get__headPose, put=__set__headPose))  _headPose;

constexpr void __set__headPose(UnityEngine::Pose value) ;

constexpr UnityEngine::Pose __get__headPose() const;

 UnityEngine::Pose __declspec(property(get=__get__leftHandPose, put=__set__leftHandPose))  _leftHandPose;

constexpr void __set__leftHandPose(UnityEngine::Pose value) ;

constexpr UnityEngine::Pose __get__leftHandPose() const;

 UnityEngine::Pose __declspec(property(get=__get__rightHandPose, put=__set__rightHandPose))  _rightHandPose;

constexpr void __set__rightHandPose(UnityEngine::Pose value) ;

constexpr UnityEngine::Pose __get__rightHandPose() const;

 UnityEngine::Pose __declspec(property(get=__get__lastHeadPoseTarget, put=__set__lastHeadPoseTarget))  _lastHeadPoseTarget;

constexpr void __set__lastHeadPoseTarget(UnityEngine::Pose value) ;

constexpr UnityEngine::Pose __get__lastHeadPoseTarget() const;

 UnityEngine::Pose __declspec(property(get=__get__lastLeftHandPoseTarget, put=__set__lastLeftHandPoseTarget))  _lastLeftHandPoseTarget;

constexpr void __set__lastLeftHandPoseTarget(UnityEngine::Pose value) ;

constexpr UnityEngine::Pose __get__lastLeftHandPoseTarget() const;

 UnityEngine::Pose __declspec(property(get=__get__lastRightHandPoseTarget, put=__set__lastRightHandPoseTarget))  _lastRightHandPoseTarget;

constexpr void __set__lastRightHandPoseTarget(UnityEngine::Pose value) ;

constexpr UnityEngine::Pose __get__lastRightHandPoseTarget() const;

 float_t __declspec(property(get=__get__lastTargetTime, put=__set__lastTargetTime))  _lastTargetTime;

constexpr void __set__lastTargetTime(float_t value) ;

constexpr float_t __get__lastTargetTime() const;

 UnityEngine::Pose __declspec(property(get=__get__headPoseTarget, put=__set__headPoseTarget))  _headPoseTarget;

constexpr void __set__headPoseTarget(UnityEngine::Pose value) ;

constexpr UnityEngine::Pose __get__headPoseTarget() const;

 UnityEngine::Pose __declspec(property(get=__get__leftHandPoseTarget, put=__set__leftHandPoseTarget))  _leftHandPoseTarget;

constexpr void __set__leftHandPoseTarget(UnityEngine::Pose value) ;

constexpr UnityEngine::Pose __get__leftHandPoseTarget() const;

 UnityEngine::Pose __declspec(property(get=__get__rightHandPoseTarget, put=__set__rightHandPoseTarget))  _rightHandPoseTarget;

constexpr void __set__rightHandPoseTarget(UnityEngine::Pose value) ;

constexpr UnityEngine::Pose __get__rightHandPoseTarget() const;

 float_t __declspec(property(get=__get__nextTargetTime, put=__set__nextTargetTime))  _nextTargetTime;

constexpr void __set__nextTargetTime(float_t value) ;

constexpr float_t __get__nextTargetTime() const;


// Methods

// Ctor Parameters [CppParam { name: "multiplayerSessionManager", ty: "GlobalNamespace::IMultiplayerSessionManager", modifiers: "", def_value: None }]
explicit MockPlayerLobbyPoseGeneratorAI(GlobalNamespace::IMultiplayerSessionManager multiplayerSessionManager) ;

/// @brief Method .ctor addr 0x227ddfc size 0x4 virtual false final false
 void _ctor(GlobalNamespace::IMultiplayerSessionManager multiplayerSessionManager) ;

/// @brief Method Init addr 0x227e858 size 0x2d0 virtual true final false
 void Init() ;

/// @brief Method Tick addr 0x227eb28 size 0x9d8 virtual true final false
 void Tick() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::MockPlayerLobbyPoseGeneratorAI);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MockPlayerLobbyPoseGeneratorAI, "", "MockPlayerLobbyPoseGeneratorAI");
