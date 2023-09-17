#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
namespace {
namespace GlobalNamespace {
class MultiplayerController;
}
namespace GlobalNamespace {
class IMultiplayerSessionManager;
}
namespace GlobalNamespace {
class MultiplayerLayoutProvider;
}
namespace GlobalNamespace {
struct ____GlobalNamespace__MultiplayerController__State;
}
namespace GlobalNamespace {
class ____GlobalNamespace__CoreGameHUDController__InitData;
}
namespace GlobalNamespace {
class MultiplayerScoreProvider;
}
namespace GlobalNamespace {
class MultiplayerPlayersManager;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace GlobalNamespace {
class ____GlobalNamespace__MultiplayerScoreProvider__RankedPlayer;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerOtherPlayersScoreDiffTextManager;
}
namespace GlobalNamespace {
class ____GlobalNamespace__MultiplayerOtherPlayersScoreDiffTextManager____c;
}
// Type: ::<>c
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5319))
// CS Name: MultiplayerOtherPlayersScoreDiffTextManager::<>c
class CORDL_TYPE ____GlobalNamespace__MultiplayerOtherPlayersScoreDiffTextManager____c : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~____GlobalNamespace__MultiplayerOtherPlayersScoreDiffTextManager____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__MultiplayerOtherPlayersScoreDiffTextManager____c", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__MultiplayerOtherPlayersScoreDiffTextManager____c(____GlobalNamespace__MultiplayerOtherPlayersScoreDiffTextManager____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__MultiplayerOtherPlayersScoreDiffTextManager____c", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__MultiplayerOtherPlayersScoreDiffTextManager____c(____GlobalNamespace__MultiplayerOtherPlayersScoreDiffTextManager____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__MultiplayerOtherPlayersScoreDiffTextManager____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____GlobalNamespace__MultiplayerOtherPlayersScoreDiffTextManager____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__MultiplayerOtherPlayersScoreDiffTextManager____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__MultiplayerOtherPlayersScoreDiffTextManager____c& operator=(____GlobalNamespace__MultiplayerOtherPlayersScoreDiffTextManager____c&& o) noexcept = default;
  constexpr ____GlobalNamespace__MultiplayerOtherPlayersScoreDiffTextManager____c& operator=(____GlobalNamespace__MultiplayerOtherPlayersScoreDiffTextManager____c const& o) noexcept = default;
                


// Fields

static ::GlobalNamespace::____GlobalNamespace__MultiplayerOtherPlayersScoreDiffTextManager____c __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(::GlobalNamespace::____GlobalNamespace__MultiplayerOtherPlayersScoreDiffTextManager____c value) ;

static ::GlobalNamespace::____GlobalNamespace__MultiplayerOtherPlayersScoreDiffTextManager____c __get___9() ;

static ::System::Func_2<::GlobalNamespace::____GlobalNamespace__MultiplayerScoreProvider__RankedPlayer,bool> __declspec(property(get=__get___9__10_0, put=__set___9__10_0))  __9__10_0;

static void __set___9__10_0(::System::Func_2<::GlobalNamespace::____GlobalNamespace__MultiplayerScoreProvider__RankedPlayer,bool> value) ;

static ::System::Func_2<::GlobalNamespace::____GlobalNamespace__MultiplayerScoreProvider__RankedPlayer,bool> __get___9__10_0() ;


// Methods

// Ctor Parameters []
explicit ____GlobalNamespace__MultiplayerOtherPlayersScoreDiffTextManager____c() ;

/// @brief Method .ctor addr 0x20fc6bc size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <Update>b__10_0 addr 0x20fc6c4 size 0x18 virtual false final false
 bool _Update_b__10_0(::GlobalNamespace::____GlobalNamespace__MultiplayerScoreProvider__RankedPlayer p) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::MultiplayerOtherPlayersScoreDiffTextManager
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5320))
// CS Name: MultiplayerOtherPlayersScoreDiffTextManager
class CORDL_TYPE MultiplayerOtherPlayersScoreDiffTextManager : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using __c = ::GlobalNamespace::____GlobalNamespace__MultiplayerOtherPlayersScoreDiffTextManager____c;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~MultiplayerOtherPlayersScoreDiffTextManager() = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerOtherPlayersScoreDiffTextManager", modifiers: " const&", def_value: None }]
constexpr MultiplayerOtherPlayersScoreDiffTextManager(MultiplayerOtherPlayersScoreDiffTextManager const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerOtherPlayersScoreDiffTextManager", modifiers: "&&", def_value: None }]
constexpr MultiplayerOtherPlayersScoreDiffTextManager(MultiplayerOtherPlayersScoreDiffTextManager&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MultiplayerOtherPlayersScoreDiffTextManager(void* ptr) noexcept : ::UnityEngine::MonoBehaviour(ptr) {
}


  constexpr MultiplayerOtherPlayersScoreDiffTextManager& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MultiplayerOtherPlayersScoreDiffTextManager& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MultiplayerOtherPlayersScoreDiffTextManager& operator=(MultiplayerOtherPlayersScoreDiffTextManager&& o) noexcept = default;
  constexpr MultiplayerOtherPlayersScoreDiffTextManager& operator=(MultiplayerOtherPlayersScoreDiffTextManager const& o) noexcept = default;
                


// Fields

 ::GlobalNamespace::MultiplayerController __declspec(property(get=__get__multiplayerController, put=__set__multiplayerController))  _multiplayerController;

constexpr void __set__multiplayerController(::GlobalNamespace::MultiplayerController value) ;

constexpr ::GlobalNamespace::MultiplayerController __get__multiplayerController() const;

 ::GlobalNamespace::MultiplayerPlayersManager __declspec(property(get=__get__playersManager, put=__set__playersManager))  _playersManager;

constexpr void __set__playersManager(::GlobalNamespace::MultiplayerPlayersManager value) ;

constexpr ::GlobalNamespace::MultiplayerPlayersManager __get__playersManager() const;

 ::GlobalNamespace::MultiplayerScoreProvider __declspec(property(get=__get__scoreProvider, put=__set__scoreProvider))  _scoreProvider;

constexpr void __set__scoreProvider(::GlobalNamespace::MultiplayerScoreProvider value) ;

constexpr ::GlobalNamespace::MultiplayerScoreProvider __get__scoreProvider() const;

 ::GlobalNamespace::IMultiplayerSessionManager __declspec(property(get=__get__multiplayerSessionManager, put=__set__multiplayerSessionManager))  _multiplayerSessionManager;

constexpr void __set__multiplayerSessionManager(::GlobalNamespace::IMultiplayerSessionManager value) ;

constexpr ::GlobalNamespace::IMultiplayerSessionManager __get__multiplayerSessionManager() const;

 ::GlobalNamespace::MultiplayerLayoutProvider __declspec(property(get=__get__layoutProvider, put=__set__layoutProvider))  _layoutProvider;

constexpr void __set__layoutProvider(::GlobalNamespace::MultiplayerLayoutProvider value) ;

constexpr ::GlobalNamespace::MultiplayerLayoutProvider __get__layoutProvider() const;

 ::GlobalNamespace::____GlobalNamespace__CoreGameHUDController__InitData __declspec(property(get=__get__initData, put=__set__initData))  _initData;

constexpr void __set__initData(::GlobalNamespace::____GlobalNamespace__CoreGameHUDController__InitData value) ;

constexpr ::GlobalNamespace::____GlobalNamespace__CoreGameHUDController__InitData __get__initData() const;

 float_t __declspec(property(get=__get__timeToNextUpdate, put=__set__timeToNextUpdate))  _timeToNextUpdate;

constexpr void __set__timeToNextUpdate(float_t value) ;

constexpr float_t __get__timeToNextUpdate() const;

/// @brief Field kUpdateInterval offset 0
static constexpr float_t  kUpdateInterval{0.5};


// Methods

/// @brief Method Start addr 0x20fb734 size 0xb8 virtual false final false
 void Start() ;

/// @brief Method OnDestroy addr 0x20fb7ec size 0xd0 virtual false final false
 void OnDestroy() ;

/// @brief Method Update addr 0x20fb8bc size 0x3e8 virtual false final false
 void Update() ;

/// @brief Method InitLeftRightPositions addr 0x20fc064 size 0x4e8 virtual false final false
 void InitLeftRightPositions() ;

/// @brief Method HideAll addr 0x20fbca4 size 0x3c0 virtual false final false
 void HideAll() ;

/// @brief Method HandleStateChanged addr 0x20fc54c size 0x104 virtual false final false
 void HandleStateChanged(::GlobalNamespace::____GlobalNamespace__MultiplayerController__State newState) ;

// Ctor Parameters []
explicit MultiplayerOtherPlayersScoreDiffTextManager() ;

/// @brief Method .ctor addr 0x20fc650 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerOtherPlayersScoreDiffTextManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerOtherPlayersScoreDiffTextManager, "", "MultiplayerOtherPlayersScoreDiffTextManager");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__MultiplayerOtherPlayersScoreDiffTextManager____c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__MultiplayerOtherPlayersScoreDiffTextManager____c, "", "MultiplayerOtherPlayersScoreDiffTextManager/<>c");
