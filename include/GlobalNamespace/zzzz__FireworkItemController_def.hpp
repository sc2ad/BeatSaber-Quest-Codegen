#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "Zenject/zzzz__MonoMemoryPool_1_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
namespace System {
template<typename T>
class Action_1;
}
namespace GlobalNamespace {
class TubeBloomPrePassLight;
}
namespace UnityEngine {
class AnimationCurve;
}
namespace GlobalNamespace {
class DirectionalLight;
}
namespace UnityEngine {
class AudioSource;
}
namespace System::Collections {
class IEnumerator;
}
namespace UnityEngine {
class AudioClip;
}
namespace GlobalNamespace {
template<typename T>
class RandomObjectPicker_1;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class Gradient;
}
namespace UnityEngine {
class ParticleSystem;
}
namespace System {
class IDisposable;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
// Forward declare root types
namespace GlobalNamespace {
class FireworkItemController;
}
namespace GlobalNamespace {
class GlobalNamespace__FireworkItemController__FireworkItemParticleSystem;
}
namespace GlobalNamespace {
class GlobalNamespace__FireworkItemController__Pool;
}
namespace GlobalNamespace {
class GlobalNamespace__FireworkItemController___FireCoroutine_d__29;
}
// Type: ::FireworkItemParticleSystem
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4958))
// CS Name: FireworkItemController::FireworkItemParticleSystem
class CORDL_TYPE GlobalNamespace__FireworkItemController__FireworkItemParticleSystem : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~GlobalNamespace__FireworkItemController__FireworkItemParticleSystem() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__FireworkItemController__FireworkItemParticleSystem", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__FireworkItemController__FireworkItemParticleSystem(GlobalNamespace__FireworkItemController__FireworkItemParticleSystem const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__FireworkItemController__FireworkItemParticleSystem", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__FireworkItemController__FireworkItemParticleSystem(GlobalNamespace__FireworkItemController__FireworkItemParticleSystem&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__FireworkItemController__FireworkItemParticleSystem(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__FireworkItemController__FireworkItemParticleSystem& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__FireworkItemController__FireworkItemParticleSystem& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__FireworkItemController__FireworkItemParticleSystem& operator=(GlobalNamespace__FireworkItemController__FireworkItemParticleSystem&& o) noexcept = default;
  constexpr GlobalNamespace__FireworkItemController__FireworkItemParticleSystem& operator=(GlobalNamespace__FireworkItemController__FireworkItemParticleSystem const& o) noexcept = default;
                


// Fields

 UnityEngine::ParticleSystem __declspec(property(get=__get__particleSystem, put=__set__particleSystem))  _particleSystem;

constexpr void __set__particleSystem(UnityEngine::ParticleSystem value) ;

constexpr UnityEngine::ParticleSystem __get__particleSystem() const;

 bool __declspec(property(get=__get__isSubemitter, put=__set__isSubemitter))  _isSubemitter;

constexpr void __set__isSubemitter(bool value) ;

constexpr bool __get__isSubemitter() const;

 bool __declspec(property(get=__get__useMainColor, put=__set__useMainColor))  _useMainColor;

constexpr void __set__useMainColor(bool value) ;

constexpr bool __get__useMainColor() const;

 bool __declspec(property(get=__get__useOwnGradient, put=__set__useOwnGradient))  _useOwnGradient;

constexpr void __set__useOwnGradient(bool value) ;

constexpr bool __get__useOwnGradient() const;

 UnityEngine::Gradient __declspec(property(get=__get__particleColorGradient, put=__set__particleColorGradient))  _particleColorGradient;

constexpr void __set__particleColorGradient(UnityEngine::Gradient value) ;

constexpr UnityEngine::Gradient __get__particleColorGradient() const;

 bool __declspec(property(get=__get__randomizeSpeed, put=__set__randomizeSpeed))  _randomizeSpeed;

constexpr void __set__randomizeSpeed(bool value) ;

constexpr bool __get__randomizeSpeed() const;


// Methods

// Ctor Parameters []
explicit GlobalNamespace__FireworkItemController__FireworkItemParticleSystem() ;

/// @brief Method .ctor addr 0x224f928 size 0x10 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::FireworkItemController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4961))
// CS Name: FireworkItemController
class CORDL_TYPE FireworkItemController : public UnityEngine::MonoBehaviour {
public:
// Declarations
using _FireCoroutine_d__29 = GlobalNamespace::GlobalNamespace__FireworkItemController___FireCoroutine_d__29;

using Pool = GlobalNamespace::GlobalNamespace__FireworkItemController__Pool;

using FireworkItemParticleSystem = GlobalNamespace::GlobalNamespace__FireworkItemController__FireworkItemParticleSystem;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x98};

virtual ~FireworkItemController() = default;

// Ctor Parameters [CppParam { name: "", ty: "FireworkItemController", modifiers: " const&", def_value: None }]
constexpr FireworkItemController(FireworkItemController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "FireworkItemController", modifiers: "&&", def_value: None }]
constexpr FireworkItemController(FireworkItemController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit FireworkItemController(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr FireworkItemController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr FireworkItemController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr FireworkItemController& operator=(FireworkItemController&& o) noexcept = default;
  constexpr FireworkItemController& operator=(FireworkItemController const& o) noexcept = default;
                


// Fields

 ::ArrayW<GlobalNamespace::GlobalNamespace__FireworkItemController__FireworkItemParticleSystem> __declspec(property(get=__get__particleSystems, put=__set__particleSystems))  _particleSystems;

constexpr void __set__particleSystems(::ArrayW<GlobalNamespace::GlobalNamespace__FireworkItemController__FireworkItemParticleSystem> value) ;

constexpr ::ArrayW<GlobalNamespace::GlobalNamespace__FireworkItemController__FireworkItemParticleSystem> __get__particleSystems() const;

 ::ArrayW<GlobalNamespace::TubeBloomPrePassLight> __declspec(property(get=__get__lights, put=__set__lights))  _lights;

constexpr void __set__lights(::ArrayW<GlobalNamespace::TubeBloomPrePassLight> value) ;

constexpr ::ArrayW<GlobalNamespace::TubeBloomPrePassLight> __get__lights() const;

 UnityEngine::AudioSource __declspec(property(get=__get__audioSource, put=__set__audioSource))  _audioSource;

constexpr void __set__audioSource(UnityEngine::AudioSource value) ;

constexpr UnityEngine::AudioSource __get__audioSource() const;

 float_t __declspec(property(get=__get__lightFlashDuration, put=__set__lightFlashDuration))  _lightFlashDuration;

constexpr void __set__lightFlashDuration(float_t value) ;

constexpr float_t __get__lightFlashDuration() const;

 UnityEngine::AnimationCurve __declspec(property(get=__get__lightIntensityCurve, put=__set__lightIntensityCurve))  _lightIntensityCurve;

constexpr void __set__lightIntensityCurve(UnityEngine::AnimationCurve value) ;

constexpr UnityEngine::AnimationCurve __get__lightIntensityCurve() const;

 float_t __declspec(property(get=__get__lightIntensityMultiplier, put=__set__lightIntensityMultiplier))  _lightIntensityMultiplier;

constexpr void __set__lightIntensityMultiplier(float_t value) ;

constexpr float_t __get__lightIntensityMultiplier() const;

 bool __declspec(property(get=__get__randomizeColor, put=__set__randomizeColor))  _randomizeColor;

constexpr void __set__randomizeColor(bool value) ;

constexpr bool __get__randomizeColor() const;

 UnityEngine::Color __declspec(property(get=__get__lightsColor, put=__set__lightsColor))  _lightsColor;

constexpr void __set__lightsColor(UnityEngine::Color value) ;

constexpr UnityEngine::Color __get__lightsColor() const;

 UnityEngine::Gradient __declspec(property(get=__get__lightsColorGradient, put=__set__lightsColorGradient))  _lightsColorGradient;

constexpr void __set__lightsColorGradient(UnityEngine::Gradient value) ;

constexpr UnityEngine::Gradient __get__lightsColorGradient() const;

 bool __declspec(property(get=__get__randomizeSpeed, put=__set__randomizeSpeed))  _randomizeSpeed;

constexpr void __set__randomizeSpeed(bool value) ;

constexpr bool __get__randomizeSpeed() const;

 float_t __declspec(property(get=__get__minSpeedMultiplier, put=__set__minSpeedMultiplier))  _minSpeedMultiplier;

constexpr void __set__minSpeedMultiplier(float_t value) ;

constexpr float_t __get__minSpeedMultiplier() const;

 float_t __declspec(property(get=__get__maxSpeedMultiplier, put=__set__maxSpeedMultiplier))  _maxSpeedMultiplier;

constexpr void __set__maxSpeedMultiplier(float_t value) ;

constexpr float_t __get__maxSpeedMultiplier() const;

 ::ArrayW<UnityEngine::AudioClip> __declspec(property(get=__get__explosionClips, put=__set__explosionClips))  _explosionClips;

constexpr void __set__explosionClips(::ArrayW<UnityEngine::AudioClip> value) ;

constexpr ::ArrayW<UnityEngine::AudioClip> __get__explosionClips() const;

 GlobalNamespace::RandomObjectPicker_1<UnityEngine::AudioClip> __declspec(property(get=__get__randomAudioPicker, put=__set__randomAudioPicker))  _randomAudioPicker;

constexpr void __set__randomAudioPicker(GlobalNamespace::RandomObjectPicker_1<UnityEngine::AudioClip> value) ;

constexpr GlobalNamespace::RandomObjectPicker_1<UnityEngine::AudioClip> __get__randomAudioPicker() const;

 GlobalNamespace::DirectionalLight __declspec(property(get=__get__directionalLight, put=__set__directionalLight))  _directionalLight;

constexpr void __set__directionalLight(GlobalNamespace::DirectionalLight value) ;

constexpr GlobalNamespace::DirectionalLight __get__directionalLight() const;

 float_t __declspec(property(get=__get__directionalLightIntensity, put=__set__directionalLightIntensity))  _directionalLightIntensity;

constexpr void __set__directionalLightIntensity(float_t value) ;

constexpr float_t __get__directionalLightIntensity() const;

 bool __declspec(property(get=__get__initialized, put=__set__initialized))  _initialized;

constexpr void __set__initialized(bool value) ;

constexpr bool __get__initialized() const;

 System::Action_1<GlobalNamespace::FireworkItemController> __declspec(property(get=__get_didFinishEvent, put=__set_didFinishEvent))  didFinishEvent;

constexpr void __set_didFinishEvent(System::Action_1<GlobalNamespace::FireworkItemController> value) ;

constexpr System::Action_1<GlobalNamespace::FireworkItemController> __get_didFinishEvent() const;


// Properties

 GlobalNamespace::DirectionalLight __declspec(property(put=set_directionalLight))  directionalLight;

 float_t __declspec(property(put=set_directionalLightIntensity))  directionalLightIntensity;


// Methods

/// @brief Method set_directionalLight addr 0x224e144 size 0x8 virtual false final false
 void set_directionalLight(GlobalNamespace::DirectionalLight value) ;

/// @brief Method set_directionalLightIntensity addr 0x224e14c size 0x8 virtual false final false
 void set_directionalLightIntensity(float_t value) ;

/// @brief Method add_didFinishEvent addr 0x224e154 size 0xb0 virtual false final false
 void add_didFinishEvent(System::Action_1<GlobalNamespace::FireworkItemController> value) ;

/// @brief Method remove_didFinishEvent addr 0x224e204 size 0xb0 virtual false final false
 void remove_didFinishEvent(System::Action_1<GlobalNamespace::FireworkItemController> value) ;

/// @brief Method Awake addr 0x224e2b4 size 0x84 virtual false final false
 void Awake() ;

/// @brief Method OnDisable addr 0x224e338 size 0x58 virtual false final false
 void OnDisable() ;

/// @brief Method Fire addr 0x224e490 size 0x20 virtual false final false
 void Fire() ;

/// @brief Method FireCoroutine addr 0x224e4b0 size 0x68 virtual false final false
 System::Collections::IEnumerator FireCoroutine() ;

/// @brief Method SetLightsColor addr 0x224e390 size 0x100 virtual false final false
 void SetLightsColor(float_t intensity) ;

/// @brief Method PlayExplosionSound addr 0x224e518 size 0xdc virtual false final false
 void PlayExplosionSound() ;

/// @brief Method InitializeParticleSystem addr 0x224e5f4 size 0x314 virtual false final false
 void InitializeParticleSystem() ;

// Ctor Parameters []
explicit FireworkItemController() ;

/// @brief Method .ctor addr 0x224e908 size 0x1020 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::Pool
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10992)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10992), inst: 294 }), TypeDefinitionIndex(TypeDefinitionIndex(4961))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4959))
// CS Name: FireworkItemController::Pool
class CORDL_TYPE GlobalNamespace__FireworkItemController__Pool : public Zenject::MonoMemoryPool_1<GlobalNamespace::FireworkItemController> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~GlobalNamespace__FireworkItemController__Pool() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__FireworkItemController__Pool", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__FireworkItemController__Pool(GlobalNamespace__FireworkItemController__Pool const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__FireworkItemController__Pool", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__FireworkItemController__Pool(GlobalNamespace__FireworkItemController__Pool&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__FireworkItemController__Pool(void* ptr) noexcept : Zenject::MonoMemoryPool_1<GlobalNamespace::FireworkItemController>(ptr) {
}


  constexpr GlobalNamespace__FireworkItemController__Pool& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__FireworkItemController__Pool& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__FireworkItemController__Pool& operator=(GlobalNamespace__FireworkItemController__Pool&& o) noexcept = default;
  constexpr GlobalNamespace__FireworkItemController__Pool& operator=(GlobalNamespace__FireworkItemController__Pool const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit GlobalNamespace__FireworkItemController__Pool() ;

/// @brief Method .ctor addr 0x224f938 size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<FireCoroutine>d__29
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4960))
// CS Name: FireworkItemController::<FireCoroutine>d__29
class CORDL_TYPE GlobalNamespace__FireworkItemController___FireCoroutine_d__29 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>
constexpr operator  System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const noexcept;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~GlobalNamespace__FireworkItemController___FireCoroutine_d__29() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__FireworkItemController___FireCoroutine_d__29", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__FireworkItemController___FireCoroutine_d__29(GlobalNamespace__FireworkItemController___FireCoroutine_d__29 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__FireworkItemController___FireCoroutine_d__29", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__FireworkItemController___FireCoroutine_d__29(GlobalNamespace__FireworkItemController___FireCoroutine_d__29&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__FireworkItemController___FireCoroutine_d__29(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__FireworkItemController___FireCoroutine_d__29& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__FireworkItemController___FireCoroutine_d__29& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__FireworkItemController___FireCoroutine_d__29& operator=(GlobalNamespace__FireworkItemController___FireCoroutine_d__29&& o) noexcept = default;
  constexpr GlobalNamespace__FireworkItemController___FireCoroutine_d__29& operator=(GlobalNamespace__FireworkItemController___FireCoroutine_d__29 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get___2__current, put=__set___2__current))  __2__current;

constexpr void __set___2__current(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get___2__current() const;

 GlobalNamespace::FireworkItemController __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(GlobalNamespace::FireworkItemController value) ;

constexpr GlobalNamespace::FireworkItemController __get___4__this() const;

 float_t __declspec(property(get=__get__soundTimeToCenter_5__2, put=__set__soundTimeToCenter_5__2))  _soundTimeToCenter_5__2;

constexpr void __set__soundTimeToCenter_5__2(float_t value) ;

constexpr float_t __get__soundTimeToCenter_5__2() const;

 float_t __declspec(property(get=__get__elapsedTime_5__3, put=__set__elapsedTime_5__3))  _elapsedTime_5__3;

constexpr void __set__elapsedTime_5__3(float_t value) ;

constexpr float_t __get__elapsedTime_5__3() const;

 bool __declspec(property(get=__get__explosionSoundFired_5__4, put=__set__explosionSoundFired_5__4))  _explosionSoundFired_5__4;

constexpr void __set__explosionSoundFired_5__4(bool value) ;

constexpr bool __get__explosionSoundFired_5__4() const;


// Properties

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current))  System_Collections_Generic_IEnumerator_System_Object__Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }]
explicit GlobalNamespace__FireworkItemController___FireCoroutine_d__29(int32_t __1__state) ;

/// @brief Method .ctor addr 0x224f980 size 0x28 virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x224f9a8 size 0x4 virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x224f9ac size 0x244 virtual true final true
 bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0x224fbf0 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x224fbf8 size 0x40 virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x224fc38 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::FireworkItemController);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::FireworkItemController, "", "FireworkItemController");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__FireworkItemController__FireworkItemParticleSystem);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__FireworkItemController__FireworkItemParticleSystem, "", "FireworkItemController/FireworkItemParticleSystem");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__FireworkItemController__Pool);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__FireworkItemController__Pool, "", "FireworkItemController/Pool");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__FireworkItemController___FireCoroutine_d__29);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__FireworkItemController___FireCoroutine_d__29, "", "FireworkItemController/<FireCoroutine>d__29");
