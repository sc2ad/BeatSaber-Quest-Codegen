#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "HMUI/zzzz__ViewController_def.hpp"
#include <cmath>
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace GlobalNamespace {
class BeatmapDifficultyDropdown;
}
namespace UnityEngine::UI {
class Button;
}
namespace GlobalNamespace {
class BeatmapCharacteristicsDropdown;
}
namespace GlobalNamespace {
class LevelFilterParams;
}
namespace UnityEngine::UI {
class Toggle;
}
namespace GlobalNamespace {
class FormattedFloatListSettingsController;
}
namespace GlobalNamespace {
class SongPacksDropdown;
}
// Forward declare root types
namespace GlobalNamespace {
class SearchFilterParamsViewController;
}
// Type: ::SearchFilterParamsViewController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13656))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5768))
// CS Name: SearchFilterParamsViewController
class CORDL_TYPE SearchFilterParamsViewController : public HMUI::ViewController {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xf0};

virtual ~SearchFilterParamsViewController() = default;

// Ctor Parameters [CppParam { name: "", ty: "SearchFilterParamsViewController", modifiers: " const&", def_value: None }]
constexpr SearchFilterParamsViewController(SearchFilterParamsViewController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SearchFilterParamsViewController", modifiers: "&&", def_value: None }]
constexpr SearchFilterParamsViewController(SearchFilterParamsViewController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SearchFilterParamsViewController(void* ptr) noexcept : HMUI::ViewController(ptr) {
}


  constexpr SearchFilterParamsViewController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SearchFilterParamsViewController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SearchFilterParamsViewController& operator=(SearchFilterParamsViewController&& o) noexcept = default;
  constexpr SearchFilterParamsViewController& operator=(SearchFilterParamsViewController const& o) noexcept = default;
                


// Fields

 UnityEngine::UI::Toggle __declspec(property(get=__get__filterByOwnedToggle, put=__set__filterByOwnedToggle))  _filterByOwnedToggle;

constexpr void __set__filterByOwnedToggle(UnityEngine::UI::Toggle value) ;

constexpr UnityEngine::UI::Toggle __get__filterByOwnedToggle() const;

 UnityEngine::UI::Toggle __declspec(property(get=__get__filterByNotOwnedToggle, put=__set__filterByNotOwnedToggle))  _filterByNotOwnedToggle;

constexpr void __set__filterByNotOwnedToggle(UnityEngine::UI::Toggle value) ;

constexpr UnityEngine::UI::Toggle __get__filterByNotOwnedToggle() const;

 UnityEngine::UI::Toggle __declspec(property(get=__get__filterByCharacteristicToggle, put=__set__filterByCharacteristicToggle))  _filterByCharacteristicToggle;

constexpr void __set__filterByCharacteristicToggle(UnityEngine::UI::Toggle value) ;

constexpr UnityEngine::UI::Toggle __get__filterByCharacteristicToggle() const;

 GlobalNamespace::BeatmapCharacteristicsDropdown __declspec(property(get=__get__beatmapCharacteristicsDropdown, put=__set__beatmapCharacteristicsDropdown))  _beatmapCharacteristicsDropdown;

constexpr void __set__beatmapCharacteristicsDropdown(GlobalNamespace::BeatmapCharacteristicsDropdown value) ;

constexpr GlobalNamespace::BeatmapCharacteristicsDropdown __get__beatmapCharacteristicsDropdown() const;

 UnityEngine::UI::Toggle __declspec(property(get=__get__filterByDifficultyToggle, put=__set__filterByDifficultyToggle))  _filterByDifficultyToggle;

constexpr void __set__filterByDifficultyToggle(UnityEngine::UI::Toggle value) ;

constexpr UnityEngine::UI::Toggle __get__filterByDifficultyToggle() const;

 GlobalNamespace::BeatmapDifficultyDropdown __declspec(property(get=__get__beatmapDifficultyDropdown, put=__set__beatmapDifficultyDropdown))  _beatmapDifficultyDropdown;

constexpr void __set__beatmapDifficultyDropdown(GlobalNamespace::BeatmapDifficultyDropdown value) ;

constexpr GlobalNamespace::BeatmapDifficultyDropdown __get__beatmapDifficultyDropdown() const;

 UnityEngine::UI::Toggle __declspec(property(get=__get__filterBySongPacksToggle, put=__set__filterBySongPacksToggle))  _filterBySongPacksToggle;

constexpr void __set__filterBySongPacksToggle(UnityEngine::UI::Toggle value) ;

constexpr UnityEngine::UI::Toggle __get__filterBySongPacksToggle() const;

 GlobalNamespace::SongPacksDropdown __declspec(property(get=__get__songPacksDropdown, put=__set__songPacksDropdown))  _songPacksDropdown;

constexpr void __set__songPacksDropdown(GlobalNamespace::SongPacksDropdown value) ;

constexpr GlobalNamespace::SongPacksDropdown __get__songPacksDropdown() const;

 UnityEngine::UI::Toggle __declspec(property(get=__get__filterByNotPlayedYetToggle, put=__set__filterByNotPlayedYetToggle))  _filterByNotPlayedYetToggle;

constexpr void __set__filterByNotPlayedYetToggle(UnityEngine::UI::Toggle value) ;

constexpr UnityEngine::UI::Toggle __get__filterByNotPlayedYetToggle() const;

 UnityEngine::UI::Toggle __declspec(property(get=__get__filterByMinBpmToggle, put=__set__filterByMinBpmToggle))  _filterByMinBpmToggle;

constexpr void __set__filterByMinBpmToggle(UnityEngine::UI::Toggle value) ;

constexpr UnityEngine::UI::Toggle __get__filterByMinBpmToggle() const;

 GlobalNamespace::FormattedFloatListSettingsController __declspec(property(get=__get__minBpmController, put=__set__minBpmController))  _minBpmController;

constexpr void __set__minBpmController(GlobalNamespace::FormattedFloatListSettingsController value) ;

constexpr GlobalNamespace::FormattedFloatListSettingsController __get__minBpmController() const;

 UnityEngine::UI::Toggle __declspec(property(get=__get__filterByMaxBpmToggle, put=__set__filterByMaxBpmToggle))  _filterByMaxBpmToggle;

constexpr void __set__filterByMaxBpmToggle(UnityEngine::UI::Toggle value) ;

constexpr UnityEngine::UI::Toggle __get__filterByMaxBpmToggle() const;

 GlobalNamespace::FormattedFloatListSettingsController __declspec(property(get=__get__maxBpmController, put=__set__maxBpmController))  _maxBpmController;

constexpr void __set__maxBpmController(GlobalNamespace::FormattedFloatListSettingsController value) ;

constexpr GlobalNamespace::FormattedFloatListSettingsController __get__maxBpmController() const;

 UnityEngine::UI::Button __declspec(property(get=__get__okButton, put=__set__okButton))  _okButton;

constexpr void __set__okButton(UnityEngine::UI::Button value) ;

constexpr UnityEngine::UI::Button __get__okButton() const;

 GlobalNamespace::LevelFilterParams __declspec(property(get=__get__currentLevelFilterParams, put=__set__currentLevelFilterParams))  _currentLevelFilterParams;

constexpr void __set__currentLevelFilterParams(GlobalNamespace::LevelFilterParams value) ;

constexpr GlobalNamespace::LevelFilterParams __get__currentLevelFilterParams() const;

 System::Action_2<GlobalNamespace::SearchFilterParamsViewController,GlobalNamespace::LevelFilterParams> __declspec(property(get=__get_didFinishEvent, put=__set_didFinishEvent))  didFinishEvent;

constexpr void __set_didFinishEvent(System::Action_2<GlobalNamespace::SearchFilterParamsViewController,GlobalNamespace::LevelFilterParams> value) ;

constexpr System::Action_2<GlobalNamespace::SearchFilterParamsViewController,GlobalNamespace::LevelFilterParams> __get_didFinishEvent() const;


// Methods

/// @brief Method add_didFinishEvent addr 0x216bc48 size 0xb0 virtual false final false
 void add_didFinishEvent(System::Action_2<GlobalNamespace::SearchFilterParamsViewController,GlobalNamespace::LevelFilterParams> value) ;

/// @brief Method remove_didFinishEvent addr 0x216bcf8 size 0xb0 virtual false final false
 void remove_didFinishEvent(System::Action_2<GlobalNamespace::SearchFilterParamsViewController,GlobalNamespace::LevelFilterParams> value) ;

/// @brief Method Setup addr 0x216bda8 size 0x8 virtual false final false
 void Setup(GlobalNamespace::LevelFilterParams levelFilterParams) ;

/// @brief Method DidActivate addr 0x216bf58 size 0x260 virtual true final false
 void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling) ;

/// @brief Method DidDeactivate addr 0x216c1b8 size 0x1c8 virtual true final false
 void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling) ;

