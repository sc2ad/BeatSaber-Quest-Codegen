#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "HMUI/zzzz__ViewController_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace {
namespace GlobalNamespace {
class AdditionalContentModel;
}
namespace GlobalNamespace {
class PerceivedLoudnessPerLevelModel;
}
namespace GlobalNamespace {
class SongPreviewPlayer;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace GlobalNamespace {
class IPreviewBeatmapLevel;
}
namespace GlobalNamespace {
class IBeatmapLevelCollection;
}
namespace UnityEngine {
class GameObject;
}
namespace GlobalNamespace {
class AudioClipAsyncLoader;
}
namespace Zenject {
class DiContainer;
}
namespace System {
template<typename T>
class Action_1;
}
namespace GlobalNamespace {
class LevelCollectionTableView;
}
namespace UnityEngine {
class RectTransform;
}
namespace GlobalNamespace {
class PlayerDataModel;
}
namespace UnityEngine {
class Sprite;
}
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct TaskAwaiter_1;
}
namespace UnityEngine {
class AudioClip;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
struct AsyncVoidMethodBuilder;
}
// Forward declare root types
namespace GlobalNamespace {
class LevelCollectionViewController;
}
namespace GlobalNamespace {
class ____GlobalNamespace__LevelCollectionViewController____c__DisplayClass24_0;
}
namespace GlobalNamespace {
struct ____GlobalNamespace__LevelCollectionViewController___SongPlayerCrossfadeToLevelAsync_d__24;
}
// Type: ::<>c__DisplayClass24_0
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5753))
// CS Name: LevelCollectionViewController::<>c__DisplayClass24_0
class CORDL_TYPE ____GlobalNamespace__LevelCollectionViewController____c__DisplayClass24_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~____GlobalNamespace__LevelCollectionViewController____c__DisplayClass24_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__LevelCollectionViewController____c__DisplayClass24_0", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__LevelCollectionViewController____c__DisplayClass24_0(____GlobalNamespace__LevelCollectionViewController____c__DisplayClass24_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__LevelCollectionViewController____c__DisplayClass24_0", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__LevelCollectionViewController____c__DisplayClass24_0(____GlobalNamespace__LevelCollectionViewController____c__DisplayClass24_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__LevelCollectionViewController____c__DisplayClass24_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____GlobalNamespace__LevelCollectionViewController____c__DisplayClass24_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__LevelCollectionViewController____c__DisplayClass24_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__LevelCollectionViewController____c__DisplayClass24_0& operator=(____GlobalNamespace__LevelCollectionViewController____c__DisplayClass24_0&& o) noexcept = default;
  constexpr ____GlobalNamespace__LevelCollectionViewController____c__DisplayClass24_0& operator=(____GlobalNamespace__LevelCollectionViewController____c__DisplayClass24_0 const& o) noexcept = default;
                


// Fields

 ::GlobalNamespace::LevelCollectionViewController __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(::GlobalNamespace::LevelCollectionViewController value) ;

constexpr ::GlobalNamespace::LevelCollectionViewController __get___4__this() const;

 ::GlobalNamespace::IPreviewBeatmapLevel __declspec(property(get=__get_level, put=__set_level))  level;

constexpr void __set_level(::GlobalNamespace::IPreviewBeatmapLevel value) ;

constexpr ::GlobalNamespace::IPreviewBeatmapLevel __get_level() const;


// Methods

// Ctor Parameters []
explicit ____GlobalNamespace__LevelCollectionViewController____c__DisplayClass24_0() ;

/// @brief Method .ctor addr 0x2166574 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <SongPlayerCrossfadeToLevelAsync>b__0 addr 0x216657c size 0x2c virtual false final false
 void _SongPlayerCrossfadeToLevelAsync_b__0() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<SongPlayerCrossfadeToLevelAsync>d__24
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5754))
// CS Name: LevelCollectionViewController::<SongPlayerCrossfadeToLevelAsync>d__24
struct CORDL_TYPE ____GlobalNamespace__LevelCollectionViewController___SongPlayerCrossfadeToLevelAsync_d__24 : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to ::System::Runtime::CompilerServices::IAsyncStateMachine
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine() const;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::LevelCollectionViewController", modifiers: "", def_value: None }, CppParam { name: "level", ty: "::GlobalNamespace::IPreviewBeatmapLevel", modifiers: "", def_value: None }, CppParam { name: "__8__1", ty: "::GlobalNamespace::____GlobalNamespace__LevelCollectionViewController____c__DisplayClass24_0", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::AudioClip>", modifiers: "", def_value: None }]
constexpr ____GlobalNamespace__LevelCollectionViewController___SongPlayerCrossfadeToLevelAsync_d__24(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, ::GlobalNamespace::LevelCollectionViewController __4__this, ::GlobalNamespace::IPreviewBeatmapLevel level, ::GlobalNamespace::____GlobalNamespace__LevelCollectionViewController____c__DisplayClass24_0 __8__1, ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::AudioClip> __u__1) noexcept;


                    constexpr ____GlobalNamespace__LevelCollectionViewController___SongPlayerCrossfadeToLevelAsync_d__24(____GlobalNamespace__LevelCollectionViewController___SongPlayerCrossfadeToLevelAsync_d__24 const&) = default;
                    constexpr ____GlobalNamespace__LevelCollectionViewController___SongPlayerCrossfadeToLevelAsync_d__24(____GlobalNamespace__LevelCollectionViewController___SongPlayerCrossfadeToLevelAsync_d__24&&) = default;
                    constexpr ____GlobalNamespace__LevelCollectionViewController___SongPlayerCrossfadeToLevelAsync_d__24& operator=(____GlobalNamespace__LevelCollectionViewController___SongPlayerCrossfadeToLevelAsync_d__24 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____GlobalNamespace__LevelCollectionViewController___SongPlayerCrossfadeToLevelAsync_d__24& operator=(____GlobalNamespace__LevelCollectionViewController___SongPlayerCrossfadeToLevelAsync_d__24&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x48};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__LevelCollectionViewController___SongPlayerCrossfadeToLevelAsync_d__24(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __declspec(property(get=__get___t__builder, put=__set___t__builder))  __t__builder;

constexpr void __set___t__builder(::System::Runtime::CompilerServices::AsyncVoidMethodBuilder value) ;

constexpr ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __get___t__builder() const;

 ::GlobalNamespace::LevelCollectionViewController __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(::GlobalNamespace::LevelCollectionViewController value) ;

constexpr ::GlobalNamespace::LevelCollectionViewController __get___4__this() const;

 ::GlobalNamespace::IPreviewBeatmapLevel __declspec(property(get=__get_level, put=__set_level))  level;

constexpr void __set_level(::GlobalNamespace::IPreviewBeatmapLevel value) ;

constexpr ::GlobalNamespace::IPreviewBeatmapLevel __get_level() const;

 ::GlobalNamespace::____GlobalNamespace__LevelCollectionViewController____c__DisplayClass24_0 __declspec(property(get=__get___8__1, put=__set___8__1))  __8__1;

constexpr void __set___8__1(::GlobalNamespace::____GlobalNamespace__LevelCollectionViewController____c__DisplayClass24_0 value) ;

constexpr ::GlobalNamespace::____GlobalNamespace__LevelCollectionViewController____c__DisplayClass24_0 __get___8__1() const;

 ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::AudioClip> __declspec(property(get=__get___u__1, put=__set___u__1))  __u__1;

constexpr void __set___u__1(::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::AudioClip> value) ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::AudioClip> __get___u__1() const;


// Methods

/// @brief Method MoveNext addr 0x21665a8 size 0x768 virtual true final true
 void MoveNext() ;

/// @brief Method SetStateMachine addr 0x2166d10 size 0xc virtual true final true
 void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::LevelCollectionViewController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13656))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5755))
