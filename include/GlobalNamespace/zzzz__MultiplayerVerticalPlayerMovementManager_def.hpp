#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace GlobalNamespace {
class MultiplayerController;
}
namespace GlobalNamespace {
class MultiplayerConnectedPlayerFacade;
}
namespace GlobalNamespace {
class GlobalNamespace__MultiplayerScoreProvider__RankedPlayer;
}
namespace GlobalNamespace {
struct GlobalNamespace__MultiplayerController__State;
}
namespace GlobalNamespace {
class MultiplayerLayoutProvider;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace GlobalNamespace {
class MultiplayerScoreProvider;
}
namespace GlobalNamespace {
class MultiplayerPlayersManager;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerVerticalPlayerMovementManager;
}
// Type: ::MultiplayerVerticalPlayerMovementManager
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5346))
// CS Name: MultiplayerVerticalPlayerMovementManager
class CORDL_TYPE MultiplayerVerticalPlayerMovementManager : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x68};

virtual ~MultiplayerVerticalPlayerMovementManager() = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerVerticalPlayerMovementManager", modifiers: " const&", def_value: None }]
constexpr MultiplayerVerticalPlayerMovementManager(MultiplayerVerticalPlayerMovementManager const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerVerticalPlayerMovementManager", modifiers: "&&", def_value: None }]
constexpr MultiplayerVerticalPlayerMovementManager(MultiplayerVerticalPlayerMovementManager&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MultiplayerVerticalPlayerMovementManager(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr MultiplayerVerticalPlayerMovementManager& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MultiplayerVerticalPlayerMovementManager& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MultiplayerVerticalPlayerMovementManager& operator=(MultiplayerVerticalPlayerMovementManager&& o) noexcept = default;
  constexpr MultiplayerVerticalPlayerMovementManager& operator=(MultiplayerVerticalPlayerMovementManager const& o) noexcept = default;
                


// Fields

 float_t __declspec(property(get=__get__movementRange, put=__set__movementRange))  _movementRange;

constexpr void __set__movementRange(float_t value) ;

constexpr float_t __get__movementRange() const;

 float_t __declspec(property(get=__get__duelMovementRange, put=__set__duelMovementRange))  _duelMovementRange;

constexpr void __set__duelMovementRange(float_t value) ;

constexpr float_t __get__duelMovementRange() const;

 float_t __declspec(property(get=__get__maxMoveSpeedMetersPerSecond, put=__set__maxMoveSpeedMetersPerSecond))  _maxMoveSpeedMetersPerSecond;

constexpr void __set__maxMoveSpeedMetersPerSecond(float_t value) ;

constexpr float_t __get__maxMoveSpeedMetersPerSecond() const;

 float_t __declspec(property(get=__get__accelerationMetersPerSecondSquared, put=__set__accelerationMetersPerSecondSquared))  _accelerationMetersPerSecondSquared;

constexpr void __set__accelerationMetersPerSecondSquared(float_t value) ;

constexpr float_t __get__accelerationMetersPerSecondSquared() const;

 float_t __declspec(property(get=__get__decelerationMetersPerSecondSquared, put=__set__decelerationMetersPerSecondSquared))  _decelerationMetersPerSecondSquared;

constexpr void __set__decelerationMetersPerSecondSquared(float_t value) ;

constexpr float_t __get__decelerationMetersPerSecondSquared() const;

 float_t __declspec(property(get=__get__minScoreDifference, put=__set__minScoreDifference))  _minScoreDifference;

constexpr void __set__minScoreDifference(float_t value) ;

constexpr float_t __get__minScoreDifference() const;

 GlobalNamespace::MultiplayerPlayersManager __declspec(property(get=__get__multiplayerPlayersManager, put=__set__multiplayerPlayersManager))  _multiplayerPlayersManager;

constexpr void __set__multiplayerPlayersManager(GlobalNamespace::MultiplayerPlayersManager value) ;

constexpr GlobalNamespace::MultiplayerPlayersManager __get__multiplayerPlayersManager() const;

 GlobalNamespace::MultiplayerScoreProvider __declspec(property(get=__get__scoreProvider, put=__set__scoreProvider))  _scoreProvider;

constexpr void __set__scoreProvider(GlobalNamespace::MultiplayerScoreProvider value) ;

constexpr GlobalNamespace::MultiplayerScoreProvider __get__scoreProvider() const;

 GlobalNamespace::MultiplayerLayoutProvider __declspec(property(get=__get__layoutProvider, put=__set__layoutProvider))  _layoutProvider;

constexpr void __set__layoutProvider(GlobalNamespace::MultiplayerLayoutProvider value) ;

constexpr GlobalNamespace::MultiplayerLayoutProvider __get__layoutProvider() const;

 GlobalNamespace::MultiplayerController __declspec(property(get=__get__multiplayerController, put=__set__multiplayerController))  _multiplayerController;

constexpr void __set__multiplayerController(GlobalNamespace::MultiplayerController value) ;

constexpr GlobalNamespace::MultiplayerController __get__multiplayerController() const;

 System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__MultiplayerScoreProvider__RankedPlayer> __declspec(property(get=__get__reusablePlayersList, put=__set__reusablePlayersList))  _reusablePlayersList;

constexpr void __set__reusablePlayersList(System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__MultiplayerScoreProvider__RankedPlayer> value) ;

constexpr System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__MultiplayerScoreProvider__RankedPlayer> __get__reusablePlayersList() const;

 System::Collections::Generic::Dictionary_2<GlobalNamespace::MultiplayerConnectedPlayerFacade,float_t> __declspec(property(get=__get__currentSpeedsDictionary, put=__set__currentSpeedsDictionary))  _currentSpeedsDictionary;

constexpr void __set__currentSpeedsDictionary(System::Collections::Generic::Dictionary_2<GlobalNamespace::MultiplayerConnectedPlayerFacade,float_t> value) ;

constexpr System::Collections::Generic::Dictionary_2<GlobalNamespace::MultiplayerConnectedPlayerFacade,float_t> __get__currentSpeedsDictionary() const;

 float_t __declspec(property(get=__get__lastFrameBaseScore, put=__set__lastFrameBaseScore))  _lastFrameBaseScore;

constexpr void __set__lastFrameBaseScore(float_t value) ;

constexpr float_t __get__lastFrameBaseScore() const;


// Methods

/// @brief Method Start addr 0x2104528 size 0xac virtual false final false
 void Start() ;

/// @brief Method OnDestroy addr 0x21045e4 size 0xd4 virtual false final false
 void OnDestroy() ;

/// @brief Method Update addr 0x21046b8 size 0x7e4 virtual false final false
 void Update() ;

/// @brief Method HandleStateChanged addr 0x21045d4 size 0x10 virtual false final false
 void HandleStateChanged(GlobalNamespace::GlobalNamespace__MultiplayerController__State state) ;

static GlobalNamespace::MultiplayerVerticalPlayerMovementManager New_ctor() ;

/// @brief Method .ctor addr 0x2104e9c size 0xe0 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::MultiplayerVerticalPlayerMovementManager);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerVerticalPlayerMovementManager, "", "MultiplayerVerticalPlayerMovementManager");
