#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System {
class IDisposable;
}
namespace GlobalNamespace {
class BeatmapLevelSO;
}
namespace System::Collections::Generic {
template<typename T>
struct System__Collections__Generic__List_1__Enumerator;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace GlobalNamespace {
struct BeatmapDifficulty;
}
namespace GlobalNamespace {
class BeatmapCharacteristicSO;
}
namespace Zenject {
class DiContainer;
}
namespace TMPro {
class TextMeshProUGUI;
}
namespace GlobalNamespace {
class GlobalNamespace__WaypointsTestMenuViewController___CheckBeatmaps_d__14;
}
namespace GlobalNamespace {
class GameScenesManager;
}
namespace GlobalNamespace {
class ICoroutineStarter;
}
namespace HMUI {
class ButtonBinder;
}
namespace GlobalNamespace {
class StandardLevelScenesTransitionSetupDataSO;
}
namespace UnityEngine::UI {
class Button;
}
namespace GlobalNamespace {
class PlayerDataModel;
}
namespace GlobalNamespace {
class LevelCompletionResults;
}
// Forward declare root types
namespace GlobalNamespace {
class GlobalNamespace__WaypointsTestMenuViewController___CheckBeatmaps_d__14;
}
namespace GlobalNamespace {
class WaypointsTestMenuViewController;
}
// Type: ::<CheckBeatmaps>d__14
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3983))
// CS Name: WaypointsTestMenuViewController::<CheckBeatmaps>d__14
class CORDL_TYPE GlobalNamespace__WaypointsTestMenuViewController___CheckBeatmaps_d__14 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>
constexpr operator  System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const noexcept;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xa0};

virtual ~GlobalNamespace__WaypointsTestMenuViewController___CheckBeatmaps_d__14() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__WaypointsTestMenuViewController___CheckBeatmaps_d__14", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__WaypointsTestMenuViewController___CheckBeatmaps_d__14(GlobalNamespace__WaypointsTestMenuViewController___CheckBeatmaps_d__14 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__WaypointsTestMenuViewController___CheckBeatmaps_d__14", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__WaypointsTestMenuViewController___CheckBeatmaps_d__14(GlobalNamespace__WaypointsTestMenuViewController___CheckBeatmaps_d__14&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__WaypointsTestMenuViewController___CheckBeatmaps_d__14(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__WaypointsTestMenuViewController___CheckBeatmaps_d__14& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__WaypointsTestMenuViewController___CheckBeatmaps_d__14& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__WaypointsTestMenuViewController___CheckBeatmaps_d__14& operator=(GlobalNamespace__WaypointsTestMenuViewController___CheckBeatmaps_d__14&& o) noexcept = default;
  constexpr GlobalNamespace__WaypointsTestMenuViewController___CheckBeatmaps_d__14& operator=(GlobalNamespace__WaypointsTestMenuViewController___CheckBeatmaps_d__14 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get___2__current, put=__set___2__current))  __2__current;

constexpr void __set___2__current(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get___2__current() const;

 GlobalNamespace::WaypointsTestMenuViewController __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(GlobalNamespace::WaypointsTestMenuViewController value) ;

constexpr GlobalNamespace::WaypointsTestMenuViewController __get___4__this() const;

 System::Collections::Generic::List_1<GlobalNamespace::BeatmapLevelSO> __declspec(property(get=__get_levels, put=__set_levels))  levels;

constexpr void __set_levels(System::Collections::Generic::List_1<GlobalNamespace::BeatmapLevelSO> value) ;

constexpr System::Collections::Generic::List_1<GlobalNamespace::BeatmapLevelSO> __get_levels() const;

 int32_t __declspec(property(get=__get__count_5__2, put=__set__count_5__2))  _count_5__2;

constexpr void __set__count_5__2(int32_t value) ;

constexpr int32_t __get__count_5__2() const;

 System::Collections::Generic::List_1<GlobalNamespace::BeatmapDifficulty> __declspec(property(get=__get__difficultiesToCheck_5__3, put=__set__difficultiesToCheck_5__3))  _difficultiesToCheck_5__3;

constexpr void __set__difficultiesToCheck_5__3(System::Collections::Generic::List_1<GlobalNamespace::BeatmapDifficulty> value) ;

constexpr System::Collections::Generic::List_1<GlobalNamespace::BeatmapDifficulty> __get__difficultiesToCheck_5__3() const;

 System::Collections::Generic::System__Collections__Generic__List_1__Enumerator<GlobalNamespace::BeatmapLevelSO> __declspec(property(get=__get___7__wrap3, put=__set___7__wrap3))  __7__wrap3;

constexpr void __set___7__wrap3(System::Collections::Generic::System__Collections__Generic__List_1__Enumerator<GlobalNamespace::BeatmapLevelSO> value) ;

constexpr System::Collections::Generic::System__Collections__Generic__List_1__Enumerator<GlobalNamespace::BeatmapLevelSO> __get___7__wrap3() const;

 GlobalNamespace::BeatmapLevelSO __declspec(property(get=__get__level_5__5, put=__set__level_5__5))  _level_5__5;

constexpr void __set__level_5__5(GlobalNamespace::BeatmapLevelSO value) ;

constexpr GlobalNamespace::BeatmapLevelSO __get__level_5__5() const;

 System::Collections::Generic::System__Collections__Generic__List_1__Enumerator<GlobalNamespace::BeatmapCharacteristicSO> __declspec(property(get=__get___7__wrap5, put=__set___7__wrap5))  __7__wrap5;

constexpr void __set___7__wrap5(System::Collections::Generic::System__Collections__Generic__List_1__Enumerator<GlobalNamespace::BeatmapCharacteristicSO> value) ;

constexpr System::Collections::Generic::System__Collections__Generic__List_1__Enumerator<GlobalNamespace::BeatmapCharacteristicSO> __get___7__wrap5() const;

 GlobalNamespace::BeatmapCharacteristicSO __declspec(property(get=__get__characteristic_5__7, put=__set__characteristic_5__7))  _characteristic_5__7;

constexpr void __set__characteristic_5__7(GlobalNamespace::BeatmapCharacteristicSO value) ;

constexpr GlobalNamespace::BeatmapCharacteristicSO __get__characteristic_5__7() const;

 System::Collections::Generic::System__Collections__Generic__List_1__Enumerator<GlobalNamespace::BeatmapDifficulty> __declspec(property(get=__get___7__wrap7, put=__set___7__wrap7))  __7__wrap7;

constexpr void __set___7__wrap7(System::Collections::Generic::System__Collections__Generic__List_1__Enumerator<GlobalNamespace::BeatmapDifficulty> value) ;

constexpr System::Collections::Generic::System__Collections__Generic__List_1__Enumerator<GlobalNamespace::BeatmapDifficulty> __get___7__wrap7() const;

 GlobalNamespace::BeatmapDifficulty __declspec(property(get=__get__difficulty_5__9, put=__set__difficulty_5__9))  _difficulty_5__9;

constexpr void __set__difficulty_5__9(GlobalNamespace::BeatmapDifficulty value) ;

constexpr GlobalNamespace::BeatmapDifficulty __get__difficulty_5__9() const;


// Properties

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current))  System_Collections_Generic_IEnumerator_System_Object__Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

