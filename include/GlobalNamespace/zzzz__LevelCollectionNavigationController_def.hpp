#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "HMUI/zzzz__NavigationController_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace HMUI {
class ViewController;
}
namespace GlobalNamespace {
struct GlobalNamespace__LevelCollectionNavigationController__AlphaAnimationType;
}
namespace GlobalNamespace {
class IBeatmapLevelPack;
}
namespace GlobalNamespace {
class LoadingControl;
}
namespace GlobalNamespace {
class BeatmapCharacteristicSO;
}
namespace UnityEngine {
class GameObject;
}
namespace GlobalNamespace {
class IBeatmapLevelCollection;
}
namespace GlobalNamespace {
class GlobalNamespace__LevelCollectionNavigationController____c__DisplayClass54_0;
}
namespace GlobalNamespace {
class IPreviewBeatmapLevel;
}
namespace GlobalNamespace {
class AppStaticSettingsSO;
}
namespace Tweening {
class FloatTween;
}
namespace GlobalNamespace {
class IAnnotatedBeatmapLevelCollection;
}
namespace GlobalNamespace {
struct BeatmapDifficultyMask;
}
namespace GlobalNamespace {
class LevelCollectionViewController;
}
namespace GlobalNamespace {
class LevelPackDetailViewController;
}
namespace System {
template<typename T>
class Action_1;
}
namespace GlobalNamespace {
class IBeatmapLevel;
}
namespace GlobalNamespace {
class IDifficultyBeatmap;
}
namespace GlobalNamespace {
class StandardLevelDetailViewController;
}
namespace GlobalNamespace {
struct GlobalNamespace__StandardLevelDetailViewController__ContentType;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace Tweening {
class TimeTweeningManager;
}
// Forward declare root types
namespace GlobalNamespace {
struct GlobalNamespace__LevelCollectionNavigationController__AlphaAnimationType;
}
namespace GlobalNamespace {
class GlobalNamespace__LevelCollectionNavigationController____c__DisplayClass54_0;
}
namespace GlobalNamespace {
class LevelCollectionNavigationController;
}
// Type: ::AlphaAnimationType
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5750))
// CS Name: LevelCollectionNavigationController::AlphaAnimationType
struct CORDL_TYPE GlobalNamespace__LevelCollectionNavigationController__AlphaAnimationType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GlobalNamespace__LevelCollectionNavigationController__AlphaAnimationType(int32_t value__) noexcept;


                    constexpr GlobalNamespace__LevelCollectionNavigationController__AlphaAnimationType(GlobalNamespace__LevelCollectionNavigationController__AlphaAnimationType const&) = default;
                    constexpr GlobalNamespace__LevelCollectionNavigationController__AlphaAnimationType(GlobalNamespace__LevelCollectionNavigationController__AlphaAnimationType&&) = default;
                    constexpr GlobalNamespace__LevelCollectionNavigationController__AlphaAnimationType& operator=(GlobalNamespace__LevelCollectionNavigationController__AlphaAnimationType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__LevelCollectionNavigationController__AlphaAnimationType& operator=(GlobalNamespace__LevelCollectionNavigationController__AlphaAnimationType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__LevelCollectionNavigationController__AlphaAnimationType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __GlobalNamespace__LevelCollectionNavigationController__AlphaAnimationType_Unwrapped : int32_t {
__In = 0,
__Out = 1,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GlobalNamespace__LevelCollectionNavigationController__AlphaAnimationType_Unwrapped () const noexcept {
return std::bit_cast<__GlobalNamespace__LevelCollectionNavigationController__AlphaAnimationType_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field In offset 0
static GlobalNamespace::GlobalNamespace__LevelCollectionNavigationController__AlphaAnimationType const In;

/// @brief Field Out offset 0
static GlobalNamespace::GlobalNamespace__LevelCollectionNavigationController__AlphaAnimationType const Out;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<>c__DisplayClass54_0
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5751))
// CS Name: LevelCollectionNavigationController::<>c__DisplayClass54_0
class CORDL_TYPE GlobalNamespace__LevelCollectionNavigationController____c__DisplayClass54_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~GlobalNamespace__LevelCollectionNavigationController____c__DisplayClass54_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__LevelCollectionNavigationController____c__DisplayClass54_0", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__LevelCollectionNavigationController____c__DisplayClass54_0(GlobalNamespace__LevelCollectionNavigationController____c__DisplayClass54_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__LevelCollectionNavigationController____c__DisplayClass54_0", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__LevelCollectionNavigationController____c__DisplayClass54_0(GlobalNamespace__LevelCollectionNavigationController____c__DisplayClass54_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__LevelCollectionNavigationController____c__DisplayClass54_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__LevelCollectionNavigationController____c__DisplayClass54_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__LevelCollectionNavigationController____c__DisplayClass54_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__LevelCollectionNavigationController____c__DisplayClass54_0& operator=(GlobalNamespace__LevelCollectionNavigationController____c__DisplayClass54_0&& o) noexcept = default;
  constexpr GlobalNamespace__LevelCollectionNavigationController____c__DisplayClass54_0& operator=(GlobalNamespace__LevelCollectionNavigationController____c__DisplayClass54_0 const& o) noexcept = default;
                


// Fields

 GlobalNamespace::LevelCollectionNavigationController __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(GlobalNamespace::LevelCollectionNavigationController value) ;

constexpr GlobalNamespace::LevelCollectionNavigationController __get___4__this() const;

 HMUI::ViewController __declspec(property(get=__get_viewController, put=__set_viewController))  viewController;

constexpr void __set_viewController(HMUI::ViewController value) ;

constexpr HMUI::ViewController __get_viewController() const;


// Methods

static GlobalNamespace::GlobalNamespace__LevelCollectionNavigationController____c__DisplayClass54_0 New_ctor() ;

/// @brief Method .ctor addr 0x2165f0c size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <PresentDetailViewController>b__0 addr 0x21660bc size 0x2c virtual false final false
 void _PresentDetailViewController_b__0() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::LevelCollectionNavigationController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13639))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5752))
