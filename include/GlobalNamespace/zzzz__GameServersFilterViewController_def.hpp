#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "HMUI/zzzz__ViewController_def.hpp"
namespace UnityEngine::UI {
class Button;
}
namespace GlobalNamespace {
class GameplayModifiersDropdown;
}
namespace GlobalNamespace {
class GameServersFilter;
}
namespace UnityEngine::UI {
class Toggle;
}
namespace GlobalNamespace {
class SongPacksDropdown;
}
namespace GlobalNamespace {
class BeatmapDifficultyDropdown;
}
namespace HMUI {
class ToggleBinder;
}
// Forward declare root types
namespace GlobalNamespace {
class GameServersFilterViewController;
}
// Type: ::GameServersFilterViewController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13656))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5809))
// CS Name: GameServersFilterViewController
class CORDL_TYPE GameServersFilterViewController : public HMUI::ViewController {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xd8};

virtual ~GameServersFilterViewController() = default;

// Ctor Parameters [CppParam { name: "", ty: "GameServersFilterViewController", modifiers: " const&", def_value: None }]
constexpr GameServersFilterViewController(GameServersFilterViewController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GameServersFilterViewController", modifiers: "&&", def_value: None }]
constexpr GameServersFilterViewController(GameServersFilterViewController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GameServersFilterViewController(void* ptr) noexcept : HMUI::ViewController(ptr) {
}


  constexpr GameServersFilterViewController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GameServersFilterViewController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GameServersFilterViewController& operator=(GameServersFilterViewController&& o) noexcept = default;
  constexpr GameServersFilterViewController& operator=(GameServersFilterViewController const& o) noexcept = default;
                


// Fields

 UnityEngine::UI::Toggle __declspec(property(get=__get__filterByDifficultyToggle, put=__set__filterByDifficultyToggle))  _filterByDifficultyToggle;

constexpr void __set__filterByDifficultyToggle(UnityEngine::UI::Toggle value) ;

constexpr UnityEngine::UI::Toggle __get__filterByDifficultyToggle() const;

 UnityEngine::UI::Button __declspec(property(get=__get__filterByDifficultyButton, put=__set__filterByDifficultyButton))  _filterByDifficultyButton;

constexpr void __set__filterByDifficultyButton(UnityEngine::UI::Button value) ;

constexpr UnityEngine::UI::Button __get__filterByDifficultyButton() const;

 GlobalNamespace::BeatmapDifficultyDropdown __declspec(property(get=__get__beatmapDifficultyDropdown, put=__set__beatmapDifficultyDropdown))  _beatmapDifficultyDropdown;

constexpr void __set__beatmapDifficultyDropdown(GlobalNamespace::BeatmapDifficultyDropdown value) ;

constexpr GlobalNamespace::BeatmapDifficultyDropdown __get__beatmapDifficultyDropdown() const;

 UnityEngine::UI::Toggle __declspec(property(get=__get__filterByModifiersToggle, put=__set__filterByModifiersToggle))  _filterByModifiersToggle;

constexpr void __set__filterByModifiersToggle(UnityEngine::UI::Toggle value) ;

constexpr UnityEngine::UI::Toggle __get__filterByModifiersToggle() const;

 UnityEngine::UI::Button __declspec(property(get=__get__filterByModifiersButton, put=__set__filterByModifiersButton))  _filterByModifiersButton;

constexpr void __set__filterByModifiersButton(UnityEngine::UI::Button value) ;

constexpr UnityEngine::UI::Button __get__filterByModifiersButton() const;

 GlobalNamespace::GameplayModifiersDropdown __declspec(property(get=__get__gameplayModifiersDropdown, put=__set__gameplayModifiersDropdown))  _gameplayModifiersDropdown;

constexpr void __set__gameplayModifiersDropdown(GlobalNamespace::GameplayModifiersDropdown value) ;

constexpr GlobalNamespace::GameplayModifiersDropdown __get__gameplayModifiersDropdown() const;

 UnityEngine::UI::Toggle __declspec(property(get=__get__filterBySongsToggle, put=__set__filterBySongsToggle))  _filterBySongsToggle;

constexpr void __set__filterBySongsToggle(UnityEngine::UI::Toggle value) ;

constexpr UnityEngine::UI::Toggle __get__filterBySongsToggle() const;

 UnityEngine::UI::Button __declspec(property(get=__get__filterBySongsButton, put=__set__filterBySongsButton))  _filterBySongsButton;

constexpr void __set__filterBySongsButton(UnityEngine::UI::Button value) ;

constexpr UnityEngine::UI::Button __get__filterBySongsButton() const;

 GlobalNamespace::SongPacksDropdown __declspec(property(get=__get__songPacksDropdown, put=__set__songPacksDropdown))  _songPacksDropdown;

constexpr void __set__songPacksDropdown(GlobalNamespace::SongPacksDropdown value) ;

constexpr GlobalNamespace::SongPacksDropdown __get__songPacksDropdown() const;

 UnityEngine::UI::Toggle __declspec(property(get=__get__showFullToggle, put=__set__showFullToggle))  _showFullToggle;

constexpr void __set__showFullToggle(UnityEngine::UI::Toggle value) ;

constexpr UnityEngine::UI::Toggle __get__showFullToggle() const;

 UnityEngine::UI::Toggle __declspec(property(get=__get__showPasswordProtectedToggle, put=__set__showPasswordProtectedToggle))  _showPasswordProtectedToggle;

constexpr void __set__showPasswordProtectedToggle(UnityEngine::UI::Toggle value) ;

constexpr UnityEngine::UI::Toggle __get__showPasswordProtectedToggle() const;

 HMUI::ToggleBinder __declspec(property(get=__get__toggleBinder, put=__set__toggleBinder))  _toggleBinder;

constexpr void __set__toggleBinder(HMUI::ToggleBinder value) ;

constexpr HMUI::ToggleBinder __get__toggleBinder() const;

 bool __declspec(property(get=__get__showInternetGames, put=__set__showInternetGames))  _showInternetGames;

constexpr void __set__showInternetGames(bool value) ;

constexpr bool __get__showInternetGames() const;


// Properties

 GlobalNamespace::GameServersFilter __declspec(property(get=get_gameServersFilter))  gameServersFilter;


// Methods

/// @brief Method get_gameServersFilter addr 0x21765cc size 0xf4 virtual false final false
 GlobalNamespace::GameServersFilter get_gameServersFilter() ;

/// @brief Method SetupGameServersFilter addr 0x21766c0 size 0x4 virtual false final false
 void SetupGameServersFilter(GlobalNamespace::GameServersFilter gameServersFilter) ;

/// @brief Method DidActivate addr 0x21767cc size 0x15c virtual true final false
 void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling) ;

/// @brief Method OnDestroy addr 0x2176928 size 0x28 virtual true final false
 void OnDestroy() ;

/// @brief Method Refresh addr 0x21766c4 size 0x108 virtual false final false
 void Refresh(GlobalNamespace::GameServersFilter currentFilter) ;

// Ctor Parameters []
explicit GameServersFilterViewController() ;

/// @brief Method .ctor addr 0x2176950 size 0x68 virtual false final false
 void _ctor() ;

/// @brief Method <DidActivate>b__16_0 addr 0x21769b8 size 0x20 virtual false final false
 void _DidActivate_b__16_0(bool isOn) ;

/// @brief Method <DidActivate>b__16_1 addr 0x21769d8 size 0x20 virtual false final false
 void _DidActivate_b__16_1(bool isOn) ;

/// @brief Method <DidActivate>b__16_2 addr 0x21769f8 size 0x20 virtual false final false
 void _DidActivate_b__16_2(bool isOn) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::GameServersFilterViewController);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GameServersFilterViewController, "", "GameServersFilterViewController");
