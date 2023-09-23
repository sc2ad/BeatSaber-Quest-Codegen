#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
namespace GlobalNamespace {
class GlobalNamespace__CoreGameHUDController__InitData;
}
namespace GlobalNamespace {
class IMultiplayerSessionManager;
}
namespace GlobalNamespace {
class MultiplayerScoreProvider;
}
namespace GlobalNamespace {
struct GlobalNamespace__MultiplayerController__State;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace GlobalNamespace {
class MultiplayerScoreDiffText;
}
namespace GlobalNamespace {
class MultiplayerController;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerLocalPlayerScoreDiffTextManager;
}
// Type: ::MultiplayerLocalPlayerScoreDiffTextManager
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5316))
// CS Name: MultiplayerLocalPlayerScoreDiffTextManager
class CORDL_TYPE MultiplayerLocalPlayerScoreDiffTextManager : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~MultiplayerLocalPlayerScoreDiffTextManager() = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerLocalPlayerScoreDiffTextManager", modifiers: " const&", def_value: None }]
constexpr MultiplayerLocalPlayerScoreDiffTextManager(MultiplayerLocalPlayerScoreDiffTextManager const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerLocalPlayerScoreDiffTextManager", modifiers: "&&", def_value: None }]
constexpr MultiplayerLocalPlayerScoreDiffTextManager(MultiplayerLocalPlayerScoreDiffTextManager&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MultiplayerLocalPlayerScoreDiffTextManager(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr MultiplayerLocalPlayerScoreDiffTextManager& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MultiplayerLocalPlayerScoreDiffTextManager& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MultiplayerLocalPlayerScoreDiffTextManager& operator=(MultiplayerLocalPlayerScoreDiffTextManager&& o) noexcept = default;
  constexpr MultiplayerLocalPlayerScoreDiffTextManager& operator=(MultiplayerLocalPlayerScoreDiffTextManager const& o) noexcept = default;
                


// Fields

 GlobalNamespace::MultiplayerScoreDiffText __declspec(property(get=__get__scoreDiffText, put=__set__scoreDiffText))  _scoreDiffText;

constexpr void __set__scoreDiffText(GlobalNamespace::MultiplayerScoreDiffText value) ;

constexpr GlobalNamespace::MultiplayerScoreDiffText __get__scoreDiffText() const;

 GlobalNamespace::MultiplayerController __declspec(property(get=__get__multiplayerController, put=__set__multiplayerController))  _multiplayerController;

constexpr void __set__multiplayerController(GlobalNamespace::MultiplayerController value) ;

constexpr GlobalNamespace::MultiplayerController __get__multiplayerController() const;

 GlobalNamespace::MultiplayerScoreProvider __declspec(property(get=__get__scoreProvider, put=__set__scoreProvider))  _scoreProvider;

constexpr void __set__scoreProvider(GlobalNamespace::MultiplayerScoreProvider value) ;

constexpr GlobalNamespace::MultiplayerScoreProvider __get__scoreProvider() const;

 GlobalNamespace::GlobalNamespace__CoreGameHUDController__InitData __declspec(property(get=__get__hudInitData, put=__set__hudInitData))  _hudInitData;

constexpr void __set__hudInitData(GlobalNamespace::GlobalNamespace__CoreGameHUDController__InitData value) ;

constexpr GlobalNamespace::GlobalNamespace__CoreGameHUDController__InitData __get__hudInitData() const;

 GlobalNamespace::IMultiplayerSessionManager __declspec(property(get=__get__multiplayerSessionManager, put=__set__multiplayerSessionManager))  _multiplayerSessionManager;

constexpr void __set__multiplayerSessionManager(GlobalNamespace::IMultiplayerSessionManager value) ;

constexpr GlobalNamespace::IMultiplayerSessionManager __get__multiplayerSessionManager() const;

 float_t __declspec(property(get=__get__timeToNextUpdate, put=__set__timeToNextUpdate))  _timeToNextUpdate;

constexpr void __set__timeToNextUpdate(float_t value) ;

constexpr float_t __get__timeToNextUpdate() const;

/// @brief Field kUpdateInterval offset 0
static constexpr float_t  kUpdateInterval{0.5};

 System::Nullable_1<bool> __declspec(property(get=__get__wasLocalPlayerLeader, put=__set__wasLocalPlayerLeader))  _wasLocalPlayerLeader;

constexpr void __set__wasLocalPlayerLeader(System::Nullable_1<bool> value) ;

constexpr System::Nullable_1<bool> __get__wasLocalPlayerLeader() const;


// Methods

/// @brief Method Start addr 0x20fadec size 0xb0 virtual false final false
 void Start() ;

/// @brief Method OnDestroy addr 0x20fae9c size 0xd0 virtual false final false
 void OnDestroy() ;

/// @brief Method Update addr 0x20faf6c size 0x344 virtual false final false
 void Update() ;

/// @brief Method HandleStateChanged addr 0x20fb2b0 size 0x4c virtual false final false
 void HandleStateChanged(GlobalNamespace::GlobalNamespace__MultiplayerController__State newState) ;

// Ctor Parameters []
explicit MultiplayerLocalPlayerScoreDiffTextManager() ;

/// @brief Method .ctor addr 0x20fb2fc size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::MultiplayerLocalPlayerScoreDiffTextManager);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerLocalPlayerScoreDiffTextManager, "", "MultiplayerLocalPlayerScoreDiffTextManager");
