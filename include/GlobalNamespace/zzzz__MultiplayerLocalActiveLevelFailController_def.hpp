#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace {
namespace GlobalNamespace {
class LevelFailedTextEffect;
}
namespace GlobalNamespace {
class MultiplayerLevelCompletionResults;
}
namespace System::Collections {
class IEnumerator;
}
namespace GlobalNamespace {
class BeatmapObjectManager;
}
namespace GlobalNamespace {
class GameSongController;
}
namespace GlobalNamespace {
class IMultiplayerLevelEndActionsPublisher;
}
namespace GlobalNamespace {
class BeatmapObjectSpawnController;
}
namespace GlobalNamespace {
class MultiplayerPlayersManager;
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
class MultiplayerLocalActiveLevelFailController;
}
namespace GlobalNamespace {
class ____GlobalNamespace__MultiplayerLocalActiveLevelFailController___PlayerFailedCoroutine_d__8;
}
// Type: ::<PlayerFailedCoroutine>d__8
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5248))
// CS Name: MultiplayerLocalActiveLevelFailController::<PlayerFailedCoroutine>d__8
class CORDL_TYPE ____GlobalNamespace__MultiplayerLocalActiveLevelFailController___PlayerFailedCoroutine_d__8 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>() const noexcept;

/// @brief Convert operator to ::System::Collections::IEnumerator
constexpr operator  ::System::Collections::IEnumerator() const noexcept;

/// @brief Convert operator to ::System::IDisposable
constexpr operator  ::System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~____GlobalNamespace__MultiplayerLocalActiveLevelFailController___PlayerFailedCoroutine_d__8() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__MultiplayerLocalActiveLevelFailController___PlayerFailedCoroutine_d__8", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__MultiplayerLocalActiveLevelFailController___PlayerFailedCoroutine_d__8(____GlobalNamespace__MultiplayerLocalActiveLevelFailController___PlayerFailedCoroutine_d__8 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__MultiplayerLocalActiveLevelFailController___PlayerFailedCoroutine_d__8", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__MultiplayerLocalActiveLevelFailController___PlayerFailedCoroutine_d__8(____GlobalNamespace__MultiplayerLocalActiveLevelFailController___PlayerFailedCoroutine_d__8&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__MultiplayerLocalActiveLevelFailController___PlayerFailedCoroutine_d__8(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____GlobalNamespace__MultiplayerLocalActiveLevelFailController___PlayerFailedCoroutine_d__8& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__MultiplayerLocalActiveLevelFailController___PlayerFailedCoroutine_d__8& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__MultiplayerLocalActiveLevelFailController___PlayerFailedCoroutine_d__8& operator=(____GlobalNamespace__MultiplayerLocalActiveLevelFailController___PlayerFailedCoroutine_d__8&& o) noexcept = default;
  constexpr ____GlobalNamespace__MultiplayerLocalActiveLevelFailController___PlayerFailedCoroutine_d__8& operator=(____GlobalNamespace__MultiplayerLocalActiveLevelFailController___PlayerFailedCoroutine_d__8 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get___2__current, put=__set___2__current))  __2__current;

constexpr void __set___2__current(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get___2__current() const;

 ::GlobalNamespace::MultiplayerLocalActiveLevelFailController __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(::GlobalNamespace::MultiplayerLocalActiveLevelFailController value) ;

constexpr ::GlobalNamespace::MultiplayerLocalActiveLevelFailController __get___4__this() const;


// Properties

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current))  System_Collections_Generic_IEnumerator_System_Object__Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }]
explicit ____GlobalNamespace__MultiplayerLocalActiveLevelFailController___PlayerFailedCoroutine_d__8(int32_t __1__state) ;

/// @brief Method .ctor addr 0x20e4e98 size 0x28 virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x20e4f0c size 0x4 virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x20e4f10 size 0xf0 virtual true final true
 bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0x20e5000 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x20e5008 size 0x40 virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x20e5048 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::MultiplayerLocalActiveLevelFailController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5249))
