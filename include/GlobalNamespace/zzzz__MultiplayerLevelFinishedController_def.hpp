#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
namespace {
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace GlobalNamespace {
class IMultiplayerSessionManager;
}
namespace System::Collections {
class IEnumerator;
}
namespace GlobalNamespace {
class MultiplayerLevelCompletionResults;
}
namespace GlobalNamespace {
class IMultiplayerLevelEndActionsPublisher;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace GlobalNamespace {
class IGameplayRpcManager;
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
class MultiplayerLevelFinishedController;
}
namespace GlobalNamespace {
class ____GlobalNamespace__MultiplayerLevelFinishedController___StartLevelFinished_d__19;
}
// Type: ::<StartLevelFinished>d__19
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5176))
// CS Name: MultiplayerLevelFinishedController::<StartLevelFinished>d__19
class CORDL_TYPE ____GlobalNamespace__MultiplayerLevelFinishedController___StartLevelFinished_d__19 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>() const noexcept;

/// @brief Convert operator to ::System::Collections::IEnumerator
constexpr operator  ::System::Collections::IEnumerator() const noexcept;

/// @brief Convert operator to ::System::IDisposable
constexpr operator  ::System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~____GlobalNamespace__MultiplayerLevelFinishedController___StartLevelFinished_d__19() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__MultiplayerLevelFinishedController___StartLevelFinished_d__19", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__MultiplayerLevelFinishedController___StartLevelFinished_d__19(____GlobalNamespace__MultiplayerLevelFinishedController___StartLevelFinished_d__19 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__MultiplayerLevelFinishedController___StartLevelFinished_d__19", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__MultiplayerLevelFinishedController___StartLevelFinished_d__19(____GlobalNamespace__MultiplayerLevelFinishedController___StartLevelFinished_d__19&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__MultiplayerLevelFinishedController___StartLevelFinished_d__19(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____GlobalNamespace__MultiplayerLevelFinishedController___StartLevelFinished_d__19& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__MultiplayerLevelFinishedController___StartLevelFinished_d__19& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__MultiplayerLevelFinishedController___StartLevelFinished_d__19& operator=(____GlobalNamespace__MultiplayerLevelFinishedController___StartLevelFinished_d__19&& o) noexcept = default;
  constexpr ____GlobalNamespace__MultiplayerLevelFinishedController___StartLevelFinished_d__19& operator=(____GlobalNamespace__MultiplayerLevelFinishedController___StartLevelFinished_d__19 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get___2__current, put=__set___2__current))  __2__current;

constexpr void __set___2__current(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get___2__current() const;

 ::GlobalNamespace::MultiplayerLevelCompletionResults __declspec(property(get=__get_localPlayerResults, put=__set_localPlayerResults))  localPlayerResults;

constexpr void __set_localPlayerResults(::GlobalNamespace::MultiplayerLevelCompletionResults value) ;

constexpr ::GlobalNamespace::MultiplayerLevelCompletionResults __get_localPlayerResults() const;

 ::GlobalNamespace::MultiplayerLevelFinishedController __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(::GlobalNamespace::MultiplayerLevelFinishedController value) ;

constexpr ::GlobalNamespace::MultiplayerLevelFinishedController __get___4__this() const;

 float_t __declspec(property(get=__get__waitStartTime_5__2, put=__set__waitStartTime_5__2))  _waitStartTime_5__2;

constexpr void __set__waitStartTime_5__2(float_t value) ;

constexpr float_t __get__waitStartTime_5__2() const;

 bool __declspec(property(get=__get__isPlayingAlone_5__3, put=__set__isPlayingAlone_5__3))  _isPlayingAlone_5__3;

constexpr void __set__isPlayingAlone_5__3(bool value) ;

constexpr bool __get__isPlayingAlone_5__3() const;

 float_t __declspec(property(get=__get__resultsTimeoutLength_5__4, put=__set__resultsTimeoutLength_5__4))  _resultsTimeoutLength_5__4;

constexpr void __set__resultsTimeoutLength_5__4(float_t value) ;

constexpr float_t __get__resultsTimeoutLength_5__4() const;


// Properties

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current))  System_Collections_Generic_IEnumerator_System_Object__Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }]
explicit ____GlobalNamespace__MultiplayerLevelFinishedController___StartLevelFinished_d__19(int32_t __1__state) ;

