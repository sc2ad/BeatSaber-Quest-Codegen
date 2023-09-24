#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace UnityEngine {
class GameObject;
}
namespace GlobalNamespace {
class BeatmapCallbacksController;
}
namespace GlobalNamespace {
class BeatmapDataCallbackWrapper;
}
namespace GlobalNamespace {
class ColorBoostBeatmapEventData;
}
// Forward declare root types
namespace GlobalNamespace {
class GameObjectSwitchEventEffect;
}
// Type: ::GameObjectSwitchEventEffect
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5013))
// CS Name: GameObjectSwitchEventEffect
class CORDL_TYPE GameObjectSwitchEventEffect : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~GameObjectSwitchEventEffect() = default;

// Ctor Parameters [CppParam { name: "", ty: "GameObjectSwitchEventEffect", modifiers: " const&", def_value: None }]
constexpr GameObjectSwitchEventEffect(GameObjectSwitchEventEffect const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GameObjectSwitchEventEffect", modifiers: "&&", def_value: None }]
constexpr GameObjectSwitchEventEffect(GameObjectSwitchEventEffect&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GameObjectSwitchEventEffect(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr GameObjectSwitchEventEffect& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GameObjectSwitchEventEffect& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GameObjectSwitchEventEffect& operator=(GameObjectSwitchEventEffect&& o) noexcept = default;
  constexpr GameObjectSwitchEventEffect& operator=(GameObjectSwitchEventEffect const& o) noexcept = default;
                


// Fields

 ::ArrayW<UnityEngine::GameObject> __declspec(property(get=__get__deactivateOnBoostObjects, put=__set__deactivateOnBoostObjects))  _deactivateOnBoostObjects;

constexpr void __set__deactivateOnBoostObjects(::ArrayW<UnityEngine::GameObject> value) ;

constexpr ::ArrayW<UnityEngine::GameObject> __get__deactivateOnBoostObjects() const;

 ::ArrayW<UnityEngine::GameObject> __declspec(property(get=__get__activateOnBoostObjects, put=__set__activateOnBoostObjects))  _activateOnBoostObjects;

constexpr void __set__activateOnBoostObjects(::ArrayW<UnityEngine::GameObject> value) ;

constexpr ::ArrayW<UnityEngine::GameObject> __get__activateOnBoostObjects() const;

 GlobalNamespace::BeatmapCallbacksController __declspec(property(get=__get__beatmapCallbacksController, put=__set__beatmapCallbacksController))  _beatmapCallbacksController;

constexpr void __set__beatmapCallbacksController(GlobalNamespace::BeatmapCallbacksController value) ;

constexpr GlobalNamespace::BeatmapCallbacksController __get__beatmapCallbacksController() const;

 GlobalNamespace::BeatmapDataCallbackWrapper __declspec(property(get=__get__beatmapDataCallbackWrapper, put=__set__beatmapDataCallbackWrapper))  _beatmapDataCallbackWrapper;

constexpr void __set__beatmapDataCallbackWrapper(GlobalNamespace::BeatmapDataCallbackWrapper value) ;

constexpr GlobalNamespace::BeatmapDataCallbackWrapper __get__beatmapDataCallbackWrapper() const;


// Methods

/// @brief Method Start addr 0x225c030 size 0xa8 virtual false final false
 void Start() ;

/// @brief Method OnDestroy addr 0x225c0d8 size 0x1c virtual false final false
 void OnDestroy() ;

/// @brief Method HandleBeatmapEvent addr 0x225c0f4 size 0x18 virtual false final false
 void HandleBeatmapEvent(GlobalNamespace::ColorBoostBeatmapEventData basicBeatmapEventData) ;

/// @brief Method ToggleObjects addr 0x225c10c size 0xc4 virtual false final false
 void ToggleObjects(bool isBoostOn) ;

static GlobalNamespace::GameObjectSwitchEventEffect New_ctor() ;

/// @brief Method .ctor addr 0x225c1d0 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::GameObjectSwitchEventEffect);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GameObjectSwitchEventEffect, "", "GameObjectSwitchEventEffect");
