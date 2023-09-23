#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
namespace GlobalNamespace {
class ObstacleController;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace System {
class Action;
}
namespace GlobalNamespace {
class PlayerTransforms;
}
namespace UnityEngine {
struct Vector3;
}
namespace GlobalNamespace {
class BeatmapObjectManager;
}
namespace System {
template<typename T>
class Action_1;
}
// Forward declare root types
namespace GlobalNamespace {
class PlayerHeadAndObstacleInteraction;
}
// Type: ::PlayerHeadAndObstacleInteraction
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5362))
// CS Name: PlayerHeadAndObstacleInteraction
class CORDL_TYPE PlayerHeadAndObstacleInteraction : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~PlayerHeadAndObstacleInteraction() = default;

// Ctor Parameters [CppParam { name: "", ty: "PlayerHeadAndObstacleInteraction", modifiers: " const&", def_value: None }]
constexpr PlayerHeadAndObstacleInteraction(PlayerHeadAndObstacleInteraction const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PlayerHeadAndObstacleInteraction", modifiers: "&&", def_value: None }]
constexpr PlayerHeadAndObstacleInteraction(PlayerHeadAndObstacleInteraction&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PlayerHeadAndObstacleInteraction(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr PlayerHeadAndObstacleInteraction& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PlayerHeadAndObstacleInteraction& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PlayerHeadAndObstacleInteraction& operator=(PlayerHeadAndObstacleInteraction&& o) noexcept = default;
  constexpr PlayerHeadAndObstacleInteraction& operator=(PlayerHeadAndObstacleInteraction const& o) noexcept = default;
                


// Fields

 GlobalNamespace::PlayerTransforms __declspec(property(get=__get__playerTransforms, put=__set__playerTransforms))  _playerTransforms;

constexpr void __set__playerTransforms(GlobalNamespace::PlayerTransforms value) ;

constexpr GlobalNamespace::PlayerTransforms __get__playerTransforms() const;

 GlobalNamespace::BeatmapObjectManager __declspec(property(get=__get__beatmapObjectManager, put=__set__beatmapObjectManager))  _beatmapObjectManager;

constexpr void __set__beatmapObjectManager(GlobalNamespace::BeatmapObjectManager value) ;

constexpr GlobalNamespace::BeatmapObjectManager __get__beatmapObjectManager() const;

 System::Action __declspec(property(get=__get_headDidEnterObstaclesEvent, put=__set_headDidEnterObstaclesEvent))  headDidEnterObstaclesEvent;

constexpr void __set_headDidEnterObstaclesEvent(System::Action value) ;

constexpr System::Action __get_headDidEnterObstaclesEvent() const;

 System::Action_1<GlobalNamespace::ObstacleController> __declspec(property(get=__get_headDidEnterObstacleEvent, put=__set_headDidEnterObstacleEvent))  headDidEnterObstacleEvent;

constexpr void __set_headDidEnterObstacleEvent(System::Action_1<GlobalNamespace::ObstacleController> value) ;

constexpr System::Action_1<GlobalNamespace::ObstacleController> __get_headDidEnterObstacleEvent() const;

 int32_t __declspec(property(get=__get__lastFrameNumCheck, put=__set__lastFrameNumCheck))  _lastFrameNumCheck;

constexpr void __set__lastFrameNumCheck(int32_t value) ;

constexpr int32_t __get__lastFrameNumCheck() const;

 System::Collections::Generic::HashSet_1<GlobalNamespace::ObstacleController> __declspec(property(get=__get__intersectingObstacles, put=__set__intersectingObstacles))  _intersectingObstacles;

constexpr void __set__intersectingObstacles(System::Collections::Generic::HashSet_1<GlobalNamespace::ObstacleController> value) ;

constexpr System::Collections::Generic::HashSet_1<GlobalNamespace::ObstacleController> __get__intersectingObstacles() const;

 int32_t __declspec(property(get=__get__prevFrameNumberOfIntersectingObstaclesCount, put=__set__prevFrameNumberOfIntersectingObstaclesCount))  _prevFrameNumberOfIntersectingObstaclesCount;

constexpr void __set__prevFrameNumberOfIntersectingObstaclesCount(int32_t value) ;

constexpr int32_t __get__prevFrameNumberOfIntersectingObstaclesCount() const;


// Properties

 bool __declspec(property(get=get_playerHeadIsInObstacle))  playerHeadIsInObstacle;


// Methods

/// @brief Method add_headDidEnterObstaclesEvent addr 0x2108388 size 0x9c virtual false final false
 void add_headDidEnterObstaclesEvent(System::Action value) ;

/// @brief Method remove_headDidEnterObstaclesEvent addr 0x2108424 size 0x9c virtual false final false
 void remove_headDidEnterObstaclesEvent(System::Action value) ;

/// @brief Method add_headDidEnterObstacleEvent addr 0x21084c0 size 0xb0 virtual false final false
 void add_headDidEnterObstacleEvent(System::Action_1<GlobalNamespace::ObstacleController> value) ;

/// @brief Method remove_headDidEnterObstacleEvent addr 0x2108570 size 0xb0 virtual false final false
 void remove_headDidEnterObstacleEvent(System::Action_1<GlobalNamespace::ObstacleController> value) ;

/// @brief Method get_playerHeadIsInObstacle addr 0x2107a94 size 0x50 virtual false final false
 bool get_playerHeadIsInObstacle() ;

/// @brief Method RefreshIntersectingObstacles addr 0x2108620 size 0x300 virtual false final false
 void RefreshIntersectingObstacles(UnityEngine::Vector3 worldPos) ;

/// @brief Method Update addr 0x2108920 size 0x8c virtual false final false
 void Update() ;

// Ctor Parameters []
explicit PlayerHeadAndObstacleInteraction() ;

/// @brief Method .ctor addr 0x21089ac size 0x84 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::PlayerHeadAndObstacleInteraction);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PlayerHeadAndObstacleInteraction, "", "PlayerHeadAndObstacleInteraction");
