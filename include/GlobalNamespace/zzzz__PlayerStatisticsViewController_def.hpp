#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "HMUI/zzzz__ViewController_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace {
namespace GlobalNamespace {
class ____GlobalNamespace__PlayerAllOverallStatsData__PlayerOverallStatsData;
}
namespace GlobalNamespace {
class PlayerDataModel;
}
namespace GlobalNamespace {
class AppStaticSettingsSO;
}
namespace HMUI {
class SegmentedControl;
}
namespace TMPro {
class TextMeshProUGUI;
}
namespace HMUI {
class TextSegmentedControl;
}
namespace System {
template<typename TResult>
class Func_1;
}
// Forward declare root types
namespace GlobalNamespace {
class PlayerStatisticsViewController;
}
namespace GlobalNamespace {
struct ____GlobalNamespace__PlayerStatisticsViewController__StatsScopeData;
}
// Type: ::StatsScopeData
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5825))
// CS Name: PlayerStatisticsViewController::StatsScopeData
struct CORDL_TYPE ____GlobalNamespace__PlayerStatisticsViewController__StatsScopeData : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "_text_k__BackingField", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "_playerOverallStatsDataFunc_k__BackingField", ty: "::System::Func_1<::GlobalNamespace::____GlobalNamespace__PlayerAllOverallStatsData__PlayerOverallStatsData>", modifiers: "", def_value: None }]
constexpr ____GlobalNamespace__PlayerStatisticsViewController__StatsScopeData(::StringW _text_k__BackingField, ::System::Func_1<::GlobalNamespace::____GlobalNamespace__PlayerAllOverallStatsData__PlayerOverallStatsData> _playerOverallStatsDataFunc_k__BackingField) noexcept;


                    constexpr ____GlobalNamespace__PlayerStatisticsViewController__StatsScopeData(____GlobalNamespace__PlayerStatisticsViewController__StatsScopeData const&) = default;
                    constexpr ____GlobalNamespace__PlayerStatisticsViewController__StatsScopeData(____GlobalNamespace__PlayerStatisticsViewController__StatsScopeData&&) = default;
                    constexpr ____GlobalNamespace__PlayerStatisticsViewController__StatsScopeData& operator=(____GlobalNamespace__PlayerStatisticsViewController__StatsScopeData const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____GlobalNamespace__PlayerStatisticsViewController__StatsScopeData& operator=(____GlobalNamespace__PlayerStatisticsViewController__StatsScopeData&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__PlayerStatisticsViewController__StatsScopeData(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::StringW __declspec(property(get=__get__text_k__BackingField, put=__set__text_k__BackingField))  _text_k__BackingField;

constexpr void __set__text_k__BackingField(::StringW value) ;

constexpr ::StringW __get__text_k__BackingField() const;

 ::System::Func_1<::GlobalNamespace::____GlobalNamespace__PlayerAllOverallStatsData__PlayerOverallStatsData> __declspec(property(get=__get__playerOverallStatsDataFunc_k__BackingField, put=__set__playerOverallStatsDataFunc_k__BackingField))  _playerOverallStatsDataFunc_k__BackingField;

constexpr void __set__playerOverallStatsDataFunc_k__BackingField(::System::Func_1<::GlobalNamespace::____GlobalNamespace__PlayerAllOverallStatsData__PlayerOverallStatsData> value) ;

constexpr ::System::Func_1<::GlobalNamespace::____GlobalNamespace__PlayerAllOverallStatsData__PlayerOverallStatsData> __get__playerOverallStatsDataFunc_k__BackingField() const;


// Properties

 ::StringW __declspec(property(get=get_text, put=set_text))  text;

 ::System::Func_1<::GlobalNamespace::____GlobalNamespace__PlayerAllOverallStatsData__PlayerOverallStatsData> __declspec(property(get=get_playerOverallStatsDataFunc, put=set_playerOverallStatsDataFunc))  playerOverallStatsDataFunc;


// Methods

/// @brief Method get_text addr 0x217dd70 size 0x8 virtual false final false
 ::StringW get_text() ;

/// @brief Method set_text addr 0x217dd78 size 0x8 virtual false final false
 void set_text(::StringW value) ;

/// @brief Method get_playerOverallStatsDataFunc addr 0x217dd80 size 0x8 virtual false final false
 ::System::Func_1<::GlobalNamespace::____GlobalNamespace__PlayerAllOverallStatsData__PlayerOverallStatsData> get_playerOverallStatsDataFunc() ;

/// @brief Method set_playerOverallStatsDataFunc addr 0x217dd88 size 0x8 virtual false final false
 void set_playerOverallStatsDataFunc(::System::Func_1<::GlobalNamespace::____GlobalNamespace__PlayerAllOverallStatsData__PlayerOverallStatsData> value) ;

/// @brief Method .ctor addr 0x217d7ac size 0x8 virtual false final false
 void _ctor(::StringW text, ::System::Func_1<::GlobalNamespace::____GlobalNamespace__PlayerAllOverallStatsData__PlayerOverallStatsData> playerOverallStatsDataFunc) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::PlayerStatisticsViewController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13656))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5826))
