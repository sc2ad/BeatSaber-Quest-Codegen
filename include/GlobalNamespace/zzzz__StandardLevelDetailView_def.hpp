#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace TMPro {
class TextMeshProUGUI;
}
namespace GlobalNamespace {
class BeatmapDifficultySegmentedControlController;
}
namespace GlobalNamespace {
class IDifficultyBeatmap;
}
namespace UnityEngine::UI {
class Toggle;
}
namespace GlobalNamespace {
class LevelParamsPanel;
}
namespace GlobalNamespace {
class IBeatmapLevel;
}
namespace GlobalNamespace {
class PlayerData;
}
namespace GlobalNamespace {
class LevelBar;
}
namespace GlobalNamespace {
class BeatmapCharacteristicSegmentedControlController;
}
namespace GlobalNamespace {
class BeatmapCharacteristicSO;
}
namespace GlobalNamespace {
struct BeatmapDifficulty;
}
namespace HMUI {
class ToggleBinder;
}
namespace UnityEngine::UI {
class Button;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace GlobalNamespace {
class IBeatmapDataBasicInfo;
}
namespace System::Runtime::CompilerServices {
struct AsyncVoidMethodBuilder;
}
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct TaskAwaiter_1;
}
// Forward declare root types
namespace GlobalNamespace {
class StandardLevelDetailView;
}
namespace GlobalNamespace {
struct GlobalNamespace__StandardLevelDetailView___SetContentForBeatmapDataAsync_d__34;
}
// Type: ::<SetContentForBeatmapDataAsync>d__34
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5903))
// CS Name: StandardLevelDetailView::<SetContentForBeatmapDataAsync>d__34
struct CORDL_TYPE GlobalNamespace__StandardLevelDetailView___SetContentForBeatmapDataAsync_d__34 : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr operator  System::Runtime::CompilerServices::IAsyncStateMachine() const;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "GlobalNamespace::StandardLevelDetailView", modifiers: "", def_value: None }, CppParam { name: "selectedDifficultyBeatmap", ty: "GlobalNamespace::IDifficultyBeatmap", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::IBeatmapDataBasicInfo>", modifiers: "", def_value: None }]
constexpr GlobalNamespace__StandardLevelDetailView___SetContentForBeatmapDataAsync_d__34(int32_t __1__state, System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, GlobalNamespace::StandardLevelDetailView __4__this, GlobalNamespace::IDifficultyBeatmap selectedDifficultyBeatmap, System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::IBeatmapDataBasicInfo> __u__1) noexcept;