// CS Name: LevelCollectionNavigationController
class CORDL_TYPE LevelCollectionNavigationController : public HMUI::NavigationController {
public:
// Declarations
using __c__DisplayClass54_0 = GlobalNamespace::GlobalNamespace__LevelCollectionNavigationController____c__DisplayClass54_0;

using AlphaAnimationType = GlobalNamespace::GlobalNamespace__LevelCollectionNavigationController__AlphaAnimationType;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x138};

virtual ~LevelCollectionNavigationController() = default;

// Ctor Parameters [CppParam { name: "", ty: "LevelCollectionNavigationController", modifiers: " const&", def_value: None }]
constexpr LevelCollectionNavigationController(LevelCollectionNavigationController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LevelCollectionNavigationController", modifiers: "&&", def_value: None }]
constexpr LevelCollectionNavigationController(LevelCollectionNavigationController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LevelCollectionNavigationController(void* ptr) noexcept : HMUI::NavigationController(ptr) {
}


  constexpr LevelCollectionNavigationController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LevelCollectionNavigationController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LevelCollectionNavigationController& operator=(LevelCollectionNavigationController&& o) noexcept = default;
  constexpr LevelCollectionNavigationController& operator=(LevelCollectionNavigationController const& o) noexcept = default;
                


// Fields

 GlobalNamespace::LoadingControl __declspec(property(get=__get__loadingControl, put=__set__loadingControl))  _loadingControl;

constexpr void __set__loadingControl(GlobalNamespace::LoadingControl value) ;

constexpr GlobalNamespace::LoadingControl __get__loadingControl() const;

 GlobalNamespace::LevelCollectionViewController __declspec(property(get=__get__levelCollectionViewController, put=__set__levelCollectionViewController))  _levelCollectionViewController;

constexpr void __set__levelCollectionViewController(GlobalNamespace::LevelCollectionViewController value) ;

constexpr GlobalNamespace::LevelCollectionViewController __get__levelCollectionViewController() const;

 GlobalNamespace::LevelPackDetailViewController __declspec(property(get=__get__levelPackDetailViewController, put=__set__levelPackDetailViewController))  _levelPackDetailViewController;

constexpr void __set__levelPackDetailViewController(GlobalNamespace::LevelPackDetailViewController value) ;

constexpr GlobalNamespace::LevelPackDetailViewController __get__levelPackDetailViewController() const;

 GlobalNamespace::StandardLevelDetailViewController __declspec(property(get=__get__levelDetailViewController, put=__set__levelDetailViewController))  _levelDetailViewController;

constexpr void __set__levelDetailViewController(GlobalNamespace::StandardLevelDetailViewController value) ;

constexpr GlobalNamespace::StandardLevelDetailViewController __get__levelDetailViewController() const;

 GlobalNamespace::AppStaticSettingsSO __declspec(property(get=__get__appStaticSettings, put=__set__appStaticSettings))  _appStaticSettings;

constexpr void __set__appStaticSettings(GlobalNamespace::AppStaticSettingsSO value) ;

constexpr GlobalNamespace::AppStaticSettingsSO __get__appStaticSettings() const;

 Tweening::TimeTweeningManager __declspec(property(get=__get__timeTweeningManager, put=__set__timeTweeningManager))  _timeTweeningManager;

constexpr void __set__timeTweeningManager(Tweening::TimeTweeningManager value) ;

constexpr Tweening::TimeTweeningManager __get__timeTweeningManager() const;

 System::Action_2<GlobalNamespace::LevelCollectionNavigationController,GlobalNamespace::GlobalNamespace__StandardLevelDetailViewController__ContentType> __declspec(property(get=__get_didChangeLevelDetailContentEvent, put=__set_didChangeLevelDetailContentEvent))  didChangeLevelDetailContentEvent;

constexpr void __set_didChangeLevelDetailContentEvent(System::Action_2<GlobalNamespace::LevelCollectionNavigationController,GlobalNamespace::GlobalNamespace__StandardLevelDetailViewController__ContentType> value) ;

constexpr System::Action_2<GlobalNamespace::LevelCollectionNavigationController,GlobalNamespace::GlobalNamespace__StandardLevelDetailViewController__ContentType> __get_didChangeLevelDetailContentEvent() const;

 System::Action_2<GlobalNamespace::LevelCollectionNavigationController,GlobalNamespace::IBeatmapLevelPack> __declspec(property(get=__get_didSelectLevelPackEvent, put=__set_didSelectLevelPackEvent))  didSelectLevelPackEvent;

constexpr void __set_didSelectLevelPackEvent(System::Action_2<GlobalNamespace::LevelCollectionNavigationController,GlobalNamespace::IBeatmapLevelPack> value) ;

constexpr System::Action_2<GlobalNamespace::LevelCollectionNavigationController,GlobalNamespace::IBeatmapLevelPack> __get_didSelectLevelPackEvent() const;

 System::Action_1<GlobalNamespace::LevelCollectionNavigationController> __declspec(property(get=__get_didPressActionButtonEvent, put=__set_didPressActionButtonEvent))  didPressActionButtonEvent;

constexpr void __set_didPressActionButtonEvent(System::Action_1<GlobalNamespace::LevelCollectionNavigationController> value) ;

constexpr System::Action_1<GlobalNamespace::LevelCollectionNavigationController> __get_didPressActionButtonEvent() const;

 System::Action_2<GlobalNamespace::LevelCollectionNavigationController,GlobalNamespace::IBeatmapLevelPack> __declspec(property(get=__get_didPressOpenPackButtonEvent, put=__set_didPressOpenPackButtonEvent))  didPressOpenPackButtonEvent;

constexpr void __set_didPressOpenPackButtonEvent(System::Action_2<GlobalNamespace::LevelCollectionNavigationController,GlobalNamespace::IBeatmapLevelPack> value) ;

constexpr System::Action_2<GlobalNamespace::LevelCollectionNavigationController,GlobalNamespace::IBeatmapLevelPack> __get_didPressOpenPackButtonEvent() const;

 System::Action_2<GlobalNamespace::LevelCollectionNavigationController,GlobalNamespace::IBeatmapLevel> __declspec(property(get=__get_didPressPracticeButtonEvent, put=__set_didPressPracticeButtonEvent))  didPressPracticeButtonEvent;

constexpr void __set_didPressPracticeButtonEvent(System::Action_2<GlobalNamespace::LevelCollectionNavigationController,GlobalNamespace::IBeatmapLevel> value) ;

constexpr System::Action_2<GlobalNamespace::LevelCollectionNavigationController,GlobalNamespace::IBeatmapLevel> __get_didPressPracticeButtonEvent() const;

 System::Action_2<GlobalNamespace::LevelCollectionNavigationController,GlobalNamespace::IDifficultyBeatmap> __declspec(property(get=__get_didChangeDifficultyBeatmapEvent, put=__set_didChangeDifficultyBeatmapEvent))  didChangeDifficultyBeatmapEvent;

constexpr void __set_didChangeDifficultyBeatmapEvent(System::Action_2<GlobalNamespace::LevelCollectionNavigationController,GlobalNamespace::IDifficultyBeatmap> value) ;

constexpr System::Action_2<GlobalNamespace::LevelCollectionNavigationController,GlobalNamespace::IDifficultyBeatmap> __get_didChangeDifficultyBeatmapEvent() const;

 bool __declspec(property(get=__get__showPracticeButtonInDetailView, put=__set__showPracticeButtonInDetailView))  _showPracticeButtonInDetailView;

constexpr void __set__showPracticeButtonInDetailView(bool value) ;

constexpr bool __get__showPracticeButtonInDetailView() const;

 ::StringW __declspec(property(get=__get__actionButtonTextInDetailView, put=__set__actionButtonTextInDetailView))  _actionButtonTextInDetailView;

constexpr void __set__actionButtonTextInDetailView(::StringW value) ;

constexpr ::StringW __get__actionButtonTextInDetailView() const;

 GlobalNamespace::IBeatmapLevelPack __declspec(property(get=__get__levelPack, put=__set__levelPack))  _levelPack;

constexpr void __set__levelPack(GlobalNamespace::IBeatmapLevelPack value) ;

constexpr GlobalNamespace::IBeatmapLevelPack __get__levelPack() const;

 GlobalNamespace::BeatmapDifficultyMask __declspec(property(get=__get__allowedBeatmapDifficultyMask, put=__set__allowedBeatmapDifficultyMask))  _allowedBeatmapDifficultyMask;

constexpr void __set__allowedBeatmapDifficultyMask(GlobalNamespace::BeatmapDifficultyMask value) ;

constexpr GlobalNamespace::BeatmapDifficultyMask __get__allowedBeatmapDifficultyMask() const;

 GlobalNamespace::IPreviewBeatmapLevel __declspec(property(get=__get__beatmapLevelToBeSelectedAfterPresent, put=__set__beatmapLevelToBeSelectedAfterPresent))  _beatmapLevelToBeSelectedAfterPresent;

constexpr void __set__beatmapLevelToBeSelectedAfterPresent(GlobalNamespace::IPreviewBeatmapLevel value) ;

constexpr GlobalNamespace::IPreviewBeatmapLevel __get__beatmapLevelToBeSelectedAfterPresent() const;

 bool __declspec(property(get=__get__loading, put=__set__loading))  _loading;

constexpr void __set__loading(bool value) ;

constexpr bool __get__loading() const;

 bool __declspec(property(get=__get__hideDetailViewController, put=__set__hideDetailViewController))  _hideDetailViewController;

constexpr void __set__hideDetailViewController(bool value) ;

constexpr bool __get__hideDetailViewController() const;

 ::ArrayW<GlobalNamespace::BeatmapCharacteristicSO> __declspec(property(get=__get__notAllowedCharacteristics, put=__set__notAllowedCharacteristics))  _notAllowedCharacteristics;

constexpr void __set__notAllowedCharacteristics(::ArrayW<GlobalNamespace::BeatmapCharacteristicSO> value) ;

constexpr ::ArrayW<GlobalNamespace::BeatmapCharacteristicSO> __get__notAllowedCharacteristics() const;

 Tweening::FloatTween __declspec(property(get=__get__floatTween, put=__set__floatTween))  _floatTween;

constexpr void __set__floatTween(Tweening::FloatTween value) ;

constexpr Tweening::FloatTween __get__floatTween() const;


// Properties

 GlobalNamespace::IDifficultyBeatmap __declspec(property(get=get_selectedDifficultyBeatmap))  selectedDifficultyBeatmap;

 GlobalNamespace::IPreviewBeatmapLevel __declspec(property(get=get_selectedBeatmapLevel))  selectedBeatmapLevel;


// Methods

/// @brief Method add_didChangeLevelDetailContentEvent addr 0x2162d24 size 0xb0 virtual false final false
 void add_didChangeLevelDetailContentEvent(System::Action_2<GlobalNamespace::LevelCollectionNavigationController,GlobalNamespace::GlobalNamespace__StandardLevelDetailViewController__ContentType> value) ;

/// @brief Method remove_didChangeLevelDetailContentEvent addr 0x2162dd4 size 0xb0 virtual false final false
 void remove_didChangeLevelDetailContentEvent(System::Action_2<GlobalNamespace::LevelCollectionNavigationController,GlobalNamespace::GlobalNamespace__StandardLevelDetailViewController__ContentType> value) ;

/// @brief Method add_didSelectLevelPackEvent addr 0x2162e84 size 0xb0 virtual false final false
 void add_didSelectLevelPackEvent(System::Action_2<GlobalNamespace::LevelCollectionNavigationController,GlobalNamespace::IBeatmapLevelPack> value) ;

/// @brief Method remove_didSelectLevelPackEvent addr 0x2162f34 size 0xb0 virtual false final false
 void remove_didSelectLevelPackEvent(System::Action_2<GlobalNamespace::LevelCollectionNavigationController,GlobalNamespace::IBeatmapLevelPack> value) ;

/// @brief Method add_didPressActionButtonEvent addr 0x2162fe4 size 0xb0 virtual false final false
 void add_didPressActionButtonEvent(System::Action_1<GlobalNamespace::LevelCollectionNavigationController> value) ;

/// @brief Method remove_didPressActionButtonEvent addr 0x2163094 size 0xb0 virtual false final false
 void remove_didPressActionButtonEvent(System::Action_1<GlobalNamespace::LevelCollectionNavigationController> value) ;

/// @brief Method add_didPressOpenPackButtonEvent addr 0x2163144 size 0xb0 virtual false final false
 void add_didPressOpenPackButtonEvent(System::Action_2<GlobalNamespace::LevelCollectionNavigationController,GlobalNamespace::IBeatmapLevelPack> value) ;

/// @brief Method remove_didPressOpenPackButtonEvent addr 0x21631f4 size 0xb0 virtual false final false
 void remove_didPressOpenPackButtonEvent(System::Action_2<GlobalNamespace::LevelCollectionNavigationController,GlobalNamespace::IBeatmapLevelPack> value) ;

/// @brief Method add_didPressPracticeButtonEvent addr 0x21632a4 size 0xb0 virtual false final false
 void add_didPressPracticeButtonEvent(System::Action_2<GlobalNamespace::LevelCollectionNavigationController,GlobalNamespace::IBeatmapLevel> value) ;

/// @brief Method remove_didPressPracticeButtonEvent addr 0x2163354 size 0xb0 virtual false final false
 void remove_didPressPracticeButtonEvent(System::Action_2<GlobalNamespace::LevelCollectionNavigationController,GlobalNamespace::IBeatmapLevel> value) ;

/// @brief Method add_didChangeDifficultyBeatmapEvent addr 0x2163404 size 0xb0 virtual false final false
 void add_didChangeDifficultyBeatmapEvent(System::Action_2<GlobalNamespace::LevelCollectionNavigationController,GlobalNamespace::IDifficultyBeatmap> value) ;

/// @brief Method remove_didChangeDifficultyBeatmapEvent addr 0x21634b4 size 0xb0 virtual false final false
 void remove_didChangeDifficultyBeatmapEvent(System::Action_2<GlobalNamespace::LevelCollectionNavigationController,GlobalNamespace::IDifficultyBeatmap> value) ;

/// @brief Method get_selectedDifficultyBeatmap addr 0x2163564 size 0x24 virtual false final false
 GlobalNamespace::IDifficultyBeatmap get_selectedDifficultyBeatmap() ;

/// @brief Method get_selectedBeatmapLevel addr 0x21635a4 size 0x1c virtual false final false
 GlobalNamespace::IPreviewBeatmapLevel get_selectedBeatmapLevel() ;

/// @brief Method SetData addr 0x21635c0 size 0x190 virtual false final false
 void SetData(GlobalNamespace::IAnnotatedBeatmapLevelCollection annotatedBeatmapLevelCollection, bool showPackHeader, bool showPracticeButton, ::StringW actionButtonText, UnityEngine::GameObject noDataInfoPrefab, GlobalNamespace::BeatmapDifficultyMask allowedBeatmapDifficultyMask, ::ArrayW<GlobalNamespace::BeatmapCharacteristicSO> notAllowedCharacteristics) ;

/// @brief Method SelectLevel addr 0x216397c size 0x34 virtual false final false
 void SelectLevel(GlobalNamespace::IPreviewBeatmapLevel beatmapLevel) ;

/// @brief Method AnimateCanvasGroupAlpha addr 0x21639e4 size 0x1ec virtual false final false
 void AnimateCanvasGroupAlpha(GlobalNamespace::GlobalNamespace__LevelCollectionNavigationController__AlphaAnimationType animationType) ;

/// @brief Method DidActivate addr 0x2163bd0 size 0x4a8 virtual true final false
 void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling) ;

/// @brief Method DidDeactivate addr 0x21645f8 size 0x338 virtual true final false
 void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling) ;

