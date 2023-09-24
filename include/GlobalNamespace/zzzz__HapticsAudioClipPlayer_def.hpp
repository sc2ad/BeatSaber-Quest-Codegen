#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "Zenject/zzzz__MemoryPool_1_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
#include <cstdint>
namespace System {
class IDisposable;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace UnityEngine {
class WaitForEndOfFrame;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace GlobalNamespace {
class GlobalNamespace__HapticsAudioClipPlayer___HandleOneShotPlayEndCoroutine_d__11;
}
namespace Libraries::HM::HMLib::VR {
class HapticPresetSO;
}
namespace GlobalNamespace {
class GlobalNamespace__HapticsAudioClipPlayer___HandleContinuousAudioCoroutine_d__9;
}
namespace GlobalNamespace {
class GlobalNamespace__HapticsAudioClipPlayer__Pool;
}
namespace UnityEngine::XR {
struct XRNode;
}
namespace UnityEngine {
class AudioSource;
}
// Forward declare root types
namespace GlobalNamespace {
class GlobalNamespace__HapticsAudioClipPlayer__Pool;
}
namespace GlobalNamespace {
class GlobalNamespace__HapticsAudioClipPlayer___HandleContinuousAudioCoroutine_d__9;
}
namespace GlobalNamespace {
class GlobalNamespace__HapticsAudioClipPlayer___HandleOneShotPlayEndCoroutine_d__11;
}
namespace GlobalNamespace {
class HapticsAudioClipPlayer;
}
// Type: ::HapticsAudioClipPlayer
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13926))
// CS Name: HapticsAudioClipPlayer
class CORDL_TYPE HapticsAudioClipPlayer : public UnityEngine::MonoBehaviour {
public:
// Declarations
using _HandleOneShotPlayEndCoroutine_d__11 = GlobalNamespace::GlobalNamespace__HapticsAudioClipPlayer___HandleOneShotPlayEndCoroutine_d__11;

using _HandleContinuousAudioCoroutine_d__9 = GlobalNamespace::GlobalNamespace__HapticsAudioClipPlayer___HandleContinuousAudioCoroutine_d__9;

using Pool = GlobalNamespace::GlobalNamespace__HapticsAudioClipPlayer__Pool;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~HapticsAudioClipPlayer() = default;

// Ctor Parameters [CppParam { name: "", ty: "HapticsAudioClipPlayer", modifiers: " const&", def_value: None }]
constexpr HapticsAudioClipPlayer(HapticsAudioClipPlayer const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HapticsAudioClipPlayer", modifiers: "&&", def_value: None }]
constexpr HapticsAudioClipPlayer(HapticsAudioClipPlayer&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HapticsAudioClipPlayer(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr HapticsAudioClipPlayer& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HapticsAudioClipPlayer& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HapticsAudioClipPlayer& operator=(HapticsAudioClipPlayer&& o) noexcept = default;
  constexpr HapticsAudioClipPlayer& operator=(HapticsAudioClipPlayer const& o) noexcept = default;
                


// Fields

 UnityEngine::AudioSource __declspec(property(get=__get__audioSource, put=__set__audioSource))  _audioSource;

constexpr void __set__audioSource(UnityEngine::AudioSource value) ;

constexpr UnityEngine::AudioSource __get__audioSource() const;

 float_t __declspec(property(get=__get__baseVolume, put=__set__baseVolume))  _baseVolume;

constexpr void __set__baseVolume(float_t value) ;

constexpr float_t __get__baseVolume() const;

 bool __declspec(property(get=__get__triggeredThisFrame, put=__set__triggeredThisFrame))  _triggeredThisFrame;

constexpr void __set__triggeredThisFrame(bool value) ;

constexpr bool __get__triggeredThisFrame() const;

 float_t __declspec(property(get=__get__lastTriggerTime, put=__set__lastTriggerTime))  _lastTriggerTime;

constexpr void __set__lastTriggerTime(float_t value) ;

constexpr float_t __get__lastTriggerTime() const;

/// @brief Field kContinuousRumbleFadeDuration offset 0
static constexpr float_t  kContinuousRumbleFadeDuration{0.016666668};


// Methods

/// @brief Method PlayHapticsPreset addr 0x1f87ef4 size 0x13c virtual false final false
 void PlayHapticsPreset(UnityEngine::XR::XRNode onNode, Libraries::HM::HMLib::VR::HapticPresetSO preset, System::Action_1<GlobalNamespace::HapticsAudioClipPlayer> onComplete) ;

/// @brief Method TriggerContinuousHaptic addr 0x1f88250 size 0x38 virtual false final false
 void TriggerContinuousHaptic() ;

/// @brief Method RestartHaptic addr 0x1f88288 size 0x4 virtual false final false
 void RestartHaptic() ;

/// @brief Method HandleContinuousAudioCoroutine addr 0x1f881dc size 0x74 virtual false final false
 System::Collections::IEnumerator HandleContinuousAudioCoroutine(System::Action_1<GlobalNamespace::HapticsAudioClipPlayer> onComplete) ;

/// @brief Method UpdateFadeVolume addr 0x1f882b4 size 0x48 virtual false final false
 void UpdateFadeVolume(float_t timeSinceEnd) ;

/// @brief Method HandleOneShotPlayEndCoroutine addr 0x1f88168 size 0x74 virtual false final false
 System::Collections::IEnumerator HandleOneShotPlayEndCoroutine(System::Action_1<GlobalNamespace::HapticsAudioClipPlayer> onComplete) ;

/// @brief Method Reset addr 0x1f88030 size 0x54 virtual false final false
 void Reset() ;

/// @brief Method ForceStopPlaying addr 0x1f88324 size 0x2c virtual false final false
 void ForceStopPlaying() ;

/// @brief Method Initialize addr 0x1f88350 size 0x38 virtual false final false
 void Initialize() ;

/// @brief Method GetPanForNode addr 0x1f88084 size 0xe4 virtual false final false
 float_t GetPanForNode(UnityEngine::XR::XRNode node) ;

static GlobalNamespace::HapticsAudioClipPlayer New_ctor() ;

/// @brief Method .ctor addr 0x1f88388 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <HandleOneShotPlayEndCoroutine>b__11_0 addr 0x1f88390 size 0x28 virtual false final false
 bool _HandleOneShotPlayEndCoroutine_b__11_0() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::Pool
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13926)), TypeDefinitionIndex(TypeDefinitionIndex(10980)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10980), inst: 301 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13923))
// CS Name: HapticsAudioClipPlayer::Pool
class CORDL_TYPE GlobalNamespace__HapticsAudioClipPlayer__Pool : public Zenject::MemoryPool_1<GlobalNamespace::HapticsAudioClipPlayer> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~GlobalNamespace__HapticsAudioClipPlayer__Pool() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__HapticsAudioClipPlayer__Pool", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__HapticsAudioClipPlayer__Pool(GlobalNamespace__HapticsAudioClipPlayer__Pool const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__HapticsAudioClipPlayer__Pool", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__HapticsAudioClipPlayer__Pool(GlobalNamespace__HapticsAudioClipPlayer__Pool&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__HapticsAudioClipPlayer__Pool(void* ptr) noexcept : Zenject::MemoryPool_1<GlobalNamespace::HapticsAudioClipPlayer>(ptr) {
}


  constexpr GlobalNamespace__HapticsAudioClipPlayer__Pool& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__HapticsAudioClipPlayer__Pool& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__HapticsAudioClipPlayer__Pool& operator=(GlobalNamespace__HapticsAudioClipPlayer__Pool&& o) noexcept = default;
  constexpr GlobalNamespace__HapticsAudioClipPlayer__Pool& operator=(GlobalNamespace__HapticsAudioClipPlayer__Pool const& o) noexcept = default;
                


// Methods

/// @brief Method OnCreated addr 0x1f883b8 size 0x14 virtual true final false
 void OnCreated(GlobalNamespace::HapticsAudioClipPlayer item) ;

/// @brief Method OnDestroyed addr 0x1f883cc size 0x74 virtual true final false
 void OnDestroyed(GlobalNamespace::HapticsAudioClipPlayer item) ;

/// @brief Method OnDespawned addr 0x1f88440 size 0x14 virtual true final false
 void OnDespawned(GlobalNamespace::HapticsAudioClipPlayer item) ;

/// @brief Method Reinitialize addr 0x1f88454 size 0x14 virtual true final false
 void Reinitialize(GlobalNamespace::HapticsAudioClipPlayer clipPlayer) ;

static GlobalNamespace::GlobalNamespace__HapticsAudioClipPlayer__Pool New_ctor() ;

/// @brief Method .ctor addr 0x1f88468 size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<HandleContinuousAudioCoroutine>d__9
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13924))
// CS Name: HapticsAudioClipPlayer::<HandleContinuousAudioCoroutine>d__9
class CORDL_TYPE GlobalNamespace__HapticsAudioClipPlayer___HandleContinuousAudioCoroutine_d__9 : public ::bs_hook::Il2CppWrapperType {
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

virtual ~GlobalNamespace__HapticsAudioClipPlayer___HandleContinuousAudioCoroutine_d__9() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__HapticsAudioClipPlayer___HandleContinuousAudioCoroutine_d__9", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__HapticsAudioClipPlayer___HandleContinuousAudioCoroutine_d__9(GlobalNamespace__HapticsAudioClipPlayer___HandleContinuousAudioCoroutine_d__9 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__HapticsAudioClipPlayer___HandleContinuousAudioCoroutine_d__9", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__HapticsAudioClipPlayer___HandleContinuousAudioCoroutine_d__9(GlobalNamespace__HapticsAudioClipPlayer___HandleContinuousAudioCoroutine_d__9&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__HapticsAudioClipPlayer___HandleContinuousAudioCoroutine_d__9(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__HapticsAudioClipPlayer___HandleContinuousAudioCoroutine_d__9& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__HapticsAudioClipPlayer___HandleContinuousAudioCoroutine_d__9& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__HapticsAudioClipPlayer___HandleContinuousAudioCoroutine_d__9& operator=(GlobalNamespace__HapticsAudioClipPlayer___HandleContinuousAudioCoroutine_d__9&& o) noexcept = default;
  constexpr GlobalNamespace__HapticsAudioClipPlayer___HandleContinuousAudioCoroutine_d__9& operator=(GlobalNamespace__HapticsAudioClipPlayer___HandleContinuousAudioCoroutine_d__9 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get___2__current, put=__set___2__current))  __2__current;

constexpr void __set___2__current(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get___2__current() const;

 GlobalNamespace::HapticsAudioClipPlayer __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(GlobalNamespace::HapticsAudioClipPlayer value) ;

constexpr GlobalNamespace::HapticsAudioClipPlayer __get___4__this() const;

 System::Action_1<GlobalNamespace::HapticsAudioClipPlayer> __declspec(property(get=__get_onComplete, put=__set_onComplete))  onComplete;

constexpr void __set_onComplete(System::Action_1<GlobalNamespace::HapticsAudioClipPlayer> value) ;

constexpr System::Action_1<GlobalNamespace::HapticsAudioClipPlayer> __get_onComplete() const;

 UnityEngine::WaitForEndOfFrame __declspec(property(get=__get__waitForLateUpdate_5__2, put=__set__waitForLateUpdate_5__2))  _waitForLateUpdate_5__2;

constexpr void __set__waitForLateUpdate_5__2(UnityEngine::WaitForEndOfFrame value) ;

constexpr UnityEngine::WaitForEndOfFrame __get__waitForLateUpdate_5__2() const;


// Properties

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current))  System_Collections_Generic_IEnumerator_System_Object__Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

static GlobalNamespace::GlobalNamespace__HapticsAudioClipPlayer___HandleContinuousAudioCoroutine_d__9 New_ctor(int32_t __1__state) ;

/// @brief Method .ctor addr 0x1f8828c size 0x28 virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x1f884b0 size 0x4 virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x1f884b4 size 0x12c virtual true final true
 bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0x1f885e0 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x1f885e8 size 0x40 virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x1f88628 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<HandleOneShotPlayEndCoroutine>d__11
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13925))
// CS Name: HapticsAudioClipPlayer::<HandleOneShotPlayEndCoroutine>d__11
class CORDL_TYPE GlobalNamespace__HapticsAudioClipPlayer___HandleOneShotPlayEndCoroutine_d__11 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>
constexpr operator  System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const noexcept;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~GlobalNamespace__HapticsAudioClipPlayer___HandleOneShotPlayEndCoroutine_d__11() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__HapticsAudioClipPlayer___HandleOneShotPlayEndCoroutine_d__11", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__HapticsAudioClipPlayer___HandleOneShotPlayEndCoroutine_d__11(GlobalNamespace__HapticsAudioClipPlayer___HandleOneShotPlayEndCoroutine_d__11 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__HapticsAudioClipPlayer___HandleOneShotPlayEndCoroutine_d__11", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__HapticsAudioClipPlayer___HandleOneShotPlayEndCoroutine_d__11(GlobalNamespace__HapticsAudioClipPlayer___HandleOneShotPlayEndCoroutine_d__11&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__HapticsAudioClipPlayer___HandleOneShotPlayEndCoroutine_d__11(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__HapticsAudioClipPlayer___HandleOneShotPlayEndCoroutine_d__11& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__HapticsAudioClipPlayer___HandleOneShotPlayEndCoroutine_d__11& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__HapticsAudioClipPlayer___HandleOneShotPlayEndCoroutine_d__11& operator=(GlobalNamespace__HapticsAudioClipPlayer___HandleOneShotPlayEndCoroutine_d__11&& o) noexcept = default;
  constexpr GlobalNamespace__HapticsAudioClipPlayer___HandleOneShotPlayEndCoroutine_d__11& operator=(GlobalNamespace__HapticsAudioClipPlayer___HandleOneShotPlayEndCoroutine_d__11 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get___2__current, put=__set___2__current))  __2__current;

constexpr void __set___2__current(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get___2__current() const;

 GlobalNamespace::HapticsAudioClipPlayer __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(GlobalNamespace::HapticsAudioClipPlayer value) ;

constexpr GlobalNamespace::HapticsAudioClipPlayer __get___4__this() const;

 System::Action_1<GlobalNamespace::HapticsAudioClipPlayer> __declspec(property(get=__get_onComplete, put=__set_onComplete))  onComplete;

constexpr void __set_onComplete(System::Action_1<GlobalNamespace::HapticsAudioClipPlayer> value) ;

constexpr System::Action_1<GlobalNamespace::HapticsAudioClipPlayer> __get_onComplete() const;


// Properties

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current))  System_Collections_Generic_IEnumerator_System_Object__Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

