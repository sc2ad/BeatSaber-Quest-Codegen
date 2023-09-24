#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
#include <cstdint>
namespace System {
class IDisposable;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace UnityEngine {
class CanvasGroup;
}
namespace System {
class Action;
}
namespace GlobalNamespace {
class BloomFogEnvironmentParams;
}
namespace GlobalNamespace {
class BloomFogParamsAnimator;
}
namespace UnityEngine {
class ParticleSystem;
}
namespace GlobalNamespace {
class IGamePause;
}
namespace GlobalNamespace {
class GlobalNamespace__IntroTutorialController___ShowFinishAnimationCoroutine_d__22;
}
namespace GlobalNamespace {
class IntroTutorialRing;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class GlobalNamespace__IntroTutorialController___ShowFinishAnimationCoroutine_d__22;
}
namespace GlobalNamespace {
class IntroTutorialController;
}
// Type: ::<ShowFinishAnimationCoroutine>d__22
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5425))
// CS Name: IntroTutorialController::<ShowFinishAnimationCoroutine>d__22
class CORDL_TYPE GlobalNamespace__IntroTutorialController___ShowFinishAnimationCoroutine_d__22 : public ::bs_hook::Il2CppWrapperType {
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

virtual ~GlobalNamespace__IntroTutorialController___ShowFinishAnimationCoroutine_d__22() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__IntroTutorialController___ShowFinishAnimationCoroutine_d__22", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__IntroTutorialController___ShowFinishAnimationCoroutine_d__22(GlobalNamespace__IntroTutorialController___ShowFinishAnimationCoroutine_d__22 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__IntroTutorialController___ShowFinishAnimationCoroutine_d__22", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__IntroTutorialController___ShowFinishAnimationCoroutine_d__22(GlobalNamespace__IntroTutorialController___ShowFinishAnimationCoroutine_d__22&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__IntroTutorialController___ShowFinishAnimationCoroutine_d__22(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__IntroTutorialController___ShowFinishAnimationCoroutine_d__22& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__IntroTutorialController___ShowFinishAnimationCoroutine_d__22& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__IntroTutorialController___ShowFinishAnimationCoroutine_d__22& operator=(GlobalNamespace__IntroTutorialController___ShowFinishAnimationCoroutine_d__22&& o) noexcept = default;
  constexpr GlobalNamespace__IntroTutorialController___ShowFinishAnimationCoroutine_d__22& operator=(GlobalNamespace__IntroTutorialController___ShowFinishAnimationCoroutine_d__22 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get___2__current, put=__set___2__current))  __2__current;

constexpr void __set___2__current(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get___2__current() const;

 GlobalNamespace::IntroTutorialController __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(GlobalNamespace::IntroTutorialController value) ;

constexpr GlobalNamespace::IntroTutorialController __get___4__this() const;

 float_t __declspec(property(get=__get__elapsedTime_5__2, put=__set__elapsedTime_5__2))  _elapsedTime_5__2;

constexpr void __set__elapsedTime_5__2(float_t value) ;

constexpr float_t __get__elapsedTime_5__2() const;

 float_t __declspec(property(get=__get__duration_5__3, put=__set__duration_5__3))  _duration_5__3;

constexpr void __set__duration_5__3(float_t value) ;

constexpr float_t __get__duration_5__3() const;


// Properties

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current))  System_Collections_Generic_IEnumerator_System_Object__Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

static GlobalNamespace::GlobalNamespace__IntroTutorialController___ShowFinishAnimationCoroutine_d__22 New_ctor(int32_t __1__state) ;

/// @brief Method .ctor addr 0x2111470 size 0x28 virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x2111528 size 0x4 virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x211152c size 0x134 virtual true final true
 bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0x2111660 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x2111668 size 0x40 virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x21116a8 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::IntroTutorialController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5426))
// CS Name: IntroTutorialController
class CORDL_TYPE IntroTutorialController : public UnityEngine::MonoBehaviour {
public:
// Declarations
using _ShowFinishAnimationCoroutine_d__22 = GlobalNamespace::GlobalNamespace__IntroTutorialController___ShowFinishAnimationCoroutine_d__22;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x70};

virtual ~IntroTutorialController() = default;