/// @brief Method SetDataForPack addr 0x2163750 size 0x1ec virtual false final false
 void SetDataForPack(GlobalNamespace::IBeatmapLevelPack levelPack, bool showPackHeader, bool showPracticeButton, ::StringW actionButtonText) ;

/// @brief Method SetDataForLevelCollection addr 0x216393c size 0x40 virtual false final false
 void SetDataForLevelCollection(GlobalNamespace::IBeatmapLevelCollection beatmapLevelCollection, bool showPracticeButton, ::StringW actionButtonText, UnityEngine::GameObject noDataInfoPrefab) ;

/// @brief Method RefreshDetail addr 0x21656e4 size 0x24 virtual false final false
 void RefreshDetail() ;

/// @brief Method ClearSelected addr 0x2165724 size 0x24 virtual false final false
 void ClearSelected() ;

/// @brief Method ShowLoading addr 0x2165764 size 0xdc virtual false final false
 void ShowLoading() ;

/// @brief Method PresentViewControllersForPack addr 0x216560c size 0x78 virtual false final false
 void PresentViewControllersForPack() ;

/// @brief Method PresentViewControllersForLevelCollection addr 0x2165684 size 0x60 virtual false final false
 void PresentViewControllersForLevelCollection() ;

/// @brief Method HideLoading addr 0x2165840 size 0x24 virtual false final false
 void HideLoading() ;

