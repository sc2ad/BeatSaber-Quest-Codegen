#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
#include <cstdint>
namespace GlobalNamespace {
class GlobalNamespace__ParticleSystemEventController__Pool;
}
namespace GlobalNamespace {
struct BasicBeatmapEventType;
}
namespace Zenject {
class ITickable;
}
namespace GlobalNamespace {
class IAudioTimeSource;
}
namespace GlobalNamespace {
class BeatmapCallbacksController;
}
namespace Zenject {
class TickableManager;
}
namespace UnityEngine {
class Transform;
}
namespace GlobalNamespace {
class PauseController;
}
namespace GlobalNamespace {
class ParticleSystemEventController;
}
namespace GlobalNamespace {
class SongSpeedData;
}
namespace GlobalNamespace {
class BasicBeatmapEventData;
}
namespace GlobalNamespace {
class BeatmapDataCallbackWrapper;
}
namespace GlobalNamespace {
template<typename T>
class MemoryPoolContainer_1;
}
namespace System {
class IDisposable;
}
namespace GlobalNamespace {
struct EnvironmentContext;
}
namespace Zenject {
class DiContainer;
}
namespace GlobalNamespace {
class GlobalNamespace__ParticleSystemEmitEventEffect__ParticleSystemEmitBehavior;
}
namespace GlobalNamespace {
class GlobalNamespace__ParticleSystemEmitEventEffect__BeatmapEditorParticleSystemEmitBehavior;
}
namespace GlobalNamespace {
class GlobalNamespace__ParticleSystemEmitEventEffect__GameplayParticleSystemEmitBehavior;
}
// Forward declare root types
namespace GlobalNamespace {
class GlobalNamespace__ParticleSystemEmitEventEffect__BeatmapEditorParticleSystemEmitBehavior;
}
namespace GlobalNamespace {
class GlobalNamespace__ParticleSystemEmitEventEffect__GameplayParticleSystemEmitBehavior;
}
namespace GlobalNamespace {
class GlobalNamespace__ParticleSystemEmitEventEffect__ParticleSystemEmitBehavior;
}
namespace GlobalNamespace {
class ParticleSystemEmitEventEffect;
}
// Type: ::ParticleSystemEmitBehavior
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5060))
// CS Name: ParticleSystemEmitEventEffect::ParticleSystemEmitBehavior
class CORDL_TYPE GlobalNamespace__ParticleSystemEmitEventEffect__ParticleSystemEmitBehavior : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~GlobalNamespace__ParticleSystemEmitEventEffect__ParticleSystemEmitBehavior() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__ParticleSystemEmitEventEffect__ParticleSystemEmitBehavior", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__ParticleSystemEmitEventEffect__ParticleSystemEmitBehavior(GlobalNamespace__ParticleSystemEmitEventEffect__ParticleSystemEmitBehavior const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__ParticleSystemEmitEventEffect__ParticleSystemEmitBehavior", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__ParticleSystemEmitEventEffect__ParticleSystemEmitBehavior(GlobalNamespace__ParticleSystemEmitEventEffect__ParticleSystemEmitBehavior&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__ParticleSystemEmitEventEffect__ParticleSystemEmitBehavior(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__ParticleSystemEmitEventEffect__ParticleSystemEmitBehavior& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__ParticleSystemEmitEventEffect__ParticleSystemEmitBehavior& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__ParticleSystemEmitEventEffect__ParticleSystemEmitBehavior& operator=(GlobalNamespace__ParticleSystemEmitEventEffect__ParticleSystemEmitBehavior&& o) noexcept = default;
  constexpr GlobalNamespace__ParticleSystemEmitEventEffect__ParticleSystemEmitBehavior& operator=(GlobalNamespace__ParticleSystemEmitEventEffect__ParticleSystemEmitBehavior const& o) noexcept = default;
                


// Fields

 GlobalNamespace::IAudioTimeSource __declspec(property(get=__get__audioTimeSource, put=__set__audioTimeSource))  _audioTimeSource;

constexpr void __set__audioTimeSource(GlobalNamespace::IAudioTimeSource value) ;

constexpr GlobalNamespace::IAudioTimeSource __get__audioTimeSource() const;

 GlobalNamespace::BeatmapCallbacksController __declspec(property(get=__get__beatmapCallbacksController, put=__set__beatmapCallbacksController))  _beatmapCallbacksController;

constexpr void __set__beatmapCallbacksController(GlobalNamespace::BeatmapCallbacksController value) ;

constexpr GlobalNamespace::BeatmapCallbacksController __get__beatmapCallbacksController() const;

 GlobalNamespace::MemoryPoolContainer_1<GlobalNamespace::ParticleSystemEventController> __declspec(property(get=__get__particleSystemEventControllerPoolContainer, put=__set__particleSystemEventControllerPoolContainer))  _particleSystemEventControllerPoolContainer;

constexpr void __set__particleSystemEventControllerPoolContainer(GlobalNamespace::MemoryPoolContainer_1<GlobalNamespace::ParticleSystemEventController> value) ;

constexpr GlobalNamespace::MemoryPoolContainer_1<GlobalNamespace::ParticleSystemEventController> __get__particleSystemEventControllerPoolContainer() const;

 UnityEngine::Transform __declspec(property(get=__get__particleSystemParentTransform, put=__set__particleSystemParentTransform))  _particleSystemParentTransform;

constexpr void __set__particleSystemParentTransform(UnityEngine::Transform value) ;

constexpr UnityEngine::Transform __get__particleSystemParentTransform() const;

 int32_t __declspec(property(get=__get__particleSystemMaxSpawnedSystems, put=__set__particleSystemMaxSpawnedSystems))  _particleSystemMaxSpawnedSystems;

constexpr void __set__particleSystemMaxSpawnedSystems(int32_t value) ;

constexpr int32_t __get__particleSystemMaxSpawnedSystems() const;

 GlobalNamespace::BeatmapDataCallbackWrapper __declspec(property(get=__get__beatmapDataCallbackWrapper, put=__set__beatmapDataCallbackWrapper))  _beatmapDataCallbackWrapper;

constexpr void __set__beatmapDataCallbackWrapper(GlobalNamespace::BeatmapDataCallbackWrapper value) ;

constexpr GlobalNamespace::BeatmapDataCallbackWrapper __get__beatmapDataCallbackWrapper() const;


// Methods

static GlobalNamespace::GlobalNamespace__ParticleSystemEmitEventEffect__ParticleSystemEmitBehavior New_ctor(GlobalNamespace::BasicBeatmapEventType beatmapEvent, UnityEngine::Transform particleSystemParentTransform, int32_t particleSystemMaxSpawnedSystems, GlobalNamespace::IAudioTimeSource audioTimeSource, GlobalNamespace::BeatmapCallbacksController beatmapCallbacksController, GlobalNamespace::GlobalNamespace__ParticleSystemEventController__Pool particleSystemEventControllerPool) ;

/// @brief Method .ctor addr 0x226514c size 0x1a8 virtual false final false
 void _ctor(GlobalNamespace::BasicBeatmapEventType beatmapEvent, UnityEngine::Transform particleSystemParentTransform, int32_t particleSystemMaxSpawnedSystems, GlobalNamespace::IAudioTimeSource audioTimeSource, GlobalNamespace::BeatmapCallbacksController beatmapCallbacksController, GlobalNamespace::GlobalNamespace__ParticleSystemEventController__Pool particleSystemEventControllerPool) ;

/// @brief Method Dispose addr 0x22652f4 size 0x18c virtual true final false
 void Dispose() ;

/// @brief Method HandleBeatmapEvent addr 0x226549c size 0x164 virtual false final false
 void HandleBeatmapEvent(GlobalNamespace::BasicBeatmapEventData basicBeatmapEventData) ;

/// @brief Method EmitParticles addr 0x2265600 size 0x16c virtual true final false
 GlobalNamespace::ParticleSystemEventController EmitParticles(float_t startTime) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::BeatmapEditorParticleSystemEmitBehavior
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(5060))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5061))
// CS Name: ParticleSystemEmitEventEffect::BeatmapEditorParticleSystemEmitBehavior
class CORDL_TYPE GlobalNamespace__ParticleSystemEmitEventEffect__BeatmapEditorParticleSystemEmitBehavior : public GlobalNamespace::GlobalNamespace__ParticleSystemEmitEventEffect__ParticleSystemEmitBehavior {
public:
// Declarations
/// @brief Convert operator to Zenject::ITickable
constexpr operator  Zenject::ITickable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~GlobalNamespace__ParticleSystemEmitEventEffect__BeatmapEditorParticleSystemEmitBehavior() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__ParticleSystemEmitEventEffect__BeatmapEditorParticleSystemEmitBehavior", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__ParticleSystemEmitEventEffect__BeatmapEditorParticleSystemEmitBehavior(GlobalNamespace__ParticleSystemEmitEventEffect__BeatmapEditorParticleSystemEmitBehavior const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__ParticleSystemEmitEventEffect__BeatmapEditorParticleSystemEmitBehavior", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__ParticleSystemEmitEventEffect__BeatmapEditorParticleSystemEmitBehavior(GlobalNamespace__ParticleSystemEmitEventEffect__BeatmapEditorParticleSystemEmitBehavior&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__ParticleSystemEmitEventEffect__BeatmapEditorParticleSystemEmitBehavior(void* ptr) noexcept : GlobalNamespace::GlobalNamespace__ParticleSystemEmitEventEffect__ParticleSystemEmitBehavior(ptr) {
}


  constexpr GlobalNamespace__ParticleSystemEmitEventEffect__BeatmapEditorParticleSystemEmitBehavior& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__ParticleSystemEmitEventEffect__BeatmapEditorParticleSystemEmitBehavior& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__ParticleSystemEmitEventEffect__BeatmapEditorParticleSystemEmitBehavior& operator=(GlobalNamespace__ParticleSystemEmitEventEffect__BeatmapEditorParticleSystemEmitBehavior&& o) noexcept = default;
  constexpr GlobalNamespace__ParticleSystemEmitEventEffect__BeatmapEditorParticleSystemEmitBehavior& operator=(GlobalNamespace__ParticleSystemEmitEventEffect__BeatmapEditorParticleSystemEmitBehavior const& o) noexcept = default;
                


// Fields

 Zenject::TickableManager __declspec(property(get=__get__tickableManager, put=__set__tickableManager))  _tickableManager;

constexpr void __set__tickableManager(Zenject::TickableManager value) ;

constexpr Zenject::TickableManager __get__tickableManager() const;


// Methods

static GlobalNamespace::GlobalNamespace__ParticleSystemEmitEventEffect__BeatmapEditorParticleSystemEmitBehavior New_ctor(GlobalNamespace::BasicBeatmapEventType beatmapEvent, UnityEngine::Transform particleSystemParentTransform, int32_t particleSystemMaxSpawnedSystems, GlobalNamespace::IAudioTimeSource audioTimeSource, GlobalNamespace::BeatmapCallbacksController beatmapCallbacksController, GlobalNamespace::GlobalNamespace__ParticleSystemEventController__Pool particleSystemEventControllerPool, Zenject::TickableManager tickableManager) ;

/// @brief Method .ctor addr 0x226579c size 0x38 virtual false final false
 void _ctor(GlobalNamespace::BasicBeatmapEventType beatmapEvent, UnityEngine::Transform particleSystemParentTransform, int32_t particleSystemMaxSpawnedSystems, GlobalNamespace::IAudioTimeSource audioTimeSource, GlobalNamespace::BeatmapCallbacksController beatmapCallbacksController, GlobalNamespace::GlobalNamespace__ParticleSystemEventController__Pool particleSystemEventControllerPool, Zenject::TickableManager tickableManager) ;

/// @brief Method Tick addr 0x22657d4 size 0x334 virtual true final true
 void Tick() ;

/// @brief Method Dispose addr 0x2265b7c size 0x28 virtual true final false
 void Dispose() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::GameplayParticleSystemEmitBehavior
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(5060))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5062))
// CS Name: ParticleSystemEmitEventEffect::GameplayParticleSystemEmitBehavior
class CORDL_TYPE GlobalNamespace__ParticleSystemEmitEventEffect__GameplayParticleSystemEmitBehavior : public GlobalNamespace::GlobalNamespace__ParticleSystemEmitEventEffect__ParticleSystemEmitBehavior {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~GlobalNamespace__ParticleSystemEmitEventEffect__GameplayParticleSystemEmitBehavior() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__ParticleSystemEmitEventEffect__GameplayParticleSystemEmitBehavior", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__ParticleSystemEmitEventEffect__GameplayParticleSystemEmitBehavior(GlobalNamespace__ParticleSystemEmitEventEffect__GameplayParticleSystemEmitBehavior const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__ParticleSystemEmitEventEffect__GameplayParticleSystemEmitBehavior", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__ParticleSystemEmitEventEffect__GameplayParticleSystemEmitBehavior(GlobalNamespace__ParticleSystemEmitEventEffect__GameplayParticleSystemEmitBehavior&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__ParticleSystemEmitEventEffect__GameplayParticleSystemEmitBehavior(void* ptr) noexcept : GlobalNamespace::GlobalNamespace__ParticleSystemEmitEventEffect__ParticleSystemEmitBehavior(ptr) {
}


  constexpr GlobalNamespace__ParticleSystemEmitEventEffect__GameplayParticleSystemEmitBehavior& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__ParticleSystemEmitEventEffect__GameplayParticleSystemEmitBehavior& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__ParticleSystemEmitEventEffect__GameplayParticleSystemEmitBehavior& operator=(GlobalNamespace__ParticleSystemEmitEventEffect__GameplayParticleSystemEmitBehavior&& o) noexcept = default;
  constexpr GlobalNamespace__ParticleSystemEmitEventEffect__GameplayParticleSystemEmitBehavior& operator=(GlobalNamespace__ParticleSystemEmitEventEffect__GameplayParticleSystemEmitBehavior const& o) noexcept = default;
                


// Fields

 GlobalNamespace::PauseController __declspec(property(get=__get__pauseController, put=__set__pauseController))  _pauseController;

constexpr void __set__pauseController(GlobalNamespace::PauseController value) ;

constexpr GlobalNamespace::PauseController __get__pauseController() const;

 GlobalNamespace::SongSpeedData __declspec(property(get=__get__songSpeedData, put=__set__songSpeedData))  _songSpeedData;

constexpr void __set__songSpeedData(GlobalNamespace::SongSpeedData value) ;

constexpr GlobalNamespace::SongSpeedData __get__songSpeedData() const;


// Methods

static GlobalNamespace::GlobalNamespace__ParticleSystemEmitEventEffect__GameplayParticleSystemEmitBehavior New_ctor(GlobalNamespace::BasicBeatmapEventType beatmapEvent, UnityEngine::Transform particleSystemParentTransform, int32_t particleSystemMaxSpawnedSystems, GlobalNamespace::IAudioTimeSource audioTimeSource, GlobalNamespace::BeatmapCallbacksController beatmapCallbacksController, GlobalNamespace::GlobalNamespace__ParticleSystemEventController__Pool particleSystemEventControllerPool, GlobalNamespace::PauseController pauseController, GlobalNamespace::SongSpeedData songSpeedData) ;

/// @brief Method .ctor addr 0x2265ba4 size 0x138 virtual false final false
 void _ctor(GlobalNamespace::BasicBeatmapEventType beatmapEvent, UnityEngine::Transform particleSystemParentTransform, int32_t particleSystemMaxSpawnedSystems, GlobalNamespace::IAudioTimeSource audioTimeSource, GlobalNamespace::BeatmapCallbacksController beatmapCallbacksController, GlobalNamespace::GlobalNamespace__ParticleSystemEventController__Pool particleSystemEventControllerPool, GlobalNamespace::PauseController pauseController, GlobalNamespace::SongSpeedData songSpeedData) ;

/// @brief Method Dispose addr 0x2265cdc size 0x12c virtual true final false
 void Dispose() ;

/// @brief Method HandlePauseControllerDidPause addr 0x2265e08 size 0x178 virtual false final false
 void HandlePauseControllerDidPause() ;

/// @brief Method HandlePauseControllerDidResume addr 0x2265f9c size 0x178 virtual false final false
 void HandlePauseControllerDidResume() ;

/// @brief Method EmitParticles addr 0x2266130 size 0xbc virtual true final false
 GlobalNamespace::ParticleSystemEventController EmitParticles(float_t startTime) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::ParticleSystemEmitEventEffect
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5063))
// CS Name: ParticleSystemEmitEventEffect
class CORDL_TYPE ParticleSystemEmitEventEffect : public UnityEngine::MonoBehaviour {
public:
// Declarations
using GameplayParticleSystemEmitBehavior = GlobalNamespace::GlobalNamespace__ParticleSystemEmitEventEffect__GameplayParticleSystemEmitBehavior;

using BeatmapEditorParticleSystemEmitBehavior = GlobalNamespace::GlobalNamespace__ParticleSystemEmitEventEffect__BeatmapEditorParticleSystemEmitBehavior;

using ParticleSystemEmitBehavior = GlobalNamespace::GlobalNamespace__ParticleSystemEmitEventEffect__ParticleSystemEmitBehavior;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~ParticleSystemEmitEventEffect() = default;

// Ctor Parameters [CppParam { name: "", ty: "ParticleSystemEmitEventEffect", modifiers: " const&", def_value: None }]
constexpr ParticleSystemEmitEventEffect(ParticleSystemEmitEventEffect const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ParticleSystemEmitEventEffect", modifiers: "&&", def_value: None }]
constexpr ParticleSystemEmitEventEffect(ParticleSystemEmitEventEffect&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ParticleSystemEmitEventEffect(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr ParticleSystemEmitEventEffect& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ParticleSystemEmitEventEffect& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ParticleSystemEmitEventEffect& operator=(ParticleSystemEmitEventEffect&& o) noexcept = default;
  constexpr ParticleSystemEmitEventEffect& operator=(ParticleSystemEmitEventEffect const& o) noexcept = default;
                


// Fields

 GlobalNamespace::BasicBeatmapEventType __declspec(property(get=__get__beatmapEvent, put=__set__beatmapEvent))  _beatmapEvent;

constexpr void __set__beatmapEvent(GlobalNamespace::BasicBeatmapEventType value) ;

constexpr GlobalNamespace::BasicBeatmapEventType __get__beatmapEvent() const;

 UnityEngine::Transform __declspec(property(get=__get__particleSystemParentTransform, put=__set__particleSystemParentTransform))  _particleSystemParentTransform;

constexpr void __set__particleSystemParentTransform(UnityEngine::Transform value) ;

constexpr UnityEngine::Transform __get__particleSystemParentTransform() const;

 int32_t __declspec(property(get=__get__particleSystemMaxSpawnedSystems, put=__set__particleSystemMaxSpawnedSystems))  _particleSystemMaxSpawnedSystems;

constexpr void __set__particleSystemMaxSpawnedSystems(int32_t value) ;

constexpr int32_t __get__particleSystemMaxSpawnedSystems() const;

 GlobalNamespace::EnvironmentContext __declspec(property(get=__get__environmentContext, put=__set__environmentContext))  _environmentContext;

constexpr void __set__environmentContext(GlobalNamespace::EnvironmentContext value) ;

constexpr GlobalNamespace::EnvironmentContext __get__environmentContext() const;

 Zenject::DiContainer __declspec(property(get=__get__diContainer, put=__set__diContainer))  _diContainer;

constexpr void __set__diContainer(Zenject::DiContainer value) ;

constexpr Zenject::DiContainer __get__diContainer() const;

 GlobalNamespace::GlobalNamespace__ParticleSystemEmitEventEffect__ParticleSystemEmitBehavior __declspec(property(get=__get__particleSystemEmitBehavior, put=__set__particleSystemEmitBehavior))  _particleSystemEmitBehavior;

constexpr void __set__particleSystemEmitBehavior(GlobalNamespace::GlobalNamespace__ParticleSystemEmitEventEffect__ParticleSystemEmitBehavior value) ;

constexpr GlobalNamespace::GlobalNamespace__ParticleSystemEmitEventEffect__ParticleSystemEmitBehavior __get__particleSystemEmitBehavior() const;


// Methods

/// @brief Method Start addr 0x2264ec0 size 0x264 virtual false final false
 void Start() ;

/// @brief Method OnDestroy addr 0x2265124 size 0x18 virtual false final false
 void OnDestroy() ;

static GlobalNamespace::ParticleSystemEmitEventEffect New_ctor() ;

/// @brief Method .ctor addr 0x226513c size 0x10 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__ParticleSystemEmitEventEffect__BeatmapEditorParticleSystemEmitBehavior);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__ParticleSystemEmitEventEffect__BeatmapEditorParticleSystemEmitBehavior, "", "ParticleSystemEmitEventEffect/BeatmapEditorParticleSystemEmitBehavior");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__ParticleSystemEmitEventEffect__GameplayParticleSystemEmitBehavior);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__ParticleSystemEmitEventEffect__GameplayParticleSystemEmitBehavior, "", "ParticleSystemEmitEventEffect/GameplayParticleSystemEmitBehavior");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__ParticleSystemEmitEventEffect__ParticleSystemEmitBehavior);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__ParticleSystemEmitEventEffect__ParticleSystemEmitBehavior, "", "ParticleSystemEmitEventEffect/ParticleSystemEmitBehavior");
NEED_NO_BOX(GlobalNamespace::ParticleSystemEmitEventEffect);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ParticleSystemEmitEventEffect, "", "ParticleSystemEmitEventEffect");
