#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
namespace {
namespace GlobalNamespace {
class IAudioTimeSource;
}
namespace GlobalNamespace {
class BTSCharacterSpawnController;
}
namespace GlobalNamespace {
class StandardGameplaySceneSetupData;
}
namespace UnityEngine {
struct LayerMask;
}
namespace UnityEngine {
struct Vector3;
}
namespace GlobalNamespace {
class GameplayCoreSceneSetupData;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class WaypointsTestGameplayManager;
}
// Type: ::WaypointsTestGameplayManager
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5129))
// CS Name: WaypointsTestGameplayManager
class CORDL_TYPE WaypointsTestGameplayManager : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x98};

virtual ~WaypointsTestGameplayManager() = default;

// Ctor Parameters [CppParam { name: "", ty: "WaypointsTestGameplayManager", modifiers: " const&", def_value: None }]
constexpr WaypointsTestGameplayManager(WaypointsTestGameplayManager const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "WaypointsTestGameplayManager", modifiers: "&&", def_value: None }]
constexpr WaypointsTestGameplayManager(WaypointsTestGameplayManager&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit WaypointsTestGameplayManager(void* ptr) noexcept : ::UnityEngine::MonoBehaviour(ptr) {
}


  constexpr WaypointsTestGameplayManager& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr WaypointsTestGameplayManager& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr WaypointsTestGameplayManager& operator=(WaypointsTestGameplayManager&& o) noexcept = default;
  constexpr WaypointsTestGameplayManager& operator=(WaypointsTestGameplayManager const& o) noexcept = default;
                


// Fields

 ::UnityEngine::Vector3 __declspec(property(get=__get__outerCapsuleStart, put=__set__outerCapsuleStart))  _outerCapsuleStart;

constexpr void __set__outerCapsuleStart(::UnityEngine::Vector3 value) ;

constexpr ::UnityEngine::Vector3 __get__outerCapsuleStart() const;

 ::UnityEngine::Vector3 __declspec(property(get=__get__outerCapsuleEnd, put=__set__outerCapsuleEnd))  _outerCapsuleEnd;

constexpr void __set__outerCapsuleEnd(::UnityEngine::Vector3 value) ;

constexpr ::UnityEngine::Vector3 __get__outerCapsuleEnd() const;

 float_t __declspec(property(get=__get__outerCapsuleRadius, put=__set__outerCapsuleRadius))  _outerCapsuleRadius;

constexpr void __set__outerCapsuleRadius(float_t value) ;

constexpr float_t __get__outerCapsuleRadius() const;

 ::UnityEngine::Vector3 __declspec(property(get=__get__innerSphereOffset, put=__set__innerSphereOffset))  _innerSphereOffset;

constexpr void __set__innerSphereOffset(::UnityEngine::Vector3 value) ;

constexpr ::UnityEngine::Vector3 __get__innerSphereOffset() const;

 float_t __declspec(property(get=__get__innerSphereRadius, put=__set__innerSphereRadius))  _innerSphereRadius;

constexpr void __set__innerSphereRadius(float_t value) ;

constexpr float_t __get__innerSphereRadius() const;

 ::UnityEngine::LayerMask __declspec(property(get=__get__layersToColliderWith, put=__set__layersToColliderWith))  _layersToColliderWith;

constexpr void __set__layersToColliderWith(::UnityEngine::LayerMask value) ;

constexpr ::UnityEngine::LayerMask __get__layersToColliderWith() const;

 ::GlobalNamespace::BTSCharacterSpawnController __declspec(property(get=__get__characterSpawnController, put=__set__characterSpawnController))  _characterSpawnController;

constexpr void __set__characterSpawnController(::GlobalNamespace::BTSCharacterSpawnController value) ;

constexpr ::GlobalNamespace::BTSCharacterSpawnController __get__characterSpawnController() const;

 ::GlobalNamespace::IAudioTimeSource __declspec(property(get=__get__audioTimeSource, put=__set__audioTimeSource))  _audioTimeSource;

constexpr void __set__audioTimeSource(::GlobalNamespace::IAudioTimeSource value) ;

constexpr ::GlobalNamespace::IAudioTimeSource __get__audioTimeSource() const;

 ::GlobalNamespace::StandardGameplaySceneSetupData __declspec(property(get=__get__standardSceneSetupData, put=__set__standardSceneSetupData))  _standardSceneSetupData;

constexpr void __set__standardSceneSetupData(::GlobalNamespace::StandardGameplaySceneSetupData value) ;

constexpr ::GlobalNamespace::StandardGameplaySceneSetupData __get__standardSceneSetupData() const;

 ::GlobalNamespace::GameplayCoreSceneSetupData __declspec(property(get=__get__levelSceneSetupData, put=__set__levelSceneSetupData))  _levelSceneSetupData;

constexpr void __set__levelSceneSetupData(::GlobalNamespace::GameplayCoreSceneSetupData value) ;

constexpr ::GlobalNamespace::GameplayCoreSceneSetupData __get__levelSceneSetupData() const;

 ::UnityEngine::Transform __declspec(property(get=__get__target, put=__set__target))  _target;

constexpr void __set__target(::UnityEngine::Transform value) ;

constexpr ::UnityEngine::Transform __get__target() const;

 bool __declspec(property(get=__get__firstPosSaved, put=__set__firstPosSaved))  _firstPosSaved;

constexpr void __set__firstPosSaved(bool value) ;

constexpr bool __get__firstPosSaved() const;

 bool __declspec(property(get=__get__speedSaved, put=__set__speedSaved))  _speedSaved;

constexpr void __set__speedSaved(bool value) ;

constexpr bool __get__speedSaved() const;

 ::UnityEngine::Vector3 __declspec(property(get=__get__lastFramePos, put=__set__lastFramePos))  _lastFramePos;

constexpr void __set__lastFramePos(::UnityEngine::Vector3 value) ;

constexpr ::UnityEngine::Vector3 __get__lastFramePos() const;

 float_t __declspec(property(get=__get__lastFrameSpeed, put=__set__lastFrameSpeed))  _lastFrameSpeed;

constexpr void __set__lastFrameSpeed(float_t value) ;

constexpr float_t __get__lastFrameSpeed() const;

 float_t __declspec(property(get=__get__biggestFrameSpeed, put=__set__biggestFrameSpeed))  _biggestFrameSpeed;

constexpr void __set__biggestFrameSpeed(float_t value) ;

constexpr float_t __get__biggestFrameSpeed() const;

 float_t __declspec(property(get=__get__biggestFrameSpeedSongTime, put=__set__biggestFrameSpeedSongTime))  _biggestFrameSpeedSongTime;

constexpr void __set__biggestFrameSpeedSongTime(float_t value) ;

constexpr float_t __get__biggestFrameSpeedSongTime() const;

 float_t __declspec(property(get=__get__biggestAcceleration, put=__set__biggestAcceleration))  _biggestAcceleration;

constexpr void __set__biggestAcceleration(float_t value) ;

constexpr float_t __get__biggestAcceleration() const;

 float_t __declspec(property(get=__get__biggestAccelerationSongTime, put=__set__biggestAccelerationSongTime))  _biggestAccelerationSongTime;

constexpr void __set__biggestAccelerationSongTime(float_t value) ;

constexpr float_t __get__biggestAccelerationSongTime() const;


// Methods

/// @brief Method Start addr 0x22728d8 size 0x34 virtual false final false
 void Start() ;

/// @brief Method LateUpdate addr 0x227290c size 0x1200 virtual false final false
 void LateUpdate() ;

/// @brief Method OnDestroy addr 0x2273d7c size 0x550 virtual false final false
 void OnDestroy() ;

/// @brief Method GetBar addr 0x2273b0c size 0x270 virtual false final false
 ::StringW GetBar(float_t songTime) ;

/// @brief Method OnDrawGizmos addr 0x22742cc size 0x1d4 virtual false final false
 void OnDrawGizmos() ;

// Ctor Parameters []
explicit WaypointsTestGameplayManager() ;

/// @brief Method .ctor addr 0x22744a0 size 0x20 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::WaypointsTestGameplayManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::WaypointsTestGameplayManager, "", "WaypointsTestGameplayManager");
