#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "HMUI/zzzz__ViewController_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace GlobalNamespace {
class IPreviewBeatmapLevel;
}
namespace GlobalNamespace {
class SongPreviewPlayer;
}
namespace GlobalNamespace {
class MissionNodeSelectionManager;
}
namespace GlobalNamespace {
class GlobalNamespace__MissionSelectionMapViewController____c__DisplayClass15_0;
}
namespace GlobalNamespace {
struct GlobalNamespace__MissionSelectionMapViewController___SongPlayerCrossfadeToLevelAsync_d__15;
}
namespace HMUI {
class ScrollView;
}
namespace GlobalNamespace {
class AudioClipAsyncLoader;
}
namespace GlobalNamespace {
class MissionMapAnimationController;
}
namespace GlobalNamespace {
class MissionNode;
}
namespace GlobalNamespace {
class PerceivedLoudnessPerLevelModel;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace GlobalNamespace {
class MissionNodeVisualController;
}
namespace System {
class Action;
}
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct TaskAwaiter_1;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace UnityEngine {
class AudioClip;
}
namespace System::Runtime::CompilerServices {
struct AsyncVoidMethodBuilder;
}
// Forward declare root types
namespace GlobalNamespace {
class GlobalNamespace__MissionSelectionMapViewController____c__DisplayClass15_0;
}
namespace GlobalNamespace {
class MissionSelectionMapViewController;
}
namespace GlobalNamespace {
struct GlobalNamespace__MissionSelectionMapViewController___SongPlayerCrossfadeToLevelAsync_d__15;
}
// Type: ::<>c__DisplayClass15_0
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5798))
// CS Name: MissionSelectionMapViewController::<>c__DisplayClass15_0
class CORDL_TYPE GlobalNamespace__MissionSelectionMapViewController____c__DisplayClass15_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~GlobalNamespace__MissionSelectionMapViewController____c__DisplayClass15_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__MissionSelectionMapViewController____c__DisplayClass15_0", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__MissionSelectionMapViewController____c__DisplayClass15_0(GlobalNamespace__MissionSelectionMapViewController____c__DisplayClass15_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__MissionSelectionMapViewController____c__DisplayClass15_0", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__MissionSelectionMapViewController____c__DisplayClass15_0(GlobalNamespace__MissionSelectionMapViewController____c__DisplayClass15_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__MissionSelectionMapViewController____c__DisplayClass15_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__MissionSelectionMapViewController____c__DisplayClass15_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__MissionSelectionMapViewController____c__DisplayClass15_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__MissionSelectionMapViewController____c__DisplayClass15_0& operator=(GlobalNamespace__MissionSelectionMapViewController____c__DisplayClass15_0&& o) noexcept = default;
  constexpr GlobalNamespace__MissionSelectionMapViewController____c__DisplayClass15_0& operator=(GlobalNamespace__MissionSelectionMapViewController____c__DisplayClass15_0 const& o) noexcept = default;
                


// Fields

 GlobalNamespace::MissionSelectionMapViewController __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(GlobalNamespace::MissionSelectionMapViewController value) ;

constexpr GlobalNamespace::MissionSelectionMapViewController __get___4__this() const;

 GlobalNamespace::IPreviewBeatmapLevel __declspec(property(get=__get_level, put=__set_level))  level;

constexpr void __set_level(GlobalNamespace::IPreviewBeatmapLevel value) ;

constexpr GlobalNamespace::IPreviewBeatmapLevel __get_level() const;


// Methods

static GlobalNamespace::GlobalNamespace__MissionSelectionMapViewController____c__DisplayClass15_0 New_ctor() ;

/// @brief Method .ctor addr 0x2174ac8 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <SongPlayerCrossfadeToLevelAsync>b__0 addr 0x2174ad0 size 0x2c virtual false final false
 void _SongPlayerCrossfadeToLevelAsync_b__0() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<SongPlayerCrossfadeToLevelAsync>d__15
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5799))
// CS Name: MissionSelectionMapViewController::<SongPlayerCrossfadeToLevelAsync>d__15
struct CORDL_TYPE GlobalNamespace__MissionSelectionMapViewController___SongPlayerCrossfadeToLevelAsync_d__15 : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr operator  System::Runtime::CompilerServices::IAsyncStateMachine() const;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "GlobalNamespace::MissionSelectionMapViewController", modifiers: "", def_value: None }, CppParam { name: "level", ty: "GlobalNamespace::IPreviewBeatmapLevel", modifiers: "", def_value: None }, CppParam { name: "__8__1", ty: "GlobalNamespace::GlobalNamespace__MissionSelectionMapViewController____c__DisplayClass15_0", modifiers: "", def_value: None }, CppParam { name: "_musicVolume_5__2", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::TaskAwaiter_1<UnityEngine::AudioClip>", modifiers: "", def_value: None }]
constexpr GlobalNamespace__MissionSelectionMapViewController___SongPlayerCrossfadeToLevelAsync_d__15(int32_t __1__state, System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, GlobalNamespace::MissionSelectionMapViewController __4__this, GlobalNamespace::IPreviewBeatmapLevel level, GlobalNamespace::GlobalNamespace__MissionSelectionMapViewController____c__DisplayClass15_0 __8__1, float_t _musicVolume_5__2, System::Runtime::CompilerServices::TaskAwaiter_1<UnityEngine::AudioClip> __u__1) noexcept;