/// @brief Method HideDetailViewController addr 0x2165a14 size 0x54 virtual false final false
 void HideDetailViewController() ;

/// @brief Method HandleLevelCollectionViewControllerDidSelectLevel addr 0x2165a68 size 0xa4 virtual false final false
 void HandleLevelCollectionViewControllerDidSelectLevel(GlobalNamespace::LevelCollectionViewController viewController, GlobalNamespace::IPreviewBeatmapLevel level) ;

/// @brief Method HandleLevelCollectionViewControllerDidSelectPack addr 0x2165eb0 size 0x5c virtual false final false
 void HandleLevelCollectionViewControllerDidSelectPack(GlobalNamespace::LevelCollectionViewController viewController) ;

/// @brief Method PresentDetailViewController addr 0x2165864 size 0x1b0 virtual false final false
 void PresentDetailViewController(HMUI::ViewController viewController, bool immediately) ;

/// @brief Method HandleLevelDetailViewControllerDidPressActionButton addr 0x2165f14 size 0x20 virtual false final false
 void HandleLevelDetailViewControllerDidPressActionButton(GlobalNamespace::StandardLevelDetailViewController viewController) ;

/// @brief Method HandleLevelDetailViewControllerDidPressPracticeButton addr 0x2165f34 size 0x20 virtual false final false
 void HandleLevelDetailViewControllerDidPressPracticeButton(GlobalNamespace::StandardLevelDetailViewController viewController, GlobalNamespace::IBeatmapLevel level) ;