// CS Name: PlayerStatisticsViewController
class CORDL_TYPE PlayerStatisticsViewController : public ::HMUI::ViewController {
public:
// Declarations
using StatsScopeData = ::GlobalNamespace::____GlobalNamespace__PlayerStatisticsViewController__StatsScopeData;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xe0};

virtual ~PlayerStatisticsViewController() = default;

// Ctor Parameters [CppParam { name: "", ty: "PlayerStatisticsViewController", modifiers: " const&", def_value: None }]
constexpr PlayerStatisticsViewController(PlayerStatisticsViewController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PlayerStatisticsViewController", modifiers: "&&", def_value: None }]
constexpr PlayerStatisticsViewController(PlayerStatisticsViewController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PlayerStatisticsViewController(void* ptr) noexcept : ::HMUI::ViewController(ptr) {
}


  constexpr PlayerStatisticsViewController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PlayerStatisticsViewController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PlayerStatisticsViewController& operator=(PlayerStatisticsViewController&& o) noexcept = default;
  constexpr PlayerStatisticsViewController& operator=(PlayerStatisticsViewController const& o) noexcept = default;
                


// Fields

 ::HMUI::TextSegmentedControl __declspec(property(get=__get__statsScopeSegmentedControl, put=__set__statsScopeSegmentedControl))  _statsScopeSegmentedControl;

constexpr void __set__statsScopeSegmentedControl(::HMUI::TextSegmentedControl value) ;

constexpr ::HMUI::TextSegmentedControl __get__statsScopeSegmentedControl() const;

 ::TMPro::TextMeshProUGUI __declspec(property(get=__get__playedLevelsCountText, put=__set__playedLevelsCountText))  _playedLevelsCountText;

constexpr void __set__playedLevelsCountText(::TMPro::TextMeshProUGUI value) ;

constexpr ::TMPro::TextMeshProUGUI __get__playedLevelsCountText() const;

 ::TMPro::TextMeshProUGUI __declspec(property(get=__get__clearedLevelsCountText, put=__set__clearedLevelsCountText))  _clearedLevelsCountText;

constexpr void __set__clearedLevelsCountText(::TMPro::TextMeshProUGUI value) ;

constexpr ::TMPro::TextMeshProUGUI __get__clearedLevelsCountText() const;

 ::TMPro::TextMeshProUGUI __declspec(property(get=__get__failedLevelsCountText, put=__set__failedLevelsCountText))  _failedLevelsCountText;

constexpr void __set__failedLevelsCountText(::TMPro::TextMeshProUGUI value) ;

constexpr ::TMPro::TextMeshProUGUI __get__failedLevelsCountText() const;

 ::TMPro::TextMeshProUGUI __declspec(property(get=__get__timePlayedText, put=__set__timePlayedText))  _timePlayedText;

constexpr void __set__timePlayedText(::TMPro::TextMeshProUGUI value) ;

constexpr ::TMPro::TextMeshProUGUI __get__timePlayedText() const;

 ::TMPro::TextMeshProUGUI __declspec(property(get=__get__goodCutsCountText, put=__set__goodCutsCountText))  _goodCutsCountText;

constexpr void __set__goodCutsCountText(::TMPro::TextMeshProUGUI value) ;

constexpr ::TMPro::TextMeshProUGUI __get__goodCutsCountText() const;

 ::TMPro::TextMeshProUGUI __declspec(property(get=__get__badCutsCountCountText, put=__set__badCutsCountCountText))  _badCutsCountCountText;

constexpr void __set__badCutsCountCountText(::TMPro::TextMeshProUGUI value) ;

constexpr ::TMPro::TextMeshProUGUI __get__badCutsCountCountText() const;

 ::TMPro::TextMeshProUGUI __declspec(property(get=__get__missedCountText, put=__set__missedCountText))  _missedCountText;

constexpr void __set__missedCountText(::TMPro::TextMeshProUGUI value) ;

constexpr ::TMPro::TextMeshProUGUI __get__missedCountText() const;

 ::TMPro::TextMeshProUGUI __declspec(property(get=__get__totalScoreText, put=__set__totalScoreText))  _totalScoreText;

constexpr void __set__totalScoreText(::TMPro::TextMeshProUGUI value) ;

constexpr ::TMPro::TextMeshProUGUI __get__totalScoreText() const;

 ::TMPro::TextMeshProUGUI __declspec(property(get=__get__fullComboCountText, put=__set__fullComboCountText))  _fullComboCountText;

constexpr void __set__fullComboCountText(::TMPro::TextMeshProUGUI value) ;

constexpr ::TMPro::TextMeshProUGUI __get__fullComboCountText() const;

 ::TMPro::TextMeshProUGUI __declspec(property(get=__get__handDistanceTravelledText, put=__set__handDistanceTravelledText))  _handDistanceTravelledText;

constexpr void __set__handDistanceTravelledText(::TMPro::TextMeshProUGUI value) ;

constexpr ::TMPro::TextMeshProUGUI __get__handDistanceTravelledText() const;

 ::GlobalNamespace::PlayerDataModel __declspec(property(get=__get__playerDataModel, put=__set__playerDataModel))  _playerDataModel;

constexpr void __set__playerDataModel(::GlobalNamespace::PlayerDataModel value) ;

constexpr ::GlobalNamespace::PlayerDataModel __get__playerDataModel() const;

 ::GlobalNamespace::AppStaticSettingsSO __declspec(property(get=__get__appStaticSettings, put=__set__appStaticSettings))  _appStaticSettings;

constexpr void __set__appStaticSettings(::GlobalNamespace::AppStaticSettingsSO value) ;

constexpr ::GlobalNamespace::AppStaticSettingsSO __get__appStaticSettings() const;

 ::ArrayW<::GlobalNamespace::____GlobalNamespace__PlayerStatisticsViewController__StatsScopeData> __declspec(property(get=__get__statsScopeDatas, put=__set__statsScopeDatas))  _statsScopeDatas;

constexpr void __set__statsScopeDatas(::ArrayW<::GlobalNamespace::____GlobalNamespace__PlayerStatisticsViewController__StatsScopeData> value) ;

constexpr ::ArrayW<::GlobalNamespace::____GlobalNamespace__PlayerStatisticsViewController__StatsScopeData> __get__statsScopeDatas() const;


// Methods

/// @brief Method DidActivate addr 0x217d1bc size 0x5f0 virtual true final false
 void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling) ;

/// @brief Method DidDeactivate addr 0x217db9c size 0xa0 virtual true final false
 void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling) ;

