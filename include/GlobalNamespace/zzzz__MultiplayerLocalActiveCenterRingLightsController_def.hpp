#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
namespace {
namespace GlobalNamespace {
class MultiplayerLayoutProvider;
}
namespace GlobalNamespace {
class MultiplayerCenterResizeController;
}
namespace GlobalNamespace {
class BeatmapObjectSpawnCenter;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerLocalActiveCenterRingLightsController;
}
// Type: ::MultiplayerLocalActiveCenterRingLightsController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5246))
// CS Name: MultiplayerLocalActiveCenterRingLightsController
class CORDL_TYPE MultiplayerLocalActiveCenterRingLightsController : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~MultiplayerLocalActiveCenterRingLightsController() = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerLocalActiveCenterRingLightsController", modifiers: " const&", def_value: None }]
constexpr MultiplayerLocalActiveCenterRingLightsController(MultiplayerLocalActiveCenterRingLightsController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerLocalActiveCenterRingLightsController", modifiers: "&&", def_value: None }]
constexpr MultiplayerLocalActiveCenterRingLightsController(MultiplayerLocalActiveCenterRingLightsController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MultiplayerLocalActiveCenterRingLightsController(void* ptr) noexcept : ::UnityEngine::MonoBehaviour(ptr) {
}


  constexpr MultiplayerLocalActiveCenterRingLightsController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MultiplayerLocalActiveCenterRingLightsController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MultiplayerLocalActiveCenterRingLightsController& operator=(MultiplayerLocalActiveCenterRingLightsController&& o) noexcept = default;
  constexpr MultiplayerLocalActiveCenterRingLightsController& operator=(MultiplayerLocalActiveCenterRingLightsController const& o) noexcept = default;
                


// Fields

 ::ArrayW<float_t> __declspec(property(get=__get__verticalLinePositions, put=__set__verticalLinePositions))  _verticalLinePositions;

constexpr void __set__verticalLinePositions(::ArrayW<float_t> value) ;

constexpr ::ArrayW<float_t> __get__verticalLinePositions() const;

 ::ArrayW<::UnityEngine::Transform> __declspec(property(get=__get__horizontalLines, put=__set__horizontalLines))  _horizontalLines;

constexpr void __set__horizontalLines(::ArrayW<::UnityEngine::Transform> value) ;

constexpr ::ArrayW<::UnityEngine::Transform> __get__horizontalLines() const;

 ::GlobalNamespace::MultiplayerCenterResizeController __declspec(property(get=__get__centerResizeController, put=__set__centerResizeController))  _centerResizeController;

constexpr void __set__centerResizeController(::GlobalNamespace::MultiplayerCenterResizeController value) ;

constexpr ::GlobalNamespace::MultiplayerCenterResizeController __get__centerResizeController() const;

 ::GlobalNamespace::MultiplayerLayoutProvider __declspec(property(get=__get__layoutProvider, put=__set__layoutProvider))  _layoutProvider;

constexpr void __set__layoutProvider(::GlobalNamespace::MultiplayerLayoutProvider value) ;

constexpr ::GlobalNamespace::MultiplayerLayoutProvider __get__layoutProvider() const;

 ::GlobalNamespace::BeatmapObjectSpawnCenter __declspec(property(get=__get__beatmapObjectSpawnCenter, put=__set__beatmapObjectSpawnCenter))  _beatmapObjectSpawnCenter;

constexpr void __set__beatmapObjectSpawnCenter(::GlobalNamespace::BeatmapObjectSpawnCenter value) ;

constexpr ::GlobalNamespace::BeatmapObjectSpawnCenter __get__beatmapObjectSpawnCenter() const;

 bool __declspec(property(get=__get__edgeDistanceFromCenterCalculated, put=__set__edgeDistanceFromCenterCalculated))  _edgeDistanceFromCenterCalculated;

constexpr void __set__edgeDistanceFromCenterCalculated(bool value) ;

constexpr bool __get__edgeDistanceFromCenterCalculated() const;

 bool __declspec(property(get=__get__spawnCenterDistanceFound, put=__set__spawnCenterDistanceFound))  _spawnCenterDistanceFound;

constexpr void __set__spawnCenterDistanceFound(bool value) ;

constexpr bool __get__spawnCenterDistanceFound() const;


// Methods

/// @brief Method Start addr 0x20e2cc0 size 0x198 virtual false final false
 void Start() ;

/// @brief Method OnDestroy addr 0x20e2e88 size 0x154 virtual false final false
 void OnDestroy() ;

/// @brief Method TryResize addr 0x20e2fdc size 0x18 virtual false final false
 void TryResize() ;

/// @brief Method Resize addr 0x20e2ff4 size 0x2bc virtual false final false
 void Resize() ;

/// @brief Method HandleSpawnCenterDistanceWasFound addr 0x20e2e70 size 0x18 virtual false final false
 void HandleSpawnCenterDistanceWasFound(float_t spawnCenterDistance) ;

/// @brief Method HandleEdgeDistanceFromCenterWasCalculated addr 0x20e2e58 size 0x18 virtual false final false
 void HandleEdgeDistanceFromCenterWasCalculated(float_t constructEdgeDistanceFromCenter) ;

// Ctor Parameters []
explicit MultiplayerLocalActiveCenterRingLightsController() ;

/// @brief Method .ctor addr 0x20e32b0 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerLocalActiveCenterRingLightsController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerLocalActiveCenterRingLightsController, "", "MultiplayerLocalActiveCenterRingLightsController");