// CS Name: LevelCollectionViewController
class CORDL_TYPE LevelCollectionViewController : public ::HMUI::ViewController {
public:
// Declarations
using _SongPlayerCrossfadeToLevelAsync_d__24 = ::GlobalNamespace::____GlobalNamespace__LevelCollectionViewController___SongPlayerCrossfadeToLevelAsync_d__24;

using __c__DisplayClass24_0 = ::GlobalNamespace::____GlobalNamespace__LevelCollectionViewController____c__DisplayClass24_0;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xe0};

virtual ~LevelCollectionViewController() = default;

// Ctor Parameters [CppParam { name: "", ty: "LevelCollectionViewController", modifiers: " const&", def_value: None }]
constexpr LevelCollectionViewController(LevelCollectionViewController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LevelCollectionViewController", modifiers: "&&", def_value: None }]
constexpr LevelCollectionViewController(LevelCollectionViewController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LevelCollectionViewController(void* ptr) noexcept : ::HMUI::ViewController(ptr) {
}


  constexpr LevelCollectionViewController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LevelCollectionViewController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LevelCollectionViewController& operator=(LevelCollectionViewController&& o) noexcept = default;
  constexpr LevelCollectionViewController& operator=(LevelCollectionViewController const& o) noexcept = default;
                


// Fields

 ::GlobalNamespace::LevelCollectionTableView __declspec(property(get=__get__levelCollectionTableView, put=__set__levelCollectionTableView))  _levelCollectionTableView;

constexpr void __set__levelCollectionTableView(::GlobalNamespace::LevelCollectionTableView value) ;

constexpr ::GlobalNamespace::LevelCollectionTableView __get__levelCollectionTableView() const;

 ::UnityEngine::RectTransform __declspec(property(get=__get__noDataInfoContainer, put=__set__noDataInfoContainer))  _noDataInfoContainer;

constexpr void __set__noDataInfoContainer(::UnityEngine::RectTransform value) ;

constexpr ::UnityEngine::RectTransform __get__noDataInfoContainer() const;

 ::GlobalNamespace::PlayerDataModel __declspec(property(get=__get__playerDataModel, put=__set__playerDataModel))  _playerDataModel;

constexpr void __set__playerDataModel(::GlobalNamespace::PlayerDataModel value) ;

constexpr ::GlobalNamespace::PlayerDataModel __get__playerDataModel() const;

 ::Zenject::DiContainer __declspec(property(get=__get__container, put=__set__container))  _container;

constexpr void __set__container(::Zenject::DiContainer value) ;

constexpr ::Zenject::DiContainer __get__container() const;

 ::GlobalNamespace::AdditionalContentModel __declspec(property(get=__get__additionalContentModel, put=__set__additionalContentModel))  _additionalContentModel;

constexpr void __set__additionalContentModel(::GlobalNamespace::AdditionalContentModel value) ;

constexpr ::GlobalNamespace::AdditionalContentModel __get__additionalContentModel() const;

 ::GlobalNamespace::SongPreviewPlayer __declspec(property(get=__get__songPreviewPlayer, put=__set__songPreviewPlayer))  _songPreviewPlayer;

constexpr void __set__songPreviewPlayer(::GlobalNamespace::SongPreviewPlayer value) ;

constexpr ::GlobalNamespace::SongPreviewPlayer __get__songPreviewPlayer() const;

 ::GlobalNamespace::PerceivedLoudnessPerLevelModel __declspec(property(get=__get__perceivedLoudnessPerLevelModel, put=__set__perceivedLoudnessPerLevelModel))  _perceivedLoudnessPerLevelModel;

constexpr void __set__perceivedLoudnessPerLevelModel(::GlobalNamespace::PerceivedLoudnessPerLevelModel value) ;

constexpr ::GlobalNamespace::PerceivedLoudnessPerLevelModel __get__perceivedLoudnessPerLevelModel() const;

 ::GlobalNamespace::AudioClipAsyncLoader __declspec(property(get=__get__audioClipAsyncLoader, put=__set__audioClipAsyncLoader))  _audioClipAsyncLoader;

constexpr void __set__audioClipAsyncLoader(::GlobalNamespace::AudioClipAsyncLoader value) ;

constexpr ::GlobalNamespace::AudioClipAsyncLoader __get__audioClipAsyncLoader() const;

 ::System::Action_2<::GlobalNamespace::LevelCollectionViewController,::GlobalNamespace::IPreviewBeatmapLevel> __declspec(property(get=__get_didSelectLevelEvent, put=__set_didSelectLevelEvent))  didSelectLevelEvent;

constexpr void __set_didSelectLevelEvent(::System::Action_2<::GlobalNamespace::LevelCollectionViewController,::GlobalNamespace::IPreviewBeatmapLevel> value) ;

constexpr ::System::Action_2<::GlobalNamespace::LevelCollectionViewController,::GlobalNamespace::IPreviewBeatmapLevel> __get_didSelectLevelEvent() const;

 ::System::Action_1<::GlobalNamespace::LevelCollectionViewController> __declspec(property(get=__get_didSelectHeaderEvent, put=__set_didSelectHeaderEvent))  didSelectHeaderEvent;

constexpr void __set_didSelectHeaderEvent(::System::Action_1<::GlobalNamespace::LevelCollectionViewController> value) ;

constexpr ::System::Action_1<::GlobalNamespace::LevelCollectionViewController> __get_didSelectHeaderEvent() const;

 bool __declspec(property(get=__get__showHeader, put=__set__showHeader))  _showHeader;

constexpr void __set__showHeader(bool value) ;

constexpr bool __get__showHeader() const;

 ::StringW __declspec(property(get=__get__songPlayerCrossFadingToLevelId, put=__set__songPlayerCrossFadingToLevelId))  _songPlayerCrossFadingToLevelId;

constexpr void __set__songPlayerCrossFadingToLevelId(::StringW value) ;

constexpr ::StringW __get__songPlayerCrossFadingToLevelId() const;

 ::UnityEngine::GameObject __declspec(property(get=__get__noDataInfoGO, put=__set__noDataInfoGO))  _noDataInfoGO;

constexpr void __set__noDataInfoGO(::UnityEngine::GameObject value) ;

constexpr ::UnityEngine::GameObject __get__noDataInfoGO() const;

 ::GlobalNamespace::IPreviewBeatmapLevel __declspec(property(get=__get__previewBeatmapLevelToBeSelected, put=__set__previewBeatmapLevelToBeSelected))  _previewBeatmapLevelToBeSelected;

constexpr void __set__previewBeatmapLevelToBeSelected(::GlobalNamespace::IPreviewBeatmapLevel value) ;

constexpr ::GlobalNamespace::IPreviewBeatmapLevel __get__previewBeatmapLevelToBeSelected() const;


// Methods

/// @brief Method add_didSelectLevelEvent addr 0x2164078 size 0xb0 virtual false final false
 void add_didSelectLevelEvent(::System::Action_2<::GlobalNamespace::LevelCollectionViewController,::GlobalNamespace::IPreviewBeatmapLevel> value) ;

/// @brief Method remove_didSelectLevelEvent addr 0x2164930 size 0xb0 virtual false final false
 void remove_didSelectLevelEvent(::System::Action_2<::GlobalNamespace::LevelCollectionViewController,::GlobalNamespace::IPreviewBeatmapLevel> value) ;

/// @brief Method add_didSelectHeaderEvent addr 0x2164128 size 0xb0 virtual false final false
 void add_didSelectHeaderEvent(::System::Action_1<::GlobalNamespace::LevelCollectionViewController> value) ;

/// @brief Method remove_didSelectHeaderEvent addr 0x21649e0 size 0xb0 virtual false final false
 void remove_didSelectHeaderEvent(::System::Action_1<::GlobalNamespace::LevelCollectionViewController> value) ;

/// @brief Method SetData addr 0x2164eb0 size 0x390 virtual false final false
 void SetData(::GlobalNamespace::IBeatmapLevelCollection beatmapLevelCollection, ::StringW headerText, ::UnityEngine::Sprite headerSprite, bool sortLevels, ::UnityEngine::GameObject noDataInfoPrefab) ;

/// @brief Method SelectLevel addr 0x21639b0 size 0x34 virtual false final false
 void SelectLevel(::GlobalNamespace::IPreviewBeatmapLevel beatmapLevel) ;

/// @brief Method RefreshFavorites addr 0x2165fcc size 0x30 virtual false final false
 void RefreshFavorites() ;

/// @brief Method DidActivate addr 0x21660e8 size 0x1b0 virtual true final false
 void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling) ;

/// @brief Method DidDeactivate addr 0x2166298 size 0x17c virtual true final false
 void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling) ;

