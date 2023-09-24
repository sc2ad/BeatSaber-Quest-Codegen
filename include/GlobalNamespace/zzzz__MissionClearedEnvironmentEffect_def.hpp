#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
namespace GlobalNamespace {
class MissionObjectiveCheckersManager;
}
namespace GlobalNamespace {
class BeatmapCallbacksController;
}
// Forward declare root types
namespace GlobalNamespace {
class MissionClearedEnvironmentEffect;
}
// Type: ::MissionClearedEnvironmentEffect
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5056))
// CS Name: MissionClearedEnvironmentEffect
class CORDL_TYPE MissionClearedEnvironmentEffect : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~MissionClearedEnvironmentEffect() = default;

// Ctor Parameters [CppParam { name: "", ty: "MissionClearedEnvironmentEffect", modifiers: " const&", def_value: None }]
constexpr MissionClearedEnvironmentEffect(MissionClearedEnvironmentEffect const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MissionClearedEnvironmentEffect", modifiers: "&&", def_value: None }]
constexpr MissionClearedEnvironmentEffect(MissionClearedEnvironmentEffect&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MissionClearedEnvironmentEffect(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr MissionClearedEnvironmentEffect& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MissionClearedEnvironmentEffect& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MissionClearedEnvironmentEffect& operator=(MissionClearedEnvironmentEffect&& o) noexcept = default;
  constexpr MissionClearedEnvironmentEffect& operator=(MissionClearedEnvironmentEffect const& o) noexcept = default;
                


// Fields

 GlobalNamespace::MissionObjectiveCheckersManager __declspec(property(get=__get__missionObjectiveCheckersManager, put=__set__missionObjectiveCheckersManager))  _missionObjectiveCheckersManager;

constexpr void __set__missionObjectiveCheckersManager(GlobalNamespace::MissionObjectiveCheckersManager value) ;

constexpr GlobalNamespace::MissionObjectiveCheckersManager __get__missionObjectiveCheckersManager() const;

 GlobalNamespace::BeatmapCallbacksController __declspec(property(get=__get__beatmapCallbacksController, put=__set__beatmapCallbacksController))  _beatmapCallbacksController;

constexpr void __set__beatmapCallbacksController(GlobalNamespace::BeatmapCallbacksController value) ;

constexpr GlobalNamespace::BeatmapCallbacksController __get__beatmapCallbacksController() const;


// Methods

/// @brief Method Awake addr 0x22645b8 size 0x8c virtual false final false
 void Awake() ;

/// @brief Method OnDestroy addr 0x2264644 size 0x8c virtual false final false
 void OnDestroy() ;

/// @brief Method HandleMissionObjectiveCheckersManagerObjectiveWasCleared addr 0x22646d0 size 0x7c virtual false final false
 void HandleMissionObjectiveCheckersManagerObjectiveWasCleared() ;

static GlobalNamespace::MissionClearedEnvironmentEffect New_ctor() ;

/// @brief Method .ctor addr 0x226474c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::MissionClearedEnvironmentEffect);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MissionClearedEnvironmentEffect, "", "MissionClearedEnvironmentEffect");