                    constexpr GlobalNamespace__MissionSelectionMapViewController___SongPlayerCrossfadeToLevelAsync_d__15(GlobalNamespace__MissionSelectionMapViewController___SongPlayerCrossfadeToLevelAsync_d__15 const&) = default;
                    constexpr GlobalNamespace__MissionSelectionMapViewController___SongPlayerCrossfadeToLevelAsync_d__15(GlobalNamespace__MissionSelectionMapViewController___SongPlayerCrossfadeToLevelAsync_d__15&&) = default;
                    constexpr GlobalNamespace__MissionSelectionMapViewController___SongPlayerCrossfadeToLevelAsync_d__15& operator=(GlobalNamespace__MissionSelectionMapViewController___SongPlayerCrossfadeToLevelAsync_d__15 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__MissionSelectionMapViewController___SongPlayerCrossfadeToLevelAsync_d__15& operator=(GlobalNamespace__MissionSelectionMapViewController___SongPlayerCrossfadeToLevelAsync_d__15&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x50};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__MissionSelectionMapViewController___SongPlayerCrossfadeToLevelAsync_d__15(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
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

 GlobalNamespace::MissionSelectionMapViewController __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(GlobalNamespace::MissionSelectionMapViewController value) ;

constexpr GlobalNamespace::MissionSelectionMapViewController __get___4__this() const;

 GlobalNamespace::IPreviewBeatmapLevel __declspec(property(get=__get_level, put=__set_level))  level;

constexpr void __set_level(GlobalNamespace::IPreviewBeatmapLevel value) ;

constexpr GlobalNamespace::IPreviewBeatmapLevel __get_level() const;

 GlobalNamespace::GlobalNamespace__MissionSelectionMapViewController____c__DisplayClass15_0 __declspec(property(get=__get___8__1, put=__set___8__1))  __8__1;

constexpr void __set___8__1(GlobalNamespace::GlobalNamespace__MissionSelectionMapViewController____c__DisplayClass15_0 value) ;

constexpr GlobalNamespace::GlobalNamespace__MissionSelectionMapViewController____c__DisplayClass15_0 __get___8__1() const;

 float_t __declspec(property(get=__get__musicVolume_5__2, put=__set__musicVolume_5__2))  _musicVolume_5__2;

constexpr void __set__musicVolume_5__2(float_t value) ;

constexpr float_t __get__musicVolume_5__2() const;

 System::Runtime::CompilerServices::TaskAwaiter_1<UnityEngine::AudioClip> __declspec(property(get=__get___u__1, put=__set___u__1))  __u__1;

constexpr void __set___u__1(System::Runtime::CompilerServices::TaskAwaiter_1<UnityEngine::AudioClip> value) ;

constexpr System::Runtime::CompilerServices::TaskAwaiter_1<UnityEngine::AudioClip> __get___u__1() const;


// Methods

/// @brief Method MoveNext addr 0x2174afc size 0x49c virtual true final true
 void MoveNext() ;

/// @brief Method SetStateMachine addr 0x2174f98 size 0xc virtual true final true
 void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::MissionSelectionMapViewController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13656))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5800))