// Ctor Parameters [CppParam { name: "", ty: "IntroTutorialController", modifiers: " const&", def_value: None }]
constexpr IntroTutorialController(IntroTutorialController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "IntroTutorialController", modifiers: "&&", def_value: None }]
constexpr IntroTutorialController(IntroTutorialController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IntroTutorialController(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr IntroTutorialController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr IntroTutorialController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr IntroTutorialController& operator=(IntroTutorialController&& o) noexcept = default;
  constexpr IntroTutorialController& operator=(IntroTutorialController const& o) noexcept = default;
                


// Fields

 GlobalNamespace::IntroTutorialRing __declspec(property(get=__get__redRing, put=__set__redRing))  _redRing;

constexpr void __set__redRing(GlobalNamespace::IntroTutorialRing value) ;

constexpr GlobalNamespace::IntroTutorialRing __get__redRing() const;

 GlobalNamespace::IntroTutorialRing __declspec(property(get=__get__blueRing, put=__set__blueRing))  _blueRing;

constexpr void __set__blueRing(GlobalNamespace::IntroTutorialRing value) ;

constexpr GlobalNamespace::IntroTutorialRing __get__blueRing() const;

 UnityEngine::GameObject __declspec(property(get=__get__redRingWrapper, put=__set__redRingWrapper))  _redRingWrapper;

constexpr void __set__redRingWrapper(UnityEngine::GameObject value) ;

constexpr UnityEngine::GameObject __get__redRingWrapper() const;

 UnityEngine::GameObject __declspec(property(get=__get__blueRingWrapper, put=__set__blueRingWrapper))  _blueRingWrapper;

constexpr void __set__blueRingWrapper(UnityEngine::GameObject value) ;

constexpr UnityEngine::GameObject __get__blueRingWrapper() const;

 UnityEngine::CanvasGroup __declspec(property(get=__get__textCanvasGroup, put=__set__textCanvasGroup))  _textCanvasGroup;

constexpr void __set__textCanvasGroup(UnityEngine::CanvasGroup value) ;

constexpr UnityEngine::CanvasGroup __get__textCanvasGroup() const;

 UnityEngine::ParticleSystem __declspec(property(get=__get__shockWavePS, put=__set__shockWavePS))  _shockWavePS;

constexpr void __set__shockWavePS(UnityEngine::ParticleSystem value) ;

constexpr UnityEngine::ParticleSystem __get__shockWavePS() const;

 GlobalNamespace::BloomFogEnvironmentParams __declspec(property(get=__get__finishForParams, put=__set__finishForParams))  _finishForParams;

constexpr void __set__finishForParams(GlobalNamespace::BloomFogEnvironmentParams value) ;

constexpr GlobalNamespace::BloomFogEnvironmentParams __get__finishForParams() const;

 GlobalNamespace::BloomFogParamsAnimator __declspec(property(get=__get__bloomFogAnimator, put=__set__bloomFogAnimator))  _bloomFogAnimator;

constexpr void __set__bloomFogAnimator(GlobalNamespace::BloomFogParamsAnimator value) ;

constexpr GlobalNamespace::BloomFogParamsAnimator __get__bloomFogAnimator() const;

 GlobalNamespace::IGamePause __declspec(property(get=__get__gamePause, put=__set__gamePause))  _gamePause;

constexpr void __set__gamePause(GlobalNamespace::IGamePause value) ;

constexpr GlobalNamespace::IGamePause __get__gamePause() const;

 System::Action __declspec(property(get=__get_introTutorialDidFinishEvent, put=__set_introTutorialDidFinishEvent))  introTutorialDidFinishEvent;

constexpr void __set_introTutorialDidFinishEvent(System::Action value) ;

constexpr System::Action __get_introTutorialDidFinishEvent() const;

 bool __declspec(property(get=__get__showingFinishAnimation, put=__set__showingFinishAnimation))  _showingFinishAnimation;

constexpr void __set__showingFinishAnimation(bool value) ;

constexpr bool __get__showingFinishAnimation() const;

 bool __declspec(property(get=__get__redRingWrapperActive, put=__set__redRingWrapperActive))  _redRingWrapperActive;

constexpr void __set__redRingWrapperActive(bool value) ;

constexpr bool __get__redRingWrapperActive() const;

 bool __declspec(property(get=__get__blueRingWrapperActive, put=__set__blueRingWrapperActive))  _blueRingWrapperActive;

constexpr void __set__blueRingWrapperActive(bool value) ;

constexpr bool __get__blueRingWrapperActive() const;


// Methods

/// @brief Method add_introTutorialDidFinishEvent addr 0x2110dbc size 0x9c virtual false final false
 void add_introTutorialDidFinishEvent(System::Action value) ;

/// @brief Method remove_introTutorialDidFinishEvent addr 0x2110e58 size 0x9c virtual false final false
 void remove_introTutorialDidFinishEvent(System::Action value) ;

/// @brief Method Start addr 0x2110ef4 size 0x194 virtual false final false
 void Start() ;

/// @brief Method OnDestroy addr 0x2111088 size 0x4 virtual false final false
 void OnDestroy() ;

/// @brief Method Update addr 0x2111230 size 0x90 virtual false final false
 void Update() ;

/// @brief Method CleanUp addr 0x211108c size 0x1a4 virtual false final false
 void CleanUp() ;

/// @brief Method HandleGameDidPause addr 0x2111360 size 0x70 virtual false final false
 void HandleGameDidPause() ;

/// @brief Method HandlegameDidResume addr 0x21113d0 size 0x38 virtual false final false
 void HandlegameDidResume() ;

/// @brief Method ShowFinishAnimation addr 0x21112e4 size 0x7c virtual false final false
 void ShowFinishAnimation() ;

/// @brief Method ShowFinishAnimationCoroutine addr 0x2111408 size 0x68 virtual false final false
 System::Collections::IEnumerator ShowFinishAnimationCoroutine() ;

/// @brief Method SetFinishAnimationParams addr 0x2111498 size 0x6c virtual false final false
 void SetFinishAnimationParams(float_t progress) ;

static GlobalNamespace::IntroTutorialController New_ctor() ;

/// @brief Method .ctor addr 0x2111520 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__IntroTutorialController___ShowFinishAnimationCoroutine_d__22);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__IntroTutorialController___ShowFinishAnimationCoroutine_d__22, "", "IntroTutorialController/<ShowFinishAnimationCoroutine>d__22");
NEED_NO_BOX(GlobalNamespace::IntroTutorialController);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::IntroTutorialController, "", "IntroTutorialController");
