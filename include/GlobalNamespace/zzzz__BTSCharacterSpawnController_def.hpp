#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
#include <cstdint>
namespace GlobalNamespace {
class ILevelEndActions;
}
namespace UnityEngine {
class Coroutine;
}
namespace GlobalNamespace {
class IGamePause;
}
namespace GlobalNamespace {
class BTSCharacter;
}
namespace System::Collections {
class IEnumerator;
}
namespace GlobalNamespace {
class BTSCharacterSpawnEventEffect;
}
namespace GlobalNamespace {
class BTSCharacterSpawnAnimationController;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace GlobalNamespace {
class BTSCharacterSpawnController;
}
namespace GlobalNamespace {
class GlobalNamespace__BTSCharacterSpawnController___TimelineStoppedDelayed_d__19;
}
// Type: ::<TimelineStoppedDelayed>d__19
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3956))
// CS Name: BTSCharacterSpawnController::<TimelineStoppedDelayed>d__19
class CORDL_TYPE GlobalNamespace__BTSCharacterSpawnController___TimelineStoppedDelayed_d__19 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>
constexpr operator  System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const noexcept;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~GlobalNamespace__BTSCharacterSpawnController___TimelineStoppedDelayed_d__19() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__BTSCharacterSpawnController___TimelineStoppedDelayed_d__19", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__BTSCharacterSpawnController___TimelineStoppedDelayed_d__19(GlobalNamespace__BTSCharacterSpawnController___TimelineStoppedDelayed_d__19 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__BTSCharacterSpawnController___TimelineStoppedDelayed_d__19", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__BTSCharacterSpawnController___TimelineStoppedDelayed_d__19(GlobalNamespace__BTSCharacterSpawnController___TimelineStoppedDelayed_d__19&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__BTSCharacterSpawnController___TimelineStoppedDelayed_d__19(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__BTSCharacterSpawnController___TimelineStoppedDelayed_d__19& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__BTSCharacterSpawnController___TimelineStoppedDelayed_d__19& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__BTSCharacterSpawnController___TimelineStoppedDelayed_d__19& operator=(GlobalNamespace__BTSCharacterSpawnController___TimelineStoppedDelayed_d__19&& o) noexcept = default;
  constexpr GlobalNamespace__BTSCharacterSpawnController___TimelineStoppedDelayed_d__19& operator=(GlobalNamespace__BTSCharacterSpawnController___TimelineStoppedDelayed_d__19 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get___2__current, put=__set___2__current))  __2__current;

constexpr void __set___2__current(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get___2__current() const;

 GlobalNamespace::BTSCharacterSpawnController __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(GlobalNamespace::BTSCharacterSpawnController value) ;

constexpr GlobalNamespace::BTSCharacterSpawnController __get___4__this() const;


// Properties

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current))  System_Collections_Generic_IEnumerator_System_Object__Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }]
explicit GlobalNamespace__BTSCharacterSpawnController___TimelineStoppedDelayed_d__19(int32_t __1__state) ;

/// @brief Method .ctor addr 0x20a85d4 size 0x28 virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x20a8604 size 0x4 virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x20a8608 size 0xc8 virtual true final true
 bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0x20a86d0 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x20a86d8 size 0x40 virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x20a8718 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::BTSCharacterSpawnController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3957))
// CS Name: BTSCharacterSpawnController
class CORDL_TYPE BTSCharacterSpawnController : public UnityEngine::MonoBehaviour {
public:
// Declarations
using _TimelineStoppedDelayed_d__19 = GlobalNamespace::GlobalNamespace__BTSCharacterSpawnController___TimelineStoppedDelayed_d__19;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x58};

virtual ~BTSCharacterSpawnController() = default;