/// @brief Method HandleLevelCollectionTableViewDidSelectLevel addr 0x2166414 size 0x50 virtual false final false
 void HandleLevelCollectionTableViewDidSelectLevel(::GlobalNamespace::LevelCollectionTableView tableView, ::GlobalNamespace::IPreviewBeatmapLevel level) ;

/// @brief Method SongPlayerCrossfadeToLevelAsync addr 0x2166464 size 0xa0 virtual false final false
 void SongPlayerCrossfadeToLevelAsync(::GlobalNamespace::IPreviewBeatmapLevel level) ;

/// @brief Method HandleLevelCollectionTableViewDidSelectPack addr 0x2166504 size 0x44 virtual false final false
 void HandleLevelCollectionTableViewDidSelectPack(::GlobalNamespace::LevelCollectionTableView tableView) ;

/// @brief Method HandleAdditionalContentModelDidInvalidateData addr 0x2166548 size 0x1c virtual false final false
 void HandleAdditionalContentModelDidInvalidateData() ;

// Ctor Parameters []
explicit LevelCollectionViewController() ;

/// @brief Method .ctor addr 0x2166564 size 0x10 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::LevelCollectionViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LevelCollectionViewController, "", "LevelCollectionViewController");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__LevelCollectionViewController____c__DisplayClass24_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__LevelCollectionViewController____c__DisplayClass24_0, "", "LevelCollectionViewController/<>c__DisplayClass24_0");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__LevelCollectionViewController___SongPlayerCrossfadeToLevelAsync_d__24, "", "LevelCollectionViewController/<SongPlayerCrossfadeToLevelAsync>d__24");
