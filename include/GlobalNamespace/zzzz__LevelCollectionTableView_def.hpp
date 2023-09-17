#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
namespace {
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyList_1;
}
namespace System {
template<typename T>
class Action_1;
}
namespace GlobalNamespace {
class LevelListTableCell;
}
namespace GlobalNamespace {
class BeatmapLevelsPromoDataSO;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace GlobalNamespace {
class LevelPackHeaderTableCell;
}
namespace HMUI {
class ____HMUI__TableView__IDataSource;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace HMUI {
class AlphabetScrollbar;
}
namespace GlobalNamespace {
class AdditionalContentModel;
}
namespace GlobalNamespace {
class IPreviewBeatmapLevel;
}
namespace UnityEngine {
class Sprite;
}
namespace HMUI {
class TableCell;
}
namespace HMUI {
class TableView;
}
// Forward declare root types
namespace GlobalNamespace {
class LevelCollectionTableView;
}
// Type: ::LevelCollectionTableView
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5879))
// CS Name: LevelCollectionTableView
class CORDL_TYPE LevelCollectionTableView : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Convert operator to ::HMUI::____HMUI__TableView__IDataSource
constexpr operator  ::HMUI::____HMUI__TableView__IDataSource() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xb0};

virtual ~LevelCollectionTableView() = default;