/// @brief Method OkButtonPressed addr 0x216c380 size 0x224 virtual false final false
 void OkButtonPressed() ;

/// @brief Method MinBpmControllerValueDidChange addr 0x216c5a4 size 0x88 virtual false final false
 void MinBpmControllerValueDidChange(GlobalNamespace::FormattedFloatListSettingsController minBpmController, float_t value) ;

/// @brief Method MaxBpmControllerValueDidChange addr 0x216c62c size 0x88 virtual false final false
 void MaxBpmControllerValueDidChange(GlobalNamespace::FormattedFloatListSettingsController maxBpmController, float_t value) ;

/// @brief Method HandleFilterByOwnedValueValueChanged addr 0x216c6b4 size 0x2c virtual false final false
 void HandleFilterByOwnedValueValueChanged(bool isOn) ;

/// @brief Method HandleFilterByNotOwnedValueValueChanged addr 0x216c6e0 size 0x2c virtual false final false
 void HandleFilterByNotOwnedValueValueChanged(bool isOn) ;

/// @brief Method Refresh addr 0x216bdb0 size 0x1a8 virtual false final false
 void Refresh(GlobalNamespace::LevelFilterParams levelFilterParams) ;

static GlobalNamespace::SearchFilterParamsViewController New_ctor() ;

/// @brief Method .ctor addr 0x216c70c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::SearchFilterParamsViewController);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SearchFilterParamsViewController, "", "SearchFilterParamsViewController");
