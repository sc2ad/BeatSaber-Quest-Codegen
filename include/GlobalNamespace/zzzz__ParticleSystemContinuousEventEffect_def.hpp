#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace GlobalNamespace {
struct BasicBeatmapEventType;
}
namespace GlobalNamespace {
class BeatmapCallbacksController;
}
namespace GlobalNamespace {
class BasicBeatmapEventData;
}
namespace GlobalNamespace {
class BeatmapDataCallbackWrapper;
}
namespace UnityEngine {
class ParticleSystem;
}
// Forward declare root types
namespace GlobalNamespace {
class ParticleSystemContinuousEventEffect;
}
// Type: ::ParticleSystemContinuousEventEffect
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5059))
// CS Name: ParticleSystemContinuousEventEffect
class CORDL_TYPE ParticleSystemContinuousEventEffect : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~ParticleSystemContinuousEventEffect() = default;

// Ctor Parameters [CppParam { name: "", ty: "ParticleSystemContinuousEventEffect", modifiers: " const&", def_value: None }]
constexpr ParticleSystemContinuousEventEffect(ParticleSystemContinuousEventEffect const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ParticleSystemContinuousEventEffect", modifiers: "&&", def_value: None }]
constexpr ParticleSystemContinuousEventEffect(ParticleSystemContinuousEventEffect&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ParticleSystemContinuousEventEffect(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr ParticleSystemContinuousEventEffect& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ParticleSystemContinuousEventEffect& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ParticleSystemContinuousEventEffect& operator=(ParticleSystemContinuousEventEffect&& o) noexcept = default;
  constexpr ParticleSystemContinuousEventEffect& operator=(ParticleSystemContinuousEventEffect const& o) noexcept = default;
                


// Fields

 GlobalNamespace::BasicBeatmapEventType __declspec(property(get=__get__beatmapEvent, put=__set__beatmapEvent))  _beatmapEvent;

constexpr void __set__beatmapEvent(GlobalNamespace::BasicBeatmapEventType value) ;

constexpr GlobalNamespace::BasicBeatmapEventType __get__beatmapEvent() const;

 ::ArrayW<UnityEngine::ParticleSystem> __declspec(property(get=__get__particleSystems, put=__set__particleSystems))  _particleSystems;

constexpr void __set__particleSystems(::ArrayW<UnityEngine::ParticleSystem> value) ;

constexpr ::ArrayW<UnityEngine::ParticleSystem> __get__particleSystems() const;

 GlobalNamespace::BeatmapCallbacksController __declspec(property(get=__get__beatmapCallbacksController, put=__set__beatmapCallbacksController))  _beatmapCallbacksController;

constexpr void __set__beatmapCallbacksController(GlobalNamespace::BeatmapCallbacksController value) ;

constexpr GlobalNamespace::BeatmapCallbacksController __get__beatmapCallbacksController() const;

 GlobalNamespace::BeatmapDataCallbackWrapper __declspec(property(get=__get__beatmapDataCallbackWrapper, put=__set__beatmapDataCallbackWrapper))  _beatmapDataCallbackWrapper;

constexpr void __set__beatmapDataCallbackWrapper(GlobalNamespace::BeatmapDataCallbackWrapper value) ;

constexpr GlobalNamespace::BeatmapDataCallbackWrapper __get__beatmapDataCallbackWrapper() const;


// Methods

/// @brief Method Start addr 0x2264ca4 size 0x124 virtual false final false
 void Start() ;

/// @brief Method OnDestroy addr 0x2264dc8 size 0x1c virtual false final false
 void OnDestroy() ;

/// @brief Method HandleBeatmapEvent addr 0x2264de4 size 0x20 virtual false final false
 void HandleBeatmapEvent(GlobalNamespace::BasicBeatmapEventData basicBeatmapEventData) ;

/// @brief Method ToggleEmitting addr 0x2264e04 size 0xb4 virtual false final false
 void ToggleEmitting(bool shouldPlay) ;

static GlobalNamespace::ParticleSystemContinuousEventEffect New_ctor() ;

/// @brief Method .ctor addr 0x2264eb8 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::ParticleSystemContinuousEventEffect);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ParticleSystemContinuousEventEffect, "", "ParticleSystemContinuousEventEffect");