                    constexpr GlobalNamespace__StandardLevelDetailView___SetContentForBeatmapDataAsync_d__34(GlobalNamespace__StandardLevelDetailView___SetContentForBeatmapDataAsync_d__34 const&) = default;
                    constexpr GlobalNamespace__StandardLevelDetailView___SetContentForBeatmapDataAsync_d__34(GlobalNamespace__StandardLevelDetailView___SetContentForBeatmapDataAsync_d__34&&) = default;
                    constexpr GlobalNamespace__StandardLevelDetailView___SetContentForBeatmapDataAsync_d__34& operator=(GlobalNamespace__StandardLevelDetailView___SetContentForBeatmapDataAsync_d__34 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__StandardLevelDetailView___SetContentForBeatmapDataAsync_d__34& operator=(GlobalNamespace__StandardLevelDetailView___SetContentForBeatmapDataAsync_d__34&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x40};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__StandardLevelDetailView___SetContentForBeatmapDataAsync_d__34(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 System::Runtime::CompilerServices::AsyncVoidMethodBuilder __declspec(property(get=__get___t__builder, put=__set___t__builder))  __t__builder;

constexpr void __set___t__builder(System::Runtime::CompilerServices::AsyncVoidMethodBuilder value) ;

constexpr System::Runtime::CompilerServices::AsyncVoidMethodBuilder __get___t__builder() const;

 GlobalNamespace::StandardLevelDetailView __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(GlobalNamespace::StandardLevelDetailView value) ;

constexpr GlobalNamespace::StandardLevelDetailView __get___4__this() const;

 GlobalNamespace::IDifficultyBeatmap __declspec(property(get=__get_selectedDifficultyBeatmap, put=__set_selectedDifficultyBeatmap))  selectedDifficultyBeatmap;

constexpr void __set_selectedDifficultyBeatmap(GlobalNamespace::IDifficultyBeatmap value) ;

constexpr GlobalNamespace::IDifficultyBeatmap __get_selectedDifficultyBeatmap() const;

 System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::IBeatmapDataBasicInfo> __declspec(property(get=__get___u__1, put=__set___u__1))  __u__1;

constexpr void __set___u__1(System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::IBeatmapDataBasicInfo> value) ;

constexpr System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::IBeatmapDataBasicInfo> __get___u__1() const;


// Methods

/// @brief Method MoveNext addr 0x2190424 size 0x584 virtual true final true
 void MoveNext() ;

/// @brief Method SetStateMachine addr 0x21909a8 size 0xc virtual true final true
 void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::StandardLevelDetailView
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5904))
// CS Name: StandardLevelDetailView
class CORDL_TYPE StandardLevelDetailView : public UnityEngine::MonoBehaviour {
public:
// Declarations
using _SetContentForBeatmapDataAsync_d__34 = GlobalNamespace::GlobalNamespace__StandardLevelDetailView___SetContentForBeatmapDataAsync_d__34;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x88};

virtual ~StandardLevelDetailView() = default;

// Ctor Parameters [CppParam { name: "", ty: "StandardLevelDetailView", modifiers: " const&", def_value: None }]
constexpr StandardLevelDetailView(StandardLevelDetailView const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "StandardLevelDetailView", modifiers: "&&", def_value: None }]
constexpr StandardLevelDetailView(StandardLevelDetailView&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit StandardLevelDetailView(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr StandardLevelDetailView& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr StandardLevelDetailView& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr StandardLevelDetailView& operator=(StandardLevelDetailView&& o) noexcept = default;
  constexpr StandardLevelDetailView& operator=(StandardLevelDetailView const& o) noexcept = default;
                


// Fields

 UnityEngine::UI::Button __declspec(property(get=__get__actionButton, put=__set__actionButton))  _actionButton;

constexpr void __set__actionButton(UnityEngine::UI::Button value) ;

constexpr UnityEngine::UI::Button __get__actionButton() const;

 TMPro::TextMeshProUGUI __declspec(property(get=__get__actionButtonText, put=__set__actionButtonText))  _actionButtonText;

constexpr void __set__actionButtonText(TMPro::TextMeshProUGUI value) ;

constexpr TMPro::TextMeshProUGUI __get__actionButtonText() const;

 UnityEngine::UI::Button __declspec(property(get=__get__practiceButton, put=__set__practiceButton))  _practiceButton;

constexpr void __set__practiceButton(UnityEngine::UI::Button value) ;

constexpr UnityEngine::UI::Button __get__practiceButton() const;

 GlobalNamespace::LevelBar __declspec(property(get=__get__levelBar, put=__set__levelBar))  _levelBar;

constexpr void __set__levelBar(GlobalNamespace::LevelBar value) ;

constexpr GlobalNamespace::LevelBar __get__levelBar() const;

 GlobalNamespace::LevelParamsPanel __declspec(property(get=__get__levelParamsPanel, put=__set__levelParamsPanel))  _levelParamsPanel;

constexpr void __set__levelParamsPanel(GlobalNamespace::LevelParamsPanel value) ;

constexpr GlobalNamespace::LevelParamsPanel __get__levelParamsPanel() const;

 GlobalNamespace::BeatmapDifficultySegmentedControlController __declspec(property(get=__get__beatmapDifficultySegmentedControlController, put=__set__beatmapDifficultySegmentedControlController))  _beatmapDifficultySegmentedControlController;

constexpr void __set__beatmapDifficultySegmentedControlController(GlobalNamespace::BeatmapDifficultySegmentedControlController value) ;

constexpr GlobalNamespace::BeatmapDifficultySegmentedControlController __get__beatmapDifficultySegmentedControlController() const;

 GlobalNamespace::BeatmapCharacteristicSegmentedControlController __declspec(property(get=__get__beatmapCharacteristicSegmentedControlController, put=__set__beatmapCharacteristicSegmentedControlController))  _beatmapCharacteristicSegmentedControlController;

constexpr void __set__beatmapCharacteristicSegmentedControlController(GlobalNamespace::BeatmapCharacteristicSegmentedControlController value) ;

constexpr GlobalNamespace::BeatmapCharacteristicSegmentedControlController __get__beatmapCharacteristicSegmentedControlController() const;

 UnityEngine::UI::Toggle __declspec(property(get=__get__favoriteToggle, put=__set__favoriteToggle))  _favoriteToggle;

constexpr void __set__favoriteToggle(UnityEngine::UI::Toggle value) ;

constexpr UnityEngine::UI::Toggle __get__favoriteToggle() const;

 System::Action_2<GlobalNamespace::StandardLevelDetailView,GlobalNamespace::IDifficultyBeatmap> __declspec(property(get=__get_didChangeDifficultyBeatmapEvent, put=__set_didChangeDifficultyBeatmapEvent))  didChangeDifficultyBeatmapEvent;

constexpr void __set_didChangeDifficultyBeatmapEvent(System::Action_2<GlobalNamespace::StandardLevelDetailView,GlobalNamespace::IDifficultyBeatmap> value) ;

constexpr System::Action_2<GlobalNamespace::StandardLevelDetailView,GlobalNamespace::IDifficultyBeatmap> __get_didChangeDifficultyBeatmapEvent() const;

 System::Action_2<GlobalNamespace::StandardLevelDetailView,UnityEngine::UI::Toggle> __declspec(property(get=__get_didFavoriteToggleChangeEvent, put=__set_didFavoriteToggleChangeEvent))  didFavoriteToggleChangeEvent;

constexpr void __set_didFavoriteToggleChangeEvent(System::Action_2<GlobalNamespace::StandardLevelDetailView,UnityEngine::UI::Toggle> value) ;

constexpr System::Action_2<GlobalNamespace::StandardLevelDetailView,UnityEngine::UI::Toggle> __get_didFavoriteToggleChangeEvent() const;

 GlobalNamespace::IBeatmapLevel __declspec(property(get=__get__level, put=__set__level))  _level;

constexpr void __set__level(GlobalNamespace::IBeatmapLevel value) ;

constexpr GlobalNamespace::IBeatmapLevel __get__level() const;

 GlobalNamespace::PlayerData __declspec(property(get=__get__playerData, put=__set__playerData))  _playerData;

constexpr void __set__playerData(GlobalNamespace::PlayerData value) ;

constexpr GlobalNamespace::PlayerData __get__playerData() const;

 GlobalNamespace::IDifficultyBeatmap __declspec(property(get=__get__selectedDifficultyBeatmap, put=__set__selectedDifficultyBeatmap))  _selectedDifficultyBeatmap;

constexpr void __set__selectedDifficultyBeatmap(GlobalNamespace::IDifficultyBeatmap value) ;

constexpr GlobalNamespace::IDifficultyBeatmap __get__selectedDifficultyBeatmap() const;

 HMUI::ToggleBinder __declspec(property(get=__get__toggleBinder, put=__set__toggleBinder))  _toggleBinder;

constexpr void __set__toggleBinder(HMUI::ToggleBinder value) ;

constexpr HMUI::ToggleBinder __get__toggleBinder() const;


// Properties

 GlobalNamespace::IDifficultyBeatmap __declspec(property(get=get_selectedDifficultyBeatmap))  selectedDifficultyBeatmap;

 UnityEngine::UI::Button __declspec(property(get=get_actionButton))  actionButton;

 ::StringW __declspec(property(put=set_actionButtonText))  actionButtonText;

 UnityEngine::UI::Button __declspec(property(get=get_practiceButton))  practiceButton;

 bool __declspec(property(put=set_hidePracticeButton))  hidePracticeButton;


// Methods

/// @brief Method add_didChangeDifficultyBeatmapEvent addr 0x218f6dc size 0xb0 virtual false final false
 void add_didChangeDifficultyBeatmapEvent(System::Action_2<GlobalNamespace::StandardLevelDetailView,GlobalNamespace::IDifficultyBeatmap> value) ;

/// @brief Method remove_didChangeDifficultyBeatmapEvent addr 0x218f78c size 0xb0 virtual false final false
 void remove_didChangeDifficultyBeatmapEvent(System::Action_2<GlobalNamespace::StandardLevelDetailView,GlobalNamespace::IDifficultyBeatmap> value) ;

/// @brief Method add_didFavoriteToggleChangeEvent addr 0x218f83c size 0xb0 virtual false final false
 void add_didFavoriteToggleChangeEvent(System::Action_2<GlobalNamespace::StandardLevelDetailView,UnityEngine::UI::Toggle> value) ;

/// @brief Method remove_didFavoriteToggleChangeEvent addr 0x218f8ec size 0xb0 virtual false final false
 void remove_didFavoriteToggleChangeEvent(System::Action_2<GlobalNamespace::StandardLevelDetailView,UnityEngine::UI::Toggle> value) ;

/// @brief Method get_selectedDifficultyBeatmap addr 0x218f99c size 0x8 virtual false final false
 GlobalNamespace::IDifficultyBeatmap get_selectedDifficultyBeatmap() ;

/// @brief Method get_actionButton addr 0x218f9a4 size 0x8 virtual false final false
 UnityEngine::UI::Button get_actionButton() ;

/// @brief Method set_actionButtonText addr 0x218f9ac size 0x24 virtual false final false
 void set_actionButtonText(::StringW value) ;

/// @brief Method get_practiceButton addr 0x218f9d0 size 0x8 virtual false final false
 UnityEngine::UI::Button get_practiceButton() ;

/// @brief Method set_hidePracticeButton addr 0x218f9d8 size 0x34 virtual false final false
 void set_hidePracticeButton(bool value) ;

/// @brief Method SetContent addr 0x218fa0c size 0x308 virtual false final false
 void SetContent(GlobalNamespace::IBeatmapLevel level, GlobalNamespace::BeatmapDifficulty defaultDifficulty, GlobalNamespace::BeatmapCharacteristicSO defaultBeatmapCharacteristic, GlobalNamespace::PlayerData playerData) ;

/// @brief Method Awake addr 0x218fe9c size 0x184 virtual false final false
 void Awake() ;

/// @brief Method OnDestroy addr 0x2190020 size 0x178 virtual false final false
 void OnDestroy() ;

/// @brief Method HandleBeatmapDifficultySegmentedControlControllerDidSelectDifficulty addr 0x2190198 size 0x38 virtual false final false
 void HandleBeatmapDifficultySegmentedControlControllerDidSelectDifficulty(GlobalNamespace::BeatmapDifficultySegmentedControlController controller, GlobalNamespace::BeatmapDifficulty difficulty) ;

/// @brief Method HandleBeatmapCharacteristicSegmentedControlControllerDidSelectBeatmapCharacteristic addr 0x21901d0 size 0x184 virtual false final false
 void HandleBeatmapCharacteristicSegmentedControlControllerDidSelectBeatmapCharacteristic(GlobalNamespace::BeatmapCharacteristicSegmentedControlController controller, GlobalNamespace::BeatmapCharacteristicSO beatmapCharacteristic) ;

/// @brief Method RefreshContent addr 0x218fd14 size 0x188 virtual false final false
 void RefreshContent() ;

/// @brief Method SetContentForBeatmapDataAsync addr 0x2190354 size 0x9c virtual false final false
 void SetContentForBeatmapDataAsync(GlobalNamespace::IDifficultyBeatmap selectedDifficultyBeatmap) ;

/// @brief Method ClearContent addr 0x21903f0 size 0x8 virtual false final false
 void ClearContent() ;

// Ctor Parameters []
explicit StandardLevelDetailView() ;

/// @brief Method .ctor addr 0x21903f8 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <Awake>b__29_0 addr 0x2190400 size 0x24 virtual false final false
 void _Awake_b__29_0(bool on) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::StandardLevelDetailView);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::StandardLevelDetailView, "", "StandardLevelDetailView");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__StandardLevelDetailView___SetContentForBeatmapDataAsync_d__34, "", "StandardLevelDetailView/<SetContentForBeatmapDataAsync>d__34");