/// @brief Method HandleLevelDetailViewControllerDidChangeDifficultyBeatmap addr 0x2165f54 size 0x20 virtual false final false
 void HandleLevelDetailViewControllerDidChangeDifficultyBeatmap(GlobalNamespace::StandardLevelDetailViewController viewController, GlobalNamespace::IDifficultyBeatmap beatmap) ;

/// @brief Method HandleLevelDetailViewControllerDidPresentContent addr 0x2165f74 size 0x20 virtual false final false
 void HandleLevelDetailViewControllerDidPresentContent(GlobalNamespace::StandardLevelDetailViewController viewController, GlobalNamespace::GlobalNamespace__StandardLevelDetailViewController__ContentType contentType) ;

/// @brief Method HandleLevelDetailViewControllerDidPressOpenLevelPackButton addr 0x2165f94 size 0x20 virtual false final false
 void HandleLevelDetailViewControllerDidPressOpenLevelPackButton(GlobalNamespace::StandardLevelDetailViewController viewController, GlobalNamespace::IBeatmapLevelPack levelPack) ;

/// @brief Method HandleLevelDetailViewControllerLevelFavoriteStatusDidChange addr 0x2165fb4 size 0x18 virtual false final false
 void HandleLevelDetailViewControllerLevelFavoriteStatusDidChange(GlobalNamespace::StandardLevelDetailViewController viewController, bool favoriteStatus) ;

static GlobalNamespace::LevelCollectionNavigationController New_ctor() ;

/// @brief Method .ctor addr 0x2165ffc size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <AnimateCanvasGroupAlpha>b__40_0 addr 0x2166004 size 0x30 virtual false final false
 void _AnimateCanvasGroupAlpha_b__40_0(float_t f) ;

/// @brief Method <AnimateCanvasGroupAlpha>b__40_1 addr 0x2166034 size 0x88 virtual false final false
 void _AnimateCanvasGroupAlpha_b__40_1() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__LevelCollectionNavigationController__AlphaAnimationType, "", "LevelCollectionNavigationController/AlphaAnimationType");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__LevelCollectionNavigationController____c__DisplayClass54_0);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__LevelCollectionNavigationController____c__DisplayClass54_0, "", "LevelCollectionNavigationController/<>c__DisplayClass54_0");
NEED_NO_BOX(GlobalNamespace::LevelCollectionNavigationController);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LevelCollectionNavigationController, "", "LevelCollectionNavigationController");