/// @brief Method UpdateView addr 0x217d7b4 size 0x3e8 virtual false final false
 void UpdateView(::GlobalNamespace::____GlobalNamespace__PlayerAllOverallStatsData__PlayerOverallStatsData playerOverallStatsData) ;

/// @brief Method HandleStatsScopeSegmentedControlDidSelectCell addr 0x217dc3c size 0x50 virtual false final false
 void HandleStatsScopeSegmentedControlDidSelectCell(::HMUI::SegmentedControl segmentedControl, int32_t cellIdx) ;

// Ctor Parameters []
explicit PlayerStatisticsViewController() ;

/// @brief Method .ctor addr 0x217dc8c size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <DidActivate>b__15_1 addr 0x217dc94 size 0x2c virtual false final false
 ::GlobalNamespace::____GlobalNamespace__PlayerAllOverallStatsData__PlayerOverallStatsData _DidActivate_b__15_1() ;

/// @brief Method <DidActivate>b__15_2 addr 0x217dcc0 size 0x2c virtual false final false
 ::GlobalNamespace::____GlobalNamespace__PlayerAllOverallStatsData__PlayerOverallStatsData _DidActivate_b__15_2() ;

/// @brief Method <DidActivate>b__15_3 addr 0x217dcec size 0x2c virtual false final false
 ::GlobalNamespace::____GlobalNamespace__PlayerAllOverallStatsData__PlayerOverallStatsData _DidActivate_b__15_3() ;

/// @brief Method <DidActivate>b__15_4 addr 0x217dd18 size 0x2c virtual false final false
 ::GlobalNamespace::____GlobalNamespace__PlayerAllOverallStatsData__PlayerOverallStatsData _DidActivate_b__15_4() ;

/// @brief Method <DidActivate>b__15_0 addr 0x217dd44 size 0x2c virtual false final false
 ::GlobalNamespace::____GlobalNamespace__PlayerAllOverallStatsData__PlayerOverallStatsData _DidActivate_b__15_0() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::PlayerStatisticsViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlayerStatisticsViewController, "", "PlayerStatisticsViewController");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__PlayerStatisticsViewController__StatsScopeData, "", "PlayerStatisticsViewController/StatsScopeData");