static GlobalNamespace::GlobalNamespace__HapticsAudioClipPlayer___HandleOneShotPlayEndCoroutine_d__11 New_ctor(int32_t __1__state) ;

/// @brief Method .ctor addr 0x1f882fc size 0x28 virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x1f88630 size 0x4 virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x1f88634 size 0x120 virtual true final true
 bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0x1f88754 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x1f8875c size 0x40 virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x1f8879c size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__HapticsAudioClipPlayer__Pool);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__HapticsAudioClipPlayer__Pool, "", "HapticsAudioClipPlayer/Pool");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__HapticsAudioClipPlayer___HandleContinuousAudioCoroutine_d__9);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__HapticsAudioClipPlayer___HandleContinuousAudioCoroutine_d__9, "", "HapticsAudioClipPlayer/<HandleContinuousAudioCoroutine>d__9");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__HapticsAudioClipPlayer___HandleOneShotPlayEndCoroutine_d__11);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__HapticsAudioClipPlayer___HandleOneShotPlayEndCoroutine_d__11, "", "HapticsAudioClipPlayer/<HandleOneShotPlayEndCoroutine>d__11");
NEED_NO_BOX(GlobalNamespace::HapticsAudioClipPlayer);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::HapticsAudioClipPlayer, "", "HapticsAudioClipPlayer");