// Ctor Parameters [CppParam { name: "", ty: "LevelCollectionTableView", modifiers: " const&", def_value: None }]
constexpr LevelCollectionTableView(LevelCollectionTableView const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LevelCollectionTableView", modifiers: "&&", def_value: None }]
constexpr LevelCollectionTableView(LevelCollectionTableView&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LevelCollectionTableView(void* ptr) noexcept : ::UnityEngine::MonoBehaviour(ptr) {
}


  constexpr LevelCollectionTableView& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LevelCollectionTableView& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LevelCollectionTableView& operator=(LevelCollectionTableView&& o) noexcept = default;
  constexpr LevelCollectionTableView& operator=(LevelCollectionTableView const& o) noexcept = default;
                


// Fields

 ::HMUI::TableView __declspec(property(get=__get__tableView, put=__set__tableView))  _tableView;

constexpr void __set__tableView(::HMUI::TableView value) ;

constexpr ::HMUI::TableView __get__tableView() const;

 ::HMUI::AlphabetScrollbar __declspec(property(get=__get__alphabetScrollbar, put=__set__alphabetScrollbar))  _alphabetScrollbar;

constexpr void __set__alphabetScrollbar(::HMUI::AlphabetScrollbar value) ;

constexpr ::HMUI::AlphabetScrollbar __get__alphabetScrollbar() const;

 ::GlobalNamespace::LevelListTableCell __declspec(property(get=__get__levelCellPrefab, put=__set__levelCellPrefab))  _levelCellPrefab;

constexpr void __set__levelCellPrefab(::GlobalNamespace::LevelListTableCell value) ;

constexpr ::GlobalNamespace::LevelListTableCell __get__levelCellPrefab() const;

 ::StringW __declspec(property(get=__get__levelCellsReuseIdentifier, put=__set__levelCellsReuseIdentifier))  _levelCellsReuseIdentifier;

constexpr void __set__levelCellsReuseIdentifier(::StringW value) ;

constexpr ::StringW __get__levelCellsReuseIdentifier() const;

 ::GlobalNamespace::LevelPackHeaderTableCell __declspec(property(get=__get__packCellPrefab, put=__set__packCellPrefab))  _packCellPrefab;

constexpr void __set__packCellPrefab(::GlobalNamespace::LevelPackHeaderTableCell value) ;

constexpr ::GlobalNamespace::LevelPackHeaderTableCell __get__packCellPrefab() const;

 ::StringW __declspec(property(get=__get__packCellsReuseIdentifier, put=__set__packCellsReuseIdentifier))  _packCellsReuseIdentifier;

constexpr void __set__packCellsReuseIdentifier(::StringW value) ;

constexpr ::StringW __get__packCellsReuseIdentifier() const;

 float_t __declspec(property(get=__get__cellHeight, put=__set__cellHeight))  _cellHeight;

constexpr void __set__cellHeight(float_t value) ;

constexpr float_t __get__cellHeight() const;

 int32_t __declspec(property(get=__get__showAlphabetScrollbarLevelCountThreshold, put=__set__showAlphabetScrollbarLevelCountThreshold))  _showAlphabetScrollbarLevelCountThreshold;

constexpr void __set__showAlphabetScrollbarLevelCountThreshold(int32_t value) ;

constexpr int32_t __get__showAlphabetScrollbarLevelCountThreshold() const;

 ::GlobalNamespace::AdditionalContentModel __declspec(property(get=__get__additionalContentModel, put=__set__additionalContentModel))  _additionalContentModel;

constexpr void __set__additionalContentModel(::GlobalNamespace::AdditionalContentModel value) ;

constexpr ::GlobalNamespace::AdditionalContentModel __get__additionalContentModel() const;

 ::GlobalNamespace::BeatmapLevelsPromoDataSO __declspec(property(get=__get__beatmapLevelsPromoData, put=__set__beatmapLevelsPromoData))  _beatmapLevelsPromoData;

constexpr void __set__beatmapLevelsPromoData(::GlobalNamespace::BeatmapLevelsPromoDataSO value) ;

constexpr ::GlobalNamespace::BeatmapLevelsPromoDataSO __get__beatmapLevelsPromoData() const;

 ::System::Action_2<::GlobalNamespace::LevelCollectionTableView,::GlobalNamespace::IPreviewBeatmapLevel> __declspec(property(get=__get_didSelectLevelEvent, put=__set_didSelectLevelEvent))  didSelectLevelEvent;

constexpr void __set_didSelectLevelEvent(::System::Action_2<::GlobalNamespace::LevelCollectionTableView,::GlobalNamespace::IPreviewBeatmapLevel> value) ;

constexpr ::System::Action_2<::GlobalNamespace::LevelCollectionTableView,::GlobalNamespace::IPreviewBeatmapLevel> __get_didSelectLevelEvent() const;

 ::System::Action_1<::GlobalNamespace::LevelCollectionTableView> __declspec(property(get=__get_didSelectHeaderEvent, put=__set_didSelectHeaderEvent))  didSelectHeaderEvent;

constexpr void __set_didSelectHeaderEvent(::System::Action_1<::GlobalNamespace::LevelCollectionTableView> value) ;

constexpr ::System::Action_1<::GlobalNamespace::LevelCollectionTableView> __get_didSelectHeaderEvent() const;

 bool __declspec(property(get=__get__isInitialized, put=__set__isInitialized))  _isInitialized;

constexpr void __set__isInitialized(bool value) ;

constexpr bool __get__isInitialized() const;

 ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IPreviewBeatmapLevel> __declspec(property(get=__get__previewBeatmapLevels, put=__set__previewBeatmapLevels))  _previewBeatmapLevels;

constexpr void __set__previewBeatmapLevels(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IPreviewBeatmapLevel> value) ;

constexpr ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IPreviewBeatmapLevel> __get__previewBeatmapLevels() const;

 ::UnityEngine::Sprite __declspec(property(get=__get__headerSprite, put=__set__headerSprite))  _headerSprite;

constexpr void __set__headerSprite(::UnityEngine::Sprite value) ;

constexpr ::UnityEngine::Sprite __get__headerSprite() const;

 ::StringW __declspec(property(get=__get__headerText, put=__set__headerText))  _headerText;

constexpr void __set__headerText(::StringW value) ;

constexpr ::StringW __get__headerText() const;

 bool __declspec(property(get=__get__showLevelPackHeader, put=__set__showLevelPackHeader))  _showLevelPackHeader;

constexpr void __set__showLevelPackHeader(bool value) ;

constexpr bool __get__showLevelPackHeader() const;

 ::System::Collections::Generic::HashSet_1<::StringW> __declspec(property(get=__get__favoriteLevelIds, put=__set__favoriteLevelIds))  _favoriteLevelIds;

constexpr void __set__favoriteLevelIds(::System::Collections::Generic::HashSet_1<::StringW> value) ;

constexpr ::System::Collections::Generic::HashSet_1<::StringW> __get__favoriteLevelIds() const;

 int32_t __declspec(property(get=__get__selectedRow, put=__set__selectedRow))  _selectedRow;

constexpr void __set__selectedRow(int32_t value) ;

constexpr int32_t __get__selectedRow() const;

 ::GlobalNamespace::IPreviewBeatmapLevel __declspec(property(get=__get__selectedPreviewBeatmapLevel, put=__set__selectedPreviewBeatmapLevel))  _selectedPreviewBeatmapLevel;

constexpr void __set__selectedPreviewBeatmapLevel(::GlobalNamespace::IPreviewBeatmapLevel value) ;

constexpr ::GlobalNamespace::IPreviewBeatmapLevel __get__selectedPreviewBeatmapLevel() const;


// Methods

/// @brief Method add_didSelectLevelEvent addr 0x2189f80 size 0xb0 virtual false final false
 void add_didSelectLevelEvent(::System::Action_2<::GlobalNamespace::LevelCollectionTableView,::GlobalNamespace::IPreviewBeatmapLevel> value) ;

/// @brief Method remove_didSelectLevelEvent addr 0x218a030 size 0xb0 virtual false final false
 void remove_didSelectLevelEvent(::System::Action_2<::GlobalNamespace::LevelCollectionTableView,::GlobalNamespace::IPreviewBeatmapLevel> value) ;

/// @brief Method add_didSelectHeaderEvent addr 0x218a0e0 size 0xb0 virtual false final false
 void add_didSelectHeaderEvent(::System::Action_1<::GlobalNamespace::LevelCollectionTableView> value) ;

/// @brief Method remove_didSelectHeaderEvent addr 0x218a190 size 0xb0 virtual false final false
 void remove_didSelectHeaderEvent(::System::Action_1<::GlobalNamespace::LevelCollectionTableView> value) ;

/// @brief Method Init addr 0x218a240 size 0x40 virtual false final false
 void Init(::StringW headerText, ::UnityEngine::Sprite headerSprite) ;

/// @brief Method Init addr 0x218a280 size 0xc0 virtual false final false
 void Init() ;

/// @brief Method SetData addr 0x218a340 size 0x238 virtual false final false
 void SetData(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IPreviewBeatmapLevel> previewBeatmapLevels, ::System::Collections::Generic::HashSet_1<::StringW> favoriteLevelIds, bool beatmapLevelsAreSorted) ;

/// @brief Method RefreshFavorites addr 0x218a578 size 0x140 virtual false final false
 void RefreshFavorites(::System::Collections::Generic::HashSet_1<::StringW> favoriteLevelIds) ;

/// @brief Method OnEnable addr 0x218a6b8 size 0x8c virtual false final false
 void OnEnable() ;

/// @brief Method OnDisable addr 0x218a744 size 0x8c virtual false final false
 void OnDisable() ;

/// @brief Method OnDestroy addr 0x218a7d0 size 0xd4 virtual false final false
 void OnDestroy() ;

/// @brief Method CellSize addr 0x218a8a4 size 0x8 virtual true final true
 float_t CellSize() ;

/// @brief Method NumberOfCells addr 0x218a8ac size 0xb0 virtual true final true
 int32_t NumberOfCells() ;

/// @brief Method CellForIdx addr 0x218a95c size 0x3f8 virtual true final true
 ::HMUI::TableCell CellForIdx(::HMUI::TableView tableView, int32_t row) ;

/// @brief Method HandleDidSelectRowEvent addr 0x218b144 size 0x114 virtual false final false
 void HandleDidSelectRowEvent(::HMUI::TableView tableView, int32_t row) ;

/// @brief Method HandleAdditionalContentModelDidInvalidateData addr 0x218b258 size 0xa4 virtual false final false
 void HandleAdditionalContentModelDidInvalidateData() ;

/// @brief Method CancelAsyncOperations addr 0x218b2fc size 0x37c virtual false final false
 void CancelAsyncOperations() ;

/// @brief Method RefreshLevelsAvailability addr 0x218b678 size 0x548 virtual false final false
 void RefreshLevelsAvailability() ;

/// @brief Method SelectLevelPackHeaderCell addr 0x218bbc0 size 0x2c virtual false final false
 void SelectLevelPackHeaderCell() ;

/// @brief Method ClearSelection addr 0x218bbec size 0x30 virtual false final false
 void ClearSelection() ;

/// @brief Method SelectLevel addr 0x218bc1c size 0x288 virtual false final false
 void SelectLevel(::GlobalNamespace::IPreviewBeatmapLevel beatmapLevel) ;

// Ctor Parameters []
explicit LevelCollectionTableView() ;

/// @brief Method .ctor addr 0x218bea4 size 0x8c virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::LevelCollectionTableView);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LevelCollectionTableView, "", "LevelCollectionTableView");