// Ctor Parameters [CppParam { name: "", ty: "BTSCharacterSpawnController", modifiers: " const&", def_value: None }]
constexpr BTSCharacterSpawnController(BTSCharacterSpawnController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BTSCharacterSpawnController", modifiers: "&&", def_value: None }]
constexpr BTSCharacterSpawnController(BTSCharacterSpawnController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BTSCharacterSpawnController(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr BTSCharacterSpawnController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BTSCharacterSpawnController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BTSCharacterSpawnController& operator=(BTSCharacterSpawnController&& o) noexcept = default;
  constexpr BTSCharacterSpawnController& operator=(BTSCharacterSpawnController const& o) noexcept = default;
                


// Fields

 GlobalNamespace::BTSCharacterSpawnAnimationController __declspec(property(get=__get__characterSpawnAnimationController, put=__set__characterSpawnAnimationController))  _characterSpawnAnimationController;

constexpr void __set__characterSpawnAnimationController(GlobalNamespace::BTSCharacterSpawnAnimationController value) ;

constexpr GlobalNamespace::BTSCharacterSpawnAnimationController __get__characterSpawnAnimationController() const;

 GlobalNamespace::BTSCharacterSpawnEventEffect __declspec(property(get=__get__btsCharacterSpawnEventEffect, put=__set__btsCharacterSpawnEventEffect))  _btsCharacterSpawnEventEffect;

constexpr void __set__btsCharacterSpawnEventEffect(GlobalNamespace::BTSCharacterSpawnEventEffect value) ;

constexpr GlobalNamespace::BTSCharacterSpawnEventEffect __get__btsCharacterSpawnEventEffect() const;

 GlobalNamespace::IGamePause __declspec(property(get=__get__gamePause, put=__set__gamePause))  _gamePause;

constexpr void __set__gamePause(GlobalNamespace::IGamePause value) ;

constexpr GlobalNamespace::IGamePause __get__gamePause() const;

 GlobalNamespace::ILevelEndActions __declspec(property(get=__get__levelEndActions, put=__set__levelEndActions))  _levelEndActions;

constexpr void __set__levelEndActions(GlobalNamespace::ILevelEndActions value) ;

constexpr GlobalNamespace::ILevelEndActions __get__levelEndActions() const;

 bool __declspec(property(get=__get__characterSpawned, put=__set__characterSpawned))  _characterSpawned;

constexpr void __set__characterSpawned(bool value) ;

constexpr bool __get__characterSpawned() const;

 double_t __declspec(property(get=__get__playableDirectorTimeBeforePause, put=__set__playableDirectorTimeBeforePause))  _playableDirectorTimeBeforePause;

constexpr void __set__playableDirectorTimeBeforePause(double_t value) ;

constexpr double_t __get__playableDirectorTimeBeforePause() const;

 float_t __declspec(property(get=__get__animatorNormalizedTimeBeforePause, put=__set__animatorNormalizedTimeBeforePause))  _animatorNormalizedTimeBeforePause;

constexpr void __set__animatorNormalizedTimeBeforePause(float_t value) ;

constexpr float_t __get__animatorNormalizedTimeBeforePause() const;

 UnityEngine::Coroutine __declspec(property(get=__get__despawnCharacterCoroutine, put=__set__despawnCharacterCoroutine))  _despawnCharacterCoroutine;

constexpr void __set__despawnCharacterCoroutine(UnityEngine::Coroutine value) ;

constexpr UnityEngine::Coroutine __get__despawnCharacterCoroutine() const;


// Properties

 bool __declspec(property(get=get_isCharacterVisible))  isCharacterVisible;

 bool __declspec(property(get=get_isSpawned))  isSpawned;


// Methods

/// @brief Method get_isCharacterVisible addr 0x20a7b78 size 0x18 virtual false final false
 bool get_isCharacterVisible() ;

/// @brief Method get_isSpawned addr 0x20a7b90 size 0x8 virtual false final false
 bool get_isSpawned() ;

/// @brief Method Start addr 0x20a7b98 size 0x338 virtual false final false
 void Start() ;

/// @brief Method OnDestroy addr 0x20a7f80 size 0x3a0 virtual false final false
 void OnDestroy() ;

/// @brief Method HandleStartCharacterAnimation addr 0x20a83d0 size 0xc8 virtual false final false
 void HandleStartCharacterAnimation(GlobalNamespace::BTSCharacter btsCharacter) ;

/// @brief Method HandleGamePauseDidPause addr 0x20a8500 size 0x40 virtual false final false
 void HandleGamePauseDidPause() ;

/// @brief Method HandleGamePauseWillResume addr 0x20a8540 size 0x44 virtual false final false
 void HandleGamePauseWillResume() ;

/// @brief Method HandleGamePauseDidResume addr 0x20a8584 size 0x28 virtual false final false
 void HandleGamePauseDidResume() ;

/// @brief Method HandleLevelEndActionsLevelFailed addr 0x20a85ac size 0x28 virtual false final false
 void HandleLevelEndActionsLevelFailed() ;

/// @brief Method TimelineStoppedDelayed addr 0x20a8498 size 0x68 virtual false final false
 System::Collections::IEnumerator TimelineStoppedDelayed() ;

// Ctor Parameters []
explicit BTSCharacterSpawnController() ;

/// @brief Method .ctor addr 0x20a85fc size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::BTSCharacterSpawnController);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BTSCharacterSpawnController, "", "BTSCharacterSpawnController");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__BTSCharacterSpawnController___TimelineStoppedDelayed_d__19);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__BTSCharacterSpawnController___TimelineStoppedDelayed_d__19, "", "BTSCharacterSpawnController/<TimelineStoppedDelayed>d__19");