// CS Name: MissionSelectionMapViewController
class CORDL_TYPE MissionSelectionMapViewController : public HMUI::ViewController {
public:
// Declarations
using _SongPlayerCrossfadeToLevelAsync_d__15 = GlobalNamespace::GlobalNamespace__MissionSelectionMapViewController___SongPlayerCrossfadeToLevelAsync_d__15;

using __c__DisplayClass15_0 = GlobalNamespace::GlobalNamespace__MissionSelectionMapViewController____c__DisplayClass15_0;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xb0};

virtual ~MissionSelectionMapViewController() = default;

// Ctor Parameters [CppParam { name: "", ty: "MissionSelectionMapViewController", modifiers: " const&", def_value: None }]
constexpr MissionSelectionMapViewController(MissionSelectionMapViewController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MissionSelectionMapViewController", modifiers: "&&", def_value: None }]
constexpr MissionSelectionMapViewController(MissionSelectionMapViewController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MissionSelectionMapViewController(void* ptr) noexcept : HMUI::ViewController(ptr) {
}


  constexpr MissionSelectionMapViewController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MissionSelectionMapViewController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MissionSelectionMapViewController& operator=(MissionSelectionMapViewController&& o) noexcept = default;
  constexpr MissionSelectionMapViewController& operator=(MissionSelectionMapViewController const& o) noexcept = default;
                


// Fields

 HMUI::ScrollView __declspec(property(get=__get__mapScrollView, put=__set__mapScrollView))  _mapScrollView;

constexpr void __set__mapScrollView(HMUI::ScrollView value) ;

constexpr HMUI::ScrollView __get__mapScrollView() const;

 GlobalNamespace::MissionNodeSelectionManager __declspec(property(get=__get__missionNodeSelectionManager, put=__set__missionNodeSelectionManager))  _missionNodeSelectionManager;

constexpr void __set__missionNodeSelectionManager(GlobalNamespace::MissionNodeSelectionManager value) ;

constexpr GlobalNamespace::MissionNodeSelectionManager __get__missionNodeSelectionManager() const;

 GlobalNamespace::MissionMapAnimationController __declspec(property(get=__get__missionMapAnimationController, put=__set__missionMapAnimationController))  _missionMapAnimationController;

constexpr void __set__missionMapAnimationController(GlobalNamespace::MissionMapAnimationController value) ;

constexpr GlobalNamespace::MissionMapAnimationController __get__missionMapAnimationController() const;

 GlobalNamespace::SongPreviewPlayer __declspec(property(get=__get__songPreviewPlayer, put=__set__songPreviewPlayer))  _songPreviewPlayer;

constexpr void __set__songPreviewPlayer(GlobalNamespace::SongPreviewPlayer value) ;

constexpr GlobalNamespace::SongPreviewPlayer __get__songPreviewPlayer() const;

 GlobalNamespace::PerceivedLoudnessPerLevelModel __declspec(property(get=__get__perceivedLoudnessPerLevelModel, put=__set__perceivedLoudnessPerLevelModel))  _perceivedLoudnessPerLevelModel;

constexpr void __set__perceivedLoudnessPerLevelModel(GlobalNamespace::PerceivedLoudnessPerLevelModel value) ;

constexpr GlobalNamespace::PerceivedLoudnessPerLevelModel __get__perceivedLoudnessPerLevelModel() const;

 GlobalNamespace::AudioClipAsyncLoader __declspec(property(get=__get__audioClipAsyncLoader, put=__set__audioClipAsyncLoader))  _audioClipAsyncLoader;

constexpr void __set__audioClipAsyncLoader(GlobalNamespace::AudioClipAsyncLoader value) ;

constexpr GlobalNamespace::AudioClipAsyncLoader __get__audioClipAsyncLoader() const;

 System::Action_2<GlobalNamespace::MissionSelectionMapViewController,GlobalNamespace::MissionNode> __declspec(property(get=__get_didSelectMissionLevelEvent, put=__set_didSelectMissionLevelEvent))  didSelectMissionLevelEvent;

constexpr void __set_didSelectMissionLevelEvent(System::Action_2<GlobalNamespace::MissionSelectionMapViewController,GlobalNamespace::MissionNode> value) ;

constexpr System::Action_2<GlobalNamespace::MissionSelectionMapViewController,GlobalNamespace::MissionNode> __get_didSelectMissionLevelEvent() const;

 GlobalNamespace::MissionNode __declspec(property(get=__get__selectedMissionNode, put=__set__selectedMissionNode))  _selectedMissionNode;

constexpr void __set__selectedMissionNode(GlobalNamespace::MissionNode value) ;

constexpr GlobalNamespace::MissionNode __get__selectedMissionNode() const;


// Properties

 bool __declspec(property(get=get_animatedUpdateIsRequired))  animatedUpdateIsRequired;


// Methods

/// @brief Method add_didSelectMissionLevelEvent addr 0x2174584 size 0xb0 virtual false final false
 void add_didSelectMissionLevelEvent(System::Action_2<GlobalNamespace::MissionSelectionMapViewController,GlobalNamespace::MissionNode> value) ;

/// @brief Method remove_didSelectMissionLevelEvent addr 0x2174634 size 0xb0 virtual false final false
 void remove_didSelectMissionLevelEvent(System::Action_2<GlobalNamespace::MissionSelectionMapViewController,GlobalNamespace::MissionNode> value) ;

/// @brief Method get_animatedUpdateIsRequired addr 0x21746e4 size 0x1c virtual false final false
 bool get_animatedUpdateIsRequired() ;

/// @brief Method DidActivate addr 0x2174700 size 0x144 virtual true final false
 void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling) ;

/// @brief Method DidDeactivate addr 0x2174844 size 0x130 virtual true final false
 void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling) ;