// CS Name: MultiplayerLocalActiveLevelFailController
class CORDL_TYPE MultiplayerLocalActiveLevelFailController : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _PlayerFailedCoroutine_d__8 = ::GlobalNamespace::____GlobalNamespace__MultiplayerLocalActiveLevelFailController___PlayerFailedCoroutine_d__8;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~MultiplayerLocalActiveLevelFailController() = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerLocalActiveLevelFailController", modifiers: " const&", def_value: None }]
constexpr MultiplayerLocalActiveLevelFailController(MultiplayerLocalActiveLevelFailController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerLocalActiveLevelFailController", modifiers: "&&", def_value: None }]
constexpr MultiplayerLocalActiveLevelFailController(MultiplayerLocalActiveLevelFailController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MultiplayerLocalActiveLevelFailController(void* ptr) noexcept : ::UnityEngine::MonoBehaviour(ptr) {
}


  constexpr MultiplayerLocalActiveLevelFailController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MultiplayerLocalActiveLevelFailController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MultiplayerLocalActiveLevelFailController& operator=(MultiplayerLocalActiveLevelFailController&& o) noexcept = default;
  constexpr MultiplayerLocalActiveLevelFailController& operator=(MultiplayerLocalActiveLevelFailController const& o) noexcept = default;
                


// Fields

 ::GlobalNamespace::LevelFailedTextEffect __declspec(property(get=__get__levelFailedTextEffect, put=__set__levelFailedTextEffect))  _levelFailedTextEffect;

constexpr void __set__levelFailedTextEffect(::GlobalNamespace::LevelFailedTextEffect value) ;

constexpr ::GlobalNamespace::LevelFailedTextEffect __get__levelFailedTextEffect() const;

 ::GlobalNamespace::IMultiplayerLevelEndActionsPublisher __declspec(property(get=__get__levelEndActionsPublisher, put=__set__levelEndActionsPublisher))  _levelEndActionsPublisher;

constexpr void __set__levelEndActionsPublisher(::GlobalNamespace::IMultiplayerLevelEndActionsPublisher value) ;

constexpr ::GlobalNamespace::IMultiplayerLevelEndActionsPublisher __get__levelEndActionsPublisher() const;

 ::GlobalNamespace::BeatmapObjectSpawnController __declspec(property(get=__get__beatmapObjectSpawnController, put=__set__beatmapObjectSpawnController))  _beatmapObjectSpawnController;

constexpr void __set__beatmapObjectSpawnController(::GlobalNamespace::BeatmapObjectSpawnController value) ;

constexpr ::GlobalNamespace::BeatmapObjectSpawnController __get__beatmapObjectSpawnController() const;

 ::GlobalNamespace::GameSongController __declspec(property(get=__get__gameSongController, put=__set__gameSongController))  _gameSongController;

constexpr void __set__gameSongController(::GlobalNamespace::GameSongController value) ;

constexpr ::GlobalNamespace::GameSongController __get__gameSongController() const;

 ::GlobalNamespace::BeatmapObjectManager __declspec(property(get=__get__beatmapObjectManager, put=__set__beatmapObjectManager))  _beatmapObjectManager;

constexpr void __set__beatmapObjectManager(::GlobalNamespace::BeatmapObjectManager value) ;

constexpr ::GlobalNamespace::BeatmapObjectManager __get__beatmapObjectManager() const;

 ::GlobalNamespace::MultiplayerPlayersManager __declspec(property(get=__get__multiplayerPlayersManager, put=__set__multiplayerPlayersManager))  _multiplayerPlayersManager;

constexpr void __set__multiplayerPlayersManager(::GlobalNamespace::MultiplayerPlayersManager value) ;

constexpr ::GlobalNamespace::MultiplayerPlayersManager __get__multiplayerPlayersManager() const;


// Methods

/// @brief Method Start addr 0x20e4c3c size 0xec virtual false final false
 void Start() ;

/// @brief Method OnDestroy addr 0x20e4d28 size 0x108 virtual false final false
 void OnDestroy() ;

/// @brief Method PlayerFailedCoroutine addr 0x20e4e30 size 0x68 virtual false final false
 ::System::Collections::IEnumerator PlayerFailedCoroutine() ;

/// @brief Method HandlePlayerDidFinish addr 0x20e4ec0 size 0x44 virtual false final false
 void HandlePlayerDidFinish(::GlobalNamespace::MultiplayerLevelCompletionResults levelCompletionResults) ;

// Ctor Parameters []
explicit MultiplayerLocalActiveLevelFailController() ;

/// @brief Method .ctor addr 0x20e4f04 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerLocalActiveLevelFailController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerLocalActiveLevelFailController, "", "MultiplayerLocalActiveLevelFailController");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__MultiplayerLocalActiveLevelFailController___PlayerFailedCoroutine_d__8);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__MultiplayerLocalActiveLevelFailController___PlayerFailedCoroutine_d__8, "", "MultiplayerLocalActiveLevelFailController/<PlayerFailedCoroutine>d__8");
