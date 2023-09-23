#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "HMUI/zzzz__NavigationController_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace GlobalNamespace {
class IPreviewBeatmapLevel;
}
namespace GlobalNamespace {
class LevelFilteringNavigationController;
}
namespace GlobalNamespace {
class LevelCollectionNavigationController;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace GlobalNamespace {
class IDifficultyBeatmap;
}
namespace System {
template<typename T>
class Action_1;
}
namespace GlobalNamespace {
struct SongPackMask;
}
namespace GlobalNamespace {
struct BeatmapDifficultyMask;
}
namespace GlobalNamespace {
class PlayerDataModel;
}
namespace GlobalNamespace {
class BeatmapCharacteristicSO;
}
namespace UnityEngine {
class GameObject;
}
namespace GlobalNamespace {
struct GlobalNamespace__SelectLevelCategoryViewController__LevelCategory;
}
namespace GlobalNamespace {
class IBeatmapLevel;
}
namespace GlobalNamespace {
class IBeatmapLevelPack;
}
namespace GlobalNamespace {
struct GlobalNamespace__StandardLevelDetailViewController__ContentType;
}
namespace GlobalNamespace {
class IAnnotatedBeatmapLevelCollection;
}
// Forward declare root types
namespace GlobalNamespace {
class LevelSelectionNavigationController;
}
// Type: ::LevelSelectionNavigationController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13639))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5782))
// CS Name: LevelSelectionNavigationController
class CORDL_TYPE LevelSelectionNavigationController : public HMUI::NavigationController {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xf8};

virtual ~LevelSelectionNavigationController() = default;

// Ctor Parameters [CppParam { name: "", ty: "LevelSelectionNavigationController", modifiers: " const&", def_value: None }]
constexpr LevelSelectionNavigationController(LevelSelectionNavigationController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LevelSelectionNavigationController", modifiers: "&&", def_value: None }]
constexpr LevelSelectionNavigationController(LevelSelectionNavigationController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LevelSelectionNavigationController(void* ptr) noexcept : HMUI::NavigationController(ptr) {
}


  constexpr LevelSelectionNavigationController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LevelSelectionNavigationController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LevelSelectionNavigationController& operator=(LevelSelectionNavigationController&& o) noexcept = default;
  constexpr LevelSelectionNavigationController& operator=(LevelSelectionNavigationController const& o) noexcept = default;
                


// Fields

 GlobalNamespace::LevelFilteringNavigationController __declspec(property(get=__get__levelFilteringNavigationController, put=__set__levelFilteringNavigationController))  _levelFilteringNavigationController;

constexpr void __set__levelFilteringNavigationController(GlobalNamespace::LevelFilteringNavigationController value) ;

constexpr GlobalNamespace::LevelFilteringNavigationController __get__levelFilteringNavigationController() const;

 GlobalNamespace::LevelCollectionNavigationController __declspec(property(get=__get__levelCollectionNavigationController, put=__set__levelCollectionNavigationController))  _levelCollectionNavigationController;

constexpr void __set__levelCollectionNavigationController(GlobalNamespace::LevelCollectionNavigationController value) ;

constexpr GlobalNamespace::LevelCollectionNavigationController __get__levelCollectionNavigationController() const;

 GlobalNamespace::PlayerDataModel __declspec(property(get=__get__playerDataModel, put=__set__playerDataModel))  _playerDataModel;

constexpr void __set__playerDataModel(GlobalNamespace::PlayerDataModel value) ;

constexpr GlobalNamespace::PlayerDataModel __get__playerDataModel() const;

 System::Action_2<GlobalNamespace::LevelSelectionNavigationController,GlobalNamespace::GlobalNamespace__StandardLevelDetailViewController__ContentType> __declspec(property(get=__get_didChangeLevelDetailContentEvent, put=__set_didChangeLevelDetailContentEvent))  didChangeLevelDetailContentEvent;

constexpr void __set_didChangeLevelDetailContentEvent(System::Action_2<GlobalNamespace::LevelSelectionNavigationController,GlobalNamespace::GlobalNamespace__StandardLevelDetailViewController__ContentType> value) ;

constexpr System::Action_2<GlobalNamespace::LevelSelectionNavigationController,GlobalNamespace::GlobalNamespace__StandardLevelDetailViewController__ContentType> __get_didChangeLevelDetailContentEvent() const;

 System::Action_2<GlobalNamespace::LevelSelectionNavigationController,GlobalNamespace::IBeatmapLevelPack> __declspec(property(get=__get_didSelectLevelPackEvent, put=__set_didSelectLevelPackEvent))  didSelectLevelPackEvent;

constexpr void __set_didSelectLevelPackEvent(System::Action_2<GlobalNamespace::LevelSelectionNavigationController,GlobalNamespace::IBeatmapLevelPack> value) ;

constexpr System::Action_2<GlobalNamespace::LevelSelectionNavigationController,GlobalNamespace::IBeatmapLevelPack> __get_didSelectLevelPackEvent() const;

 System::Action_1<GlobalNamespace::LevelSelectionNavigationController> __declspec(property(get=__get_didPressActionButtonEvent, put=__set_didPressActionButtonEvent))  didPressActionButtonEvent;

constexpr void __set_didPressActionButtonEvent(System::Action_1<GlobalNamespace::LevelSelectionNavigationController> value) ;

constexpr System::Action_1<GlobalNamespace::LevelSelectionNavigationController> __get_didPressActionButtonEvent() const;

 System::Action_2<GlobalNamespace::LevelSelectionNavigationController,GlobalNamespace::IBeatmapLevel> __declspec(property(get=__get_didPressPracticeButtonEvent, put=__set_didPressPracticeButtonEvent))  didPressPracticeButtonEvent;

constexpr void __set_didPressPracticeButtonEvent(System::Action_2<GlobalNamespace::LevelSelectionNavigationController,GlobalNamespace::IBeatmapLevel> value) ;

constexpr System::Action_2<GlobalNamespace::LevelSelectionNavigationController,GlobalNamespace::IBeatmapLevel> __get_didPressPracticeButtonEvent() const;

 System::Action_2<GlobalNamespace::LevelSelectionNavigationController,GlobalNamespace::IDifficultyBeatmap> __declspec(property(get=__get_didChangeDifficultyBeatmapEvent, put=__set_didChangeDifficultyBeatmapEvent))  didChangeDifficultyBeatmapEvent;

constexpr void __set_didChangeDifficultyBeatmapEvent(System::Action_2<GlobalNamespace::LevelSelectionNavigationController,GlobalNamespace::IDifficultyBeatmap> value) ;

constexpr System::Action_2<GlobalNamespace::LevelSelectionNavigationController,GlobalNamespace::IDifficultyBeatmap> __get_didChangeDifficultyBeatmapEvent() const;

 bool __declspec(property(get=__get__hidePacksIfOneOrNone, put=__set__hidePacksIfOneOrNone))  _hidePacksIfOneOrNone;

constexpr void __set__hidePacksIfOneOrNone(bool value) ;

constexpr bool __get__hidePacksIfOneOrNone() const;

 bool __declspec(property(get=__get__hidePracticeButton, put=__set__hidePracticeButton))  _hidePracticeButton;

constexpr void __set__hidePracticeButton(bool value) ;

constexpr bool __get__hidePracticeButton() const;

 ::StringW __declspec(property(get=__get__actionButtonText, put=__set__actionButtonText))  _actionButtonText;

constexpr void __set__actionButtonText(::StringW value) ;

constexpr ::StringW __get__actionButtonText() const;

 GlobalNamespace::BeatmapDifficultyMask __declspec(property(get=__get__allowedBeatmapDifficultyMask, put=__set__allowedBeatmapDifficultyMask))  _allowedBeatmapDifficultyMask;

constexpr void __set__allowedBeatmapDifficultyMask(GlobalNamespace::BeatmapDifficultyMask value) ;

constexpr GlobalNamespace::BeatmapDifficultyMask __get__allowedBeatmapDifficultyMask() const;

 ::ArrayW<GlobalNamespace::BeatmapCharacteristicSO> __declspec(property(get=__get__notAllowedCharacteristics, put=__set__notAllowedCharacteristics))  _notAllowedCharacteristics;

constexpr void __set__notAllowedCharacteristics(::ArrayW<GlobalNamespace::BeatmapCharacteristicSO> value) ;

constexpr ::ArrayW<GlobalNamespace::BeatmapCharacteristicSO> __get__notAllowedCharacteristics() const;


// Properties

 GlobalNamespace::IDifficultyBeatmap __declspec(property(get=get_selectedDifficultyBeatmap))  selectedDifficultyBeatmap;

 GlobalNamespace::IPreviewBeatmapLevel __declspec(property(get=get_selectedBeatmapLevel))  selectedBeatmapLevel;

 GlobalNamespace::GlobalNamespace__SelectLevelCategoryViewController__LevelCategory __declspec(property(get=get_selectedLevelCategory))  selectedLevelCategory;

 GlobalNamespace::IBeatmapLevelPack __declspec(property(get=get_selectedBeatmapLevelPack))  selectedBeatmapLevelPack;


// Methods

/// @brief Method add_didChangeLevelDetailContentEvent addr 0x216fc74 size 0xb0 virtual false final false
 void add_didChangeLevelDetailContentEvent(System::Action_2<GlobalNamespace::LevelSelectionNavigationController,GlobalNamespace::GlobalNamespace__StandardLevelDetailViewController__ContentType> value) ;

/// @brief Method remove_didChangeLevelDetailContentEvent addr 0x216fd24 size 0xb0 virtual false final false
 void remove_didChangeLevelDetailContentEvent(System::Action_2<GlobalNamespace::LevelSelectionNavigationController,GlobalNamespace::GlobalNamespace__StandardLevelDetailViewController__ContentType> value) ;

/// @brief Method add_didSelectLevelPackEvent addr 0x216fdd4 size 0xb0 virtual false final false
 void add_didSelectLevelPackEvent(System::Action_2<GlobalNamespace::LevelSelectionNavigationController,GlobalNamespace::IBeatmapLevelPack> value) ;

/// @brief Method remove_didSelectLevelPackEvent addr 0x216fe84 size 0xb0 virtual false final false
 void remove_didSelectLevelPackEvent(System::Action_2<GlobalNamespace::LevelSelectionNavigationController,GlobalNamespace::IBeatmapLevelPack> value) ;

/// @brief Method add_didPressActionButtonEvent addr 0x216ff34 size 0xb0 virtual false final false
 void add_didPressActionButtonEvent(System::Action_1<GlobalNamespace::LevelSelectionNavigationController> value) ;

/// @brief Method remove_didPressActionButtonEvent addr 0x216ffe4 size 0xb0 virtual false final false
 void remove_didPressActionButtonEvent(System::Action_1<GlobalNamespace::LevelSelectionNavigationController> value) ;

/// @brief Method add_didPressPracticeButtonEvent addr 0x2170094 size 0xb0 virtual false final false
 void add_didPressPracticeButtonEvent(System::Action_2<GlobalNamespace::LevelSelectionNavigationController,GlobalNamespace::IBeatmapLevel> value) ;

/// @brief Method remove_didPressPracticeButtonEvent addr 0x2170144 size 0xb0 virtual false final false
 void remove_didPressPracticeButtonEvent(System::Action_2<GlobalNamespace::LevelSelectionNavigationController,GlobalNamespace::IBeatmapLevel> value) ;

/// @brief Method add_didChangeDifficultyBeatmapEvent addr 0x21701f4 size 0xb0 virtual false final false
 void add_didChangeDifficultyBeatmapEvent(System::Action_2<GlobalNamespace::LevelSelectionNavigationController,GlobalNamespace::IDifficultyBeatmap> value) ;

/// @brief Method remove_didChangeDifficultyBeatmapEvent addr 0x21702a4 size 0xb0 virtual false final false
 void remove_didChangeDifficultyBeatmapEvent(System::Action_2<GlobalNamespace::LevelSelectionNavigationController,GlobalNamespace::IDifficultyBeatmap> value) ;

/// @brief Method get_selectedDifficultyBeatmap addr 0x2170354 size 0x18 virtual false final false
 GlobalNamespace::IDifficultyBeatmap get_selectedDifficultyBeatmap() ;

/// @brief Method get_selectedBeatmapLevel addr 0x217036c size 0x24 virtual false final false
 GlobalNamespace::IPreviewBeatmapLevel get_selectedBeatmapLevel() ;

/// @brief Method get_selectedLevelCategory addr 0x2170390 size 0x20 virtual false final false
 GlobalNamespace::GlobalNamespace__SelectLevelCategoryViewController__LevelCategory get_selectedLevelCategory() ;

/// @brief Method get_selectedBeatmapLevelPack addr 0x21703b0 size 0x18 virtual false final false
 GlobalNamespace::IBeatmapLevelPack get_selectedBeatmapLevelPack() ;

/// @brief Method Setup addr 0x21703c8 size 0x6c virtual false final false
 void Setup(GlobalNamespace::SongPackMask songPackMask, GlobalNamespace::BeatmapDifficultyMask allowedBeatmapDifficultyMask, ::ArrayW<GlobalNamespace::BeatmapCharacteristicSO> notAllowedCharacteristics, bool hidePacksIfOneOrNone, bool hidePracticeButton, ::StringW actionButtonText, GlobalNamespace::IBeatmapLevelPack levelPackToBeSelectedAfterPresent, GlobalNamespace::GlobalNamespace__SelectLevelCategoryViewController__LevelCategory startLevelCategory, GlobalNamespace::IPreviewBeatmapLevel beatmapLevelToBeSelectedAfterPresent, bool enableCustomLevels) ;

/// @brief Method DidActivate addr 0x2170434 size 0x4c0 virtual true final false
 void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling) ;

/// @brief Method DidDeactivate addr 0x21708f4 size 0x428 virtual true final false
 void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling) ;

/// @brief Method HandleLevelCollectionNavigationControllerDidChangeLevelDetailContent addr 0x2170d1c size 0x20 virtual false final false
 void HandleLevelCollectionNavigationControllerDidChangeLevelDetailContent(GlobalNamespace::LevelCollectionNavigationController viewController, GlobalNamespace::GlobalNamespace__StandardLevelDetailViewController__ContentType contentType) ;

/// @brief Method HandleLevelCollectionNavigationControllerDidPressPracticeButton addr 0x2170d3c size 0x20 virtual false final false
 void HandleLevelCollectionNavigationControllerDidPressPracticeButton(GlobalNamespace::LevelCollectionNavigationController arg1, GlobalNamespace::IBeatmapLevel beatmapLevel) ;

/// @brief Method HandleLevelCollectionNavigationControllerDidPressActionButton addr 0x2170d5c size 0x20 virtual false final false
 void HandleLevelCollectionNavigationControllerDidPressActionButton(GlobalNamespace::LevelCollectionNavigationController viewController) ;

/// @brief Method HandleLevelCollectionNavigationControllerDidSelectPack addr 0x2170d7c size 0x20 virtual false final false
 void HandleLevelCollectionNavigationControllerDidSelectPack(GlobalNamespace::LevelCollectionNavigationController viewController, GlobalNamespace::IBeatmapLevelPack beatmapLevelPack) ;

/// @brief Method HandleLevelCollectionNavigationControllerDidChangeDifficultyBeatmap addr 0x2170d9c size 0x20 virtual false final false
 void HandleLevelCollectionNavigationControllerDidChangeDifficultyBeatmap(GlobalNamespace::LevelCollectionNavigationController viewController, GlobalNamespace::IDifficultyBeatmap difficultyBeatmap) ;

/// @brief Method HandleLevelCollectionNavigationControllerDidPressOpenPackButton addr 0x2170dbc size 0x1c virtual false final false
 void HandleLevelCollectionNavigationControllerDidPressOpenPackButton(GlobalNamespace::LevelCollectionNavigationController viewController, GlobalNamespace::IBeatmapLevelPack beatmapLevelPack) ;

/// @brief Method RefreshDetail addr 0x2170dd8 size 0x18 virtual false final false
 void RefreshDetail() ;

/// @brief Method ClearSelected addr 0x2170df0 size 0x18 virtual false final false
 void ClearSelected() ;

/// @brief Method HandleLevelFilteringNavigationControllerDidOpenBeatmapLevelCollections addr 0x2170e08 size 0x1c virtual false final false
 void HandleLevelFilteringNavigationControllerDidOpenBeatmapLevelCollections() ;

/// @brief Method HandleLevelFilteringNavigationControllerDidCloseBeatmapLevelCollections addr 0x2170e24 size 0x1c virtual false final false
 void HandleLevelFilteringNavigationControllerDidCloseBeatmapLevelCollections() ;

/// @brief Method LevelFilteringNavigationControllerDidSelectAnnotatedBeatmapLevelCollection addr 0x2170e40 size 0xd8 virtual false final false
 void LevelFilteringNavigationControllerDidSelectAnnotatedBeatmapLevelCollection(GlobalNamespace::LevelFilteringNavigationController controller, GlobalNamespace::IAnnotatedBeatmapLevelCollection annotatedBeatmapLevelCollection, UnityEngine::GameObject noDataInfoPrefab, GlobalNamespace::BeatmapCharacteristicSO preferredBeatmapCharacteristic) ;

/// @brief Method LevelFilteringNavigationControllerDidStartLoading addr 0x2170f18 size 0x18 virtual false final false
 void LevelFilteringNavigationControllerDidStartLoading(GlobalNamespace::LevelFilteringNavigationController controller) ;

/// @brief Method LevelFilteringNavigationControllerDidPressAllSongs addr 0x2170f30 size 0x18 virtual false final false
 void LevelFilteringNavigationControllerDidPressAllSongs(GlobalNamespace::LevelFilteringNavigationController controller) ;

// Ctor Parameters []
explicit LevelSelectionNavigationController() ;

/// @brief Method .ctor addr 0x2170f48 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::LevelSelectionNavigationController);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LevelSelectionNavigationController, "", "LevelSelectionNavigationController");