/// @brief Method HandleMissionNodeSelectionManagerDidSelectMissionNode addr 0x2174974 size 0x6c virtual false final false
 void HandleMissionNodeSelectionManagerDidSelectMissionNode(GlobalNamespace::MissionNodeVisualController missionNodeVisualController) ;

/// @brief Method SongPlayerCrossfadeToLevelAsync addr 0x21749e0 size 0xa0 virtual false final false
 void SongPlayerCrossfadeToLevelAsync(GlobalNamespace::IPreviewBeatmapLevel level) ;

/// @brief Method ShowMissionClearedAnimation addr 0x2174a80 size 0x24 virtual false final false
 void ShowMissionClearedAnimation(System::Action finishCallback) ;

/// @brief Method DeselectSelectedNode addr 0x2174aa4 size 0x1c virtual false final false
 void DeselectSelectedNode() ;

static GlobalNamespace::MissionSelectionMapViewController New_ctor() ;

/// @brief Method .ctor addr 0x2174ac0 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__MissionSelectionMapViewController____c__DisplayClass15_0);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__MissionSelectionMapViewController____c__DisplayClass15_0, "", "MissionSelectionMapViewController/<>c__DisplayClass15_0");
NEED_NO_BOX(GlobalNamespace::MissionSelectionMapViewController);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MissionSelectionMapViewController, "", "MissionSelectionMapViewController");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__MissionSelectionMapViewController___SongPlayerCrossfadeToLevelAsync_d__15, "", "MissionSelectionMapViewController/<SongPlayerCrossfadeToLevelAsync>d__15");