static GlobalNamespace::GlobalNamespace__WaypointsTestMenuViewController___CheckBeatmaps_d__14 New_ctor(int32_t __1__state) ;

/// @brief Method .ctor addr 0x20acb88 size 0x28 virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x20acd54 size 0x154 virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x20acea8 size 0xa68 virtual true final true
 bool MoveNext() ;

/// @brief Method <>m__Finally1 addr 0x20ad9b0 size 0x50 virtual false final false
 void __m__Finally1() ;

/// @brief Method <>m__Finally2 addr 0x20ad960 size 0x50 virtual false final false
 void __m__Finally2() ;

/// @brief Method <>m__Finally3 addr 0x20ad910 size 0x50 virtual false final false
 void __m__Finally3() ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0x20ada00 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x20ada08 size 0x40 virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x20ada48 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::WaypointsTestMenuViewController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3984))
// CS Name: WaypointsTestMenuViewController
class CORDL_TYPE WaypointsTestMenuViewController : public UnityEngine::MonoBehaviour {
public:
// Declarations
using _CheckBeatmaps_d__14 = GlobalNamespace::GlobalNamespace__WaypointsTestMenuViewController___CheckBeatmaps_d__14;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x70};

virtual ~WaypointsTestMenuViewController() = default;

// Ctor Parameters [CppParam { name: "", ty: "WaypointsTestMenuViewController", modifiers: " const&", def_value: None }]
constexpr WaypointsTestMenuViewController(WaypointsTestMenuViewController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "WaypointsTestMenuViewController", modifiers: "&&", def_value: None }]
constexpr WaypointsTestMenuViewController(WaypointsTestMenuViewController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit WaypointsTestMenuViewController(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr WaypointsTestMenuViewController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr WaypointsTestMenuViewController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr WaypointsTestMenuViewController& operator=(WaypointsTestMenuViewController&& o) noexcept = default;
  constexpr WaypointsTestMenuViewController& operator=(WaypointsTestMenuViewController const& o) noexcept = default;
                


// Fields

 UnityEngine::UI::Button __declspec(property(get=__get__btsButton, put=__set__btsButton))  _btsButton;

constexpr void __set__btsButton(UnityEngine::UI::Button value) ;

constexpr UnityEngine::UI::Button __get__btsButton() const;

 UnityEngine::UI::Button __declspec(property(get=__get__cancelButton, put=__set__cancelButton))  _cancelButton;

constexpr void __set__cancelButton(UnityEngine::UI::Button value) ;

constexpr UnityEngine::UI::Button __get__cancelButton() const;

 TMPro::TextMeshProUGUI __declspec(property(get=__get__progressText, put=__set__progressText))  _progressText;

constexpr void __set__progressText(TMPro::TextMeshProUGUI value) ;

constexpr TMPro::TextMeshProUGUI __get__progressText() const;

 GlobalNamespace::StandardLevelScenesTransitionSetupDataSO __declspec(property(get=__get__waypointsTestScenesTransitionSetupData, put=__set__waypointsTestScenesTransitionSetupData))  _waypointsTestScenesTransitionSetupData;

constexpr void __set__waypointsTestScenesTransitionSetupData(GlobalNamespace::StandardLevelScenesTransitionSetupDataSO value) ;

constexpr GlobalNamespace::StandardLevelScenesTransitionSetupDataSO __get__waypointsTestScenesTransitionSetupData() const;

 System::Collections::Generic::List_1<GlobalNamespace::BeatmapLevelSO> __declspec(property(get=__get__levels, put=__set__levels))  _levels;

constexpr void __set__levels(System::Collections::Generic::List_1<GlobalNamespace::BeatmapLevelSO> value) ;

constexpr System::Collections::Generic::List_1<GlobalNamespace::BeatmapLevelSO> __get__levels() const;

 System::Collections::Generic::List_1<GlobalNamespace::BeatmapCharacteristicSO> __declspec(property(get=__get__characteristics, put=__set__characteristics))  _characteristics;

constexpr void __set__characteristics(System::Collections::Generic::List_1<GlobalNamespace::BeatmapCharacteristicSO> value) ;

constexpr System::Collections::Generic::List_1<GlobalNamespace::BeatmapCharacteristicSO> __get__characteristics() const;

 GlobalNamespace::GameScenesManager __declspec(property(get=__get__gameScenesManager, put=__set__gameScenesManager))  _gameScenesManager;

constexpr void __set__gameScenesManager(GlobalNamespace::GameScenesManager value) ;

constexpr GlobalNamespace::GameScenesManager __get__gameScenesManager() const;

 GlobalNamespace::PlayerDataModel __declspec(property(get=__get__playerDataModel, put=__set__playerDataModel))  _playerDataModel;

constexpr void __set__playerDataModel(GlobalNamespace::PlayerDataModel value) ;

constexpr GlobalNamespace::PlayerDataModel __get__playerDataModel() const;

 GlobalNamespace::ICoroutineStarter __declspec(property(get=__get__coroutineStarter, put=__set__coroutineStarter))  _coroutineStarter;

constexpr void __set__coroutineStarter(GlobalNamespace::ICoroutineStarter value) ;

constexpr GlobalNamespace::ICoroutineStarter __get__coroutineStarter() const;

 HMUI::ButtonBinder __declspec(property(get=__get__buttonBinder, put=__set__buttonBinder))  _buttonBinder;

constexpr void __set__buttonBinder(HMUI::ButtonBinder value) ;

constexpr HMUI::ButtonBinder __get__buttonBinder() const;

 bool __declspec(property(get=__get__isCancelled, put=__set__isCancelled))  _isCancelled;

constexpr void __set__isCancelled(bool value) ;

constexpr bool __get__isCancelled() const;

 bool __declspec(property(get=__get__waitingForLevelFinish, put=__set__waitingForLevelFinish))  _waitingForLevelFinish;

constexpr void __set__waitingForLevelFinish(bool value) ;

constexpr bool __get__waitingForLevelFinish() const;


// Methods

/// @brief Method Start addr 0x20ac8d8 size 0x158 virtual false final false
 void Start() ;

/// @brief Method OnDestroy addr 0x20aca30 size 0xe4 virtual false final false
 void OnDestroy() ;

/// @brief Method CheckBeatmaps addr 0x20acb14 size 0x74 virtual false final false
 System::Collections::IEnumerator CheckBeatmaps(System::Collections::Generic::List_1<GlobalNamespace::BeatmapLevelSO> levels) ;

/// @brief Method HandleMainGameSceneDidFinish addr 0x20acbb0 size 0x94 virtual false final false
 void HandleMainGameSceneDidFinish(GlobalNamespace::StandardLevelScenesTransitionSetupDataSO data, GlobalNamespace::LevelCompletionResults results) ;

static GlobalNamespace::WaypointsTestMenuViewController New_ctor() ;

/// @brief Method .ctor addr 0x20acc44 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <Start>b__12_0 addr 0x20acc4c size 0xb4 virtual false final false
 void _Start_b__12_0() ;

/// @brief Method <Start>b__12_1 addr 0x20acd00 size 0x4c virtual false final false
 void _Start_b__12_1() ;

/// @brief Method <HandleMainGameSceneDidFinish>b__15_0 addr 0x20acd4c size 0x8 virtual false final false
 void _HandleMainGameSceneDidFinish_b__15_0(Zenject::DiContainer container) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__WaypointsTestMenuViewController___CheckBeatmaps_d__14);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__WaypointsTestMenuViewController___CheckBeatmaps_d__14, "", "WaypointsTestMenuViewController/<CheckBeatmaps>d__14");
NEED_NO_BOX(GlobalNamespace::WaypointsTestMenuViewController);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::WaypointsTestMenuViewController, "", "WaypointsTestMenuViewController");