/// @brief Method .ctor addr 0x20d4c58 size 0x28 virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x20d4db8 size 0x4 virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x20d4dbc size 0x4a0 virtual true final true
 bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0x20d525c size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x20d5264 size 0x40 virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x20d52a4 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::MultiplayerLevelFinishedController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5177))
// CS Name: MultiplayerLevelFinishedController
class CORDL_TYPE MultiplayerLevelFinishedController : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _StartLevelFinished_d__19 = ::GlobalNamespace::____GlobalNamespace__MultiplayerLevelFinishedController___StartLevelFinished_d__19;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~MultiplayerLevelFinishedController() = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerLevelFinishedController", modifiers: " const&", def_value: None }]
constexpr MultiplayerLevelFinishedController(MultiplayerLevelFinishedController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerLevelFinishedController", modifiers: "&&", def_value: None }]
constexpr MultiplayerLevelFinishedController(MultiplayerLevelFinishedController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MultiplayerLevelFinishedController(void* ptr) noexcept : ::UnityEngine::MonoBehaviour(ptr) {
}


  constexpr MultiplayerLevelFinishedController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MultiplayerLevelFinishedController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MultiplayerLevelFinishedController& operator=(MultiplayerLevelFinishedController&& o) noexcept = default;
  constexpr MultiplayerLevelFinishedController& operator=(MultiplayerLevelFinishedController const& o) noexcept = default;
                


// Fields

 ::GlobalNamespace::IMultiplayerLevelEndActionsPublisher __declspec(property(get=__get__levelEndActionsPublisher, put=__set__levelEndActionsPublisher))  _levelEndActionsPublisher;

constexpr void __set__levelEndActionsPublisher(::GlobalNamespace::IMultiplayerLevelEndActionsPublisher value) ;

constexpr ::GlobalNamespace::IMultiplayerLevelEndActionsPublisher __get__levelEndActionsPublisher() const;

 ::GlobalNamespace::IGameplayRpcManager __declspec(property(get=__get__rpcManager, put=__set__rpcManager))  _rpcManager;

constexpr void __set__rpcManager(::GlobalNamespace::IGameplayRpcManager value) ;

constexpr ::GlobalNamespace::IGameplayRpcManager __get__rpcManager() const;

 ::GlobalNamespace::IMultiplayerSessionManager __declspec(property(get=__get__multiplayerSessionManager, put=__set__multiplayerSessionManager))  _multiplayerSessionManager;

constexpr void __set__multiplayerSessionManager(::GlobalNamespace::IMultiplayerSessionManager value) ;

constexpr ::GlobalNamespace::IMultiplayerSessionManager __get__multiplayerSessionManager() const;

 ::System::Action_2<::GlobalNamespace::MultiplayerLevelCompletionResults,::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::MultiplayerLevelCompletionResults>> __declspec(property(get=__get_allResultsCollectedEvent, put=__set_allResultsCollectedEvent))  allResultsCollectedEvent;

constexpr void __set_allResultsCollectedEvent(::System::Action_2<::GlobalNamespace::MultiplayerLevelCompletionResults,::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::MultiplayerLevelCompletionResults>> value) ;

constexpr ::System::Action_2<::GlobalNamespace::MultiplayerLevelCompletionResults,::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::MultiplayerLevelCompletionResults>> __get_allResultsCollectedEvent() const;

 ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::MultiplayerLevelCompletionResults> __declspec(property(get=__get__otherPlayersCompletionResults, put=__set__otherPlayersCompletionResults))  _otherPlayersCompletionResults;

constexpr void __set__otherPlayersCompletionResults(::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::MultiplayerLevelCompletionResults> value) ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::MultiplayerLevelCompletionResults> __get__otherPlayersCompletionResults() const;

 ::GlobalNamespace::MultiplayerLevelCompletionResults __declspec(property(get=__get__localPlayerResults, put=__set__localPlayerResults))  _localPlayerResults;

constexpr void __set__localPlayerResults(::GlobalNamespace::MultiplayerLevelCompletionResults value) ;

constexpr ::GlobalNamespace::MultiplayerLevelCompletionResults __get__localPlayerResults() const;

 bool __declspec(property(get=__get__gameFinishReported, put=__set__gameFinishReported))  _gameFinishReported;

constexpr void __set__gameFinishReported(bool value) ;

constexpr bool __get__gameFinishReported() const;

 float_t __declspec(property(get=__get__sceneLoadTime, put=__set__sceneLoadTime))  _sceneLoadTime;

constexpr void __set__sceneLoadTime(float_t value) ;

constexpr float_t __get__sceneLoadTime() const;

/// @brief Field kMinSceneDuration offset 0
static constexpr float_t  kMinSceneDuration{2};


// Properties

 bool __declspec(property(get=get_gameResultsReady))  gameResultsReady;

 ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::MultiplayerLevelCompletionResults> __declspec(property(get=get_otherPlayersCompletionResults))  otherPlayersCompletionResults;

 ::GlobalNamespace::MultiplayerLevelCompletionResults __declspec(property(get=get_localPlayerResults))  localPlayerResults;


// Methods

/// @brief Method add_allResultsCollectedEvent addr 0x20d45a4 size 0xb0 virtual false final false
 void add_allResultsCollectedEvent(::System::Action_2<::GlobalNamespace::MultiplayerLevelCompletionResults,::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::MultiplayerLevelCompletionResults>> value) ;

/// @brief Method remove_allResultsCollectedEvent addr 0x20d4654 size 0xb0 virtual false final false
 void remove_allResultsCollectedEvent(::System::Action_2<::GlobalNamespace::MultiplayerLevelCompletionResults,::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::MultiplayerLevelCompletionResults>> value) ;

/// @brief Method get_gameResultsReady addr 0x20d4704 size 0x8 virtual false final false
 bool get_gameResultsReady() ;

/// @brief Method get_otherPlayersCompletionResults addr 0x20d470c size 0x8 virtual false final false
 ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::MultiplayerLevelCompletionResults> get_otherPlayersCompletionResults() ;

/// @brief Method get_localPlayerResults addr 0x20d4714 size 0x8 virtual false final false
 ::GlobalNamespace::MultiplayerLevelCompletionResults get_localPlayerResults() ;

/// @brief Method Start addr 0x20d471c size 0x260 virtual false final false
 void Start() ;

/// @brief Method OnDestroy addr 0x20d497c size 0x268 virtual false final false
 void OnDestroy() ;

/// @brief Method StartLevelFinished addr 0x20d4be4 size 0x74 virtual false final false
 ::System::Collections::IEnumerator StartLevelFinished(::GlobalNamespace::MultiplayerLevelCompletionResults localPlayerResults) ;

/// @brief Method HandlePlayerDidFinish addr 0x20d4c80 size 0x20 virtual false final false
 void HandlePlayerDidFinish(::GlobalNamespace::MultiplayerLevelCompletionResults levelCompletionResults) ;

/// @brief Method HandlePlayerNetworkDidFailed addr 0x20d4ca0 size 0x34 virtual false final false
 void HandlePlayerNetworkDidFailed(::GlobalNamespace::MultiplayerLevelCompletionResults levelCompletionResults) ;

/// @brief Method HandleRpcLevelFinished addr 0x20d4cd4 size 0x68 virtual false final false
 void HandleRpcLevelFinished(::StringW userId, ::GlobalNamespace::MultiplayerLevelCompletionResults results) ;

// Ctor Parameters []
explicit MultiplayerLevelFinishedController() ;

/// @brief Method .ctor addr 0x20d4d3c size 0x7c virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerLevelFinishedController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerLevelFinishedController, "", "MultiplayerLevelFinishedController");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__MultiplayerLevelFinishedController___StartLevelFinished_d__19);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__MultiplayerLevelFinishedController___StartLevelFinished_d__19, "", "MultiplayerLevelFinishedController/<StartLevelFinished>d__19");
